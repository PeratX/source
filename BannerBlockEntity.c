

int __fastcall BannerBlockEntity::setPatternAndColors(int a1, int a2, int *a3, int *a4)
{
  int v4; // r9@1
  int *v5; // r10@1
  int *v6; // r11@1
  int v7; // r4@1
  void *v8; // r8@1
  void *v9; // r0@2
  char *v10; // r4@3
  char *v11; // r5@3
  void **v12; // r8@4
  unsigned int v13; // r7@4
  unsigned int v14; // r6@4
  unsigned int v15; // r3@5
  unsigned int v16; // r3@6
  void *v17; // r9@7
  int *v18; // r7@7
  void *v19; // r0@7
  void *v20; // r0@8
  int *v21; // r8@9
  void *v22; // r0@11
  void *v23; // r0@12
  unsigned int *v24; // r2@15
  signed int v25; // r1@17
  unsigned int *v26; // r2@19
  signed int v27; // r1@21
  unsigned int *v28; // r2@23
  signed int v29; // r1@25
  unsigned int *v30; // r2@27
  signed int v31; // r1@29
  void *v32; // r0@51
  int result; // r0@52
  unsigned int *v34; // r2@55
  signed int v35; // r1@57
  unsigned int *v36; // r2@59
  signed int v37; // r1@61
  int v38; // [sp+Ch] [bp-74h]@3
  int v39; // [sp+10h] [bp-70h]@3
  void *v40; // [sp+14h] [bp-6Ch]@3
  int *v41; // [sp+18h] [bp-68h]@4
  int v42; // [sp+1Ch] [bp-64h]@52
  void *v43; // [sp+20h] [bp-60h]@49
  int v44; // [sp+28h] [bp-58h]@49
  void *v45; // [sp+2Ch] [bp-54h]@9
  int v46; // [sp+34h] [bp-4Ch]@4
  int v47; // [sp+3Ch] [bp-44h]@7
  int v48; // [sp+40h] [bp-40h]@7
  int v49; // [sp+44h] [bp-3Ch]@7
  int v50; // [sp+48h] [bp-38h]@7
  int v51; // [sp+4Ch] [bp-34h]@6
  int v52; // [sp+54h] [bp-2Ch]@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v8);
  if ( v7 != -1 )
  {
    sub_21E94B4((void **)&v52, "customColor");
    CompoundTag::putInt((int)v8, (const void **)&v52, v7);
    v9 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
    {
      v34 = (unsigned int *)(v52 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
      }
      else
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
  }
  v39 = (int)v8;
  v10 = sub_21E77E4(v6, 95, 0);
  v11 = sub_21E77E4(v5, 95, 0);
  v38 = v4;
  v40 = operator new(0x14u);
  ListTag::ListTag((int)v40);
  if ( ((unsigned int)v11 & (unsigned int)v10) != -1 )
    v12 = (void **)&v46;
    v13 = 0;
    v14 = 0;
    v41 = &dword_28898C0;
    do
      v15 = *(_DWORD *)(*v6 - 12);
      if ( v15 < v14 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v14, v15);
      sub_21E9040((void **)&v51, v6, v14, (unsigned int)&v10[-v14]);
      v16 = *(_DWORD *)(*v5 - 12);
      if ( v16 < v13 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v13, v16);
      sub_21E9040((void **)&v50, v5, v13, (unsigned int)&v11[-v13]);
      v17 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v17);
      Util::toInt<int,(void *)0>((unsigned int *)&v51, &v48);
      Util::toInt<int,(void *)0>((unsigned int *)&v50, &v49);
      sub_21E94B4((void **)&v47, "Pattern");
      CompoundTag::putString(
        (int)v17,
        (const void **)&v47,
        (int *)(*(_DWORD *)(BannerPattern::mPatterns + 4 * v48) + 92));
      v18 = v41;
      v19 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != v41 )
        v24 = (unsigned int *)(v47 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v18 = v41;
        }
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      sub_21E94B4(v12, "Color");
      CompoundTag::putInt((int)v17, (const void **)v12, v49);
      v20 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != v18 )
        v26 = (unsigned int *)(v46 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v45 = v17;
      ListTag::add((int)v40, (int *)&v45);
      v21 = v18;
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
      v14 = (unsigned int)(v10 + 1);
      v45 = 0;
      v13 = (unsigned int)(v11 + 1);
      v10 = sub_21E77E4(v6, 95, (unsigned int)(v10 + 1));
      v11 = sub_21E77E4(v5, 95, (unsigned int)(v11 + 1));
      v22 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != v21 )
        v28 = (unsigned int *)(v50 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v41 = v21;
      v23 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != v21 )
        v30 = (unsigned int *)(v51 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v12 = (void **)&v46;
    while ( ((unsigned int)v11 & (unsigned int)v10) != -1 );
  sub_21E94B4((void **)&v44, "Patterns");
  v43 = v40;
  CompoundTag::put(v39, (const void **)&v44, (int *)&v43);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  v43 = 0;
  v32 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v42 = v39;
  ItemInstance::setUserData(v38, &v42);
  result = v42;
  if ( v42 )
    result = (*(int (**)(void))(*(_DWORD *)v42 + 4))();
  return result;
}


void __fastcall BannerBlockEntity::~BannerBlockEntity(BannerBlockEntity *this)
{
  BannerBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &loc_2708F24;
  v2 = (void *)*((_DWORD *)this + 29);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 26);
  if ( v3 )
    operator delete(v3);
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall BannerBlockEntity::getPatterns(BannerBlockEntity *this, const ItemInstance *a2)
{
  const void **v2; // r9@1
  ItemInstance *v3; // r5@1
  int result; // r0@1
  int *v5; // r0@2
  int *v6; // r0@3
  ListTag *v7; // r4@3
  void **v8; // r11@3
  int v9; // r6@3
  const void **v10; // r10@3
  int *v11; // r5@3
  int v12; // r0@6
  const void **v13; // r0@6
  int v14; // r7@6 OVERLAPPED
  int v15; // r8@6 OVERLAPPED
  const void *v16; // r11@7
  const void **v17; // r5@7
  ListTag *v18; // r6@7
  size_t v19; // r10@7
  _BYTE *v20; // r4@8
  _DWORD *v21; // r0@8
  int v22; // r1@11
  const void **v23; // r0@15
  char *v24; // r0@15
  void *v25; // r0@16
  unsigned int *v26; // r2@17
  signed int v27; // r1@19
  unsigned int *v28; // r2@21
  signed int v29; // r1@23
  int v30; // [sp+Ch] [bp-44h]@7
  int v31; // [sp+10h] [bp-40h]@3
  char *v32; // [sp+14h] [bp-3Ch]@15

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  result = ItemInstance::hasUserData(a2);
  if ( result == 1 )
  {
    v5 = (int *)ItemInstance::getUserData(v3);
    result = CompoundTag::contains(*v5, (const void **)&BannerBlockEntity::TAG_PATTERNS);
    if ( result == 1 )
    {
      v6 = (int *)ItemInstance::getUserData(v3);
      v7 = (ListTag *)CompoundTag::getList(*v6, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      v8 = (void **)&v31;
      v9 = 0;
      v10 = (const void **)&BannerBlockEntity::TAG_PATTERN;
      v11 = &dword_28898C0;
      while ( 1 )
      {
        result = ListTag::size(v7);
        if ( v9 >= result )
          break;
        v12 = ListTag::get(v7, v9);
        v13 = CompoundTag::getString(v12, v10);
        *(_QWORD *)&v14 = *(_QWORD *)&BannerPattern::mPatterns;
        if ( BannerPattern::mPatterns == dword_280E154 )
        {
          v22 = 0;
        }
        else
          v16 = *v13;
          v17 = v10;
          v30 = v9;
          v18 = v7;
          v19 = *((_DWORD *)*v13 - 3);
          while ( 1 )
          {
            v20 = *(_BYTE **)v14;
            v21 = *(_DWORD **)(*(_DWORD *)v14 + 92);
            if ( *(v21 - 3) == v19 && !memcmp(v21, v16, v19) )
              break;
            v14 += 4;
            if ( v15 == v14 )
            {
              v22 = 0;
              goto LABEL_14;
            }
          }
          v22 = *v20;
LABEL_14:
          v10 = v17;
          v7 = v18;
          v9 = v30;
          v8 = (void **)&v31;
          v11 = &dword_28898C0;
        Util::toString<unsigned char,(void *)0,(void *)0>(v8, v22);
        v23 = sub_21E7408((const void **)v8, "_", 1u);
        v32 = (char *)*v23;
        *v23 = &unk_28898CC;
        sub_21E72F0(v2, (const void **)&v32);
        v24 = v32 - 12;
        if ( (int *)(v32 - 12) != v11 )
          v28 = (unsigned int *)(v32 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v25 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != v11 )
          v26 = (unsigned int *)(v31 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        ++v9;
      }
    }
  }
  return result;
}


void __fastcall BannerBlockEntity::getColor(BannerBlockEntity *this, int a2, int a3)
{
  BannerBlockEntity::getColor(this, a2, a3);
}


int __fastcall BannerBlockEntity::onUpdatePacket(BannerBlockEntity *this, const CompoundTag *a2, BlockSource *a3)
{
  BlockEntity *v3; // r6@1
  BlockSource *v4; // r4@1
  const CompoundTag *v5; // r5@1

  v3 = this;
  *((_BYTE *)this + 102) = 1;
  v4 = a3;
  v5 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return j_j_j__ZN11BlockEntity14onUpdatePacketERK11CompoundTagR11BlockSource(v3, v5, v4);
}


int __fastcall BannerBlockEntity::setItemValues(BannerBlockEntity *this, const ItemInstance *a2)
{
  BannerBlockEntity *v2; // r10@1
  ItemInstance *v3; // r4@1
  int *v4; // r0@2
  int *v5; // r0@3
  ListTag *v6; // r8@3
  int v7; // r9@4
  int v8; // r6@5
  const void **v9; // r0@5
  char **v10; // r4@5
  int v11; // r7@5
  ListTag *v12; // r11@6
  const void *v13; // r8@6
  size_t v14; // r6@6
  char *v15; // r5@7
  _DWORD *v16; // r0@7
  char v17; // r7@10
  __int64 v18; // r0@14
  void *v19; // r5@16
  int v20; // r1@16
  unsigned int v21; // r2@17
  unsigned int v22; // r4@19
  _BYTE *v23; // r8@22
  char *v24; // r7@24
  int v25; // r7@26
  char v26; // r11@29
  __int64 v27; // r0@29
  void *v28; // r6@31
  int v29; // r1@31
  unsigned int v30; // r2@32
  unsigned int v31; // r5@34
  char *v32; // r7@37
  char *v33; // r4@39
  int v34; // r4@41
  int *v35; // r0@45
  int *v36; // r0@46
  char v37; // r0@46
  ItemInstance *v39; // [sp+4h] [bp-34h]@2
  ListTag *v40; // [sp+8h] [bp-30h]@3
  int v41; // [sp+10h] [bp-28h]@6

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 27) = *((_DWORD *)this + 26);
  *((_DWORD *)this + 30) = *((_DWORD *)this + 29);
  if ( ItemInstance::hasUserData(a2) != 1 )
    goto LABEL_53;
  v39 = v3;
  v4 = (int *)ItemInstance::getUserData(v3);
  if ( CompoundTag::contains(*v4, (const void **)&BannerBlockEntity::TAG_PATTERNS) == 1 )
  {
    v5 = (int *)ItemInstance::getUserData(v3);
    v6 = (ListTag *)CompoundTag::getList(*v5, (const void **)&BannerBlockEntity::TAG_PATTERNS);
    v40 = v6;
    if ( ListTag::size(v6) >= 1 )
    {
      v7 = 0;
      do
      {
        v8 = ListTag::get(v6, v7);
        v9 = CompoundTag::getString(v8, (const void **)&BannerBlockEntity::TAG_PATTERN);
        v11 = dword_280E154;
        v10 = (char **)BannerPattern::mPatterns;
        if ( BannerPattern::mPatterns == dword_280E154 )
        {
          v17 = 0;
        }
        else
          v41 = v8;
          v12 = v6;
          v13 = *v9;
          v14 = *((_DWORD *)*v9 - 3);
          while ( 1 )
          {
            v15 = *v10;
            v16 = (_DWORD *)*((_DWORD *)*v10 + 23);
            if ( *(v16 - 3) == v14 && !memcmp(v16, v13, v14) )
              break;
            ++v10;
            if ( (char **)v11 == v10 )
            {
              v17 = 0;
              goto LABEL_13;
            }
          }
          v17 = *v15;
LABEL_13:
          v8 = v41;
          v6 = v12;
        v18 = *(_QWORD *)((char *)v2 + 108);
        if ( (_DWORD)v18 == HIDWORD(v18) )
          v19 = (void *)*((_DWORD *)v2 + 26);
          HIDWORD(v18) = v18 - (_DWORD)v19;
          if ( (_DWORD)v18 - (_DWORD)v19 == -1 )
            sub_21E5A04("vector::_M_emplace_back_aux");
          v21 = v18 - (_DWORD)v19;
          if ( (void *)v18 == v19 )
            v21 = 1;
          v22 = v21 + v20;
          if ( v21 + v20 < v21 )
            v22 = -1;
          if ( v22 )
            v23 = operator new(v22);
            LODWORD(v18) = *((_QWORD *)v2 + 13) >> 32;
            v19 = (void *)*((_QWORD *)v2 + 13);
          else
            v23 = 0;
          v23[(_DWORD)v18 - (_DWORD)v19] = v17;
          v24 = &v23[v18 - (_DWORD)v19];
          if ( (void *)v18 != v19 )
            _aeabi_memmove(v23, v19);
          v25 = (int)(v24 + 1);
          if ( v19 )
            operator delete(v19);
          *((_DWORD *)v2 + 26) = v23;
          *((_DWORD *)v2 + 27) = v25;
          *((_DWORD *)v2 + 28) = &v23[v22];
          v6 = v40;
          *(_BYTE *)v18 = v17;
          ++*((_DWORD *)v2 + 27);
        v26 = CompoundTag::getInt(v8, (const void **)&BannerBlockEntity::TAG_COLOR);
        v27 = *((_QWORD *)v2 + 15);
        if ( (_DWORD)v27 == HIDWORD(v27) )
          v28 = (void *)*((_DWORD *)v2 + 29);
          HIDWORD(v27) = v27 - (_DWORD)v28;
          if ( (_DWORD)v27 - (_DWORD)v28 == -1 )
          v30 = v27 - (_DWORD)v28;
          if ( (void *)v27 == v28 )
            v30 = 1;
          v31 = v30 + v29;
          if ( v30 + v29 < v30 )
            v31 = -1;
          if ( v31 )
            v32 = (char *)operator new(v31);
            LODWORD(v27) = *(_QWORD *)((char *)v2 + 116) >> 32;
            v28 = (void *)*(_QWORD *)((char *)v2 + 116);
            v32 = 0;
          v33 = &v32[v27 - (_DWORD)v28];
          *v33 = v26;
          if ( (void *)v27 != v28 )
            _aeabi_memmove(v32, v28);
          v34 = (int)(v33 + 1);
          if ( v28 )
            operator delete(v28);
          *((_DWORD *)v2 + 29) = v32;
          *((_DWORD *)v2 + 30) = v34;
          *((_DWORD *)v2 + 31) = &v32[v31];
          *(_BYTE *)v27 = v26;
          ++*((_DWORD *)v2 + 30);
        ++v7;
      }
      while ( v7 < ListTag::size(v6) );
    }
  }
  v3 = v39;
  v35 = (int *)ItemInstance::getUserData(v39);
  if ( CompoundTag::contains(*v35, (const void **)&BannerBlockEntity::TAG_BASE_COLOR) != 1 )
LABEL_53:
    v37 = ItemInstance::getAuxValue(v3) & 0xF;
  else
    v36 = (int *)ItemInstance::getUserData(v39);
    v37 = CompoundTag::getInt(*v36, (const void **)&BannerBlockEntity::TAG_BASE_COLOR);
  *((_BYTE *)v2 + 103) = v37;
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v2);
}


BlockEntity *__fastcall BannerBlockEntity::~BannerBlockEntity(BannerBlockEntity *this)
{
  BannerBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &loc_2708F24;
  v2 = (void *)*((_DWORD *)this + 29);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 26);
  if ( v3 )
    operator delete(v3);
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall BannerBlockEntity::getBaseColor(BannerBlockEntity *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int *v3; // r0@2
  int *v4; // r0@3
  int result; // r0@3

  v2 = this;
  if ( ItemInstance::hasUserData(this) != 1
    || (v3 = (int *)ItemInstance::getUserData(v2),
        CompoundTag::contains(*v3, (const void **)&BannerBlockEntity::TAG_BASE_COLOR) != 1) )
  {
    result = ItemInstance::getAuxValue(v2) & 0xF;
  }
  else
    v4 = (int *)ItemInstance::getUserData(v2);
    result = j_j_j__ZNK11CompoundTag6getIntERKSs_1(*v4, (const void **)&BannerBlockEntity::TAG_BASE_COLOR);
  return result;
}


void __fastcall BannerBlockEntity::~BannerBlockEntity(BannerBlockEntity *this)
{
  BannerBlockEntity::~BannerBlockEntity(this);
}


void __fastcall BannerBlockEntity::getColor(BannerBlockEntity *this, int a2, int a3)
{
  __asm { VLDR            S8, =0.0039216 }
  _R1 = DyePowderItem::COLOR_RGB[*(_BYTE *)(*(_DWORD *)(a2 + 116) + a3)];
  _R2 = (unsigned __int16)_R1 >> 8;
  _R3 = (_R1 >> 16) & 0xFF;
  __asm { VMOV            S0, R3 }
  _R3 = (unsigned __int8)_R1;
  _R1 >>= 24;
  __asm
  {
    VMOV            S2, R2
    VMOV            S4, R3
    VMOV            S6, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
  }
}


signed int __fastcall BannerBlockEntity::getPatternCount(BannerBlockEntity *this, const ItemInstance *a2)
{
  char *v2; // r0@1
  int *v3; // r4@1
  int v4; // r0@1
  ListTag *v5; // r0@3
  signed int result; // r0@3

  v2 = ItemInstance::getUserData(this);
  v3 = (int *)v2;
  v4 = *(_DWORD *)v2;
  if ( v4 && CompoundTag::contains(v4, (const void **)&BannerBlockEntity::TAG_PATTERNS) == 1 )
  {
    v5 = (ListTag *)CompoundTag::getList(*v3, (const void **)&BannerBlockEntity::TAG_PATTERNS);
    result = j_j_j__ZNK7ListTag4sizeEv_1(v5);
  }
  else
    result = 0;
  return result;
}


ListTag *__fastcall BannerBlockEntity::load(BannerBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BannerBlockEntity *v3; // r9@1
  ListTag *result; // r0@1
  ListTag *v5; // r4@1
  int v6; // r11@3
  int v7; // r10@4
  const void **v8; // r0@4
  char **v9; // r4@4
  int v10; // r7@4
  const void *v11; // r8@5
  size_t v12; // r6@5
  char *v13; // r5@6
  _DWORD *v14; // r0@6
  char v15; // r8@9
  __int64 v16; // r0@11
  void *v17; // r7@13
  int v18; // r1@13
  unsigned int v19; // r2@14
  unsigned int v20; // r5@16
  char *v21; // r6@19
  char *v22; // r4@21
  int v23; // r4@23
  char v24; // r10@26
  __int64 v25; // r0@26
  void *v26; // r7@28
  int v27; // r1@28
  unsigned int v28; // r2@29
  unsigned int v29; // r5@31
  char *v30; // r6@34
  char *v31; // r4@36
  int v32; // r8@38
  ListTag *v33; // [sp+8h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  *((_BYTE *)v3 + 103) = CompoundTag::getInt((int)v2, (const void **)&BannerBlockEntity::TAG_BASE_COLOR);
  *((_DWORD *)v3 + 27) = *((_DWORD *)v3 + 26);
  *((_DWORD *)v3 + 30) = *((_DWORD *)v3 + 29);
  result = (ListTag *)CompoundTag::getList((int)v2, (const void **)&BannerBlockEntity::TAG_PATTERNS);
  v5 = result;
  v33 = result;
  if ( result )
  {
    result = (ListTag *)ListTag::size(result);
    if ( (signed int)result >= 1 )
    {
      v6 = 0;
      do
      {
        v7 = ListTag::get(v5, v6);
        v8 = CompoundTag::getString(v7, (const void **)&BannerBlockEntity::TAG_PATTERN);
        v10 = dword_280E154;
        v9 = (char **)BannerPattern::mPatterns;
        if ( BannerPattern::mPatterns == dword_280E154 )
        {
LABEL_9:
          v15 = 0;
        }
        else
          v11 = *v8;
          v12 = *((_DWORD *)*v8 - 3);
          while ( 1 )
          {
            v13 = *v9;
            v14 = (_DWORD *)*((_DWORD *)*v9 + 23);
            if ( *(v14 - 3) == v12 && !memcmp(v14, v11, v12) )
              break;
            ++v9;
            if ( (char **)v10 == v9 )
              goto LABEL_9;
          }
          v15 = *v13;
        v16 = *(_QWORD *)((char *)v3 + 108);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          v17 = (void *)*((_DWORD *)v3 + 26);
          HIDWORD(v16) = v16 - (_DWORD)v17;
          if ( (_DWORD)v16 - (_DWORD)v17 == -1 )
            sub_21E5A04("vector::_M_emplace_back_aux");
          v19 = v16 - (_DWORD)v17;
          if ( (void *)v16 == v17 )
            v19 = 1;
          v20 = v19 + v18;
          if ( v19 + v18 < v19 )
            v20 = -1;
          if ( v20 )
            v21 = (char *)operator new(v20);
            LODWORD(v16) = *((_QWORD *)v3 + 13) >> 32;
            v17 = (void *)*((_QWORD *)v3 + 13);
          else
            v21 = 0;
          v22 = &v21[v16 - (_DWORD)v17];
          *v22 = v15;
          if ( (void *)v16 != v17 )
            _aeabi_memmove(v21, v17);
          v23 = (int)(v22 + 1);
          if ( v17 )
            operator delete(v17);
          *((_DWORD *)v3 + 26) = v21;
          *((_DWORD *)v3 + 27) = v23;
          *((_DWORD *)v3 + 28) = &v21[v20];
          *(_BYTE *)v16 = v15;
          ++*((_DWORD *)v3 + 27);
        v24 = CompoundTag::getInt(v7, (const void **)&BannerBlockEntity::TAG_COLOR);
        v25 = *((_QWORD *)v3 + 15);
        if ( (_DWORD)v25 == HIDWORD(v25) )
          v26 = (void *)*((_DWORD *)v3 + 29);
          HIDWORD(v25) = v25 - (_DWORD)v26;
          if ( (_DWORD)v25 - (_DWORD)v26 == -1 )
          v28 = v25 - (_DWORD)v26;
          if ( (void *)v25 == v26 )
            v28 = 1;
          v29 = v28 + v27;
          if ( v28 + v27 < v28 )
            v29 = -1;
          if ( v29 )
            v30 = (char *)operator new(v29);
            LODWORD(v25) = *(_QWORD *)((char *)v3 + 116) >> 32;
            v26 = (void *)*(_QWORD *)((char *)v3 + 116);
            v30 = 0;
          v31 = &v30[v25 - (_DWORD)v26];
          *v31 = v24;
          if ( (void *)v25 != v26 )
            _aeabi_memmove(v30, v26);
          v32 = (int)(v31 + 1);
          v5 = v33;
          if ( v26 )
            operator delete(v26);
          *((_DWORD *)v3 + 29) = v30;
          *((_DWORD *)v3 + 30) = v32;
          *((_DWORD *)v3 + 31) = &v30[v29];
          *(_BYTE *)v25 = v24;
          ++*((_DWORD *)v3 + 30);
        ++v6;
        result = (ListTag *)ListTag::size(v5);
      }
      while ( v6 < (signed int)result );
    }
  }
  return result;
}


void __fastcall BannerBlockEntity::getBaseColor(BannerBlockEntity *this, int a2)
{
  BannerBlockEntity::getBaseColor(this, a2);
}


int __fastcall BannerBlockEntity::getColors(BannerBlockEntity *this, const ItemInstance *a2)
{
  const void **v2; // r4@1
  ItemInstance *v3; // r5@1
  int result; // r0@1
  int *v5; // r0@2
  int *v6; // r0@3
  ListTag *v7; // r5@3
  int i; // r6@3
  int v9; // r0@6
  int v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  int v18; // [sp+8h] [bp-40h]@6
  char *v19; // [sp+Ch] [bp-3Ch]@6

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  result = ItemInstance::hasUserData(a2);
  if ( result == 1 )
  {
    v5 = (int *)ItemInstance::getUserData(v3);
    result = CompoundTag::contains(*v5, (const void **)&BannerBlockEntity::TAG_PATTERNS);
    if ( result == 1 )
    {
      v6 = (int *)ItemInstance::getUserData(v3);
      v7 = (ListTag *)CompoundTag::getList(*v6, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      for ( i = 0; ; ++i )
      {
        result = ListTag::size(v7);
        if ( i >= result )
          break;
        v9 = ListTag::get(v7, i);
        v10 = CompoundTag::getInt(v9, (const void **)&BannerBlockEntity::TAG_COLOR);
        Util::toString<int,(void *)0,(void *)0>((void **)&v18, v10);
        v11 = sub_21E7408((const void **)&v18, "_", 1u);
        v19 = (char *)*v11;
        *v11 = &unk_28898CC;
        sub_21E72F0(v2, (const void **)&v19);
        v12 = v19 - 12;
        if ( (int *)(v19 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v19 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        }
        v13 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v18 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
      }
    }
  }
  return result;
}


void __fastcall BannerBlockEntity::getBaseColor(BannerBlockEntity *this, int a2)
{
  __asm { VLDR            S8, =0.0039216 }
  _R1 = DyePowderItem::COLOR_RGB[*(_BYTE *)(a2 + 103)];
  _R2 = (unsigned __int16)_R1 >> 8;
  _R3 = (_R1 >> 16) & 0xFF;
  __asm { VMOV            S0, R3 }
  _R3 = (unsigned __int8)_R1;
  _R1 >>= 24;
  __asm
  {
    VMOV            S2, R2
    VMOV            S4, R3
    VMOV            S6, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
  }
}


int __fastcall BannerBlockEntity::tick(BannerBlockEntity *this, BlockSource *a2)
{
  BannerBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  signed int v5; // r2@2
  unsigned __int8 v12; // [sp+4h] [bp-14h]@2

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 102) )
  {
    BlockSource::getBlockID((BlockSource *)&v12, a2, (int)this + 32);
    _R0 = *((_DWORD *)v2 + 9);
    v5 = 1;
    if ( v12 == *(_BYTE *)(Block::mStandingBanner + 4) )
      v5 = 2;
    else
      --_R0;
    __asm { VMOV            S0, R0 }
    _R0 = *((_DWORD *)v2 + 9) + v5;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VSTR            S0, [R5,#0x30]
      VSTR            S2, [R5,#0x3C]
    }
    *((_BYTE *)v2 + 102) = 0;
  }
  return BlockEntity::tick(v2, v3);
}


int __fastcall BannerBlockEntity::BannerBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Banner");
  BlockEntity::BlockEntity(v3, 28, v2);
  v4 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &loc_2708F24;
  *(_BYTE *)(v3 + 102) = 1;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  *(_DWORD *)(v3 + 120) = 0;
  *(_DWORD *)(v3 + 124) = 0;
  *(_DWORD *)(v3 + 84) = 17;
  return v3;
}


signed int __fastcall BannerBlockEntity::save(BannerBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  BannerBlockEntity *v3; // r6@1
  ListTag *v4; // r4@1
  unsigned int v5; // r10@2
  void *v6; // r5@3
  CompoundTag *v8; // [sp+0h] [bp-30h]@1
  ListTag *v9; // [sp+4h] [bp-2Ch]@7
  void *v10; // [sp+8h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  v8 = a2;
  BlockEntity::save(this, a2);
  CompoundTag::putInt((int)v2, (const void **)&BannerBlockEntity::TAG_BASE_COLOR, *((_BYTE *)v3 + 103));
  v4 = (ListTag *)operator new(0x14u);
  ListTag::ListTag((int)v4);
  if ( *((_QWORD *)v3 + 13) >> 32 != (unsigned int)*((_QWORD *)v3 + 13) )
  {
    v5 = 0;
    do
    {
      v6 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v6);
      CompoundTag::putString(
        (int)v6,
        (const void **)&BannerBlockEntity::TAG_PATTERN,
        (int *)(*(_DWORD *)(BannerPattern::mPatterns + 4 * *(_BYTE *)(*((_DWORD *)v3 + 26) + v5)) + 92));
      CompoundTag::putInt((int)v6, (const void **)&BannerBlockEntity::TAG_COLOR, *(_BYTE *)(*((_DWORD *)v3 + 29) + v5));
      v10 = v6;
      ListTag::add((int)v4, (int *)&v10);
      if ( v10 )
        (*(void (__cdecl **)(void *))(*(_DWORD *)v10 + 4))(v10);
      ++v5;
      v10 = 0;
    }
    while ( v5 < (unsigned int)((*((_QWORD *)v3 + 13) >> 32) - *((_QWORD *)v3 + 13)) );
  }
  if ( ListTag::size(v4) < 1 )
    (*(void (__fastcall **)(ListTag *))(*(_DWORD *)v4 + 4))(v4);
  else
    v9 = v4;
    CompoundTag::put((int)v8, (const void **)&BannerBlockEntity::TAG_PATTERNS, (int *)&v9);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v9 = 0;
  return 1;
}


CompoundTag *__fastcall BannerBlockEntity::getUpdatePacket(BannerBlockEntity *this, BlockSource *a2)
{
  BannerBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
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
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


int __fastcall BannerBlockEntity::onPlace(BannerBlockEntity *this, BlockSource *a2)
{
  *((_BYTE *)this + 102) = 1;
  return j_j_j__ZN11BlockEntity7onPlaceER11BlockSource(this, a2);
}


signed int __fastcall BannerBlockEntity::removeLastPattern(BannerBlockEntity *this, ItemInstance *a2, Player *a3)
{
  Entity *v3; // r8@1
  ItemInstance *v4; // r4@1
  int *v5; // r0@2
  ListTag *v6; // r4@3
  void *v7; // r11@3
  signed int v8; // r0@4
  int v9; // r9@4
  const void **v10; // r0@4
  int v11; // r6@4
  int v12; // r7@4
  const void *v13; // r10@5
  size_t v14; // r5@5
  _BYTE *v15; // r4@6
  _DWORD *v16; // r0@6
  int v17; // r10@9
  signed int v18; // r4@10
  void *v19; // r0@13
  int v20; // r4@14
  void *v21; // r0@14
  int v22; // r5@15
  int v23; // r6@15
  signed int v24; // r0@15
  void *v25; // r0@15
  void *v26; // r0@16
  void *v27; // r0@17
  ListTag *v28; // r5@18
  int v29; // r4@19
  ListTag *v30; // r7@19
  int v31; // r6@24
  void *v32; // r5@24
  int *v33; // r0@24
  int v34; // r0@24
  void *v35; // r4@28
  int v36; // r0@31
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  int *v48; // [sp+Ch] [bp-9Ch]@3
  ItemInstance *v49; // [sp+10h] [bp-98h]@3
  ListTag *v50; // [sp+14h] [bp-94h]@4
  int v51; // [sp+18h] [bp-90h]@25
  void *v52; // [sp+1Ch] [bp-8Ch]@32
  void *v53; // [sp+20h] [bp-88h]@28
  void *v54; // [sp+24h] [bp-84h]@20
  void **v55; // [sp+28h] [bp-80h]@15
  int v56; // [sp+60h] [bp-48h]@17
  int v57; // [sp+64h] [bp-44h]@16
  int v58; // [sp+68h] [bp-40h]@15
  int v59; // [sp+74h] [bp-34h]@14
  int v60; // [sp+7Ch] [bp-2Ch]@4

  v3 = a2;
  v4 = this;
  if ( ItemInstance::hasUserData(this) == 1 )
  {
    v5 = (int *)ItemInstance::getUserData(v4);
    if ( CompoundTag::contains(*v5, (const void **)&BannerBlockEntity::TAG_PATTERNS) == 1 )
    {
      v49 = v4;
      v48 = (int *)ItemInstance::getUserData(v4);
      v6 = (ListTag *)CompoundTag::getList(*v48, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      v7 = operator new(0x14u);
      ListTag::ListTag((int)v7);
      if ( ListTag::size(v6) >= 1 )
      {
        v50 = v6;
        v8 = ListTag::size(v6);
        v9 = ListTag::get(v6, v8 - 1);
        sub_21E94B4((void **)&v60, "Pattern");
        v10 = CompoundTag::getString(v9, (const void **)&v60);
        v11 = dword_280E154;
        v12 = BannerPattern::mPatterns;
        if ( BannerPattern::mPatterns == dword_280E154 )
        {
LABEL_9:
          v17 = 0;
        }
        else
          v13 = *v10;
          v14 = *((_DWORD *)*v10 - 3);
          while ( 1 )
          {
            v15 = *(_BYTE **)v12;
            v16 = *(_DWORD **)(*(_DWORD *)v12 + 92);
            if ( *(v16 - 3) == v14 && !memcmp(v16, v13, v14) )
              break;
            v12 += 4;
            if ( v11 == v12 )
              goto LABEL_9;
          }
          v17 = *v15;
        v19 = (void *)(v60 - 12);
        if ( (int *)(v60 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v60 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
          else
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        sub_21E94B4((void **)&v59, "Color");
        v20 = CompoundTag::getInt(v9, (const void **)&v59);
        v21 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v59 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        v22 = ItemInstance::getId(v49);
        v23 = ItemInstance::getAuxValue(v49);
        v24 = ListTag::size(v50);
        EventPacket::EventPacket((int)&v55, v3, v22, v23, v24 - 1, v17, v20);
        (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v3 + 1448))(v3, &v55);
        v6 = v50;
        v55 = &off_26E9D30;
        v25 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v58 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v57 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v56 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
      }
      v28 = v6;
      if ( ListTag::size(v6) < 2 )
        v51 = 0;
        ItemInstance::setUserData((int)v49, &v51);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
      else
        v29 = 0;
        v30 = v28;
        while ( v29 < ListTag::size(v30) - 1 )
          v31 = ListTag::get(v30, v29);
          v32 = operator new(0x1Cu);
          CompoundTag::CompoundTag((int)v32);
          v33 = (int *)CompoundTag::getString(v31, (const void **)&BannerBlockEntity::TAG_PATTERN);
          CompoundTag::putString((int)v32, (const void **)&BannerBlockEntity::TAG_PATTERN, v33);
          v34 = CompoundTag::getInt(v31, (const void **)&BannerBlockEntity::TAG_COLOR);
          CompoundTag::putInt((int)v32, (const void **)&BannerBlockEntity::TAG_COLOR, v34);
          v54 = v32;
          ListTag::add((int)v7, (int *)&v54);
          if ( v54 )
            (*(void (**)(void))(*(_DWORD *)v54 + 4))();
          ++v29;
          v54 = 0;
        v35 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v35);
        v53 = v7;
        CompoundTag::put((int)v35, (const void **)&BannerBlockEntity::TAG_PATTERNS, (int *)&v53);
        v28 = v30;
        if ( v53 )
          (*(void (**)(void))(*(_DWORD *)v53 + 4))();
        v53 = 0;
        if ( CompoundTag::contains(*v48, (const void **)&BannerBlockEntity::TAG_BASE_COLOR) == 1 )
          v36 = CompoundTag::getInt(*v48, (const void **)&BannerBlockEntity::TAG_BASE_COLOR);
          CompoundTag::putInt((int)v35, (const void **)&BannerBlockEntity::TAG_BASE_COLOR, v36);
        v52 = v35;
        ItemInstance::setUserData((int)v49, (int *)&v52);
        if ( v52 )
          (*(void (**)(void))(*(_DWORD *)v52 + 4))();
        v7 = 0;
        v52 = 0;
      v18 = 0;
      if ( ListTag::size(v28) > 0 )
        v18 = 1;
      if ( v7 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v7 + 4))(v7);
    }
    else
  }
  else
    v18 = 0;
  return v18;
}
