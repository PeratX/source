

Json::Value *__fastcall TickingTextureFactory::createDynamicTextures(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12, int a13, int a14, int a15, void *a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, char a62, int a63)
{
  return TickingTextureFactory::createDynamicTextures(
           (TickingTextureFactory *)this,
           (const TextureAtlas *)a2,
           (mce::TextureGroup *)a3);
}


Json::Value *__fastcall TickingTextureFactory::createDynamicTextures(TickingTextureFactory *this, const TextureAtlas *a2, mce::TextureGroup *a3)
{
  TickingTextureFactory *v3; // r5@1
  const TextureAtlas *v4; // r4@1
  char *v5; // r0@1
  char *v6; // r0@2
  const TextureAtlas *v7; // r11@4
  Json::ValueIteratorBase *v8; // r4@4
  const Json::ValueIteratorBase *v9; // r8@4
  int *v10; // r10@4
  int *v11; // r6@4
  Json::Value *v12; // r8@5
  int v13; // r5@5
  void *v14; // r0@5
  int v15; // r5@6
  int v16; // r5@6
  void *v17; // r0@6
  Json::Value *v18; // r0@7
  int v19; // r11@7
  Json::Value *v20; // r0@7
  int v21; // r10@7
  Json::Value *v22; // r0@7
  const Json::Value *v23; // r0@7
  int v24; // r6@8
  unsigned int v25; // r1@8
  signed int v26; // r9@13
  Json::Value *v27; // r0@14
  int v28; // r4@15
  Json::Value *v29; // r0@15
  unsigned __int64 *v30; // r5@15
  TextureUVCoordinateSet *v31; // r0@16
  TextureUVCoordinateSet *v32; // r7@16
  int v33; // r5@16
  Json::Value *v34; // r0@18
  int v35; // r6@18
  int v36; // r4@19
  signed int v37; // r5@23
  void *v38; // r7@23
  int v39; // ST04_4@23
  int *v40; // r0@25
  int *v41; // r0@26
  void *v42; // r0@29
  void *v43; // r0@30
  unsigned int *v44; // r2@32
  signed int v45; // r1@34
  unsigned int *v46; // r2@36
  signed int v47; // r1@38
  unsigned int *v48; // r2@40
  signed int v49; // r1@42
  unsigned int *v50; // r2@44
  signed int v51; // r1@46
  int v52; // r9@56
  int *v53; // r11@56
  signed int v54; // r5@56
  void *v55; // r6@56
  int v56; // ST04_4@56
  int *v57; // r0@58
  int *v58; // r0@59
  unsigned int *v59; // r2@70
  signed int v60; // r1@72
  unsigned int *v61; // r2@74
  signed int v62; // r1@76
  unsigned int *v63; // r2@78
  signed int v64; // r1@80
  unsigned int *v65; // r2@82
  signed int v66; // r1@84
  char *v67; // r0@102
  unsigned int *v69; // r2@104
  signed int v70; // r1@106
  unsigned int *v71; // r2@108
  signed int v72; // r1@110
  unsigned int *v73; // r2@112
  signed int v74; // r1@114
  TextureUVCoordinateSet *i; // [sp+14h] [bp-13Ch]@16
  int v76; // [sp+18h] [bp-138h]@16
  int v77; // [sp+1Ch] [bp-134h]@7
  int *v78; // [sp+24h] [bp-12Ch]@7
  int v79; // [sp+28h] [bp-128h]@7
  TextureAtlas *v80; // [sp+2Ch] [bp-124h]@4
  int *v81; // [sp+30h] [bp-120h]@44
  int *v82; // [sp+34h] [bp-11Ch]@40
  int v83; // [sp+38h] [bp-118h]@56
  void *v84; // [sp+3Ch] [bp-114h]@56
  int *v85; // [sp+40h] [bp-110h]@23
  int *v86; // [sp+44h] [bp-10Ch]@23
  int v87; // [sp+48h] [bp-108h]@23
  void *v88; // [sp+4Ch] [bp-104h]@23
  char v89; // [sp+50h] [bp-100h]@7
  void *ptr; // [sp+60h] [bp-F0h]@7
  char *v91; // [sp+64h] [bp-ECh]@7
  int v92; // [sp+68h] [bp-E8h]@7
  int v93; // [sp+70h] [bp-E0h]@6
  int v94; // [sp+74h] [bp-DCh]@6
  int v95; // [sp+7Ch] [bp-D4h]@5
  int v96; // [sp+80h] [bp-D0h]@4
  char v97; // [sp+84h] [bp-CCh]@4
  char v98; // [sp+8Ch] [bp-C4h]@4
  char *v99; // [sp+98h] [bp-B8h]@1
  char *v100; // [sp+9Ch] [bp-B4h]@1
  int v101; // [sp+A0h] [bp-B0h]@1
  char *v102; // [sp+A4h] [bp-ACh]@1
  char v103; // [sp+A8h] [bp-A8h]@1
  char v104; // [sp+118h] [bp-38h]@1

  v3 = this;
  v4 = a2;
  Json::Value::Value(&v104, 0);
  Json::Reader::Reader((Json::Reader *)&v103);
  v102 = (char *)&unk_28898CC;
  sub_119C884((void **)&v99, "textures/flipbook_textures.json");
  v100 = v99;
  v99 = (char *)&unk_28898CC;
  v101 = 0;
  Resource::load((int)&v100);
  v5 = v100 - 12;
  if ( (int *)(v100 - 12) != &dword_28898C0 )
  {
    v69 = (unsigned int *)(v100 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
    }
    else
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = v99 - 12;
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v99 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  if ( Json::Reader::parse((int)&v103, (int *)&v102, (int)&v104, 1) )
    Json::Value::begin((Json::Value *)&v98, (int)&v104);
    Json::Value::end((Json::Value *)&v97, (int)&v104);
    v7 = v4;
    v8 = (Json::ValueIteratorBase *)&v98;
    v9 = (const Json::ValueIteratorBase *)&v97;
    v10 = &v96;
    v80 = v3;
    v11 = &dword_28898C0;
    while ( Json::ValueIteratorBase::isEqual(v8, v9) != 1 )
      v12 = (Json::Value *)Json::ValueIteratorBase::deref(v8);
      v13 = Json::Value::operator[](v12, "flipbook_texture");
      sub_119C884((void **)&v95, (const char *)&unk_257BC67);
      Json::Value::asString(v10, v13, &v95);
      v14 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != v11 )
      {
        v44 = (unsigned int *)(v95 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
        }
        else
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      }
      v15 = Json::Value::operator[](v12, "atlas_tile");
      sub_119C884((void **)&v93, (const char *)&unk_257BC67);
      Json::Value::asString(&v94, v15, &v93);
      v16 = (int)v7;
      v17 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != v11 )
        v46 = (unsigned int *)(v93 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      v18 = (Json::Value *)Json::Value::operator[](v12, "atlas_index");
      v19 = Json::Value::asInt(v18, 0);
      v20 = (Json::Value *)Json::Value::operator[](v12, "replicate");
      v21 = Json::Value::asInt(v20, 1);
      v22 = (Json::Value *)Json::Value::operator[](v12, "ticks_per_frame");
      v79 = Json::Value::asInt(v22, 1);
      ptr = 0;
      v91 = 0;
      v92 = 0;
      v23 = (const Json::Value *)Json::Value::operator[](v12, "frames");
      Json::Value::Value((Json::Value *)&v89, v23);
      v78 = v11;
      v77 = v16;
      if ( Json::Value::isArray((Json::Value *)&v89) == 1 )
        v24 = Json::Value::size((Json::Value *)&v89);
        v25 = (v91 - (_BYTE *)ptr) >> 2;
        if ( v24 <= v25 )
          if ( v24 < v25 )
            v91 = (char *)ptr + 4 * v24;
          std::vector<int,std::allocator<int>>::_M_default_append((int)&ptr, v24 - v25);
        if ( v24 > 0 )
          v26 = 0;
          {
            v27 = (Json::Value *)Json::Value::operator[]((int)&v89, v26);
            *((_DWORD *)ptr + v26++) = Json::Value::asInt(v27, 0);
          }
          while ( v26 < v24 );
      v28 = *(_DWORD *)(TextureAtlas::getTextureItem((int)v80, (int **)&v94) + 8);
      v29 = (Json::Value *)Json::Value::operator[](v12, "atlas_tile_variant");
      v30 = (unsigned __int64 *)(v28 + 12 * v19);
      if ( Json::Value::isNull(v29) )
        v76 = v21;
        v8 = (Json::ValueIteratorBase *)&v98;
        v31 = (TextureUVCoordinateSet *)(*v30 >> 32);
        v32 = (TextureUVCoordinateSet *)*v30;
        v9 = (const Json::ValueIteratorBase *)&v97;
        v33 = v77;
        v10 = &v96;
        v11 = v78;
        for ( i = v31; v32 != i; v32 = (TextureUVCoordinateSet *)((char *)v32 + 32) )
          sub_119C854((int *)&v81, &v96);
          v52 = v33;
          v82 = v81;
          v81 = v11 + 3;
          v53 = v11;
          v83 = 0;
          v54 = TextureAtlas::getPadSize(v80);
          v55 = operator new(0xE8u);
          v56 = v54;
          v33 = v52;
          FlipbookTexture::FlipbookTexture((int)v55, v52, v32, (int)&v82, (int)&ptr, v56, v76, v79);
          v84 = v55;
          mce::TextureGroup::addTickingTexture(v52, (int *)&v84);
          if ( v84 )
            (*(void (**)(void))(*(_DWORD *)v84 + 4))();
          v84 = 0;
          v11 = v53;
          v57 = v82 - 3;
          if ( v82 - 3 != v53 )
            v48 = (unsigned int *)(v82 - 1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
              v11 = v53;
              v33 = v52;
            }
            else
              v49 = (*v48)--;
            if ( v49 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v57);
          v58 = v81 - 3;
          if ( v81 - 3 != v11 )
            v50 = (unsigned int *)(v81 - 1);
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v58);
      else
        v34 = (Json::Value *)Json::Value::operator[](v12, "atlas_tile_variant");
        v35 = Json::Value::asInt(v34, 0);
        if ( v35 <= -1 )
          v36 = *(_DWORD *)v30;
          v35 = 0;
          v36 = *v30;
          if ( v35 >= (signed int)((*v30 >> 32) - v36) >> 5 )
            v35 = 0;
        sub_119C854((int *)&v85, &v96);
        v86 = v85;
        v85 = v78 + 3;
        v87 = 0;
        v37 = TextureAtlas::getPadSize(v80);
        v38 = operator new(0xE8u);
        v39 = v37;
        FlipbookTexture::FlipbookTexture(
          (int)v38,
          v77,
          (TextureUVCoordinateSet *)(v36 + 32 * v35),
          (int)&v86,
          (int)&ptr,
          v39,
          v21,
          v79);
        v88 = v38;
        mce::TextureGroup::addTickingTexture(v77, (int *)&v88);
        if ( v88 )
          (*(void (**)(void))(*(_DWORD *)v88 + 4))();
        v88 = 0;
        v40 = v86 - 3;
        if ( v86 - 3 != v78 )
          v63 = (unsigned int *)(v86 - 1);
          if ( &pthread_create )
            __dmb();
            do
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
          else
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v40);
        v41 = v85 - 3;
        if ( v85 - 3 != v78 )
          v65 = (unsigned int *)(v85 - 1);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v41);
      Json::Value::~Value((Json::Value *)&v89);
      if ( ptr )
        operator delete(ptr);
      v42 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != v11 )
        v59 = (unsigned int *)(v94 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v42);
      v43 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != v11 )
        v61 = (unsigned int *)(v96 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v43);
      v7 = (const TextureAtlas *)v33;
      Json::ValueIteratorBase::increment(v8);
  v67 = v102 - 12;
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v102 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
  Json::Reader::~Reader((Json::Reader *)&v103);
  return Json::Value::~Value((Json::Value *)&v104);
}
