

void __fastcall EnchantUtils::getEnchantNameAndLevel(EnchantUtils *this, int a2, int a3)
{
  EnchantUtils::getEnchantNameAndLevel(this, a2, a3);
}


void __fastcall EnchantUtils::generateRandomEnchantedBook(EnchantUtils *this, int a2, int a3)
{
  ItemInstance *v3; // r4@1
  int v4; // r6@1
  ItemInstance *v5; // r5@1
  Random *v6; // r0@1
  bool v7; // [sp+0h] [bp-10h]@0

  v3 = this;
  v4 = a3;
  v5 = (ItemInstance *)a2;
  v6 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  if ( v4 > (signed int)v5 )
    v5 = (ItemInstance *)((char *)v5 + Random::_genRandInt32(v6) % (v4 - (signed int)v5));
  if ( v5 )
  {
    ItemInstance::ItemInstance(v3, Item::mEnchanted_book, 1);
    if ( (signed int)v5 >= 1 )
      EnchantUtils::randomlyEnchant(v3, v5, 0, 1, v7);
  }
  else
    ItemInstance::ItemInstance(v3, Item::mBook, 1);
}


int __fastcall EnchantUtils::combineEnchantedItems(EnchantUtils *this, const ItemInstance *a2, const ItemInstance *a3, ItemInstance *a4, bool a5)
{
  const ItemInstance *v5; // r7@1
  EnchantUtils *v6; // r6@1
  ItemInstance *v7; // r8@1
  EnchantUtils *v8; // r5@1
  const ItemEnchants *v9; // r2@2
  int v10; // r6@8
  int v11; // r4@14
  int result; // r0@20
  int v13; // [sp+0h] [bp-90h]@14
  void *v14; // [sp+4h] [bp-8Ch]@18
  void *v15; // [sp+10h] [bp-80h]@16
  void *v16; // [sp+1Ch] [bp-74h]@14
  char v17; // [sp+28h] [bp-68h]@8
  void *v18; // [sp+2Ch] [bp-64h]@12
  void *v19; // [sp+38h] [bp-58h]@10
  void *v20; // [sp+44h] [bp-4Ch]@8
  char v21; // [sp+50h] [bp-40h]@2
  void *v22; // [sp+54h] [bp-3Ch]@6
  void *v23; // [sp+60h] [bp-30h]@4
  void *ptr; // [sp+6Ch] [bp-24h]@2

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  if ( ItemInstance::isEnchanted(a2) == 1 )
  {
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v21, (int)v5);
    EnchantUtils::applyEnchant(v8, (ItemInstance *)&v21, v9);
    if ( ptr )
      operator delete(ptr);
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v17, (int)v6);
    v10 = ItemEnchants::getTotalValue((ItemEnchants *)&v17, (int)v7);
    if ( v20 )
      operator delete(v20);
    if ( v19 )
      operator delete(v19);
    if ( v18 )
      operator delete(v18);
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v13, (int)v8);
    v11 = ItemEnchants::getTotalValue((ItemEnchants *)&v13, (int)v7);
    if ( v16 )
      operator delete(v16);
    if ( v15 )
      operator delete(v15);
    if ( v14 )
      operator delete(v14);
    result = v11 - v10;
  }
  else
    result = 0;
  return result;
}


void __fastcall EnchantUtils::getAvailableEnchantmentResults(EnchantUtils *this, const Item *a2, int a3, int a4)
{
  EnchantUtils::getAvailableEnchantmentResults(this, a2, a3, a4);
}


int __fastcall EnchantUtils::getEnchantLevel(EnchantUtils *this, int a2, const ItemInstance *a3)
{
  int v3; // r5@1
  EnchantUtils *v4; // r4@1
  int v5; // r4@2
  int v7; // [sp+0h] [bp-38h]@2
  void *v8; // [sp+4h] [bp-34h]@6
  void *v9; // [sp+10h] [bp-28h]@4
  void *ptr; // [sp+1Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  if ( ItemInstance::isEnchanted((ItemInstance *)a2) == 1 )
  {
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v7, v3);
    v5 = ItemEnchants::hasEnchant((ItemEnchants *)&v7, (int)v4);
    if ( ptr )
      operator delete(ptr);
    if ( v9 )
      operator delete(v9);
    if ( v8 )
      operator delete(v8);
  }
  else
    v5 = 0;
  return v5;
}


int __fastcall EnchantUtils::generateEnchantedBook(EnchantUtils *this, const ItemEnchants *a2)
{
  EnchantUtils *v2; // r4@1
  ItemInstance *v3; // r5@1
  const ItemEnchants *v4; // r2@1

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance(this, Item::mBook, 1);
  return EnchantUtils::applyEnchant(v2, v3, v4);
}


void __fastcall EnchantUtils::canEnchant(EnchantUtils *this, const ItemInstance *a2, __int64 a3)
{
  EnchantUtils::canEnchant(this, a2, a3);
}


int __fastcall EnchantUtils::determineCompatibility(EnchantUtils *this, int a2)
{
  int result; // r0@2

  if ( (unsigned int)this <= 0x1A )
    result = dword_262E500[(signed int)this];
  else
    result = 0;
  return result;
}


int __fastcall EnchantUtils::getBookCasePositions(EnchantUtils *this, BlockSource *a2, const Vec3 *a3)
{
  BlockSource *v4; // r6@1
  EnchantUtils *v5; // r4@1
  char *v6; // r0@1
  int result; // r0@22
  EnchantUtils *v14; // [sp+0h] [bp-F0h]@1
  unsigned __int8 v15; // [sp+4h] [bp-ECh]@19
  char v16; // [sp+8h] [bp-E8h]@19
  unsigned __int8 v17; // [sp+14h] [bp-DCh]@17
  char v18; // [sp+18h] [bp-D8h]@17
  unsigned __int8 v19; // [sp+24h] [bp-CCh]@15
  char v20; // [sp+28h] [bp-C8h]@15
  unsigned __int8 v21; // [sp+34h] [bp-BCh]@13
  char v22; // [sp+38h] [bp-B8h]@13
  unsigned __int8 v23; // [sp+44h] [bp-ACh]@8
  char v24; // [sp+48h] [bp-A8h]@8
  unsigned __int8 v25; // [sp+54h] [bp-9Ch]@6
  char v26; // [sp+58h] [bp-98h]@6
  float v27; // [sp+64h] [bp-8Ch]@5
  char v28; // [sp+70h] [bp-80h]@5
  float v29; // [sp+7Ch] [bp-74h]@4
  int v30; // [sp+80h] [bp-70h]@4
  char v31; // [sp+88h] [bp-68h]@4
  float v32; // [sp+94h] [bp-5Ch]@4
  int v33; // [sp+98h] [bp-58h]@4
  int v34; // [sp+9Ch] [bp-54h]@4

  _R5 = a3;
  v4 = a2;
  v5 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = (char *)operator new(0x180u);
  *(_DWORD *)v5 = v6;
  *((_DWORD *)v5 + 1) = v6;
  __asm { VMOV.F32        S16, #1.0 }
  _R8 = -1;
  *((_DWORD *)v5 + 2) = v6 + 384;
  v14 = v5;
  do
  {
    __asm { VMOV            S0, R8 }
    _R4 = -1;
    __asm
    {
      VCVT.F32.S32    S18, S0
      VADD.F32        S20, S18, S18
    }
    do
      __asm
      {
        VMOV            S0, R4
        VCVT.F32.S32    S22, S0
      }
      if ( !_ZF )
        v32 = 0.0;
        v33 = 0;
        v34 = 0;
        __asm
        {
          VLDR            S0, [R5]
          VLDR            S2, [R5,#8]
          VADD.F32        S0, S0, S22
          VADD.F32        S2, S2, S18
          VSTR            S0, [SP,#0xF0+var_74]
        }
        v30 = *((_DWORD *)_R5 + 1);
        __asm { VSTR            S2, [SP,#0xF0+var_6C] }
        BlockPos::BlockPos((int)&v31, (int)&v29);
        if ( BlockSource::allowsRunes(v4, (const BlockPos *)&v31) == 1 )
          __asm
          {
            VLDR            S0, [R5]
            VLDR            S2, [R5,#4]
            VLDR            S4, [R5,#8]
            VADD.F32        S0, S0, S22
            VADD.F32        S2, S2, S16
            VADD.F32        S4, S4, S18
            VSTR            S0, [SP,#0xF0+var_8C]
            VSTR            S2, [SP,#0xF0+var_88]
            VSTR            S4, [SP,#0xF0+var_84]
          }
          BlockPos::BlockPos((int)&v28, (int)&v27);
          if ( BlockSource::allowsRunes(v4, (const BlockPos *)&v28) == 1 )
            __asm
            {
              VADD.F32        S24, S22, S22
              VLDR            S0, [R5]
              VLDR            S2, [R5,#8]
              VADD.F32        S2, S2, S20
              VADD.F32        S0, S0, S24
              VSTR            S0, [SP,#0xF0+var_5C]
            }
            v33 = *((_DWORD *)_R5 + 1);
            __asm { VSTR            S2, [SP,#0xF0+var_54] }
            BlockPos::BlockPos((int)&v26, (int)&v32);
            BlockSource::getBlockAndData((BlockSource *)&v25, v4, (int)&v26);
            if ( v25 == *(_BYTE *)(Block::mBookshelf + 4) )
              std::vector<Vec3,std::allocator<Vec3>>::push_back(__PAIR__(&v32, (unsigned int)v14));
              VLDR            S2, [R5,#4]
              VLDR            S4, [R5,#8]
              VADD.F32        S2, S2, S16
              VADD.F32        S4, S4, S20
              VSTR            S2, [SP,#0xF0+var_58]
              VSTR            S4, [SP,#0xF0+var_54]
            BlockPos::BlockPos((int)&v24, (int)&v32);
            BlockSource::getBlockAndData((BlockSource *)&v23, v4, (int)&v24);
            if ( v23 == *(_BYTE *)(Block::mBookshelf + 4) )
            _ZF = _R8 == 0;
            if ( _R8 )
              _ZF = _R4 == 0;
            if ( !_ZF )
              __asm
              {
                VLDR            S0, [R5]
                VLDR            S2, [R5,#8]
                VADD.F32        S0, S0, S24
                VADD.F32        S2, S2, S18
                VSTR            S0, [SP,#0xF0+var_5C]
              }
              v33 = *((_DWORD *)_R5 + 1);
              __asm { VSTR            S2, [SP,#0xF0+var_54] }
              BlockPos::BlockPos((int)&v22, (int)&v32);
              BlockSource::getBlockAndData((BlockSource *)&v21, v4, (int)&v22);
              if ( v21 == *(_BYTE *)(Block::mBookshelf + 4) )
                std::vector<Vec3,std::allocator<Vec3>>::push_back(__PAIR__(&v32, (unsigned int)v14));
                VLDR            S2, [R5,#4]
                VLDR            S4, [R5,#8]
                VADD.F32        S2, S2, S16
                VADD.F32        S4, S4, S18
                VSTR            S2, [SP,#0xF0+var_58]
                VSTR            S4, [SP,#0xF0+var_54]
              BlockPos::BlockPos((int)&v20, (int)&v32);
              BlockSource::getBlockAndData((BlockSource *)&v19, v4, (int)&v20);
              if ( v19 == *(_BYTE *)(Block::mBookshelf + 4) )
                VADD.F32        S0, S0, S22
                VADD.F32        S2, S2, S20
              BlockPos::BlockPos((int)&v18, (int)&v32);
              BlockSource::getBlockAndData((BlockSource *)&v17, v4, (int)&v18);
              if ( v17 == *(_BYTE *)(Block::mBookshelf + 4) )
                VADD.F32        S4, S4, S20
              BlockPos::BlockPos((int)&v16, (int)&v32);
              BlockSource::getBlockAndData((BlockSource *)&v15, v4, (int)&v16);
              if ( v15 == *(_BYTE *)(Block::mBookshelf + 4) )
      _ZF = _R4 == 0;
      _NF = _R4++ < 0;
    while ( _NF || _ZF );
    result = _R8 + 1;
    _ZF = _R8 == 0;
    _NF = _R8++ < 0;
  }
  while ( _NF || _ZF );
  return result;
}


void __fastcall EnchantUtils::getLegalEnchants(EnchantUtils *this, const Item *a2)
{
  EnchantUtils *v2; // r8@1
  int v3; // r10@2
  char *v4; // r11@3
  signed int *v5; // r4@4
  int v6; // r2@4
  signed int v7; // r7@4
  char *v8; // r6@7
  unsigned int v9; // r1@7
  unsigned int v10; // r0@9
  unsigned int v11; // r5@9
  signed int v12; // r2@16
  int v13; // r4@16
  signed int *v14; // r4@23
  int v15; // r9@23
  signed int v16; // r6@23
  char *v17; // r7@27
  unsigned int v18; // r1@27
  unsigned int v19; // r0@29
  unsigned int v20; // r5@29
  signed int v21; // r2@36
  int v22; // r4@36

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  if ( a2 )
  {
    v3 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 132))(a2);
    if ( v3 )
    {
      v4 = 0;
      if ( v3 == 0x7FFF )
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        do
        {
          if ( v5 == (signed int *)v6 )
          {
            v8 = 0;
            v9 = ((char *)v5 - v4) >> 2;
            if ( !v9 )
              v9 = 1;
            v10 = v9 + (((char *)v5 - v4) >> 2);
            v11 = v9 + (((char *)v5 - v4) >> 2);
            if ( 0 != v10 >> 30 )
              v11 = 0x3FFFFFFF;
            if ( v10 < v9 )
            if ( v11 )
            {
              if ( 0 != v11 >> 30 )
                goto LABEL_43;
              v8 = (char *)operator new(4 * v11);
            }
            v12 = (char *)v5 - v4;
            v13 = (int)&v8[(char *)v5 - v4];
            *(_DWORD *)&v8[v12] = v7;
            if ( 0 != v12 >> 2 )
              _aeabi_memmove4(v8, v4);
            v5 = (signed int *)(v13 + 4);
            if ( v4 )
              operator delete(v4);
            v6 = (int)&v8[4 * v11];
            v4 = v8;
            *(_DWORD *)v2 = v8;
            *((_DWORD *)v2 + 1) = v5;
            *((_DWORD *)v2 + 2) = v6;
          }
          else
            *v5 = v7;
            ++v5;
          ++v7;
        }
        while ( v7 < 27 );
      }
      else
        v14 = 0;
        v15 = 0;
        v16 = 0;
          if ( Enchant::canEnchant(*(Enchant **)(Enchant::mEnchants + 4 * v16), v3) == 1 )
            if ( v14 == (signed int *)v15 )
              v17 = 0;
              v18 = ((char *)v14 - v4) >> 2;
              if ( !v18 )
                v18 = 1;
              v19 = v18 + (((char *)v14 - v4) >> 2);
              v20 = v18 + (((char *)v14 - v4) >> 2);
              if ( 0 != v19 >> 30 )
                v20 = 0x3FFFFFFF;
              if ( v19 < v18 )
              if ( v20 )
              {
                if ( v20 >= 0x40000000 )
LABEL_43:
                  sub_21E57F4();
                v17 = (char *)operator new(4 * v20);
              }
              v21 = (char *)v14 - v4;
              v22 = (int)&v17[(char *)v14 - v4];
              *(_DWORD *)&v17[v21] = v16;
              if ( v21 >> 2 )
                _aeabi_memmove4(v17, v4);
              v14 = (signed int *)(v22 + 4);
              if ( v4 )
                operator delete(v4);
              v15 = (int)&v17[4 * v20];
              v4 = v17;
              *(_DWORD *)v2 = v17;
              *((_DWORD *)v2 + 1) = v14;
              *((_DWORD *)v2 + 2) = v15;
            else
              *v14 = v16;
              ++v14;
          ++v16;
        while ( v16 < 27 );
    }
  }
}


signed int __fastcall EnchantUtils::determineActivation(EnchantUtils *this, int a2)
{
  signed int result; // r0@2

  if ( (unsigned int)this <= 0x1A )
    result = dword_262E490[(signed int)this];
  else
    result = 4;
  return result;
}


signed int __fastcall EnchantUtils::applyEnchant(EnchantUtils *this, ItemInstance *a2, const EnchantmentInstance *a3)
{
  EnchantUtils *v3; // r5@1
  ItemInstance *v4; // r4@1
  ItemInstance *v5; // r1@1
  signed int v6; // r4@1
  int v8; // [sp+0h] [bp-38h]@1
  void *v9; // [sp+4h] [bp-34h]@7
  void *v10; // [sp+10h] [bp-28h]@5
  void *ptr; // [sp+1Ch] [bp-1Ch]@3

  v3 = this;
  v4 = a2;
  ItemInstance::getEnchantsFromUserData((ItemInstance *)&v8, (int)this);
  v6 = ItemEnchants::addEnchant(&v8, *(_QWORD *)v4, *(_QWORD *)v4 >> 32);
  if ( v6 == 1 )
  {
    EnchantUtils::_convertBookCheck(v3, v5);
    ItemInstance::saveEnchantsToUserData(v3, (const ItemEnchants *)&v8);
  }
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  if ( v9 )
    operator delete(v9);
  return v6;
}


int __fastcall EnchantUtils::getTotalProtectionLevels(EnchantUtils *this, int a2, const Mob *a3)
{
  EnchantUtils *v3; // r6@1
  const ItemInstance *v4; // r2@1
  int *v5; // r5@1
  int *v6; // r7@1
  int v7; // r4@1
  int v8; // r0@2
  int *v10; // [sp+0h] [bp-20h]@1
  int *v11; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  (*(void (__fastcall **)(int **))(*(_DWORD *)a2 + 1044))(&v10);
  v6 = v11;
  v5 = v10;
  v7 = 0;
  if ( v10 != v11 )
  {
    do
    {
      v8 = EnchantUtils::getEnchantLevel(v3, *v5, v4);
      ++v5;
      v7 += v8;
    }
    while ( v6 != v5 );
    v5 = v10;
  }
  if ( v5 )
    operator delete(v5);
  return v7;
}


void __fastcall EnchantUtils::selectEnchantments(EnchantUtils *this, const Item *a2, int a3, int a4, int a5)
{
  const Item *v5; // r6@1
  int v6; // r7@1
  int v7; // r5@1
  EnchantUtils *v8; // r4@1
  int v9; // r1@2
  int *v10; // r9@4
  signed int v11; // r0@8
  unsigned int v12; // r4@8
  unsigned int v13; // r7@8
  unsigned int v14; // r7@9
  char *v21; // r8@13
  char *v22; // r10@13
  signed int v23; // r4@13
  int *v25; // r6@14
  int v26; // r9@17
  signed int v27; // r4@17
  int v28; // r11@18
  unsigned int v29; // r1@18
  int v30; // r4@19
  __int64 v31; // kr08_8@19
  int *v32; // r2@19
  int v33; // r6@19
  int v34; // r4@22
  int v35; // r9@22
  unsigned int v36; // r0@23
  signed __int64 v37; // kr10_8@23
  Random *v38; // [sp+4h] [bp-34h]@8
  char *v39; // [sp+8h] [bp-30h]@13
  char *v40; // [sp+Ch] [bp-2Ch]@13

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = this;
  if ( a2 )
  {
    v9 = (*(int (__fastcall **)(const Item *))(*(_DWORD *)a2 + 132))(a2);
    this = v8;
  }
  else
    v9 = 0;
  ItemEnchants::ItemEnchants((int)this, v9);
  v10 = (int *)v8;
  if ( ItemEnchants::getSlot(v8) )
    if ( v5 )
      v6 += (*(int (__fastcall **)(const Item *))(*(_DWORD *)v5 + 136))(v5);
    if ( v6 >= 1 )
    {
      v38 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      v11 = v6 + ((unsigned int)v6 >> 31);
      v12 = 1;
      v13 = (v11 >> 2) + 1;
      if ( v11 >> 2 == -1 )
      {
        v14 = 0;
      }
      else
        v12 = Random::_genRandInt32(v38) % v13 + 1;
        v14 = Random::_genRandInt32(v38) % v13;
      _R0 = Random::_genRandInt32(v38);
      __asm
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
      _R0 = v12 + v7 + v14;
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VLDR            S2, =0.3
        VMOV            S4, R0
        VMUL.F32        S0, S0, S2
        VLDR            S2, =0.85
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S2
        VMOV.F32        S2, #0.5
        VMUL.F32        S0, S0, S4
        VCVTR.S32.F32   S0, S0
        VMOV            R7, S0
      if ( _R7 <= 1 )
        _R7 = 1;
      EnchantUtils::getAvailableEnchantmentResults((EnchantUtils *)&v39, v5, _R7, a5);
      v22 = v40;
      v21 = v39;
      v23 = v40 - v39;
      if ( v40 - v39 >= 1 )
        _ZF = v39 == v40;
        v25 = v10;
        if ( v39 != v40 )
        {
          v7 = (int)(v39 + 8);
          _ZF = v39 + 8 == v40;
        }
        if ( !_ZF )
          v26 = v40 - v39;
          v27 = 1;
          do
          {
            v28 = v27 + 1;
            v29 = Random::_genRandInt32(v38) % (v27 + 1);
            if ( v27 != v29 )
            {
              v30 = (int)&v21[8 * v29];
              v31 = *(_QWORD *)v7;
              v32 = v25;
              v33 = *(_DWORD *)(v30 + 4);
              *(_DWORD *)v7 = *(_DWORD *)&v21[8 * v29];
              *(_DWORD *)(v7 + 4) = v33;
              v25 = v32;
              *(_DWORD *)&v21[8 * v29] = v31;
              *(_DWORD *)(v30 + 4) = HIDWORD(v31);
            }
            v7 += 8;
            v27 = v28;
          }
          while ( v22 != (char *)v7 );
          v21 = v39;
          v23 = v26;
        ItemEnchants::addEnchant(v25, *(_QWORD *)v21, *(_QWORD *)v21 >> 32);
        v34 = v23 >> 3;
        v35 = 0;
        while ( 1 )
          v36 = Random::_genRandInt32(v38);
          v37 = 1374389535LL * v36;
          if ( v35 + 1 >= v34 || (signed int)(v36 - 50 * (HIDWORD(v37) >> 4)) > _R7 )
            break;
          ItemEnchants::addEnchant(v25, *(_QWORD *)&v21[8 * v35 + 8], *(_QWORD *)&v21[8 * v35 + 8] >> 32);
          ++v35;
          _R7 /= 2;
      if ( v21 )
        operator delete(v21);
    }
}


void __fastcall EnchantUtils::doPostDamageEffects(EnchantUtils *this, Mob *a2, Mob *a3)
{
  Mob *v3; // r4@1
  EnchantUtils *v4; // r10@1
  int v5; // r0@1
  int v6; // r6@1
  int v7; // r0@1
  bool v8; // zf@1
  EnchantmentInstance *v9; // r6@14
  EnchantmentInstance *v10; // r8@14
  int v11; // r7@15
  void (__fastcall *v12)(int, Mob *, EnchantUtils *, int); // r5@15
  int v13; // r0@15
  char v14; // [sp+4h] [bp-54h]@8
  void *v15; // [sp+8h] [bp-50h]@12
  void *v16; // [sp+14h] [bp-44h]@10
  void *ptr; // [sp+20h] [bp-38h]@8
  EnchantmentInstance *v18; // [sp+2Ch] [bp-2Ch]@8
  EnchantmentInstance *v19; // [sp+30h] [bp-28h]@14

  v3 = a2;
  v4 = this;
  v5 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 908))(a2);
  v6 = v5;
  v7 = *(_BYTE *)(v5 + 15);
  v8 = v7 == 0;
  if ( v7 )
    v8 = *(_DWORD *)v6 == 0;
  if ( !v8
    && !ItemInstance::isNull((ItemInstance *)v6)
    && *(_BYTE *)(v6 + 14)
    && ItemInstance::isEnchanted((ItemInstance *)v6) == 1
    && ItemInstance::getId((ItemInstance *)v6) != *(_WORD *)(Item::mEnchanted_book + 18) )
  {
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v14, v6);
    ItemEnchants::getEnchants((ItemEnchants *)&v18, (int)&v14, 1);
    if ( ptr )
      operator delete(ptr);
    if ( v16 )
      operator delete(v16);
    if ( v15 )
      operator delete(v15);
    v10 = v19;
    v9 = v18;
    if ( v18 != v19 )
    {
      do
      {
        v11 = *(_DWORD *)(Enchant::mEnchants + 4 * EnchantmentInstance::getEnchantType(v9));
        v12 = *(void (__fastcall **)(int, Mob *, EnchantUtils *, int))(*(_DWORD *)v11 + 32);
        v13 = EnchantmentInstance::getEnchantLevel(v9);
        v12(v11, v3, v4, v13);
        v9 = (EnchantmentInstance *)((char *)v9 + 8);
      }
      while ( v10 != v9 );
      v9 = v18;
    }
    if ( v9 )
      operator delete((void *)v9);
  }
}


void __fastcall EnchantUtils::canEnchant(EnchantUtils *this, const ItemInstance *a2, const EnchantmentInstance *a3)
{
  EnchantUtils::canEnchant(this, a2, a3);
}


void __fastcall EnchantUtils::getLegalEnchants(EnchantUtils *this, const Item *a2)
{
  EnchantUtils::getLegalEnchants(this, a2);
}


void __fastcall EnchantUtils::getEnchantNameAndLevel(EnchantUtils *this, int a2, int a3)
{
  unsigned int v3; // r6@1
  int v4; // r5@1
  int *v5; // r4@1
  void *v6; // r0@2
  const void **v7; // r0@4
  const void **v8; // r0@4
  char *v9; // r0@4
  void *v10; // r0@5
  char *v11; // r0@6
  void *v12; // r0@7
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  const void **v15; // r0@12
  char *v16; // r0@12
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@35
  signed int v22; // r1@37
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  int v27; // [sp+4h] [bp-34h]@12
  char *v28; // [sp+8h] [bp-30h]@12
  int v29; // [sp+Ch] [bp-2Ch]@4
  char *v30; // [sp+10h] [bp-28h]@4
  int v31; // [sp+14h] [bp-24h]@4
  char *v32; // [sp+18h] [bp-20h]@4
  int v33; // [sp+1Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = a3;
  v5 = (int *)this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  if ( v3 <= 0x1A )
  {
    Enchant::getDescription((Enchant *)&v33, *(_DWORD *)(Enchant::mEnchants + 4 * v3));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v33);
    v6 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    if ( (unsigned int)(v4 - 1) > 9 )
      Util::toString<int,(void *)0,(void *)0>((void **)&v27, v4);
      v15 = sub_21E82D8((const void **)&v27, 0, (unsigned int)" ", (_BYTE *)1);
      v28 = (char *)*v15;
      *v15 = &unk_28898CC;
      sub_21E72F0((const void **)v5, (const void **)&v28);
      v16 = v28 - 12;
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v28 - 4);
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
          j_j_j_j__ZdlPv_9(v16);
      v12 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v27 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          goto LABEL_32;
        goto LABEL_31;
    else
      Util::toString<int,(void *)0,(void *)0>((void **)&v29, v4);
      v7 = sub_21E82D8((const void **)&v29, 0, (unsigned int)"enchantment.level.", (_BYTE *)0x12);
      v30 = (char *)*v7;
      *v7 = &unk_28898CC;
      I18n::get(&v31, (int **)&v30);
      v8 = sub_21E82D8((const void **)&v31, 0, (unsigned int)" ", (_BYTE *)1);
      v32 = (char *)*v8;
      *v8 = &unk_28898CC;
      sub_21E72F0((const void **)v5, (const void **)&v32);
      v9 = v32 - 12;
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v32 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v31 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = v30 - 12;
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v30 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v29 - 4);
LABEL_31:
        v14 = (*v13)--;
LABEL_32:
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
        return;
  }
}


int __fastcall EnchantUtils::getBookcaseCount(EnchantUtils *this, BlockSource *a2, const Vec3 *a3)
{
  int v3; // r4@1
  void *v5; // [sp+4h] [bp-14h]@1
  int v6; // [sp+8h] [bp-10h]@1

  EnchantUtils::getBookCasePositions((EnchantUtils *)&v5, this, a2);
  v3 = -1431655765 * ((v6 - (signed int)v5) >> 2);
  if ( v5 )
    operator delete(v5);
  return v3;
}


int __fastcall EnchantUtils::getDamageReduction(EnchantUtils *this, const EntityDamageSource *a2, const Mob *a3)
{
  ItemInstance **v3; // r0@1
  ItemInstance *v5; // r6@3
  unsigned int v6; // r4@3
  char *v7; // r0@11
  unsigned int v8; // r9@13
  int v9; // r8@13
  EnchantmentInstance *v10; // r7@14
  int v11; // r6@14
  int (__fastcall *v12)(int, int, EnchantUtils *); // r10@14
  int v13; // r0@14
  int v14; // r1@14
  Random *v16; // r0@22
  float v18; // r1@22
  int result; // r0@28
  EnchantUtils *v25; // [sp+4h] [bp-74h]@1
  char v26; // [sp+8h] [bp-70h]@3
  void *v27; // [sp+Ch] [bp-6Ch]@9
  void *v28; // [sp+18h] [bp-60h]@7
  void *ptr; // [sp+24h] [bp-54h]@5
  void *v30; // [sp+30h] [bp-48h]@5
  _BYTE *v31; // [sp+34h] [bp-44h]@12
  void *v32; // [sp+3Ch] [bp-3Ch]@1
  _BYTE *v33; // [sp+40h] [bp-38h]@1

  v25 = this;
  (*(void (__fastcall **)(void **))(*(_DWORD *)a2 + 1044))(&v32);
  v3 = (ItemInstance **)v32;
  if ( v33 == v32 )
  {
    _R5 = 0;
  }
  else
    v5 = (ItemInstance *)&v26;
    v6 = 0;
    do
    {
      if ( ItemInstance::isEnchanted(v3[v6]) == 1 )
      {
        ItemInstance::getEnchantsFromUserData(v5, *((_DWORD *)v32 + v6));
        ItemEnchants::getEnchants((ItemEnchants *)&v30, (int)v5, 0);
        if ( ptr )
          operator delete(ptr);
        if ( v28 )
          operator delete(v28);
        if ( v27 )
          operator delete(v27);
        v7 = (char *)v30;
        if ( _R5 <= 25 && v31 != v30 )
        {
          v8 = 1;
          v9 = 0;
          do
          {
            v10 = (EnchantmentInstance *)&v7[v9];
            v11 = *(_DWORD *)(Enchant::mEnchants
                            + 4 * EnchantmentInstance::getEnchantType((EnchantmentInstance *)&v7[v9]));
            v12 = *(int (__fastcall **)(int, int, EnchantUtils *))(*(_DWORD *)v11 + 24);
            v13 = EnchantmentInstance::getEnchantLevel(v10);
            v14 = v12(v11, v13, v25);
            v7 = (char *)v30;
            _R5 += v14;
            if ( _R5 > 25 )
              break;
            v9 += 8;
          }
          while ( v8++ < (v31 - (_BYTE *)v30) >> 3 );
        }
        if ( v7 )
          operator delete(v7);
        v5 = (ItemInstance *)&v26;
      }
      if ( _R5 > 25 )
        break;
      v3 = (ItemInstance **)v32;
      ++v6;
    }
    while ( v6 < (v33 - (_BYTE *)v32) >> 2 );
  v16 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R0 = Random::_genRandInt32(v16);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  if ( !(_NF ^ _VF) )
    _R5 = 25;
    VMUL.F64        D0, D0, D1
    VMOV.F32        S2, #0.5
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VMOV            S4, R5
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S2
    VMUL.F32        S0, S0, S4
    VMOV            R0, S0
  _R0 = mce::Math::ceil(_R0, v18);
  __asm { VLDR            S2, =-0.04 }
    _R0 = 20;
    VMOV.F32        S4, #1.0
    VCVT.F32.S32    S0, S0
    VADD.F32        S16, S0, S4
  if ( !_ZF )
    operator delete(v32);
  __asm { VMOV            R0, S16 }
  return result;
}


signed int __fastcall EnchantUtils::generateEnchantedBook(EnchantUtils *this, const EnchantmentInstance *a2)
{
  EnchantUtils *v2; // r4@1
  ItemInstance *v3; // r5@1
  const EnchantmentInstance *v4; // r2@1

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance(this, Item::mBook, 1);
  return EnchantUtils::applyEnchant(v2, v3, v4);
}


void __fastcall EnchantUtils::doPostDamageEffects(EnchantUtils *this, Mob *a2, Mob *a3)
{
  EnchantUtils::doPostDamageEffects(this, a2, a3);
}


int __fastcall EnchantUtils::doPostHurtEffects(EnchantUtils *this, Mob *a2, Mob *a3)
{
  EnchantUtils *v3; // r5@1
  ItemInstance *v4; // r7@1
  Mob *v5; // r4@1
  int v6; // r6@1
  int v7; // r0@2
  EnchantmentInstance *v8; // r7@9 OVERLAPPED
  EnchantmentInstance *v9; // r8@9 OVERLAPPED
  int v10; // r6@10
  void (__fastcall *v11)(int, int *, EnchantUtils *, Mob *); // r10@10
  int result; // r0@17
  int v13; // [sp+8h] [bp-38h]@7
  char v14; // [sp+Ch] [bp-34h]@1
  void *v15; // [sp+10h] [bp-30h]@7
  void *v16; // [sp+1Ch] [bp-24h]@5
  void *ptr; // [sp+28h] [bp-18h]@3
  void *v18; // [sp+34h] [bp-Ch]@3
  void *v19; // [sp+38h] [bp-8h]@9
  int v20; // [sp+40h] [bp+0h]@2
  int v21; // [sp+48h] [bp+8h]@17
  void *v22; // [sp+64h] [bp+24h]@15
  void *v23; // [sp+74h] [bp+34h]@13

  v3 = this;
  v4 = (ItemInstance *)&v14;
  v5 = a2;
  v6 = 0;
  do
  {
    v7 = (*(int (__fastcall **)(EnchantUtils *, int))(*(_DWORD *)v3 + 1028))(v3, v6);
    ItemInstance::ItemInstance((ItemInstance *)&v20, v7);
    if ( ItemInstance::isEnchanted((ItemInstance *)&v20) == 1 )
    {
      ItemInstance::getEnchantsFromUserData(v4, (int)&v20);
      ItemEnchants::getEnchants((ItemEnchants *)&v18, (int)v4, 0);
      if ( ptr )
        operator delete(ptr);
      if ( v16 )
        operator delete(v16);
      v13 = v6;
      if ( v15 )
        operator delete(v15);
      *(_QWORD *)&v8 = *(_QWORD *)&v18;
      if ( v18 != v19 )
      {
        do
        {
          v10 = *(_DWORD *)(Enchant::mEnchants + 4 * EnchantmentInstance::getEnchantType(v8));
          v11 = *(void (__fastcall **)(int, int *, EnchantUtils *, Mob *))(*(_DWORD *)v10 + 36);
          EnchantmentInstance::getEnchantLevel(v8);
          v11(v10, &v20, v3, v5);
          v8 = (EnchantmentInstance *)((char *)v8 + 8);
        }
        while ( v9 != v8 );
      }
      v6 = v13;
      (*(void (__fastcall **)(EnchantUtils *, int, int *))(*(_DWORD *)v3 + 1024))(v3, v13, &v20);
      v4 = (ItemInstance *)&v14;
      if ( v18 )
        operator delete(v18);
    }
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    result = v21;
    if ( v21 )
      result = (*(int (__cdecl **)(int))(*(_DWORD *)v21 + 4))(v21);
    ++v6;
  }
  while ( v6 != 4 );
  return result;
}


void __fastcall EnchantUtils::generateRandomEnchantedBook(EnchantUtils *this)
{
  EnchantUtils *v1; // r4@1
  ItemInstance *v2; // r1@1

  v1 = this;
  ItemInstance::ItemInstance(this, Item::mEnchanted_book, 1);
  EnchantUtils::randomlyEnchant(v1, v2);
}


void __fastcall EnchantUtils::randomlyEnchant(EnchantUtils *this, ItemInstance *a2)
{
  ItemInstance **v2; // r5@1
  int v3; // r0@1
  bool v4; // zf@1
  _DWORD *v5; // r4@4
  signed int v6; // r6@4
  Random *v7; // r0@5
  Random *v8; // r8@5
  unsigned int v9; // r1@6
  int v10; // r9@8
  int v11; // r7@8
  int v12; // r6@8
  int v13; // r0@8
  __int64 v14; // r2@8
  unsigned int v15; // r1@10
  const EnchantmentInstance *v16; // r2@13
  _DWORD *v17; // [sp+0h] [bp-30h]@4
  int v18; // [sp+4h] [bp-2Ch]@4
  char v19; // [sp+Ch] [bp-24h]@13

  v2 = (ItemInstance **)this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
  {
    a2 = *v2;
    v4 = *v2 == 0;
  }
  if ( !v4 )
    EnchantUtils::getLegalEnchants((EnchantUtils *)&v17, a2);
    v5 = v17;
    v6 = v18 - (_DWORD)v17;
    if ( (v18 - (signed int)v17) >> 2 )
    {
      v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      v8 = v7;
      if ( v6 < 1 )
        v9 = 0;
      else
        v9 = Random::_genRandInt32(v7) % (v6 >> 2);
      v10 = v5[v9];
      v11 = *(_DWORD *)(Enchant::mEnchants + 4 * v10);
      v12 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v11 + 16))(*(_DWORD *)(Enchant::mEnchants + 4 * v10));
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
      if ( v13 >= v12 )
      {
        if ( v13 + 1 == v12 )
          v15 = 0;
        else
          v15 = Random::_genRandInt32(v8) % (v13 + 1 - v12);
        v12 += v15;
      }
      LODWORD(v14) = v12;
      EnchantmentInstance::EnchantmentInstance(&v19, v10, v14);
      EnchantUtils::applyEnchant((EnchantUtils *)v2, (ItemInstance *)&v19, v16);
    }
    if ( v5 )
      operator delete(v5);
}


void __fastcall EnchantUtils::generateRandomEnchantedItem(EnchantUtils *this, const Item *a2, int a3, int a4)
{
  ItemInstance *v4; // r4@1
  int v5; // r7@1
  ItemInstance *v6; // r5@1
  const Item *v7; // r6@1
  Random *v8; // r0@1
  bool v9; // [sp+0h] [bp-18h]@0

  v4 = this;
  v5 = a4;
  v6 = (ItemInstance *)a3;
  v7 = a2;
  v8 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  if ( v5 > (signed int)v6 )
    v6 = (ItemInstance *)((char *)v6 + Random::_genRandInt32(v8) % (v5 - (signed int)v6));
  ItemInstance::ItemInstance(v4, (int)v7, 1);
  if ( (signed int)v6 >= 1 )
    EnchantUtils::randomlyEnchant(v4, v6, 0, 0, v9);
}


int __fastcall EnchantUtils::getBestEnchantLevel(EnchantUtils *a1, int a2, int a3)
{
  EnchantUtils *v3; // r8@1
  void (__fastcall *v4)(ItemInstance ***); // r2@4
  ItemInstance **v5; // r4@9
  ItemInstance **v6; // r6@9
  int v7; // r5@9
  ItemInstance *v8; // r7@10
  const ItemInstance *v9; // r2@10
  int v10; // r0@11
  ItemInstance **v12; // [sp+4h] [bp-24h]@7
  ItemInstance **v13; // [sp+8h] [bp-20h]@8
  int v14; // [sp+Ch] [bp-1Ch]@8

  v3 = a1;
  if ( a3 == 2 )
  {
    v4 = *(void (__fastcall **)(ItemInstance ***))(*(_DWORD *)a2 + 1052);
    goto LABEL_7;
  }
  if ( a3 == 3 )
    v4 = *(void (__fastcall **)(ItemInstance ***))(*(_DWORD *)a2 + 1044);
  if ( a3 == 4 )
    v4 = *(void (__fastcall **)(ItemInstance ***))(*(_DWORD *)a2 + 1056);
LABEL_7:
    v4(&v12);
    goto LABEL_9;
  v12 = 0;
  v13 = 0;
  v14 = 0;
LABEL_9:
  v5 = v13;
  v6 = v12;
  v7 = 0;
  if ( v12 != v13 )
    do
    {
      v8 = *v6;
      if ( ItemInstance::isEnchanted(*v6) == 1 )
      {
        v10 = EnchantUtils::getEnchantLevel(v3, (int)v8, v9);
        if ( v10 >= v7 )
          v7 = v10;
      }
      ++v6;
    }
    while ( v5 != v6 );
    v6 = v12;
  if ( v6 )
    operator delete(v6);
  return v7;
}


const void **__fastcall EnchantUtils::getRandomName(EnchantUtils *this)
{
  void **v1; // r9@1
  Random *v2; // r8@1
  __int64 v3; // r4@1
  char v4; // r6@1
  int v5; // r7@1
  signed int v6; // r0@1
  int v7; // r5@1
  unsigned int v8; // r6@1
  unsigned int v9; // r1@2
  const void **result; // r0@2

  v1 = (void **)this;
  v2 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v3 = *(_QWORD *)EnchantUtils::mEnchantmentNames;
  v4 = Random::_genRandInt32(v2);
  sub_21E94B4(v1, (const char *)&unk_257BC67);
  v5 = (v4 & 1) + 3;
  v6 = HIDWORD(v3) - v3;
  v7 = 0;
  v8 = v6 >> 2;
  if ( v6 >> 2 )
  {
    do
    {
      v9 = Random::_genRandInt32(v2) % v8;
      result = sub_21E72F0((const void **)v1, (const void **)(EnchantUtils::mEnchantmentNames[0] + 4 * v9));
      ++v7;
    }
    while ( v7 < v5 );
  }
  else
      result = sub_21E72F0((const void **)v1, (const void **)EnchantUtils::mEnchantmentNames[0]);
  return result;
}


signed int __fastcall EnchantUtils::hasEnchant(EnchantUtils *this, int a2, const ItemInstance *a3)
{
  int v3; // r5@1
  EnchantUtils *v4; // r4@1
  int v5; // r1@2
  signed int v6; // r4@2
  int v8; // [sp+0h] [bp-38h]@2
  void *v9; // [sp+4h] [bp-34h]@8
  void *v10; // [sp+10h] [bp-28h]@6
  void *ptr; // [sp+1Ch] [bp-1Ch]@4

  v3 = a2;
  v4 = this;
  if ( ItemInstance::isEnchanted((ItemInstance *)a2) == 1 )
  {
    ItemInstance::getEnchantsFromUserData((ItemInstance *)&v8, v3);
    v5 = ItemEnchants::hasEnchant((ItemEnchants *)&v8, (int)v4);
    v6 = 0;
    if ( v5 > 0 )
      v6 = 1;
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      operator delete(v9);
  }
  else
  return v6;
}


int __fastcall EnchantUtils::getEquipmentSet(int result, int a2, int a3)
{
  switch ( a3 )
  {
    case 2:
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 1052))(result);
      break;
    case 3:
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 1044))(result);
    case 4:
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a2 + 1056))(result);
    default:
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
  }
  return result;
}


EnchantUtils *__fastcall EnchantUtils::getRandomItemWith(EnchantUtils *a1, int a2, int a3)
{
  ItemInstance *v3; // r4@1
  void (__fastcall *v4)(ItemInstance ***); // r2@4
  ItemInstance **v5; // r5@9 OVERLAPPED
  ItemInstance **v6; // r6@9 OVERLAPPED
  const ItemInstance *v7; // r2@11
  signed int v8; // r6@14
  ItemInstance **v10; // [sp+4h] [bp-1Ch]@7
  ItemInstance **v11; // [sp+8h] [bp-18h]@8
  int v12; // [sp+Ch] [bp-14h]@8

  v3 = a1;
  if ( a3 == 2 )
  {
    v4 = *(void (__fastcall **)(ItemInstance ***))(*(_DWORD *)a2 + 1052);
    goto LABEL_7;
  }
  if ( a3 == 3 )
    v4 = *(void (__fastcall **)(ItemInstance ***))(*(_DWORD *)a2 + 1044);
  if ( a3 == 4 )
    v4 = *(void (__fastcall **)(ItemInstance ***))(*(_DWORD *)a2 + 1056);
LABEL_7:
    v4(&v10);
    goto LABEL_9;
  v10 = 0;
  v11 = 0;
  v12 = 0;
LABEL_9:
  *(_QWORD *)&v5 = *(_QWORD *)&v10;
  if ( v10 == v11 )
    v8 = 2;
  else
    while ( !*v5 || ItemInstance::isEnchanted(*v5) != 1 || !EnchantUtils::hasEnchant(v3, (int)*v5, v7) )
    {
      ++v5;
      if ( v6 == v5 )
      {
        v8 = 2;
        goto LABEL_17;
      }
    }
    v3 = *v5;
    v8 = 1;
LABEL_17:
    v5 = v10;
  if ( v5 )
    operator delete(v5);
  if ( v8 == 2 )
    v3 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
  return v3;
}


void __fastcall EnchantUtils::selectEnchantments(EnchantUtils *this, const Item *a2, int a3, int a4, int a5)
{
  EnchantUtils::selectEnchantments(this, a2, a3, a4, a5);
}


void __fastcall EnchantUtils::canEnchant(EnchantUtils *this, const ItemInstance *a2, __int64 a3)
{
  const ItemInstance *v3; // r4@1
  EnchantUtils *v4; // r5@1
  int v5; // r1@1
  int v6; // [sp+0h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  LODWORD(a3) = HIDWORD(a3);
  EnchantmentInstance::EnchantmentInstance(&v6, v5, a3);
  EnchantUtils::canEnchant(v4, v3, (const EnchantmentInstance *)&v6);
}


void __fastcall EnchantUtils::randomlyEnchant(EnchantUtils *this, ItemInstance *a2)
{
  EnchantUtils::randomlyEnchant(this, a2);
}


signed int __fastcall EnchantUtils::applyEnchant(EnchantUtils *this, ItemInstance *a2, __int64 a3)
{
  EnchantUtils *v3; // r4@1
  const EnchantmentInstance *v4; // r2@1
  int v6; // [sp+0h] [bp-18h]@1

  v3 = this;
  EnchantmentInstance::EnchantmentInstance(&v6, (int)a2, a3);
  return EnchantUtils::applyEnchant(v3, (ItemInstance *)&v6, v4);
}


void __fastcall EnchantUtils::randomlyEnchant(EnchantUtils *this, ItemInstance *a2, int a3, int a4, bool a5)
{
  ItemInstance **v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  ItemInstance *v8; // r2@1
  bool v9; // zf@1
  const ItemEnchants *v10; // r2@4
  ItemInstance *v11; // r1@4
  int v12; // r5@4
  char v13; // [sp+8h] [bp-38h]@4
  void *v14; // [sp+Ch] [bp-34h]@8
  void *v15; // [sp+18h] [bp-28h]@6
  void *ptr; // [sp+24h] [bp-1Ch]@4

  v5 = (ItemInstance **)this;
  v6 = a3;
  v7 = *((_BYTE *)this + 15);
  v8 = a2;
  v9 = v7 == 0;
  if ( v7 )
  {
    a2 = *v5;
    v9 = *v5 == 0;
  }
  if ( !v9 )
    EnchantUtils::selectEnchantments((EnchantUtils *)&v13, a2, (int)v8, v6, a4);
    v12 = EnchantUtils::applyEnchant((EnchantUtils *)v5, (ItemInstance *)&v13, v10);
    if ( ptr )
      operator delete(ptr);
    if ( v15 )
      operator delete(v15);
    if ( v14 )
      operator delete(v14);
    if ( v12 >= 1 )
      EnchantUtils::_convertBookCheck((EnchantUtils *)v5, v11);
}


void __fastcall EnchantUtils::getAvailableEnchantmentResults(EnchantUtils *this, const Item *a2, int a3, int a4)
{
  EnchantUtils *v4; // r10@1
  int v5; // r4@1
  int v6; // r9@1
  int *v7; // r8@3
  int v8; // r5@4
  int v9; // r7@4
  __int64 v10; // r2@8
  EnchantmentInstance *v11; // r4@9
  EnchantmentInstance *v12; // r6@9
  char v13; // r11@10
  int *v14; // r8@20
  int v15; // r5@21
  int v16; // r7@22
  __int64 v17; // r2@26
  EnchantmentInstance *v18; // r4@27
  EnchantmentInstance *v19; // r11@27
  char v20; // r6@28
  void *ptr; // [sp+4h] [bp-44h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  char v23; // [sp+10h] [bp-38h]@15
  void *v24; // [sp+18h] [bp-30h]@1
  void *v25; // [sp+1Ch] [bp-2Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  EnchantUtils::getLegalEnchants((EnchantUtils *)&v24, a2);
  ptr = v24;
  v22 = (int)v25;
  if ( v24 != v25 )
  {
    if ( v5 == 1 )
    {
      v7 = (int *)v24;
      while ( 1 )
      {
        v8 = *(_DWORD *)(Enchant::mEnchants + 4 * *v7);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 48))(*(_DWORD *)(Enchant::mEnchants + 4 * *v7));
        v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 16))(v8);
        while ( v9 <= (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8) )
        {
          if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 8))(v8, v9) > v6
            || (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 12))(v8, v9) < v6 )
          {
            goto LABEL_5;
          }
          v12 = (EnchantmentInstance *)(*(_QWORD *)v4 >> 32);
          v11 = (EnchantmentInstance *)*(_QWORD *)v4;
          if ( v11 == v12 )
            goto LABEL_41;
          v13 = 0;
          do
            if ( EnchantmentInstance::getEnchantType(v11) == *v7 )
            {
              EnchantmentInstance::setEnchantLevel(v11, v9);
              v13 = 1;
            }
            v11 = (EnchantmentInstance *)((char *)v11 + 8);
          while ( v12 != v11 );
          if ( v13 & 1 )
LABEL_5:
            ++v9;
          else
LABEL_41:
            LODWORD(v10) = v9;
            EnchantmentInstance::EnchantmentInstance(&v23, *v7, v10);
            if ( v12 == *((EnchantmentInstance **)v4 + 2) )
              std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance>(__PAIR__(&v23, (unsigned int)v4));
              goto LABEL_5;
            *(_QWORD *)v12 = *(_QWORD *)&v23;
            *((_DWORD *)v4 + 1) = (char *)v12 + 8;
        }
        ++v7;
        if ( v7 == (int *)v22 )
          goto LABEL_37;
      }
    }
    v14 = (int *)v24;
    while ( 1 )
      v15 = *(_DWORD *)(Enchant::mEnchants + 4 * *v14);
      if ( !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v15 + 48))(*(_DWORD *)(Enchant::mEnchants + 4 * *v14)) )
        break;
LABEL_36:
      ++v14;
      if ( v14 == (int *)v22 )
        goto LABEL_37;
    v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 16))(v15);
        if ( v16 > (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15) )
          goto LABEL_36;
        if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 8))(v15, v16) <= v6
          && (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 12))(v15, v16) >= v6 )
          v19 = (EnchantmentInstance *)(*(_QWORD *)v4 >> 32);
          v18 = (EnchantmentInstance *)*(_QWORD *)v4;
          if ( v18 == v19 )
            break;
          v20 = 0;
            if ( EnchantmentInstance::getEnchantType(v18) == *v14 )
              EnchantmentInstance::setEnchantLevel(v18, v16);
              v20 = 1;
            v18 = (EnchantmentInstance *)((char *)v18 + 8);
          while ( v19 != v18 );
          if ( !(v20 & 1) )
LABEL_23:
        ++v16;
      LODWORD(v17) = v16;
      EnchantmentInstance::EnchantmentInstance(&v23, *v14, v17);
      if ( v19 == *((EnchantmentInstance **)v4 + 2) )
        std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance>(__PAIR__(&v23, (unsigned int)v4));
        goto LABEL_23;
      ++v16;
      *(_QWORD *)v19 = *(_QWORD *)&v23;
      *((_DWORD *)v4 + 1) = (char *)v19 + 8;
  }
LABEL_37:
  if ( ptr )
    operator delete(ptr);
}


signed int __fastcall EnchantUtils::getEnchantmentId(unsigned int *a1)
{
  signed int v1; // r4@1
  char *v2; // r0@2
  char *v3; // r6@2
  _DWORD *v4; // r0@2
  char *v5; // r5@2
  size_t v6; // r2@2
  unsigned int *v8; // r1@8
  signed int v9; // r0@10
  void *s2; // [sp+0h] [bp-20h]@1

  Util::toLower(&s2, *(_DWORD *)(*a1 - 12), *a1);
  v1 = 0;
  while ( 1 )
  {
    v2 = Enchant::getStringId(*(Enchant **)(Enchant::mEnchants + 4 * v1));
    v3 = (char *)s2;
    v4 = *(_DWORD **)v2;
    v5 = (char *)s2 - 12;
    v6 = *(v4 - 3);
    if ( v6 == *((_DWORD *)s2 - 3) && !memcmp(v4, s2, v6) )
      break;
    if ( ++v1 >= 27 )
    {
      v1 = -1;
    }
  }
  if ( (int *)v5 != &dword_28898C0 )
    v8 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


int __fastcall EnchantUtils::getEnchantCosts(EnchantUtils *this, const ItemInstance *a2, int a3)
{
  EnchantUtils *v3; // r7@1
  int v4; // r4@1
  const ItemInstance *v5; // r6@1
  void *v6; // r0@1
  int *v7; // r5@1
  int result; // r0@1
  Random *v10; // r7@7
  char v11; // r8@7
  unsigned int v12; // r1@8
  int v13; // r0@10
  int v21; // r2@10
  int v22; // r1@10
  int v23; // r1@12

  v3 = this;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = operator new(0xCu);
  v7 = (int *)v6;
  *(_DWORD *)v3 = v6;
  v6 = (char *)v6 + 12;
  *((_DWORD *)v3 + 2) = v6;
  *v7 = -1;
  v7[1] = -1;
  v7[2] = -1;
  *((_DWORD *)v3 + 1) = v6;
  result = *((_BYTE *)v5 + 15);
  _ZF = result == 0;
  if ( *((_BYTE *)v5 + 15) )
  {
    result = *(_DWORD *)v5;
    _ZF = *(_DWORD *)v5 == 0;
  }
  if ( !_ZF )
    result = ItemInstance::getEnchantValue(v5);
    if ( result >= 1 )
    {
      if ( v4 > 15 )
        v4 = 15;
      v10 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      v11 = Random::_genRandInt32(v10);
      if ( v4 == -1 )
        v12 = 0;
      else
        v12 = Random::_genRandInt32(v10) % (v4 + 1);
      v13 = (v11 & 7) + (v4 >> 1) + v12;
      _R1 = 1431655766;
      result = v13 + 1;
      __asm { SMMUL.W         R2, R0, R1 }
      _R3 = 2 * result;
      __asm { SMMUL.W         R1, R3, R1 }
      v21 = _R2 + (_R2 >> 31);
      v22 = _R1 + (_R1 >> 31);
      if ( v21 < 1 )
        v21 = 1;
      v23 = v22 + 1;
      if ( result < 2 * v4 )
        result = 2 * v4;
      *v7 = v21;
      v7[1] = v23;
      v7[2] = result;
    }
  return result;
}


void __fastcall EnchantUtils::removeEnchants(EnchantUtils *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int v3; // [sp+0h] [bp-38h]@1
  void *v4; // [sp+4h] [bp-34h]@5
  void *v5; // [sp+10h] [bp-28h]@3
  void *ptr; // [sp+1Ch] [bp-1Ch]@1

  v2 = this;
  ItemEnchants::ItemEnchants((int)&v3, -1);
  ItemInstance::saveEnchantsToUserData(v2, (const ItemEnchants *)&v3);
  if ( ptr )
    operator delete(ptr);
  if ( v5 )
    operator delete(v5);
  if ( v4 )
    operator delete(v4);
}


int __fastcall EnchantUtils::applyEnchant(EnchantUtils *this, ItemInstance *a2, const ItemEnchants *a3)
{
  EnchantUtils *v3; // r5@1
  ItemInstance *v4; // r4@1
  ItemInstance *v5; // r1@1
  int v6; // r4@1
  int v8; // [sp+0h] [bp-38h]@1
  void *v9; // [sp+4h] [bp-34h]@7
  void *v10; // [sp+10h] [bp-28h]@5
  void *ptr; // [sp+1Ch] [bp-1Ch]@3

  v3 = this;
  v4 = a2;
  ItemInstance::getEnchantsFromUserData((ItemInstance *)&v8, (int)this);
  v6 = ItemEnchants::addEnchants((ItemEnchants *)&v8, v4);
  if ( v6 >= 1 )
  {
    EnchantUtils::_convertBookCheck(v3, v5);
    ItemInstance::saveEnchantsToUserData(v3, (const ItemEnchants *)&v8);
  }
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  if ( v9 )
    operator delete(v9);
  return v6;
}


void __fastcall EnchantUtils::randomlyEnchant(EnchantUtils *this, ItemInstance *a2, int a3, int a4, bool a5)
{
  EnchantUtils::randomlyEnchant(this, a2, a3, a4, a5);
}


void __fastcall EnchantUtils::canEnchant(EnchantUtils *this, const ItemInstance *a2, const EnchantmentInstance *a3)
{
  EnchantUtils *v3; // r5@1
  __int64 *v4; // r4@1
  int v5; // [sp+0h] [bp-38h]@1
  void *v6; // [sp+4h] [bp-34h]@5
  void *v7; // [sp+10h] [bp-28h]@3
  void *ptr; // [sp+1Ch] [bp-1Ch]@1

  v3 = this;
  v4 = (__int64 *)a3;
  ItemInstance::getEnchantsFromUserData((ItemInstance *)&v5, (int)a2);
  ItemEnchants::canEnchant((int)v3, &v5, *v4);
  if ( ptr )
    operator delete(ptr);
  if ( v7 )
    operator delete(v7);
  if ( v6 )
    operator delete(v6);
}


void *__fastcall EnchantUtils::getRandomItemWithMending(EnchantUtils *this, const Mob *a2)
{
  ItemInstance **v2; // r4@1
  ItemInstance **v3; // r11@1
  int v4; // r10@1
  char *v5; // r9@1
  char *v6; // r8@1
  ItemInstance *v7; // r5@2
  const ItemInstance *v8; // r2@3
  signed int v9; // r9@7
  char *v10; // r6@7
  signed int v11; // r10@7
  unsigned int v12; // r0@7
  unsigned int v13; // r1@9
  unsigned int v14; // r7@9
  Random *v15; // r0@25
  unsigned int v16; // r1@25
  void *v17; // r5@27
  void *ptr; // [sp+0h] [bp-30h]@1
  ItemInstance **v20; // [sp+4h] [bp-2Ch]@1

  (*(void (__fastcall **)(void **))(*(_DWORD *)this + 1056))(&ptr);
  v3 = v20;
  v2 = (ItemInstance **)ptr;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( ptr != v20 )
  {
    do
    {
      v7 = *v2;
      if ( *v2 && !ItemInstance::isNull(*v2) && EnchantUtils::hasEnchant((EnchantUtils *)0x1A, (int)v7, v8) == 1 )
      {
        if ( v5 == (char *)v4 )
        {
          v9 = v5 - v6;
          v10 = 0;
          v11 = v9 >> 2;
          v12 = v9 >> 2;
          if ( !(v9 >> 2) )
            v12 = 1;
          v13 = v12 + (v9 >> 2);
          v14 = v12 + (v9 >> 2);
          if ( 0 != v13 >> 30 )
            v14 = 0x3FFFFFFF;
          if ( v13 < v12 )
          if ( v14 )
          {
            if ( v14 >= 0x40000000 )
              sub_21E57F4();
            v10 = (char *)operator new(4 * v14);
          }
          *(_DWORD *)&v10[4 * v11] = v7;
          if ( v11 )
            _aeabi_memmove4(v10, v6);
          v5 = &v10[4 * v11 + 4];
          if ( v6 )
            operator delete(v6);
          v4 = (int)&v10[4 * v14];
          v6 = v10;
        }
        else
          *(_DWORD *)v5 = v7;
          v5 += 4;
      }
      ++v2;
    }
    while ( v3 != v2 );
  }
  if ( v6 == v5 )
    v17 = &ItemInstance::EMPTY_ITEM;
    if ( !v6 )
      goto LABEL_30;
  else
    v15 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
    v16 = 0;
    if ( (v5 - v6) >> 2 )
      v16 = Random::_genRandInt32(v15) % ((v5 - v6) >> 2);
    v17 = *(void **)&v6[4 * v16];
  operator delete(v6);
LABEL_30:
  if ( ptr )
    operator delete(ptr);
  return v17;
}


int __fastcall EnchantUtils::_convertBookCheck(EnchantUtils *this, ItemInstance *a2)
{
  EnchantUtils *v2; // r4@1
  int result; // r0@1
  int v4; // [sp+0h] [bp-58h]@3
  int v5; // [sp+8h] [bp-50h]@7
  void *v6; // [sp+24h] [bp-34h]@5
  void *ptr; // [sp+34h] [bp-24h]@3

  v2 = this;
  result = *(_DWORD *)this;
  if ( result )
  {
    result = *(_WORD *)(result + 18);
    if ( result == *(_WORD *)(Item::mBook + 18) )
    {
      ItemInstance::ItemInstance((ItemInstance *)&v4, Item::mEnchanted_book, 1);
      ItemInstance::operator=((int)v2, (int)&v4);
      if ( ptr )
        operator delete(ptr);
      if ( v6 )
        operator delete(v6);
      if ( v5 )
        (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      result = 0;
    }
  }
  return result;
}


int __fastcall EnchantUtils::getMeleeDamageBonus(EnchantUtils *this, const Mob *a2, Mob *a3)
{
  EnchantUtils *v3; // r4@1
  int v4; // r0@1
  float v5; // r1@1
  int v6; // r5@1
  int v10; // r0@1
  signed int v12; // r0@7
  EnchantmentInstance *v13; // r5@14
  int v14; // r6@15
  int (__fastcall *v15)(int, int, EnchantUtils *); // r7@15
  int v16; // r0@15
  char v20; // [sp+4h] [bp-5Ch]@8
  void *v21; // [sp+8h] [bp-58h]@12
  void *v22; // [sp+14h] [bp-4Ch]@10
  void *ptr; // [sp+20h] [bp-40h]@8
  EnchantmentInstance *v24; // [sp+2Ch] [bp-34h]@8
  EnchantmentInstance *v25; // [sp+30h] [bp-30h]@14

  v3 = this;
  v4 = (*(int (__fastcall **)(const Mob *))(*(_DWORD *)a2 + 908))(a2);
  v6 = v4;
  __asm { VLDR            S16, =0.0 }
  v10 = *(_BYTE *)(v4 + 15);
  _ZF = v10 == 0;
  if ( v10 )
    _ZF = *(_DWORD *)v6 == 0;
  if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v6) )
  {
    if ( *(_BYTE *)(v6 + 14) )
    {
      if ( ItemInstance::isEnchanted((ItemInstance *)v6) == 1 )
      {
        v12 = ItemInstance::getId((ItemInstance *)v6);
        LODWORD(v5) = *(_WORD *)(Item::mEnchanted_book + 18);
        if ( v12 != LODWORD(v5) )
        {
          ItemInstance::getEnchantsFromUserData((ItemInstance *)&v20, v6);
          ItemEnchants::getEnchants((ItemEnchants *)&v24, (int)&v20, 1);
          if ( ptr )
            operator delete(ptr);
          if ( v22 )
            operator delete(v22);
          if ( v21 )
            operator delete(v21);
          v13 = v24;
          __asm { VLDR            S16, =0.0 }
          if ( v24 != v25 )
          {
            do
            {
              v14 = *(_DWORD *)(Enchant::mEnchants + 4 * EnchantmentInstance::getEnchantType(v13));
              v15 = *(int (__fastcall **)(int, int, EnchantUtils *))(*(_DWORD *)v14 + 28);
              v16 = EnchantmentInstance::getEnchantLevel(v13);
              _R0 = v15(v14, v16, v3);
              __asm { VMOV            S0, R0 }
              v13 = (EnchantmentInstance *)((char *)v13 + 8);
              __asm { VADD.F32        S16, S0, S16 }
            }
            while ( !_ZF );
            v13 = v24;
          }
          if ( v13 )
            operator delete((void *)v13);
        }
      }
    }
  }
  __asm { VMOV            R0, S16 }
  return mce::Math::floor(_R0, v5);
}
