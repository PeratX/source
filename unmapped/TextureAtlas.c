

int __fastcall TextureAtlas::getTextureItem(int a1, int **a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r1@1

  v2 = a1;
  v3 = std::_Hashtable<std::string,std::pair<std::string const,TextureAtlasItem>,std::allocator<std::pair<std::string const,TextureAtlasItem>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 16),
         a2);
  v4 = v3 + 8;
  if ( !v3 )
    v4 = v2 + 52;
  return v4;
}


void __fastcall TextureAtlas::_loadAtlasNodes(float a1, int a2, int a3)
{
  TextureAtlas::_loadAtlasNodes(a1, a2, a3);
}


TextureAtlas *__fastcall TextureAtlas::~TextureAtlas(TextureAtlas *this)
{
  TextureAtlas *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  void *v8; // r0@12
  int *v9; // r0@14
  int v10; // r5@19
  int v11; // r7@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  void *v14; // r0@29
  int *v15; // r0@31
  int v16; // r1@36
  void *v17; // r0@36
  _DWORD *v18; // r7@37
  unsigned int *v19; // r2@39
  signed int v20; // r1@41
  _DWORD *v21; // r6@47
  TextureAtlasItem *v22; // r0@47
  int v23; // r1@47
  void *v24; // r0@47
  char *v25; // r0@49
  unsigned int *v27; // r2@53
  signed int v28; // r1@55
  unsigned int *v29; // r2@57
  signed int v30; // r1@59

  v1 = this;
  *(_DWORD *)this = &off_26DCE00;
  v2 = *((_DWORD *)this + 24);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v5 = *(_QWORD *)((char *)v1 + 84) >> 32;
  v4 = *(_QWORD *)((char *)v1 + 84);
  if ( v4 != v5 )
    do
      std::_Destroy_aux<false>::__destroy<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>> *>(
        (unsigned __int64 *)*(_QWORD *)(v4 + 8),
        (unsigned __int64 *)(*(_QWORD *)(v4 + 8) >> 32));
      v8 = *(void **)(v4 + 8);
      if ( v8 )
        operator delete(v8);
      v9 = (int *)(*(_DWORD *)v4 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v4 += 20;
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 21);
  if ( v4 )
    operator delete((void *)v4);
  v11 = *((_QWORD *)v1 + 9) >> 32;
  v10 = *((_QWORD *)v1 + 9);
  if ( v10 != v11 )
      v14 = *(void **)(v10 + 24);
      if ( v14 )
        operator delete(v14);
      v15 = (int *)(*(_DWORD *)v10 - 12);
      if ( v15 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v10 += 80;
    while ( v10 != v11 );
    v10 = *((_DWORD *)v1 + 18);
  if ( v10 )
    operator delete((void *)v10);
  TextureAtlasItem::~TextureAtlasItem((TextureAtlas *)((char *)v1 + 52));
  v16 = *((_DWORD *)v1 + 11);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v16 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (_DWORD *)*((_DWORD *)v1 + 6);
  while ( v18 )
    v21 = v18;
    v22 = (TextureAtlasItem *)(v18 + 2);
    v18 = (_DWORD *)*v18;
    TextureAtlasItem::~TextureAtlasItem(v22);
    v23 = v21[1];
    v24 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    operator delete(v21);
  _aeabi_memclr4(*((_QWORD *)v1 + 2), 4 * (*((_QWORD *)v1 + 2) >> 32));
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  v25 = (char *)*((_DWORD *)v1 + 4);
  if ( v25 && (char *)v1 + 40 != v25 )
    operator delete(v25);
  AppPlatformListener::~AppPlatformListener(v1);
  return v1;
}


void __fastcall TextureAtlas::_loadElement(int a1, Json::Value *this, int a3, int a4, int a5)
{
  TextureAtlas::_loadElement(a1, this, a3, a4, a5);
}


Json::Value *__fastcall TextureAtlas::_readNode(float a1, Json::Value *a2, int a3, int a4)
{
  Json::Value *v4; // r5@1
  float v5; // r9@1
  int v6; // r10@1
  int v7; // r4@1
  Json::Value *v8; // r0@1
  const Json::Value *v9; // r0@1
  Json::Value *v10; // r0@1
  Json::Value *v12; // r0@1
  int v13; // r0@1
  unsigned int v18; // r0@3
  int v19; // r3@3
  unsigned __int64 *v20; // r1@3
  unsigned int v21; // r7@3
  int v22; // r2@6
  unsigned __int64 *v23; // r1@6
  unsigned int v24; // r3@6
  int v25; // r5@9
  int v26; // r5@12
  int v27; // r7@13
  const Json::Value *v28; // r0@15
  int v30; // [sp+0h] [bp-88h]@0
  char v31; // [sp+8h] [bp-80h]@10
  char v32; // [sp+18h] [bp-70h]@15
  char v33; // [sp+28h] [bp-60h]@13
  char v34; // [sp+30h] [bp-58h]@13
  __int64 v35; // [sp+38h] [bp-50h]@1
  __int64 v36; // [sp+40h] [bp-48h]@1
  char v37; // [sp+48h] [bp-40h]@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (Json::Value *)Json::Value::operator[](a2, "quad");
  *(_BYTE *)(v7 + 4) = Json::Value::asBool(v8, 0);
  v9 = (const Json::Value *)Json::Value::operator[](v4, "textures");
  Json::Value::Value((Json::Value *)&v37, v9);
  v10 = (Json::Value *)Json::Value::operator[](v4, "mip_fade_amount");
  _R6 = Json::Value::asFloat(v10, 0.0);
  v35 = *(_QWORD *)&Color::NIL;
  v36 = qword_283E6B8;
  v12 = (Json::Value *)Json::Value::operator[](v4, "mip_fade_color");
  JsonUtil::parseValue<Color>(v12);
  v13 = Json::Value::isArray((Json::Value *)&v37);
  __asm { VMOV            S16, R6 }
  if ( v13 == 1 )
  {
    if ( !v6 )
    {
      v18 = Json::Value::size((Json::Value *)&v37);
      v19 = *(_DWORD *)(v7 + 8);
      v20 = *(unsigned __int64 **)(v7 + 12);
      v21 = -1431655765 * (((signed int)v20 - v19) >> 2);
      if ( v18 <= v21 )
      {
        if ( v18 < v21 )
        {
          v26 = v19 + 12 * v18;
          std::_Destroy_aux<false>::__destroy<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>> *>(
            (unsigned __int64 *)(v19 + 12 * v18),
            v20);
          *(_DWORD *)(v7 + 12) = v26;
        }
      }
      else
        std::vector<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>>,std::allocator<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>>>>::_M_default_append(
          v7 + 8,
          v18 - v21);
    }
    Json::Value::begin((Json::Value *)&v34, (int)&v37);
    Json::Value::end((Json::Value *)&v33, (int)&v37);
    v27 = 0;
    while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v34, (const Json::ValueIteratorBase *)&v33) )
      v28 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v34);
      Json::Value::Value((Json::Value *)&v32, v28);
      __asm { VSTR            S16, [SP,#0x88+var_88] }
      TextureAtlas::_addElementCollection(v5, (int)&v32, v7, v27, v30, (int)&v35);
      Json::Value::~Value((Json::Value *)&v32);
      if ( ++v27 >= (unsigned int)(-1431655765 * ((signed int)((*(_QWORD *)(v7 + 8) >> 32) - *(_QWORD *)(v7 + 8)) >> 2)) )
        break;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v34);
  }
  else
      v22 = *(_DWORD *)(v7 + 8);
      v23 = *(unsigned __int64 **)(v7 + 12);
      v24 = -1431655765 * (((signed int)v23 - v22) >> 2);
      if ( v23 == (unsigned __int64 *)v22 )
          1 - v24);
      else if ( v24 >= 2 )
        v25 = v22 + 12;
        std::_Destroy_aux<false>::__destroy<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>> *>(
          (unsigned __int64 *)(v22 + 12),
          v23);
        *(_DWORD *)(v7 + 12) = v25;
    Json::Value::Value((Json::Value *)&v31, (const Json::Value *)&v37);
    __asm { VSTR            S16, [SP,#0x88+var_88] }
    TextureAtlas::_addElementCollection(v5, (int)&v31, v7, 0, v30, (int)&v35);
    Json::Value::~Value((Json::Value *)&v31);
  return Json::Value::~Value((Json::Value *)&v37);
}


void __fastcall TextureAtlas::_uploadAtlas(TextureAtlas *this)
{
  TextureAtlas *v1; // r4@1
  char *v2; // r4@2
  char *v3; // r0@4
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  char *v6; // [sp+4h] [bp-24h]@2
  char *v7; // [sp+8h] [bp-20h]@2
  int v8; // [sp+Ch] [bp-1Ch]@2

  v1 = this;
  if ( *((_DWORD *)this + 2) )
  {
    sub_119C854((int *)&v6, (int *)this + 24);
    v7 = v6;
    v6 = (char *)&unk_28898CC;
    v8 = 0;
    v2 = mce::TextureGroup::getTexturePair(*((mce::TextureGroup **)v1 + 2), (const ResourceLocation *)&v7);
    if ( mce::Texture::isCreated((mce::Texture *)v2) == 1 )
      TexturePair::unload((TexturePair *)v2);
    TexturePair::load((TexturePair *)v2);
    v3 = v7 - 12;
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v3);
    }
  }
}


void __fastcall TextureAtlas::_addElementCollection(float a1, int a2, int a3, int a4, int a5, int a6)
{
  TextureAtlas::_addElementCollection(a1, a2, a3, a4, a5, a6);
}


void __fastcall TextureAtlas::_addTile(float a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a8)
{
  int v7; // r5@1
  int v9; // r11@1
  int v12; // r9@1
  __int64 v13; // r0@1
  int v17; // r10@2
  signed int v22; // r1@2
  void *v23; // r11@4
  char *v24; // r12@4
  unsigned int v25; // r2@4
  unsigned int v26; // r5@6
  unsigned int v27; // r3@6
  __int64 v28; // r0@12
  int v29; // r2@14
  int v30; // r3@14
  char *v31; // r5@15
  int v32; // ST18_4@15
  int v33; // r5@16
  void *v34; // r0@17
  char *v35; // r11@17
  _DWORD *v37; // r0@37
  int *v38; // r5@37
  size_t v39; // r2@37
  int v40; // r8@57
  int v41; // r10@57
  int v42; // r4@57
  int v43; // r7@57
  int v44; // r6@57
  int *v45; // r0@57
  void *v46; // r0@57
  int v47; // r1@58
  int v48; // r2@58
  int v49; // r3@58
  int v50; // r1@58
  int v51; // r2@58
  int v52; // r3@58
  __int64 v53; // r0@58
  int v54; // r4@59
  __int64 v55; // r0@61
  void *v56; // r5@63
  unsigned int v57; // r2@63
  unsigned int v58; // r1@65
  unsigned int v59; // r7@65
  char *v60; // r6@71
  char *v61; // r9@73
  void *v62; // r0@80
  unsigned int *v63; // r2@82
  signed int v64; // r1@84
  unsigned int *v65; // r2@86
  signed int v66; // r1@88
  unsigned int v67; // [sp+1Ch] [bp-A4h]@12
  int *v68; // [sp+24h] [bp-9Ch]@4
  signed int v69; // [sp+24h] [bp-9Ch]@37
  signed __int64 v70; // [sp+28h] [bp-98h]@2
  int v71; // [sp+2Ch] [bp-94h]@57
  int v72; // [sp+30h] [bp-90h]@57
  int v73; // [sp+34h] [bp-8Ch]@57
  int v74; // [sp+38h] [bp-88h]@57
  void *ptr; // [sp+50h] [bp-70h]@78
  int v76; // [sp+68h] [bp-58h]@58
  int v77; // [sp+6Ch] [bp-54h]@58
  int v78; // [sp+70h] [bp-50h]@58
  int v79; // [sp+74h] [bp-4Ch]@58
  int v80; // [sp+78h] [bp-48h]@58
  int v81; // [sp+7Ch] [bp-44h]@58
  int v82; // [sp+80h] [bp-40h]@58
  int v83; // [sp+84h] [bp-3Ch]@58

  v7 = a2;
  _R6 = HIDWORD(a8);
  v9 = a8;
  _R12 = HIDWORD(a6);
  _LR = a6;
  v12 = a4;
  v13 = *(_QWORD *)a2;
  __asm { VLDR            S16, [SP,#0xC0+arg_0] }
  if ( (_DWORD)v13 != HIDWORD(v13) )
  {
    v17 = -HIDWORD(v13);
    _R8 = v13 + 76;
    _R3 = (int *)(HIDWORD(a8) + 12);
    _R4 = (int *)(HIDWORD(a8) + 8);
    _R7 = (int *)(HIDWORD(a8) + 4);
    v22 = 0;
    v70 = __PAIR__(a3, v7);
    while ( 1 )
    {
      __asm
      {
        VLDR            S0, [R8,#-0x44]
        VLDR            S2, [R6]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        goto LABEL_55;
        VLDR            S0, [R8,#-0x40]
        VLDR            S2, [R7]
        VLDR            S0, [R8,#-0x3C]
        VLDR            S2, [R4]
        VLDR            S0, [R8,#-0x38]
        VLDR            S2, [R3]
      if ( _ZF )
        _ZF = *(_BYTE *)(_R8 - 36) == v12;
        VLDR            S0, [R8,#-0xC]
        VLDR            S2, [R12]
        VLDR            S0, [R8,#-8]
        VLDR            S2, [R12,#4]
        VLDR            S0, [R8,#-4]
        VLDR            S2, [R12,#8]
        VLDR            S0, [R8]
        VLDR            S2, [R12,#0xC]
      v37 = *(_DWORD **)(_R8 - 76);
      v38 = _R3;
      v69 = v22;
      v39 = *(v37 - 3);
      if ( v39 == *(_DWORD *)(*(_DWORD *)v9 - 12) )
        if ( !memcmp(v37, *(const void **)v9, v39) )
        {
          if ( *(_DWORD *)(_R8 - 72) == *(_DWORD *)(v9 + 4) )
          {
            __asm { VLDR            S0, [R8,#-0x20] }
            _R3 = v38;
            _R12 = HIDWORD(a6);
            v22 = v69;
            __asm
            {
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _ZF )
              __asm
              {
                VLDR            S0, [R8,#-0x1C]
                VLDR            S2, [LR]
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _ZF )
                __asm
                {
                  VLDR            S0, [R8,#-0x18]
                  VLDR            S2, [LR,#4]
                  VCMPE.F32       S2, S0
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( _ZF )
                  __asm
                  {
                    VLDR            S0, [R8,#-0x14]
                    VLDR            S2, [LR,#8]
                    VCMPE.F32       S2, S0
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( _ZF )
                    __asm
                    {
                      VLDR            S0, [R8,#-0x10]
                      VLDR            S2, [LR,#0xC]
                      VCMPE.F32       S2, S0
                      VMRS            APSR_nzcv, FPSCR
                    }
                    if ( _ZF )
                      v28 = *(_QWORD *)(_R8 - 48);
                      if ( (_DWORD)v28 == HIDWORD(v28) )
                      {
                        v23 = *(void **)(_R8 - 52);
                        v24 = 0;
                        v68 = v38;
                        v25 = ((signed int)v28 - (signed int)v23) >> 2;
                        if ( !v25 )
                          v25 = 1;
                        v27 = v25 + (((signed int)v28 - (signed int)v23) >> 2);
                        v26 = v27;
                        if ( 0 != v27 >> 30 )
                          v27 = 0x3FFFFFFF;
                        if ( v26 < v25 )
                        if ( v27 )
                        {
                          if ( v27 >= 0x40000000 )
                            sub_119C874();
                          v67 = v27;
                          v24 = (char *)operator new(4 * v27);
                          LODWORD(v28) = *(_QWORD *)(_R8 - 52) >> 32;
                          v23 = (void *)*(_QWORD *)(_R8 - 52);
                        }
                        else
                          v67 = 0;
                        v29 = v28 - (_DWORD)v23;
                        v30 = (int)&v24[v29];
                        *(_DWORD *)&v24[v29] = HIDWORD(v70);
                        if ( ((signed int)v28 - (signed int)v23) >> 2 )
                          v31 = v24;
                          v32 = (int)&v24[v29];
                          _aeabi_memmove4(v24, v23);
                          v30 = v32;
                          v24 = v31;
                        v33 = v30 + 4;
                        if ( v23 )
                          v34 = v23;
                          v35 = v24;
                          operator delete(v34);
                          v24 = v35;
                        v22 = 1;
                        *(_DWORD *)(_R8 - 52) = v24;
                        *(_DWORD *)(_R8 - 48) = v33;
                        v9 = a8;
                        *(_DWORD *)(_R8 - 44) = &v24[4 * v67];
                        _R12 = HIDWORD(a6);
                        _LR = a6;
                        _R3 = v68;
                      }
                      else
                        *(_DWORD *)v28 = HIDWORD(v70);
                        *(_DWORD *)(_R8 - 48) += 4;
            goto LABEL_55;
          }
          _R12 = HIDWORD(a6);
        }
        else
      _R3 = v38;
      v22 = v69;
LABEL_55:
      _R8 += 80;
      if ( _R8 + v17 == 76 )
        a3 = HIDWORD(v70);
        v7 = v70;
        if ( !(v22 & 1) )
          goto LABEL_57;
        return;
    }
  }
  _R3 = (int *)(HIDWORD(a8) + 12);
  _R4 = (int *)(HIDWORD(a8) + 8);
  _R7 = (int *)(HIDWORD(a8) + 4);
LABEL_57:
  v40 = *_R4;
  v41 = _R12;
  v42 = *(_DWORD *)HIDWORD(a8);
  v71 = a3;
  v43 = *_R7;
  v44 = *_R3;
  v45 = sub_119C854(&v72, (int *)v9);
  v73 = *(_DWORD *)(v9 + 4);
  TextureAtlasTile::TextureAtlasTile(&v74, v42, v43, v40, v44, v12, (int)v45);
  v46 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v72 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
    else
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  __asm { VSTR            S16, [SP,#0xC0+var_5C] }
  v47 = *(_DWORD *)(a6 + 4);
  v48 = *(_DWORD *)(a6 + 8);
  v49 = *(_DWORD *)(a6 + 12);
  v76 = *(_DWORD *)a6;
  v77 = v47;
  v78 = v48;
  v79 = v49;
  v50 = *(_DWORD *)(v41 + 4);
  v51 = *(_DWORD *)(v41 + 8);
  v52 = *(_DWORD *)(v41 + 12);
  v80 = *(_DWORD *)v41;
  v81 = v50;
  v82 = v51;
  v83 = v52;
  v53 = *(_QWORD *)(v7 + 4);
  if ( (_DWORD)v53 == HIDWORD(v53) )
    std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>>::_M_emplace_back_aux<TextureAtlasTile>(
      (unsigned __int64 *)v7,
      &v74);
    v54 = *(_DWORD *)(v7 + 4);
  else
    TextureAtlasTile::TextureAtlasTile((int *)v53, &v74);
    v54 = *(_DWORD *)(v7 + 4) + 80;
    *(_DWORD *)(v7 + 4) = v54;
  v55 = *(_QWORD *)(v54 - 52);
  if ( (_DWORD)v55 == HIDWORD(v55) )
    v56 = *(void **)(v54 - 56);
    v57 = ((signed int)v55 - (signed int)v56) >> 2;
    if ( !v57 )
      v57 = 1;
    HIDWORD(v55) = v57 + (((signed int)v55 - (signed int)v56) >> 2);
    v59 = v57 + (((signed int)v55 - (signed int)v56) >> 2);
    if ( 0 != HIDWORD(v55) >> 30 )
      v59 = 0x3FFFFFFF;
    if ( v58 < v57 )
    if ( v59 )
      if ( v59 >= 0x40000000 )
        sub_119C874();
      v60 = (char *)operator new(4 * v59);
      LODWORD(v55) = *(_QWORD *)(v54 - 56) >> 32;
      v56 = (void *)*(_QWORD *)(v54 - 56);
      v60 = 0;
    *(_DWORD *)&v60[v55 - (_DWORD)v56] = v71;
    v61 = &v60[v55 - (_DWORD)v56];
    if ( 0 != ((signed int)v55 - (signed int)v56) >> 2 )
      _aeabi_memmove4(v60, v56);
    if ( v56 )
      operator delete(v56);
    *(_DWORD *)(v54 - 56) = v60;
    *(_DWORD *)(v54 - 52) = v61 + 4;
    *(_DWORD *)(v54 - 48) = &v60[4 * v59];
    *(_DWORD *)v55 = v71;
    *(_DWORD *)(v54 - 52) += 4;
  if ( ptr )
    operator delete(ptr);
  v62 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v74 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
}


void __fastcall TextureAtlas::~TextureAtlas(TextureAtlas *this)
{
  TextureAtlas *v1; // r0@1

  v1 = TextureAtlas::~TextureAtlas(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall TextureAtlas::_loadAtlasNodes(float a1, int a2, int a3)
{
  int v3; // r5@1
  Json::Value *v4; // r6@1
  const char **v5; // r4@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  const Json::Value *v8; // r0@11
  __int64 v9; // kr00_8@11
  char *v10; // r0@16
  const char **v11; // r6@18
  unsigned int *v12; // r2@20
  signed int v13; // r1@22
  int *v14; // r0@28
  const char **v15; // [sp+Ch] [bp-74h]@1
  float v16; // [sp+14h] [bp-6Ch]@1
  char v17; // [sp+18h] [bp-68h]@11
  char v18; // [sp+28h] [bp-58h]@11
  char *v19; // [sp+38h] [bp-48h]@3
  char v20; // [sp+3Ch] [bp-44h]@11
  void *ptr; // [sp+40h] [bp-40h]@11
  unsigned __int64 *v22; // [sp+44h] [bp-3Ch]@11
  int v23; // [sp+48h] [bp-38h]@11
  const char **v24; // [sp+4Ch] [bp-34h]@1
  const char **v25; // [sp+50h] [bp-30h]@1

  v16 = a1;
  v3 = a3;
  v4 = (Json::Value *)a2;
  Json::Value::getMemberNames((Json::Value *)&v24, a2);
  v5 = v24;
  v15 = v25;
  if ( v24 != v25 )
  {
    do
    {
      v19 = (char *)&unk_28898CC;
      v20 = 0;
      ptr = 0;
      v22 = 0;
      v23 = 0;
      v8 = (const Json::Value *)Json::Value::operator[](v4, v5);
      Json::Value::Value((Json::Value *)&v18, v8);
      EntityInteraction::setInteractText((int *)&v19, (int *)v5);
      Json::Value::Value((Json::Value *)&v17, (const Json::Value *)&v18);
      TextureAtlas::_readNode(v16, (Json::Value *)&v17, (int)&v19, 0);
      Json::Value::~Value((Json::Value *)&v17);
      v9 = *(_QWORD *)(v3 + 4);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        std::vector<ParsedAtlasNode,std::allocator<ParsedAtlasNode>>::_M_emplace_back_aux<ParsedAtlasNode const&>(
          (unsigned __int64 *)v3,
          (int)&v19);
      }
      else
        sub_119C854((int *)v9, (int *)&v19);
        *(_BYTE *)(v9 + 4) = v20;
        std::vector<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>>,std::allocator<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>>>>::vector(
          v9 + 8,
          (unsigned __int64 *)&ptr);
        *(_DWORD *)(v3 + 4) += 20;
      Json::Value::~Value((Json::Value *)&v18);
      std::_Destroy_aux<false>::__destroy<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>> *>(
        (unsigned __int64 *)ptr,
        v22);
      if ( ptr )
        operator delete(ptr);
      v10 = v19 - 12;
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v19 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v10);
      ++v5;
    }
    while ( v5 != v15 );
    v5 = v25;
    v11 = v24;
    if ( v24 != v25 )
      do
        v14 = (int *)(*v11 - 12);
        if ( v14 != &dword_28898C0 )
          v12 = (unsigned int *)(*v11 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v14);
        ++v11;
      while ( v11 != v5 );
      v5 = v24;
  }
  if ( v5 )
    operator delete(v5);
}


void __fastcall TextureAtlas::_buildAtlas(TextureAtlas *this)
{
  TextureAtlas::_buildAtlas(this);
}


int __fastcall TextureAtlas::getAtlasFaceSize(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 152);
  return result;
}


signed int __fastcall TextureAtlas::_tryAssignUVs(int a1, unsigned int _R1, unsigned int _R2, unsigned __int64 *a4)
{
  int v8; // r4@1
  int v9; // r11@1
  unsigned int v10; // r5@2
  __int64 v11; // r0@2
  int *v14; // r0@3
  unsigned int v16; // r8@4
  void *v21; // r0@5
  int *v22; // r8@6
  int *i; // r10@6
  int v24; // r4@7
  int v25; // r2@7
  int v26; // r3@7
  int v27; // r5@7
  int v28; // r6@7
  int v29; // r7@7
  unsigned int v30; // r2@8
  int v31; // r0@10
  void *v32; // r0@14
  unsigned int *v33; // r2@17
  signed int v34; // r1@19
  unsigned int *v35; // r2@21
  signed int v36; // r1@23
  unsigned int v37; // r10@33
  unsigned int v38; // r0@33
  unsigned int v39; // r7@33
  unsigned int v40; // r0@33
  char v41; // r1@33 OVERLAPPED
  signed int v42; // r2@33 OVERLAPPED
  signed int v43; // r7@35
  unsigned int v44; // r1@35
  unsigned int v45; // r0@35
  signed int result; // r0@38
  float v47; // [sp+0h] [bp-B0h]@0
  int v48; // [sp+1Ch] [bp-94h]@1
  int v49; // [sp+20h] [bp-90h]@1
  signed int v50; // [sp+28h] [bp-88h]@3
  unsigned int v51; // [sp+2Ch] [bp-84h]@3
  int v52; // [sp+30h] [bp-80h]@5
  unsigned int v53; // [sp+34h] [bp-7Ch]@33
  unsigned int v54; // [sp+3Ch] [bp-74h]@2
  unsigned int v55; // [sp+40h] [bp-70h]@1
  int v56; // [sp+44h] [bp-6Ch]@5
  int v57; // [sp+44h] [bp-6Ch]@12
  int v58; // [sp+48h] [bp-68h]@3
  int v59; // [sp+4Ch] [bp-64h]@5
  char v60; // [sp+50h] [bp-60h]@5
  int v61; // [sp+54h] [bp-5Ch]@7
  int v62; // [sp+58h] [bp-58h]@7
  int v63; // [sp+5Ch] [bp-54h]@7
  int v64; // [sp+60h] [bp-50h]@7
  int v65; // [sp+64h] [bp-4Ch]@7
  int v66; // [sp+68h] [bp-48h]@7
  int v67; // [sp+6Ch] [bp-44h]@7

  __asm { VMOV            S0, R2 }
  v8 = a1;
  v55 = _R1;
  v49 = a1;
  __asm
  {
    VCVT.F32.U32    S16, S0
    VMOV            S0, R1
    VCVT.F32.U32    S18, S0
  }
  v9 = *a4;
  v48 = *a4 >> 32;
  if ( v9 == v48 )
LABEL_39:
    result = 1;
  else
    v54 = _R2;
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 140);
    _R9 = SHIDWORD(v11) >> v11;
    _R6 = SHIDWORD(v11) >> v11;
    while ( 1 )
    {
      v37 = TextureAtlasTile::getActualWidth((TextureAtlasTile *)v9);
      v16 = TextureAtlasTile::getActualHeight((TextureAtlasTile *)v9);
      v38 = TextureAtlasTile::getWidth((TextureAtlasTile *)v9);
      v39 = v38;
      v53 = v38;
      v40 = TextureAtlasTile::getHeight((TextureAtlasTile *)v9);
      *(_QWORD *)&v41 = *(_QWORD *)(v8 + 140);
      if ( v40 > v39 )
        v40 = v39;
      v43 = v42 >> v41;
      v44 = v40 + _R6 + (v42 >> v41);
      v45 = v40 + 2 * v43;
      if ( v45 >= v10 )
        v10 = v45;
      if ( v44 > v54 )
        break;
      v50 = v43;
      v51 = v10;
      v14 = sub_119C854(&v58, (int *)v9);
      __asm { VMOV            S0, R9 }
      _R1 = v37 + _R9;
      __asm
      {
        VMOV            S2, R6
        VCVT.F32.U32    S0, S0
      }
      if ( !_ZF & _CF )
        v16 = v37;
      __asm { VMOV            S4, R1 }
      v52 = _R9;
      __asm { VCVT.F32.U32    S2, S2 }
      _R1 = v16 + _R6;
      __asm { VCVT.F32.U32    S4, S4 }
      v56 = _R6;
        VMOV            S6, R1
        VCVT.F32.U32    S6, S6
        VDIV.F32        S0, S0, S18
      v59 = *(_DWORD *)(v9 + 4);
        VDIV.F32        S2, S2, S16
        VDIV.F32        S4, S4, S18
        VMOV            R1, S0
        VDIV.F32        S6, S6, S16
        VMOV            R2, S2
        VMOV            R3, S4
        VSTR            S6, [SP,#0xB0+var_B0]
      TextureUVCoordinateSet::TextureUVCoordinateSet(
        COERCE_FLOAT(&v60),
        _R1,
        _R2,
        _R3,
        v47,
        v55,
        v54,
        (int)v14,
        1065353216);
      v21 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v58 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        }
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (int *)(*(_QWORD *)(v9 + 24) >> 32);
      for ( i = (int *)*(_QWORD *)(v9 + 24); v22 != i; *(_DWORD *)(v24 + 28) = v67 )
        v24 = *i;
        v25 = v61;
        v26 = v62;
        v27 = v63;
        v28 = v64;
        v29 = v65;
        *(_DWORD *)v24 = *(_DWORD *)&v60;
        *(_DWORD *)(v24 + 4) = v25;
        *(_DWORD *)(v24 + 8) = v26;
        *(_DWORD *)(v24 + 12) = v27;
        *(_DWORD *)(v24 + 16) = v28;
        *(_DWORD *)(v24 + 20) = v29;
        EntityInteraction::setInteractText((int *)(v24 + 24), &v66);
        ++i;
      v8 = v49;
      _R9 = (signed int)(*(_QWORD *)(v49 + 140) >> 32) >> *(_QWORD *)(v49 + 140);
      v30 = 2 * v50 + v52 + v53 + v53 + _R9;
      if ( v30 < v55 )
        _R9 = 2 * v50 + v52 + v53;
      v31 = v56;
      v10 = v51;
      if ( v30 >= v55 )
        v31 = v56 + v51;
      v57 = v31;
        v10 = 0;
      v32 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v66 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      _R6 = v57;
      v9 += 80;
      if ( v9 == v48 )
        goto LABEL_39;
    }
    result = 0;
  return result;
}


_QWORD *__fastcall TextureAtlas::TextureAtlas(_QWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r8@1
  unsigned __int64 v5; // r6@1
  _QWORD *v6; // r4@1
  double v7; // r0@1
  unsigned int v8; // r0@1
  int v9; // r7@3
  void *v10; // r6@3
  void *v11; // r0@4
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  int v15; // [sp+Ch] [bp-44h]@4

  v4 = a2;
  v5 = __PAIR__(a3, a4);
  v6 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v6 = &off_26DCE00;
  v6[1] = v5;
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 7) = 0;
  *((_DWORD *)v6 + 8) = 1065353216;
  LODWORD(v7) = v6 + 4;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v8 = sub_119C844(v7);
  *((_DWORD *)v6 + 5) = v8;
  if ( v8 == 1 )
  {
    *((_DWORD *)v6 + 10) = 0;
    v10 = v6 + 5;
  }
  else
    if ( v8 >= 0x40000000 )
      sub_119C874();
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    _aeabi_memclr4(v10, v9);
  *((_DWORD *)v6 + 4) = v10;
  sub_119C854((int *)v6 + 11, (int *)v4);
  *((_DWORD *)v6 + 12) = *(_DWORD *)(v4 + 4);
  sub_119C884((void **)&v15, (const char *)&unk_257BC67);
  TextureAtlasItem::TextureAtlasItem((int *)v6 + 13, &v15, 0xFFu);
  v11 = (void *)(v15 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v11);
  *((_DWORD *)v6 + 23) = 0;
  *((_DWORD *)v6 + 21) = 0;
  *((_DWORD *)v6 + 22) = 0;
  *((_DWORD *)v6 + 19) = 0;
  *((_DWORD *)v6 + 20) = 0;
  *((_DWORD *)v6 + 18) = 0;
  v6[12] = (unsigned int)&unk_28898CC;
  *((_DWORD *)v6 + 26) = 0;
  *((_DWORD *)v6 + 28) = 1;
  *((_BYTE *)v6 + 116) = 0;
  *((_DWORD *)v6 + 30) = 1;
  *((_DWORD *)v6 + 31) = 1;
  *((_DWORD *)v6 + 32) = 0;
  *((_BYTE *)v6 + 136) = 0;
  *((_DWORD *)v6 + 35) = 0;
  *((_DWORD *)v6 + 36) = 0;
  *((_DWORD *)v6 + 37) = 0;
  *((_DWORD *)v6 + 38) = 0;
  *((_DWORD *)v6 + 33) = 40;
  *((_DWORD *)v6 + 27) = 28;
  AppPlatformListener::initListener((AppPlatformListener *)v6, 10.0);
  return v6;
}


void __fastcall TextureAtlas::_buildAtlas(TextureAtlas *this)
{
  TextureAtlas *v1; // r10@1
  char *v2; // r0@3
  const mce::TextureDescription *v3; // r5@3
  mce::TextureContainer *v4; // r7@5
  int v5; // r4@5
  unsigned int v10; // r5@6
  int v13; // r5@9
  unsigned int v15; // r7@9
  unsigned int v16; // r4@9
  char *v23; // r0@13
  char *v24; // r0@13
  int v25; // r9@13
  char *v35; // r0@17
  int v36; // r4@17
  char *v56; // r0@35
  unsigned int *v57; // r2@37
  signed int v58; // r1@39
  int v60; // [sp+Ch] [bp-FCh]@20
  int v61; // [sp+10h] [bp-F8h]@20
  unsigned __int64 v62; // [sp+14h] [bp-F4h]@20
  int v64; // [sp+20h] [bp-E8h]@13
  int v66; // [sp+28h] [bp-E0h]@13
  int v67; // [sp+2Ch] [bp-DCh]@7
  unsigned int v68; // [sp+30h] [bp-D8h]@7
  int v69; // [sp+34h] [bp-D4h]@5
  int v70; // [sp+38h] [bp-D0h]@13
  unsigned int v71; // [sp+3Ch] [bp-CCh]@13
  signed int v72; // [sp+40h] [bp-C8h]@13
  int v73; // [sp+44h] [bp-C4h]@8
  int v75; // [sp+4Ch] [bp-BCh]@5
  mce::ImageBuffer *v76; // [sp+50h] [bp-B8h]@7
  mce::ImageBuffer *v77; // [sp+58h] [bp-B0h]@9
  char v78; // [sp+5Ch] [bp-ACh]@4
  char *v79; // [sp+74h] [bp-94h]@2
  char *v80; // [sp+78h] [bp-90h]@2
  int v81; // [sp+7Ch] [bp-8Ch]@2
  float v82; // [sp+80h] [bp-88h]@20
  float v83; // [sp+84h] [bp-84h]@20
  unsigned int v84; // [sp+88h] [bp-80h]@20
  float v85; // [sp+8Ch] [bp-7Ch]@19
  unsigned int v86; // [sp+94h] [bp-74h]@9
  unsigned int v87; // [sp+98h] [bp-70h]@11

  v1 = this;
  if ( *((_DWORD *)this + 2) )
  {
    sub_119C854((int *)&v79, (int *)this + 24);
    v80 = v79;
    v79 = (char *)&unk_28898CC;
    v81 = 0;
    if ( mce::TextureGroup::isLoaded(*((mce::TextureGroup **)v1 + 2), (const ResourceLocation *)&v80, 0) )
    {
      v2 = mce::TextureGroup::getTexturePair(*((mce::TextureGroup **)v1 + 2), (const ResourceLocation *)&v80);
      v3 = (TextureAtlas *)((char *)v1 + 100);
    }
    else
      mce::TextureGroup::createEmptyTexture(
        (mce::TextureGroup *)&v78,
        *((const ResourceLocation **)v1 + 2),
        (const mce::TextureDescription *)&v80,
        (TextureAtlas *)((char *)v1 + 100));
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v78);
    v4 = (mce::TextureContainer *)(v2 + 64);
    v75 = (int)(v2 + 64);
    mce::TextureContainer::allocateStorage((mce::TextureContainer *)(v2 + 64), v3);
    v5 = *((_DWORD *)v1 + 30);
    v69 = v5;
    if ( v5 )
      __asm
      {
        VMOV.F32        S24, #1.0
        VLDR            S20, =0.0039216
      }
      v10 = 0;
      do
        v68 = v10;
        v76 = (mce::ImageBuffer *)mce::TextureContainer::getImage(v4, v10);
        _R8 = *((_QWORD *)v1 + 9);
        v67 = *((_QWORD *)v1 + 9) >> 32;
        if ( _R8 != v67 )
        {
          _R0 = *(_QWORD *)((char *)v1 + 140);
          v73 = _R0 + v10;
          LODWORD(_R0) = SHIDWORD(_R0) >> _R0;
          HIDWORD(_R0) = 1 << v73;
          __asm
          {
            VMOV            S4, R0
            VMOV            S0, R1
          }
          HIDWORD(_R0) = (signed int)_R0 >> v10;
            VCVT.F32.S32    S0, S0
            VMOV            S2, R1
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
            VDIV.F32        S0, S24, S0
            VNEG.F32        S2, S2
            VSTR            S4, [SP,#0x108+var_C0]
            VMUL.F32        S0, S0, S0
            VSTR            S2, [SP,#0x108+var_E4]
            VSTR            S0, [SP,#0x108+var_EC]
          do
            v13 = *(_BYTE *)(_R8 + 40);
            __asm { VLDR            S30, [R8,#0x2C] }
            v77 = (mce::ImageBuffer *)mce::TextureContainer::getImage(*(mce::TextureContainer **)(_R8 + 36), 0);
            __asm
            {
              VLDR            S17, [R8,#0xC]
              VLDR            S19, [R8,#0x10]
            }
            _R6 = **(_DWORD **)(_R8 + 24);
              VLDR            S21, [R8,#0x14]
              VLDR            S23, [R8,#8]
            v15 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v77);
            v16 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v77) + 1);
            v86 = v15 - 1;
            __asm { VMOV.F32        S27, S24 }
            if ( v16 > v15 )
              v16 = v15;
            v87 = v16 - 1;
            _R0 = *(_DWORD *)(_R6 + 20);
            _R1 = _R0 >> 16;
            _R0 = (unsigned __int16)_R0;
              VMOV            S0, R1
              VCVT.F32.U32    S16, S0
              VMOV            S0, R0
              VCVT.F32.U32    S18, S0
              VLDR            S26, [R6,#4]
              VMOV.F32        S0, #2.0
              VLDR            S28, [R6,#8]
              VLDR            S29, [R6,#0xC]
              VLDR            S25, [R6,#0x10]
            if ( !_ZF )
              __asm { VMOVNE.F32      S27, S0 }
            _R0 = mce::ImageBuffer::getImageDescription(v76);
              VLDR            S0, [SP,#0x108+var_C0]
              VDIV.F32        S22, S0, S18
              VLDR            S0, [R0]
              VSUB.F32        S31, S26, S22
              VCVT.F32.U32    S0, S0
              VMUL.F32        S0, S0, S31
              VCVTR.U32.F32   S18, S0
              VSUB.F32        S0, S29, S26
              VADD.F32        S2, S22, S22
              VMUL.F32        S0, S0, S27
              VADD.F32        S2, S31, S2
              VADD.F32        S0, S2, S0
              VLDR            S2, [R0]
              VCVT.F32.U32    S2, S2
              VMUL.F32        S0, S2, S0
              VCVTR.U32.F32   S26, S0
              VDIV.F32        S31, S0, S16
              VLDR            S0, [R0,#4]
              VSUB.F32        S29, S28, S31
              VMUL.F32        S0, S0, S29
              VCVTR.U32.F32   S16, S0
              VSUB.F32        S0, S25, S28
              VADD.F32        S2, S31, S31
              VADD.F32        S2, S29, S2
              VLDR            S2, [R0,#4]
              VCVTR.U32.F32   S28, S0
            v23 = mce::ImageBuffer::getImageDescription(v76);
            v72 = mce::ImageDescription::getStrideFromFormat(*((_DWORD *)v23 + 2));
            v24 = mce::ImageBuffer::getImageDescription(v77);
            v25 = mce::ImageDescription::getStrideFromFormat(*((_DWORD *)v24 + 2));
              VMOV            R5, S16
              VMOV            R6, S28
              VMOV            R2, S18
              VMOV            R11, S26
            _R0 = _R6 - _R5;
            v70 = _R2;
            __asm { VMOV            S0, R0 }
            _R0 = _R11 - _R2;
              VCVT.F32.U32    S26, S0
              VCVT.F32.U32    S28, S0
            _R0 = v16 >> v73;
            _R0 = v15 >> v73;
              VCVT.F32.U32    S25, S0
              VCVT.F32.U32    S27, S0
            v71 = mce::ImageBuffer::get(v76, 0);
            v4 = (mce::TextureContainer *)v75;
            v64 = _R11;
            v66 = _R6;
            if ( _R6 != _R5 )
              __asm
              {
                VDIV.F32        S22, S24, S26
                VDIV.F32        S31, S24, S28
                VCVT.F32.U32    S0, S16
                VCVT.F32.U32    S2, S18
                VLDR            S4, [SP,#0x108+var_E4]
                VSUB.F32        S18, S24, S30
                VSUB.F32        S0, S4, S0
                VSUB.F32        S26, S4, S2
                VSTR            S0, [SP,#0x108+var_100]
              }
              do
                if ( _R11 != v70 )
                {
                  __asm
                  {
                    VMOV            S0, R5
                    VCVT.F32.U32    S0, S0
                    VLDR            S2, [SP,#0x108+var_100]
                  }
                  _R6 = v70;
                    VADD.F32        S0, S2, S0
                    VDIV.F32        S29, S0, S25
                  do
                    v35 = mce::ImageBuffer::getImageDescription(v76);
                    __asm
                    {
                      VMOV            S0, R6
                      VCVT.F32.U32    S0, S0
                      VADD.F32        S0, S26, S0
                    }
                    v36 = v71 + (_R6 + *(_DWORD *)v35 * _R5) * v72;
                      VDIV.F32        S16, S0, S27
                      VSTR            S16, [SP,#0x108+var_7C]
                      VSTR            S29, [SP,#0x108+var_78]
                    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                      sub_F4360C(v36, (int)&v85, v77, v25, (int)&v86);
                      _R1 = *(_BYTE *)(v36 + 1);
                      _R2 = *(_BYTE *)(v36 + 2);
                      _R3 = *(_BYTE *)(v36 + 3);
                      _R0 = *(_BYTE *)v36;
                      __asm
                      {
                        VMOV            S4, R1
                        VMOV            S2, R2
                        VMOV            S0, R3
                        VCVT.F32.U32    S0, S0
                        VCVT.F32.U32    S2, S2
                        VCVT.F32.U32    S6, S4
                        VMOV            S4, R0
                        VCVT.F32.U32    S8, S4
                        VMUL.F32        S4, S0, S20
                        VMUL.F32        S0, S2, S20
                        VMUL.F32        S2, S6, S20
                        VMUL.F32        S6, S8, S20
                      }
                    else
                      v60 = v71 + (_R6 + *(_DWORD *)v35 * _R5) * v72;
                      v61 = _R6;
                      _R4 = 0;
                      v75 = (int)v4;
                      _R7 = 0;
                      v62 = __PAIR__((unsigned int)v1, _R5);
                      _R10 = 0;
                      v84 = 0;
                      _R11 = 0;
                      v82 = 0.0;
                      v83 = 0.0;
                      _R6 = 0;
                      if ( v73 != 31 )
                        do
                        {
                          __asm { VMOV            S0, R4 }
                          _R5 = 0;
                          __asm
                          {
                            VCVT.F32.S32    S0, S0
                            VMUL.F32        S0, S0, S22
                            VADD.F32        S28, S0, S29
                          }
                          do
                            __asm
                            {
                              VMOV            S0, R5
                              VCVT.F32.S32    S0, S0
                              VMUL.F32        S0, S0, S31
                              VADD.F32        S0, S0, S16
                              VSTR            S0, [SP,#0x108+var_88]
                              VSTR            S28, [SP,#0x108+var_84]
                            }
                            sub_F4360C((int)&v84, (int)&v82, v77, v25, (int)&v86);
                              VMOV            S10, R10
                              VMOV            S8, R7
                            ++_R5;
                            __asm { VMOV            S12, R6 }
                            _R2 = (v84 >> 16) & 0xFF;
                            _R1 = v84 >> 24;
                              VMOV            S2, R1
                              VMOV            S0, R2
                            _R2 = (unsigned __int8)v84;
                              VMOV            S4, R2
                              VCVT.F32.U32    S0, S0
                            _R0 = (v84 & 0xFF00) >> 8;
                              VCVT.F32.U32    S2, S2
                              VMOV            S6, R0
                              VCVT.F32.U32    S4, S4
                              VCVT.F32.U32    S6, S6
                              VMUL.F32        S0, S0, S20
                              VMUL.F32        S2, S2, S20
                              VMUL.F32        S4, S4, S20
                              VMUL.F32        S6, S6, S20
                              VADD.F32        S0, S0, S8
                              VADD.F32        S2, S2, S10
                              VMOV            S10, R11
                              VADD.F32        S4, S4, S12
                              VADD.F32        S6, S6, S10
                              VMOV            R7, S0
                              VMOV            R10, S2
                              VMOV            R6, S4
                              VMOV            R11, S6
                          while ( !_ZF );
                          ++_R4;
                        }
                        while ( _R4 != 1 << v73 );
                        VMOV            S2, R11
                        VLDR            S8, [SP,#0x108+var_EC]
                        VMOV            S0, R7
                      v4 = (mce::TextureContainer *)v75;
                      __asm { VMOV            S4, R10 }
                      _R11 = v64;
                      __asm { VMOV            S6, R6 }
                      v1 = (TextureAtlas *)HIDWORD(v62);
                      _R5 = v62;
                      __asm { VMUL.F32        S4, S4, S8 }
                      _R6 = v61;
                      v36 = v60;
                        VMUL.F32        S0, S0, S8
                        VMUL.F32        S2, S2, S8
                        VMUL.F32        S6, S6, S8
                      VLDR            S8, [R8,#0x40]
                      VCMPE.F32       S21, #0.0
                      VLDR            S10, [R8,#0x44]
                      VMUL.F32        S14, S4, S21
                      VLDR            S12, [R8,#0x48]
                      VMUL.F32        S8, S8, S6
                      VMUL.F32        S2, S10, S2
                      VMRS            APSR_nzcv, FPSCR
                      VMUL.F32        S0, S12, S0
                      VMOV            R0, S4
                      VCMPE.F32       S30, #0.0
                      VMUL.F32        S12, S8, S23
                      VMUL.F32        S10, S2, S17
                      VMUL.F32        S6, S0, S19
                      VSUB.F32        S12, S12, S8
                      VSUB.F32        S10, S10, S2
                      VSUB.F32        S6, S6, S0
                      VMUL.F32        S12, S12, S14
                    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                      _R0 = 1065353216;
                      VMUL.F32        S10, S10, S14
                      VMUL.F32        S6, S6, S14
                      VADD.F32        S6, S6, S0
                      VADD.F32        S0, S10, S2
                      VADD.F32        S2, S12, S8
                        VLDR            S14, [R8,#0x3C]
                        VLDR            S8, [R8,#0x30]
                        VMUL.F32        S0, S0, S18
                        VMUL.F32        S4, S4, S18
                        VLDR            S10, [R8,#0x34]
                        VMUL.F32        S14, S14, S30
                        VLDR            S12, [R8,#0x38]
                        VMUL.F32        S10, S10, S30
                        VMUL.F32        S2, S2, S18
                        VMUL.F32        S8, S8, S30
                        VADD.F32        S4, S14, S4
                        VADD.F32        S0, S10, S0
                        VADD.F32        S2, S8, S2
                        VMOV            R0, S4
                        VMUL.F32        S4, S6, S18
                        VMUL.F32        S6, S12, S30
                        VADD.F32        S6, S6, S4
                    __asm { VLDR            S4, =255.0 }
                    ++_R6;
                      VMOV.F32        S8, S4
                      VMUL.F32        S2, S2, S8
                      VMUL.F32        S4, S6, S8
                      VMOV            S6, R0
                      VMUL.F32        S0, S0, S8
                      VMUL.F32        S6, S6, S8
                      VCVTR.U32.F32   S2, S2
                      VCVTR.U32.F32   S4, S4
                      VCVTR.U32.F32   S0, S0
                      VMOV            R0, S2
                    *(_BYTE *)v36 = _R0;
                      VMOV            R0, S0
                      VCVTR.U32.F32   S2, S6
                    *(_BYTE *)(v36 + 1) = _R0;
                    __asm { VMOV            R0, S4 }
                    *(_BYTE *)(v36 + 2) = _R0;
                    __asm { VMOV            R0, S2 }
                    *(_BYTE *)(v36 + 3) = _R0;
                  while ( !_ZF );
                }
                ++_R5;
              while ( _R5 != v66 );
            _R8 += 80;
            v5 = v69;
            v10 = v68;
          while ( _R8 != v67 );
        }
        ++v10;
      while ( v10 != v5 );
    v56 = v80 - 12;
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
      else
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
  }
}


void __fastcall TextureAtlas::_loadElement(int a1, Json::Value *this, int a3, int a4, int a5)
{
  Json::Value *v5; // r6@1
  int v7; // r5@1
  int v12; // r4@2
  char *v13; // r0@2
  char *v14; // r0@3
  void *v15; // r0@4
  int v16; // r4@5
  void *v17; // r0@5
  Json::Value *v18; // r0@6
  int v20; // r12@6
  int v21; // r2@6
  int v22; // r3@6
  int v23; // r7@6
  Json::Value *v24; // r0@6
  Json::Value *v25; // r0@6
  int v27; // r1@6
  int v29; // r1@6
  char *v34; // r0@7
  void *v35; // r0@9
  unsigned int *v36; // r2@10
  signed int v37; // r1@12
  char *v38; // r0@15
  char *v39; // r0@16
  void *v40; // r0@17
  int v41; // r12@18
  int v42; // r2@18
  int v43; // r3@18
  int v44; // r7@18
  int v45; // r1@18
  float v46; // r2@18
  int v47; // r3@18
  int v48; // r0@18
  unsigned int *v49; // r2@20
  signed int v50; // r1@22
  unsigned int *v51; // r2@24
  signed int v52; // r1@26
  unsigned int *v53; // r2@28
  signed int v54; // r1@30
  unsigned int *v55; // r2@32
  signed int v56; // r1@34
  unsigned int *v57; // r2@36
  signed int v58; // r1@38
  unsigned int *v59; // r2@40
  signed int v60; // r1@42
  unsigned int *v61; // r2@44
  signed int v62; // r1@46
  unsigned int *v63; // r2@48
  signed int v64; // r1@50
  int v65; // [sp+4h] [bp-7Ch]@15
  char *v66; // [sp+8h] [bp-78h]@15
  char *v67; // [sp+Ch] [bp-74h]@15
  int v68; // [sp+10h] [bp-70h]@15
  char *nptr; // [sp+14h] [bp-6Ch]@7
  char v70; // [sp+18h] [bp-68h]@6
  char v71; // [sp+28h] [bp-58h]@6
  int v72; // [sp+40h] [bp-40h]@5
  int v73; // [sp+44h] [bp-3Ch]@5
  int v74; // [sp+4Ch] [bp-34h]@2
  char *v75; // [sp+50h] [bp-30h]@2
  char *v76; // [sp+54h] [bp-2Ch]@2
  int v77; // [sp+58h] [bp-28h]@2

  v5 = this;
  _R7 = a3;
  v7 = a4;
  __asm { VMOV            S16, R7 }
  if ( Json::Value::isObject(this) == 1 )
  {
    v12 = Json::Value::operator[](v5, "path");
    sub_119C884((void **)&v74, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v75, v12, &v74);
    v76 = v75;
    v75 = (char *)&unk_28898CC;
    v77 = 0;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)a5,
      (int *)&v76);
    *(_DWORD *)(a5 + 4) = v77;
    v13 = v76 - 12;
    if ( (int *)(v76 - 12) != &dword_28898C0 )
    {
      v49 = (unsigned int *)(v76 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      }
      else
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    }
    v14 = v75 - 12;
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v75 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v74 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = Json::Value::operator[](v5, "overlay_color");
    sub_119C884((void **)&v72, (const char *)&unk_257BC67);
    Json::Value::asString(&v73, v16, &v72);
    v17 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v72 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = (Json::Value *)Json::Value::operator[](v5, "mip_fade_amount");
    _R0 = Json::Value::asFloat(v18, *(float *)&_R7);
    __asm { VMOV            S0, R0 }
    v20 = a5 + 60;
    __asm { VSTR            S0, [R8,#0x38] }
    v21 = *(_DWORD *)(v7 + 4);
    v22 = *(_DWORD *)(v7 + 8);
    v23 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)v20 = *(_DWORD *)v7;
    *(_DWORD *)(v20 + 4) = v21;
    *(_DWORD *)(v20 + 8) = v22;
    *(_DWORD *)(v20 + 12) = v23;
    v24 = (Json::Value *)Json::Value::operator[](v5, "mip_fade_color");
    JsonUtil::parseValue<Color>(v24);
    v25 = (Json::Value *)Json::Value::operator[](v5, "tint_color");
    JsonUtil::parseValue<Color>(v25);
    __asm
      VMOV.F64        D0, #1.0
      VMOV            R2, R3, D0
    Json::Value::Value((Json::Value *)&v70, v27, _R2);
    Json::Value::get((Json::Value *)&v71, (const char *)v5, (const Json::Value *)"weight", (const Json::Value *)&v70);
    _R0 = Json::Value::asFloat((Json::Value *)&v71, 0.0);
      VMOV            S0, R0
      VSTR            S0, [R8,#0x5C]
    Json::Value::~Value((Json::Value *)&v71);
    Json::Value::~Value((Json::Value *)&v70);
    v29 = v73;
    if ( *(_DWORD *)(v73 - 12) )
      sub_119C8C4((void **)&nptr, &v73, 1u, 0xFFFFFFFF);
      _R0 = strtoul(nptr, 0, 16);
      _R1 = (unsigned __int16)_R0 >> 8;
      _R2 = (_R0 >> 16) & 0xFF;
      __asm
        VLDR            S8, =0.0039216
        VMOV            S0, R2
      _R2 = (unsigned __int8)_R0;
      _R0 >>= 24;
        VMOV            S2, R1
        VMOV            S6, R0
        VMOV            S4, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S6, S6
        VMUL.F32        S0, S0, S8
        VMUL.F32        S2, S2, S8
        VMUL.F32        S4, S4, S8
        VMUL.F32        S6, S6, S8
        VSTR            S0, [R8,#8]
        VSTR            S2, [R8,#0xC]
        VSTR            S4, [R8,#0x10]
        VSTR            S6, [R8,#0x14]
      v34 = nptr - 12;
      if ( (int *)(nptr - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(nptr - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        }
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v34);
      *(_DWORD *)(a5 + 20) = 1065353216;
      v29 = v73;
    v35 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v29 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v35);
  }
  else if ( Json::Value::isString(v5) == 1 )
    sub_119C884((void **)&v65, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v66, (int)v5, &v65);
    v67 = v66;
    v66 = (char *)&unk_28898CC;
    v68 = 0;
      (int *)&v67);
    *(_DWORD *)(a5 + 4) = v68;
    v38 = v67 - 12;
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v67 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v38);
    v39 = v66 - 12;
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v66 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v39);
    v40 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v65 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v40);
    v41 = a5 + 60;
    __asm { VSTR            S16, [R8,#0x38] }
    v42 = *(_DWORD *)(v7 + 4);
    v43 = *(_DWORD *)(v7 + 8);
    v44 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)v41 = *(_DWORD *)v7;
    *(_DWORD *)(v41 + 4) = v42;
    *(_DWORD *)(v41 + 8) = v43;
    *(_DWORD *)(v41 + 12) = v44;
    v45 = Color::WHITE;
    v46 = unk_283E614;
    v47 = qword_283E618;
    *(_DWORD *)(a5 + 88) = HIDWORD(qword_283E618);
    v48 = a5 + 76;
    *(_DWORD *)v48 = v45;
    *(float *)(v48 + 4) = v46;
    *(_DWORD *)(v48 + 8) = v47;
    *(_DWORD *)(a5 + 92) = 1065353216;
}


void __fastcall TextureAtlas::_addTile(float a1, int a2, int a3, int a4, int a5, int a6, __int64 a7, __int64 a9)
{
  TextureAtlas::_addTile(a1, a2, a3, a4, a5, a7, a9);
}


Json::Value *__fastcall TextureAtlas::loadMetaFile(TextureAtlas *this)
{
  _DWORD *v2; // r4@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  TextureAtlasItem *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  int v9; // r10@13
  int v10; // r6@13
  int v11; // r4@14
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  void *v14; // r0@23
  int *v15; // r0@25
  int v16; // r11@27
  int v17; // r6@27
  int v18; // r4@28
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  void *v21; // r0@37
  int *v22; // r0@39
  unsigned int *v23; // r2@43
  signed int v24; // r1@45
  unsigned int *v25; // r2@47
  signed int v26; // r1@49
  int v27; // r0@61
  _DWORD *v28; // r8@61
  int v29; // r1@61
  void *v30; // r0@61
  int *v31; // r0@62
  signed int v32; // r0@65
  TextureAtlasTile *v33; // r5@69
  void *v34; // r0@69
  void *v35; // r0@70
  const Json::Value *v36; // r0@71
  int i; // r4@71
  int v38; // r8@71
  __int64 j; // r10@74
  __int64 v40; // r0@77
  __int64 v45; // ST08_8@79
  mce::TextureGroup *v46; // r1@81
  unsigned int v48; // r0@88
  unsigned int *v49; // r8@88
  unsigned int *v50; // r7@88
  unsigned int v51; // r4@88
  TextureAtlasTile *v52; // r5@88
  unsigned int v53; // r6@89
  __int64 v54; // r10@89
  unsigned int v55; // r0@89
  unsigned int v56; // r1@90
  TextureAtlas *v57; // r0@92
  __int64 v58; // kr18_8@96
  unsigned int v59; // r5@99
  int v60; // r10@100
  unsigned int *v61; // r2@101
  signed int v62; // r1@103
  void *v63; // r0@109
  int *v64; // r0@111
  TextureAtlas *v65; // r0@115
  AppPlatform **v66; // r0@120
  unsigned int *v67; // r2@121
  signed int v68; // r1@123
  unsigned int *v69; // r2@125
  signed int v70; // r1@127
  __int64 v71; // r0@130
  unsigned int v72; // r1@131
  signed int v73; // r3@142
  signed int v74; // r7@144
  signed int v75; // r2@144
  unsigned int v76; // r3@150
  bool v77; // zf@152
  unsigned int v78; // r2@158
  unsigned int v79; // r3@158
  signed int v80; // r0@158
  int v81; // r1@162 OVERLAPPED
  int v82; // r2@162 OVERLAPPED
  int *v83; // r3@163
  int v84; // r3@163
  unsigned int v85; // r0@164
  unsigned int v86; // r0@165
  int v87; // r10@168
  int *v88; // r11@169
  signed int v89; // r6@169
  int v90; // r5@169
  unsigned int *v91; // r2@170
  signed int v92; // r1@172
  _QWORD *v93; // r1@178
  __int64 v94; // r0@180
  int v95; // r10@181
  int v96; // r0@182
  _DWORD *v97; // r1@182
  int v98; // r8@182
  _DWORD *v99; // r11@182
  int v100; // r3@183
  int v101; // r4@183
  int v102; // r5@183
  int v103; // r6@183
  int v104; // r7@183
  int v105; // r6@187
  char *v106; // r7@187 OVERLAPPED
  char *v107; // r8@187 OVERLAPPED
  int v108; // r4@188
  int v109; // r6@188
  unsigned int *v110; // r2@190
  signed int v111; // r1@192
  int v112; // r1@198
  void *v113; // r0@198
  void *v114; // r0@207
  int v115; // r4@209
  int v116; // r6@209
  unsigned int *v117; // r2@211
  signed int v118; // r1@213
  unsigned int *v119; // r2@215
  signed int v120; // r1@217
  int v121; // r1@227
  void *v122; // r0@227
  int *v123; // r0@228
  int v125; // [sp+0h] [bp-1A0h]@0
  __int64 v126; // [sp+10h] [bp-190h]@0
  int v127; // [sp+1Ch] [bp-184h]@178
  int **v128; // [sp+20h] [bp-180h]@178
  int **v129; // [sp+24h] [bp-17Ch]@168
  _QWORD *v130; // [sp+2Ch] [bp-174h]@178
  _QWORD *v131; // [sp+34h] [bp-16Ch]@180
  TextureAtlasTile *v132; // [sp+3Ch] [bp-164h]@88
  int v133; // [sp+3Ch] [bp-164h]@181
  unsigned __int64 *v134; // [sp+40h] [bp-160h]@13
  int v135; // [sp+40h] [bp-160h]@179
  int v136; // [sp+44h] [bp-15Ch]@169
  int v137; // [sp+48h] [bp-158h]@178
  char *v138; // [sp+4Ch] [bp-154h]@182
  char *v139; // [sp+50h] [bp-150h]@187
  char v140; // [sp+58h] [bp-148h]@71
  int v141; // [sp+70h] [bp-130h]@69
  int v142; // [sp+74h] [bp-12Ch]@69
  char v143; // [sp+78h] [bp-128h]@69
  char v144; // [sp+88h] [bp-118h]@69
  char v145; // [sp+98h] [bp-108h]@65
  char v146; // [sp+A8h] [bp-F8h]@65
  char v147; // [sp+B8h] [bp-E8h]@60
  char v148; // [sp+C8h] [bp-D8h]@59
  int v149; // [sp+DCh] [bp-C4h]@41
  int v150; // [sp+E0h] [bp-C0h]@41
  char v151; // [sp+E8h] [bp-B8h]@41
  char v152; // [sp+158h] [bp-48h]@41
  char v153; // [sp+16Ch] [bp-34h]@96
  int v154; // [sp+170h] [bp-30h]@97
  unsigned int v155; // [sp+174h] [bp-2Ch]@96

  _R9 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 6);
  while ( v2 )
  {
    v5 = v2;
    v6 = (TextureAtlasItem *)(v2 + 2);
    v2 = (_DWORD *)*v2;
    TextureAtlasItem::~TextureAtlasItem(v6);
    v7 = v5[1];
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*((_QWORD *)_R9 + 2), 4 * (*((_QWORD *)_R9 + 2) >> 32));
  *((_DWORD *)_R9 + 6) = 0;
  *((_DWORD *)_R9 + 7) = 0;
  v9 = *((_DWORD *)_R9 + 18);
  v134 = (unsigned __int64 *)((char *)_R9 + 72);
  v10 = *((_DWORD *)_R9 + 19);
  if ( v10 != v9 )
    v11 = *((_DWORD *)_R9 + 18);
    do
      v14 = *(void **)(v11 + 24);
      if ( v14 )
        operator delete(v14);
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v11 += 80;
    while ( v11 != v10 );
  *((_DWORD *)_R9 + 19) = v9;
  v16 = *((_DWORD *)_R9 + 21);
  v17 = *((_DWORD *)_R9 + 22);
  if ( v17 != v16 )
    v18 = *((_DWORD *)_R9 + 21);
      std::_Destroy_aux<false>::__destroy<std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>> *>(
        (unsigned __int64 *)*(_QWORD *)(v18 + 8),
        (unsigned __int64 *)(*(_QWORD *)(v18 + 8) >> 32));
      v21 = *(void **)(v18 + 8);
      if ( v21 )
        operator delete(v21);
      v22 = (int *)(*(_DWORD *)v18 - 12);
      if ( v22 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v18 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v18 += 20;
    while ( v18 != v17 );
  *((_DWORD *)_R9 + 22) = v16;
  Json::Value::Value(&v152, 0);
  Json::Reader::Reader((Json::Reader *)&v151);
  (*(void (__fastcall **)(int *))(**((_DWORD **)_R9 + 3) + 16))(&v149);
  while ( v149 != v150 )
    Json::Value::Value(&v148, 0);
    if ( Json::Reader::parse((int)&v151, (int *)(v150 - 4), (int)&v148, 1) == 1 )
      JsonUtil::patchJson((JsonUtil *)&v147, (const Json::Value *)&v148, (const Json::Value *)&v152, 32);
      Json::Value::operator=((int)&v152, (const Json::Value *)&v147);
      Json::Value::~Value((Json::Value *)&v147);
    v27 = v150;
    v28 = (_DWORD *)(v150 - 8);
    v150 -= 8;
    v29 = *(_DWORD *)(v27 - 4);
    v30 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v29 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    v31 = (int *)(*v28 - 12);
    if ( v31 != &dword_28898C0 )
      v25 = (unsigned int *)(*v28 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
    Json::Value::~Value((Json::Value *)&v148);
  if ( mce::RenderDevice::checkFeatureSupport() == 1 )
    Json::Value::Value((Json::Value *)&v145, 1);
    Json::Value::get((Json::Value *)&v146, &v152, (const Json::Value *)"num_mip_levels", (const Json::Value *)&v145);
    *((_DWORD *)_R9 + 30) = Json::Value::asInt((Json::Value *)&v146, 0);
    Json::Value::~Value((Json::Value *)&v146);
    Json::Value::~Value((Json::Value *)&v145);
    v32 = *((_DWORD *)_R9 + 30);
    if ( !v32 )
      v32 = 1;
  else
    v32 = 1;
  *((_DWORD *)_R9 + 30) = v32;
  Json::Value::Value((Json::Value *)&v143, 0);
  Json::Value::get((Json::Value *)&v144, &v152, (const Json::Value *)"padding", (const Json::Value *)&v143);
  *((_DWORD *)_R9 + 36) = Json::Value::asInt((Json::Value *)&v144, 0);
  Json::Value::~Value((Json::Value *)&v144);
  Json::Value::~Value((Json::Value *)&v143);
  v33 = (TextureAtlasTile *)Json::Value::operator[]((Json::Value *)&v152, "texture_name");
  sub_119C884((void **)&v141, (const char *)&unk_257BC67);
  Json::Value::asString(&v142, (int)v33, &v141);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R9 + 24,
    &v142);
  v34 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v142 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
    else
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v141 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v36 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v152, "texture_data");
  Json::Value::Value((Json::Value *)&v140, v36);
  TextureAtlas::_loadAtlasNodes(*(float *)&_R9, (int)&v140, (int)_R9 + 84);
  Json::Value::~Value((Json::Value *)&v140);
  v38 = *(_QWORD *)((char *)_R9 + 84) >> 32;
  for ( i = *(_QWORD *)((char *)_R9 + 84); i != v38; i += 20 )
    for ( j = *(_QWORD *)(i + 8); (_DWORD)j != HIDWORD(j); LODWORD(j) = j + 12 )
      v40 = *(_QWORD *)j;
      if ( (_DWORD)v40 != HIDWORD(v40) )
        v33 = (TextureAtlasTile *)-HIDWORD(v40);
        _R7 = v40 + 56;
          __asm
          {
            VLDR            S0, [R9,#0x78]
            VCVT.F32.U32    S0, S0
            VLDR            S2, [R7]
            VDIV.F32        S0, S2, S0
          }
          LODWORD(v45) = _R7 + 20;
          HIDWORD(v45) = _R7 - 56;
          LODWORD(v126) = _R7 - 48;
          __asm { VSTR            S0, [SP,#0x1A0+var_1A0] }
          TextureAtlas::_addTile(
            COERCE_FLOAT(_R7 - 48),
            (int)v134,
            _R7 - 32,
            *(_BYTE *)(i + 4),
            v125,
            _R7 + 4,
            v45,
            v126);
          _R7 += 96;
        while ( (TextureAtlasTile *)((char *)v33 + _R7) != (TextureAtlasTile *)56 );
  v46 = (mce::TextureGroup *)*((_DWORD *)_R9 + 2);
  _ZF = v46 == 0;
  if ( v46 )
    i = *((_QWORD *)_R9 + 9) >> 32;
    v33 = (TextureAtlasTile *)*((_QWORD *)_R9 + 9);
    _ZF = v33 == (TextureAtlasTile *)i;
  if ( !_ZF )
    while ( 1 )
      TextureAtlasTile::loadTexture(v33, v46);
      v33 = (TextureAtlasTile *)((char *)v33 + 80);
      if ( (TextureAtlasTile *)i == v33 )
        break;
      v46 = (mce::TextureGroup *)*((_DWORD *)_R9 + 2);
  v48 = 1;
  *((_DWORD *)_R9 + 26) = 1;
  v49 = (unsigned int *)((char *)_R9 + 104);
  *((_DWORD *)_R9 + 25) = 1;
  v50 = (unsigned int *)((char *)_R9 + 100);
  v51 = 0;
  v52 = (TextureAtlasTile *)*((_QWORD *)_R9 + 9);
  v132 = (TextureAtlasTile *)(*((_QWORD *)_R9 + 9) >> 32);
  if ( v52 == v132 )
    v56 = 1;
      v53 = TextureAtlasTile::getWidth(v52);
      v54 = *(_QWORD *)((char *)_R9 + 140);
      v55 = TextureAtlasTile::getHeight(v52);
      v52 = (TextureAtlasTile *)((char *)v52 + 80);
      v51 += (v55 + 2 * ((signed int)(*(_QWORD *)((char *)_R9 + 140) >> 32) >> *(_QWORD *)((char *)_R9 + 140)))
           * (v53 + 2 * (SHIDWORD(v54) >> v54));
    while ( v132 != v52 );
    v48 = *v49;
    v56 = *v50;
  while ( v48 * v56 < v51 )
    _CF = v56 >= v48;
    _ZF = v56 == v48;
    v57 = (TextureAtlas *)((char *)_R9 + 100);
    if ( !_ZF && _CF )
      v57 = (TextureAtlas *)((char *)_R9 + 104);
    *(_DWORD *)v57 *= 2;
  v58 = *((_QWORD *)_R9 + 9);
  std::_Temporary_buffer<__gnu_cxx::__normal_iterator<TextureAtlasTile *,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>>>,TextureAtlasTile>::_Temporary_buffer(
    (int)&v153,
    (int *)*((_QWORD *)_R9 + 9),
    *((_QWORD *)_R9 + 9) >> 32);
  if ( v155 )
    sub_F44334((TextureAtlasTile *)v58, (TextureAtlasTile *)HIDWORD(v58), v155, v154, 0);
    sub_F442B8((int *)v58, (TextureAtlasTile *)HIDWORD(v58), 0);
  v59 = v155;
  if ( v154 )
    v60 = v155 + 80 * v154;
      v63 = *(void **)(v59 + 24);
      if ( v63 )
        operator delete(v63);
      v64 = (int *)(*(_DWORD *)v59 - 12);
      if ( v64 != &dword_28898C0 )
        v61 = (unsigned int *)(*(_DWORD *)v59 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v64);
      v59 += 80;
    while ( v59 != v60 );
    v59 = v155;
  operator delete((void *)v59);
  while ( !TextureAtlas::_tryAssignUVs(
             (int)_R9,
             *(_QWORD *)((char *)_R9 + 100),
             *(_QWORD *)((char *)_R9 + 100) >> 32,
             v134) )
    v65 = (TextureAtlas *)((char *)_R9 + 100);
    if ( *v50 > *v49 )
      v65 = (TextureAtlas *)((char *)_R9 + 104);
    *(_DWORD *)v65 *= 2;
  *((_DWORD *)_R9 + 35) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v66 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v66 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v71 = AppPlatform::getTotalMemory(*v66);
  if ( SHIDWORD(v71) <= 3 )
    if ( v71 <= 0 )
      v73 = 0;
      if ( (signed int)v71 < 0 )
        v73 = 1;
      v74 = 0;
      v75 = 0;
      if ( SHIDWORD(v71) > 0 )
        v74 = 1;
      if ( !HIDWORD(v71) )
        v74 = v73;
      if ( v74 )
        v72 = 0x4000000;
        v76 = (unsigned int)v71 >> 30;
        if ( 0 != (unsigned int)v71 >> 30 )
          v76 = 1;
        v77 = HIDWORD(v71) == 0;
        if ( SHIDWORD(v71) > 0 )
          v75 = 1;
        v72 = 0x100000;
        if ( v77 )
          v75 = v76;
        if ( v75 )
          v72 = 0x1000000;
      v72 = 0x10000000;
    v72 = 0x40000000;
  v78 = *(_QWORD *)((char *)_R9 + 100) >> 32;
  v79 = *(_QWORD *)((char *)_R9 + 100);
  v80 = *((_DWORD *)_R9 + 35);
  if ( v78 * v79 > v72 )
      v79 >>= 1;
      v78 >>= 1;
      ++v80;
    while ( v78 * v79 > v72 );
    *((_DWORD *)_R9 + 35) = v80;
    *((_DWORD *)_R9 + 25) = v79;
    *((_DWORD *)_R9 + 26) = v78;
  if ( v80 >= 1 )
    for ( *(_QWORD *)&v81 = *((_QWORD *)_R9 + 9);
          v82 != v81;
          *(_WORD *)(v84 + 20) = (unsigned int)*(_WORD *)(v84 + 20) >> v80 )
      v83 = *(int **)(v81 + 24);
      v81 += 80;
      v84 = *v83;
      *(_WORD *)(v84 + 22) = (unsigned int)*(_WORD *)(v84 + 22) >> v80;
    v85 = *((_DWORD *)_R9 + 30);
    if ( v85 > 4 )
      v86 = v85 >> *((_DWORD *)_R9 + 35);
      if ( v86 < 4 )
        v86 = 4;
      *((_DWORD *)_R9 + 30) = v86;
  v87 = *(_QWORD *)((char *)_R9 + 84);
  v129 = (int **)(*(_QWORD *)((char *)_R9 + 84) >> 32);
  if ( (int **)v87 != v129 )
    v88 = &v136;
    v89 = -1431655765;
    v90 = 0;
      TextureAtlasItem::TextureAtlasItem(
        v88,
        (int *)v87,
        ((signed int)((*(_QWORD *)(v87 + 8) >> 32) - *(_QWORD *)(v87 + 8)) >> 2) * v89);
      v137 = v90;
      v127 = v90;
      v93 = (_QWORD *)*(_QWORD *)(v87 + 8);
      v128 = (int **)v87;
      v130 = (_QWORD *)(*(_QWORD *)(v87 + 8) >> 32);
      if ( v93 != v130 )
        v135 = 0;
          v131 = v93;
          v94 = *v93;
          if ( (_DWORD)v94 != HIDWORD(v94) )
            v95 = v94 + 48;
            v133 = -HIDWORD(v94);
            do
            {
              *(_DWORD *)(v95 - 24) = *(_DWORD *)(v95 + 44);
              v96 = (int)&v138[12 * v135];
              v97 = (_DWORD *)(v95 - 24);
              v99 = (_DWORD *)(v96 + 4);
              v98 = *(_DWORD *)(v96 + 4);
              if ( v98 == *(_DWORD *)(v96 + 8) )
              {
                std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>::_M_emplace_back_aux<TextureUVCoordinateSet const&>(
                  (unsigned __int64 *)v96,
                  (int)v97);
              }
              else
                v100 = *(_DWORD *)(v95 - 20);
                v101 = *(_DWORD *)(v95 - 16);
                v102 = *(_DWORD *)(v95 - 12);
                v103 = *(_DWORD *)(v95 - 8);
                v104 = *(_DWORD *)(v95 - 4);
                *(_DWORD *)v98 = *v97;
                *(_DWORD *)(v98 + 4) = v100;
                *(_DWORD *)(v98 + 8) = v101;
                *(_DWORD *)(v98 + 12) = v102;
                *(_DWORD *)(v98 + 16) = v103;
                *(_DWORD *)(v98 + 20) = v104;
                sub_119C854((int *)(v98 + 24), (int *)v95);
                *(_DWORD *)(v98 + 28) = *(_DWORD *)(v95 + 4);
                *v99 += 32;
              v95 += 96;
            }
            while ( v133 + v95 != 48 );
          ++v135;
          v93 = (_QWORD *)((char *)v131 + 12);
        while ( (_QWORD *)((char *)v131 + 12) != v130 );
      v105 = std::__detail::_Map_base<std::string,std::pair<std::string const,TextureAtlasItem>,std::allocator<std::pair<std::string const,TextureAtlasItem>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               (int)_R9 + 16,
               v128);
      v88 = &v136;
      EntityInteraction::setInteractText((int *)v105, &v136);
      *(_DWORD *)(v105 + 4) = v137;
      std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
        v105 + 8,
        (unsigned __int64 *)&v138);
      *(_QWORD *)&v106 = *(_QWORD *)&v138;
      if ( v138 != v139 )
          v108 = *(_QWORD *)v106 >> 32;
          v109 = *(_QWORD *)v106;
          if ( v109 != v108 )
              v112 = *(_DWORD *)(v109 + 24);
              v113 = (void *)(v112 - 12);
              if ( (int *)(v112 - 12) != &dword_28898C0 )
                v110 = (unsigned int *)(v112 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v111 = __ldrex(v110);
                  while ( __strex(v111 - 1, v110) );
                }
                else
                  v111 = (*v110)--;
                if ( v111 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v113);
              v109 += 32;
            while ( v109 != v108 );
            v109 = *(_DWORD *)v106;
          if ( v109 )
            operator delete((void *)v109);
          v106 += 12;
        while ( v106 != v107 );
        v106 = v138;
      if ( v106 )
        operator delete(v106);
      v89 = -1431655765;
      v90 = v127 + 1;
      v114 = (void *)(v136 - 12);
      if ( (int *)(v136 - 12) != &dword_28898C0 )
        v91 = (unsigned int *)(v136 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v114);
      v87 = (int)(v128 + 5);
    while ( v128 + 5 != v129 );
  TextureAtlas::_buildAtlas(_R9);
  TextureAtlas::_uploadAtlas(_R9);
  v116 = v150;
  v115 = v149;
  if ( v149 != v150 )
      v121 = *(_DWORD *)(v115 + 4);
      v122 = (void *)(v121 - 12);
      if ( (int *)(v121 - 12) != &dword_28898C0 )
        v117 = (unsigned int *)(v121 - 4);
            v118 = __ldrex(v117);
          while ( __strex(v118 - 1, v117) );
          v118 = (*v117)--;
        if ( v118 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v122);
      v123 = (int *)(*(_DWORD *)v115 - 12);
      if ( v123 != &dword_28898C0 )
        v119 = (unsigned int *)(*(_DWORD *)v115 - 4);
            v120 = __ldrex(v119);
          while ( __strex(v120 - 1, v119) );
          v120 = (*v119)--;
        if ( v120 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v123);
      v115 += 8;
    while ( v115 != v116 );
    v115 = v149;
  if ( v115 )
    operator delete((void *)v115);
  Json::Reader::~Reader((Json::Reader *)&v151);
  return Json::Value::~Value((Json::Value *)&v152);
}


void __fastcall TextureAtlas::_uploadAtlas(TextureAtlas *this)
{
  TextureAtlas::_uploadAtlas(this);
}


void __fastcall TextureAtlas::_addElementCollection(float a1, int a2, int a3, int a4, int a5, int a6)
{
  const Json::Value *v6; // r7@1
  int v7; // r9@1
  int v8; // r6@1
  Json::Value *v9; // r0@3
  int v15; // r11@3
  int v16; // r5@3
  int v17; // r11@3
  int v18; // t1@3
  int v19; // r3@4
  __int64 v20; // kr00_8@4
  int v21; // r0@4
  int v22; // r0@4
  int v23; // r2@4
  int v24; // r3@4
  int v25; // r4@4
  int v26; // r6@4
  int v27; // r7@4
  int v28; // r1@4
  __int64 v29; // r6@4
  __int64 v30; // kr08_8@4
  int v31; // r1@4
  float v32; // r3@4
  __int64 v33; // kr10_8@4
  void *v34; // r0@6
  char *v35; // r0@7
  unsigned int *v36; // r2@9
  signed int v37; // r1@11
  unsigned int *v38; // r2@13
  signed int v39; // r1@15
  char v40; // [sp+8h] [bp-98h]@3
  char *v41; // [sp+18h] [bp-88h]@1
  int v42; // [sp+1Ch] [bp-84h]@1
  __int64 v43; // [sp+20h] [bp-80h]@1
  __int64 v44; // [sp+28h] [bp-78h]@1
  int v45; // [sp+30h] [bp-70h]@1
  int v46; // [sp+34h] [bp-6Ch]@4
  int v47; // [sp+38h] [bp-68h]@4
  int v48; // [sp+3Ch] [bp-64h]@4
  int v49; // [sp+40h] [bp-60h]@4
  int v50; // [sp+44h] [bp-5Ch]@4
  int v51; // [sp+48h] [bp-58h]@4
  int v52; // [sp+4Ch] [bp-54h]@4
  int v53; // [sp+50h] [bp-50h]@1
  __int64 v54; // [sp+54h] [bp-4Ch]@1
  __int64 v55; // [sp+5Ch] [bp-44h]@1
  int v56; // [sp+64h] [bp-3Ch]@1
  float v57; // [sp+68h] [bp-38h]@1
  __int64 v58; // [sp+6Ch] [bp-34h]@1
  int v59; // [sp+74h] [bp-2Ch]@1

  v6 = (const Json::Value *)a2;
  v7 = a4;
  v8 = a3;
  v41 = (char *)&unk_28898CC;
  v42 = 0;
  v43 = *(_QWORD *)&Color::NIL;
  v44 = qword_283E6B8;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v45);
  v53 = 0;
  v54 = *(_QWORD *)&Color::NIL;
  v55 = qword_283E6B8;
  v56 = Color::WHITE;
  v57 = unk_283E614;
  v58 = qword_283E618;
  v59 = 1065353216;
  if ( Json::Value::isObject(v6) || Json::Value::isString(v6) == 1 )
  {
    v9 = Json::Value::Value((Json::Value *)&v40, v6);
    __asm
    {
      VLDR            S0, [SP,#0xA0+arg_0]
      VMOV            R2, S0
    }
    TextureAtlas::_loadElement((int)v9, (Json::Value *)&v40, _R2, a6, (int)&v41);
    Json::Value::~Value((Json::Value *)&v40);
    v15 = *(_DWORD *)(v8 + 8) + 12 * v7;
    v18 = *(_DWORD *)(v15 + 4);
    v17 = v15 + 4;
    v16 = v18;
    if ( v18 == *(_DWORD *)(v17 + 4) )
      std::vector<ParsedAtlasNodeElement,std::allocator<ParsedAtlasNodeElement>>::_M_emplace_back_aux<ParsedAtlasNodeElement const&>(
        (unsigned __int64 *)(*(_DWORD *)(v8 + 8) + 12 * v7),
        (int)&v41);
    else
      sub_119C854((int *)v16, (int *)&v41);
      *(_DWORD *)(v16 + 4) = v42;
      v20 = v43;
      v19 = v44;
      *(_DWORD *)(v16 + 20) = HIDWORD(v44);
      v21 = v16 + 8;
      *(_QWORD *)v21 = v20;
      *(_DWORD *)(v21 + 8) = v19;
      v22 = v16 + 24;
      v23 = v46;
      v24 = v47;
      v25 = v48;
      v26 = v49;
      v27 = v50;
      *(_DWORD *)v22 = v45;
      *(_DWORD *)(v22 + 4) = v23;
      *(_DWORD *)(v22 + 8) = v24;
      *(_DWORD *)(v22 + 12) = v25;
      *(_DWORD *)(v22 + 16) = v26;
      *(_DWORD *)(v22 + 20) = v27;
      sub_119C854((int *)(v16 + 48), &v51);
      *(_DWORD *)(v16 + 52) = v52;
      v28 = v16 + 56;
      v30 = v54;
      v29 = v55;
      *(_DWORD *)v28 = v53;
      *(_QWORD *)(v28 + 4) = v30;
      *(_QWORD *)(v28 + 12) = v29;
      v31 = v16 + 76;
      v32 = v57;
      v33 = v58;
      HIDWORD(v29) = v59;
      *(_DWORD *)v31 = v56;
      *(float *)(v31 + 4) = v32;
      *(_QWORD *)(v31 + 8) = v33;
      *(_DWORD *)(v31 + 16) = HIDWORD(v29);
      *(_DWORD *)v17 += 96;
  }
  v34 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v41 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
}


void __fastcall TextureAtlas::~TextureAtlas(TextureAtlas *this)
{
  TextureAtlas::~TextureAtlas(this);
}
