

signed int __fastcall ScatteredFeatureStart::getType(ScatteredFeatureStart *this)
{
  return 6;
}


void __fastcall ScatteredFeatureStart::~ScatteredFeatureStart(ScatteredFeatureStart *this)
{
  ScatteredFeatureStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ScatteredFeatureStart::ScatteredFeatureStart(int result, int a2, unsigned int a3)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = a2;
  *(_QWORD *)(result + 32) = a3;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)result = &off_27191F0;
  return result;
}


int __fastcall ScatteredFeatureStart::ScatteredFeatureStart(int a1, Dimension *this, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r6@1
  Dimension *v7; // r0@1
  int (*v8)(void); // r2@1
  int v9; // r0@1
  int v10; // r5@2
  int v11; // r0@2
  int v12; // r6@2
  JunglePyramidPiece *v13; // r7@4
  __int64 v14; // r0@4
  SwamplandHut *v15; // r7@11
  __int64 v16; // r0@11
  DesertPyramidPiece *v17; // r7@18
  __int64 v18; // r0@18
  Igloo *v19; // r7@25
  __int64 v20; // r0@25
  Igloo *v22; // [sp+4h] [bp-34h]@25
  DesertPyramidPiece *v23; // [sp+8h] [bp-30h]@18
  SwamplandHut *v24; // [sp+Ch] [bp-2Ch]@11
  JunglePyramidPiece *v25; // [sp+10h] [bp-28h]@4
  int v26; // [sp+14h] [bp-24h]@1
  int v27; // [sp+18h] [bp-20h]@1
  int v28; // [sp+1Ch] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)a1 = &off_27191F0;
  v7 = Dimension::getBiomes(this);
  v8 = *(int (**)(void))(*(_DWORD *)ThreadLocal<BiomeSource>::getLocal((int)v7) + 36);
  v26 = 16 * v6 | 8;
  v27 = 0;
  v28 = 16 * a5 | 8;
  v9 = v8();
  if ( v9 )
  {
    v10 = 16 * a5;
    v11 = *(_DWORD *)(v9 + 268);
    v12 = 16 * v6;
    if ( v11 != *(_DWORD *)(Biome::jungle + 268) && v11 != *(_DWORD *)(Biome::jungleHills + 268) )
    {
      if ( v11 != *(_DWORD *)(Biome::swampland + 268) && v11 != *(_DWORD *)(Biome::swamplandMutated + 268) )
      {
        if ( v11 != *(_DWORD *)(Biome::desert + 268) && v11 != *(_DWORD *)(Biome::desertHills + 268) )
        {
          if ( v11 == *(_DWORD *)(Biome::iceFlats + 268) || v11 == *(_DWORD *)(Biome::taigaCold + 268) )
          {
            v19 = (Igloo *)j_operator new(0x98u);
            Igloo::Igloo(v19, v12, v10);
            v22 = v19;
            v20 = *(_QWORD *)(v5 + 40);
            if ( (_DWORD)v20 == HIDWORD(v20) )
            {
              std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<Igloo,std::default_delete<Igloo>>>(
                (_QWORD *)(v5 + 36),
                (int *)&v22);
              if ( v22 )
                (*(void (**)(void))(*(_DWORD *)v22 + 4))();
            }
            else
              v22 = 0;
              *(_DWORD *)v20 = v19;
              *(_DWORD *)(v5 + 40) = v20 + 4;
            v22 = 0;
          }
        }
        else
          v17 = (DesertPyramidPiece *)j_operator new(0x38u);
          DesertPyramidPiece::DesertPyramidPiece(v17, v12, v10);
          v23 = v17;
          v18 = *(_QWORD *)(v5 + 40);
          if ( (_DWORD)v18 == HIDWORD(v18) )
            std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<DesertPyramidPiece,std::default_delete<DesertPyramidPiece>>>(
              (_QWORD *)(v5 + 36),
              (int *)&v23);
            if ( v23 )
              (*(void (**)(void))(*(_DWORD *)v23 + 4))();
          else
            v23 = 0;
            *(_DWORD *)v18 = v17;
            *(_DWORD *)(v5 + 40) = v18 + 4;
          v23 = 0;
      }
      else
        v15 = (SwamplandHut *)j_operator new(0x38u);
        SwamplandHut::SwamplandHut(v15, v12, v10);
        v24 = v15;
        v16 = *(_QWORD *)(v5 + 40);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<SwamplandHut,std::default_delete<SwamplandHut>>>(
            (_QWORD *)(v5 + 36),
            (int *)&v24);
          if ( v24 )
            (*(void (**)(void))(*(_DWORD *)v24 + 4))();
          v24 = 0;
          *(_DWORD *)v16 = v15;
          *(_DWORD *)(v5 + 40) = v16 + 4;
        v24 = 0;
    }
    else
      v13 = (JunglePyramidPiece *)j_operator new(0x38u);
      JunglePyramidPiece::JunglePyramidPiece(v13, v12, v10);
      v25 = v13;
      v14 = *(_QWORD *)(v5 + 40);
      if ( (_DWORD)v14 == HIDWORD(v14) )
        std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<JunglePyramidPiece,std::default_delete<JunglePyramidPiece>>>(
          (_QWORD *)(v5 + 36),
          (int *)&v25);
        if ( v25 )
          (*(void (**)(void))(*(_DWORD *)v25 + 4))();
        v25 = 0;
        *(_DWORD *)v14 = v13;
        *(_DWORD *)(v5 + 40) = v14 + 4;
      v25 = 0;
  }
  StructureStart::calculateBoundingBox((StructureStart *)v5);
  return v5;
}


void __fastcall ScatteredFeatureStart::~ScatteredFeatureStart(ScatteredFeatureStart *this)
{
  ScatteredFeatureStart::~ScatteredFeatureStart(this);
}


_DWORD *__fastcall ScatteredFeatureStart::ScatteredFeatureStart(_DWORD *a1)
{
  _DWORD *v1; // r4@1

  v1 = a1;
  j___aeabi_memclr4((int)(a1 + 1), 44);
  *v1 = &off_27191F0;
  return v1;
}
