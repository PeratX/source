

int __fastcall EnchantingTableEntity::tick(EnchantingTableEntity *this, BlockSource *a2)
{
  BlockSource *v3; // r8@1
  __int64 v5; // kr00_8@1
  int v6; // r1@1
  int v7; // r2@1
  Dimension *v12; // r0@1
  int v13; // r0@1
  __int64 v16; // r2@2
  Random *v17; // r0@2
  Random *v18; // r5@2
  unsigned int v19; // r6@5
  int result; // r0@40
  int v23; // [sp+4h] [bp-94h]@2
  char v24; // [sp+8h] [bp-90h]@1
  int v25; // [sp+Ch] [bp-8Ch]@1
  int v26; // [sp+10h] [bp-88h]@1
  int v27; // [sp+14h] [bp-84h]@1
  int v28; // [sp+18h] [bp-80h]@1
  int v29; // [sp+1Ch] [bp-7Ch]@1
  char v30; // [sp+20h] [bp-78h]@1
  char v31; // [sp+2Ch] [bp-6Ch]@1
  int v32; // [sp+38h] [bp-60h]@1
  signed int v33; // [sp+3Ch] [bp-5Ch]@1
  int v34; // [sp+40h] [bp-58h]@1
  char v35; // [sp+44h] [bp-54h]@1
  int v36; // [sp+48h] [bp-50h]@1
  int v37; // [sp+4Ch] [bp-4Ch]@1
  int v38; // [sp+50h] [bp-48h]@1
  int v39; // [sp+54h] [bp-44h]@1
  int v40; // [sp+58h] [bp-40h]@1
  float v41; // [sp+5Ch] [bp-3Ch]@1
  float v42; // [sp+60h] [bp-38h]@1
  float v43; // [sp+64h] [bp-34h]@1

  _R4 = this;
  v3 = a2;
  *((_DWORD *)this + 27) = *((_DWORD *)this + 26);
  *((_DWORD *)this + 29) = *((_DWORD *)this + 28);
  v32 = 1056964608;
  v33 = 1056964608;
  v34 = 1056964608;
  BlockPos::BlockPos((int)&v35, (int)&v32);
  _R6 = (int)_R4 + 32;
  v5 = *(_QWORD *)((char *)_R4 + 36);
  v38 = *((_DWORD *)_R4 + 8) + *(_DWORD *)&v35;
  v39 = v36 + v5;
  v40 = v37 + HIDWORD(v5);
  Vec3::Vec3((int)&v41, (int)&v38);
  Vec3::Vec3((int)&v31, (int)_R4 + 32);
  BlockPos::BlockPos((int)&v24, (int)&Vec3::ONE);
  v6 = *((_DWORD *)_R4 + 9);
  v7 = *((_DWORD *)_R4 + 10);
  v27 = *((_DWORD *)_R4 + 8) + *(_DWORD *)&v24;
  v28 = v25 + v6;
  v29 = v26 + v7;
  Vec3::Vec3((int)&v30, (int)&v27);
  AABB::set((EnchantingTableEntity *)((char *)_R4 + 44), (const Vec3 *)&v31, (const Vec3 *)&v30);
  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S0, [R6,#0x1C]
    VADD.F32        S0, S0, S16
    VSTR            S0, [R6,#0x1C]
  }
  v12 = (Dimension *)BlockSource::getDimension(v3);
  v13 = Dimension::fetchNearestPlayer(v12, v41, v42, v43, 3.0);
  if ( v13 )
    _R0 = (*(int (**)(void))(*(_DWORD *)v13 + 52))();
    __asm
    {
      VMOV.F32        S0, #-0.5
      VLDR            S4, [R0,#8]
      VLDR            S2, [R0]
      VLDR            S6, [SP,#0x98+var_34]
      VADD.F32        S4, S4, S0
      VADD.F32        S0, S2, S0
      VLDR            S2, [SP,#0x98+var_3C]
      VSUB.F32        S4, S4, S6
      VSUB.F32        S0, S0, S2
      VMOV            R0, S4
      VMOV            R1, S0
    }
    v23 = mce::Math::atan2(_R0, v16);
    *((_DWORD *)_R4 + 30) = *(_DWORD *)mce::Radian::asFloat((mce::Radian *)&v23);
      VLDR            S0, =0.1
      VLDR            S2, [R4,#0x68]
      VSTR            S0, [R4,#0x68]
    v17 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      VMOV.F32        S0, #0.5
    v18 = v17;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF || !(Random::_genRandInt32(v17) % 0x28) )
      __asm { VLDR            S18, [R4,#0x84] }
      do
      {
        v19 = Random::_genRandInt32(v18) & 3;
        _R0 = v19 - (Random::_genRandInt32(v18) & 3);
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VLDR            S2, [R4,#0x84]
          VADD.F32        S0, S0, S2
          VCMPE.F32       S18, S0
          VSTR            S0, [R4,#0x84]
          VMRS            APSR_nzcv, FPSCR
        }
      }
      while ( _ZF );
  else
      VLDR            S0, =0.02
      VLDR            S2, [R4,#0x78]
      VLDR            S2, =-0.1
      VSTR            S0, [R4,#0x78]
      VLDR            S0, [R4,#0x68]
      VADD.F32        S0, S0, S2
  __asm { VLDR            S0, [R4,#0x70] }
  _R0 = &mce::Math::PI;
    VLDR            S2, [R0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm { VADD.F32        S4, S2, S2 }
    do
      __asm
        VSUB.F32        S0, S0, S4
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
    while ( !(_NF ^ _VF) );
    __asm { VSTR            S0, [R4,#0x70] }
    VNEG.F32        S4, S2
    VCMPE.F32       S0, S4
  if ( _NF ^ _VF )
    __asm { VADD.F32        S6, S2, S2 }
        VADD.F32        S0, S6, S0
        VCMPE.F32       S0, S4
    while ( _NF ^ _VF );
    VLDR            S6, [R4,#0x78]
    VCMPE.F32       S6, S2
    __asm { VADD.F32        S8, S2, S2 }
        VSUB.F32        S6, S6, S8
        VCMPE.F32       S6, S2
    __asm { VSTR            S6, [R4,#0x78] }
    VCMPE.F32       S6, S4
        VADD.F32        S6, S8, S6
        VCMPE.F32       S6, S4
    VSUB.F32        S6, S6, S0
    __asm { VADD.F32        S2, S2, S2 }
        VADD.F32        S6, S2, S6
    VLDR            S2, =0.4
    VLDR            S8, =0.2
    VMUL.F32        S4, S6, S2
    VADD.F32        S0, S0, S4
    VLDR            S4, =0.0
    VSTR            S0, [R4,#0x70]
    VLDR            S0, [R4,#0x68]
    VCMPE.F32       S0, #0.0
    VCMPE.F32       S0, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S4, S16 }
  __asm { VSTR            S4, [R4,#0x68] }
  ++*((_DWORD *)_R4 + 35);
  result = *((_DWORD *)_R4 + 31);
  *((_DWORD *)_R4 + 32) = result;
    VLDR            S0, [R4,#0x84]
    VMOV            S6, R0
    VLDR            S4, [R4,#0x88]
    VSUB.F32        S0, S0, S6
    VMUL.F32        S0, S0, S2
    VLDR            S2, =-0.2
    VCMPE.F32       S0, S8
    __asm { VMOVGT.F32      S2, S0 }
    __asm { VMOVGT.F32      S2, S8 }
    VSUB.F32        S0, S2, S4
    VLDR            S2, =0.9
    VADD.F32        S2, S0, S6
    VSTR            S0, [R4,#0x88]
    VSTR            S2, [R4,#0x7C]
  return result;
}


void __fastcall EnchantingTableEntity::~EnchantingTableEntity(EnchantingTableEntity *this)
{
  EnchantingTableEntity::~EnchantingTableEntity(this);
}


int __fastcall EnchantingTableEntity::EnchantingTableEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "enchanting_table");
  BlockEntity::BlockEntity(v3, 9, v2);
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
  *(_DWORD *)v3 = &off_27098E4;
  _aeabi_memclr4(v3 + 104, 40);
  sub_21E94B4((void **)(v3 + 144), (const char *)&unk_257BC67);
  *(_DWORD *)(v3 + 84) = 5;
  return v3;
}


CompoundTag *__fastcall EnchantingTableEntity::getUpdatePacket(EnchantingTableEntity *this, BlockSource *a2)
{
  EnchantingTableEntity *v2; // r4@1
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


void __fastcall EnchantingTableEntity::~EnchantingTableEntity(EnchantingTableEntity *this)
{
  BlockEntity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_27098E4;
  v2 = *((_DWORD *)this + 36);
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
  BlockEntity::~BlockEntity(v1);
  operator delete((void *)v1);
}


void __fastcall EnchantingTableEntity::load(EnchantingTableEntity *this, const CompoundTag *a2)
{
  EnchantingTableEntity::load(this, a2);
}


signed int __fastcall EnchantingTableEntity::save(EnchantingTableEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  EnchantingTableEntity *v3; // r5@1
  void *v4; // r0@3
  void *v5; // r0@4
  signed int result; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+4h] [bp-2Ch]@4
  int v12; // [sp+Ch] [bp-24h]@3

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    if ( *(_DWORD *)(*((_DWORD *)v3 + 36) - 12) )
    {
      sub_21E94B4((void **)&v12, "CustomName");
      CompoundTag::putString((int)v2, (const void **)&v12, (int *)v3 + 36);
      v4 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v12 - 4);
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
          j_j_j_j__ZdlPv_9(v4);
      }
    }
    sub_21E94B4((void **)&v11, "rott");
    CompoundTag::putFloat((int)v2, (const void **)&v11, *((_DWORD *)v3 + 30));
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall EnchantingTableEntity::load(EnchantingTableEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  EnchantingTableEntity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  int *v6; // r0@3
  void *v7; // r0@3
  signed int v8; // r6@4
  void *v9; // r0@4
  void *v15; // r0@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  unsigned int *v18; // r2@12
  signed int v19; // r1@14
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+4h] [bp-34h]@6
  int v25; // [sp+Ch] [bp-2Ch]@4
  int v26; // [sp+14h] [bp-24h]@3
  int v27; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v27, "CustomName");
  v4 = CompoundTag::contains((int)v2, (const void **)&v27);
  v5 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v26, "CustomName");
    v6 = (int *)CompoundTag::getString((int)v2, (const void **)&v26);
    EntityInteraction::setInteractText((int *)v3 + 36, v6);
    v7 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v25, "rott");
  v8 = CompoundTag::contains((int)v2, (const void **)&v25);
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 == 1 )
    sub_21E94B4((void **)&v24, "rott");
    _R0 = CompoundTag::getFloat((int)v2, (const void **)&v24);
    __asm
      VMOV            S0, R0
      VSTR            S0, [R7,#0x78]
    v15 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


BlockEntity *__fastcall EnchantingTableEntity::~EnchantingTableEntity(EnchantingTableEntity *this)
{
  BlockEntity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_27098E4;
  v2 = *((_DWORD *)this + 36);
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
  BlockEntity::~BlockEntity(v1);
  return v1;
}


void *__fastcall EnchantingTableEntity::getName(EnchantingTableEntity *this, int a2)
{
  int *v2; // r1@1
  int v3; // t1@1
  void *result; // r0@2

  v3 = *(_DWORD *)(a2 + 144);
  v2 = (int *)(a2 + 144);
  if ( *(_DWORD *)(v3 - 12) )
    result = sub_21E8AF4((int *)this, v2);
  else
    result = sub_21E94B4((void **)this, "tile.enchanting_table.name");
  return result;
}
