

int __fastcall SkullBlockEntity::setSkullType(int result, signed int a2)
{
  if ( a2 > 5 )
    a2 = 3;
  *(_DWORD *)(result + 104) = a2;
  return result;
}


void __fastcall SkullBlockEntity::~SkullBlockEntity(SkullBlockEntity *this)
{
  SkullBlockEntity::~SkullBlockEntity(this);
}


int __fastcall SkullBlockEntity::onChanged(SkullBlockEntity *this, BlockSource *a2)
{
  SkullBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int result; // r0@1
  Level *v5; // r0@2
  BlockPos *v6; // r5@3
  char v7; // [sp+8h] [bp-18h]@3
  char v8; // [sp+9h] [bp-17h]@3
  char v9; // [sp+Ch] [bp-14h]@3
  char v10; // [sp+Dh] [bp-13h]@3

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 26);
  if ( result != -1 )
  {
    v5 = (Level *)BlockSource::getLevel(a2);
    result = Level::isClientSide(v5);
    if ( !result )
    {
      v6 = (SkullBlockEntity *)((char *)v2 + 32);
      BlockSource::getBlockAndData((BlockSource *)&v9, v3, (int)v6);
      v7 = v9;
      v8 = v10;
      result = BlockSource::setBlockAndData((int)v3, v6, (int)&v7, 19, 0);
    }
  }
  return result;
}


void __fastcall SkullBlockEntity::load(SkullBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  SkullBlockEntity *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  int v16; // [sp+8h] [bp-30h]@4
  int v17; // [sp+10h] [bp-28h]@3
  int v18; // [sp+18h] [bp-20h]@2
  int v19; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v19, "SkullType");
  *((_DWORD *)v3 + 26) = CompoundTag::getByte((int)v2, (const void **)&v19);
  v4 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v19 - 4);
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
  sub_21E94B4((void **)&v18, "Rot");
  *((_DWORD *)v3 + 27) = CompoundTag::getByte((int)v2, (const void **)&v18);
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v18 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v17, "MouthMoving");
  *((_BYTE *)v3 + 112) = CompoundTag::getBoolean((int)v2, (const void **)&v17);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v16, "MouthTickCount");
  *((_DWORD *)v3 + 29) = CompoundTag::getInt((int)v2, (const void **)&v16);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall SkullBlockEntity::SkullBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Skull");
  BlockEntity::BlockEntity(v3, 6, v2);
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
  *(_DWORD *)v3 = &off_270A8FC;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  *(_BYTE *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  *(_DWORD *)(v3 + 84) = 4;
  return v3;
}


void __fastcall SkullBlockEntity::load(SkullBlockEntity *this, const CompoundTag *a2)
{
  SkullBlockEntity::load(this, a2);
}


int __fastcall SkullBlockEntity::setSkullType(int result, int a2)
{
  if ( a2 > 5 )
    a2 = 3;
  *(_DWORD *)(result + 104) = a2;
  return result;
}


int __fastcall SkullBlockEntity::setRotation(int result, int a2)
{
  *(_DWORD *)(result + 108) = a2;
  return result;
}


int __fastcall SkullBlockEntity::tick(SkullBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  SkullBlockEntity *v3; // r4@1
  Level *v4; // r0@1
  int v5; // r0@1
  bool v6; // zf@1
  Dimension *v7; // r0@5
  CircuitSystem *v8; // r0@5
  int v9; // r0@5
  int v10; // r1@6
  int v11; // r0@6
  int result; // r0@8

  v2 = a2;
  v3 = this;
  BlockEntity::tick(this, a2);
  v4 = (Level *)BlockSource::getLevel(v2);
  v5 = Level::isClientSide(v4);
  v6 = v5 == 0;
  if ( !v5 )
    v6 = *((_DWORD *)v3 + 26) == 5;
  if ( v6 )
  {
    v7 = (Dimension *)BlockSource::getDimension(v2);
    v8 = (CircuitSystem *)Dimension::getCircuitSystem(v7);
    v9 = CircuitSystem::getStrength(v8, (SkullBlockEntity *)((char *)v3 + 32));
    if ( v9 != -1 )
    {
      v10 = *((_BYTE *)v3 + 112);
      v11 = v9 != 0;
      *((_BYTE *)v3 + 112) = v11;
      if ( v10 != v11 )
        BlockEntity::setChanged(v3);
    }
  }
  result = *((_BYTE *)v3 + 112) + *((_DWORD *)v3 + 29);
  *((_DWORD *)v3 + 29) = result;
  return result;
}


signed int __fastcall SkullBlockEntity::save(SkullBlockEntity *this, CompoundTag *a2)
{
  SkullBlockEntity *v2; // r5@1
  CompoundTag *v3; // r6@1
  void *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  signed int result; // r0@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  int v17; // [sp+8h] [bp-30h]@6
  int v18; // [sp+10h] [bp-28h]@5
  int v19; // [sp+18h] [bp-20h]@4
  int v20; // [sp+20h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 26) == -1 || BlockEntity::save(this, a2) != 1 )
  {
    result = 0;
  }
  else
    sub_21E94B4((void **)&v20, "SkullType");
    CompoundTag::putByte((int)v3, (const void **)&v20, *((_BYTE *)v2 + 104));
    v4 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v20 - 4);
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
    sub_21E94B4((void **)&v19, "Rot");
    CompoundTag::putByte((int)v3, (const void **)&v19, *((_BYTE *)v2 + 108));
    v5 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v19 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    sub_21E94B4((void **)&v18, "MouthMoving");
    CompoundTag::putBoolean((int)v3, (const void **)&v18, *((_BYTE *)v2 + 112));
    v6 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v18 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v17, "MouthTickCount");
    CompoundTag::putInt((int)v3, (const void **)&v17, *((_DWORD *)v2 + 29));
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    result = 1;
  return result;
}


CompoundTag *__fastcall SkullBlockEntity::getUpdatePacket(SkullBlockEntity *this, BlockSource *a2)
{
  SkullBlockEntity *v2; // r4@1
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


void __fastcall SkullBlockEntity::~SkullBlockEntity(SkullBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SkullBlockEntity::getMouthAnimation(SkullBlockEntity *this, float _R1)
{
  int v6; // r0@1
  int result; // r0@3

  __asm
  {
    VLDR            S0, [R0,#0x74]
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
  }
  v6 = *((_BYTE *)this + 112);
  __asm { VADD.F32        S2, S0, S2 }
  if ( _ZF )
    __asm { VMOVEQ.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}
