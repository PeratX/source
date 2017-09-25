

void __fastcall ReadOnlyBinaryStream::readVectorList<std::string>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<std::string>(this, a2, a3);
}


CommandOriginData *__fastcall ReadOnlyBinaryStream::getType<CommandOriginData>(int a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-20h]@1

  v2 = a1;
  serialize<CommandOriginData>::read((int)&v4, a2);
  CommandOriginData::CommandOriginData(v2, (int)&v4);
  return CommandOriginData::~CommandOriginData((CommandOriginData *)&v4);
}


void __fastcall ReadOnlyBinaryStream::getType<StructureEditorData>(int a1, int a2)
{
  ReadOnlyBinaryStream::getType<StructureEditorData>(a1, a2);
}


char *__fastcall ReadOnlyBinaryStream::readVectorList(ReadOnlyBinaryStream *this, int a2)
{
  int v2; // r5@1
  ReadOnlyBinaryStream *v3; // r9@1
  unsigned int v4; // r8@1
  char *result; // r0@1
  unsigned int v6; // r6@4
  int v7; // r11@6
  __int64 v8; // r0@6
  void *v9; // r4@8
  char *v10; // r7@8
  signed int v11; // r1@8
  unsigned int v12; // r2@8
  unsigned int v13; // r1@10
  unsigned int v14; // r10@10
  char *v15; // r11@17
  int v16; // r11@19

  v2 = a2;
  v3 = this;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  v4 = ReadOnlyBinaryStream::getUnsignedVarInt(this);
  result = 0;
  if ( v4 >> 30 )
  {
    result = *(char **)(**((_DWORD **)v3 + 3) - 12);
    *((_DWORD *)v3 + 1) = result;
  }
  else if ( v4 )
    v6 = 0;
    do
    {
      result = (char *)*((_DWORD *)v3 + 1);
      if ( *(char **)(**((_DWORD **)v3 + 3) - 12) == result )
        break;
      v7 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
      v8 = *(_QWORD *)(v2 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        v9 = *(void **)v2;
        v10 = 0;
        v11 = v8 - *(_DWORD *)v2;
        v12 = v11 >> 2;
        if ( !(v11 >> 2) )
          v12 = 1;
        v13 = v12 + (v11 >> 2);
        v14 = v13;
        if ( 0 != v13 >> 30 )
          v14 = 0x3FFFFFFF;
        if ( v13 < v12 )
        if ( v14 )
        {
          if ( v14 >= 0x40000000 )
            sub_21E57F4();
          v10 = (char *)operator new(4 * v14);
          LODWORD(v8) = *(_QWORD *)v2 >> 32;
          v9 = (void *)*(_QWORD *)v2;
        }
        *(_DWORD *)&v10[v8 - (_DWORD)v9] = v7;
        v15 = &v10[v8 - (_DWORD)v9];
        if ( ((signed int)v8 - (signed int)v9) >> 2 )
          _aeabi_memmove4(v10, v9);
        v16 = (int)(v15 + 4);
        if ( v9 )
          operator delete(v9);
        result = &v10[4 * v14];
        *(_DWORD *)v2 = v10;
        *(_DWORD *)(v2 + 4) = v16;
        *(_DWORD *)(v2 + 8) = result;
      }
      else
        *(_DWORD *)v8 = v7;
        result = (char *)(v8 + 4);
        *(_DWORD *)(v2 + 4) = result;
      ++v6;
    }
    while ( v6 < v4 );
  return result;
}


ReadOnlyBinaryStream *__fastcall ReadOnlyBinaryStream::~ReadOnlyBinaryStream(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E91A4;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
  return v1;
}


Recipe *__fastcall ReadOnlyBinaryStream::getType<ShapedRecipe>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v4; // [sp+0h] [bp-70h]@1

  v2 = a1;
  serialize<ShapedRecipe>::read(&v4, a2);
  ShapedRecipe::ShapedRecipe(v2, (int)&v4);
  return ShapedRecipe::~ShapedRecipe((ShapedRecipe *)&v4);
}


signed int __fastcall ReadOnlyBinaryStream::getBool(ReadOnlyBinaryStream *this)
{
  signed int result; // r0@1
  unsigned __int8 v2; // [sp+7h] [bp-9h]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  result = v2;
  if ( v2 )
    result = 1;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getType<GameRulesChangedPacketData>(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-Ch]@1

  v2 = a1;
  serialize<GameRulesChangedPacketData>::read((int)&v4, a2);
  *(_DWORD *)v2 = v4;
  result = v6;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = result;
  return result;
}


unsigned int __fastcall ReadOnlyBinaryStream::getVarInt(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r6@1
  char v10; // [sp+3h] [bp-15h]@2

  v1 = this;
  v2 = 0;
  _R7 = 0;
  do
  {
    (*(void (__fastcall **)(ReadOnlyBinaryStream *, char *, signed int))(*(_DWORD *)v1 + 8))(v1, &v10, 1);
    _R7 |= (v10 & 0x7F) << v2;
    v2 += 7;
  }
  while ( v10 & 0x80 );
  __asm { SBFX.W          R0, R7, #0, #1 }
  return _R0 ^ (_R7 >> 1);
}


void __fastcall ReadOnlyBinaryStream::getType<StructureEditorData>(int a1, int a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+0h] [bp-78h]@1
  int v10; // [sp+4h] [bp-74h]@1

  v2 = a1;
  serialize<StructureEditorData>::read((StructureEditorData *)&v9, a2);
  StructureEditorData::StructureEditorData(v2, (int)&v9);
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v10 - 4);
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
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


void __fastcall ReadOnlyBinaryStream::readType<GameRulesChangedPacketData>(int a1, int a2)
{
  int v2; // r5@1
  __int64 v3; // kr00_8@1
  _DWORD *v4; // r4@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r4@15
  int v9; // r6@15
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  int *v12; // r0@25
  void *v13; // [sp+4h] [bp-34h]@1
  void *v14; // [sp+8h] [bp-30h]@1
  int v15; // [sp+Ch] [bp-2Ch]@1

  v2 = a2;
  ReadOnlyBinaryStream::getType<GameRulesChangedPacketData>((int)&v13, a1);
  v3 = *(_QWORD *)v2;
  *(_DWORD *)v2 = v13;
  v13 = 0;
  *(_DWORD *)(v2 + 4) = v14;
  v14 = 0;
  *(_DWORD *)(v2 + 8) = v15;
  v15 = 0;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    v4 = (_DWORD *)v3;
    do
    {
      v7 = (int *)(*v4 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*v4 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v4 += 3;
    }
    while ( v4 != (_DWORD *)HIDWORD(v3) );
  }
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  v9 = (int)v14;
  v8 = v13;
  if ( v13 != v14 )
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v8 = (char *)v8 + 12;
    while ( v8 != (void *)v9 );
    v8 = v13;
  if ( v8 )
    operator delete(v8);
}


void __fastcall ReadOnlyBinaryStream::~ReadOnlyBinaryStream(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream::~ReadOnlyBinaryStream(this);
}


int __fastcall ReadOnlyBinaryStream::getSignedInt(ReadOnlyBinaryStream *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


int __fastcall ReadOnlyBinaryStream::getFloat(ReadOnlyBinaryStream *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


void __fastcall ReadOnlyBinaryStream::~ReadOnlyBinaryStream(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E91A4;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
  operator delete((void *)v1);
}


char *__fastcall ReadOnlyBinaryStream::readVectorList<ItemInstance>(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r10@1
  int v4; // r8@1
  __int64 v5; // kr00_8@1
  int v6; // r4@1
  int v7; // r6@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  int v11; // r6@10
  unsigned int v12; // r5@10
  char *result; // r0@13
  unsigned int v14; // r1@14
  unsigned int v15; // r7@17
  unsigned int v16; // r0@18
  unsigned int v17; // r1@19
  __int64 v18; // r0@24
  int v19; // [sp+0h] [bp-70h]@24
  unsigned int v20; // [sp+8h] [bp-68h]@31
  void *v21; // [sp+24h] [bp-4Ch]@29
  void *ptr; // [sp+34h] [bp-3Ch]@27
  char v23; // [sp+4Bh] [bp-25h]@11

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = a1;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = *a2;
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( HIDWORD(v5) != v7 );
  }
  v11 = 0;
  v12 = 0;
  *((_DWORD *)v3 + 1) = v5;
  do
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v6 + 8))(v6, &v23, 1);
    v12 |= (v23 & 0x7F) << v11;
    v11 += 7;
  while ( v23 & 0x80 );
  if ( v12 < 0x38E38E4 )
    v14 = v12;
    if ( v12 > 0x1000 )
      v14 = 4096;
    result = std::vector<ItemInstance,std::allocator<ItemInstance>>::reserve((int)v3, v14);
    if ( v12 )
      v15 = 0;
      do
      {
        v16 = 954437177 * ((signed int)(((unsigned __int64)*v3 >> 32) - *v3) >> 3);
        if ( v15 >= v16 )
        {
          v17 = v16 + 4096;
          if ( v12 < v16 + 4096 )
            v17 = v12;
          std::vector<ItemInstance,std::allocator<ItemInstance>>::reserve((int)v3, v17);
        }
        result = *(char **)(v6 + 4);
        if ( *(char **)(**(_DWORD **)(v6 + 12) - 12) == result )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(int *, int, int))(v4 + 12))(&v19, v4, v6);
        v18 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v18 == HIDWORD(v18) )
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
            (unsigned __int64 *)v3,
            (int)&v19);
        else
          ItemInstance::ItemInstance((ItemInstance *)v18, (int)&v19);
          *((_DWORD *)v3 + 1) += 72;
        if ( ptr )
          operator delete(ptr);
        if ( v21 )
          operator delete(v21);
        result = (char *)v20;
        if ( v20 )
          result = (char *)(*(int (**)(void))(*(_DWORD *)v20 + 4))();
        ++v15;
        v20 = 0;
      }
      while ( v12 != v15 );
  else
    result = *(char **)(**(_DWORD **)(v6 + 12) - 12);
    *(_DWORD *)(v6 + 4) = result;
  return result;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<GameRulesChangedPacketData::NamedRule>(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r11@1
  int v4; // r9@1
  __int64 v5; // kr00_8@1
  int v6; // r4@1
  char *v7; // r1@2
  _DWORD *v8; // r10@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v10; // r2@3
  signed int v11; // r7@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@9
  char *v13; // r7@9
  int *v14; // r0@10
  int v15; // r6@12
  unsigned int v16; // r5@12
  unsigned int v17; // r1@16
  unsigned int v18; // r7@19
  __int64 v19; // r0@21
  char *v20; // r0@24
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int v23; // r0@35
  unsigned int v24; // r1@36
  char *v25; // [sp+4h] [bp-34h]@21
  __int64 v26; // [sp+8h] [bp-30h]@22
  char v27; // [sp+10h] [bp-28h]@2

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = a1;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = &v27;
    v8 = (_DWORD *)v5;
    v9 = &pthread_create;
    do
    {
      v14 = (int *)(*v8 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v8 - 4);
        if ( v9 )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          v12 = v9;
          v13 = v7;
          j_j_j_j__ZdlPv_9(v14);
          v7 = v13;
          v9 = v12;
      }
      v8 += 3;
    }
    while ( v8 != (_DWORD *)HIDWORD(v5) );
  }
  v15 = 0;
  v16 = 0;
  *((_DWORD *)v3 + 1) = v5;
  do
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v6 + 8))(v6, &v27, 1);
    v16 |= (v27 & 0x7F) << v15;
    v15 += 7;
  while ( v27 & 0x80 );
  if ( v16 < 0x15555556 )
    v17 = v16;
    if ( v16 > 0x1000 )
      v17 = 4096;
    std::vector<GameRulesChangedPacketData::NamedRule,std::allocator<GameRulesChangedPacketData::NamedRule>>::reserve(
      (int)v3,
      v17);
    if ( v16 )
      v18 = 0;
      do
        v23 = -1431655765 * ((signed int)(((unsigned __int64)*v3 >> 32) - *v3) >> 2);
        if ( v18 >= v23 )
          v24 = v23 + 4096;
          if ( v16 < v23 + 4096 )
            v24 = v16;
          std::vector<GameRulesChangedPacketData::NamedRule,std::allocator<GameRulesChangedPacketData::NamedRule>>::reserve(
            (int)v3,
            v24);
        if ( *(_DWORD *)(**(_DWORD **)(v6 + 12) - 12) == *(_DWORD *)(v6 + 4) )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char **, int, int))(v4 + 12))(&v25, v4, v6);
        v19 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<GameRulesChangedPacketData::NamedRule,std::allocator<GameRulesChangedPacketData::NamedRule>>::_M_emplace_back_aux<GameRulesChangedPacketData::NamedRule>(
            (unsigned __int64 *)v3,
            (int)&v25);
          *(_DWORD *)v19 = v25;
          v25 = (char *)&unk_28898CC;
          *(_QWORD *)(v19 + 4) = v26;
          *((_DWORD *)v3 + 1) += 12;
        v20 = v25 - 12;
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
          }
          else
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        ++v18;
      while ( v18 != v16 );
  else
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(**(_DWORD **)(v6 + 12) - 12);
}


int __fastcall ReadOnlyBinaryStream::getType<Vec3>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int result; // r0@1
  int v6; // [sp+0h] [bp-20h]@1
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  (*(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)a2 + 8))(a2, &v6, 4);
  (*(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)v2 + 8))(v2, &v8, 4);
  v4 = v8;
  result = v8;
  v7 = v4;
  *(_QWORD *)v3 = *(_QWORD *)&v6;
  *(_DWORD *)(v3 + 8) = result;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getDouble(ReadOnlyBinaryStream *this)
{
  int result; // r0@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  __asm
  {
    VLDR            D0, [SP,#0x10+var_10]
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall ReadOnlyBinaryStream::getString(ReadOnlyBinaryStream *this, int a2)
{
  int v2; // r5@1
  char *v3; // r8@1
  int v4; // r4@1
  size_t v5; // r6@1
  int result; // r0@4
  char v7; // [sp+3h] [bp+0h]@2

  v2 = a2;
  v3 = (char *)this;
  v4 = 0;
  v5 = 0;
  do
  {
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v7, 1);
    v5 |= (v7 & 0x7F) << v4;
    v4 += 7;
  }
  while ( v7 & 0x80 );
  *(_DWORD *)v3 = &unk_28898CC;
  if ( v5 <= 0x3FFFFFFC )
    sub_21E849C(v3, v5, 0);
    result = (*(int (__fastcall **)(int, _DWORD, size_t))(*(_DWORD *)v2 + 8))(v2, *(_DWORD *)v3, v5);
  else
    result = *(_DWORD *)(**(_DWORD **)(v2 + 12) - 12);
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


unsigned int __fastcall ReadOnlyBinaryStream::getType<NetworkBlockPosition>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r7@1
  unsigned int v5; // r4@1
  int v6; // r6@3
  int v7; // r7@3
  unsigned int v8; // r10@5
  signed int v9; // r9@5
  int v10; // r6@5
  unsigned int result; // r0@7
  char v18; // [sp+1h] [bp-27h]@2
  char v19; // [sp+2h] [bp-26h]@4
  char v20; // [sp+3h] [bp-25h]@6

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  do
  {
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v18, 1);
    v5 |= (v18 & 0x7F) << v4;
    v4 += 7;
  }
  while ( v18 & 0x80 );
  v6 = 0;
  v7 = 0;
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v19, 1);
    v7 |= (v19 & 0x7F) << v6;
    v6 += 7;
  while ( v19 & 0x80 );
  v8 = v5 >> 1;
  v9 = (signed int)(v5 << 31) >> 31;
  v10 = 0;
  _R4 = 0;
    (*(void (__fastcall **)(_DWORD, char *, _DWORD))(*(_DWORD *)v2 + 8))(v2, &v20, 1);
    _R4 |= (v20 & 0x7F) << v10;
    v10 += 7;
  while ( v20 & 0x80 );
  *(_DWORD *)v3 = v9 ^ v8;
  *(_DWORD *)(v3 + 4) = v7;
  __asm { SBFX.W          R0, R4, #0, #1 }
  result = _R0 ^ (_R4 >> 1);
  *(_DWORD *)(v3 + 8) = result;
  return result;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<SyncedAttribute>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<SyncedAttribute>(this, a2, a3);
}


signed int __fastcall ReadOnlyBinaryStream::read(ReadOnlyBinaryStream *this, void *a2, unsigned int a3)
{
  unsigned int v3; // r6@1
  ReadOnlyBinaryStream *v4; // r4@1
  void *v5; // r5@1
  signed int result; // r0@1
  unsigned int v7; // r3@2
  int *v8; // r0@5
  int *v9; // r0@6
  unsigned int v10; // r3@6
  int v11; // r1@6

  v3 = a3;
  v4 = this;
  v5 = a2;
  result = 1;
  if ( a3 )
  {
    v7 = *((_DWORD *)v4 + 1);
    if ( v7 + a3 >= v7 )
      result = 0;
    if ( result || (v8 = (int *)*((_DWORD *)v4 + 3), v7 + a3 > *(_DWORD *)(*v8 - 12)) )
    {
      _aeabi_memclr(a2, a3);
      v9 = (int *)*((_DWORD *)v4 + 3);
      v10 = *((_DWORD *)v4 + 1);
      v11 = *(_DWORD *)(*v9 - 12);
      if ( v11 > v10 )
      {
        sub_21E761C(v9, v5, v11 - v10, v10);
        *((_DWORD *)v4 + 1) = *(_DWORD *)(**((_DWORD **)v4 + 3) - 12);
        result = 0;
      }
      else
    }
    else
      sub_21E761C(v8, a2, a3, v7);
      *((_DWORD *)v4 + 1) += v3;
      result = 1;
  }
  return result;
}


unsigned int __fastcall ReadOnlyBinaryStream::getSignedBigEndianInt(ReadOnlyBinaryStream *this)
{
  unsigned int v2; // [sp+4h] [bp-Ch]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return __rev(v2);
}


__int64 __fastcall ReadOnlyBinaryStream::getSignedInt64(ReadOnlyBinaryStream *this)
{
  __int64 v2; // [sp+0h] [bp-10h]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


int __fastcall ReadOnlyBinaryStream::getType<EntityRuntimeID>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r6@1
  int result; // r0@2
  unsigned int v8; // r2@2
  unsigned int v9; // r3@2
  unsigned __int8 v10; // [sp+3h] [bp-1Dh]@2

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    (*(void (__fastcall **)(int, unsigned __int8 *, signed int))(*(_DWORD *)v2 + 8))(v2, &v10, 1);
    result = v10;
    v8 = v10 & 0x7F;
    v9 = v8 >> (32 - v4);
    if ( v4 - 32 >= 0 )
      v9 = v8 << (v4 - 32);
    v6 |= v9;
    v5 |= v8 << v4;
    v4 += 7;
  }
  while ( v10 & 0x80 );
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 4) = v6;
  return result;
}


int __fastcall ReadOnlyBinaryStream::ReadOnlyBinaryStream(int result, _DWORD *a2)
{
  *(_DWORD *)result = &off_26E91A4;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = *a2;
  *a2 = &unk_28898CC;
  *(_DWORD *)(result + 12) = result + 8;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getFixedFloat(ReadOnlyBinaryStream *this, int a2, double _R2)
{
  ReadOnlyBinaryStream *v7; // r4@1
  int v8; // r6@1
  int v9; // r7@1
  unsigned int v10; // r5@1
  unsigned int v11; // r2@2
  unsigned int v12; // r3@2
  int v13; // off@5
  int result; // r0@5
  char v16; // [sp+7h] [bp-21h]@2

  __asm { VMOV            D8, R2, R3 }
  v7 = this;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    (*(void (__fastcall **)(ReadOnlyBinaryStream *, char *, signed int))(*(_DWORD *)v7 + 8))(v7, &v16, 1);
    v11 = v16 & 0x7F;
    v12 = v11 >> (32 - v8);
    if ( v8 - 32 >= 0 )
      v12 = v11 << (v8 - 32);
    v10 |= v12;
    v9 |= v11 << v8;
    v8 += 7;
  }
  while ( v16 & 0x80 );
  v13 = __RCR__(v9, 1);
  _R0 = _aeabi_l2d(v13 ^ (v9 << 31 >> 31), (v10 >> 1) ^ (v9 << 31 >> 31));
  __asm
    VMOV            D0, R0, R1
    VDIV.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMOV            R0, S0
  return result;
}


__int64 __fastcall ReadOnlyBinaryStream::getUnsignedVarInt64(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // r6@1
  unsigned int v4; // r2@2
  unsigned int v5; // r3@2
  char v7; // [sp+7h] [bp-19h]@2

  v1 = this;
  v2 = 0;
  v3 = 0LL;
  do
  {
    (*(void (__fastcall **)(ReadOnlyBinaryStream *, char *, signed int))(*(_DWORD *)v1 + 8))(v1, &v7, 1);
    v4 = v7 & 0x7F;
    v5 = v4 >> (32 - v2);
    if ( v2 - 32 >= 0 )
      v5 = v4 << (v2 - 32);
    HIDWORD(v3) |= v5;
    LODWORD(v3) = v3 | (v4 << v2);
    v2 += 7;
  }
  while ( v7 & 0x80 );
  return v3;
}


int __fastcall ReadOnlyBinaryStream::getUnsignedVarInt(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r7@1
  int v3; // r6@1
  char v5; // [sp+3h] [bp-15h]@2

  v1 = this;
  v2 = 0;
  v3 = 0;
  do
  {
    (*(void (__fastcall **)(ReadOnlyBinaryStream *, char *, signed int))(*(_DWORD *)v1 + 8))(v1, &v5, 1);
    v3 |= (v5 & 0x7F) << v2;
    v2 += 7;
  }
  while ( v5 & 0x80 );
  return v3;
}


LevelSettings *__fastcall ReadOnlyBinaryStream::getType<LevelSettings>(double a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-D8h]@1

  v1 = LODWORD(a1);
  LODWORD(a1) = &v3;
  serialize<LevelSettings>::read(a1);
  LevelSettings::LevelSettings(v1, (int)&v3);
  return LevelSettings::~LevelSettings((LevelSettings *)&v3);
}


int __fastcall ReadOnlyBinaryStream::getType<InventoryAction>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int result; // r0@11
  int v7; // [sp+0h] [bp-B0h]@1
  int v8; // [sp+4h] [bp-ACh]@1
  int v9; // [sp+8h] [bp-A8h]@1
  int v10; // [sp+Ch] [bp-A4h]@1
  int v11; // [sp+10h] [bp-A0h]@1
  int v12; // [sp+18h] [bp-98h]@11
  void *v13; // [sp+34h] [bp-7Ch]@9
  void *v14; // [sp+44h] [bp-6Ch]@7
  int v15; // [sp+58h] [bp-58h]@1
  int v16; // [sp+60h] [bp-50h]@5
  void *v17; // [sp+7Ch] [bp-34h]@3
  void *ptr; // [sp+8Ch] [bp-24h]@1

  v2 = a1;
  serialize<InventoryAction>::read((int)&v7, a2);
  v3 = v8;
  v4 = v9;
  v5 = v10;
  *(_DWORD *)v2 = v7;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v5;
  ItemInstance::ItemInstance((ItemInstance *)(v2 + 16), (int)&v11);
  ItemInstance::ItemInstance((ItemInstance *)(v2 + 88), (int)&v15);
  if ( ptr )
    operator delete(ptr);
  if ( v17 )
    operator delete(v17);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v16 = 0;
  if ( v14 )
    operator delete(v14);
  if ( v13 )
    operator delete(v13);
  result = v12;
  if ( v12 )
    result = (*(int (**)(void))(*(_DWORD *)v12 + 4))();
  return result;
}


void __fastcall ReadOnlyBinaryStream::readType<GameRulesChangedPacketData>(int a1, int a2)
{
  ReadOnlyBinaryStream::readType<GameRulesChangedPacketData>(a1, a2);
}


int __fastcall ReadOnlyBinaryStream::getType<ItemInstance>(ItemInstance *a1, int a2)
{
  ItemInstance *v2; // r4@1
  int result; // r0@5
  int v4; // [sp+0h] [bp-58h]@1
  int v5; // [sp+8h] [bp-50h]@5
  void *v6; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v2 = a1;
  serialize<ItemInstance>::read((ItemInstance *)&v4, a2);
  ItemInstance::ItemInstance(v2, (int)&v4);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


Recipe *__fastcall ReadOnlyBinaryStream::getType<ShapelessRecipe>(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v4; // [sp+0h] [bp-70h]@1

  v2 = a1;
  serialize<ShapelessRecipe>::read(&v4, a2);
  ShapelessRecipe::ShapelessRecipe(v2, (int)&v4);
  return ShapelessRecipe::~ShapelessRecipe((ShapelessRecipe *)&v4);
}


int __fastcall ReadOnlyBinaryStream::getVarInt64(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r6@1
  int v3; // r7@1
  int v4; // r5@1
  unsigned int v5; // r2@2
  unsigned int v6; // r3@2
  int v7; // off@5
  char v9; // [sp+7h] [bp-19h]@2

  v1 = this;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    (*(void (__fastcall **)(ReadOnlyBinaryStream *, char *, signed int))(*(_DWORD *)v1 + 8))(v1, &v9, 1);
    v5 = v9 & 0x7F;
    v6 = v5 >> (32 - v2);
    if ( v2 - 32 >= 0 )
      v6 = v5 << (v2 - 32);
    v4 |= v6;
    v3 |= v5 << v2;
    v2 += 7;
  }
  while ( v9 & 0x80 );
  v7 = __RCR__(v3, 1);
  return v7 ^ (v3 << 31 >> 31);
}


void __fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::ParamData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::ParamData>(this, a2, a3);
}


void __fastcall ReadOnlyBinaryStream::readVectorList<UpdateAttributesPacket::AttributeData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<UpdateAttributesPacket::AttributeData>(this, a2, a3);
}


void __fastcall ReadOnlyBinaryStream::readVectorList<std::string>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  __int64 *v3; // r11@1
  int v4; // r10@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r8@1
  char *v7; // r1@2
  _DWORD *v8; // r9@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v10; // r2@3
  signed int v11; // r6@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r4@9
  char *v13; // r6@9
  int *v14; // r0@10
  unsigned int v15; // r0@12
  unsigned int v16; // r7@12
  unsigned int v17; // r1@14
  unsigned int v18; // r5@17
  __int64 v19; // r0@19
  int v20; // r1@20
  void *v21; // r0@22
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  signed int v24; // r0@33
  unsigned int v25; // r1@34
  void *v26; // [sp+4h] [bp-34h]@19
  char v27; // [sp+8h] [bp-30h]@2

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = &v27;
    v8 = (_DWORD *)v5;
    v9 = &pthread_create;
    do
    {
      v14 = (int *)(*v8 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v8 - 4);
        if ( v9 )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          v12 = v9;
          v13 = v7;
          j_j_j_j_j__ZdlPv_9(v14);
          v7 = v13;
          v9 = v12;
      }
      ++v8;
    }
    while ( v8 != (_DWORD *)HIDWORD(v5) );
  }
  *((_DWORD *)v3 + 1) = v5;
  v15 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  v16 = v15;
  if ( v15 < 0x40000000 )
    v17 = v15;
    if ( v15 > 0x1000 )
      v17 = 4096;
    std::vector<std::string,std::allocator<std::string>>::reserve((int)v3, v17);
    if ( v16 )
      v18 = 0;
      do
        v24 = ((unsigned __int64)*v3 >> 32) - *v3;
        if ( v18 >= v24 >> 2 )
          v25 = (v24 >> 2) + 4096;
          if ( v16 < v25 )
            v25 = v16;
          std::vector<std::string,std::allocator<std::string>>::reserve((int)v3, v25);
        if ( *(_DWORD *)(**((_DWORD **)v6 + 3) - 12) == *((_DWORD *)v6 + 1) )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_DA7654();
        (*(void (__fastcall **)(void **, int, ReadOnlyBinaryStream *))(v4 + 12))(&v26, v4, v6);
        v19 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)v3,
            &v26);
          v20 = (int)v26;
          *(_DWORD *)v19 = v26;
          HIDWORD(v19) = &unk_28898CC;
          v26 = &unk_28898CC;
          *((_DWORD *)v3 + 1) = v19 + 4;
        v21 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          }
          else
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j_j__ZdlPv_9(v21);
        ++v18;
      while ( v18 != v16 );
  else
    *((_DWORD *)v6 + 1) = *(_DWORD *)(**((_DWORD **)v6 + 3) - 12);
}


void __fastcall ReadOnlyBinaryStream::readVectorList<SyncedAttribute>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  __int64 *v3; // r10@1
  int v4; // r11@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r8@1
  char *v7; // r1@2
  _DWORD *v8; // r9@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v10; // r2@3
  signed int v11; // r6@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r4@9
  char *v13; // r6@9
  int *v14; // r0@10
  unsigned int v15; // r0@12
  unsigned int v16; // r7@12
  unsigned int v17; // r1@14
  unsigned int v18; // r5@17
  __int64 v19; // r0@19
  int v20; // r0@20
  int v21; // r2@20
  int v22; // r3@20
  char *v23; // r0@22
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  signed int v26; // r0@33
  unsigned int v27; // r1@34
  char *v28; // [sp+8h] [bp-38h]@19
  int v29; // [sp+Ch] [bp-34h]@20
  int v30; // [sp+10h] [bp-30h]@20
  int v31; // [sp+14h] [bp-2Ch]@20
  char v32; // [sp+18h] [bp-28h]@2

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = &v32;
    v8 = (_DWORD *)v5;
    v9 = &pthread_create;
    do
    {
      v14 = (int *)(*v8 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v8 - 4);
        if ( v9 )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          v12 = v9;
          v13 = v7;
          j_j_j_j__ZdlPv_9(v14);
          v7 = v13;
          v9 = v12;
      }
      v8 += 4;
    }
    while ( v8 != (_DWORD *)HIDWORD(v5) );
  }
  *((_DWORD *)v3 + 1) = v5;
  v15 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  v16 = v15;
  if ( v15 < 0x10000000 )
    v17 = v15;
    if ( v15 > 0x1000 )
      v17 = 4096;
    std::vector<SyncedAttribute,std::allocator<SyncedAttribute>>::reserve((int)v3, v17);
    if ( v16 )
      v18 = 0;
      do
        v26 = ((unsigned __int64)*v3 >> 32) - *v3;
        if ( v18 >= v26 >> 4 )
          v27 = (v26 >> 4) + 4096;
          if ( v16 < v27 )
            v27 = v16;
          std::vector<SyncedAttribute,std::allocator<SyncedAttribute>>::reserve((int)v3, v27);
        if ( *(_DWORD *)(**((_DWORD **)v6 + 3) - 12) == *((_DWORD *)v6 + 1) )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char **, int, ReadOnlyBinaryStream *))(v4 + 12))(&v28, v4, v6);
        v19 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<SyncedAttribute,std::allocator<SyncedAttribute>>::_M_emplace_back_aux<SyncedAttribute>(
            (unsigned __int64 *)v3,
            (int)&v28);
          *(_DWORD *)v19 = v28;
          v20 = v19 + 4;
          v28 = (char *)&unk_28898CC;
          v21 = v30;
          v22 = v31;
          *(_DWORD *)v20 = v29;
          *(_DWORD *)(v20 + 4) = v21;
          *(_DWORD *)(v20 + 8) = v22;
          *((_DWORD *)v3 + 1) += 16;
        v23 = v28 - 12;
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v28 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          }
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        ++v18;
      while ( v18 != v16 );
  else
    *((_DWORD *)v6 + 1) = *(_DWORD *)(**((_DWORD **)v6 + 3) - 12);
}


int __fastcall ReadOnlyBinaryStream::getNormalizedFloat(ReadOnlyBinaryStream *this)
{
  ReadOnlyBinaryStream *v1; // r4@1
  int v2; // r6@1
  int v3; // r7@1
  unsigned int v4; // r5@1
  unsigned int v5; // r2@2
  unsigned int v6; // r3@2
  int v7; // off@5
  int result; // r0@5
  char v14; // [sp+7h] [bp-19h]@2

  v1 = this;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    (*(void (__fastcall **)(ReadOnlyBinaryStream *, char *, signed int))(*(_DWORD *)v1 + 8))(v1, &v14, 1);
    v5 = v14 & 0x7F;
    v6 = v5 >> (32 - v2);
    if ( v2 - 32 >= 0 )
      v6 = v5 << (v2 - 32);
    v4 |= v6;
    v3 |= v5 << v2;
    v2 += 7;
  }
  while ( v14 & 0x80 );
  v7 = __RCR__(v3, 1);
  _R0 = _aeabi_l2d(v7 ^ (v3 << 31 >> 31), (v4 >> 1) ^ (v3 << 31 >> 31));
  __asm
    VLDR            D0, =4.65661288e-10
    VMOV            D1, R0, R1
    VMUL.F64        D0, D1, D0
    VCVT.F32.F64    S0, D0
    VMOV            R0, S0
  return result;
}


int __fastcall ReadOnlyBinaryStream::getType<StructureSettings>(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r5@1
  int result; // r0@1
  int v11; // [sp+0h] [bp-48h]@1
  int v12; // [sp+4h] [bp-44h]@1
  int v13; // [sp+8h] [bp-40h]@1
  int v14; // [sp+Ch] [bp-3Ch]@1
  int v15; // [sp+10h] [bp-38h]@1
  int v16; // [sp+14h] [bp-34h]@1
  int v17; // [sp+18h] [bp-30h]@1
  int v18; // [sp+1Ch] [bp-2Ch]@1
  int v19; // [sp+20h] [bp-28h]@1
  int v20; // [sp+24h] [bp-24h]@1
  int v21; // [sp+28h] [bp-20h]@1
  int v22; // [sp+2Ch] [bp-1Ch]@1
  int v23; // [sp+30h] [bp-18h]@1
  int v24; // [sp+34h] [bp-14h]@1

  v2 = a1;
  serialize<StructureSettings>::read((int)&v11, a2);
  v3 = v12;
  v4 = v13;
  v5 = v14;
  *(_DWORD *)v2 = v11;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v5;
  v6 = v2 + 16;
  v7 = v16;
  v8 = v17;
  v9 = v18;
  *(_DWORD *)v6 = v15;
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  *(_DWORD *)(v6 + 12) = v9;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 32) = v19;
  *(_DWORD *)(v2 + 36) = v20;
  *(_DWORD *)(v2 + 40) = v21;
  *(_DWORD *)(v2 + 44) = v22;
  *(_DWORD *)(v2 + 48) = v23;
  result = v24;
  *(_DWORD *)(v2 + 52) = v24;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getUnsignedInt(ReadOnlyBinaryStream *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


int __fastcall ReadOnlyBinaryStream::getUnsignedChar(ReadOnlyBinaryStream *this)
{
  unsigned __int8 v2; // [sp+7h] [bp-9h]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


PackInstanceId *__fastcall ReadOnlyBinaryStream::readVectorList<PackInstanceId>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  int v3; // r10@1
  ReadOnlyBinaryStream *v4; // r6@1
  __int64 *v5; // r11@1
  __int64 v6; // kr00_8@1
  PackInstanceId *v7; // r0@2
  unsigned int v8; // r2@4
  PackInstanceId *result; // r0@5
  unsigned int v10; // r8@6
  ReadOnlyBinaryStream *v11; // r7@8
  int *v12; // r5@9
  int v13; // r9@10
  unsigned int v14; // r4@10
  int *v15; // r6@10
  int v16; // r9@10
  int *v17; // r0@10
  int *v18; // r5@10
  ReadOnlyBinaryStream *v19; // r4@18
  unsigned int v20; // r9@18
  int *v21; // r3@20
  unsigned int v22; // r8@20
  unsigned int v23; // r5@21
  char *v24; // r4@25
  int *v25; // r0@25
  int *v26; // r10@25
  int v27; // r1@30
  unsigned int v28; // r8@32
  __int64 v29; // kr20_8@33
  int v30; // r1@34
  int v31; // r2@34
  int v32; // r3@34
  ReadOnlyBinaryStream *v33; // [sp+4h] [bp-74h]@1
  unsigned int v34; // [sp+8h] [bp-70h]@4
  int v35; // [sp+Ch] [bp-6Ch]@1
  char v36; // [sp+18h] [bp-60h]@33
  int v37; // [sp+1Ch] [bp-5Ch]@34
  int v38; // [sp+20h] [bp-58h]@34
  int v39; // [sp+24h] [bp-54h]@34
  int v40; // [sp+28h] [bp-50h]@34
  char v41; // [sp+40h] [bp-38h]@34
  void *v42; // [sp+48h] [bp-30h]@34

  v3 = a3;
  v4 = this;
  v5 = a2;
  v35 = a3;
  v33 = this;
  v6 = *a2;
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v7 = (PackInstanceId *)v6;
    do
      v7 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v7) + 56);
    while ( (PackInstanceId *)HIDWORD(v6) != v7 );
  }
  *((_DWORD *)v5 + 1) = v6;
  v8 = ReadOnlyBinaryStream::getUnsignedVarInt(v4);
  v34 = v8;
  if ( v8 < 0x4924925 )
    v10 = v8;
    if ( v8 > 0x1000 )
      v10 = 4096;
    v11 = v4;
    if ( v10 >= 0x4924925 )
      sub_21E5A04("vector::reserve");
    v12 = *(int **)v5;
    result = (PackInstanceId *)(-1227133513 * ((*((_DWORD *)v5 + 2) - *(_DWORD *)v5) >> 3));
    if ( (unsigned int)result >= v10 )
    {
      v15 = *(int **)v5;
    }
    else
      v13 = *((_DWORD *)v5 + 1);
      v14 = v8;
      v15 = (int *)std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_allocate_and_copy<PackInstanceId*>(
                     (int)v5,
                     v10,
                     *(int **)v5,
                     *((int **)v5 + 1));
      v16 = (v13 - (signed int)v12) >> 3;
      v18 = (int *)((unsigned __int64)*v5 >> 32);
      v17 = (int *)*v5;
      if ( v17 != v18 )
      {
        do
          v17 = (int *)((char *)PackInstanceId::~PackInstanceId((PackInstanceId *)v17) + 56);
        while ( v18 != v17 );
        v17 = *(int **)v5;
      }
      if ( v17 )
        operator delete(v17);
      v8 = v14;
      result = (PackInstanceId *)&v15[2 * v16];
      *(_DWORD *)v5 = v15;
      *((_DWORD *)v5 + 1) = result;
      *((_DWORD *)v5 + 2) = &v15[14 * v10];
    if ( v8 )
      v19 = v11;
      v20 = 0;
      while ( 1 )
        v21 = (int *)*((_DWORD *)v5 + 1);
        v22 = -1227133513 * (((char *)v21 - (char *)v15) >> 3);
        if ( v20 >= v22 )
        {
          v23 = v22 + 4096;
          if ( v8 < v22 + 4096 )
            v23 = v8;
          if ( v23 >= 0x4924925 )
            sub_21E5A04("vector::reserve");
          if ( -1227133513 * ((*((_DWORD *)v5 + 2) - (signed int)v15) >> 3) < v23 )
          {
            v24 = (char *)std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_allocate_and_copy<PackInstanceId*>(
                            (int)v5,
                            v23,
                            v15,
                            v21);
            v26 = (int *)((unsigned __int64)*v5 >> 32);
            v25 = (int *)*v5;
            if ( v25 != v26 )
            {
              do
                v25 = (int *)((char *)PackInstanceId::~PackInstanceId((PackInstanceId *)v25) + 56);
              while ( v26 != v25 );
              v25 = *(int **)v5;
            }
            v3 = v35;
            v8 = v34;
            if ( v25 )
              operator delete(v25);
              v8 = v34;
            v27 = (int)&v24[56 * v23];
            *(_DWORD *)v5 = v24;
            *((_DWORD *)v5 + 1) = &v24[56 * v22];
            v19 = v33;
            *((_DWORD *)v5 + 2) = v27;
          }
        }
        result = (PackInstanceId *)*((_DWORD *)v19 + 1);
        if ( *(PackInstanceId **)(**((_DWORD **)v19 + 3) - 12) == result )
          break;
        v28 = v8;
        if ( !*(_DWORD *)(v3 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char *, int, ReadOnlyBinaryStream *))(v3 + 12))(&v36, v3, v19);
        v29 = *(__int64 *)((char *)v5 + 4);
        if ( (_DWORD)v29 == HIDWORD(v29) )
          std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackInstanceId>(
            (unsigned __int64 *)v5,
            (int)&v36);
        else
          v30 = v37;
          v31 = v38;
          v32 = v39;
          *(_DWORD *)v29 = *(_DWORD *)&v36;
          *(_DWORD *)(v29 + 4) = v30;
          *(_DWORD *)(v29 + 8) = v31;
          *(_DWORD *)(v29 + 12) = v32;
          SemVersion::SemVersion(v29 + 16, (int)&v40);
          *(_BYTE *)(v29 + 40) = v41;
          *(_DWORD *)(v29 + 48) = v42;
          v42 = &unk_28898CC;
          *((_DWORD *)v5 + 1) += 56;
        result = PackInstanceId::~PackInstanceId((PackInstanceId *)&v36);
        ++v20;
        v8 = v28;
        if ( v20 == v28 )
        v15 = *(int **)v5;
  else
    result = *(PackInstanceId **)(**((_DWORD **)v4 + 3) - 12);
    *((_DWORD *)v4 + 1) = result;
  return result;
}


unsigned int __fastcall ReadOnlyBinaryStream::getType<ChunkPos>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r4@1
  unsigned int v5; // r7@1
  int v6; // r6@3
  unsigned int result; // r0@5
  char v14; // [sp+6h] [bp-22h]@2
  char v15; // [sp+7h] [bp-21h]@4

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  do
  {
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v14, 1);
    v5 |= (v14 & 0x7F) << v4;
    v4 += 7;
  }
  while ( v14 & 0x80 );
  v6 = 0;
  _R4 = 0;
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v15, 1);
    _R4 |= (v15 & 0x7F) << v6;
    v6 += 7;
  while ( v15 & 0x80 );
  *(_DWORD *)v3 = ((signed int)(v5 << 31) >> 31) ^ (v5 >> 1);
  __asm { SBFX.W          R0, R4, #0, #1 }
  result = _R0 ^ (_R4 >> 1);
  *(_DWORD *)(v3 + 4) = result;
  return result;
}


unsigned int __fastcall ReadOnlyBinaryStream::getType<EntityUniqueID>(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r7@1
  int v5; // r4@1
  unsigned int v6; // r6@1
  unsigned int v7; // r2@2
  unsigned int v8; // r3@2
  unsigned int result; // r0@5
  int v10; // off@5
  char v11; // [sp+3h] [bp-1Dh]@2

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v11, 1);
    v7 = v11 & 0x7F;
    v8 = v7 >> (32 - v4);
    if ( v4 - 32 >= 0 )
      v8 = v7 << (v4 - 32);
    v6 |= v8;
    v5 |= v7 << v4;
    v4 += 7;
  }
  while ( v11 & 0x80 );
  result = (v6 >> 1) ^ (v5 << 31 >> 31);
  v10 = __RCR__(v5, 1);
  *(_DWORD *)v3 = v10 ^ (v5 << 31 >> 31);
  *(_DWORD *)(v3 + 4) = result;
  return result;
}


char *__fastcall ReadOnlyBinaryStream::readVectorList<CraftingDataEntry>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  __int64 *v3; // r6@1
  int v4; // r9@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r10@1
  int v7; // r4@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  unsigned int v11; // r7@12
  char *result; // r0@13
  unsigned int v13; // r1@14
  unsigned int v14; // r11@17
  unsigned int v15; // r0@18
  unsigned int v16; // r1@19
  __int64 v17; // kr08_8@24
  unsigned int v18; // r0@25
  unsigned int v19; // [sp+8h] [bp-88h]@24
  int v20; // [sp+Ch] [bp-84h]@25
  int v21; // [sp+10h] [bp-80h]@25
  int v22; // [sp+18h] [bp-78h]@25
  int v23; // [sp+20h] [bp-70h]@31
  void *v24; // [sp+3Ch] [bp-54h]@29
  void *ptr; // [sp+4Ch] [bp-44h]@27
  int v26; // [sp+60h] [bp-30h]@25

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = v5;
    do
    {
      v8 = *(void **)(v7 + 68);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 24);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 24) = 0;
      if ( *(_DWORD *)v7 )
        (*(void (**)(void))(**(_DWORD **)v7 + 4))();
      *(_DWORD *)v7 = 0;
      v7 += 96;
    }
    while ( HIDWORD(v5) != v7 );
  }
  *((_DWORD *)v3 + 1) = v5;
  v11 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  if ( v11 < 0x2AAAAAB )
    v13 = v11;
    if ( v11 > 0x1000 )
      v13 = 4096;
    result = std::vector<CraftingDataEntry,std::allocator<CraftingDataEntry>>::reserve((int)v3, v13);
    if ( v11 )
      v14 = 0;
      do
      {
        v15 = -1431655765 * ((signed int)(((unsigned __int64)*v3 >> 32) - *v3) >> 5);
        if ( v14 >= v15 )
        {
          v16 = v15 + 4096;
          if ( v11 < v15 + 4096 )
            v16 = v11;
          std::vector<CraftingDataEntry,std::allocator<CraftingDataEntry>>::reserve((int)v3, v16);
        }
        result = (char *)*((_DWORD *)v6 + 1);
        if ( *(char **)(**((_DWORD **)v6 + 3) - 12) == result )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(unsigned int *, int, ReadOnlyBinaryStream *))(v4 + 12))(&v19, v4, v6);
        v17 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v17 == HIDWORD(v17) )
          std::vector<CraftingDataEntry,std::allocator<CraftingDataEntry>>::_M_emplace_back_aux<CraftingDataEntry>(
            (unsigned __int64 *)v3,
            (int)&v19);
        else
          v18 = v19;
          v19 = 0;
          *(_DWORD *)v17 = v18;
          *(_DWORD *)(v17 + 4) = v20;
          *(_DWORD *)(v17 + 8) = v21;
          ItemInstance::ItemInstance((ItemInstance *)(v17 + 16), (int)&v22);
          *(_DWORD *)(v17 + 88) = v26;
          *((_DWORD *)v3 + 1) += 96;
        if ( ptr )
          operator delete(ptr);
        if ( v24 )
          operator delete(v24);
        if ( v23 )
          (*(void (**)(void))(*(_DWORD *)v23 + 4))();
        v23 = 0;
        result = (char *)v19;
        if ( v19 )
          result = (char *)(*(int (**)(void))(*(_DWORD *)v19 + 4))();
        ++v14;
        v19 = 0;
      }
      while ( v11 != v14 );
  else
    result = *(char **)(**((_DWORD **)v6 + 3) - 12);
    *((_DWORD *)v6 + 1) = result;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getType<BlockPos>(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-Ch]@1

  v2 = a1;
  serialize<BlockPos>::read((int)&v4, a2);
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = v5;
  result = v6;
  *(_DWORD *)(v2 + 8) = v6;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getSignedShort(ReadOnlyBinaryStream *this)
{
  __int16 v2; // [sp+6h] [bp-Ah]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<GameRulesChangedPacketData::NamedRule>(int a1, __int64 *a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<GameRulesChangedPacketData::NamedRule>(a1, a2, a3);
}


void __fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::EnumData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  __int64 *v3; // r6@1
  int v4; // r8@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r10@1
  int v7; // r9@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  void *v10; // r0@11
  int *v11; // r0@13
  unsigned int v12; // r0@15
  unsigned int v13; // r7@15
  unsigned int v14; // r1@17
  unsigned int v15; // r9@20
  __int64 v16; // r0@22
  char *v17; // r0@27
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  signed int v20; // r0@38
  unsigned int v21; // r1@39
  char *v22; // [sp+8h] [bp-38h]@22
  void *ptr; // [sp+Ch] [bp-34h]@23
  int v24; // [sp+10h] [bp-30h]@23
  int v25; // [sp+14h] [bp-2Ch]@23

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = v5;
    do
    {
      v10 = *(void **)(v7 + 4);
      if ( v10 )
        operator delete(v10);
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v7 += 16;
    }
    while ( v7 != HIDWORD(v5) );
  }
  *((_DWORD *)v3 + 1) = v5;
  v12 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  v13 = v12;
  if ( v12 < 0x10000000 )
    v14 = v12;
    if ( v12 > 0x1000 )
      v14 = 4096;
    std::vector<AvailableCommandsPacket::EnumData,std::allocator<AvailableCommandsPacket::EnumData>>::reserve(
      (int)v3,
      v14);
    if ( v13 )
      v15 = 0;
      do
        v20 = ((unsigned __int64)*v3 >> 32) - *v3;
        if ( v15 >= v20 >> 4 )
          v21 = (v20 >> 4) + 4096;
          if ( v13 < v21 )
            v21 = v13;
          std::vector<AvailableCommandsPacket::EnumData,std::allocator<AvailableCommandsPacket::EnumData>>::reserve(
            (int)v3,
            v21);
        if ( *(_DWORD *)(**((_DWORD **)v6 + 3) - 12) == *((_DWORD *)v6 + 1) )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char **, int, ReadOnlyBinaryStream *))(v4 + 12))(&v22, v4, v6);
        v16 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          std::vector<AvailableCommandsPacket::EnumData,std::allocator<AvailableCommandsPacket::EnumData>>::_M_emplace_back_aux<AvailableCommandsPacket::EnumData>(
            v3,
            (int)&v22);
          *(_DWORD *)v16 = v22;
          v22 = (char *)&unk_28898CC;
          *(_DWORD *)(v16 + 4) = 0;
          *(_DWORD *)(v16 + 8) = 0;
          *(_DWORD *)(v16 + 12) = 0;
          *(_DWORD *)(v16 + 4) = ptr;
          ptr = 0;
          HIDWORD(v16) = *(_DWORD *)(v16 + 8);
          *(_DWORD *)(v16 + 8) = v24;
          v24 = HIDWORD(v16);
          HIDWORD(v16) = *(_DWORD *)(v16 + 12);
          *(_DWORD *)(v16 + 12) = v25;
          v25 = HIDWORD(v16);
          *((_DWORD *)v3 + 1) += 16;
        if ( ptr )
          operator delete(ptr);
        v17 = v22 - 12;
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v22 - 4);
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
            j_j_j_j__ZdlPv_9(v17);
        ++v15;
      while ( v15 != v13 );
  else
    *((_DWORD *)v6 + 1) = *(_DWORD *)(**((_DWORD **)v6 + 3) - 12);
}


int __fastcall ReadOnlyBinaryStream::readType<ItemInstance>(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@5
  int v4; // [sp+0h] [bp-58h]@1
  int v5; // [sp+8h] [bp-50h]@5
  void *v6; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v2 = a2;
  ReadOnlyBinaryStream::getType<ItemInstance>((ItemInstance *)&v4, a1);
  ItemInstance::operator=(v2, (int)&v4);
  if ( ptr )
    operator delete(ptr);
  if ( v6 )
    operator delete(v6);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


unsigned int __fastcall ReadOnlyBinaryStream::readVectorList<EntityLink>(ReadOnlyBinaryStream *this, unsigned int a2, int a3)
{
  unsigned int v3; // r11@1
  ReadOnlyBinaryStream *v4; // r5@1
  int v5; // r4@1
  unsigned int result; // r0@1
  unsigned int v7; // r8@3
  _BYTE *v8; // r10@6
  int v9; // r1@6
  _BYTE *v10; // r9@7
  _BYTE *v11; // r7@8
  signed int v12; // r12@11
  void *v13; // r1@12
  void *v14; // r3@13
  int v15; // r0@13
  int v16; // r2@13
  int v17; // r4@13
  int v18; // r5@13
  int v19; // r6@13
  int v20; // r4@13
  int v21; // r5@13
  int v22; // r6@13
  signed int v23; // r4@14
  ReadOnlyBinaryStream *v24; // r4@18
  unsigned int v25; // r8@18
  _BYTE *v26; // r10@20
  signed int v27; // r2@20
  unsigned int v28; // r9@21
  char *v29; // r12@26
  char *i; // r0@28
  char *v31; // r1@29
  int v32; // r2@29
  int v33; // r3@29
  int v34; // r4@29
  int v35; // r5@29
  int v36; // r6@29
  int v37; // r4@29
  int v38; // r5@29
  int v39; // r6@29
  char *v40; // r4@31
  unsigned int v41; // r5@35
  int v42; // r9@35
  __int64 v43; // r0@35
  int v44; // r3@36
  int v45; // r6@36
  int v46; // r7@36
  int v47; // r0@36
  int v48; // r3@36
  int v49; // r6@36
  int v50; // r7@36
  unsigned int v51; // [sp+8h] [bp-58h]@1
  int v52; // [sp+Ch] [bp-54h]@1
  ReadOnlyBinaryStream *v53; // [sp+10h] [bp-50h]@1
  signed int v54; // [sp+14h] [bp-4Ch]@26
  char v55; // [sp+18h] [bp-48h]@35
  int v56; // [sp+1Ch] [bp-44h]@36
  int v57; // [sp+20h] [bp-40h]@36
  int v58; // [sp+24h] [bp-3Ch]@36
  int v59; // [sp+28h] [bp-38h]@36
  int v60; // [sp+2Ch] [bp-34h]@36
  int v61; // [sp+30h] [bp-30h]@36
  int v62; // [sp+34h] [bp-2Ch]@36

  v3 = a2;
  v4 = this;
  v5 = a3;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  v52 = a3;
  v53 = this;
  result = ReadOnlyBinaryStream::getUnsignedVarInt(this);
  v51 = result;
  if ( result < 0x8000000 )
  {
    v7 = result;
    if ( result > 0x1000 )
      v7 = 4096;
    if ( v7 >= 0x8000000 )
      sub_21E5A04("vector::reserve");
    v8 = *(_BYTE **)v3;
    v9 = v5;
    if ( (*(_DWORD *)(v3 + 8) - *(_DWORD *)v3) >> 5 >= v7 )
    {
      v11 = *(_BYTE **)v3;
    }
    else
      v10 = *(_BYTE **)(v3 + 4);
      if ( v7 )
        v11 = operator new(32 * v7);
      else
        v11 = 0;
      v12 = v10 - v8;
      if ( v10 != v8 )
      {
        v13 = v11;
        do
        {
          v14 = v13;
          v15 = *(_DWORD *)v8;
          v17 = *((_DWORD *)v8 + 1);
          v18 = *((_DWORD *)v8 + 2);
          v19 = *((_DWORD *)v8 + 3);
          v16 = (int)(v8 + 16);
          v8 += 32;
          v13 = (char *)v13 + 32;
          *(_DWORD *)v14 = v15;
          *((_DWORD *)v14 + 1) = v17;
          *((_DWORD *)v14 + 2) = v18;
          *((_DWORD *)v14 + 3) = v19;
          v14 = (char *)v14 + 16;
          v20 = *(_DWORD *)(v16 + 4);
          v21 = *(_DWORD *)(v16 + 8);
          v22 = *(_DWORD *)(v16 + 12);
          *(_DWORD *)v14 = *(_DWORD *)v16;
          *((_DWORD *)v14 + 1) = v20;
          *((_DWORD *)v14 + 2) = v21;
          *((_DWORD *)v14 + 3) = v22;
        }
        while ( v10 != v8 );
      }
      v23 = v12 >> 5;
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v3 + 4) = &v11[32 * v23];
      *(_DWORD *)(v3 + 8) = &v11[32 * v7];
      result = v51;
      v9 = v52;
      v4 = v53;
    if ( result )
      v24 = v4;
      v25 = 0;
      while ( 1 )
        v26 = *(_BYTE **)(v3 + 4);
        v27 = v26 - v11;
        if ( v25 >= (v26 - v11) >> 5 )
          v28 = (v27 >> 5) + 4096;
          if ( result < v28 )
            v28 = result;
          if ( v28 >= 0x8000000 )
            sub_21E5A04("vector::reserve");
          if ( (*(_DWORD *)(v3 + 8) - (signed int)v11) >> 5 < v28 )
          {
            if ( v28 )
            {
              v54 = v27 >> 5;
              v29 = (char *)operator new(32 * v28);
            }
            else
              v29 = 0;
            for ( i = v29; v26 != v11; *((_DWORD *)v31 + 3) = v39 )
              v31 = i;
              v33 = *(_DWORD *)v11;
              v34 = *((_DWORD *)v11 + 1);
              v35 = *((_DWORD *)v11 + 2);
              v36 = *((_DWORD *)v11 + 3);
              v32 = (int)(v11 + 16);
              v11 += 32;
              i += 32;
              *(_DWORD *)v31 = v33;
              *((_DWORD *)v31 + 1) = v34;
              *((_DWORD *)v31 + 2) = v35;
              *((_DWORD *)v31 + 3) = v36;
              v31 += 16;
              v37 = *(_DWORD *)(v32 + 4);
              v38 = *(_DWORD *)(v32 + 8);
              v39 = *(_DWORD *)(v32 + 12);
              *(_DWORD *)v31 = *(_DWORD *)v32;
              *((_DWORD *)v31 + 1) = v37;
              *((_DWORD *)v31 + 2) = v38;
            if ( *(_DWORD *)v3 )
              v40 = v29;
              operator delete(*(void **)v3);
              v29 = v40;
            *(_DWORD *)v3 = v29;
            *(_DWORD *)(v3 + 4) = &v29[32 * v54];
            *(_DWORD *)(v3 + 8) = &v29[32 * v28];
            result = v51;
            v9 = v52;
            v24 = v53;
          }
        if ( *(_DWORD *)(**((_DWORD **)v24 + 3) - 12) == *((_DWORD *)v24 + 1) )
          break;
        if ( !*(_DWORD *)(v9 + 8) )
          sub_21E5F48();
        v41 = result;
        v42 = v9;
        (*(void (__fastcall **)(char *))(v9 + 12))(&v55);
        v43 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v43 == HIDWORD(v43) )
          std::vector<EntityLink,std::allocator<EntityLink>>::_M_emplace_back_aux<EntityLink>(__PAIR__(&v55, v3));
        else
          v44 = v56;
          v45 = v57;
          v46 = v58;
          *(_DWORD *)v43 = *(_DWORD *)&v55;
          *(_DWORD *)(v43 + 4) = v44;
          *(_DWORD *)(v43 + 8) = v45;
          *(_DWORD *)(v43 + 12) = v46;
          v47 = v43 + 16;
          v48 = v60;
          v49 = v61;
          v50 = v62;
          *(_DWORD *)v47 = v59;
          *(_DWORD *)(v47 + 4) = v48;
          *(_DWORD *)(v47 + 8) = v49;
          *(_DWORD *)(v47 + 12) = v50;
          *(_DWORD *)(v3 + 4) += 32;
        ++v25;
        result = v41;
        v9 = v42;
        if ( v25 == v41 )
        v11 = *(_BYTE **)v3;
  }
  else
    result = *(_DWORD *)(**((_DWORD **)v4 + 3) - 12);
    *((_DWORD *)v4 + 1) = result;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getUnsignedShort(ReadOnlyBinaryStream *this)
{
  unsigned __int16 v2; // [sp+6h] [bp-Ah]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


unsigned int __fastcall ReadOnlyBinaryStream::readVectorList<EntityUniqueID>(ReadOnlyBinaryStream *this, int a2, int a3)
{
  int v3; // r11@1
  ReadOnlyBinaryStream *v4; // r6@1
  int v5; // r4@1
  unsigned int result; // r0@1
  unsigned int v7; // r8@3
  int v8; // r9@5
  char *v9; // r5@6
  char *v10; // r4@7
  unsigned int v11; // r10@7
  char *v12; // r7@8
  int v13; // r8@9
  signed int v14; // r0@11
  char *v15; // r1@12
  __int64 v16; // r2@13
  signed int v17; // r4@14
  int v18; // r1@16
  unsigned int v19; // r4@18
  char *v20; // r10@20
  signed int v21; // r1@20
  signed int v22; // r5@21
  unsigned int v23; // r9@21
  _QWORD *v24; // r8@26
  _QWORD *i; // r0@28
  __int64 v26; // r1@29
  unsigned int v27; // r7@34
  __int64 v28; // r0@35
  unsigned int v29; // [sp+4h] [bp-3Ch]@1
  int v30; // [sp+8h] [bp-38h]@25
  char v31; // [sp+10h] [bp-30h]@35

  v3 = a2;
  v4 = this;
  v5 = a3;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  result = ReadOnlyBinaryStream::getUnsignedVarInt(this);
  v29 = result;
  if ( result < 0x20000000 )
  {
    v7 = result;
    if ( result > 0x1000 )
      v7 = 4096;
    v8 = v5;
    if ( v7 >= 0x20000000 )
      sub_21E5A04("vector::reserve");
    v9 = *(char **)v3;
    if ( (*(_DWORD *)(v3 + 8) - *(_DWORD *)v3) >> 3 >= v7 )
    {
      v12 = *(char **)v3;
      v13 = v5;
    }
    else
      v10 = *(char **)(v3 + 4);
      v11 = result;
      if ( v7 )
        v12 = (char *)operator new(8 * v7);
      else
        v12 = 0;
      v14 = v10 - v9;
      if ( v10 != v9 )
      {
        v15 = v12;
        do
        {
          v16 = *(_QWORD *)v9;
          v9 += 8;
          *(_QWORD *)v15 = v16;
          v15 += 8;
        }
        while ( v10 != v9 );
      }
      v17 = v14 >> 3;
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      v18 = (int)&v12[8 * v7];
      v13 = v8;
      *(_DWORD *)v3 = v12;
      *(_DWORD *)(v3 + 4) = &v12[8 * v17];
      result = v11;
      *(_DWORD *)(v3 + 8) = v18;
    if ( result )
      v19 = 0;
      while ( 1 )
        v20 = *(char **)(v3 + 4);
        v21 = v20 - v12;
        if ( v19 >= (v20 - v12) >> 3 )
          v22 = v21 >> 3;
          v23 = (v21 >> 3) + 4096;
          if ( result < v23 )
            v23 = result;
          if ( v23 >= 0x20000000 )
            sub_21E5A04("vector::reserve");
          if ( (*(_DWORD *)(v3 + 8) - (signed int)v12) >> 3 < v23 )
          {
            v30 = v13;
            if ( v23 )
              v24 = operator new(8 * v23);
            else
              v24 = 0;
            for ( i = v24; v20 != v12; ++i )
            {
              v26 = *(_QWORD *)v12;
              v12 += 8;
              *i = v26;
            }
            if ( *(_DWORD *)v3 )
              operator delete(*(void **)v3);
            *(_DWORD *)v3 = v24;
            *(_DWORD *)(v3 + 4) = &v24[v22];
            *(_DWORD *)(v3 + 8) = &v24[v23];
            v13 = v30;
            result = v29;
          }
        if ( *(_DWORD *)(**((_DWORD **)v4 + 3) - 12) == *((_DWORD *)v4 + 1) )
          break;
        v27 = result;
        if ( !*(_DWORD *)(v13 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char *, int))(v13 + 12))(&v31, v13);
        v28 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v28 == HIDWORD(v28) )
          std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID>(
            (unsigned __int64 *)v3,
            &v31);
        else
          *(_QWORD *)v28 = *(_QWORD *)&v31;
          *(_DWORD *)(v3 + 4) = v28 + 8;
        ++v19;
        result = v27;
        if ( v19 == v27 )
        v12 = *(char **)v3;
  }
  else
    result = *(_DWORD *)(**((_DWORD **)v4 + 3) - 12);
    *((_DWORD *)v4 + 1) = result;
  return result;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::OverloadData>(ReadOnlyBinaryStream *a1, int a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::OverloadData>(a1, a2, a3);
}


void __fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::EnumData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::EnumData>(this, a2, a3);
}


void __fastcall ReadOnlyBinaryStream::getType<MapDecoration>(int *a1, int a2)
{
  int *v2; // r4@1
  int v3; // r2@1
  int v4; // r1@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1
  int v16; // [sp+18h] [bp-18h]@1

  v2 = a1;
  serialize<MapDecoration>::read(&v11, a2);
  sub_21E8AF4(v2, &v11);
  v3 = (int)(v2 + 1);
  v4 = v13;
  v5 = v14;
  v6 = v15;
  v7 = v16;
  *(_DWORD *)v3 = v12;
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v5;
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = v7;
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
}


void __fastcall ReadOnlyBinaryStream::getType<MapDecoration>(int *a1, int a2)
{
  ReadOnlyBinaryStream::getType<MapDecoration>(a1, a2);
}


int __fastcall ReadOnlyBinaryStream::getByte(ReadOnlyBinaryStream *this)
{
  unsigned __int8 v2; // [sp+7h] [bp-9h]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


_QWORD *__fastcall ReadOnlyBinaryStream::ReadOnlyBinaryStream(_QWORD *a1, int *a2, int a3)
{
  _QWORD *v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1
  int *v6; // r0@1
  int *v7; // r0@2
  _QWORD *result; // r0@6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a1 = (unsigned int)&off_26E91A4;
  v6 = (int *)(a1 + 1);
  if ( a3 == 1 )
    v7 = sub_21E8AF4(v6, a2);
  else
    v7 = (int *)sub_21E94B4((void **)v6, (const char *)&unk_257BC67);
  if ( v5 )
    v4 = v7;
  result = v3;
  *((_DWORD *)v3 + 3) = v4;
  return result;
}


__int64 __fastcall ReadOnlyBinaryStream::getUnsignedInt64(ReadOnlyBinaryStream *this)
{
  __int64 v2; // [sp+0h] [bp-10h]@1

  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return v2;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::ParamData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  int v3; // r8@1
  int v4; // r11@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r10@1
  char *v7; // r1@2
  _DWORD *v8; // r9@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v10; // r2@3
  signed int v11; // r6@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r4@9
  char *v13; // r6@9
  int *v14; // r0@10
  unsigned int v15; // r7@12
  unsigned int v16; // r1@14
  unsigned int v17; // r5@17
  __int64 v18; // r0@19
  int v19; // r2@20
  char *v20; // r0@22
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int v23; // r0@33
  unsigned int v24; // r1@34
  char *v25; // [sp+4h] [bp-3Ch]@19
  int v26; // [sp+8h] [bp-38h]@20
  char v27; // [sp+Ch] [bp-34h]@20
  char v28; // [sp+10h] [bp-30h]@2

  v3 = (int)a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = &v28;
    v8 = (_DWORD *)v5;
    v9 = &pthread_create;
    do
    {
      v14 = (int *)(*v8 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v8 - 4);
        if ( v9 )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          v12 = v9;
          v13 = v7;
          j_j_j_j__ZdlPv_9(v14);
          v7 = v13;
          v9 = v12;
      }
      v8 += 3;
    }
    while ( v8 != (_DWORD *)HIDWORD(v5) );
  }
  *(_DWORD *)(v3 + 4) = v5;
  v15 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  if ( v15 < 0x15555556 )
    v16 = v15;
    if ( v15 > 0x1000 )
      v16 = 4096;
    std::vector<AvailableCommandsPacket::ParamData,std::allocator<AvailableCommandsPacket::ParamData>>::reserve(v3, v16);
    if ( v15 )
      v17 = 0;
      do
        v23 = -1431655765 * ((signed int)((*(_QWORD *)v3 >> 32) - *(_QWORD *)v3) >> 2);
        if ( v17 >= v23 )
          v24 = v23 + 4096;
          if ( v15 < v23 + 4096 )
            v24 = v15;
          std::vector<AvailableCommandsPacket::ParamData,std::allocator<AvailableCommandsPacket::ParamData>>::reserve(
            v3,
            v24);
        if ( *(_DWORD *)(**((_DWORD **)v6 + 3) - 12) == *((_DWORD *)v6 + 1) )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char **, int, ReadOnlyBinaryStream *))(v4 + 12))(&v25, v4, v6);
        v18 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v18 == HIDWORD(v18) )
          std::vector<AvailableCommandsPacket::ParamData,std::allocator<AvailableCommandsPacket::ParamData>>::_M_emplace_back_aux<AvailableCommandsPacket::ParamData>(
            (unsigned __int64 *)v3,
            (int)&v25);
          *(_DWORD *)v18 = v25;
          v25 = (char *)&unk_28898CC;
          v19 = v26;
          *(_BYTE *)(v18 + 8) = v27;
          *(_DWORD *)(v18 + 4) = v19;
          *(_DWORD *)(v3 + 4) += 12;
        v20 = v25 - 12;
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
          }
          else
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        ++v17;
      while ( v17 != v15 );
  else
    *((_DWORD *)v6 + 1) = *(_DWORD *)(**((_DWORD **)v6 + 3) - 12);
}


char *__fastcall ReadOnlyBinaryStream::readVectorList<std::shared_ptr<MapDecoration>>(ReadOnlyBinaryStream *this, int a2, int a3)
{
  int v3; // r11@1
  ReadOnlyBinaryStream *v4; // r10@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r6@2
  int v8; // r8@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r7@10
  unsigned int v12; // r0@12
  unsigned int v13; // r0@18
  unsigned int v14; // r7@18
  char *result; // r0@19
  unsigned int v16; // r1@20
  unsigned int v17; // r8@23
  signed int v18; // r0@24
  unsigned int v19; // r1@25
  __int64 v20; // r0@30
  int v21; // r4@33
  unsigned int *v22; // r1@34
  unsigned int *v23; // r5@40
  int v24; // [sp+0h] [bp-30h]@1
  unsigned int v25; // [sp+4h] [bp-2Ch]@30
  int v26; // [sp+8h] [bp-28h]@31

  v3 = a2;
  v4 = this;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = a3;
  v24 = *(_DWORD *)a2;
  if ( v5 != *(_DWORD *)a2 )
  {
    v7 = *(_DWORD *)a2;
    do
    {
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 )
      {
        v9 = (unsigned int *)(v8 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          v11 = (unsigned int *)(v8 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      }
      v7 += 8;
    }
    while ( v7 != v5 );
  }
  *(_DWORD *)(v3 + 4) = v24;
  v13 = ReadOnlyBinaryStream::getUnsignedVarInt(v4);
  v14 = v13;
  if ( v13 < 0x20000000 )
    v16 = v13;
    if ( v13 > 0x1000 )
      v16 = 4096;
    result = std::vector<std::shared_ptr<MapDecoration>,std::allocator<std::shared_ptr<MapDecoration>>>::reserve(
               v3,
               v16);
    if ( v14 )
      v17 = 0;
      do
        v18 = (*(_QWORD *)v3 >> 32) - *(_QWORD *)v3;
        if ( v17 >= v18 >> 3 )
          v19 = (v18 >> 3) + 4096;
          if ( v14 < v19 )
            v19 = v14;
          std::vector<std::shared_ptr<MapDecoration>,std::allocator<std::shared_ptr<MapDecoration>>>::reserve(v3, v19);
        result = (char *)*((_DWORD *)v4 + 1);
        if ( *(char **)(**((_DWORD **)v4 + 3) - 12) == result )
          break;
        if ( !*(_DWORD *)(v6 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(unsigned int *, int, ReadOnlyBinaryStream *))(v6 + 12))(&v25, v6, v4);
        v20 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v20 == HIDWORD(v20) )
          result = (char *)std::vector<std::shared_ptr<MapDecoration>,std::allocator<std::shared_ptr<MapDecoration>>>::_M_emplace_back_aux<std::shared_ptr<MapDecoration>>(
                             (_QWORD *)v3,
                             (int)&v25);
          *(_QWORD *)v20 = v25;
          HIDWORD(v20) = v26;
          v26 = 0;
          *(_DWORD *)(v20 + 4) = HIDWORD(v20);
          result = (char *)(v20 + 8);
          v25 = 0;
          *(_DWORD *)(v3 + 4) = result;
        v21 = v26;
        if ( v26 )
          v22 = (unsigned int *)(v26 + 4);
              result = (char *)__ldrex(v22);
            while ( __strex((unsigned int)(result - 1), v22) );
            result = (char *)(*v22)--;
          if ( result == (char *)1 )
            v23 = (unsigned int *)(v21 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (char *)__ldrex(v23);
              while ( __strex((unsigned int)(result - 1), v23) );
            }
            else
              result = (char *)(*v23)--;
            if ( result == (char *)1 )
              result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
        ++v17;
      while ( v17 != v14 );
  else
    result = *(char **)(**((_DWORD **)v4 + 3) - 12);
    *((_DWORD *)v4 + 1) = result;
  return result;
}


int __fastcall ReadOnlyBinaryStream::getType<mce::UUID>(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r2@1
  int result; // r0@1
  int v6; // r1@1
  int v7; // [sp+0h] [bp-28h]@1
  int v8; // [sp+4h] [bp-24h]@1
  char v9; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  (*(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)a2 + 8))(a2, &v7, 8);
  (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v2 + 8))(v2, &v9, 8);
  result = v7;
  v6 = v8;
  v4 = *(_QWORD *)&v9;
  *(_DWORD *)v3 = v7;
  *(_DWORD *)(v3 + 4) = v6;
  *(_QWORD *)(v3 + 8) = v4;
  return result;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<UpdateAttributesPacket::AttributeData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  __int64 *v3; // r8@1
  int v4; // r10@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r11@1
  char *v7; // r1@2
  int v8; // r9@2
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v10; // r2@3
  signed int v11; // r6@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r4@9
  char *v13; // r6@9
  int v14; // r2@10
  void *v15; // r0@10
  unsigned int v16; // r7@12
  unsigned int v17; // r1@14
  unsigned int v18; // r5@17
  __int64 v19; // r0@19
  int v20; // r2@20
  int v21; // r3@20
  int v22; // r4@20
  char *v23; // r1@20
  char *v24; // r0@22
  unsigned int *v25; // r2@25
  signed int v26; // r1@27
  unsigned int v27; // r0@33
  unsigned int v28; // r1@34
  char v29; // [sp+8h] [bp-40h]@19
  int v30; // [sp+Ch] [bp-3Ch]@20
  int v31; // [sp+10h] [bp-38h]@20
  int v32; // [sp+14h] [bp-34h]@20
  char *v33; // [sp+18h] [bp-30h]@20
  char v34; // [sp+20h] [bp-28h]@2

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = &v34;
    v8 = v5;
    v9 = &pthread_create;
    do
    {
      v14 = *(_DWORD *)(v8 + 16);
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v14 - 4);
        if ( v9 )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          v12 = v9;
          v13 = v7;
          j_j_j_j__ZdlPv_9(v15);
          v7 = v13;
          v9 = v12;
      }
      v8 += 20;
    }
    while ( v8 != HIDWORD(v5) );
  }
  *((_DWORD *)v3 + 1) = v5;
  v16 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  if ( v16 < 0xCCCCCCD )
    v17 = v16;
    if ( v16 > 0x1000 )
      v17 = 4096;
    std::vector<UpdateAttributesPacket::AttributeData,std::allocator<UpdateAttributesPacket::AttributeData>>::reserve(
      (int)v3,
      v17);
    if ( v16 )
      v18 = 0;
      do
        v27 = -858993459 * ((signed int)(((unsigned __int64)*v3 >> 32) - *v3) >> 2);
        if ( v18 >= v27 )
          v28 = v27 + 4096;
          if ( v16 < v27 + 4096 )
            v28 = v16;
          std::vector<UpdateAttributesPacket::AttributeData,std::allocator<UpdateAttributesPacket::AttributeData>>::reserve(
            (int)v3,
            v28);
        if ( *(_DWORD *)(**((_DWORD **)v6 + 3) - 12) == *((_DWORD *)v6 + 1) )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char *, int, ReadOnlyBinaryStream *))(v4 + 12))(&v29, v4, v6);
        v19 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<UpdateAttributesPacket::AttributeData,std::allocator<UpdateAttributesPacket::AttributeData>>::_M_emplace_back_aux<UpdateAttributesPacket::AttributeData>(
            (unsigned __int64 *)v3,
            (int)&v29);
          v23 = v33;
          v20 = v30;
          v21 = v31;
          v22 = v32;
          *(_DWORD *)v19 = *(_DWORD *)&v29;
          *(_DWORD *)(v19 + 4) = v20;
          *(_DWORD *)(v19 + 8) = v21;
          *(_DWORD *)(v19 + 12) = v22;
          *(_DWORD *)(v19 + 16) = v33;
          v23 = (char *)&unk_28898CC;
          v33 = (char *)&unk_28898CC;
          *((_DWORD *)v3 + 1) += 20;
        v24 = v23 - 12;
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v23 - 4);
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
            j_j_j_j__ZdlPv_9(v24);
        ++v18;
      while ( v18 != v16 );
  else
    *((_DWORD *)v6 + 1) = *(_DWORD *)(**((_DWORD **)v6 + 3) - 12);
}


unsigned int __fastcall ReadOnlyBinaryStream::readVectorList<CommandOutputMessage>(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r11@1
  int v4; // r6@1
  __int64 v5; // kr00_8@1
  int v6; // r4@1
  unsigned int result; // r0@1
  unsigned int v8; // r5@3
  int v9; // r8@6
  int v10; // r9@7
  unsigned int v11; // r10@7
  char *v12; // r7@7
  int v13; // r8@7
  unsigned int v14; // r9@12
  int v15; // r3@14
  unsigned int v16; // r10@14
  unsigned int v17; // r5@15
  char *v18; // r7@19
  __int64 v19; // r0@24
  void *v20; // r5@27
  void *v21; // r7@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  int *v24; // r0@37
  void *v25; // r0@42
  unsigned int *v26; // r2@45
  signed int v27; // r1@47
  unsigned int v28; // [sp+8h] [bp-48h]@1
  char v29; // [sp+14h] [bp-3Ch]@24
  int v30; // [sp+18h] [bp-38h]@42
  __int64 v31; // [sp+1Ch] [bp-34h]@27

  v3 = a2;
  v4 = a1;
  v5 = *a2;
  v6 = a3;
  std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>(v5, SHIDWORD(v5));
  *((_DWORD *)v3 + 1) = v5;
  result = ReadOnlyBinaryStream::getUnsignedVarInt((ReadOnlyBinaryStream *)v4);
  v28 = result;
  if ( result < 0xCCCCCCD )
  {
    v8 = result;
    if ( result > 0x1000 )
      v8 = 4096;
    if ( v8 >= 0xCCCCCCD )
      sub_21E5A04("vector::reserve");
    v9 = *(_DWORD *)v3;
    if ( -858993459 * ((*((_DWORD *)v3 + 2) - *(_DWORD *)v3) >> 2) >= v8 )
    {
      v12 = *(char **)v3;
    }
    else
      v10 = *((_DWORD *)v3 + 1);
      v11 = result;
      v12 = (char *)std::vector<CommandOutputMessage,std::allocator<CommandOutputMessage>>::_M_allocate_and_copy<CommandOutputMessage*>(
                      (int)v3,
                      v8,
                      *(_DWORD *)v3,
                      *((_DWORD *)v3 + 1));
      std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>(*v3, (unsigned __int64)*v3 >> 32);
      v13 = -858993459 * ((v10 - v9) >> 2);
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      *(_DWORD *)v3 = v12;
      *((_DWORD *)v3 + 1) = &v12[20 * v13];
      result = v11;
      *((_DWORD *)v3 + 2) = &v12[20 * v8];
    if ( result )
      v14 = 0;
      while ( 1 )
      {
        v15 = *((_DWORD *)v3 + 1);
        v16 = -858993459 * ((v15 - (signed int)v12) >> 2);
        if ( v14 >= v16 )
        {
          v17 = v16 + 4096;
          if ( result < v16 + 4096 )
            v17 = result;
          if ( v17 >= 0xCCCCCCD )
            sub_21E5A04("vector::reserve");
          if ( -858993459 * ((*((_DWORD *)v3 + 2) - (signed int)v12) >> 2) < v17 )
          {
            v18 = (char *)std::vector<CommandOutputMessage,std::allocator<CommandOutputMessage>>::_M_allocate_and_copy<CommandOutputMessage*>(
                            (int)v3,
                            v17,
                            (int)v12,
                            v15);
            std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>(*v3, (unsigned __int64)*v3 >> 32);
            if ( *(_DWORD *)v3 )
              operator delete(*(void **)v3);
            *(_DWORD *)v3 = v18;
            *((_DWORD *)v3 + 1) = &v18[20 * v16];
            *((_DWORD *)v3 + 2) = &v18[20 * v17];
          }
        }
        result = *(_DWORD *)(v4 + 4);
        if ( *(_DWORD *)(**(_DWORD **)(v4 + 12) - 12) == result )
          break;
        if ( !*(_DWORD *)(v6 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char *, int, int))(v6 + 12))(&v29, v6, v4);
        v19 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<CommandOutputMessage,std::allocator<CommandOutputMessage>>::_M_emplace_back_aux<CommandOutputMessage>(
            (unsigned __int64 *)v3,
            (int)&v29);
        else
          CommandOutputMessage::CommandOutputMessage(v19, (int)&v29);
          *((_DWORD *)v3 + 1) += 20;
        v20 = (void *)HIDWORD(v31);
        v21 = (void *)v31;
        if ( (_DWORD)v31 != HIDWORD(v31) )
          do
            v24 = (int *)(*(_DWORD *)v21 - 12);
            if ( v24 != &dword_28898C0 )
            {
              v22 = (unsigned int *)(*(_DWORD *)v21 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
              }
              else
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j__ZdlPv_9(v24);
            }
            v21 = (char *)v21 + 4;
          while ( v21 != v20 );
          v21 = (void *)v31;
        if ( v21 )
          operator delete(v21);
        v25 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v30 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          else
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        result = v28;
        if ( ++v14 == v28 )
        v12 = *(char **)v3;
      }
  }
  else
    result = *(_DWORD *)(**(_DWORD **)(v4 + 12) - 12);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


char *__fastcall ReadOnlyBinaryStream::readVectorList<BlockPos>(ReadOnlyBinaryStream *this, int a2, int a3)
{
  ReadOnlyBinaryStream *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r2@1
  char *result; // r0@2
  unsigned int v8; // r8@3
  int v9; // r11@5
  int v10; // r3@6
  _BYTE *v11; // r5@6
  unsigned int v12; // r10@7
  _BYTE *v13; // r4@7
  signed int v14; // r9@7
  _BYTE *v15; // r0@8
  _BYTE *v16; // r7@8
  int v17; // r8@9
  void *v18; // r1@12
  int v19; // r2@13
  int v20; // r5@15
  int v21; // r1@16
  unsigned int v22; // r11@18
  _BYTE *v23; // r10@20
  unsigned int v24; // r5@20
  unsigned int v25; // r9@21
  int v26; // r8@26
  char *v27; // r0@26
  char *v28; // r8@26
  char *i; // r0@28
  int v30; // r1@29
  int v31; // r7@31
  int v32; // r5@34
  unsigned int v33; // r7@34
  __int64 v34; // r0@35
  unsigned int v35; // [sp+8h] [bp-38h]@1
  ReadOnlyBinaryStream *v36; // [sp+Ch] [bp-34h]@7
  int v37; // [sp+Ch] [bp-34h]@25
  __int64 v38; // [sp+10h] [bp-30h]@35
  int v39; // [sp+18h] [bp-28h]@36

  v3 = this;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
  v4 = a3;
  v5 = a2;
  v6 = ReadOnlyBinaryStream::getUnsignedVarInt(this);
  v35 = v6;
  if ( v6 < 0x15555556 )
  {
    v8 = v6;
    if ( v6 > 0x1000 )
      v8 = 4096;
    v9 = v4;
    if ( v8 >= 0x15555556 )
      sub_21E5A04("vector::reserve");
    v10 = v5;
    v11 = *(_BYTE **)v5;
    result = (char *)(-1431655765 * ((*(_DWORD *)(v5 + 8) - *(_DWORD *)v5) >> 2));
    if ( (unsigned int)result >= v8 )
    {
      v16 = *(_BYTE **)v5;
      v17 = v9;
    }
    else
      v36 = v3;
      v12 = v6;
      v13 = *(_BYTE **)(v5 + 4);
      v14 = v13 - v11;
      if ( v8 )
      {
        v15 = operator new(12 * v8);
        v10 = v5;
        v16 = v15;
      }
      else
        v16 = 0;
      if ( v11 != v13 )
        v18 = v16;
        do
        {
          *(_DWORD *)v18 = *(_DWORD *)v11;
          *((_DWORD *)v18 + 1) = *((_DWORD *)v11 + 1);
          v19 = *((_DWORD *)v11 + 2);
          v11 += 12;
          *((_DWORD *)v18 + 2) = v19;
          v18 = (char *)v18 + 12;
        }
        while ( v11 != v13 );
      if ( *(_DWORD *)v10 )
        v20 = v10;
        operator delete(*(void **)v10);
        v10 = v20;
      v21 = 3 * v8;
      v6 = v12;
      result = &v16[4 * (v14 >> 2)];
      *(_DWORD *)v10 = v16;
      *(_DWORD *)(v10 + 4) = result;
      v3 = v36;
      *(_DWORD *)(v10 + 8) = &v16[4 * v21];
    if ( v6 )
      v22 = 0;
      while ( 1 )
        v23 = *(_BYTE **)(v10 + 4);
        v24 = -1431655765 * ((v23 - v16) >> 2);
        if ( v22 >= v24 )
          v25 = v24 + 4096;
          if ( v6 < v24 + 4096 )
            v25 = v6;
          if ( v25 >= 0x15555556 )
            sub_21E5A04("vector::reserve");
          if ( -1431655765 * ((*(_DWORD *)(v10 + 8) - (signed int)v16) >> 2) < v25 )
          {
            v37 = v17;
            if ( v25 )
            {
              v26 = v10;
              v27 = (char *)operator new(12 * v25);
              v10 = v26;
              v28 = v27;
            }
            else
              v28 = 0;
            for ( i = v28; v16 != v23; i += 12 )
              *(_DWORD *)i = *(_DWORD *)v16;
              *((_DWORD *)i + 1) = *((_DWORD *)v16 + 1);
              v30 = *((_DWORD *)v16 + 2);
              v16 += 12;
              *((_DWORD *)i + 2) = v30;
            if ( *(_DWORD *)v10 )
              v31 = v10;
              operator delete(*(void **)v10);
              v10 = v31;
            *(_DWORD *)v10 = v28;
            *(_DWORD *)(v10 + 4) = &v28[12 * v24];
            *(_DWORD *)(v10 + 8) = &v28[12 * v25];
            v17 = v37;
            v6 = v35;
          }
        result = (char *)*((_DWORD *)v3 + 1);
        if ( *(char **)(**((_DWORD **)v3 + 3) - 12) == result )
          break;
        v32 = v10;
        v33 = v6;
        if ( !*(_DWORD *)(v17 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(__int64 *, int, ReadOnlyBinaryStream *))(v17 + 12))(&v38, v17, v3);
        v10 = v32;
        v34 = *(_QWORD *)(v32 + 4);
        if ( (_DWORD)v34 == HIDWORD(v34) )
          result = std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>(
                     (unsigned __int64 *)v32,
                     (int)&v38);
          v10 = v32;
        else
          *(_QWORD *)v34 = v38;
          *(_DWORD *)(v34 + 8) = v39;
          result = (char *)(v34 + 12);
          *(_DWORD *)(v32 + 4) = result;
        ++v22;
        v6 = v33;
        if ( v22 == v33 )
        v16 = *(_BYTE **)v10;
  }
  else
    result = *(char **)(**((_DWORD **)v3 + 3) - 12);
    *((_DWORD *)v3 + 1) = result;
  return result;
}


InventoryTransaction *__fastcall ReadOnlyBinaryStream::getType<InventoryTransaction>(int a1, int a2)
{
  int v2; // r4@1
  char *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // r0@1
  unsigned int v6; // r6@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-40h]@1
  int v10; // [sp+4h] [bp-3Ch]@1
  int v11; // [sp+Ch] [bp-34h]@1
  __int64 v12; // [sp+10h] [bp-30h]@1
  __int64 v13; // [sp+1Ch] [bp-24h]@1

  v2 = a1;
  serialize<InventoryTransaction>::read((unsigned int)&v9, a2);
  v3 = 0;
  v4 = v10;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = v11;
  *(_QWORD *)(v2 + 16) = v12;
  std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<InventorySource,std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,std::allocator<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>>,std::__detail::_Select1st,std::equal_to<InventorySource>,std::hash<InventorySource>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<InventorySource const,std::vector<InventoryAction,std::allocator<InventoryAction>>>,true> const*)#1}>(
    (unsigned int *)v2,
    (int)&v9);
  v5 = v13;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  LODWORD(v5) = HIDWORD(v5) - v5;
  *(_DWORD *)(v2 + 36) = 0;
  v6 = -858993459 * ((signed int)v5 >> 2);
  v7 = HIDWORD(v5);
  if ( (_DWORD)v5 )
  {
    if ( v6 >= 0xCCCCCCD )
      sub_21E57F4();
    v3 = (char *)operator new(v5);
    HIDWORD(v5) = HIDWORD(v13);
    v7 = v13;
  }
  *(_DWORD *)(v2 + 28) = v3;
  *(_DWORD *)(v2 + 32) = v3;
  *(_DWORD *)(v2 + 36) = &v3[20 * v6];
  *(_DWORD *)(v2 + 32) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<InventoryTransactionItemGroup const*,std::vector<InventoryTransactionItemGroup,std::allocator<InventoryTransactionItemGroup>>>,InventoryTransactionItemGroup*>(
                           v7,
                           SHIDWORD(v5),
                           (int)v3);
  return InventoryTransaction::~InventoryTransaction((InventoryTransaction *)&v9);
}


char *__fastcall ReadOnlyBinaryStream::readVectorList<InventoryAction>(int a1, int *a2, int a3)
{
  int *v3; // r11@1
  int v4; // r4@1
  int v5; // r10@1
  int v6; // r6@1
  unsigned int v7; // r5@1
  char *result; // r0@4
  unsigned int v9; // r1@5
  unsigned int v10; // r8@8
  unsigned int v11; // r0@9
  unsigned int v12; // r1@10
  __int64 v13; // kr00_8@15
  int v14; // r1@16
  int v15; // r2@16
  int v16; // r3@16
  char v17; // [sp+8h] [bp-C8h]@15
  int v18; // [sp+Ch] [bp-C4h]@16
  int v19; // [sp+10h] [bp-C0h]@16
  int v20; // [sp+14h] [bp-BCh]@16
  int v21; // [sp+18h] [bp-B8h]@16
  char *v22; // [sp+20h] [bp-B0h]@28
  void *v23; // [sp+3Ch] [bp-94h]@26
  void *v24; // [sp+4Ch] [bp-84h]@24
  int v25; // [sp+60h] [bp-70h]@16
  int v26; // [sp+68h] [bp-68h]@22
  void *v27; // [sp+84h] [bp-4Ch]@20
  void *ptr; // [sp+94h] [bp-3Ch]@18
  char v29; // [sp+ABh] [bp-25h]@2

  v3 = a2;
  v4 = a1;
  v5 = a3;
  std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_erase_at_end((int)a2, *a2);
  v6 = 0;
  v7 = 0;
  do
  {
    (*(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v4 + 8))(v4, &v29, 1);
    v7 |= (v29 & 0x7F) << v6;
    v6 += 7;
  }
  while ( v29 & 0x80 );
  if ( v7 < 0x199999A )
    v9 = v7;
    if ( v7 > 0x1000 )
      v9 = 4096;
    result = std::vector<InventoryAction,std::allocator<InventoryAction>>::reserve((int)v3, v9);
    if ( v7 )
    {
      v10 = 0;
      do
      {
        v11 = -858993459 * ((signed int)((*(_QWORD *)v3 >> 32) - *(_QWORD *)v3) >> 5);
        if ( v10 >= v11 )
        {
          v12 = v11 + 4096;
          if ( v7 < v11 + 4096 )
            v12 = v7;
          std::vector<InventoryAction,std::allocator<InventoryAction>>::reserve((int)v3, v12);
        }
        result = *(char **)(v4 + 4);
        if ( *(char **)(**(_DWORD **)(v4 + 12) - 12) == result )
          break;
        if ( !*(_DWORD *)(v5 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(char *, int, int))(v5 + 12))(&v17, v5, v4);
        v13 = *(_QWORD *)(v3 + 1);
        if ( (_DWORD)v13 == HIDWORD(v13) )
          std::vector<InventoryAction,std::allocator<InventoryAction>>::_M_emplace_back_aux<InventoryAction>(
            (unsigned __int64 *)v3,
            (int)&v17);
        else
          v14 = v18;
          v15 = v19;
          v16 = v20;
          *(_DWORD *)v13 = *(_DWORD *)&v17;
          *(_DWORD *)(v13 + 4) = v14;
          *(_DWORD *)(v13 + 8) = v15;
          *(_DWORD *)(v13 + 12) = v16;
          ItemInstance::ItemInstance((ItemInstance *)(v13 + 16), (int)&v21);
          ItemInstance::ItemInstance((ItemInstance *)(v13 + 88), (int)&v25);
          v3[1] += 160;
        if ( ptr )
          operator delete(ptr);
        if ( v27 )
          operator delete(v27);
        if ( v26 )
          (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v26 + 4))(v26, *(_DWORD *)(*(_DWORD *)v26 + 4));
        v26 = 0;
        if ( v24 )
          operator delete(v24);
        if ( v23 )
          operator delete(v23);
        result = v22;
        if ( v22 )
          result = (char *)(*(int (__cdecl **)(char *, _DWORD))(*(_DWORD *)v22 + 4))(
                             v22,
                             *(_DWORD *)(*(_DWORD *)v22 + 4));
        ++v10;
        v22 = 0;
      }
      while ( v7 != v10 );
    }
  else
    result = *(char **)(**(_DWORD **)(v4 + 12) - 12);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


Recipe *__fastcall ReadOnlyBinaryStream::getType<ShulkerBoxRecipe>(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r2@1
  void **v7; // [sp+0h] [bp-80h]@1
  int v8; // [sp+5Ch] [bp-24h]@1
  int v9; // [sp+60h] [bp-20h]@1
  int v10; // [sp+64h] [bp-1Ch]@1

  v2 = a1;
  serialize<ShulkerBoxRecipe>::read(&v7, a2);
  ShapelessRecipe::ShapelessRecipe((_DWORD *)v2, (int)&v7);
  v3 = v8;
  *(_DWORD *)v2 = &off_2701404;
  *(_DWORD *)(v2 + 92) = v3;
  v8 = 0;
  v4 = v9;
  v9 = 0;
  *(_DWORD *)(v2 + 96) = v4;
  v5 = v10;
  v10 = 0;
  v7 = &off_2701404;
  *(_DWORD *)(v2 + 100) = v5;
  return ShapelessRecipe::~ShapelessRecipe((ShapelessRecipe *)&v7);
}


int __fastcall ReadOnlyBinaryStream::getType<Vec2>(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  (*(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)a2 + 8))(a2, &v5, 4);
  (*(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)v2 + 8))(v2, &v6, 4);
  result = v6;
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 4) = result;
  return result;
}


void __fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::OverloadData>(ReadOnlyBinaryStream *a1, int a2, int a3)
{
  int v3; // r11@1
  unsigned __int64 *v4; // r7@1
  unsigned __int64 *v5; // r10@2
  void *v6; // r5@3
  void *v7; // r9@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int *v10; // r0@13
  unsigned int v11; // r7@19
  unsigned int v12; // r1@21
  unsigned int v13; // r8@24
  unsigned int v14; // r0@25
  unsigned int v15; // r1@26
  __int64 v16; // r0@31
  int v17; // r4@34
  void *v18; // r5@34
  unsigned int *v19; // r2@36
  signed int v20; // r1@38
  int *v21; // r0@44
  ReadOnlyBinaryStream *v22; // [sp+0h] [bp-48h]@1
  unsigned __int64 *v23; // [sp+4h] [bp-44h]@1
  int v24; // [sp+8h] [bp-40h]@1
  void *v25; // [sp+Ch] [bp-3Ch]@31
  void *v26; // [sp+10h] [bp-38h]@32
  int v27; // [sp+14h] [bp-34h]@32

  v3 = a2;
  v22 = a1;
  v4 = *(unsigned __int64 **)(a2 + 4);
  v24 = a3;
  v23 = *(unsigned __int64 **)a2;
  if ( v4 != *(unsigned __int64 **)a2 )
  {
    v5 = *(unsigned __int64 **)a2;
    do
    {
      v7 = (void *)(*v5 >> 32);
      v6 = (void *)*v5;
      if ( v6 != v7 )
      {
        do
        {
          v10 = (int *)(*(_DWORD *)v6 - 12);
          if ( v10 != &dword_28898C0 )
          {
            v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
              j_j_j_j__ZdlPv_9(v10);
          }
          v6 = (char *)v6 + 12;
        }
        while ( v6 != v7 );
        v6 = *(void **)v5;
      }
      if ( v6 )
        operator delete(v6);
      v5 = (unsigned __int64 *)((char *)v5 + 12);
    }
    while ( v5 != v4 );
  }
  *(_DWORD *)(v3 + 4) = v23;
  v11 = ReadOnlyBinaryStream::getUnsignedVarInt(v22);
  if ( v11 < 0x15555556 )
    v12 = v11;
    if ( v11 > 0x1000 )
      v12 = 4096;
    std::vector<AvailableCommandsPacket::OverloadData,std::allocator<AvailableCommandsPacket::OverloadData>>::reserve(
      v3,
      v12);
    if ( v11 )
      v13 = 0;
      do
        v14 = -1431655765 * ((signed int)((*(_QWORD *)v3 >> 32) - *(_QWORD *)v3) >> 2);
        if ( v13 >= v14 )
          v15 = v14 + 4096;
          if ( v11 < v14 + 4096 )
            v15 = v11;
          std::vector<AvailableCommandsPacket::OverloadData,std::allocator<AvailableCommandsPacket::OverloadData>>::reserve(
            v3,
            v15);
        if ( *(_DWORD *)(**((_DWORD **)v22 + 3) - 12) == *((_DWORD *)v22 + 1) )
          break;
        if ( !*(_DWORD *)(v24 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(void **))(v24 + 12))(&v25);
        v16 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          std::vector<AvailableCommandsPacket::OverloadData,std::allocator<AvailableCommandsPacket::OverloadData>>::_M_emplace_back_aux<AvailableCommandsPacket::OverloadData>(
            (unsigned __int64 *)v3,
            (int)&v25);
        else
          *(_QWORD *)v16 = 0LL;
          *(_DWORD *)(v16 + 8) = 0;
          *(_DWORD *)v16 = v25;
          v25 = 0;
          HIDWORD(v16) = *(_DWORD *)(v16 + 4);
          *(_DWORD *)(v16 + 4) = v26;
          v26 = (void *)HIDWORD(v16);
          HIDWORD(v16) = *(_DWORD *)(v16 + 8);
          *(_DWORD *)(v16 + 8) = v27;
          v27 = HIDWORD(v16);
          *(_DWORD *)(v3 + 4) += 12;
        v17 = (int)v26;
        v18 = v25;
        if ( v25 != v26 )
          do
            v21 = (int *)(*(_DWORD *)v18 - 12);
            if ( v21 != &dword_28898C0 )
              v19 = (unsigned int *)(*(_DWORD *)v18 - 4);
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
                j_j_j_j__ZdlPv_9(v21);
            v18 = (char *)v18 + 12;
          while ( v18 != (void *)v17 );
          v18 = v25;
        if ( v18 )
          operator delete(v18);
        ++v13;
      while ( v13 != v11 );
  else
    *((_DWORD *)v22 + 1) = *(_DWORD *)(**((_DWORD **)v22 + 3) - 12);
}


void *__fastcall ReadOnlyBinaryStream::readVectorList<AvailableCommandsPacket::CommandData>(ReadOnlyBinaryStream *this, __int64 *a2, int a3)
{
  __int64 *v3; // r6@1
  int v4; // r5@1
  __int64 v5; // kr00_8@1
  ReadOnlyBinaryStream *v6; // r4@1
  AvailableCommandsPacket::CommandData *v7; // r0@2
  unsigned int v8; // r7@4
  void *result; // r0@5
  unsigned int v10; // r1@6
  unsigned int v11; // r10@9
  unsigned int v12; // r0@10
  unsigned int v13; // r1@11
  __int64 v14; // r0@16
  void *v15; // [sp+0h] [bp-40h]@16
  void *v16; // [sp+4h] [bp-3Ch]@17
  __int16 v17; // [sp+8h] [bp-38h]@17
  int v18; // [sp+Ch] [bp-34h]@17
  int v19; // [sp+10h] [bp-30h]@17
  int v20; // [sp+14h] [bp-2Ch]@17
  int v21; // [sp+18h] [bp-28h]@17

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = this;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = (AvailableCommandsPacket::CommandData *)v5;
    do
      v7 = (AvailableCommandsPacket::CommandData *)((char *)AvailableCommandsPacket::CommandData::~CommandData(v7) + 28);
    while ( (AvailableCommandsPacket::CommandData *)HIDWORD(v5) != v7 );
  }
  *((_DWORD *)v3 + 1) = v5;
  v8 = ReadOnlyBinaryStream::getUnsignedVarInt(v6);
  if ( v8 < 0x924924A )
    v10 = v8;
    if ( v8 > 0x1000 )
      v10 = 4096;
    result = std::vector<AvailableCommandsPacket::CommandData,std::allocator<AvailableCommandsPacket::CommandData>>::reserve(
               (int)v3,
               v10);
    if ( v8 )
    {
      v11 = 0;
      do
      {
        v12 = -1227133513 * ((signed int)(((unsigned __int64)*v3 >> 32) - *v3) >> 2);
        if ( v11 >= v12 )
        {
          v13 = v12 + 4096;
          if ( v8 < v12 + 4096 )
            v13 = v8;
          std::vector<AvailableCommandsPacket::CommandData,std::allocator<AvailableCommandsPacket::CommandData>>::reserve(
            (int)v3,
            v13);
        }
        result = (void *)*((_DWORD *)v6 + 1);
        if ( *(void **)(**((_DWORD **)v6 + 3) - 12) == result )
          break;
        if ( !*(_DWORD *)(v4 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(void **, int, ReadOnlyBinaryStream *))(v4 + 12))(&v15, v4, v6);
        v14 = *(__int64 *)((char *)v3 + 4);
        if ( (_DWORD)v14 == HIDWORD(v14) )
          std::vector<AvailableCommandsPacket::CommandData,std::allocator<AvailableCommandsPacket::CommandData>>::_M_emplace_back_aux<AvailableCommandsPacket::CommandData>(
            (unsigned __int64 *)v3,
            (int)&v15);
        else
          *(_DWORD *)v14 = v15;
          v15 = &unk_28898CC;
          *(_DWORD *)(v14 + 4) = v16;
          v16 = &unk_28898CC;
          *(_WORD *)(v14 + 8) = v17;
          *(_DWORD *)(v14 + 12) = 0;
          *(_DWORD *)(v14 + 16) = 0;
          *(_DWORD *)(v14 + 20) = 0;
          *(_DWORD *)(v14 + 12) = v18;
          v18 = 0;
          HIDWORD(v14) = *(_DWORD *)(v14 + 16);
          *(_DWORD *)(v14 + 16) = v19;
          v19 = HIDWORD(v14);
          HIDWORD(v14) = *(_DWORD *)(v14 + 20);
          *(_DWORD *)(v14 + 20) = v20;
          v20 = HIDWORD(v14);
          *(_DWORD *)(v14 + 24) = v21;
          *((_DWORD *)v3 + 1) += 28;
        result = (void *)AvailableCommandsPacket::CommandData::~CommandData((AvailableCommandsPacket::CommandData *)&v15);
        ++v11;
      }
      while ( v8 != v11 );
    }
  else
    result = *(void **)(**((_DWORD **)v6 + 3) - 12);
    *((_DWORD *)v6 + 1) = result;
  return result;
}
