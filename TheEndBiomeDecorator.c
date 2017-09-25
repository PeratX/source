

void __fastcall TheEndBiomeDecorator::~TheEndBiomeDecorator(TheEndBiomeDecorator *this)
{
  BiomeDecorator *v1; // r0@1

  v1 = BiomeDecorator::~BiomeDecorator(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall TheEndBiomeDecorator::~TheEndBiomeDecorator(TheEndBiomeDecorator *this)
{
  TheEndBiomeDecorator::~TheEndBiomeDecorator(this);
}


void __fastcall TheEndBiomeDecorator::getSpikesForLevel(TheEndBiomeDecorator *this, Level *a2)
{
  TheEndBiomeDecorator::getSpikesForLevel(this, a2);
}


void __fastcall TheEndBiomeDecorator::getSpikesForLevel(TheEndBiomeDecorator *this, Level *a2)
{
  TheEndBiomeDecorator *v2; // r8@1
  unsigned int v3; // r0@1
  int v4; // r1@1
  signed int v5; // r2@1
  int v6; // r0@2
  int *v7; // r7@2
  int v8; // r6@2
  unsigned int v9; // [sp+4h] [bp-9ECh]@1
  unsigned int v10; // [sp+8h] [bp-9E8h]@1
  int v11; // [sp+9C8h] [bp-28h]@1
  char v12; // [sp+9CCh] [bp-24h]@1
  int v13; // [sp+9D0h] [bp-20h]@1
  int v14; // [sp+9D4h] [bp-1Ch]@3

  v2 = this;
  v3 = Level::getSeed(a2);
  v9 = v3;
  v11 = 625;
  v4 = 0;
  v5 = 1;
  v12 = 0;
  v13 = 0;
  v10 = v3;
  do
  {
    v6 = v3 ^ (v3 >> 30);
    v7 = (int *)(&v9 + v4);
    v8 = v4++ + 1812433253 * v6;
    v3 = v5++ + 1812433253 * v6;
    v7[2] = v8 + 1;
  }
  while ( v4 != 397 );
  v11 = 624;
  v14 = 398;
  TheEndBiomeDecorator::_loadSpikes(v2, (Random *)&v9);
}


void __fastcall TheEndBiomeDecorator::decorate(TheEndBiomeDecorator *this, BlockSource *a2, Random *a3, Biome *a4, const BlockPos *a5, bool a6, float a7)
{
  BlockSource *v7; // r9@1
  Random *v8; // r11@1
  Level *v9; // r0@1
  unsigned int v10; // r0@1
  int v11; // r1@1
  signed int v12; // r2@1
  int v13; // r0@2
  int *v14; // r5@2
  int v15; // r4@2
  int v16; // r8@3
  const SpikeFeature::EndSpike *v17; // r6@4
  int v18; // r4@6
  int v19; // r0@6
  void *ptr; // [sp+4h] [bp-A34h]@3
  int v21; // [sp+8h] [bp-A30h]@6
  signed int v22; // [sp+Ch] [bp-A2Ch]@6
  int v23; // [sp+10h] [bp-A28h]@6
  char v24; // [sp+14h] [bp-A24h]@6
  void *v25; // [sp+34h] [bp-A04h]@3
  void *v26; // [sp+38h] [bp-A00h]@3
  unsigned int v27; // [sp+40h] [bp-9F8h]@1
  unsigned int v28; // [sp+44h] [bp-9F4h]@1
  int v29; // [sp+A04h] [bp-34h]@1
  char v30; // [sp+A08h] [bp-30h]@1
  int v31; // [sp+A0Ch] [bp-2Ch]@1
  int v32; // [sp+A10h] [bp-28h]@3

  v7 = a2;
  v8 = a3;
  (*(void (**)(void))(*(_DWORD *)this + 4))();
  v9 = (Level *)BlockSource::getLevel(v7);
  v10 = Level::getSeed(v9);
  v27 = v10;
  v29 = 625;
  v11 = 0;
  v12 = 1;
  v30 = 0;
  v31 = 0;
  v28 = v10;
  do
  {
    v13 = v10 ^ (v10 >> 30);
    v14 = (int *)(&v27 + v11);
    v15 = v11++ + 1812433253 * v13;
    v10 = v12++ + 1812433253 * v13;
    v14[2] = v15 + 1;
  }
  while ( v11 != 397 );
  v29 = 624;
  v32 = 398;
  TheEndBiomeDecorator::_loadSpikes((TheEndBiomeDecorator *)&v25, (Random *)&v27);
  v16 = (int)v26;
  ptr = v25;
  if ( v25 != v26 )
    v17 = (const SpikeFeature::EndSpike *)v25;
    do
    {
      if ( SpikeFeature::EndSpike::startsInChunk(v17, a5) == 1 )
      {
        SpikeFeature::SpikeFeature((SpikeFeature *)&v24, v17);
        v18 = SpikeFeature::EndSpike::getCenterX(v17);
        v19 = SpikeFeature::EndSpike::getCenterZ(v17);
        v21 = v18;
        v22 = 45;
        v23 = v19;
        SpikeFeature::place((SpikeFeature *)&v24, v7, (const BlockPos *)&v21, v8);
        Feature::~Feature((Feature *)&v24);
      }
      v17 = (const SpikeFeature::EndSpike *)((char *)v17 + 48);
    }
    while ( (const SpikeFeature::EndSpike *)v16 != v17 );
  if ( ptr )
    operator delete(ptr);
}


void __fastcall TheEndBiomeDecorator::decorate(TheEndBiomeDecorator *this, BlockSource *a2, Random *a3, Biome *a4, const BlockPos *a5, bool a6, float a7)
{
  TheEndBiomeDecorator::decorate(this, a2, a3, a4, a5, a6, a7);
}


void __fastcall TheEndBiomeDecorator::_loadSpikes(TheEndBiomeDecorator *this, Random *a2)
{
  TheEndBiomeDecorator::_loadSpikes(this, a2);
}


void __fastcall TheEndBiomeDecorator::_loadSpikes(TheEndBiomeDecorator *this, Random *a2)
{
  Random *v2; // r6@1
  TheEndBiomeDecorator *v3; // r5@1
  float *v4; // r11@1
  int v5; // r0@1
  int v6; // r2@2
  unsigned int v7; // r0@3
  float v8; // r2@4
  unsigned int v9; // r0@5
  float v10; // r2@6
  unsigned int v11; // r0@7
  float v12; // r2@8
  unsigned int v13; // r0@9
  float v14; // r2@10
  unsigned int v15; // r0@11
  float v16; // r2@12
  unsigned int v17; // r0@13
  float v18; // r2@14
  unsigned int v19; // r0@15
  float v20; // r2@16
  unsigned int v21; // r0@17
  float v22; // r1@17
  unsigned int v23; // r0@17
  float v24; // r2@18
  float v34; // r1@20
  int v38; // r3@20
  int v39; // r1@20
  char v40; // r0@20
  int v41; // r7@20
  bool v43; // r6@23
  __int64 v45; // r2@26
  char v46; // [sp+Fh] [bp-59h]@22
  int v47; // [sp+10h] [bp-58h]@20
  int v48; // [sp+14h] [bp-54h]@20
  char v49; // [sp+18h] [bp-50h]@26
  char v50; // [sp+1Ch] [bp-4Ch]@26

  v2 = a2;
  v3 = this;
  v4 = (float *)operator new(0x28u);
  _aeabi_memclr4(v4, 36);
  *((_DWORD *)v4 + 1) = 1;
  v5 = (int)(v4 + 6);
  *((_DWORD *)v4 + 2) = 2;
  *((_DWORD *)v4 + 3) = 3;
  *((_DWORD *)v4 + 4) = 4;
  *((_DWORD *)v4 + 5) = 5;
  *(_DWORD *)v5 = 6;
  *(_DWORD *)(v5 + 4) = 7;
  *(_DWORD *)(v5 + 8) = 8;
  *((_DWORD *)v4 + 9) = 9;
  if ( !(Random::_genRandInt32(v2) & 1) )
  {
    v6 = *((_DWORD *)v4 + 1);
    v4[1] = *v4;
    *(_DWORD *)v4 = v6;
  }
  v7 = Random::_genRandInt32(v2) % 3;
  if ( v7 != 2 )
    v8 = v4[2];
    v4[2] = v4[v7];
    v4[v7] = v8;
  v9 = Random::_genRandInt32(v2) & 3;
  if ( v9 != 3 )
    v10 = v4[3];
    v4[3] = v4[v9];
    v4[v9] = v10;
  v11 = Random::_genRandInt32(v2) % 5;
  if ( v11 != 4 )
    v12 = v4[4];
    v4[4] = v4[v11];
    v4[v11] = v12;
  v13 = Random::_genRandInt32(v2) % 6;
  if ( v13 != 5 )
    v14 = v4[5];
    v4[5] = v4[v13];
    v4[v13] = v14;
  v15 = Random::_genRandInt32(v2) % 7;
  if ( v15 != 6 )
    v16 = v4[6];
    v4[6] = v4[v15];
    v4[v15] = v16;
  v17 = Random::_genRandInt32(v2) & 7;
  if ( v17 != 7 )
    v18 = v4[7];
    v4[7] = v4[v17];
    v4[v17] = v18;
  v19 = Random::_genRandInt32(v2) % 9;
  if ( v19 != 8 )
    v20 = v4[8];
    v4[8] = v4[v19];
    v4[v19] = v20;
  v21 = Random::_genRandInt32(v2);
  LODWORD(v22) = 5 * (v21 / 0xA);
  v23 = v21 % 0xA;
  if ( v23 != 9 )
    v22 = v4[v23];
    v24 = v4[9];
    v4[9] = v22;
    v4[v23] = v24;
  _R8 = 1431655766;
  __asm
    VLDR            S18, =0.1
    VLDR            S20, =42.0
  _R4 = 0;
  _R0 = &mce::Math::PI;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  __asm { VLDR            S16, [R0] }
  do
    __asm
    {
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S18
      VMUL.F32        S0, S0, S16
      VSUB.F32        S0, S0, S16
      VADD.F32        S0, S0, S0
      VMOV            R7, S0
    }
    _R0 = mce::Math::cos(_R7, v22);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S20
      VCVTR.S32.F32   S2, S0
      VCVTR.S32.F32   S22, S0
      VSTR            S2, [R9,#4]
    _R0 = mce::Math::sin(_R7, v34);
    _R0 = v4[_R4];
      SMMUL.W         R1, R0, R8
      VSTR            S2, [R9]
      VCVTR.S32.F32   S0, S0
    v38 = _R1 + (_R1 >> 31) + 2;
    v39 = 3 * LODWORD(_R0);
    v40 = 0;
    v41 = v39 + 76;
    v48 = v38;
    v47 = v39 + 76;
    if ( !_CF )
      v40 = 1;
    v46 = v40;
    _R0 = *(_QWORD *)((char *)v3 + 4);
    if ( (_DWORD)_R0 == HIDWORD(_R0) )
      LODWORD(v45) = &v49;
      HIDWORD(v45) = &v48;
      std::vector<SpikeFeature::EndSpike,std::allocator<SpikeFeature::EndSpike>>::_M_emplace_back_aux<int &,int &,int &,int &,bool &>(
        (unsigned __int64 *)v3,
        (int *)&v50,
        v45,
        &v47,
        (bool *)&v46);
    else
      __asm { VMOV            R1, S22 }
      v43 = 0;
      __asm { VMOV            R2, S0 }
      if ( !_CF )
        v43 = 1;
      *((_DWORD *)v3 + 1) = (char *)SpikeFeature::EndSpike::EndSpike(
                                      (SpikeFeature::EndSpike *)_R0,
                                      SHIDWORD(_R0),
                                      _R2,
                                      v38,
                                      v41,
                                      v43)
                          + 48;
    ++_R4;
  while ( _R4 < 10 );
  operator delete(v4);
}
