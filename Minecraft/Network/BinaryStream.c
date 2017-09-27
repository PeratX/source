

const void **__fastcall BinaryStream::writeByte(BinaryStream *this, unsigned __int8 a2)
{
  unsigned __int8 v3; // [sp+7h] [bp-9h]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 1u);
}


void __fastcall BinaryStream::writeType<InventoryTransaction>(int a1, int a2)
{
  j_j_j__ZN9serializeI20InventoryTransactionE5writeERKS0_R12BinaryStream(a2, a1);
}


void __fastcall BinaryStream::~BinaryStream(BinaryStream *this)
{
  BinaryStream *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D53E4;
  v2 = *((_DWORD *)this + 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26E91A4;
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


int __fastcall BinaryStream::BinaryStream(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1
  int *v6; // r0@1
  int v7; // r7@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_26E91A4;
  *(_DWORD *)(a1 + 4) = 0;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  v6 = (int *)(v3 + 16);
  v7 = (int)v4;
  if ( v5 )
    v7 = v3 + 16;
  *(_DWORD *)(v3 + 12) = v7;
  *(_DWORD *)v3 = &off_26D53E4;
  if ( v5 == 1 )
    sub_21E8AF4(v6, v4);
  else
    sub_21E94B4((void **)v6, (const char *)&unk_257BC67);
  *(_DWORD *)(v3 + 20) = v7;
  return v3;
}


unsigned int __fastcall BinaryStream::writeVarInt(BinaryStream *this, int a2)
{
  BinaryStream *v2; // r4@1
  unsigned int v3; // r6@1
  char v4; // r0@2
  unsigned int result; // r0@4
  char v6; // [sp+3h] [bp-15h]@4

  v2 = this;
  v3 = 2 * a2 ^ (a2 >> 31);
  do
  {
    v4 = v3 & 0x7F;
    if ( 0 != v3 >> 7 )
      v4 = v3 | 0x80;
    v6 = v4;
    sub_21E7408(*((const void ***)v2 + 5), &v6, 1u);
    result = v3 >> 7;
    v3 >>= 7;
  }
  while ( v3 );
  return result;
}


const void **__fastcall BinaryStream::writeUnsignedShort(BinaryStream *this, unsigned __int16 a2)
{
  unsigned __int16 v3; // [sp+6h] [bp-Ah]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 2u);
}


const void **__fastcall BinaryStream::writeUnsignedChar(BinaryStream *this, unsigned __int8 a2)
{
  unsigned __int8 v3; // [sp+7h] [bp-9h]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 1u);
}


const void **__fastcall BinaryStream::writeUnsignedInt(BinaryStream *this, unsigned int a2)
{
  unsigned int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 4u);
}


void __fastcall BinaryStream::reserve(BinaryStream *this, unsigned int a2)
{
  sub_21E6FCC(*((const void ***)this + 5), a2);
}


const void **__fastcall BinaryStream::writeSignedBigEndianInt(BinaryStream *this, int a2)
{
  unsigned int v3; // [sp+4h] [bp-Ch]@1

  v3 = __rev(a2);
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 4u);
}


const void **__fastcall BinaryStream::writeDouble(BinaryStream *this, int a2, double _R2)
{
  double v8; // [sp+0h] [bp-10h]@1

  __asm
  {
    VMOV            D0, R2, R3
    VSTR            D0, [SP,#0x10+var_10]
  }
  return sub_21E7408(*((const void ***)this + 5), (char *)&v8, 8u);
}


const void **__fastcall BinaryStream::writeType<EntityUniqueID>(int a1, __int64 *a2)
{
  __int64 v2; // r1@1
  int v3; // r3@1
  unsigned int v4; // r1@1
  unsigned int v5; // r3@1
  int v6; // r2@1
  const void ***v7; // r5@2
  unsigned int v8; // r6@2
  unsigned int v9; // r7@3
  int v10; // r0@3
  char v12; // [sp+2h] [bp-16h]@3
  char v13; // [sp+3h] [bp-15h]@6

  v2 = *a2;
  v3 = __PAIR__(HIDWORD(v2), (unsigned int)v2) >> 31;
  v4 = 2 * v2 ^ (SHIDWORD(v2) >> 31);
  v5 = (HIDWORD(v2) + v3) ^ (SHIDWORD(v2) >> 31);
  v6 = (v4 >> 7) | (v5 << 25);
  if ( v6 | (v5 >> 7) )
  {
    v7 = (const void ***)(a1 + 20);
    v8 = v5 >> 7;
    do
    {
      v12 = v4 | 0x80;
      v9 = v6;
      sub_21E7408(*v7, &v12, 1u);
      v6 = (v9 >> 7) | (v8 << 25);
      v10 = v6 | (v8 >> 7);
      v8 >>= 7;
      LOBYTE(v4) = v9;
    }
    while ( v10 );
    LOBYTE(v4) = v9;
  }
  else
  v13 = v4 & 0x7F;
  return sub_21E7408(*v7, &v13, 1u);
}


const void **__fastcall BinaryStream::writeSignedInt(BinaryStream *this, int a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 4u);
}


const void **__fastcall BinaryStream::writeUnsignedVarInt64(BinaryStream *this, int a2, unsigned __int64 a3)
{
  unsigned int v3; // r1@1
  const void ***v4; // r5@2
  unsigned int v5; // r6@2
  unsigned int v6; // r7@3
  int v7; // r0@3
  char v9; // [sp+2h] [bp-16h]@3
  char v10; // [sp+3h] [bp-15h]@6

  v3 = (signed __int64)a3 >> 7;
  if ( (signed __int64)a3 >> 7 )
  {
    v4 = (const void ***)((char *)this + 20);
    v5 = HIDWORD(a3) >> 7;
    do
    {
      v9 = a3 | 0x80;
      v6 = v3;
      sub_21E7408(*v4, &v9, 1u);
      v3 = (v6 >> 7) | (v5 << 25);
      v7 = v3 | (v5 >> 7);
      v5 >>= 7;
      LOBYTE(a3) = v6;
    }
    while ( v7 );
    LOBYTE(a3) = v6;
  }
  else
  v10 = a3 & 0x7F;
  return sub_21E7408(*v4, &v10, 1u);
}


const void **__fastcall BinaryStream::writeType<EntityRuntimeID>(int a1, unsigned __int64 *a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r3@1
  int v4; // r2@1
  const void ***v5; // r5@2
  unsigned int v6; // r6@2
  unsigned int v7; // r7@3
  int v8; // r0@3
  char v10; // [sp+2h] [bp-16h]@3
  char v11; // [sp+3h] [bp-15h]@6

  v3 = *a2 >> 32;
  v2 = *a2;
  v4 = (v2 >> 7) | (v3 << 25);
  if ( v4 | (v3 >> 7) )
  {
    v5 = (const void ***)(a1 + 20);
    v6 = v3 >> 7;
    do
    {
      v10 = v2 | 0x80;
      v7 = v4;
      sub_21E7408(*v5, &v10, 1u);
      v4 = (v7 >> 7) | (v6 << 25);
      v8 = v4 | (v6 >> 7);
      v6 >>= 7;
      LOBYTE(v2) = v7;
    }
    while ( v8 );
    LOBYTE(v2) = v7;
  }
  else
  v11 = v2 & 0x7F;
  return sub_21E7408(*v5, &v11, 1u);
}


unsigned int __fastcall BinaryStream::writeUnsignedVarInt(BinaryStream *this, unsigned int a2)
{
  unsigned int v2; // r5@1
  BinaryStream *v3; // r4@1
  char v4; // r0@2
  unsigned int result; // r0@4
  char v6; // [sp+3h] [bp-15h]@4

  v2 = a2;
  v3 = this;
  do
  {
    v4 = v2 & 0x7F;
    if ( 0 != v2 >> 7 )
      v4 = v2 | 0x80;
    v6 = v4;
    sub_21E7408(*((const void ***)v3 + 5), &v6, 1u);
    result = v2 >> 7;
    v2 >>= 7;
  }
  while ( v2 );
  return result;
}


const void **__fastcall BinaryStream::writeFloat(BinaryStream *this, float a2)
{
  float v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 4u);
}


void __fastcall BinaryStream::~BinaryStream(BinaryStream *this)
{
  BinaryStream::~BinaryStream(this);
}


int __fastcall BinaryStream::BinaryStream(int a1, _DWORD *a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26E91A4;
  *(_DWORD *)(a1 + 4) = 0;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  *(_DWORD *)(v2 + 12) = v2 + 16;
  *(_DWORD *)v2 = &off_26D53E4;
  *(_DWORD *)(v2 + 16) = *v3;
  *v3 = &unk_28898CC;
  result = v2;
  *(_DWORD *)(v2 + 20) = v2 + 16;
  return result;
}


const void **__fastcall BinaryStream::writeType<InventoryAction>(int a1, unsigned int *a2)
{
  unsigned int *v2; // r8@1
  int v3; // r4@1
  unsigned int v4; // r5@1
  char v5; // r0@2
  char v7; // [sp+7h] [bp-19h]@4

  v2 = a2;
  v3 = a1;
  serialize<InventorySource>::write(a2, a1);
  v4 = v2[3];
  do
  {
    v5 = v4 & 0x7F;
    if ( 0 != v4 >> 7 )
      v5 = v4 | 0x80;
    v7 = v5;
    sub_21E7408(*(const void ***)(v3 + 20), &v7, 1u);
    v4 >>= 7;
  }
  while ( v4 );
  serialize<ItemInstance>::write((ItemInstance *)(v2 + 4), v3);
  return serialize<ItemInstance>::write((ItemInstance *)(v2 + 22), v3);
}


unsigned int __fastcall BinaryStream::writeType<ChunkPos>(int a1, signed int *a2)
{
  signed int *v2; // r8@1
  int v3; // r4@1
  unsigned int v4; // r7@1
  char v5; // r0@2
  unsigned int v6; // r6@5
  char v7; // r0@6
  unsigned int result; // r0@8
  char v9; // [sp+6h] [bp-1Ah]@4
  char v10; // [sp+7h] [bp-19h]@8

  v2 = a2;
  v3 = a1;
  v4 = 2 * *a2 ^ (*a2 >> 31);
  do
  {
    v5 = v4 & 0x7F;
    if ( 0 != v4 >> 7 )
      v5 = v4 | 0x80;
    v9 = v5;
    sub_21E7408(*(const void ***)(v3 + 20), &v9, 1u);
    v4 >>= 7;
  }
  while ( v4 );
  v6 = 2 * v2[1] ^ (v2[1] >> 31);
    v7 = v6 & 0x7F;
    if ( 0 != v6 >> 7 )
      v7 = v6 | 0x80;
    v10 = v7;
    sub_21E7408(*(const void ***)(v3 + 20), &v10, 1u);
    result = v6 >> 7;
    v6 >>= 7;
  while ( v6 );
  return result;
}


const void **__fastcall BinaryStream::writeType<mce::UUID>(int a1, _QWORD *a2)
{
  _QWORD *v2; // r4@1
  int v3; // r5@1
  __int64 v5; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v5 = *a2;
  sub_21E7408(*(const void ***)(a1 + 20), (char *)&v5, 8u);
  v5 = v2[1];
  return sub_21E7408(*(const void ***)(v3 + 20), (char *)&v5, 8u);
}


int __fastcall BinaryStream::BinaryStream(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26E91A4;
  *(_DWORD *)(a1 + 4) = 0;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  *(_DWORD *)(v2 + 12) = v2 + 16;
  *(_DWORD *)v2 = &off_26D53E4;
  *(_DWORD *)(v2 + 20) = sub_21E8AF4((int *)(v2 + 16), v3);
  return v2;
}


const void **__fastcall BinaryStream::writeBool(BinaryStream *this, bool a2)
{
  bool v3; // [sp+7h] [bp-9h]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 1u);
}


int __fastcall BinaryStream::BinaryStream(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  sub_21E94B4((void **)&v3, (const char *)&unk_257BC67);
  *(_DWORD *)v1 = &off_26E91A4;
  *(_DWORD *)(v1 + 4) = 0;
  sub_21E94B4((void **)(v1 + 8), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 12) = v1 + 16;
  *(_DWORD *)v1 = &off_26D53E4;
  *(_DWORD *)(v1 + 16) = v3;
  *(_DWORD *)(v1 + 20) = v1 + 16;
  return v1;
}


const void **__fastcall BinaryStream::writeSignedShort(BinaryStream *this, __int16 a2)
{
  __int16 v3; // [sp+6h] [bp-Ah]@1

  v3 = a2;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v3, 2u);
}


int __fastcall BinaryStream::writeStream(BinaryStream *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  int result; // r0@1

  v2 = a2;
  sub_21E7408(
    *((const void ***)this + 5),
    (char *)(**((_DWORD **)a2 + 3) + *((_DWORD *)a2 + 1)),
    *(_DWORD *)(**((_DWORD **)a2 + 3) - 12) - *((_DWORD *)a2 + 1));
  result = *(_DWORD *)(**((_DWORD **)v2 + 3) - 12);
  *((_DWORD *)v2 + 1) = result;
  return result;
}


const void **__fastcall BinaryStream::writeFixedFloat(BinaryStream *this, float _R1, double _R2)
{
  BinaryStream *v7; // r4@1
  unsigned __int64 v9; // r0@1
  int v10; // r2@1
  unsigned int v11; // r0@1
  unsigned int v12; // r2@1
  int v13; // r1@1
  const void ***v14; // r5@2
  unsigned int v15; // r6@2
  unsigned int v16; // r7@3
  char v18; // [sp+2h] [bp-16h]@3
  char v19; // [sp+3h] [bp-15h]@7

  __asm { VMOV            S0, R1 }
  v7 = this;
  __asm
  {
    VMOV            D1, R2, R3
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VMOV            R0, R1, D0
  }
  LODWORD(v9) = _aeabi_d2lz(_R0);
  v10 = v9 >> 31;
  v11 = 2 * v9 ^ (SHIDWORD(v9) >> 31);
  v12 = (HIDWORD(v9) + v10) ^ (SHIDWORD(v9) >> 31);
  v13 = (v11 >> 7) | (v12 << 25);
  if ( v13 | (v12 >> 7) )
    v14 = (const void ***)((char *)v7 + 20);
    v15 = v12 >> 7;
    do
    {
      v18 = v11 | 0x80;
      v16 = v13;
      sub_21E7408(*v14, &v18, 1u);
      v13 = (v16 >> 7) | (v15 << 25);
      v11 = v13 | (v15 >> 7);
      v15 >>= 7;
      _ZF = v11 == 0;
      LOBYTE(v11) = v16;
    }
    while ( !_ZF );
    LOBYTE(v11) = v16;
  else
  v19 = v11 & 0x7F;
  return sub_21E7408(*v14, &v19, 1u);
}


const void **__fastcall BinaryStream::writeUnsignedInt64(BinaryStream *this, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // [sp+0h] [bp-10h]@1

  v4 = a3;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v4, 8u);
}


BinaryStream *__fastcall BinaryStream::~BinaryStream(BinaryStream *this)
{
  BinaryStream *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D53E4;
  v2 = *((_DWORD *)this + 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26E91A4;
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  return v1;
}


const void **__fastcall BinaryStream::writeVarInt64(BinaryStream *this, int a2, __int64 a3)
{
  unsigned int v3; // r1@1
  unsigned int v4; // r3@1
  int v5; // r2@1
  const void ***v6; // r5@2
  unsigned int v7; // r6@2
  unsigned int v8; // r7@3
  int v9; // r0@3
  char v11; // [sp+2h] [bp-16h]@3
  char v12; // [sp+3h] [bp-15h]@6

  v3 = 2 * a3 ^ (SHIDWORD(a3) >> 31);
  v4 = ((unsigned __int64)a3 >> 31) ^ (SHIDWORD(a3) >> 31);
  v5 = (v3 >> 7) | (v4 << 25);
  if ( v5 | (v4 >> 7) )
  {
    v6 = (const void ***)((char *)this + 20);
    v7 = v4 >> 7;
    do
    {
      v11 = v3 | 0x80;
      v8 = v5;
      sub_21E7408(*v6, &v11, 1u);
      v5 = (v8 >> 7) | (v7 << 25);
      v9 = v5 | (v7 >> 7);
      v7 >>= 7;
      LOBYTE(v3) = v8;
    }
    while ( v9 );
    LOBYTE(v3) = v8;
  }
  else
  v12 = v3 & 0x7F;
  return sub_21E7408(*v6, &v12, 1u);
}


void __fastcall BinaryStream::writeType<InventoryTransaction>(int a1, int a2)
{
  BinaryStream::writeType<InventoryTransaction>(a1, a2);
}


char *__fastcall BinaryStream::getAndReleaseData(BinaryStream *this, int a2)
{
  int v2; // r4@1
  _DWORD *v3; // r2@1
  char *result; // r0@1

  v2 = a2;
  v3 = *(_DWORD **)(a2 + 20);
  *(_DWORD *)this = *v3;
  *v3 = &unk_28898CC;
  result = sub_21E7EE0(*(const void ***)(a2 + 20), 0, *(_BYTE **)(**(_DWORD **)(a2 + 20) - 12), 0);
  *(_DWORD *)(v2 + 4) = 0;
  return result;
}


const void **__fastcall BinaryStream::writeString(int a1, char **a2)
{
  char **v2; // r8@1
  int v3; // r4@1
  unsigned int v4; // r5@1
  char v5; // r0@2
  const void **result; // r0@4
  unsigned int v7; // r2@5
  char v8; // [sp+7h] [bp-19h]@4

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)*a2 - 3);
  do
  {
    v5 = v4 & 0x7F;
    if ( 0 != v4 >> 7 )
      v5 = v4 | 0x80;
    v8 = v5;
    sub_21E7408(*(const void ***)(v3 + 20), &v8, 1u);
    result = (const void **)(v4 >> 7);
    v4 >>= 7;
  }
  while ( v4 );
  v7 = *((_DWORD *)*v2 - 3);
  if ( v7 )
    result = sub_21E7408(*(const void ***)(v3 + 20), *v2, v7);
  return result;
}


const void **__fastcall BinaryStream::writeType<Vec2>(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  v5 = *a2;
  sub_21E7408(*(const void ***)(a1 + 20), (char *)&v5, 4u);
  v6 = v2[1];
  return sub_21E7408(*(const void ***)(v3 + 20), (char *)&v6, 4u);
}


void __fastcall BinaryStream::reserve(BinaryStream *this, unsigned int a2)
{
  BinaryStream::reserve(this, a2);
}


const void **__fastcall BinaryStream::writeSignedInt64(BinaryStream *this, int a2, __int64 a3)
{
  __int64 v4; // [sp+0h] [bp-10h]@1

  v4 = a3;
  return sub_21E7408(*((const void ***)this + 5), (char *)&v4, 8u);
}


const void **__fastcall BinaryStream::writeNormalizedFloat(BinaryStream *this, float _R1)
{
  BinaryStream *v6; // r4@1
  unsigned __int64 v8; // r0@1
  int v9; // r2@1
  unsigned int v10; // r0@1
  unsigned int v11; // r2@1
  int v12; // r1@1
  const void ***v13; // r5@2
  unsigned int v14; // r6@2
  unsigned int v15; // r7@3
  char v17; // [sp+2h] [bp-16h]@3
  char v18; // [sp+3h] [bp-15h]@7

  __asm
  {
    VMOV            S0, R1
    VLDR            D1, =2.14748365e9
  }
  v6 = this;
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VMOV            R0, R1, D0
  LODWORD(v8) = _aeabi_d2lz(_R0);
  v9 = v8 >> 31;
  v10 = 2 * v8 ^ (SHIDWORD(v8) >> 31);
  v11 = (HIDWORD(v8) + v9) ^ (SHIDWORD(v8) >> 31);
  v12 = (v10 >> 7) | (v11 << 25);
  if ( v12 | (v11 >> 7) )
    v13 = (const void ***)((char *)v6 + 20);
    v14 = v11 >> 7;
    do
    {
      v17 = v10 | 0x80;
      v15 = v12;
      sub_21E7408(*v13, &v17, 1u);
      v12 = (v15 >> 7) | (v14 << 25);
      v10 = v12 | (v14 >> 7);
      v14 >>= 7;
      _ZF = v10 == 0;
      LOBYTE(v10) = v15;
    }
    while ( !_ZF );
    LOBYTE(v10) = v15;
  else
  v18 = v10 & 0x7F;
  return sub_21E7408(*v13, &v18, 1u);
}


const void **__fastcall BinaryStream::writeType<Vec3>(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  v5 = *a2;
  sub_21E7408(*(const void ***)(a1 + 20), (char *)&v5, 4u);
  v6 = v2[1];
  sub_21E7408(*(const void ***)(v3 + 20), (char *)&v6, 4u);
  v7 = v2[2];
  return sub_21E7408(*(const void ***)(v3 + 20), (char *)&v7, 4u);
}


char *__fastcall BinaryStream::reset(BinaryStream *this)
{
  BinaryStream *v1; // r4@1
  char *result; // r0@1

  v1 = this;
  result = sub_21E7EE0(*((const void ***)this + 5), 0, *(_BYTE **)(**((_DWORD **)this + 5) - 12), 0);
  *((_DWORD *)v1 + 1) = 0;
  return result;
}
