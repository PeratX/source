

int __fastcall CauldronBlockEntity::mixDyes(CauldronBlockEntity *this)
{
  CauldronBlockEntity *v1; // r4@1
  bool v2; // zf@1
  bool v3; // zf@5
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@2
  int v7; // [sp+8h] [bp-18h]@5
  int v8; // [sp+Ch] [bp-14h]@6

  v1 = this;
  CauldronBlockEntity::getMixDyeColor((CauldronBlockEntity *)&v5, (int)this);
  v2 = (v5 & 0x7FFFFFFF) == 0;
  if ( !(v5 & 0x7FFFFFFF) )
    v2 = (v6 & 0x7FFFFFFF) == 0;
  if ( !v2 )
    goto LABEL_14;
  v3 = (v7 & 0x7FFFFFFF) == 0;
  if ( !(v7 & 0x7FFFFFFF) )
    v3 = (v8 & 0x7FFFFFFF) == 0;
  if ( v3 )
  {
    *((_BYTE *)v1 + 224) = 0;
  }
  else
LABEL_14:
    *((_BYTE *)v1 + 224) = 1;
    *((_DWORD *)v1 + 57) = Color::toARGB((Color *)&v5);
  BlockEntity::setChanged(v1);
  (*(void (__fastcall **)(CauldronBlockEntity *, signed int, void *))(*(_DWORD *)v1 + 120))(
    v1,
    2,
    &ItemInstance::EMPTY_ITEM);
    3,
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v1 + 120))(v1, 4, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v1 + 120))(v1, 5, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v1 + 120))(v1, 6, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v1 + 120))(v1, 7, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v1 + 120))(v1, 8, &ItemInstance::EMPTY_ITEM);
  return (*(int (__fastcall **)(CauldronBlockEntity *, signed int, void *))(*(_DWORD *)v1 + 120))(
           v1,
           9,
           &ItemInstance::EMPTY_ITEM);
}


void __fastcall CauldronBlockEntity::getPotionColor(CauldronBlockEntity *this, int a2)
{
  CauldronBlockEntity::getPotionColor(this, a2);
}


void __fastcall CauldronBlockEntity::load(CauldronBlockEntity *this, const CompoundTag *a2)
{
  CauldronBlockEntity::load(this, a2);
}


void __fastcall CauldronBlockEntity::~CauldronBlockEntity(CauldronBlockEntity *this)
{
  CauldronBlockEntity *v1; // r4@1
  signed int v2; // r6@1
  int v3; // r5@2
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  v2 = 720;
  *(_DWORD *)this = &off_2709248;
  *((_DWORD *)this + 26) = &off_27092DC;
  do
  {
    v3 = (int)v1 + v2;
    v4 = *(void **)((char *)v1 + v2 + 212);
    if ( v4 )
      operator delete(v4);
    v5 = *(void **)(v3 + 196);
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v3 + 168);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v2 -= 72;
    *(_DWORD *)(v3 + 168) = 0;
  }
  while ( v2 );
  Container::~Container((CauldronBlockEntity *)((char *)v1 + 104));
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


BlockEntity *__fastcall CauldronBlockEntity::~CauldronBlockEntity(CauldronBlockEntity *this)
{
  CauldronBlockEntity *v1; // r4@1
  signed int v2; // r6@1
  int v3; // r5@2
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  v2 = 720;
  *(_DWORD *)this = &off_2709248;
  *((_DWORD *)this + 26) = &off_27092DC;
  do
  {
    v3 = (int)v1 + v2;
    v4 = *(void **)((char *)v1 + v2 + 212);
    if ( v4 )
      operator delete(v4);
    v5 = *(void **)(v3 + 196);
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v3 + 168);
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v2 -= 72;
    *(_DWORD *)(v3 + 168) = 0;
  }
  while ( v2 );
  Container::~Container((CauldronBlockEntity *)((char *)v1 + 104));
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


signed int __fastcall CauldronBlockEntity::save(CauldronBlockEntity *this, CompoundTag *a2)
{
  ItemInstance *v2; // r8@0
  CompoundTag *v3; // r4@1
  CauldronBlockEntity *v4; // r5@1
  void *v5; // r6@2
  signed int v6; // r9@2
  signed int result; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r4@12
  bool v11; // zf@12
  int v12; // r4@17
  void *v13; // r0@17
  int v14; // r0@18
  void *v15; // r0@25
  void *v16; // r0@26
  void *v17; // r0@27
  void *v18; // r0@29
  unsigned int *v19; // r2@31
  signed int v20; // r1@33
  unsigned int *v21; // r2@35
  signed int v22; // r1@37
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  int v27; // [sp+8h] [bp-60h]@2
  int v28; // [sp+10h] [bp-58h]@29
  int v29; // [sp+18h] [bp-50h]@27
  int v30; // [sp+20h] [bp-48h]@26
  void *v31; // [sp+24h] [bp-44h]@23
  int v32; // [sp+2Ch] [bp-3Ch]@23
  int v33; // [sp+30h] [bp-38h]@18
  int v34; // [sp+38h] [bp-30h]@4
  int v35; // [sp+3Ch] [bp-2Ch]@17
  int v36; // [sp+48h] [bp-20h]@4

  v3 = a2;
  v4 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    v27 = (int)v3;
    v5 = operator new(0x14u);
    ListTag::ListTag((int)v5);
    v6 = 0;
    do
    {
      v10 = (int)v4 + 72 * v6;
      v11 = *(_BYTE *)(v10 + 247) == 0;
      if ( *(_BYTE *)(v10 + 247) )
      {
        v2 = (ItemInstance *)(v10 + 232);
        v11 = *(_DWORD *)(v10 + 232) == 0;
      }
      if ( !v11 && !ItemInstance::isNull(v2) && *(_BYTE *)(v10 + 246) )
        ItemInstance::save((ItemInstance *)&v35, v2);
        v12 = v35;
        sub_21E94B4((void **)&v34, "Slot");
        CompoundTag::putByte(v12, (const void **)&v34, v6);
        v13 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v34 - 4);
          if ( v36 )
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
        v14 = v35;
        v35 = 0;
        v33 = v14;
        ListTag::add((int)v5, &v33);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 4))();
        v33 = 0;
        if ( v35 )
          (*(void (**)(void))(*(_DWORD *)v35 + 4))();
      ++v6;
    }
    while ( v6 < 10 );
    sub_21E94B4((void **)&v32, "Items");
    v31 = v5;
    CompoundTag::put(v27, (const void **)&v32, (int *)&v31);
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    v31 = 0;
    v15 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v30, "PotionId");
    CompoundTag::putShort(v27, (const void **)&v30, *((_WORD *)v4 + 108));
    v16 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v30 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v29, "PotionType");
    CompoundTag::putShort(v27, (const void **)&v29, *((_WORD *)v4 + 110));
    v17 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v29 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    if ( *((_BYTE *)v4 + 224) )
      sub_21E94B4((void **)&v28, "CustomColor");
      CompoundTag::putInt(v27, (const void **)&v28, *((_DWORD *)v4 + 57));
      v18 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v28 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall CauldronBlockEntity::isFinished(CauldronBlockEntity *this)
{
  return 1;
}


void __fastcall CauldronBlockEntity::getColor(CauldronBlockEntity *this, int a2)
{
  int v9; // r3@5
  int v10; // r12@5
  int v11; // r1@5

  if ( *(_DWORD *)(a2 + 216) < 0 )
  {
    if ( *(_BYTE *)(a2 + 224) )
    {
      _R1 = *(_DWORD *)(a2 + 228);
      __asm { VLDR            S6, =0.0039216 }
      _R2 = (_R1 >> 16) & 0xFF;
      _R3 = (unsigned __int16)_R1 >> 8;
      _R1 = (unsigned __int8)_R1;
      __asm
      {
        VMOV            S0, R2
        VMOV            S4, R1
        VMOV            S2, R3
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
      }
      *((_DWORD *)this + 3) = 1065353216;
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S6
        VMUL.F32        S4, S4, S6
        VSTR            S0, [R0]
        VSTR            S2, [R0,#4]
        VSTR            S4, [R0,#8]
    }
    else
      v9 = unk_280E6C4;
      v10 = unk_280E6C8;
      v11 = unk_280E6CC;
      *(_DWORD *)this = CauldronBlockEntity::WATER_COLOR;
      *((_DWORD *)this + 1) = v9;
      *((_DWORD *)this + 2) = v10;
      *((_DWORD *)this + 3) = v11;
  }
  else
    CauldronBlockEntity::getPotionColor(this, a2);
}


int __fastcall CauldronBlockEntity::onChanged(CauldronBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  CauldronBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  BlockPos *v6; // r5@2
  char v7; // [sp+8h] [bp-18h]@2
  char v8; // [sp+9h] [bp-17h]@2
  char v9; // [sp+Ch] [bp-14h]@2
  char v10; // [sp+Dh] [bp-13h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (CauldronBlockEntity *)((char *)v3 + 32);
    BlockSource::getBlockAndData((BlockSource *)&v9, v2, (int)v6);
    v7 = v9;
    v8 = v10;
    result = BlockSource::setBlockAndData((int)v2, v6, (int)&v7, 19, 0);
  }
  return result;
}


int __fastcall CauldronBlockEntity::setCustomColor(CauldronBlockEntity *this, const Color *a2)
{
  BlockEntity *v2; // r4@1
  bool v3; // zf@1
  int v4; // r2@5
  bool v5; // zf@5

  v2 = this;
  v3 = (*(_DWORD *)a2 & 0x7FFFFFFF) == 0;
  if ( !(*(_DWORD *)a2 & 0x7FFFFFFF) )
    v3 = (*((_DWORD *)a2 + 1) & 0x7FFFFFFF) == 0;
  if ( !v3 )
    goto LABEL_14;
  v4 = *((_DWORD *)a2 + 2);
  v5 = (v4 & 0x7FFFFFFF) == 0;
  if ( !(v4 & 0x7FFFFFFF) )
    v5 = (*((_DWORD *)a2 + 3) & 0x7FFFFFFF) == 0;
  if ( v5 )
  {
    *((_BYTE *)this + 224) = 0;
  }
  else
LABEL_14:
    *((_BYTE *)this + 224) = 1;
    *((_DWORD *)this + 57) = Color::toARGB(a2);
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v2);
}


void __fastcall CauldronBlockEntity::~CauldronBlockEntity(CauldronBlockEntity *this)
{
  CauldronBlockEntity::~CauldronBlockEntity(this);
}


void __fastcall CauldronBlockEntity::getColor(CauldronBlockEntity *this, int a2)
{
  CauldronBlockEntity::getColor(this, a2);
}


void __fastcall CauldronBlockEntity::load(CauldronBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  CauldronBlockEntity *v3; // r4@1
  ListTag *v4; // r5@1
  void *v5; // r0@1
  int v6; // r11@4
  int *v7; // r4@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  const CompoundTag *v10; // r8@13
  unsigned int v11; // r10@14
  void *v12; // r0@14
  void (__fastcall *v13)(CauldronBlockEntity *, unsigned int, char *); // ST14_4@16
  void *v14; // r0@24
  int v15; // r5@25
  void *v16; // r0@25
  void *v17; // r0@28
  void *v18; // r0@29
  void *v19; // r0@31
  unsigned int *v20; // r2@33
  signed int v21; // r1@35
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  unsigned int *v24; // r2@41
  signed int v25; // r1@43
  unsigned int *v26; // r2@45
  signed int v27; // r1@47
  unsigned int *v28; // r2@49
  signed int v29; // r1@51
  unsigned int *v30; // r2@69
  signed int v31; // r1@71
  int v32; // [sp+8h] [bp-B8h]@2
  CauldronBlockEntity *v33; // [sp+10h] [bp-B0h]@1
  int v34; // [sp+1Ch] [bp-A4h]@31
  int v35; // [sp+24h] [bp-9Ch]@29
  int v36; // [sp+2Ch] [bp-94h]@28
  int v37; // [sp+34h] [bp-8Ch]@25
  int v38; // [sp+3Ch] [bp-84h]@24
  char v39; // [sp+40h] [bp-80h]@16
  int v40; // [sp+48h] [bp-78h]@20
  void *v41; // [sp+64h] [bp-5Ch]@18
  void *ptr; // [sp+74h] [bp-4Ch]@16
  int v43; // [sp+8Ch] [bp-34h]@5
  int v44; // [sp+94h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  (*(void (__fastcall **)(CauldronBlockEntity *, _DWORD, void *))(*(_DWORD *)v3 + 120))(
    v3,
    0,
    &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(CauldronBlockEntity *, signed int, void *))(*(_DWORD *)v3 + 120))(
    1,
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 2, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 3, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 4, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 5, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 6, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 7, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 8, &ItemInstance::EMPTY_ITEM);
  (*(void (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 120))(v3, 9, &ItemInstance::EMPTY_ITEM);
  sub_21E94B4((void **)&v44, "Items");
  v4 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v44);
  v33 = v3;
  v5 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v32 = (int)v2;
  if ( v4 && ListTag::size(v4) >= 1 )
    v6 = 0;
    v7 = &dword_28898C0;
    do
      v10 = (const CompoundTag *)ListTag::get(v4, v6);
      if ( (*(int (**)(void))(*(_DWORD *)v10 + 24))() == 10 )
      {
        sub_21E94B4((void **)&v43, "Slot");
        v11 = CompoundTag::getByte((int)v10, (const void **)&v43);
        v12 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != v7 )
        {
          v8 = (unsigned int *)(v43 - 4);
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
        if ( v11 <= 9 )
          v13 = *(void (__fastcall **)(CauldronBlockEntity *, unsigned int, char *))(*(_DWORD *)v33 + 120);
          ItemInstance::fromTag((ItemInstance *)&v39, v10);
          v13(v33, v11, &v39);
          if ( ptr )
            operator delete(ptr);
          v7 = &dword_28898C0;
          if ( v41 )
            operator delete(v41);
          if ( v40 )
            (*(void (**)(void))(*(_DWORD *)v40 + 4))();
          v40 = 0;
      }
      ++v6;
    while ( v6 < ListTag::size(v4) );
  sub_21E94B4((void **)&v38, "PotionId");
  *((_DWORD *)v33 + 54) = CompoundTag::getShort(v32, (const void **)&v38);
  v14 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v38 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v37, "IsSplash");
  v15 = CompoundTag::getByte(v32, (const void **)&v37);
  v16 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v37 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( v15 )
    *((_DWORD *)v33 + 55) = 1;
  else
    sub_21E94B4((void **)&v36, "PotionType");
    *((_DWORD *)v33 + 55) = CompoundTag::getShort(v32, (const void **)&v36);
    v17 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v35, "CustomColor");
  *((_BYTE *)v33 + 224) = CompoundTag::contains(v32, (const void **)&v35);
  v18 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v35 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( *((_BYTE *)v33 + 224) )
    sub_21E94B4((void **)&v34, "CustomColor");
    *((_DWORD *)v33 + 57) = CompoundTag::getInt(v32, (const void **)&v34);
    v19 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v34 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
}


int __fastcall CauldronBlockEntity::isSplashPotion(CauldronBlockEntity *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 55);
  if ( result != 1 )
    result = 0;
  return result;
}


signed int __fastcall CauldronBlockEntity::getContainerSize(CauldronBlockEntity *this)
{
  return 10;
}


signed int __fastcall CauldronBlockEntity::getMaxStackSize(CauldronBlockEntity *this)
{
  return 64;
}


int __fastcall CauldronBlockEntity::CauldronBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  unsigned int *v6; // r2@3
  int v7; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v7, "Cauldron");
  BlockEntity::BlockEntity(v3, 16, v2);
  HIDWORD(v4) = v7;
  LODWORD(v4) = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v4) = __ldrex(v6);
      while ( __strex(HIDWORD(v4) - 1, v6) );
    }
    else
      HIDWORD(v4) = (*v6)--;
    if ( SHIDWORD(v4) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v4));
  }
  LODWORD(v4) = v3 + 104;
  Container::Container(v4);
  *(_DWORD *)v3 = &off_2709248;
  *(_DWORD *)(v3 + 104) = &off_27092DC;
  *(_DWORD *)(v3 + 216) = -1;
  *(_BYTE *)(v3 + 224) = 0;
  ItemInstance::ItemInstance(v3 + 232);
  ItemInstance::ItemInstance(v3 + 304);
  ItemInstance::ItemInstance(v3 + 376);
  ItemInstance::ItemInstance(v3 + 448);
  ItemInstance::ItemInstance(v3 + 520);
  ItemInstance::ItemInstance(v3 + 592);
  ItemInstance::ItemInstance(v3 + 664);
  ItemInstance::ItemInstance(v3 + 736);
  ItemInstance::ItemInstance(v3 + 808);
  ItemInstance::ItemInstance(v3 + 880);
  return v3;
}


char *__fastcall CauldronBlockEntity::getItem(CauldronBlockEntity *this, int a2)
{
  return (char *)this + 72 * a2 + 232;
}


signed int __fastcall CauldronBlockEntity::isLingeringPotion(CauldronBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 55);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


int __fastcall CauldronBlockEntity::getCustomColor(int result, int a2)
{
  __int64 v9; // kr00_8@3

  if ( *(_BYTE *)(a2 + 224) )
  {
    _R1 = *(_DWORD *)(a2 + 228);
    __asm { VLDR            S6, =0.0039216 }
    _R2 = (_R1 >> 16) & 0xFF;
    _R3 = (unsigned __int16)_R1 >> 8;
    _R1 = (unsigned __int8)_R1;
    __asm
    {
      VMOV            S0, R2
      VMOV            S4, R1
      VMOV            S2, R3
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    }
    *(_DWORD *)(result + 12) = 1065353216;
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VSTR            S0, [R0]
      VSTR            S2, [R0,#4]
      VSTR            S4, [R0,#8]
  }
  else
    v9 = qword_283E6B8;
    *(_QWORD *)result = *(_QWORD *)&Color::NIL;
    *(_QWORD *)(result + 8) = v9;
  return result;
}


int __fastcall CauldronBlockEntity::setItem(CauldronBlockEntity *this, int a2, const ItemInstance *a3)
{
  BlockEntity *v3; // r6@1
  int v4; // r5@1
  char *v5; // r7@1
  const ItemInstance *v6; // r8@1
  char *v7; // r4@1

  v3 = this;
  v4 = a2;
  v5 = (char *)this + 104;
  v6 = a3;
  v7 = (char *)this + 72 * a2 + 232;
  (*(void (__fastcall **)(char *))(*((_DWORD *)this + 26) + 112))((char *)this + 104);
  ItemInstance::operator=((int)v7, (int)v6);
  BlockEntity::setChanged(v3);
  return (*(int (__fastcall **)(char *, int))(*(_DWORD *)v5 + 84))(v5, v4);
}


int __fastcall CauldronBlockEntity::setPotionType(int result, int a2)
{
  *(_DWORD *)(result + 220) = a2;
  return result;
}


signed int __fastcall CauldronBlockEntity::getMixDyeColor(CauldronBlockEntity *this, int a2)
{
  int v2; // r5@1
  CauldronBlockEntity *v3; // r8@1
  unsigned int v4; // r0@2
  signed int v13; // r6@4
  int v14; // r0@5
  int v15; // r7@5
  signed int result; // r0@5
  unsigned int v18; // r0@11
  int v22; // r2@15
  int v23; // r3@15

  v2 = a2;
  v3 = this;
  if ( *(_BYTE *)(a2 + 224) )
  {
    v4 = *(_DWORD *)(a2 + 228);
    __asm
    {
      VMOV.F32        S16, #1.0
      VLDR            S6, =0.0039216
    }
    _R4 = 1;
    _R2 = (unsigned __int16)v4 >> 8;
    _R1 = (unsigned __int8)v4;
      VMOV            S0, R1
      VMOV            S2, R2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    _R0 = (v4 >> 16) & 0xFF;
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      VMUL.F32        S18, S0, S6
      VMUL.F32        S20, S2, S6
      VMUL.F32        S22, S4, S6
  }
  else
    _R4 = 0;
    _R0 = &Color::BLACK;
      VLDR            S22, [R0]
      VLDR            S20, [R0,#4]
      VLDR            S18, [R0,#8]
      VLDR            S16, [R0,#0xC]
  v13 = 2;
  __asm { VLDR            S24, =0.0039216 }
  do
    v14 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v2 + 116))(v2, v13);
    v15 = v14;
    result = *(_BYTE *)(v14 + 15);
    _ZF = result == 0;
    if ( result )
      result = *(_DWORD *)v15;
      _ZF = *(_DWORD *)v15 == 0;
    if ( !_ZF )
      result = ItemInstance::isNull((ItemInstance *)v15);
      if ( !result )
      {
        result = *(_BYTE *)(v15 + 14);
        if ( *(_BYTE *)(v15 + 14) )
        {
          result = ItemInstance::getId((ItemInstance *)v15);
          if ( result == *(_WORD *)(Item::mDye_powder + 18) )
          {
            v18 = DyePowderItem::COLOR_RGB[ItemInstance::getAuxValue((ItemInstance *)v15)];
            _R1 = *(_BYTE *)(v15 + 14);
            _R2 = (unsigned __int8)v18;
            _R4 += _R1;
            __asm
            {
              VMOV            S0, R1
              VMOV            S2, R2
              VCVT.F32.U32    S0, S0
              VCVT.F32.S32    S2, S2
            }
            _R2 = (unsigned __int16)v18 >> 8;
              VMOV            S6, R2
              VCVT.F32.S32    S6, S6
            result = (v18 >> 16) & 0xFF;
              VMOV            S8, R0
              VMUL.F32        S4, S0, S24
              VMUL.F32        S2, S2, S24
              VCVT.F32.S32    S8, S8
              VMUL.F32        S6, S4, S6
              VMUL.F32        S0, S2, S0
              VMUL.F32        S4, S4, S8
              VADD.F32        S20, S6, S20
              VADD.F32        S18, S0, S18
              VADD.F32        S22, S4, S22
          }
        }
      }
    ++v13;
  while ( v13 != 10 );
  if ( _R4 <= 0 )
    v22 = unk_280E6C4;
    v23 = unk_280E6C8;
    result = unk_280E6CC;
    *(_DWORD *)v3 = CauldronBlockEntity::WATER_COLOR;
    *((_DWORD *)v3 + 1) = v22;
    *((_DWORD *)v3 + 2) = v23;
    *((_DWORD *)v3 + 3) = result;
      VMOV            S2, R4
      VMOV.F32        S0, #1.0
      VDIV.F32        S0, S0, S2
      VMUL.F32        S2, S22, S0
      VMUL.F32        S4, S20, S0
      VMUL.F32        S0, S18, S0
      VSTR            S2, [R8]
      VSTR            S4, [R8,#4]
      VSTR            S0, [R8,#8]
      VSTR            S16, [R8,#0xC]
  return result;
}


CompoundTag *__fastcall CauldronBlockEntity::getUpdatePacket(CauldronBlockEntity *this, BlockSource *a2)
{
  CauldronBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@2
  int v5; // r3@2
  int v6; // r1@2
  int v7; // r2@2
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@2

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  if ( (*(int (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9) == 1 )
  {
    v4 = operator new(0x38u);
    CompoundTag::CompoundTag((int)&v10, (int)&v9);
    v4[1] = 2;
    v4[2] = 1;
    v5 = (int)(v4 + 4);
    *((_BYTE *)v4 + 12) = 0;
    *v4 = &off_26E97EC;
    v6 = *((_DWORD *)v3 + 9);
    v7 = *((_DWORD *)v3 + 10);
    *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
    CompoundTag::~CompoundTag((CompoundTag *)&v10);
    *(_DWORD *)v2 = v4;
  }
  else
    *(_DWORD *)v2 = 0;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


void __fastcall CauldronBlockEntity::getPotionColor(CauldronBlockEntity *this, int a2)
{
  CauldronBlockEntity *v2; // r8@1
  char *v3; // r6@2
  __int64 v4; // r0@2
  __int64 v5; // r2@3
  int v6; // r7@3
  char *v7; // r10@4
  unsigned int v8; // r3@4
  unsigned int v9; // r2@6
  unsigned int v10; // r9@6
  int v11; // r2@13
  int v12; // r3@13
  int v13; // r4@13
  int v14; // r6@13
  char *v15; // r2@13
  int v16; // r2@14
  char *v17; // r3@14
  __int64 v18; // kr00_8@15
  __int64 v19; // r4@15
  char *v20; // r6@18
  int v21; // r4@23
  unsigned int *v22; // r1@24
  unsigned int v23; // r0@26
  unsigned int *v24; // r5@30
  unsigned int v25; // r0@32
  void *ptr; // [sp+4h] [bp-34h]@1
  char *v27; // [sp+8h] [bp-30h]@1
  char *v28; // [sp+Ch] [bp-2Ch]@1
  Potion *v29; // [sp+10h] [bp-28h]@1
  int v30; // [sp+14h] [bp-24h]@23

  v2 = this;
  Potion::getPotion((Potion *)&v29, *(_DWORD *)(a2 + 216));
  ptr = 0;
  v27 = 0;
  v28 = 0;
  if ( v29 )
  {
    v3 = Potion::getMobEffect(v29);
    HIDWORD(v4) = v27;
    if ( v27 == v28 )
    {
      LODWORD(v4) = ptr;
      v7 = 0;
      v8 = (v27 - (_BYTE *)ptr) >> 4;
      if ( !v8 )
        v8 = 1;
      v9 = v8 + ((v27 - (_BYTE *)ptr) >> 4);
      v10 = v8 + ((v27 - (_BYTE *)ptr) >> 4);
      if ( 0 != v9 >> 28 )
        v10 = 0xFFFFFFF;
      if ( v9 < v8 )
      if ( v10 )
      {
        if ( v10 >= 0x10000000 )
          sub_21E57F4();
        v7 = (char *)operator new(16 * v10);
        v4 = *(_QWORD *)&ptr;
      }
      v11 = *(_DWORD *)v3;
      v12 = *((_DWORD *)v3 + 1);
      v13 = *((_DWORD *)v3 + 2);
      v14 = *((_DWORD *)v3 + 3);
      *(_DWORD *)&v7[HIDWORD(v4) - v4] = v11;
      v15 = &v7[HIDWORD(v4) - v4 + 4];
      *(_DWORD *)v15 = v12;
      *((_DWORD *)v15 + 1) = v13;
      *((_DWORD *)v15 + 2) = v14;
      if ( HIDWORD(v4) == (_DWORD)v4 )
        HIDWORD(v4) = v7;
      else
        v16 = v4;
        v17 = v7;
        do
        {
          v18 = *(_QWORD *)v16;
          v19 = *(_QWORD *)(v16 + 8);
          v16 += 16;
          *(_QWORD *)v17 = v18;
          *((_QWORD *)v17 + 1) = v19;
          v17 += 16;
        }
        while ( HIDWORD(v4) != v16 );
        HIDWORD(v4) = &v7[((HIDWORD(v4) - 16 - v4) & 0xFFFFFFF0) + 16];
      v20 = (char *)(HIDWORD(v4) + 16);
      if ( (_DWORD)v4 )
        operator delete((void *)v4);
      ptr = v7;
      v27 = v20;
      v28 = &v7[16 * v10];
    }
    else
      v5 = *(_QWORD *)(v3 + 4);
      v6 = *((_DWORD *)v3 + 3);
      *(_DWORD *)v27 = *(_DWORD *)v3;
      *(_QWORD *)(HIDWORD(v4) + 4) = v5;
      *(_DWORD *)(HIDWORD(v4) + 12) = v6;
      v27 = (char *)(HIDWORD(v4) + 16);
  }
  MobEffectInstance::getColorValue((int)v2, (__int64 *)&ptr);
  if ( ptr )
    operator delete(ptr);
  v21 = v30;
  if ( v30 )
    v22 = (unsigned int *)(v30 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
      if ( &pthread_create )
        __dmb();
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
}
