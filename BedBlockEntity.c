

void __fastcall BedBlockEntity::~BedBlockEntity(BedBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = j_BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall BedBlockEntity::onPlace(int result, BlockSource *a2)
{
  *(_BYTE *)(result + 108) = 1;
  return result;
}


CompoundTag *__fastcall BedBlockEntity::getUpdatePacket(BedBlockEntity *this, BlockSource *a2)
{
  BedBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  j_CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = j_operator new(0x38u);
  j_CompoundTag::CompoundTag((int)&v10, (int)&v9);
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
  j_CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  j_CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return j_CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


int __fastcall BedBlockEntity::tick(BedBlockEntity *this, BlockSource *a2)
{
  BedBlockEntity *v2; // r4@1
  int result; // r0@1
  int v4; // r4@2
  int v5; // t1@2
  int *v6; // r5@2
  int v7; // r0@2
  float *v12; // r1@2
  float *v13; // r3@2
  float *v14; // r2@2
  float *v15; // r6@2
  int *v16; // r7@2
  int v17; // r12@4
  int v18; // r6@6
  int v19; // r2@12
  int v20; // r1@12
  float v25; // [sp+4h] [bp-6Ch]@2
  float v28; // [sp+10h] [bp-60h]@2
  float v29; // [sp+14h] [bp-5Ch]@2
  float v30; // [sp+18h] [bp-58h]@2
  int v31; // [sp+1Ch] [bp-54h]@14
  int v32; // [sp+20h] [bp-50h]@14
  int v33; // [sp+24h] [bp-4Ch]@14
  int v34; // [sp+28h] [bp-48h]@14
  int v35; // [sp+2Ch] [bp-44h]@14
  int v36; // [sp+30h] [bp-40h]@14
  char v37; // [sp+34h] [bp-3Ch]@14
  int v38; // [sp+38h] [bp-38h]@2
  int v39; // [sp+3Ch] [bp-34h]@2
  int v40; // [sp+40h] [bp-30h]@2
  int v41; // [sp+44h] [bp-2Ch]@14
  int v42; // [sp+48h] [bp-28h]@14
  int v43; // [sp+4Ch] [bp-24h]@14
  int v44; // [sp+50h] [bp-20h]@8
  int v45; // [sp+54h] [bp-1Ch]@8
  int v46; // [sp+58h] [bp-18h]@8

  v2 = this;
  result = *((_BYTE *)this + 108);
  if ( result )
  {
    v5 = *((_DWORD *)v2 + 8);
    v4 = (int)v2 + 32;
    v38 = v5;
    v39 = *(_DWORD *)(v4 + 4);
    v40 = *(_DWORD *)(v4 + 8);
    (*(void (**)(void))(*(_DWORD *)Block::mBed + 260))();
    v6 = (int *)&v28;
    j_Vec3::Vec3((int)&v28, v4);
    j_Vec3::Vec3((int)&v25, (int)&v38);
    __asm { VLDR            S4, [SP,#0x70+var_58] }
    v12 = &v30;
    __asm
    {
      VLDR            S10, [SP,#0x70+var_64]
      VLDR            S2, [SP,#0x70+var_5C]
    }
    v13 = &v30;
      VCMPE.F32       S10, S4
      VLDR            S8, [SP,#0x70+var_68]
      VMRS            APSR_nzcv, FPSCR
    v14 = &v29;
      VCMPE.F32       S8, S2
      VLDR            S0, [SP,#0x70+var_60]
      VLDR            S6, [SP,#0x70+var_6C]
    v15 = &v29;
    v16 = (int *)&v28;
    if ( _NF ^ _VF )
      v13 = (float *)(v7 + 8);
    __asm { VMRS            APSR_nzcv, FPSCR }
    v17 = *(_DWORD *)v13;
    __asm { VCMPE.F32       S6, S0 }
      v15 = (float *)(v7 + 4);
      VCMPE.F32       S2, S8
    v18 = *(_DWORD *)v15;
      v16 = (int *)v7;
      VCMPE.F32       S4, S10
    v44 = *v16;
    v45 = v18;
    v46 = v17;
      v14 = (float *)(v7 + 4);
      VCMPE.F32       S0, S6
      v12 = (float *)(v7 + 8);
    v19 = *(_DWORD *)v14;
    v20 = *(_DWORD *)v12;
      v6 = (int *)v7;
    v41 = *v6;
    v42 = v19;
    v43 = v20;
    j_AABB::AABB((int)&v31, (int)&v44, (int)&v41);
    *(_DWORD *)(v4 + 12) = v31;
    *(_DWORD *)(v4 + 16) = v32;
    *(_DWORD *)(v4 + 20) = v33;
    _R0 = v34;
    *(_DWORD *)(v4 + 24) = v34;
    _R2 = v35;
    *(_DWORD *)(v4 + 28) = v35;
    __asm { VMOV            S0, R0 }
    _R3 = v36;
    result = 0;
    *(_DWORD *)(v4 + 32) = v36;
    _R1 = &Vec3::ONE;
    *(_BYTE *)(v4 + 36) = v37;
      VLDR            S2, [R1]
      VADD.F32        S0, S0, S2
      VMOV            S2, R2
      VSTR            S0, [R4,#0x18]
      VLDR            S0, [R1,#4]
      VADD.F32        S0, S2, S0
      VMOV            S2, R3
      VSTR            S0, [R4,#0x1C]
      VLDR            S0, [R1,#8]
      VSTR            S0, [R4,#0x20]
    *(_BYTE *)(v4 + 76) = 0;
  }
  return result;
}


int __fastcall BedBlockEntity::onChanged(int result, BlockSource *a2)
{
  *(_BYTE *)(result + 108) = 1;
  return result;
}


signed int __fastcall BedBlockEntity::save(BedBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  BedBlockEntity *v3; // r5@1
  void *v4; // r0@2
  signed int result; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( j_BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v8, "color");
    j_CompoundTag::putByte((int)v2, (const void **)&v8, *((_BYTE *)v3 + 104));
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
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BedBlockEntity::BedBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "bed");
  j_BlockEntity::BlockEntity(v3, 27, v2);
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
  *(_DWORD *)v3 = &off_27230E0;
  *(_BYTE *)(v3 + 108) = 1;
  *(_DWORD *)(v3 + 84) = 16;
  return v3;
}


signed int __fastcall BedBlockEntity::load(BedBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BedBlockEntity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  signed int result; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int v12; // [sp+8h] [bp-30h]@3
  int v13; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  j_BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v13, "color");
  v4 = j_CompoundTag::contains((int)v2, (const void **)&v13);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 != 1 )
    goto LABEL_25;
  sub_21E94B4((void **)&v12, "color");
  *((_DWORD *)v3 + 26) = j_CompoundTag::getByte((int)v2, (const void **)&v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( *((_DWORD *)v3 + 26) >= 16 )
LABEL_25:
    *((_DWORD *)v3 + 26) = 14;
  result = 1;
  *((_BYTE *)v3 + 108) = 1;
  return result;
}


void __fastcall BedBlockEntity::~BedBlockEntity(BedBlockEntity *this)
{
  BedBlockEntity::~BedBlockEntity(this);
}
