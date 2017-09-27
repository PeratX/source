

int __fastcall BannerPattern::getPatternIndexFromNameID(const void **a1)
{
  int v1; // r6@1
  int v2; // r7@1
  const void *v3; // r8@2
  size_t v4; // r5@2
  _BYTE *v5; // r4@3
  _DWORD *v6; // r0@3
  int result; // r0@6

  v1 = dword_280E154;
  v2 = BannerPattern::mPatterns;
  if ( BannerPattern::mPatterns == dword_280E154 )
  {
LABEL_6:
    result = 0;
  }
  else
    v3 = *a1;
    v4 = *((_DWORD *)*a1 - 3);
    while ( 1 )
    {
      v5 = *(_BYTE **)v2;
      v6 = *(_DWORD **)(*(_DWORD *)v2 + 92);
      if ( *(v6 - 3) == v4 && !memcmp(v6, v3, v4) )
        break;
      v2 += 4;
      if ( v1 == v2 )
        goto LABEL_6;
    }
    result = *v5;
  return result;
}


int __fastcall BannerPattern::BannerPattern(int a1, int *a2, int *a3, int a4)
{
  int v4; // r4@1
  int *v5; // r5@1
  int *v6; // r7@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  ItemInstance::ItemInstance((ItemInstance *)(a1 + 16), a4);
  sub_21E8AF4((int *)(v4 + 88), v6);
  sub_21E8AF4((int *)(v4 + 92), v5);
  return v4;
}


char *__fastcall BannerPattern::getPatternItem(BannerPattern *this)
{
  return (char *)this + 16;
}


char *__fastcall BannerPattern::getNameID(BannerPattern *this)
{
  return (char *)this + 92;
}


char *__fastcall BannerPattern::getName(BannerPattern *this)
{
  return (char *)this + 88;
}


BannerPattern *__fastcall BannerPattern::~BannerPattern(BannerPattern *this)
{
  BannerPattern *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@5
  int v8; // r0@7
  void *v9; // r5@9
  void *v10; // r7@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int *v13; // r0@19
  unsigned int *v15; // r2@25
  signed int v16; // r1@27
  unsigned int *v17; // r2@29
  signed int v18; // r1@31

  v1 = this;
  v2 = *((_DWORD *)this + 23);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 22);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)*((_DWORD *)v1 + 17);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 13);
  if ( v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 6);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  v10 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v9 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v9 != v10 )
    do
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
      {
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      }
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 1);
  if ( v9 )
    operator delete(v9);
  return v1;
}


BannerPattern *__fastcall BannerPattern::initPatterns(BannerPattern *this)
{
  BannerPattern *result; // r0@37
  char v2; // [sp+8h] [bp-1D0h]@31
  int v3; // [sp+10h] [bp-1C8h]@35
  void *v4; // [sp+2Ch] [bp-1ACh]@33
  void *v5; // [sp+3Ch] [bp-19Ch]@31
  char v6; // [sp+50h] [bp-188h]@25
  int v7; // [sp+58h] [bp-180h]@29
  void *v8; // [sp+74h] [bp-164h]@27
  void *v9; // [sp+84h] [bp-154h]@25
  char v10; // [sp+98h] [bp-140h]@19
  int v11; // [sp+A0h] [bp-138h]@23
  void *v12; // [sp+BCh] [bp-11Ch]@21
  void *v13; // [sp+CCh] [bp-10Ch]@19
  char v14; // [sp+E0h] [bp-F8h]@13
  int v15; // [sp+E8h] [bp-F0h]@17
  void *v16; // [sp+104h] [bp-D4h]@15
  void *v17; // [sp+114h] [bp-C4h]@13
  char v18; // [sp+128h] [bp-B0h]@7
  int v19; // [sp+130h] [bp-A8h]@11
  void *v20; // [sp+14Ch] [bp-8Ch]@9
  void *v21; // [sp+15Ch] [bp-7Ch]@7
  char v22; // [sp+170h] [bp-68h]@1
  int v23; // [sp+178h] [bp-60h]@5
  void *v24; // [sp+194h] [bp-44h]@3
  void *ptr; // [sp+1A4h] [bp-34h]@1

  BannerPattern::mBase = registerPattern<char const(&)[5],char const(&)[1]>("base", (const char *)&unk_257BC67);
  BannerPattern::mBorder = registerPattern<char const(&)[7],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                             "border",
                             "bo",
                             "###",
                             "# #",
                             "###");
  ItemInstance::ItemInstance((ItemInstance *)&v22, Block::mBrick);
  BannerPattern::mBricks = registerPattern<char const(&)[7],char const(&)[4],ItemInstance>("bricks", "bri", (int)&v22);
  if ( ptr )
    operator delete(ptr);
  if ( v24 )
    operator delete(v24);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  BannerPattern::mCircle = registerPattern<char const(&)[7],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                             "circle",
                             "mc",
                             "   ",
                             " # ",
                             "   ");
  ItemInstance::ItemInstance((ItemInstance *)&v18, Item::mSkull, 1, 4);
  BannerPattern::mCreeper = registerPattern<char const(&)[8],char const(&)[4],ItemInstance>("creeper", "cre", (int)&v18);
  if ( v21 )
    operator delete(v21);
  if ( v20 )
    operator delete(v20);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  BannerPattern::mCross = registerPattern<char const(&)[6],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                            "cross",
                            "cr",
                            "# #",
                            " # ",
                            "# #");
  ItemInstance::ItemInstance((ItemInstance *)&v14, Block::mVine);
  BannerPattern::mCurlyBorder = registerPattern<char const(&)[13],char const(&)[4],ItemInstance>(
                                  "curly_border",
                                  "cbo",
                                  (int)&v14);
  if ( v17 )
    operator delete(v17);
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v15 = 0;
  BannerPattern::mDiagonalUpLeft = registerPattern<char const(&)[17],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                     "diagonal_up_left",
                                     "ld",
                                     "## ",
                                     "#  ",
                                     "   ");
  BannerPattern::mDiagonalUpRight = registerPattern<char const(&)[18],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                      "diagonal_up_right",
                                      "rud",
                                      " ##",
                                      "  #",
                                      "   ");
  BannerPattern::mDiagonalLeft = registerPattern<char const(&)[14],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                   "diagonal_left",
                                   "lud",
                                   "   ",
                                   "#  ",
                                   "## ");
  BannerPattern::mDiagonalRight = registerPattern<char const(&)[15],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                    "diagonal_right",
                                    "rd",
                                    "   ",
                                    "  #",
                                    " ##");
  ItemInstance::ItemInstance((ItemInstance *)&v10, Block::mRedFlower, 1, 8);
  BannerPattern::mFlower = registerPattern<char const(&)[7],char const(&)[4],ItemInstance>("flower", "flo", (int)&v10);
  if ( v13 )
    operator delete(v13);
  if ( v12 )
    operator delete(v12);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v11 = 0;
  BannerPattern::mGradient = registerPattern<char const(&)[9],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                               "gradient",
                               "gra",
                               "# #",
                               " # ",
                               " # ");
  BannerPattern::mGradientUp = registerPattern<char const(&)[12],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                 "gradient_up",
                                 "gru",
                                 " # ",
                                 "# #");
  BannerPattern::mHalfHorizontal = registerPattern<char const(&)[16],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                     "half_horizontal",
                                     "hh",
                                     "###",
  BannerPattern::mHalfHorizontalBottom = registerPattern<char const(&)[23],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                           "half_horizontal_bottom",
                                           "hhb",
                                           "   ",
                                           "###",
                                           "###");
  BannerPattern::mHalfVertical = registerPattern<char const(&)[14],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                   "half_vertical",
                                   "vh",
                                   "## ",
  BannerPattern::mHalfVerticalRight = registerPattern<char const(&)[20],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                        "half_vertical_right",
                                        "vhr",
                                        " ##",
                                        " ##");
  ItemInstance::ItemInstance((ItemInstance *)&v6, Item::mApple_enchanted);
  BannerPattern::mMojang = registerPattern<char const(&)[7],char const(&)[4],ItemInstance>("mojang", "moj", (int)&v6);
  if ( v9 )
    operator delete(v9);
  if ( v8 )
    operator delete(v8);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v7 = 0;
  BannerPattern::mRhombus = registerPattern<char const(&)[8],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                              "rhombus",
                              "mr",
                              " # ",
                              "# #",
                              " # ");
  ItemInstance::ItemInstance((ItemInstance *)&v2, Item::mSkull, 1, 1);
  BannerPattern::mSkull = registerPattern<char const(&)[6],char const(&)[4],ItemInstance>("skull", "sku", (int)&v2);
  if ( v5 )
    operator delete(v5);
  if ( v4 )
    operator delete(v4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  v3 = 0;
  BannerPattern::mSmallStripes = registerPattern<char const(&)[14],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                   "small_stripes",
                                   "ss",
                                   "# #",
                                   "   ");
  BannerPattern::mSquareBottomLeft = registerPattern<char const(&)[19],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                       "square_bottom_left",
                                       "bl",
                                       "   ",
                                       "#  ");
  BannerPattern::mSquareBottomRight = registerPattern<char const(&)[20],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                        "square_bottom_right",
                                        "br",
                                        "   ",
                                        "  #");
  BannerPattern::mSquareTopLeft = registerPattern<char const(&)[16],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                    "square_top_left",
                                    "tl",
                                    "#  ",
                                    "   ");
  BannerPattern::mSquareTopRight = registerPattern<char const(&)[17],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                     "square_top_right",
                                     "tr",
                                     "  #",
                                     "   ",
  BannerPattern::mStraightCross = registerPattern<char const(&)[15],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                    "straight_cross",
                                    "sc",
                                    " # ",
                                    "###",
                                    " # ");
  BannerPattern::mStripeBottom = registerPattern<char const(&)[14],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                   "stripe_bottom",
                                   "bs",
                                   "###");
  BannerPattern::mStripeCenter = registerPattern<char const(&)[14],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                   "stripe_center",
                                   "cs",
                                   " # ",
                                   " # ");
  BannerPattern::mStripeDownleft = registerPattern<char const(&)[16],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                     "stripe_downleft",
                                     "dls",
                                     " # ",
                                     "#  ");
  BannerPattern::mStripeDownright = registerPattern<char const(&)[17],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                      "stripe_downright",
                                      "drs",
                                      "#  ",
                                      " # ",
                                      "  #");
  BannerPattern::mStripeLeft = registerPattern<char const(&)[12],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                 "stripe_left",
                                 "ls",
                                 "#  ",
                                 "#  ");
  BannerPattern::mStripeMiddle = registerPattern<char const(&)[14],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                   "stripe_middle",
                                   "ms",
                                   "###",
  BannerPattern::mStripeRight = registerPattern<char const(&)[13],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                  "stripe_right",
                                  "rs",
                                  "  #",
                                  "  #");
  BannerPattern::mStripeTop = registerPattern<char const(&)[11],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                "stripe_top",
                                "ts",
                                "###",
                                "   ",
                                "   ");
  BannerPattern::mTriangleBottom = registerPattern<char const(&)[16],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                     "triangle_bottom",
                                     "bt",
                                     "# #");
  BannerPattern::mTriangleTop = registerPattern<char const(&)[13],char const(&)[3],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                  "triangle_top",
                                  "tt",
                                  "# #",
                                  " # ",
                                  "   ");
  BannerPattern::mTrianglesBottom = registerPattern<char const(&)[17],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
                                      "triangles_bottom",
                                      "bts",
                                      "   ",
                                      "# #",
                                      " # ");
  result = registerPattern<char const(&)[14],char const(&)[4],char const(&)[4],char const(&)[4],char const(&)[4]>(
             "triangles_top",
             "tts",
             " # ",
             "# #",
             "   ");
  BannerPattern::mTrianglesTop = result;
  return result;
}


int __fastcall BannerPattern::BannerPattern(int a1, int *a2, int *a3, unsigned __int64 *a4)
{
  int v4; // r6@1
  int *v5; // r4@1
  int *v6; // r5@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  std::vector<std::string,std::allocator<std::string>>::vector(a1 + 4, a4);
  ItemInstance::ItemInstance(v4 + 16);
  sub_21E8AF4((int *)(v4 + 88), v5);
  sub_21E8AF4((int *)(v4 + 92), v6);
  return v4;
}


int __fastcall BannerPattern::BannerPattern(int a1, int *a2, int *a3, int *a4, int *a5, int *a6)
{
  int v6; // r5@1
  int *v7; // r7@1
  int v8; // r11@1
  int *v9; // r6@1
  int *v10; // r4@1
  __int64 v11; // r0@1
  int *v12; // r0@2
  int *v13; // r0@5

  v6 = a1;
  v7 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = a1 + 4;
  v9 = a3;
  v10 = a2;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  ItemInstance::ItemInstance(a1 + 16);
  sub_21E8AF4((int *)(v6 + 88), v10);
  sub_21E8AF4((int *)(v6 + 92), v9);
  v11 = *(_QWORD *)(v6 + 8);
  if ( (_DWORD)v11 == HIDWORD(v11) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)v8,
      v7);
    v12 = *(int **)(v6 + 8);
  }
  else
    sub_21E8AF4((int *)v11, v7);
    v12 = (int *)(*(_DWORD *)(v6 + 8) + 4);
    *(_DWORD *)(v6 + 8) = v12;
  if ( v12 == *(int **)(v6 + 12) )
      a5);
    v13 = *(int **)(v6 + 8);
    sub_21E8AF4(v12, a5);
    v13 = (int *)(*(_DWORD *)(v6 + 8) + 4);
    *(_DWORD *)(v6 + 8) = v13;
  if ( v13 == *(int **)(v6 + 12) )
      a6);
    sub_21E8AF4(v13, a6);
    *(_DWORD *)(v6 + 8) += 4;
  return v6;
}


int __fastcall BannerPattern::hasPattern(BannerPattern *this)
{
  int result; // r0@2

  if ( (unsigned int)*(_QWORD *)((char *)this + 4) == *(_QWORD *)((char *)this + 4) >> 32 )
    result = ItemInstance::isNull((BannerPattern *)((char *)this + 16)) ^ 1;
  else
    result = 1;
  return result;
}


int __fastcall BannerPattern::hasPatternItem(BannerPattern *this)
{
  return ItemInstance::isNull((BannerPattern *)((char *)this + 16)) ^ 1;
}


int __fastcall BannerPattern::BannerPattern(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int *v5; // r7@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  ItemInstance::ItemInstance(a1 + 16);
  sub_21E8AF4((int *)(v3 + 88), v5);
  sub_21E8AF4((int *)(v3 + 92), v4);
  return v3;
}


char *__fastcall BannerPattern::getPattern(BannerPattern *this)
{
  return (char *)this + 4;
}
