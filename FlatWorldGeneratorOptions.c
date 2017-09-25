

Json::Value *__fastcall FlatWorldGeneratorOptions::parseStringFormatJSON(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  Json::Value *v4; // r0@3
  const Json::Value *v5; // r0@3
  Json::Value *v6; // r0@5
  Json::Value *v7; // r10@5
  Json::Value *v8; // r0@5
  int v9; // r0@5
  int v10; // r6@5
  Json::Value *v11; // r0@5
  char v12; // r0@5
  char v13; // r8@5
  Json::Value *v14; // r0@5
  char v15; // r0@5
  int v16; // r1@5 OVERLAPPED
  int v17; // r2@5
  Json::Value *v18; // r0@9
  const Json::Value *v19; // r0@9
  char v21; // [sp+0h] [bp-D0h]@5
  char v22; // [sp+1h] [bp-CFh]@5
  int v23; // [sp+4h] [bp-CCh]@5
  char v24; // [sp+8h] [bp-C8h]@3
  char v25; // [sp+10h] [bp-C0h]@3
  char v26; // [sp+18h] [bp-B8h]@3
  char v27; // [sp+28h] [bp-A8h]@1
  char v28; // [sp+98h] [bp-38h]@1

  v2 = a1;
  v3 = a2;
  j_Json::Value::Value(&v28, 0);
  j_Json::Reader::Reader((Json::Reader *)&v27);
  if ( !j_Json::Reader::parse((int)&v27, v3, (int)&v28, 1) )
    j_Json::Reader::parse((int)&v27, (int *)&FlatWorldGenerator::DEFAULT_LAYERS, (int)&v28, 1);
  v4 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)&v28, "encoding_version");
  *(_DWORD *)(v2 + 12) = j_Json::Value::asInt(v4, 0);
  v5 = (const Json::Value *)j_Json::Value::operator[]((Json::Value *)&v28, "block_layers");
  j_Json::Value::Value((Json::Value *)&v26, v5);
  j_Json::Value::begin((Json::Value *)&v25, (int)&v26);
  j_Json::Value::end((Json::Value *)&v24, (int)&v26);
  while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v25, (const Json::ValueIteratorBase *)&v24) != 1 )
  {
    v6 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v25);
    v7 = v6;
    v21 = 0;
    v22 = 0;
    v23 = 1;
    v8 = (Json::Value *)j_Json::Value::operator[](v6, "count");
    v9 = j_Json::Value::asInt(v8, 0);
    v10 = v9;
    v23 = v9;
    v11 = (Json::Value *)j_Json::Value::operator[](v7, "block_id");
    v12 = j_Json::Value::asInt(v11, 0);
    v13 = v12;
    v21 = v12;
    v14 = (Json::Value *)j_Json::Value::operator[](v7, "block_data");
    v15 = j_Json::Value::asInt(v14, 0);
    v22 = v15;
    *(_QWORD *)&v16 = *(_QWORD *)(v2 + 4);
    if ( v16 == v17 )
    {
      std::vector<BlockLayer,std::allocator<BlockLayer>>::_M_emplace_back_aux<BlockLayer const&>(
        (unsigned __int64 *)v2,
        (int)&v21);
    }
    else
      *(_BYTE *)v16 = v13;
      *(_BYTE *)(v16 + 1) = v15;
      *(_DWORD *)(v16 + 4) = v10;
      *(_DWORD *)(v2 + 4) = v16 + 8;
    *(_DWORD *)(v2 + 40) += v10;
    j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v25);
  }
  v18 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)&v28, "biome_id");
  *(_DWORD *)(v2 + 16) = j_Json::Value::asInt(v18, 0);
  v19 = (const Json::Value *)j_Json::Value::operator[]((Json::Value *)&v28, "structure_options");
  j_Json::Value::operator=(v2 + 24, v19);
  j_Json::Value::~Value((Json::Value *)&v26);
  j_Json::Reader::~Reader((Json::Reader *)&v27);
  return j_Json::Value::~Value((Json::Value *)&v28);
}


Json::Value *__fastcall FlatWorldGeneratorOptions::toStringJSON(FlatWorldGeneratorOptions *this, int a2)
{
  int v2; // r7@1
  Json::Value *v3; // r0@1
  int v4; // r4@1
  int v5; // r11@1
  Json::Value *v6; // r0@2
  unsigned int v7; // r9@2
  Json::Value *v8; // r8@3
  int v9; // r5@3
  int v10; // r10@3
  int v11; // r4@3
  int v12; // r5@3
  int v13; // r0@4
  int v14; // r4@4
  int v15; // r0@4
  FlatWorldGeneratorOptions *v17; // [sp+8h] [bp-D0h]@1
  char v18; // [sp+Ch] [bp-CCh]@4
  char v19; // [sp+30h] [bp-A8h]@4
  char v20; // [sp+40h] [bp-98h]@3
  char v21; // [sp+50h] [bp-88h]@3
  char v22; // [sp+60h] [bp-78h]@3
  char v23; // [sp+70h] [bp-68h]@2
  char v24; // [sp+80h] [bp-58h]@1
  char v25; // [sp+90h] [bp-48h]@1
  char v26; // [sp+A0h] [bp-38h]@1

  v17 = this;
  v2 = a2;
  v3 = (Json::Value *)j_Json::Value::Value(&v26, 0);
  v4 = j_Json::Value::operator[](v3, "encoding_version");
  j_Json::Value::Value((Json::Value *)&v25, *(_DWORD *)(v2 + 12));
  j_Json::Value::operator=(v4, (const Json::Value *)&v25);
  j_Json::Value::~Value((Json::Value *)&v25);
  j_Json::Value::Value(&v24, 0);
  v5 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 >> 32 != v5 )
  {
    v6 = (Json::Value *)&v23;
    v7 = 0;
    do
    {
      v8 = (Json::Value *)j_Json::Value::Value(v6, 0);
      v9 = j_Json::Value::operator[](v8, "block_id");
      j_Json::Value::Value((Json::Value *)&v22, *(_BYTE *)(v5 + 8 * v7));
      j_Json::Value::operator=(v9, (const Json::Value *)&v22);
      j_Json::Value::~Value((Json::Value *)&v22);
      v10 = j_Json::Value::operator[](v8, "block_data");
      v11 = v5 + 8 * v7;
      j_Json::Value::Value((Json::Value *)&v21, *(_BYTE *)(v11 + 1));
      j_Json::Value::operator=(v10, (const Json::Value *)&v21);
      j_Json::Value::~Value((Json::Value *)&v21);
      v12 = j_Json::Value::operator[](v8, "count");
      j_Json::Value::Value((Json::Value *)&v20, *(_DWORD *)(v11 + 4));
      j_Json::Value::operator=(v12, (const Json::Value *)&v20);
      j_Json::Value::~Value((Json::Value *)&v20);
      j_Json::Value::append((Json::Value *)&v24, v8);
      v6 = j_Json::Value::~Value(v8);
      v5 = *(_QWORD *)v2;
      ++v7;
    }
    while ( v7 < (signed int)((*(_QWORD *)v2 >> 32) - v5) >> 3 );
  }
  v13 = j_Json::Value::operator[]((Json::Value *)&v26, "block_layers");
  j_Json::Value::operator=(v13, (const Json::Value *)&v24);
  v14 = j_Json::Value::operator[]((Json::Value *)&v26, "biome_id");
  j_Json::Value::Value((Json::Value *)&v19, *(_DWORD *)(v2 + 16));
  j_Json::Value::operator=(v14, (const Json::Value *)&v19);
  j_Json::Value::~Value((Json::Value *)&v19);
  v15 = j_Json::Value::operator[]((Json::Value *)&v26, "structure_options");
  j_Json::Value::operator=(v15, (const Json::Value *)(v2 + 24));
  j_Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v18);
  j_Json::StyledWriter::write(v17, (const Json::Value *)&v18, (const Json::Value *)&v26);
  j_Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v18);
  j_Json::Value::~Value((Json::Value *)&v24);
  return j_Json::Value::~Value((Json::Value *)&v26);
}
