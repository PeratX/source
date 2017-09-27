

unsigned int __fastcall TextureAtlasTile::getActualWidth(TextureAtlasTile *this)
{
  unsigned int result; // r0@1

  result = *(_DWORD *)mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)this + 9)) >> *((_BYTE *)this + 40);
  if ( result < 0x10 )
    result = 16;
  return result;
}


int *__fastcall TextureAtlasTile::TextureAtlasTile(int *a1, int *a2)
{
  int *v2; // r4@1
  int *result; // r0@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1
  int v6; // r1@1
  __int64 v7; // kr10_8@1
  __int64 v8; // kr18_8@1
  int *v9; // r12@1
  int v10; // r1@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r4@1

  v2 = a2;
  result = sub_119C854(a1, a2);
  result[1] = v2[1];
  v4 = *((_QWORD *)v2 + 1);
  *((_QWORD *)result + 2) = *((_QWORD *)v2 + 2);
  *((_QWORD *)result + 1) = v4;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[6] = v2[6];
  v2[6] = 0;
  v5 = result[7];
  result[7] = v2[7];
  v2[7] = v5;
  v6 = result[8];
  result[8] = v2[8];
  v2[8] = v6;
  result[9] = v2[9];
  *((_BYTE *)result + 40) = *((_BYTE *)v2 + 40);
  result[11] = v2[11];
  v7 = *((_QWORD *)v2 + 6);
  v8 = *((_QWORD *)v2 + 7);
  v2 += 16;
  *((_QWORD *)result + 7) = v8;
  *((_QWORD *)result + 6) = v7;
  v9 = result + 16;
  v10 = *v2;
  v11 = v2[1];
  v12 = v2[2];
  v13 = v2[3];
  *v9 = v10;
  v9[1] = v11;
  v9[2] = v12;
  v9[3] = v13;
  return result;
}


          if ( v23 >= TextureAtlasTile::getArea((TextureAtlasTile *)((char *)v15 + 80 * (v22 >> 1))) )
{
            v15 = (TextureAtlasTile *)((char *)v15 + 80 * (v22 >> 1) + 80);
            v16 = v22 - 1 - v16;
          }
        }
        v6 = v28;
        v20 = -858993459 * ((v15 - (TextureAtlasTile *)v9) >> 4);
        v21 = v27;
      }
      else
      {
        v31 = a2;
        v12 = v8;
        v13 = v6 / 2;
        v14 = -858993459 * ((v26 - (signed int)v8) >> 4);
        v15 = (TextureAtlasTile *)&v9[20 * (v6 / 2)];
LABEL_9:
        v17 = v13;
        while ( 1 )
        {
          v18 = v14;
          if ( v14 < 1 )
            break;
          v14 >>= 1;
          v19 = TextureAtlasTile::getArea((TextureAtlasTile *)((char *)v12 + 80 * (v18 >> 1)));
          if ( v19 < TextureAtlasTile::getArea(v15) )
          {
            v12 = (TextureAtlasTile *)((char *)v12 + 80 * (v18 >> 1) + 80);
            v14 = v18 - 1 - v14;
            v13 = v17;
            goto LABEL_9;
        v20 = v17;
        v21 = -858993459 * ((v12 - v8) >> 4);
      std::__rotate<__gnu_cxx::__normal_iterator<TextureAtlasTile *,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>>>>(
        (int *)v15,
        (int)v8,
        (int)v12);
      v9 = (int *)((char *)v15 + v12 - v8);
      v10 = v30;
      sub_F44698(v29, (signed int)v15, (int)v15 + v12 - v8, v20, v21, v30);
      if ( v6 != v20 )
        a2 = v31 - v21;
        v6 -= v20;
        v8 = v12;
        v11 = v9;
        if ( v31 != v21 )
          continue;
      return;
    }
    v24 = (int)v8;
    v25 = TextureAtlasTile::getArea(v8);
    if ( v25 < TextureAtlasTile::getArea((TextureAtlasTile *)v9) )
      j_j_j__ZSt4swapI16TextureAtlasTileEvRT_S2_(v9, v24);
  }
}


    if ( v11 < TextureAtlasTile::getArea(v9) )
{
      TextureAtlasTile::operator=(v5, (int)v7);
      v7 = (TextureAtlasTile *)((char *)v7 + 80);
      v5 += 80;
    }
    else
    {
      TextureAtlasTile::operator=(v5, (int)v9);
      v9 = (TextureAtlasTile *)((char *)v9 + 80);
  }
  if ( v8 - (signed int)v9 >= 1 )
  {
    v12 = -858993459 * ((v8 - (signed int)v9) >> 4) + 1;
    do
      --v12;
    while ( v12 > 1 );
  if ( v6 - (signed int)v7 >= 1 )
    v13 = -858993459 * ((v6 - (signed int)v7) >> 4) + 1;
      --v13;
    while ( v13 > 1 );
  return v5;
}


unsigned int __fastcall TextureAtlasTile::getHeight(TextureAtlasTile *this)
{
  unsigned int result; // r0@1

  result = *((_DWORD *)mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)this + 9)) + 1);
  if ( result < 0x10 )
    result = 16;
  return result;
}


      if ( v9 >= TextureAtlasTile::getArea(v3) )
{
        TextureAtlasTile::TextureAtlasTile(&v22, (int *)v8);
        v16 = (TextureAtlasTile *)((char *)v8 - 80);
        for ( i = (int)v8; ; i = (int)v19 )
        {
          v18 = TextureAtlasTile::getArea((TextureAtlasTile *)&v22);
          if ( v18 >= TextureAtlasTile::getArea(v16) )
            break;
          v19 = v16;
          TextureAtlasTile::operator=(i, (int)v16);
          v16 = (TextureAtlasTile *)((char *)v16 - 80);
        }
        TextureAtlasTile::operator=(i, (int)&v22);
        if ( v23 )
          operator delete(v23);
        v5 = -858993459;
        v6 = &v20;
        v13 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) == &dword_28898C0 )
          goto LABEL_29;
        v14 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          goto LABEL_27;
      }
      else
      {
        TextureAtlasTile::TextureAtlasTile(v6, (int *)v8);
        if ( v8 - v3 >= 1 )
          v10 = (int)v8 - 80;
          v11 = (int)v7 + 80;
          v12 = ((v8 - v3) >> 4) * v5 + 1;
          {
            TextureAtlasTile::operator=(v11, v10);
            --v12;
            v10 -= 80;
            v11 -= 80;
          }
          while ( v12 > 1 );
        TextureAtlasTile::operator=((int)v3, (int)v6);
        if ( ptr )
          operator delete(ptr);
        v13 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) == &dword_28898C0 )
        v14 = (unsigned int *)(v20 - 4);
      v15 = (*v14)--;
LABEL_27:
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
LABEL_29:
      result = (TextureAtlasTile *)((char *)v8 + 80);
      v7 = v8;
    }
    while ( (TextureAtlasTile *)((char *)v8 + 80) != v2 );
  }
  return result;
}


unsigned int __fastcall TextureAtlasTile::getArea(TextureAtlasTile *this)
{
  TextureAtlasTile *v1; // r4@1
  unsigned int v2; // r5@1
  unsigned int v3; // r0@1

  v1 = this;
  v2 = *(_DWORD *)mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)this + 9));
  v3 = *((_DWORD *)mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)v1 + 9)) + 1);
  if ( v2 < 0x10 )
    v2 = 16;
  if ( v3 < 0x10 )
    v3 = 16;
  return v3 * v2;
}


int *__fastcall TextureAtlasTile::TextureAtlasTile(int *a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  int v7; // r6@1
  int v8; // r4@1
  int v9; // r5@1
  int *result; // r0@1
  __int64 v11; // r2@1
  int v12; // r7@1
  int *v13; // r12@1
  int *v14; // r1@1
  int v15; // r7@1
  __int64 v16; // r2@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  result = sub_119C854(a1, (int *)a7);
  result[1] = *(_DWORD *)(a7 + 4);
  result[2] = v7;
  result[3] = v9;
  result[4] = v8;
  result[5] = a5;
  result[8] = 0;
  result[9] = 0;
  result[6] = 0;
  result[7] = 0;
  *((_BYTE *)result + 40) = a6;
  result[11] = 0;
  v11 = *(_QWORD *)&Color::NIL;
  v12 = qword_283E6B8;
  v13 = result + 16;
  result[15] = HIDWORD(qword_283E6B8);
  v14 = result + 12;
  *(_QWORD *)v14 = v11;
  v14[2] = v12;
  v16 = *(_QWORD *)&qword_283E614;
  v15 = unk_283E61C;
  *v13 = Color::WHITE;
  *(_QWORD *)(v13 + 1) = v16;
  v13[3] = v15;
  return result;
}


      if ( v11 >= TextureAtlasTile::getArea(v9) )
{
        TextureAtlasTile::operator=(v5, (int)v9);
        v9 = (TextureAtlasTile *)((char *)v9 + 80);
      }
      else
      {
        TextureAtlasTile::operator=(v5, (int)v7);
        v7 = (TextureAtlasTile *)((char *)v7 + 80);
      v5 += 80;
      if ( v9 == (TextureAtlasTile *)v8 )
        goto LABEL_11;
    }
    v10 = (int)v9;
  }
LABEL_11:
  if ( v8 - (signed int)v9 >= 1 )
  {
    v12 = -858993459 * ((v8 - (signed int)v9) >> 4) + 1;
    do
    {
      TextureAtlasTile::operator=(v5, v10);
      --v12;
      v10 += 80;
    while ( v12 > 1 );
  if ( v6 - (signed int)v7 >= 1 )
    v13 = -858993459 * ((v6 - (signed int)v7) >> 4) + 1;
      TextureAtlasTile::operator=(v5, (int)v7);
      --v13;
      v7 = (TextureAtlasTile *)((char *)v7 + 80);
    while ( v13 > 1 );
  return v5;
}


unsigned int __fastcall TextureAtlasTile::getActualHeight(TextureAtlasTile *this)
{
  unsigned int result; // r0@1

  result = *((_DWORD *)mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)this + 9)) + 1) >> *((_BYTE *)this + 40);
  if ( result < 0x10 )
    result = 16;
  return result;
}


unsigned int __fastcall TextureAtlasTile::getWidth(TextureAtlasTile *this)
{
  unsigned int result; // r0@1

  result = *(_DWORD *)mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)this + 9));
  if ( result < 0x10 )
    result = 16;
  return result;
}


          if ( v38 >= TextureAtlasTile::getArea(v33) )
{
            result = TextureAtlasTile::operator=((int)v16, (int)v33);
            v33 = (TextureAtlasTile *)((char *)v33 + 80);
          }
          else
          {
            result = TextureAtlasTile::operator=((int)v16, (int)v15);
            v15 = (TextureAtlasTile *)((char *)v15 + 80);
          v16 += 20;
          if ( v33 == (TextureAtlasTile *)v37 )
            return result;
        }
        result = v37 - (_DWORD)v33;
        if ( v37 - (signed int)v33 >= 1 )
        {
          v48 = -858993459 * (result >> 4) + 1;
          do
            --v48;
            v16 += 20;
          while ( v48 > 1 );
      }
    }
  }
  else
  {
    v17 = -858993459;
    while ( 1 )
    {
      v56 = v10;
      if ( v8 <= a7 )
        break;
      if ( v11 & 1 )
      {
        v53 = (int)v9;
        v54 = a1;
        v18 = v7 - (_DWORD)v15;
        v19 = v10;
        v20 = v17;
        v55 = v8;
        v21 = (v18 >> 4) * v17;
        v22 = (TextureAtlasTile *)&v16[20 * (v19 / 2)];
        v23 = v15;
        while ( 1 )
          v26 = v21;
          if ( v21 < 1 )
            break;
          v21 >>= 1;
          v27 = TextureAtlasTile::getArea((TextureAtlasTile *)((char *)v23 + 80 * (v26 >> 1)));
          if ( v27 < TextureAtlasTile::getArea(v22) )
            v23 = (TextureAtlasTile *)((char *)v23 + 80 * (v26 >> 1) + 80);
            v21 = v26 - 1 - v21;
        v28 = v23 - v15;
        v15 = v23;
        v29 = v56;
        v30 = v19 / 2;
        v25 = (v28 >> 4) * v20;
      else
        v22 = (TextureAtlasTile *)v16;
        v24 = ((v15 - (TextureAtlasTile *)v16) >> 4) * v17;
        v25 = v8 / 2;
        v15 = (TextureAtlasTile *)((char *)v15 + 80 * (v8 / 2));
          v31 = v24;
          if ( v24 < 1 )
          v24 >>= 1;
          v32 = TextureAtlasTile::getArea(v15);
          if ( v32 >= TextureAtlasTile::getArea((TextureAtlasTile *)((char *)v22 + 80 * (v31 >> 1))) )
            v22 = (TextureAtlasTile *)((char *)v22 + 80 * (v31 >> 1) + 80);
            v24 = v31 - 1 - v24;
        v30 = -858993459 * ((v22 - (TextureAtlasTile *)v16) >> 4);
      v10 = v29 - v30;
      v16 = std::__rotate_adaptive<__gnu_cxx::__normal_iterator<TextureAtlasTile *,std::vector<TextureAtlasTile,std::allocator<TextureAtlasTile>>>,TextureAtlasTile *,int>(
              (int *)v22,
              v53,
              (int)v15,
              v10,
              v25,
              a6,
              a7);
      sub_F44B20(v54, v22, (int)v16, v30, v25, a6, a7);
      v11 = 0;
      v17 = -858993459;
      a1 = (int)v16;
      v8 = v55 - v25;
      if ( v10 > v55 - v25 )
        v11 = 1;
      v7 = v52;
      v9 = v15;
      if ( v10 <= a7 )
        v9 = v15;
        a1 = (int)v16;
        if ( v10 <= v8 )
          goto LABEL_23;
    result = v7 - (_DWORD)v15;
    v39 = v17;
    v40 = a6;
    if ( v7 - (signed int)v15 >= 1 )
      v40 = a6;
      v41 = (result >> 4) * v17;
      v42 = (int)v15;
      v43 = v41 + 1;
      do
        result = TextureAtlasTile::operator=(v40, v42);
        --v43;
        v40 += 80;
        v42 += 80;
      while ( v43 > 1 );
    if ( (TextureAtlasTile *)v16 == v15 )
      result = v40 - a6;
      if ( v40 - a6 >= 1 )
        v49 = v40 - 80;
        v50 = v7 - 80;
        v51 = (result >> 4) * v39 + 1;
        do
          result = TextureAtlasTile::operator=(v50, v49);
          --v51;
          v49 -= 80;
          v50 -= 80;
        while ( v51 > 1 );
    else if ( v40 != a6 )
      v44 = (TextureAtlasTile *)(v40 - 80);
        v15 = (TextureAtlasTile *)((char *)v15 - 80);
        for ( i = TextureAtlasTile::getArea(v44); ; i = TextureAtlasTile::getArea(v44) )
          v7 -= 80;
          if ( i < TextureAtlasTile::getArea(v15) )
          result = TextureAtlasTile::operator=(v7, (int)v44);
          if ( (TextureAtlasTile *)a6 == v44 )
          v44 = (TextureAtlasTile *)((char *)v44 - 80);
        TextureAtlasTile::operator=(v7, (int)v15);
      while ( (TextureAtlasTile *)v16 != v15 );
      result = (int)v44 + -a6 + 80;
      if ( result >= 1 )
        v46 = v7 - 80;
        v47 = (result >> 4) * v39 + 1;
          result = TextureAtlasTile::operator=(v46, (int)v44);
          --v47;
          v46 -= 80;
        while ( v47 > 1 );
  return result;
}


int __fastcall TextureAtlasTile::loadTexture(TextureAtlasTile *this, mce::TextureGroup *a2)
{
  TextureAtlasTile *v2; // r4@1
  mce::TextureContainer *v3; // r0@1
  bool v4; // r2@1
  char *v5; // r0@3
  mce::ImageBuffer *v6; // r0@3

  v2 = this;
  v3 = (mce::TextureContainer *)(mce::TextureGroup::getTexturePair(a2, this) + 64);
  *((_DWORD *)v2 + 9) = v3;
  if ( !mce::TextureContainer::isValid(v3) )
    ImageUtils::uncompress(*((ImageUtils **)v2 + 9), 0, v4);
  v5 = mce::TextureContainer::getTextureDescription(*((mce::TextureContainer **)v2 + 9));
  mce::ImageDescription::getSubimageSize((mce::ImageDescription *)v5);
  v6 = (mce::ImageBuffer *)mce::TextureContainer::getImage(*((mce::TextureContainer **)v2 + 9), 0);
  return j_j_j__ZNK3mce11ImageBuffer20getStorageDEPRECATEDEv(v6);
}
