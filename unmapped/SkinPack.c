

Pack **__fastcall SkinPack::SkinPack(Pack **a1, Pack *a2, int *a3)
{
  Pack **v3; // r5@1
  int *v4; // r6@1
  PackManifest *v5; // r0@1
  char *v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r12@1
  Pack *v11; // r0@1

  v3 = a1;
  v4 = a3;
  *a1 = a2;
  v5 = (PackManifest *)Pack::getManifest(a2);
  v6 = PackManifest::getIdentity(v5);
  v7 = *(_DWORD *)v6;
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v10 = (int)(v3 + 2);
  v11 = (Pack *)*((_DWORD *)v6 + 3);
  *(_DWORD *)v10 = v7;
  *(_DWORD *)(v10 + 4) = v8;
  *(_DWORD *)(v10 + 8) = v9;
  v3[5] = v11;
  sub_119C854((int *)v3 + 6, v4);
  v3[7] = (Pack *)&unk_28898CC;
  sub_119CAF8((const void **)v3 + 7, *(_DWORD *)(*v4 - 12) + 9);
  sub_119C894((const void **)v3 + 7, "skinpack.", 9u);
  sub_119C8A4((const void **)v3 + 7, (const void **)v4);
  mce::UUID::asString((mce::UUID *)(v3 + 8));
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[12] = 0;
  return v3;
}


char *__fastcall SkinPack::getSerializableName(SkinPack *this)
{
  return (char *)this + 32;
}


char *__fastcall SkinPack::getLocName(SkinPack *this)
{
  return (char *)this + 28;
}


int __fastcall SkinPack::setPremium(int result)
{
  *(_DWORD *)(result + 36) = 1;
  return result;
}


char *__fastcall SkinPack::getName(SkinPack *this)
{
  return (char *)this + 24;
}


int __fastcall SkinPack::getPack(SkinPack *this)
{
  return *(_DWORD *)this;
}


SkinPack *__fastcall SkinPack::~SkinPack(SkinPack *this)
{
  SkinPack *v1; // r4@1
  Skin *v2; // r0@1
  Skin *v3; // r5@1
  int v4; // r1@6
  void *v5; // r0@6
  int v6; // r1@7
  void *v7; // r0@7
  int v8; // r1@8
  void *v9; // r0@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20

  v1 = this;
  v3 = (Skin *)(*((_QWORD *)this + 5) >> 32);
  v2 = (Skin *)*((_QWORD *)this + 5);
  if ( v2 != v3 )
  {
    do
      v2 = (Skin *)((char *)Skin::~Skin(v2) + 52);
    while ( v3 != v2 );
    v2 = (Skin *)*((_DWORD *)v1 + 10);
  }
  if ( v2 )
    operator delete((void *)v2);
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 7);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 6);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v8 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  return v1;
}


Skin *__fastcall SkinPack::getSkinByName(int a1, _BYTE **a2)
{
  Skin *v2; // r4@1
  Skin *v3; // r6@1
  _BYTE **v4; // r5@1
  char *v5; // r0@2
  Skin *result; // r0@4

  v3 = (Skin *)(*(_QWORD *)(a1 + 40) >> 32);
  v2 = (Skin *)*(_QWORD *)(a1 + 40);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = Skin::getName(v2);
      if ( Util::compareNoCase(*(_DWORD *)(*(_DWORD *)v5 - 12), *(_BYTE **)v5, *((_DWORD *)*v4 - 3), *v4) == 1 )
        break;
      v2 = (Skin *)((char *)v2 + 52);
      if ( v3 == v2 )
        goto LABEL_4;
    }
    result = v2;
  return result;
}


int __fastcall SkinPack::addSkin(SkinPack *this, const Skin *a2)
{
  SkinPack *v2; // r5@1
  unsigned __int64 *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r0@2

  v2 = this;
  v3 = (unsigned __int64 *)((char *)this + 40);
  v4 = *(_QWORD *)((char *)this + 44);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<Skin,std::allocator<Skin>>::_M_emplace_back_aux<Skin const&>(v3, (int)a2);
    v5 = *((_DWORD *)v2 + 11);
  }
  else
    Skin::Skin(v4, (int)a2);
    v5 = *((_DWORD *)v2 + 11) + 52;
    *((_DWORD *)v2 + 11) = v5;
  return j_j_j__ZN4Skin12setSkinIndexEi((Skin *)(v5 - 52), -991146299 * ((v5 - *(_DWORD *)v3) >> 2) - 1);
}


int __fastcall SkinPack::isPremium(SkinPack *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 9);
  if ( result != 1 )
    result = 0;
  return result;
}


char *__fastcall SkinPack::getSkins(SkinPack *this)
{
  return (char *)this + 40;
}


char *__fastcall SkinPack::getId(SkinPack *this)
{
  return (char *)this + 8;
}


int __fastcall SkinPack::getSkinAt(SkinPack *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *((_QWORD *)this + 5), -991146299 * ((HIDWORD(v2) - (signed int)v2) >> 2) <= a2) )
    result = 0;
  else
    result = v2 + 52 * a2;
  return result;
}
