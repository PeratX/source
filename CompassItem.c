

void __fastcall CompassItem::~CompassItem(CompassItem *this)
{
  CompassItem::~CompassItem(this);
}


int __fastcall CompassItem::SpriteCalculator::updateFromPosition(CompassItem::SpriteCalculator *this, const BlockSource *a2, float a3, float a4, float a5, int a6)
{
  BlockSource *v6; // r5@1
  int v10; // r0@1
  Level *v15; // r0@2
  Random *v25; // r0@3
  int result; // r0@20

  v6 = a2;
  _R4 = this;
  _R7 = a4;
  _R6 = a3;
  v10 = BlockSource::getDimensionConst(a2);
  if ( (*(int (**)(void))(*(_DWORD *)v10 + 132))() )
  {
    __asm
    {
      VLDR            S16, [SP,#0x30+arg_0]
      VMOV            S18, R7
      VMOV            S20, R6
    }
    v15 = (Level *)BlockSource::getLevel(v6);
    _R0 = Level::getSharedSpawnPos(v15);
      VCVTR.S32.F32   S0, S16
      VLDR            S2, [R0,#8]
      VMOV            R1, S0
      VLDR            S0, [R0]
    _R0 = -1240768329;
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S0, S0
      VSUB.F32        S2, S2, S18
      VSUB.F32        S0, S0, S20
      SMMLA.W         R0, R0, R1, R1
    _R0 = _R1 - 360 * (((signed int)_R0 >> 8) + (_R0 >> 31));
      VLDR            S0, =0.0055556
    _R0 -= 90;
    _R2 = &mce::Math::PI;
      VMOV            S4, R0
      VMOV            R0, S2
      VLDR            S16, [R2]
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S4, S0
      VMUL.F32        S18, S0, S16
    _R0 = atan2f(_R0, _R1);
      VMOV            S0, R0
      VSUB.F32        S2, S0, S18
  }
  else
    v25 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
    _R0 = Random::_genRandInt32(v25);
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
    _R0 = &mce::Math::PI;
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VADD.F32        S0, S0, S0
      VLDR            S16, [R0]
      VMUL.F32        S2, S16, S0
  if ( a6 == 1 )
    __asm { VSTR            S2, [R4,#4] }
    *((_DWORD *)_R4 + 2) = 0;
      VLDR            S0, [R4,#4]
      VNEG.F32        S4, S16
      VSUB.F32        S2, S2, S0
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VADD.F32        S6, S16, S16 }
      do
      {
        __asm
        {
          VADD.F32        S2, S6, S2
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        }
      }
      while ( _NF ^ _VF );
      VCMPE.F32       S2, S16
    if ( !(_NF ^ _VF) )
      __asm { VADD.F32        S4, S16, S16 }
          VSUB.F32        S2, S2, S4
          VCMPE.F32       S2, S16
      while ( !(_NF ^ _VF) );
      VMOV.F32        S4, #-1.0
      VLDR            S6, =0.1
      VMOV.F32        S8, #1.0
      VCMPE.F32       S2, S8
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S4, S2 }
      VMUL.F32        S4, S4, S6
      __asm { VMOVGT.F32      S4, S6 }
      VLDR            S2, [R4,#8]
      VADD.F32        S2, S2, S4
      VLDR            S4, =0.8
      VMUL.F32        S4, S2, S4
      VADD.F32        S2, S0, S4
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
  __asm
    VADD.F32        S0, S16, S16
    VDIV.F32        S0, S2, S0
    VMOV.F32        S2, #1.0
    VADD.F32        S0, S0, S2
    VLDR            S2, =32.0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  do
    result = _R1 % 32;
    _R1 = _R1 % 32 + 32;
  while ( result < 0 );
  *(_DWORD *)_R4 = result;
  return result;
}


char *__fastcall CompassItem::getIcon(CompassItem *this, int a2, int a3, int a4)
{
  char *result; // r0@2

  if ( a4 == 1 )
  {
    result = (char *)*((_DWORD *)this + 15);
  }
  else
    if ( (unsigned int)a3 <= 0x1F )
      this = (CompassItem *)((char *)this + 32 * a3);
    result = (char *)this + 124;
  return result;
}


int __fastcall CompassItem::SpriteCalculator::getFrame(CompassItem::SpriteCalculator *this)
{
  return *(_DWORD *)this;
}


int __fastcall CompassItem::SpriteCalculator::calculateFrame(CompassItem::SpriteCalculator *this, const BlockSource *a2, float a3, float _R3, float a5)
{
  CompassItem::SpriteCalculator *v5; // r6@1
  float v10; // r4@1
  const BlockSource *v11; // r5@1
  char v12; // r0@1
  float v14; // [sp+0h] [bp-20h]@0

  v5 = this;
  __asm { VMOV            S16, R3 }
  v10 = a3;
  v11 = a2;
  v12 = byte_2804F94;
  __dmb();
  if ( !(v12 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2804F94) )
  {
    *(_DWORD *)&algn_2804F95[3] = 0;
    *(_DWORD *)&algn_2804F95[7] = 0;
    dword_2804FA0 = 0;
    j___cxa_guard_release((unsigned int *)&byte_2804F94);
  }
  __asm { VSTR            S16, [SP,#0x20+var_20] }
  return CompassItem::SpriteCalculator::updateFromPosition(
           (CompassItem::SpriteCalculator *)&algn_2804F95[3],
           v5,
           *(float *)&v11,
           v10,
           v14,
           1);
}


int __fastcall CompassItem::SpriteCalculator::update(CompassItem::SpriteCalculator *this, Entity *a2, int a3)
{
  Entity *v3; // r6@1
  CompassItem::SpriteCalculator *v4; // r8@1
  int v5; // r9@1
  const BlockSource *v6; // r7@1
  float v7; // r4@1
  float v8; // r5@1
  float v14; // [sp+0h] [bp-30h]@0
  char v15; // [sp+Ch] [bp-24h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (const BlockSource *)Entity::getRegion(a2);
  v7 = *(float *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
  v8 = *(float *)((*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3) + 8);
  Entity::getRotation((Entity *)&v15, (int)v3);
  __asm
  {
    VLDR            S0, [SP,#0x30+var_20]
    VSTR            S0, [SP,#0x30+var_30]
  }
  return CompassItem::SpriteCalculator::updateFromPosition(v4, v6, v7, v8, v14, v5);
}


int __fastcall CompassItem::populateFrames(CompassItem *this, const mce::ImageBuffer *a2)
{
  mce::ImageBuffer *v2; // r5@1
  CompassItem *v3; // r4@1
  int result; // r0@1
  int v5; // r1@1
  int v6; // r5@1
  int v12; // r3@2

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 29) = *(_DWORD *)mce::ImageBuffer::getImageDescription(a2);
  result = *((_DWORD *)mce::ImageBuffer::getImageDescription(v2) + 1);
  *((_DWORD *)v3 + 30) = result;
  v5 = *((_DWORD *)v3 + 29);
  v6 = 0;
  __asm { VLDR            S0, =0.03125 }
  _R2 = 0;
  do
  {
    __asm { VMOV            S2, R2 }
    ++_R2;
    v12 = (int)v3 + v6;
    v6 += 32;
    __asm
    {
      VMOV            S4, R2
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    }
    *(_DWORD *)(v12 + 128) = 0;
    *(_DWORD *)(v12 + 136) = 1065353216;
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VSTR            S2, [R3,#0x84]
      VSTR            S4, [R3,#0x8C]
    *(_WORD *)(v12 + 144) = v5;
    *(_WORD *)(v12 + 146) = result;
  }
  while ( !_ZF );
  return result;
}


void __fastcall CompassItem::~CompassItem(CompassItem *this)
{
  Item *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10

  v1 = this;
  v2 = (char *)this + 1148;
  *(_DWORD *)this = &off_2701054;
  v3 = (char *)this + 124;
  do
  {
    v6 = *((_DWORD *)v2 - 2);
    v2 -= 32;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  while ( v2 != v3 );
  Item::~Item(v1);
  operator delete((void *)v1);
}


int __fastcall CompassItem::CompassItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r11@1

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2701054;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 124));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 156));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 188));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 220));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 252));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 284));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 316));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 348));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 380));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 412));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 444));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 476));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 508));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 540));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 572));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 604));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 636));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 668));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 700));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 732));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 764));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 796));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 828));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 860));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 892));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 924));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 956));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 988));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1020));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1052));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1084));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1116));
  *(_DWORD *)(v3 + 12) = 32;
  *(_BYTE *)(v3 + 16) = 1;
  return v3;
}


Item *__fastcall CompassItem::~CompassItem(CompassItem *this)
{
  Item *v1; // r10@1
  char *v2; // r7@1
  char *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  void *v7; // r0@10

  v1 = this;
  v2 = (char *)this + 1148;
  *(_DWORD *)this = &off_2701054;
  v3 = (char *)this + 124;
  do
  {
    v6 = *((_DWORD *)v2 - 2);
    v2 -= 32;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  while ( v2 != v3 );
  Item::~Item(v1);
  return v1;
}


int __fastcall CompassItem::SpriteCalculator::calculateFrame(CompassItem::SpriteCalculator *this, const BlockSource *_R1, const Vec3 *_R2, float a4)
{
  CompassItem::SpriteCalculator *v4; // r4@1
  char v9; // r0@1
  float v13; // [sp+0h] [bp-28h]@0

  v4 = this;
  __asm
  {
    VLDR            S18, [R1]
    VMOV            S16, R2
    VLDR            S20, [R1,#8]
  }
  v9 = byte_2804F94;
  __dmb();
  if ( !(v9 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2804F94) )
    *(_DWORD *)&algn_2804F95[3] = 0;
    *(_DWORD *)&algn_2804F95[7] = 0;
    dword_2804FA0 = 0;
    j___cxa_guard_release((unsigned int *)&byte_2804F94);
    VMOV            R2, S18
    VMOV            R3, S20
    VSTR            S16, [SP,#0x28+var_28]
  return CompassItem::SpriteCalculator::updateFromPosition(
           (CompassItem::SpriteCalculator *)&algn_2804F95[3],
           v4,
           _R2,
           _R3,
           v13,
           1);
}


int __fastcall CompassItem::SpriteCalculator::SpriteCalculator(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
