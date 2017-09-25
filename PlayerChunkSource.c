

void __fastcall PlayerChunkSource::~PlayerChunkSource(PlayerChunkSource *this)
{
  ChunkSource *v1; // r0@1

  v1 = PlayerChunkSource::~PlayerChunkSource(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall PlayerChunkSource::~PlayerChunkSource(PlayerChunkSource *this)
{
  PlayerChunkSource::~PlayerChunkSource(this);
}


int __fastcall PlayerChunkSource::suspend(PlayerChunkSource *this)
{
  PlayerChunkSource *v1; // r4@1

  v1 = this;
  *((_BYTE *)this + 168) = 1;
  (*(void (**)(void))(**((_DWORD **)this + 39) + 48))();
  ChunkViewSource::clear(v1);
  return (*(int (**)(void))(**((_DWORD **)v1 + 39) + 52))();
}


int __fastcall PlayerChunkSource::PlayerChunkSource(int a1, int a2, ChunkSource *a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r4@1
  int v9; // r5@1
  __int64 v10; // r2@1
  int v11; // r6@1
  int v12; // r0@1
  int v13; // r0@1
  _DWORD *v14; // ST00_4@2
  int v16; // [sp+4h] [bp-1Ch]@0

  v6 = a4;
  v7 = a2;
  v8 = a1;
  ChunkViewSource::ChunkViewSource(a1, a3, a5);
  *(_DWORD *)v8 = &off_2718448;
  *(_DWORD *)(v8 + 160) = v7;
  *(_DWORD *)(v8 + 164) = v6;
  *(_BYTE *)(v8 + 168) = 0;
  *(_DWORD *)(v8 + 192) = 0;
  *(_DWORD *)(v8 + 172) = -8388609;
  *(_DWORD *)(v8 + 176) = -8388609;
  *(_DWORD *)(v8 + 180) = -8388609;
  v9 = v8 + 184;
  v10 = *(_QWORD *)a6;
  v11 = *(_DWORD *)(v8 + 188);
  *(_DWORD *)a6 = *(_DWORD *)(v8 + 184);
  *(_DWORD *)(a6 + 4) = v11;
  *(_QWORD *)v9 = v10;
  v12 = *(_DWORD *)(a6 + 8);
  *(_DWORD *)(a6 + 8) = *(_DWORD *)(v8 + 192);
  *(_DWORD *)(v8 + 192) = v12;
  v13 = *(_DWORD *)(a6 + 12);
  *(_DWORD *)(a6 + 12) = *(_DWORD *)(v8 + 196);
  *(_DWORD *)(v9 + 12) = v13;
  if ( !*(_DWORD *)(v8 + 192) )
  {
    v14 = operator new(4u);
    *v14 = v8;
    *(_DWORD *)v9 = v14;
    *(_DWORD *)(v8 + 188) = v16;
    *(_DWORD *)(v8 + 192) = sub_18F8E20;
    *(_DWORD *)(v8 + 196) = sub_18F8DF2;
  }
  return v8;
}


ChunkSource *__fastcall PlayerChunkSource::~PlayerChunkSource(PlayerChunkSource *this)
{
  PlayerChunkSource *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_2718448;
  (*(void (**)(void))(**((_DWORD **)this + 39) + 48))();
  GridArea<std::shared_ptr<LevelChunk>>::clear((int)v1 + 28);
  (*(void (**)(void))(**((_DWORD **)v1 + 39) + 52))();
  v2 = (void (*)(void))*((_DWORD *)v1 + 48);
  if ( v2 )
    v2();
  *(_DWORD *)v1 = &off_271830C;
  GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)v1 + 28);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


int __fastcall PlayerChunkSource::center(PlayerChunkSource *this, float a2)
{
  PlayerChunkSource *v2; // r5@1
  float v3; // r4@1
  const Vec3 *v4; // r1@1

  v2 = this;
  v3 = a2;
  v4 = (const Vec3 *)(*(int (**)(void))(**((_DWORD **)this + 40) + 52))();
  return j_j_j__ZN17PlayerChunkSource8centerAtERK4Vec3f_0(v2, v4, v3);
}


int __fastcall PlayerChunkSource::centerAt(PlayerChunkSource *this, const Vec3 *a2, float _R2)
{
  int result; // r0@1
  __int64 v10; // r2@6
  signed int v11; // r5@6
  int v12; // r0@6
  signed int v13; // r1@6
  signed int v14; // r7@10
  int v15; // r8@10
  signed int v16; // r6@10
  signed int v17; // r6@10
  int v18; // r7@10
  int v19; // [sp+4h] [bp-ECh]@4
  int v20; // [sp+8h] [bp-E8h]@4
  char v21; // [sp+Ch] [bp-E4h]@5
  char v22; // [sp+8Ch] [bp-64h]@4
  int v23; // [sp+90h] [bp-60h]@6
  int v24; // [sp+94h] [bp-5Ch]@10
  int v25; // [sp+98h] [bp-58h]@6
  int v26; // [sp+9Ch] [bp-54h]@6
  int v27; // [sp+A0h] [bp-50h]@6
  int v28; // [sp+A4h] [bp-4Ch]@6
  int v29; // [sp+A8h] [bp-48h]@6
  signed int v30; // [sp+ACh] [bp-44h]@6
  int v31; // [sp+B0h] [bp-40h]@6
  int v32; // [sp+B4h] [bp-3Ch]@6
  int v33; // [sp+B8h] [bp-38h]@14
  __int64 v34; // [sp+BCh] [bp-34h]@14
  int v35; // [sp+C4h] [bp-2Ch]@6

  _R4 = this;
  result = *((_BYTE *)this + 168);
  if ( !result )
  {
    __asm { VMOV            S0, R2 }
    _R2 = *(_DWORD *)a2;
    result = *((_DWORD *)a2 + 2);
    __asm
    {
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_17;
      VLDR            S2, [R4,#0xAC]
      VMOV            S8, R2
      VLDR            S4, [R4,#0xB0]
      VMUL.F32        S0, S0, S0
      VSUB.F32        S2, S2, S8
      VLDR            S6, [R4,#0xB4]
      VMOV            S8, R0
      VMUL.F32        S4, S4, S4
      VSUB.F32        S6, S6, S8
      VMUL.F32        S2, S2, S2
      VMUL.F32        S6, S6, S6
      VADD.F32        S2, S4, S2
      VADD.F32        S2, S2, S6
      VCMPE.F32       S2, S0
    if ( !(_NF ^ _VF) )
LABEL_17:
      v19 = *(_DWORD *)a2;
      v20 = *((_DWORD *)a2 + 2);
      BlockPos::BlockPos((int)&v22, (int)a2);
      if ( (unsigned int)*(_QWORD *)((char *)_R4 + 124) == *(_QWORD *)((char *)_R4 + 124) >> 32 )
      {
        ChunkSource::createEmptyView((int)&v21, *((_DWORD *)_R4 + 39), *((_DWORD *)_R4 + 6), 1, (int)_R4 + 184);
        GridArea<std::shared_ptr<LevelChunk>>::clear((int)_R4 + 28);
        GridArea<std::shared_ptr<LevelChunk>>::_move((int)_R4 + 28, (int)&v21);
        GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)&v21);
      }
      (*(void (**)(void))(**((_DWORD **)_R4 + 39) + 48))();
      HIDWORD(v10) = *((_DWORD *)_R4 + 41);
      LODWORD(v10) = *((_DWORD *)_R4 + 30);
      v11 = *((_WORD *)_R4 + 75);
      v12 = *((_WORD *)_R4 + 76);
      v31 = 0;
      v32 = 0;
      v29 = 0;
      v30 = 0;
      v13 = v11;
      v27 = 0;
      v28 = 0;
      v26 = 0;
      v35 = v10;
      v25 = (*(_DWORD *)&v22 - HIDWORD(v10)) >> 4;
      if ( v23 - HIDWORD(v10) > v11 )
        v13 = v23 - HIDWORD(v10);
      if ( v23 - HIDWORD(v10) > v12 )
        v13 = v12;
      v26 = v13 >> 4;
      v14 = v24 - HIDWORD(v10);
      v27 = (v24 - HIDWORD(v10)) >> 4;
      v15 = ((*(_DWORD *)&v22 + HIDWORD(v10)) >> 4) - ((*(_DWORD *)&v22 - HIDWORD(v10)) >> 4) + 1;
      v28 = (*(_DWORD *)&v22 + HIDWORD(v10)) >> 4;
      v16 = v24 + HIDWORD(v10);
      HIDWORD(v10) += v23;
      v17 = v16 >> 4;
      v18 = v17 - (v14 >> 4) + 1;
      if ( SHIDWORD(v10) > v11 )
        v11 = HIDWORD(v10);
      LODWORD(v10) = v18 * v15;
      if ( SHIDWORD(v10) > v12 )
        v11 = v12;
      v29 = v11 >> 4;
      v30 = v17;
      v31 = v15;
      v32 = (v11 >> 4) - (v13 >> 4) + 1;
      v33 = v18;
      HIDWORD(v10) = v32 * v10;
      v34 = v10;
      GridArea<std::shared_ptr<LevelChunk>>::move((int)_R4 + 28, (int)&v25);
      (*(void (**)(void))(**((_DWORD **)_R4 + 39) + 52))();
      *((_DWORD *)_R4 + 43) = v19;
      *((_DWORD *)_R4 + 44) = 0;
      result = v20;
      *((_DWORD *)_R4 + 45) = v20;
  }
  return result;
}


int __fastcall PlayerChunkSource::setRadius(PlayerChunkSource *this, int a2)
{
  PlayerChunkSource *v2; // r4@1
  const Vec3 *v3; // r1@1

  v2 = this;
  *((_DWORD *)this + 41) = a2;
  v3 = (const Vec3 *)(*(int (**)(void))(**((_DWORD **)this + 40) + 52))();
  return j_j_j__ZN17PlayerChunkSource8centerAtERK4Vec3f_0(v2, v3, 0.0);
}
