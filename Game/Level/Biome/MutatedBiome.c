

int __fastcall MutatedBiome::buildSurfaceAt(float a1, int a2, int a3, int a4, int a5)
{
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_0]
    VSTR            S0, [SP,#0x10+var_10]
  }
  return (*(int (**)(void))(**(_DWORD **)(LODWORD(a1) + 280) + 76))();
}


void __fastcall MutatedBiome::~MutatedBiome(MutatedBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall MutatedBiome::~MutatedBiome(MutatedBiome *this)
{
  MutatedBiome::~MutatedBiome(this);
}


int __fastcall MutatedBiome::decorate(MutatedBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_4]
    VSTR            S0, [SP,#0x10+var_C]
  }
  return (*(int (__cdecl **)(_DWORD))(**((_DWORD **)this + 70) + 72))(*((_DWORD *)this + 70));
}


int __fastcall MutatedBiome::MutatedBiome(int a1, int a2, int a3)
{
  int v4; // r4@1
  int v5; // r2@1
  void *v6; // r0@3
  int v7; // r12@4
  int v8; // r1@4
  int v9; // r2@4
  int v10; // r3@4
  int result; // r0@4
  unsigned int *v16; // r2@5
  signed int v17; // r1@7
  int v18; // [sp+4h] [bp-24h]@3
  int v19; // [sp+8h] [bp-20h]@1

  _R5 = a3;
  v4 = a1;
  v5 = *(_DWORD *)(a3 + 264);
  v19 = 0;
  Biome::Biome(a1, a2, v5, &v19);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  *(_DWORD *)v4 = &off_27040D4;
  *(_DWORD *)(v4 + 280) = _R5;
  Biome::setColor((Biome *)v4, *(_DWORD *)(_R5 + 180), 1);
  sub_21E8AF4(&v18, (int *)(_R5 + 176));
  sub_21E7408((const void **)&v18, " M", 2u);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v4 + 176),
    &v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  *(_BYTE *)(v4 + 188) = *(_BYTE *)(_R5 + 188);
  v7 = v4 + 228;
  *(_BYTE *)(v4 + 190) = *(_BYTE *)(_R5 + 190);
  *(_DWORD *)(v4 + 192) = *(_DWORD *)(_R5 + 192);
  *(_DWORD *)(v4 + 220) = *(_DWORD *)(_R5 + 220);
  *(_DWORD *)(v4 + 224) = *(_DWORD *)(_R5 + 224);
  *(_DWORD *)(v4 + 196) = *(_DWORD *)(_R5 + 196);
  *(_DWORD *)(v4 + 200) = *(_DWORD *)(_R5 + 200);
  v8 = *(_DWORD *)(_R5 + 232);
  v9 = *(_DWORD *)(_R5 + 236);
  v10 = *(_DWORD *)(_R5 + 240);
  *(_DWORD *)v7 = *(_DWORD *)(_R5 + 228);
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  *(_DWORD *)(v4 + 204) = *(_DWORD *)(_R5 + 204);
  *(_BYTE *)(v4 + 260) = *(_BYTE *)(_R5 + 260);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::operator=(v4 + 140, (unsigned __int64 *)(_R5 + 140));
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::operator=(v4 + 128, (unsigned __int64 *)(_R5 + 128));
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::operator=(v4 + 152, (unsigned __int64 *)(_R5 + 152));
  result = v4;
  __asm
    VLDR            S0, =0.1
    VLDR            S2, [R5,#0xDC]
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.2
    VSTR            S0, [R4,#0xDC]
    VLDR            S0, [R5,#0xE0]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0xE0]
  return result;
}
