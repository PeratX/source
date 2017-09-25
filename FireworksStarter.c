

int __fastcall FireworksStarter::init(FireworksStarter *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  FireworksStarter *v5; // r4@1
  int result; // r0@3

  v5 = this;
  Particle::setPos(this, a2);
  *((_DWORD *)v5 + 53) = a5;
  if ( !*((_DWORD *)v5 + 2) )
    *((_DWORD *)v5 + 2) = 8;
  result = 0;
  *((_DWORD *)v5 + 13) = 0;
  return result;
}


char *__fastcall FireworksStarter::createParticleBurst(int a1, _QWORD *a2, unsigned __int64 *a3, char a4, char a5)
{
  unsigned __int64 *v6; // r9@1
  _QWORD *v7; // r11@1
  char *v8; // r0@1
  Random *v9; // r4@1
  signed int v16; // r8@1
  char *result; // r0@2
  char v21; // [sp+10h] [bp-78h]@1
  float v22; // [sp+14h] [bp-74h]@2

  _R7 = a1;
  v21 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Level::getRandom(*(Level **)(a1 + 228));
  v9 = (Random *)v8;
  _R0 = Random::nextGaussian((Random *)v8);
  __asm
  {
    VMOV            S16, R0
    VLDR            S18, =0.05
  }
  _R0 = Random::nextGaussian(v9);
    VMOV            S0, R0
    VMUL.F32        S16, S16, S18
    VLDR            D10, =2.32830644e-10
    VMUL.F32        S18, S0, S18
    VLDR            S24, =0.15
    VMOV.F32        S22, #0.5
  v16 = 70;
  do
    __asm { VLDR            S26, [R7,#0x90] }
    _R6 = Random::nextGaussian(v9);
    __asm { VLDR            S28, [R7,#0x98] }
    _R10 = Random::nextGaussian(v9);
    __asm { VLDR            S30, [R7,#0x94] }
    _R0 = Random::_genRandInt32(v9);
    __asm
    {
      VMOV            S0, R0
      VMUL.F32        S2, S26, S22
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D10
      VCVT.F32.F64    S0, D0
      VMUL.F32        S4, S28, S22
      VMOV            S6, R6
      VMOV            S8, R10
      VADD.F32        S0, S0, S30
      VMUL.F32        S6, S6, S24
      VADD.F32        S2, S2, S16
      VMUL.F32        S8, S8, S24
      VADD.F32        S4, S4, S18
      VMUL.F32        S0, S0, S22
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S8
      VSTR            S2, [SP,#0x88+var_74]
      VSTR            S0, [SP,#0x88+var_70]
      VSTR            S4, [SP,#0x88+var_6C]
    }
    result = FireworksStarter::createParticle(_R7, _R7 + 156, (int)&v22, v7, v6, v21, a5);
    --v16;
  while ( v16 );
  return result;
}


char *__fastcall FireworksStarter::createParticle(int a1, int a2, int a3, _QWORD *a4, unsigned __int64 *a5, char a6, char a7)
{
  int v7; // r7@1
  _QWORD *v8; // r5@1
  int v9; // r6@1
  int v10; // r4@1
  char *result; // r0@1
  int v12; // r1@1 OVERLAPPED
  int v13; // r2@1 OVERLAPPED
  unsigned int v14; // r6@2
  unsigned int v15; // r0@2
  int v16; // r1@2
  char *v24; // r0@7
  int v25; // r1@7
  int v26; // r2@7
  unsigned int v27; // r1@8
  int v28; // r1@10
  unsigned int v29; // r2@10

  v7 = a1;
  v8 = a4;
  v9 = 0;
  v10 = Level::addParticle(*(_DWORD *)(a1 + 228), 46, a2);
  result = Level::getRandom(*(Level **)(v7 + 228));
  *(_QWORD *)&v12 = *v8;
  if ( v13 != v12 )
  {
    v14 = v13 - v12;
    v15 = Random::_genRandInt32((Random *)result);
    v16 = v15 % v14;
    result = (char *)(v15 / v14);
    v9 = v16;
  }
  if ( v10 )
    if ( *a5 >> 32 == (unsigned int)*a5 )
    {
      __asm { VLDR            S6, =0.0039216 }
      _R0 = DyePowderItem::COLOR_RGB[*(_BYTE *)(*(_DWORD *)v8 + v9)];
      _R1 = (_R0 >> 16) & 0xFF;
      _R2 = (unsigned __int16)_R0 >> 8;
      _R0 = (unsigned __int8)_R0;
      __asm
      {
        VMOV            S0, R1
        VMOV            S4, R0
        VMOV            S2, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
      }
      *(_BYTE *)(v10 + 212) = a6;
      *(_BYTE *)(v10 + 213) = a7;
      *(_BYTE *)(v10 + 214) = 0;
      result = (char *)1065353216;
      *(_DWORD *)(v10 + 80) = 1065353216;
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S6
        VMUL.F32        S4, S4, S6
        VSTR            S0, [R4,#0x44]
        VSTR            S2, [R4,#0x48]
        VSTR            S4, [R4,#0x4C]
    }
    else
      v24 = Level::getRandom(*(Level **)(v7 + 228));
      v25 = *a5 >> 32;
      v26 = *a5;
      if ( v25 == v26 )
        v27 = 0;
      else
        v27 = Random::_genRandInt32((Random *)v24) % (v25 - v26);
        v26 = *(_DWORD *)a5;
      v28 = *(_BYTE *)(v26 + v27);
      __asm { VLDR            S0, =0.0039216 }
      v29 = DyePowderItem::COLOR_RGB[*(_BYTE *)(*(_DWORD *)v8 + v9)];
      _R0 = DyePowderItem::COLOR_RGB[v28];
      _R1 = (v29 >> 16) & 0xFF;
      _R7 = (_R0 >> 16) & 0xFF;
      _R6 = (unsigned __int16)_R0 >> 8;
      _R3 = (unsigned __int8)_R0;
      _R0 >>= 24;
        VMOV            S2, R7
        VMOV            S4, R6
        VMOV            S6, R3
        VMOV            S8, R0
        VCVT.F32.S32    S6, S6
        VCVT.F32.S32    S8, S8
      _R0 = (unsigned __int16)v29 >> 8;
        VMOV            S10, R1
        VMOV            S12, R0
      _R0 = (unsigned __int8)v29;
        VMOV            S14, R0
        VCVT.F32.S32    S10, S10
        VCVT.F32.S32    S12, S12
        VCVT.F32.S32    S14, S14
      __asm { VMUL.F32        S2, S2, S0 }
      __asm { VMUL.F32        S4, S4, S0 }
      *(_BYTE *)(v10 + 214) = 1;
      __asm { VMUL.F32        S6, S6, S0 }
        VMUL.F32        S8, S8, S0
        VMUL.F32        S10, S10, S0
        VMUL.F32        S12, S12, S0
        VMUL.F32        S0, S14, S0
        VSTR            S2, [R4,#0xE4]
        VSTR            S4, [R4,#0xE8]
        VSTR            S6, [R4,#0xEC]
        VSTR            S8, [R4,#0xF0]
        VSTR            S10, [R4,#0x44]
        VSTR            S12, [R4,#0x48]
        VSTR            S0, [R4,#0x4C]
  return result;
}


__int64 __fastcall FireworksStarter::createParticleShape(int a1, int _R1, __int64 *a3, _QWORD *a4, __int64 a5, int a7)
{
  __int64 *v6; // r5@1
  int v7; // r7@1
  int v13; // r8@2
  _QWORD *v15; // r9@2
  char *v16; // r0@2
  __int64 result; // r0@4
  int v20; // r5@6
  int v21; // r4@6 OVERLAPPED
  signed int v22; // r3@6 OVERLAPPED
  int v23; // r7@6
  __int64 v24; // ST2C_8@7
  float v27; // r1@7
  float v29; // r1@7
  float v31; // r1@7
  float v33; // r1@7
  float v35; // r1@7
  float v37; // r1@7
  float v39; // r1@7
  int v43; // [sp+24h] [bp-9Ch]@5
  __int64 *v44; // [sp+28h] [bp-98h]@1
  float v45; // [sp+34h] [bp-8Ch]@7
  float v46; // [sp+40h] [bp-80h]@7
  float v47; // [sp+4Ch] [bp-74h]@2
  int v48; // [sp+54h] [bp-6Ch]@2

  v6 = a3;
  v7 = a1;
  v44 = a3;
  _KR00_8 = *a3;
  if ( HIDWORD(_KR00_8) == (_DWORD)_KR00_8 )
    sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", 0, 0, (int)a4);
  __asm { VMOV            S16, R1 }
  v13 = a1 + 156;
  __asm { VLDR            S0, [R2] }
  _R4 = 0;
  __asm
  {
    VLDR            S2, [R2,#4]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
  }
  v15 = a4;
    VSTR            S0, [SP,#0xC0+var_74]
    VSTR            S2, [SP,#0xC0+var_70]
  v48 = 0;
  FireworksStarter::createParticle(a1, a1 + 156, (int)&v47, a4, (unsigned __int64 *)a5, SBYTE4(a5), a7);
  v16 = Level::getRandom(*(Level **)(v7 + 228));
  _R0 = Random::_genRandInt32((Random *)v16);
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV.F32        S24, #0.25
    VCVT.F64.U32    D0, S0
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.034
    VMOV.F32        S26, #0.5
    VMOV.F32        S28, #0.75
    VLDR            S18, =0.34
  if ( !_ZF )
    __asm { VMOVNE.F32      S18, S2 }
    VSTR            S0, [SP,#0xC0+var_A4]
    VLDR            S0, [R0]
    VSTR            S0, [SP,#0xC0+var_A8]
  result = *v6;
  do
    __asm { VMOV            S0, R4 }
    v43 = _R4;
    __asm { VCVT.F32.S32    S0, S0 }
    if ( (unsigned int)((HIDWORD(result) - (signed int)result) >> 3) < 2 )
    {
      v20 = v7;
      v23 = v13;
    }
    else
      __asm
      {
        VMUL.F32        S0, S0, S18
        VLDR            S2, [SP,#0xC0+var_A4]
      }
      HIDWORD(result) = _KR00_8;
      v21 = 1;
      v22 = 8;
        VLDR            S23, [R1]
        VLDR            S21, [R1,#4]
        VADD.F32        S0, S0, S2
        VLDR            S2, [SP,#0xC0+var_A8]
        VMUL.F32        S30, S2, S0
      do
        LODWORD(result) = result + v22;
        v24 = *(_QWORD *)&v22;
        __asm
        {
          VMOV            R8, S30
          VLDR            S17, [R0]
          VLDR            S19, [R0,#4]
          VSUB.F32        S25, S17, S23
          VSUB.F32        S27, S19, S21
          VMUL.F32        S0, S25, S24
          VMUL.F32        S2, S27, S24
          VADD.F32        S0, S0, S23
          VADD.F32        S31, S2, S21
          VMUL.F32        S29, S0, S16
        }
        _R4 = mce::Math::sin(_R8, *((float *)&result + 1));
        _R0 = mce::Math::cos(_R8, v27);
          VMOV            S20, R0
          VMOV            S22, R4
          VMUL.F32        S0, S20, S29
          VMUL.F32        S31, S31, S16
          VMUL.F32        S2, S22, S29
          VSTR            S0, [SP,#0xC0+var_80]
          VSTR            S31, [SP,#0xC0+var_7C]
          VSTR            S2, [SP,#0xC0+var_78]
        FireworksStarter::createParticle(v20, v23, (int)&v46, v15, (unsigned __int64 *)a5, SBYTE4(a5), a7);
          VNMUL.F32       S0, S20, S29
          VNMUL.F32       S2, S22, S29
          VSTR            S0, [SP,#0xC0+var_8C]
          VSTR            S31, [SP,#0xC0+var_88]
          VSTR            S2, [SP,#0xC0+var_84]
        FireworksStarter::createParticle(v20, v23, (int)&v45, v15, (unsigned __int64 *)a5, SBYTE4(a5), a7);
        _R0 = mce::Math::sin(_R8, v29);
        __asm { VMOV            S20, R0 }
        _R0 = mce::Math::cos(_R8, v31);
          VMUL.F32        S0, S25, S26
          VMUL.F32        S2, S27, S26
          VMOV            S22, R0
          VADD.F32        S0, S2, S21
          VMUL.F32        S31, S0, S16
          VSTR            S2, [SP,#0xC0+var_80]
          VSTR            S0, [SP,#0xC0+var_78]
          VNMUL.F32       S0, S22, S29
          VNMUL.F32       S2, S20, S29
        _R0 = mce::Math::sin(_R8, v33);
        _R0 = mce::Math::cos(_R8, v35);
          VMUL.F32        S0, S25, S28
          VMUL.F32        S2, S27, S28
          VMUL.F32        S23, S0, S16
          VMUL.F32        S2, S22, S23
          VMUL.F32        S21, S0, S16
          VMUL.F32        S0, S20, S23
          VSTR            S21, [SP,#0xC0+var_7C]
          VNMUL.F32       S0, S22, S23
          VNMUL.F32       S2, S20, S23
          VSTR            S21, [SP,#0xC0+var_88]
        _R4 = mce::Math::sin(_R8, v37);
        _R0 = mce::Math::cos(_R8, v39);
          VMUL.F32        S22, S17, S16
          VMOV            S21, R4
          VMUL.F32        S23, S19, S16
          VMUL.F32        S0, S20, S22
          VMUL.F32        S2, S21, S22
          VSTR            S23, [SP,#0xC0+var_7C]
          VNMUL.F32       S0, S20, S22
          VNMUL.F32       S2, S21, S22
          VSTR            S23, [SP,#0xC0+var_88]
          VMOV.F32        S23, S17
          VMOV.F32        S21, S19
        result = *v44;
        v22 = v24 + 8;
        v21 = HIDWORD(v24) + 1;
      while ( HIDWORD(v24) + 1 < (unsigned int)((HIDWORD(result) - (signed int)result) >> 3) );
    v13 = v23;
    v7 = v20;
    _R4 = v43 + 1;
  while ( v43 != 2 );
  return result;
}


int __fastcall FireworksStarter::FireworksStarter(int a1, int a2, int a3)
{
  BlockSource *v3; // r4@1
  int v4; // r5@1

  v3 = (BlockSource *)a2;
  v4 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v4 = &off_26E6584;
  *(_DWORD *)(v4 + 216) = 0;
  *(_DWORD *)(v4 + 228) = BlockSource::getLevel(v3);
  return v4;
}


FireworksStarter *__fastcall FireworksStarter::~FireworksStarter(FireworksStarter *this)
{
  FireworksStarter *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E6584;
  v2 = *((_DWORD *)this + 54);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 54) = 0;
  *(_DWORD *)v1 = &off_26D9AEC;
  v3 = *((_DWORD *)v1 + 9);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
  return v1;
}


signed int __fastcall FireworksStarter::addTagData(FireworksStarter *this, const CompoundTag *a2)
{
  FireworksStarter *v2; // r4@1
  int v3; // r1@1
  int v4; // r0@1
  ListTag *v5; // r0@4
  signed int result; // r0@4
  signed int v7; // r5@6
  int v8; // r6@7
  char v9; // r2@11
  int v10; // [sp+10h] [bp-28h]@1

  v2 = this;
  CompoundTag::clone((CompoundTag *)&v10, (int)a2);
  v3 = v10;
  v10 = 0;
  v4 = *((_DWORD *)v2 + 54);
  *((_DWORD *)v2 + 54) = v3;
  if ( v4 )
  {
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  }
  v5 = (ListTag *)CompoundTag::getList(*((_DWORD *)v2 + 54), (const void **)&FireworksItem::TAG_EXPLOSIONS);
  *((_DWORD *)v2 + 55) = v5;
  result = ListTag::size(v5);
  if ( result >= 1 )
    *((_DWORD *)v2 + 2) = 2 * ListTag::size(*((ListTag **)v2 + 55));
    result = ListTag::size(*((ListTag **)v2 + 55));
    if ( result >= 1 )
    {
      v7 = 0;
      do
      {
        v8 = ListTag::getCompound(*((ListTag **)v2 + 55), v7);
        if ( CompoundTag::getBoolean(v8, (const void **)&FireworkChargeItem::TAG_E_FLICKER) == 1 )
        {
          *((_BYTE *)v2 + 224) = 1;
          *((_DWORD *)v2 + 2) = 2 * ListTag::size(*((ListTag **)v2 + 55)) + 15;
        }
        else
          *((_BYTE *)v2 + 224) = 0;
        if ( CompoundTag::getByte(v8, (const void **)&FireworkChargeItem::TAG_E_TYPE) == 1 )
          v9 = 56;
          v9 = 55;
        Level::playSynchronizedSound(*((_DWORD *)v2 + 57), *((_DWORD *)v2 + 35), v9, (int)v2 + 156, -1, 1, 0, 0);
        ++v7;
        result = ListTag::size(*((ListTag **)v2 + 55));
      }
      while ( v7 < result );
    }
  return result;
}


void *__fastcall FireworksStarter::getParticleTexture(FireworksStarter *this)
{
  return &Particle::PARTICLE_ATLAS;
}


void __fastcall FireworksStarter::~FireworksStarter(FireworksStarter *this)
{
  FireworksStarter::~FireworksStarter(this);
}


int __fastcall FireworksStarter::createParticleBall(int a1, int _R1, int a3, _QWORD *a4, unsigned __int64 *a5, char a6, char a7)
{
  int v7; // r6@1
  int result; // r0@1
  _QWORD *v9; // r4@1
  int v14; // r5@2
  float *v15; // r7@2
  char *v18; // r0@5
  int v19; // r11@5
  int v20; // r7@5
  int v21; // r6@5
  _QWORD *v22; // r5@5
  Random *v23; // r4@5
  float v31; // r1@5
  Random *v33; // r0@5
  int v35; // [sp+Ch] [bp-8Ch]@1
  int v36; // [sp+10h] [bp-88h]@3
  int v37; // [sp+14h] [bp-84h]@2
  int v38; // [sp+18h] [bp-80h]@4
  int v39; // [sp+1Ch] [bp-7Ch]@1
  float v41; // [sp+24h] [bp-74h]@2

  v7 = a1;
  result = -a3;
  v9 = a4;
  v39 = a3;
  v35 = -a3;
  if ( -a3 <= a3 )
  {
    __asm
    {
      VMOV.F32        S20, #0.5
      VMOV.F32        S21, #1.0
    }
    v37 = ~a3;
    __asm { VMOV            S27, R1 }
    result = -a3;
    v14 = v7 + 156;
    __asm { VLDR            D9, =2.32830644e-10 }
    v15 = &v41;
    do
      __asm { VMOV            S0, R0 }
      v36 = result;
      __asm { VCVT.F32.S32    S26, S0 }
      _R0 = v35;
      do
      {
        __asm { VMOV            S0, R0 }
        v38 = _R0;
        __asm { VCVT.F32.S32    S0, S0 }
        _R10 = v37;
        __asm { VSTR            S0, [SP,#0x98+var_78] }
        do
        {
          v18 = Level::getRandom(*(Level **)(v7 + 228));
          v19 = (int)v15;
          v20 = v7;
          v21 = v14;
          v22 = v9;
          v23 = (Random *)v18;
          _R0 = Random::_genRandInt32((Random *)v18);
          __asm
          {
            VMOV            S0, R0
            VCVT.F64.U32    D14, S0
          }
          _R0 = Random::_genRandInt32(v23);
            VCVT.F64.U32    D15, S0
            VCVT.F64.U32    D11, S0
            VCVT.F64.U32    D8, S0
            VCVT.F64.U32    D12, S0
          __asm { VMOV            S0, R0 }
          ++_R10;
            VMUL.F64        D1, D14, D9
            VCVT.F64.U32    D0, S0
            VMUL.F64        D2, D15, D9
            VMUL.F64        D3, D11, D9
            VMUL.F64        D4, D8, D9
            VMUL.F64        D0, D0, D9
            VMUL.F64        D5, D12, D9
            VCVT.F32.F64    S2, D1
            VCVT.F32.F64    S4, D2
            VCVT.F32.F64    S6, D3
            VCVT.F32.F64    S8, D4
            VSUB.F32        S2, S2, S4
            VSUB.F32        S4, S6, S8
            VCVT.F32.F64    S10, D5
            VCVT.F32.F64    S0, D0
            VSUB.F32        S0, S10, S0
            VMUL.F32        S4, S4, S20
            VMUL.F32        S2, S2, S20
            VMOV            S6, R10
            VCVT.F32.S32    S6, S6
            VLDR            S8, [SP,#0x98+var_78]
            VMUL.F32        S0, S0, S20
            VADD.F32        S22, S4, S26
            VADD.F32        S16, S2, S8
            VADD.F32        S24, S0, S6
            VMUL.F32        S2, S22, S22
            VMUL.F32        S0, S16, S16
            VMUL.F32        S4, S24, S24
            VADD.F32        S0, S2, S0
            VADD.F32        S0, S0, S4
            VMOV            R0, S0
          _R0 = mce::Math::sqrt(_R0, v31);
          v33 = v23;
          v9 = v22;
          v14 = v21;
          v7 = v20;
          v15 = (float *)v19;
          __asm { VDIV.F32        S28, S0, S27 }
          _R0 = Random::nextGaussian(v33);
            VADD.F32        S0, S0, S28
            VDIV.F32        S0, S21, S0
            VMUL.F32        S2, S0, S16
            VMUL.F32        S4, S0, S22
            VMUL.F32        S0, S24, S0
            VSTR            S2, [SP,#0x98+var_74]
            VSTR            S4, [SP,#0x98+var_70]
            VSTR            S0, [SP,#0x98+var_6C]
          FireworksStarter::createParticle(v7, v14, v19, v9, a5, a6, a7);
        }
        while ( _R10 < v39 );
        _R0 = v38 + 1;
      }
      while ( v38 < v39 );
      result = v36 + 1;
    while ( v36 < v39 );
  }
  return result;
}


void __fastcall FireworksStarter::~FireworksStarter(FireworksStarter *this)
{
  FireworksStarter *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E6584;
  v2 = *((_DWORD *)this + 54);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 54) = 0;
  *(_DWORD *)v1 = &off_26D9AEC;
  v3 = *((_DWORD *)v1 + 9);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  operator delete((void *)v1);
}


int __fastcall FireworksStarter::normalTick(FireworksStarter *this)
{
  FireworksStarter *v1; // r9@1
  int result; // r0@1
  ListTag *v3; // r0@3
  int v4; // r4@5
  int v5; // r6@6
  int v6; // r10@6
  int *v7; // r0@6
  unsigned int v8; // r7@6
  _BYTE *v9; // r5@6
  const char *v10; // r11@6
  int v11; // r8@7
  int *v12; // r0@9
  unsigned int v13; // r6@9
  char *v14; // r7@9
  const char *v15; // r11@9
  unsigned int v16; // r6@13
  _BYTE *v17; // r4@15
  void *v18; // r6@21
  char *v20; // r5@23
  int v21; // r1@23
  int v22; // r0@23
  char *v23; // r7@24
  int v24; // r0@24
  void *v25; // r6@25
  char *v27; // r5@27
  int v28; // r1@27
  int v29; // r7@28
  int v30; // r0@28
  void *v31; // r2@30
  unsigned int v32; // r3@30
  unsigned int v33; // r0@32
  unsigned int v34; // r6@32
  __int64 *v35; // r0@40
  char *v36; // r3@40
  __int64 v37; // kr08_8@41
  void *v38; // r0@42
  unsigned int v39; // r1@42
  void *v40; // r2@43
  unsigned int v41; // r3@43
  unsigned int v42; // r0@45
  unsigned int v43; // r6@45
  __int64 *v44; // r0@53
  char *v45; // r3@53
  __int64 v46; // kr18_8@54
  void *v47; // r0@55
  unsigned int v48; // r1@55
  char *v49; // r7@61
  int v50; // r0@61
  _BYTE *v51; // r1@62
  char *v52; // r5@62
  unsigned int v53; // r2@62
  unsigned int v54; // r0@64
  unsigned int v55; // r6@64
  char *v56; // r0@72
  char *v57; // r2@72
  __int64 v58; // r3@73
  void *v59; // r0@74
  unsigned int v60; // r1@74
  int v61; // r7@80
  int v62; // r0@80
  void *v63; // r1@81
  char *v64; // r5@81
  unsigned int v65; // r2@81
  unsigned int v66; // r0@83
  unsigned int v67; // r6@83
  __int64 *v68; // r0@91
  char *v69; // r2@91
  __int64 v70; // r3@92
  void *v71; // r0@93
  unsigned int v72; // r1@93
  char *v73; // r7@99
  int v74; // r0@99
  _BYTE *v75; // r1@100
  char *v76; // r5@100
  unsigned int v77; // r2@100
  unsigned int v78; // r0@102
  unsigned int v79; // r6@102
  char *v80; // r0@110
  char *v81; // r2@110
  __int64 v82; // r3@111
  void *v83; // r0@112
  unsigned int v84; // r1@112
  int v85; // r7@118
  int v86; // r0@118
  void *v87; // r1@119
  char *v88; // r5@119
  unsigned int v89; // r2@119
  unsigned int v90; // r0@121
  unsigned int v91; // r6@121
  __int64 *v92; // r0@129
  char *v93; // r2@129
  __int64 v94; // r3@130
  void *v95; // r0@131
  unsigned int v96; // r1@131
  _BOOL4 v97; // r7@137
  _BYTE *v98; // r1@138
  unsigned int v99; // r2@138
  unsigned int v100; // r0@140
  unsigned int v101; // r6@140
  char *v102; // r5@146
  char *v103; // r0@149
  char *v104; // r2@149
  __int64 v105; // r3@150
  void *v106; // r0@151
  unsigned int v107; // r1@151
  int v108; // r7@157
  int v109; // r0@157
  void *v110; // r1@158
  char *v111; // r5@158
  unsigned int v112; // r2@158
  unsigned int v113; // r0@160
  unsigned int v114; // r6@160
  __int64 *v115; // r0@168
  char *v116; // r2@168
  __int64 v117; // r3@169
  void *v118; // r0@170
  unsigned int v119; // r1@170
  int v120; // r4@172
  __int64 v121; // ST00_8@175
  char *v122; // r7@182
  int v123; // r0@182
  void *v124; // r1@183
  unsigned int v125; // r2@183
  unsigned int v126; // r0@185
  unsigned int v127; // r6@185
  char *v128; // r5@191
  __int64 *v129; // r0@194
  char *v130; // r2@194
  __int64 v131; // r3@195
  void *v132; // r0@196
  unsigned int v133; // r1@196
  char *v134; // r7@202
  int v135; // r0@202
  _BYTE *v136; // r1@203
  unsigned int v137; // r2@203
  unsigned int v138; // r0@205
  unsigned int v139; // r6@205
  char *v140; // r5@211
  char *v141; // r0@214
  char *v142; // r2@214
  __int64 v143; // r3@215
  void *v144; // r0@216
  unsigned int v145; // r1@216
  int v146; // r7@222
  int v147; // r0@222
  _BYTE *v148; // r1@223
  char *v149; // r5@223
  unsigned int v150; // r2@223
  unsigned int v151; // r0@225
  unsigned int v152; // r6@225
  char *v153; // r0@233
  char *v154; // r2@233
  __int64 v155; // r3@234
  void *v156; // r0@235
  unsigned int v157; // r1@235
  int v158; // r7@241
  int v159; // r0@241
  void *v160; // r1@242
  char *v161; // r5@242
  unsigned int v162; // r2@242
  unsigned int v163; // r0@244
  unsigned int v164; // r6@244
  __int64 *v165; // r0@252
  char *v166; // r2@252
  __int64 v167; // r3@253
  void *v168; // r0@254
  unsigned int v169; // r1@254
  char *v170; // r7@260
  int v171; // r0@260
  void *v172; // r1@261
  char *v173; // r5@261
  unsigned int v174; // r2@261
  unsigned int v175; // r0@263
  unsigned int v176; // r6@263
  __int64 *v177; // r0@271
  char *v178; // r2@271
  __int64 v179; // r3@272
  void *v180; // r0@273
  unsigned int v181; // r1@273
  _BOOL4 v182; // r7@279
  _BYTE *v183; // r1@280
  unsigned int v184; // r2@280
  unsigned int v185; // r0@282
  unsigned int v186; // r6@282
  char *v187; // r5@288
  char *v188; // r0@291
  char *v189; // r2@291
  __int64 v190; // r3@292
  void *v191; // r0@293
  unsigned int v192; // r1@293
  int v193; // r4@295
  __int64 v194; // ST00_8@298
  int v195; // r0@300
  void *v196; // r5@300
  _BOOL4 v204; // [sp+10h] [bp-68h]@6
  _BOOL4 v205; // [sp+14h] [bp-64h]@6
  void *v206; // [sp+24h] [bp-54h]@27
  char *v207; // [sp+28h] [bp-50h]@25
  char *v208; // [sp+2Ch] [bp-4Ch]@25
  void *ptr; // [sp+30h] [bp-48h]@23
  char *v210; // [sp+34h] [bp-44h]@21
  char *v211; // [sp+38h] [bp-40h]@21
  void *v212; // [sp+3Ch] [bp-3Ch]@9
  char *v213; // [sp+40h] [bp-38h]@9
  char *v214; // [sp+44h] [bp-34h]@9
  _BYTE *v215; // [sp+48h] [bp-30h]@6
  _BYTE *v216; // [sp+4Ch] [bp-2Ch]@6
  char *v217; // [sp+50h] [bp-28h]@6

  v1 = this;
  result = *((_DWORD *)this + 13);
  if ( result )
  {
    if ( !(result & 1) )
    {
      v3 = (ListTag *)*((_DWORD *)v1 + 55);
      if ( v3 )
      {
        if ( ListTag::size(v3) >= 1 )
        {
          v4 = *((_DWORD *)v1 + 13) / 2;
          if ( v4 <= ListTag::size(*((ListTag **)v1 + 55)) )
          {
            v5 = ListTag::getCompound(*((ListTag **)v1 + 55), *((_DWORD *)v1 + 13) / 2 - 1);
            v6 = CompoundTag::getByte(v5, (const void **)&FireworkChargeItem::TAG_E_TYPE);
            v205 = CompoundTag::getBoolean(v5, (const void **)&FireworkChargeItem::TAG_E_TRAIL);
            v204 = CompoundTag::getBoolean(v5, (const void **)&FireworkChargeItem::TAG_E_FLICKER);
            v7 = CompoundTag::getByteArray(v5, (const void **)&FireworkChargeItem::TAG_E_COLORS);
            v8 = *v7;
            v9 = 0;
            v10 = (const char *)v7[2];
            v215 = 0;
            v216 = 0;
            v217 = 0;
            if ( v8 )
            {
              v9 = operator new(v8);
              v215 = v9;
              v11 = (int)&v9[v8];
              v217 = &v9[v8];
              _aeabi_memcpy(v9, v10, v8);
            }
            else
              v215 = 0;
              v11 = 0;
              v217 = 0;
            v216 = (_BYTE *)v11;
            v12 = CompoundTag::getByteArray(v5, (const void **)&FireworkChargeItem::TAG_E_FADECOLORS);
            v13 = *v12;
            v14 = 0;
            v15 = (const char *)v12[2];
            v212 = 0;
            v213 = 0;
            v214 = 0;
            if ( v13 )
              v212 = operator new(v13);
              v14 = (char *)v212 + v13;
              v214 = (char *)v212 + v13;
              _aeabi_memcpy(v212, v15, v13);
              v212 = 0;
              v214 = 0;
            v213 = v14;
            if ( (_BYTE *)v11 == v9 )
              v16 = v11 - (_DWORD)v9;
              if ( v11 - (_DWORD)v9 != -1 )
                ++v16;
              v17 = operator new(v16);
              *v17 = 33;
              if ( v9 )
                operator delete(v9);
              v215 = v17;
              v216 = v17 + 1;
              v217 = &v17[v16];
            switch ( v6 )
              case 1:
                FireworksStarter::createParticleBall(
                  (int)v1,
                  1056964608,
                  4,
                  &v215,
                  (unsigned __int64 *)&v212,
                  v205,
                  v204);
                break;
              case 2:
                v210 = 0;
                v211 = 0;
                v18 = operator new(0x30u);
                ptr = v18;
                v211 = (char *)v18 + 48;
                v20 = 0;
                *(_DWORD *)v18 = 0;
                *((_DWORD *)v18 + 1) = 1065353216;
                v21 = (int)v18 + 16;
                v210 = (char *)v18 + 16;
                *((_DWORD *)v18 + 2) = 1051780448;
                v22 = (int)v211;
                *((_DWORD *)v18 + 3) = 1050555711;
                if ( (char *)v18 + 16 == (void *)v22 )
                {
                  v31 = ptr;
                  v32 = (v21 - (signed int)ptr) >> 3;
                  if ( 0 == v32 )
                    v32 = 1;
                  v33 = v32 + ((v21 - (signed int)ptr) >> 3);
                  v34 = v32 + ((v21 - (signed int)ptr) >> 3);
                  if ( 0 != v33 >> 29 )
                    v34 = 0x1FFFFFFF;
                  if ( v33 < v32 )
                  if ( v34 )
                  {
                    if ( v34 >= 0x20000000 )
                      sub_21E57F4();
                    v20 = (char *)operator new(8 * v34);
                    v21 = (int)v210;
                    v31 = ptr;
                  }
                  *(_DWORD *)&v20[v21 - (_DWORD)v31] = 1064532810;
                  *(_DWORD *)&v20[v21 - (_DWORD)v31 + 4] = 1050555711;
                  if ( (void *)v21 == v31 )
                    v38 = v31;
                    v39 = (unsigned int)v20;
                  else
                    v35 = (__int64 *)v31;
                    v36 = v20;
                    do
                    {
                      v37 = *v35;
                      ++v35;
                      *(_QWORD *)v36 = v37;
                      v36 += 8;
                    }
                    while ( (__int64 *)v21 != v35 );
                    v38 = ptr;
                    v39 = (unsigned int)&v20[((v21 - 8 - (_DWORD)v31) & 0xFFFFFFF8) + 8];
                  v23 = (char *)(v39 + 8);
                  if ( v38 )
                    operator delete(v38);
                  v24 = (int)&v20[8 * v34];
                  ptr = v20;
                  v210 = v23;
                  v211 = &v20[8 * v34];
                }
                else
                  *((_DWORD *)v18 + 4) = 1064532810;
                  *((_DWORD *)v18 + 5) = 1050555711;
                  v23 = v210 + 8;
                  v210 += 8;
                  v24 = (int)v211;
                if ( v23 == (char *)v24 )
                  v51 = ptr;
                  v52 = 0;
                  v53 = (v23 - (_BYTE *)ptr) >> 3;
                  if ( !v53 )
                    v53 = 1;
                  v54 = v53 + ((v23 - (_BYTE *)ptr) >> 3);
                  v55 = v53 + ((v23 - (_BYTE *)ptr) >> 3);
                  if ( 0 != v54 >> 29 )
                    v55 = 0x1FFFFFFF;
                  if ( v54 < v53 )
                  if ( v55 )
                    if ( v55 >= 0x20000000 )
                    v52 = (char *)operator new(8 * v55);
                    v23 = v210;
                    v51 = ptr;
                  *(_DWORD *)&v52[v23 - v51] = 1052924380;
                  *(_DWORD *)&v52[v23 - v51 + 4] = -1107193538;
                  if ( v23 == v51 )
                    v59 = v51;
                    v60 = (unsigned int)v52;
                    v56 = v51;
                    v57 = v52;
                      v58 = *(_QWORD *)v56;
                      v56 += 8;
                      *(_QWORD *)v57 = v58;
                      v57 += 8;
                    while ( v23 != v56 );
                    v59 = ptr;
                    v60 = (unsigned int)&v52[((v23 - 8 - v51) & 0xFFFFFFF8) + 8];
                  v49 = (char *)(v60 + 8);
                  if ( v59 )
                    operator delete(v59);
                  v50 = (int)&v52[8 * v55];
                  ptr = v52;
                  v210 = v49;
                  v211 = &v52[8 * v55];
                  *(_QWORD *)v23 = -4755360034999608868LL;
                  v49 = v210 + 8;
                  v50 = (int)v211;
                if ( v49 == (char *)v50 )
                  v75 = ptr;
                  v76 = 0;
                  v77 = (v49 - (_BYTE *)ptr) >> 3;
                  if ( !v77 )
                    v77 = 1;
                  v78 = v77 + ((v49 - (_BYTE *)ptr) >> 3);
                  v79 = v77 + ((v49 - (_BYTE *)ptr) >> 3);
                  if ( 0 != v78 >> 29 )
                    v79 = 0x1FFFFFFF;
                  if ( v78 < v77 )
                  if ( v79 )
                    if ( v79 >= 0x20000000 )
                    v76 = (char *)operator new(8 * v79);
                    v49 = v210;
                    v75 = ptr;
                  *(_DWORD *)&v76[v49 - v75] = 1058847765;
                  *(_DWORD *)&v76[v49 - v75 + 4] = -1085417397;
                  if ( v49 == v75 )
                    v83 = v75;
                    v84 = (unsigned int)v76;
                    v80 = v75;
                    v81 = v76;
                      v82 = *(_QWORD *)v80;
                      v80 += 8;
                      *(_QWORD *)v81 = v82;
                      v81 += 8;
                    while ( v49 != v80 );
                    v83 = ptr;
                    v84 = (unsigned int)&v76[((v49 - 8 - v75) & 0xFFFFFFF8) + 8];
                  v73 = (char *)(v84 + 8);
                  if ( v83 )
                    operator delete(v83);
                  v74 = (int)&v76[8 * v79];
                  ptr = v76;
                  v210 = v73;
                  v211 = &v76[8 * v79];
                  *(_QWORD *)v49 = -4661832221565600747LL;
                  v73 = v210 + 8;
                  v74 = (int)v211;
                if ( v73 == (char *)v74 )
                  v98 = ptr;
                  v99 = (v73 - (_BYTE *)ptr) >> 3;
                  if ( !v99 )
                    v99 = 1;
                  v100 = v99 + ((v73 - (_BYTE *)ptr) >> 3);
                  v101 = v99 + ((v73 - (_BYTE *)ptr) >> 3);
                  if ( 0 != v100 >> 29 )
                    v101 = 0x1FFFFFFF;
                  if ( v100 < v99 )
                  if ( v101 )
                    if ( v101 >= 0x20000000 )
                    v102 = (char *)operator new(8 * v101);
                    v73 = v210;
                    v98 = ptr;
                    v102 = 0;
                  *(_DWORD *)&v102[v73 - v98] = 0;
                  *(_DWORD *)&v102[v73 - v98 + 4] = -1095244052;
                  if ( v73 == v98 )
                    v106 = v98;
                    v107 = (unsigned int)v102;
                    v103 = v98;
                    v104 = v102;
                      v105 = *(_QWORD *)v103;
                      v103 += 8;
                      *(_QWORD *)v104 = v105;
                      v104 += 8;
                    while ( v73 != v103 );
                    v106 = ptr;
                    v107 = (unsigned int)&v102[((v73 - 8 - v98) & 0xFFFFFFF8) + 8];
                  v120 = v107 + 8;
                  v97 = v205;
                  if ( v106 )
                    operator delete(v106);
                  ptr = v102;
                  v210 = (char *)v120;
                  v211 = &v102[8 * v101];
                  *(_QWORD *)v73 = -4704037384478523392LL;
                LODWORD(v121) = &v212;
                HIDWORD(v121) = v97;
                FireworksStarter::createParticleShape((int)v1, 1056964608, (__int64 *)&ptr, &v215, v121, v204);
                if ( ptr )
                  operator delete(ptr);
              case 3:
                v207 = 0;
                v208 = 0;
                v25 = operator new(0x60u);
                v27 = 0;
                v206 = v25;
                v28 = (int)v25 + 16;
                v208 = (char *)v25 + 96;
                *(_DWORD *)v25 = 0;
                *((_DWORD *)v25 + 1) = 1045220557;
                *((_DWORD *)v25 + 2) = 1045220557;
                *((_DWORD *)v25 + 3) = 1045220557;
                v207 = (char *)v25 + 16;
                if ( (char *)v25 + 16 == v208 )
                  v40 = v206;
                  v41 = (v28 - (signed int)v206) >> 3;
                  if ( 0 == v41 )
                    v41 = 1;
                  v42 = v41 + ((v28 - (signed int)v206) >> 3);
                  v43 = v41 + ((v28 - (signed int)v206) >> 3);
                  if ( 0 != v42 >> 29 )
                    v43 = 0x1FFFFFFF;
                  if ( v42 < v41 )
                  if ( v43 )
                    if ( v43 >= 0x20000000 )
                    v27 = (char *)operator new(8 * v43);
                    v28 = (int)v207;
                    v40 = v206;
                  *(_DWORD *)&v27[v28 - (_DWORD)v40] = 1045220557;
                  *(_DWORD *)&v27[v28 - (_DWORD)v40 + 4] = 1058642330;
                  if ( (void *)v28 == v40 )
                    v47 = v40;
                    v48 = (unsigned int)v27;
                    v44 = (__int64 *)v40;
                    v45 = v27;
                      v46 = *v44;
                      ++v44;
                      *(_QWORD *)v45 = v46;
                      v45 += 8;
                    while ( (__int64 *)v28 != v44 );
                    v47 = v206;
                    v48 = (unsigned int)&v27[((v28 - 8 - (_DWORD)v40) & 0xFFFFFFF8) + 8];
                  v29 = v48 + 8;
                  if ( v47 )
                    operator delete(v47);
                  v30 = (int)&v27[8 * v43];
                  v206 = v27;
                  v207 = (char *)v29;
                  v208 = &v27[8 * v43];
                  *((_DWORD *)v25 + 4) = 1045220557;
                  *((_DWORD *)v25 + 5) = 1058642330;
                  v29 = (int)(v207 + 8);
                  v207 += 8;
                  v30 = (int)v208;
                if ( v29 == v30 )
                  v63 = v206;
                  v64 = 0;
                  v65 = (v29 - (signed int)v206) >> 3;
                  if ( !v65 )
                    v65 = 1;
                  v66 = v65 + ((v29 - (signed int)v206) >> 3);
                  v67 = v65 + ((v29 - (signed int)v206) >> 3);
                  if ( 0 != v66 >> 29 )
                    v67 = 0x1FFFFFFF;
                  if ( v66 < v65 )
                  if ( v67 )
                    if ( v67 >= 0x20000000 )
                    v64 = (char *)operator new(8 * v67);
                    v29 = (int)v207;
                    v63 = v206;
                  *(_DWORD *)&v64[v29 - (_DWORD)v63] = 1058642330;
                  *(_DWORD *)&v64[v29 - (_DWORD)v63 + 4] = 1058642330;
                  if ( (void *)v29 == v63 )
                    v71 = v63;
                    v72 = (unsigned int)v64;
                    v68 = (__int64 *)v63;
                    v69 = v64;
                      v70 = *v68;
                      ++v68;
                      *(_QWORD *)v69 = v70;
                      v69 += 8;
                    while ( (__int64 *)v29 != v68 );
                    v71 = v206;
                    v72 = (unsigned int)&v64[((v29 - 8 - (_DWORD)v63) & 0xFFFFFFF8) + 8];
                  v61 = v72 + 8;
                  if ( v71 )
                    operator delete(v71);
                  v62 = (int)&v64[8 * v67];
                  v206 = v64;
                  v207 = (char *)v61;
                  v208 = &v64[8 * v67];
                  *(_DWORD *)v29 = 1058642330;
                  *(_DWORD *)(v29 + 4) = 1058642330;
                  v61 = (int)(v207 + 8);
                  v62 = (int)v208;
                if ( v61 == v62 )
                  v87 = v206;
                  v88 = 0;
                  v89 = (v61 - (signed int)v206) >> 3;
                  if ( !v89 )
                    v89 = 1;
                  v90 = v89 + ((v61 - (signed int)v206) >> 3);
                  v91 = v89 + ((v61 - (signed int)v206) >> 3);
                  if ( 0 != v90 >> 29 )
                    v91 = 0x1FFFFFFF;
                  if ( v90 < v89 )
                  if ( v91 )
                    if ( v91 >= 0x20000000 )
                    v88 = (char *)operator new(8 * v91);
                    v61 = (int)v207;
                    v87 = v206;
                  *(_DWORD *)&v88[v61 - (_DWORD)v87] = 1058642330;
                  *(_DWORD *)&v88[v61 - (_DWORD)v87 + 4] = 1045220557;
                  if ( (void *)v61 == v87 )
                    v95 = v87;
                    v96 = (unsigned int)v88;
                    v92 = (__int64 *)v87;
                    v93 = v88;
                      v94 = *v92;
                      ++v92;
                      *(_QWORD *)v93 = v94;
                      v93 += 8;
                    while ( (__int64 *)v61 != v92 );
                    v95 = v206;
                    v96 = (unsigned int)&v88[((v61 - 8 - (_DWORD)v87) & 0xFFFFFFF8) + 8];
                  v85 = v96 + 8;
                  if ( v95 )
                    operator delete(v95);
                  v86 = (int)&v88[8 * v91];
                  v206 = v88;
                  v207 = (char *)v85;
                  v208 = &v88[8 * v91];
                  *(_DWORD *)v61 = 1058642330;
                  *(_DWORD *)(v61 + 4) = 1045220557;
                  v85 = (int)(v207 + 8);
                  v86 = (int)v208;
                if ( v85 == v86 )
                  v110 = v206;
                  v111 = 0;
                  v112 = (v85 - (signed int)v206) >> 3;
                  if ( !v112 )
                    v112 = 1;
                  v113 = v112 + ((v85 - (signed int)v206) >> 3);
                  v114 = v112 + ((v85 - (signed int)v206) >> 3);
                  if ( 0 != v113 >> 29 )
                    v114 = 0x1FFFFFFF;
                  if ( v113 < v112 )
                  if ( v114 )
                    if ( v114 >= 0x20000000 )
                    v111 = (char *)operator new(8 * v114);
                    v85 = (int)v207;
                    v110 = v206;
                  *(_DWORD *)&v111[v85 - (_DWORD)v110] = 1045220557;
                  *(_DWORD *)&v111[v85 - (_DWORD)v110 + 4] = 1045220557;
                  if ( (void *)v85 == v110 )
                    v118 = v110;
                    v119 = (unsigned int)v111;
                    v115 = (__int64 *)v110;
                    v116 = v111;
                      v117 = *v115;
                      ++v115;
                      *(_QWORD *)v116 = v117;
                      v116 += 8;
                    while ( (__int64 *)v85 != v115 );
                    v118 = v206;
                    v119 = (unsigned int)&v111[((v85 - 8 - (_DWORD)v110) & 0xFFFFFFF8) + 8];
                  v108 = v119 + 8;
                  if ( v118 )
                    operator delete(v118);
                  v109 = (int)&v111[8 * v114];
                  v206 = v111;
                  v207 = (char *)v108;
                  v208 = &v111[8 * v114];
                  *(_DWORD *)v85 = 1045220557;
                  *(_DWORD *)(v85 + 4) = 1045220557;
                  v108 = (int)(v207 + 8);
                  v109 = (int)v208;
                if ( v108 == v109 )
                  v124 = v206;
                  v125 = (v108 - (signed int)v206) >> 3;
                  if ( !v125 )
                    v125 = 1;
                  v126 = v125 + ((v108 - (signed int)v206) >> 3);
                  v127 = v125 + ((v108 - (signed int)v206) >> 3);
                  if ( 0 != v126 >> 29 )
                    v127 = 0x1FFFFFFF;
                  if ( v126 < v125 )
                  if ( v127 )
                    if ( v127 >= 0x20000000 )
                    v128 = (char *)operator new(8 * v127);
                    v108 = (int)v207;
                    v124 = v206;
                    v128 = 0;
                  *(_DWORD *)&v128[v108 - (_DWORD)v124] = 1045220557;
                  *(_DWORD *)&v128[v108 - (_DWORD)v124 + 4] = 0;
                  if ( (void *)v108 == v124 )
                    v132 = v124;
                    v133 = (unsigned int)v128;
                    v129 = (__int64 *)v124;
                    v130 = v128;
                      v131 = *v129;
                      ++v129;
                      *(_QWORD *)v130 = v131;
                      v130 += 8;
                    while ( (__int64 *)v108 != v129 );
                    v132 = v206;
                    v133 = (unsigned int)&v128[((v108 - 8 - (_DWORD)v124) & 0xFFFFFFF8) + 8];
                  v122 = (char *)(v133 + 8);
                  if ( v132 )
                    operator delete(v132);
                  v123 = (int)&v128[8 * v127];
                  v206 = v128;
                  v207 = v122;
                  v208 = &v128[8 * v127];
                  *(_DWORD *)v108 = 1045220557;
                  *(_DWORD *)(v108 + 4) = 0;
                  v122 = v207 + 8;
                  v123 = (int)v208;
                if ( v122 == (char *)v123 )
                  v136 = v206;
                  v137 = (v122 - (_BYTE *)v206) >> 3;
                  if ( !v137 )
                    v137 = 1;
                  v138 = v137 + ((v122 - (_BYTE *)v206) >> 3);
                  v139 = v137 + ((v122 - (_BYTE *)v206) >> 3);
                  if ( 0 != v138 >> 29 )
                    v139 = 0x1FFFFFFF;
                  if ( v138 < v137 )
                  if ( v139 )
                    if ( v139 >= 0x20000000 )
                    v140 = (char *)operator new(8 * v139);
                    v122 = v207;
                    v136 = v206;
                    v140 = 0;
                  *(_DWORD *)&v140[v122 - v136] = 1053609165;
                  *(_DWORD *)&v140[v122 - v136 + 4] = 0;
                  if ( v122 == v136 )
                    v144 = v136;
                    v145 = (unsigned int)v140;
                    v141 = v136;
                    v142 = v140;
                      v143 = *(_QWORD *)v141;
                      v141 += 8;
                      *(_QWORD *)v142 = v143;
                      v142 += 8;
                    while ( v122 != v141 );
                    v144 = v206;
                    v145 = (unsigned int)&v140[((v122 - 8 - v136) & 0xFFFFFFF8) + 8];
                  v134 = (char *)(v145 + 8);
                  if ( v144 )
                    operator delete(v144);
                  v135 = (int)&v140[8 * v139];
                  v206 = v140;
                  v207 = v134;
                  v208 = &v140[8 * v139];
                  *(_QWORD *)v122 = 1053609165LL;
                  v134 = v207 + 8;
                  v135 = (int)v208;
                if ( v134 == (char *)v135 )
                  v148 = v206;
                  v149 = 0;
                  v150 = (v134 - (_BYTE *)v206) >> 3;
                  if ( !v150 )
                    v150 = 1;
                  v151 = v150 + ((v134 - (_BYTE *)v206) >> 3);
                  v152 = v150 + ((v134 - (_BYTE *)v206) >> 3);
                  if ( 0 != v151 >> 29 )
                    v152 = 0x1FFFFFFF;
                  if ( v151 < v150 )
                  if ( v152 )
                    if ( v152 >= 0x20000000 )
                    v149 = (char *)operator new(8 * v152);
                    v134 = v207;
                    v148 = v206;
                  *(_DWORD *)&v149[v134 - v148] = 1053609165;
                  *(_DWORD *)&v149[v134 - v148 + 4] = -1088841318;
                  if ( v134 == v148 )
                    v156 = v148;
                    v157 = (unsigned int)v149;
                    v153 = v148;
                    v154 = v149;
                      v155 = *(_QWORD *)v153;
                      v153 += 8;
                      *(_QWORD *)v154 = v155;
                      v154 += 8;
                    while ( v134 != v153 );
                    v156 = v206;
                    v157 = (unsigned int)&v149[((v134 - 8 - v148) & 0xFFFFFFF8) + 8];
                  v146 = v157 + 8;
                  if ( v156 )
                    operator delete(v156);
                  v147 = (int)&v149[8 * v152];
                  v206 = v149;
                  v207 = (char *)v146;
                  v208 = &v149[8 * v152];
                  *(_QWORD *)v134 = -4676537850289926963LL;
                  v146 = (int)(v207 + 8);
                  v147 = (int)v208;
                if ( v146 == v147 )
                  v160 = v206;
                  v161 = 0;
                  v162 = (v146 - (signed int)v206) >> 3;
                  if ( !v162 )
                    v162 = 1;
                  v163 = v162 + ((v146 - (signed int)v206) >> 3);
                  v164 = v162 + ((v146 - (signed int)v206) >> 3);
                  if ( 0 != v163 >> 29 )
                    v164 = 0x1FFFFFFF;
                  if ( v163 < v162 )
                  if ( v164 )
                    if ( v164 >= 0x20000000 )
                    v161 = (char *)operator new(8 * v164);
                    v146 = (int)v207;
                    v160 = v206;
                  *(_DWORD *)&v161[v146 - (_DWORD)v160] = 1045220557;
                  *(_DWORD *)&v161[v146 - (_DWORD)v160 + 4] = -1088841318;
                  if ( (void *)v146 == v160 )
                    v168 = v160;
                    v169 = (unsigned int)v161;
                    v165 = (__int64 *)v160;
                    v166 = v161;
                      v167 = *v165;
                      ++v165;
                      *(_QWORD *)v166 = v167;
                      v166 += 8;
                    while ( (__int64 *)v146 != v165 );
                    v168 = v206;
                    v169 = (unsigned int)&v161[((v146 - 8 - (_DWORD)v160) & 0xFFFFFFF8) + 8];
                  v158 = v169 + 8;
                  if ( v168 )
                    operator delete(v168);
                  v159 = (int)&v161[8 * v164];
                  v206 = v161;
                  v207 = (char *)v158;
                  v208 = &v161[8 * v164];
                  *(_DWORD *)v146 = 1045220557;
                  *(_DWORD *)(v146 + 4) = -1088841318;
                  v158 = (int)(v207 + 8);
                  v159 = (int)v208;
                if ( v158 == v159 )
                  v172 = v206;
                  v173 = 0;
                  v174 = (v158 - (signed int)v206) >> 3;
                  if ( !v174 )
                    v174 = 1;
                  v175 = v174 + ((v158 - (signed int)v206) >> 3);
                  v176 = v174 + ((v158 - (signed int)v206) >> 3);
                  if ( 0 != v175 >> 29 )
                    v176 = 0x1FFFFFFF;
                  if ( v175 < v174 )
                  if ( v176 )
                    if ( v176 >= 0x20000000 )
                    v173 = (char *)operator new(8 * v176);
                    v158 = (int)v207;
                    v172 = v206;
                  *(_DWORD *)&v173[v158 - (_DWORD)v172] = 1045220557;
                  *(_DWORD *)&v173[v158 - (_DWORD)v172 + 4] = -1093874483;
                  if ( (void *)v158 == v172 )
                    v180 = v172;
                    v181 = (unsigned int)v173;
                    v177 = (__int64 *)v172;
                    v178 = v173;
                      v179 = *v177;
                      ++v177;
                      *(_QWORD *)v178 = v179;
                      v178 += 8;
                    while ( (__int64 *)v158 != v177 );
                    v180 = v206;
                    v181 = (unsigned int)&v173[((v158 - 8 - (_DWORD)v172) & 0xFFFFFFF8) + 8];
                  v170 = (char *)(v181 + 8);
                  if ( v180 )
                    operator delete(v180);
                  v171 = (int)&v173[8 * v176];
                  v206 = v173;
                  v207 = v170;
                  v208 = &v173[8 * v176];
                  *(_DWORD *)v158 = 1045220557;
                  *(_DWORD *)(v158 + 4) = -1093874483;
                  v170 = v207 + 8;
                  v171 = (int)v208;
                if ( v170 == (char *)v171 )
                  v183 = v206;
                  v184 = (v170 - (_BYTE *)v206) >> 3;
                  if ( !v184 )
                    v184 = 1;
                  v185 = v184 + ((v170 - (_BYTE *)v206) >> 3);
                  v186 = v184 + ((v170 - (_BYTE *)v206) >> 3);
                  if ( 0 != v185 >> 29 )
                    v186 = 0x1FFFFFFF;
                  if ( v185 < v184 )
                  if ( v186 )
                    if ( v186 >= 0x20000000 )
                    v187 = (char *)operator new(8 * v186);
                    v170 = v207;
                    v183 = v206;
                    v187 = 0;
                  *(_DWORD *)&v187[v170 - v183] = 0;
                  *(_DWORD *)&v187[v170 - v183 + 4] = -1093874483;
                  if ( v170 == v183 )
                    v191 = v183;
                    v192 = (unsigned int)v187;
                    v188 = v183;
                    v189 = v187;
                      v190 = *(_QWORD *)v188;
                      v188 += 8;
                      *(_QWORD *)v189 = v190;
                      v189 += 8;
                    while ( v170 != v188 );
                    v191 = v206;
                    v192 = (unsigned int)&v187[((v170 - 8 - v183) & 0xFFFFFFF8) + 8];
                  v193 = v192 + 8;
                  v182 = v205;
                  if ( v191 )
                    operator delete(v191);
                  v206 = v187;
                  v207 = (char *)v193;
                  v208 = &v187[8 * v186];
                  *(_QWORD *)v170 = -4698155130413907968LL;
                LODWORD(v194) = &v212;
                HIDWORD(v194) = v182;
                FireworksStarter::createParticleShape((int)v1, 1056964608, (__int64 *)&v206, &v215, v194, v204);
                if ( v206 )
                  operator delete(v206);
              case 4:
                FireworksStarter::createParticleBurst((int)v1, &v215, (unsigned __int64 *)&v212, v205, v204);
              default:
                  1048576000,
                  2,
            v195 = Level::addParticle(*((_DWORD *)v1 + 57), 47, (int)v1 + 156);
            v196 = v215;
            __asm { VLDR            S6, =0.0039216 }
            _R1 = DyePowderItem::COLOR_RGB[*v215];
            _R2 = (_R1 >> 16) & 0xFF;
            _R3 = (unsigned __int16)_R1 >> 8;
            _R1 = (unsigned __int8)_R1;
            __asm
              VMOV            S0, R2
              VMOV            S4, R1
              VMOV            S2, R3
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
            *(_DWORD *)(v195 + 80) = 1065353216;
              VMUL.F32        S0, S0, S6
              VMUL.F32        S2, S2, S6
              VMUL.F32        S4, S4, S6
              VSTR            S0, [R0,#0x44]
              VSTR            S2, [R0,#0x48]
              VSTR            S4, [R0,#0x4C]
            Particle::scale((Particle *)v195, 20.0);
            if ( v212 )
              operator delete(v212);
            if ( v196 )
              operator delete(v196);
          }
        }
      }
    }
    result = *((_DWORD *)v1 + 2);
    if ( *((_DWORD *)v1 + 13) >= result )
      result = *((_BYTE *)v1 + 224);
      if ( *((_BYTE *)v1 + 224) )
        result = Level::playSynchronizedSound(
                   *((_DWORD *)v1 + 57),
                   *((_DWORD *)v1 + 35),
                   57,
                   (int)v1 + 156,
                   -1,
                   1,
                   0,
                   0);
  }
  return result;
}
