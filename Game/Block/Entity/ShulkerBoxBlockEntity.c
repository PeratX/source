

void __fastcall ShulkerBoxBlockEntity::~ShulkerBoxBlockEntity(ShulkerBoxBlockEntity *this)
{
  ShulkerBoxBlockEntity::~ShulkerBoxBlockEntity(this);
}


void __fastcall ShulkerBoxBlockEntity::~ShulkerBoxBlockEntity(ShulkerBoxBlockEntity *this)
{
  RandomizableBlockEntityFillingContainer *v1; // r0@1

  v1 = ChestBlockEntity::~ChestBlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ShulkerBoxBlockEntity::createShulkerBoxBlockEntity(ShulkerBoxBlockEntity *this, const BlockPos *a2)
{
  ShulkerBoxBlockEntity::createShulkerBoxBlockEntity(this, a2);
}


int __fastcall ShulkerBoxBlockEntity::playCloseSound(ShulkerBoxBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  ChestBlockEntity *v3; // r5@1
  Level *v4; // r6@1
  float v10; // [sp+10h] [bp-28h]@1
  float v11; // [sp+1Ch] [bp-1Ch]@1
  float v12; // [sp+20h] [bp-18h]@1
  float v13; // [sp+24h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  ChestBlockEntity::_getCenter(v3, &v13, &v12, &v11);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x38+var_14]
    VLDR            S4, [SP,#0x38+var_18]
    VLDR            S6, [SP,#0x38+var_1C]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x38+var_28]
    VSTR            S4, [SP,#0x38+var_24]
    VSTR            S0, [SP,#0x38+var_20]
  }
  return Level::broadcastSoundEvent(v4, (int)v2, 68, (int)&v10, -1, 1, 0, 0);
}


void __fastcall ShulkerBoxBlockEntity::load(ShulkerBoxBlockEntity *this, const CompoundTag *a2)
{
  ShulkerBoxBlockEntity::load(this, a2);
}


signed int __fastcall ShulkerBoxBlockEntity::getMaxStackSize(ShulkerBoxBlockEntity *this)
{
  return 1;
}


int __fastcall ShulkerBoxBlockEntity::setUndyed(int result, bool a2)
{
  *(_BYTE *)(result + 342) = a2;
  return result;
}


int __fastcall ShulkerBoxBlockEntity::tick(ShulkerBoxBlockEntity *this, BlockSource *a2)
{
  ShulkerBoxBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  Level *v4; // r0@2
  int v5; // r6@3
  void (__fastcall *v6)(int); // r7@3
  int v8; // [sp+0h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 341) )
  {
    v4 = (Level *)BlockSource::getLevel(a2);
    if ( !Level::isClientSide(v4) )
    {
      v5 = BlockSource::getDimension(v3);
      v6 = *(void (__fastcall **)(int))(*(_DWORD *)v5 + 212);
      (*(void (__fastcall **)(int *, ShulkerBoxBlockEntity *, BlockSource *))(*(_DWORD *)v2 + 52))(&v8, v2, v3);
      *(_DWORD *)(v8 + 8) = 1;
      v6(v5);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      v8 = 0;
      *((_BYTE *)v2 + 341) = 0;
    }
  }
  ShulkerBoxBlockEntity::calculateBB(v2);
  return ChestBlockEntity::tick(v2, v3);
}


void __fastcall ShulkerBoxBlockEntity::createShulkerBoxBlockEntity(ShulkerBoxBlockEntity *this, const BlockPos *a2)
{
  int v2; // [sp+8h] [bp-10h]@1
  int v3; // [sp+Ch] [bp-Ch]@1

  v3 = 25;
  v2 = 14;
  std::make_unique<ShulkerBoxBlockEntity,BlockEntityType,char const(&)[11],BlockEntityRendererId,BlockPos const&>(
    (int *)this,
    &v3,
    "ShulkerBox",
    &v2,
    (int)a2);
}


int __fastcall ShulkerBoxBlockEntity::getObstructionAABB(ShulkerBoxBlockEntity *this, int a2)
{
  signed int v2; // r6@1
  int v3; // r5@1
  ShulkerBoxBlockEntity *v4; // r4@1
  int v5; // r0@1
  signed int v6; // r0@1
  int v7; // r3@1
  signed int v8; // r5@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1
  signed int v12; // r1@5
  int result; // r0@13
  char v14; // [sp+4h] [bp-5Ch]@13
  int v15; // [sp+10h] [bp-50h]@13
  int v16; // [sp+14h] [bp-4Ch]@13
  int v17; // [sp+18h] [bp-48h]@13
  int v18; // [sp+1Ch] [bp-44h]@13
  int v19; // [sp+20h] [bp-40h]@13
  int v20; // [sp+24h] [bp-3Ch]@13
  unsigned __int8 v21; // [sp+28h] [bp-38h]@13
  int v22; // [sp+2Ch] [bp-34h]@5
  int v23; // [sp+30h] [bp-30h]@9
  int v24; // [sp+34h] [bp-2Ch]@13
  int v25; // [sp+38h] [bp-28h]@1
  int v26; // [sp+3Ch] [bp-24h]@1
  int v27; // [sp+40h] [bp-20h]@1
  int v28; // [sp+44h] [bp-1Ch]@1
  int v29; // [sp+48h] [bp-18h]@1
  int v30; // [sp+4Ch] [bp-14h]@1

  v2 = 0;
  v3 = a2;
  v28 = 0;
  v29 = 0;
  v4 = this;
  v30 = 0;
  v5 = *(_DWORD *)(a2 + 260);
  v25 = 1065353216;
  v26 = v5;
  v27 = 1065353216;
  AABB::AABB((int)v4, (int)&v28, (int)&v25);
  v6 = *(_BYTE *)(v3 + 340);
  v7 = v3 + 32;
  v8 = 0;
  v9 = *(_DWORD *)v7;
  v10 = *(_DWORD *)(v7 + 4);
  v11 = *(_DWORD *)(v7 + 8);
  if ( v6 == 5 )
    v8 = 1;
  if ( v6 == 4 )
    v8 = -1;
  v22 = v9 + v8;
  v12 = v6;
  if ( v6 != 1 )
    v12 = 0;
  if ( !v6 )
    v12 = -1;
  v23 = v12 + v10;
  if ( v6 == 3 )
    v2 = 1;
  if ( v6 == 2 )
    v2 = -1;
  v24 = v11 + v2;
  Vec3::Vec3((int)&v14, (int)&v22);
  AABB::translated((AABB *)&v15, v4, (int)&v14);
  *(_DWORD *)v4 = v15;
  *((_DWORD *)v4 + 1) = v16;
  *((_DWORD *)v4 + 2) = v17;
  *((_DWORD *)v4 + 3) = v18;
  *((_DWORD *)v4 + 4) = v19;
  *((_DWORD *)v4 + 5) = v20;
  result = v21;
  *((_BYTE *)v4 + 24) = v21;
  return result;
}


int __fastcall ShulkerBoxBlockEntity::calculateBB(ShulkerBoxBlockEntity *this)
{
  ShulkerBoxBlockEntity *v1; // r4@1
  char *v3; // r0@1
  int result; // r0@1
  int v21; // [sp+0h] [bp-D0h]@0
  int v22; // [sp+4h] [bp-CCh]@0
  int v23; // [sp+8h] [bp-C8h]@0
  int v24; // [sp+Ch] [bp-C4h]@6
  int v25; // [sp+10h] [bp-C0h]@6
  int v26; // [sp+14h] [bp-BCh]@6
  int v27; // [sp+18h] [bp-B8h]@6
  int v28; // [sp+1Ch] [bp-B4h]@6
  int v29; // [sp+20h] [bp-B0h]@6
  unsigned __int8 v30; // [sp+24h] [bp-ACh]@6
  int v31; // [sp+28h] [bp-A8h]@7
  int v32; // [sp+2Ch] [bp-A4h]@7
  int v33; // [sp+30h] [bp-A0h]@7
  int v34; // [sp+34h] [bp-9Ch]@7
  int v35; // [sp+38h] [bp-98h]@7
  int v36; // [sp+3Ch] [bp-94h]@7
  unsigned __int8 v37; // [sp+40h] [bp-90h]@7
  int v38; // [sp+44h] [bp-8Ch]@4
  int v39; // [sp+48h] [bp-88h]@4
  int v40; // [sp+4Ch] [bp-84h]@4
  int v41; // [sp+50h] [bp-80h]@4
  int v42; // [sp+54h] [bp-7Ch]@4
  int v43; // [sp+58h] [bp-78h]@4
  unsigned __int8 v44; // [sp+5Ch] [bp-74h]@4
  int v45; // [sp+60h] [bp-70h]@5
  int v46; // [sp+64h] [bp-6Ch]@5
  int v47; // [sp+68h] [bp-68h]@5
  int v48; // [sp+6Ch] [bp-64h]@5
  int v49; // [sp+70h] [bp-60h]@5
  int v50; // [sp+74h] [bp-5Ch]@5
  unsigned __int8 v51; // [sp+78h] [bp-58h]@5
  int v52; // [sp+7Ch] [bp-54h]@2
  int v53; // [sp+80h] [bp-50h]@2
  int v54; // [sp+84h] [bp-4Ch]@2
  int v55; // [sp+88h] [bp-48h]@2
  int v56; // [sp+8Ch] [bp-44h]@2
  int v57; // [sp+90h] [bp-40h]@2
  unsigned __int8 v58; // [sp+94h] [bp-3Ch]@2
  int v59; // [sp+98h] [bp-38h]@3
  int v60; // [sp+9Ch] [bp-34h]@3
  int v61; // [sp+A0h] [bp-30h]@3
  int v62; // [sp+A4h] [bp-2Ch]@3
  int v63; // [sp+A8h] [bp-28h]@3
  int v64; // [sp+ACh] [bp-24h]@3
  unsigned __int8 v65; // [sp+B0h] [bp-20h]@3
  float v66; // [sp+B4h] [bp-1Ch]@1

  v1 = this;
  _R5 = ChestBlockEntity::getOpenness(this);
  v3 = BlockEntity::getPosition(v1);
  Vec3::Vec3((int)&v66, (int)v3);
  result = *((_BYTE *)v1 + 340);
  __asm
  {
    VMOV.F32        S0, #1.0
    VMOV            S2, R5
    VSUB.F32        S2, S0, S2
    VMUL.F32        S4, S2, S2
    VMUL.F32        S2, S4, S2
    VMOV.F32        S4, #0.5
    VMUL.F32        S2, S2, S4
  }
  switch ( result )
    case 0:
      __asm
      {
        VLDR            S6, [SP,#0xD0+var_18]; jumptable 018B5E98 case 0
        VLDR            S4, [SP,#0xD0+var_1C]
        VSUB.F32        S2, S6, S2
        VLDR            S8, [SP,#0xD0+var_14]
        VMOV            R1, S4
        VMOV            R3, S8
        VADD.F32        S6, S6, S0
        VMOV            R2, S2
        VADD.F32        S2, S8, S0
        VADD.F32        S0, S4, S0
        VSTR            S0, [SP,#0xD0+var_D0]
        VSTR            S6, [SP,#0xD0+var_CC]
        VSTR            S2, [SP,#0xD0+var_C8]
      }
      AABB::AABB(COERCE_FLOAT(&v52), _R1, _R2, v21, v22, v23);
      *((_DWORD *)v1 + 11) = v52;
      *((_DWORD *)v1 + 12) = v53;
      *((_DWORD *)v1 + 13) = v54;
      *((_DWORD *)v1 + 14) = v55;
      *((_DWORD *)v1 + 15) = v56;
      *((_DWORD *)v1 + 16) = v57;
      result = v58;
      goto LABEL_8;
    case 1:
        VLDR            S4, [SP,#0xD0+var_1C]; jumptable 018B5E98 case 1
        VADD.F32        S2, S2, S0
        VLDR            S6, [SP,#0xD0+var_18]
        VMOV            R2, S6
        VADD.F32        S8, S8, S0
        VADD.F32        S2, S2, S6
        VSTR            S2, [SP,#0xD0+var_CC]
        VSTR            S8, [SP,#0xD0+var_C8]
      AABB::AABB(COERCE_FLOAT(&v59), _R1, _R2, v21, v22, v23);
      *((_DWORD *)v1 + 11) = v59;
      *((_DWORD *)v1 + 12) = v60;
      *((_DWORD *)v1 + 13) = v61;
      *((_DWORD *)v1 + 14) = v62;
      *((_DWORD *)v1 + 15) = v63;
      *((_DWORD *)v1 + 16) = v64;
      result = v65;
    case 2:
        VLDR            S8, [SP,#0xD0+var_14]; jumptable 018B5E98 case 2
        VSUB.F32        S2, S8, S2
        VMOV            R3, S2
      AABB::AABB(COERCE_FLOAT(&v38), _R1, _R2, v21, v22, v23);
      *((_DWORD *)v1 + 11) = v38;
      *((_DWORD *)v1 + 12) = v39;
      *((_DWORD *)v1 + 13) = v40;
      *((_DWORD *)v1 + 14) = v41;
      *((_DWORD *)v1 + 15) = v42;
      *((_DWORD *)v1 + 16) = v43;
      result = v44;
    case 3:
        VLDR            S4, [SP,#0xD0+var_1C]; jumptable 018B5E98 case 3
        VADD.F32        S2, S2, S8
      AABB::AABB(COERCE_FLOAT(&v45), _R1, _R2, v21, v22, v23);
      *((_DWORD *)v1 + 11) = v45;
      *((_DWORD *)v1 + 12) = v46;
      *((_DWORD *)v1 + 13) = v47;
      *((_DWORD *)v1 + 14) = v48;
      *((_DWORD *)v1 + 15) = v49;
      *((_DWORD *)v1 + 16) = v50;
      result = v51;
    case 4:
        VLDR            S4, [SP,#0xD0+var_1C]; jumptable 018B5E98 case 4
        VSUB.F32        S2, S4, S2
        VMOV            R1, S2
      AABB::AABB(COERCE_FLOAT(&v24), _R1, _R2, v21, v22, v23);
      *((_DWORD *)v1 + 11) = v24;
      *((_DWORD *)v1 + 12) = v25;
      *((_DWORD *)v1 + 13) = v26;
      *((_DWORD *)v1 + 14) = v27;
      *((_DWORD *)v1 + 15) = v28;
      *((_DWORD *)v1 + 16) = v29;
      result = v30;
    case 5:
        VLDR            S4, [SP,#0xD0+var_1C]; jumptable 018B5E98 case 5
        VADD.F32        S0, S6, S0
        VADD.F32        S2, S2, S4
        VSTR            S2, [SP,#0xD0+var_D0]
        VSTR            S0, [SP,#0xD0+var_CC]
      AABB::AABB(COERCE_FLOAT(&v31), _R1, _R2, v21, v22, v23);
      *((_DWORD *)v1 + 11) = v31;
      *((_DWORD *)v1 + 12) = v32;
      *((_DWORD *)v1 + 13) = v33;
      *((_DWORD *)v1 + 14) = v34;
      *((_DWORD *)v1 + 15) = v35;
      *((_DWORD *)v1 + 16) = v36;
      result = v37;
LABEL_8:
      *((_BYTE *)v1 + 68) = result;
      break;
    default:
      return result;
  return result;
}


int __fastcall ShulkerBoxBlockEntity::ShulkerBoxBlockEntity(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1

  v5 = a1;
  v6 = a4;
  ChestBlockEntity::ChestBlockEntity(a1, a2, a3, a4, a5, 0);
  *(_DWORD *)v5 = &off_270A71C;
  *(_DWORD *)(v5 + 112) = &off_270A7E4;
  *(_WORD *)(v5 + 340) = 1;
  *(_BYTE *)(v5 + 342) = 0;
  BlockEntity::setCustomNameSaved((BlockEntity *)v5, 1);
  *(_DWORD *)(v5 + 84) = v6;
  *(_DWORD *)(v5 + 252) = 1028443341;
  *(_BYTE *)(v5 + 257) = 0;
  *(_DWORD *)(v5 + 260) = 1056964608;
  return v5;
}


int __fastcall ShulkerBoxBlockEntity::setFacingDir(int result, signed __int8 a2)
{
  *(_BYTE *)(result + 340) = a2;
  *(_BYTE *)(result + 341) = 1;
  return result;
}


void __fastcall ShulkerBoxBlockEntity::load(ShulkerBoxBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ShulkerBoxBlockEntity *v3; // r7@1
  void *v4; // r0@1
  signed int v5; // r6@2
  void *v6; // r0@2
  int v7; // r0@4
  void *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  int v15; // [sp+4h] [bp-2Ch]@4
  int v16; // [sp+Ch] [bp-24h]@2
  int v17; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  ChestBlockEntity::load(this, a2);
  sub_21E94B4((void **)&v17, "facing");
  *((_BYTE *)v3 + 340) = CompoundTag::getByte((int)v2, (const void **)&v17);
  v4 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v17 - 4);
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
  sub_21E94B4((void **)&v16, "isUndyed");
  v5 = CompoundTag::contains((int)v2, (const void **)&v16);
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( v5 == 1 )
    sub_21E94B4((void **)&v15, "isUndyed");
    v7 = CompoundTag::getByte((int)v2, (const void **)&v15);
    if ( v7 )
      LOBYTE(v7) = 1;
    *((_BYTE *)v3 + 342) = v7;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
}


CompoundTag *__fastcall ShulkerBoxBlockEntity::getUpdatePacket(ShulkerBoxBlockEntity *this, BlockSource *a2)
{
  ShulkerBoxBlockEntity *v2; // r4@1
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


int __fastcall ShulkerBoxBlockEntity::playOpenSound(ShulkerBoxBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  ChestBlockEntity *v3; // r5@1
  Level *v4; // r6@1
  float v10; // [sp+10h] [bp-28h]@1
  float v11; // [sp+1Ch] [bp-1Ch]@1
  float v12; // [sp+20h] [bp-18h]@1
  float v13; // [sp+24h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  ChestBlockEntity::_getCenter(v3, &v13, &v12, &v11);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x38+var_14]
    VLDR            S4, [SP,#0x38+var_18]
    VLDR            S6, [SP,#0x38+var_1C]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x38+var_28]
    VSTR            S4, [SP,#0x38+var_24]
    VSTR            S0, [SP,#0x38+var_20]
  }
  return Level::broadcastSoundEvent(v4, (int)v2, 67, (int)&v10, -1, 1, 0, 0);
}


signed int __fastcall ShulkerBoxBlockEntity::save(ShulkerBoxBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  ShulkerBoxBlockEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v12, "facing");
  CompoundTag::putByte((int)v2, (const void **)&v12, *((_BYTE *)v3 + 340));
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v11, "isUndyed");
  CompoundTag::putByte((int)v2, (const void **)&v11, *((_BYTE *)v3 + 342));
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return ChestBlockEntity::save(v3, v2);
}


signed int __fastcall ShulkerBoxBlockEntity::canPushInItem(ShulkerBoxBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  ChestBlockEntity *v5; // r7@1
  int v6; // r4@1
  int v7; // r5@1
  BlockSource *v8; // r6@1
  signed int result; // r0@2

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( ItemInstance::getId(a5) == *(_BYTE *)(Block::mShulkerBox + 4) )
    result = 0;
  else
    result = ChestBlockEntity::canPushInItem(v5, v8, v7, v6, a5);
  return result;
}
