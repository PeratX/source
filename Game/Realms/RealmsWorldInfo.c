

void __fastcall RealmsWorldInfo::getPlayerCountAsString(RealmsWorldInfo *this, int a2)
{
  int *v2; // r4@1
  int v3; // r0@1
  void *v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  int v9; // [sp+4h] [bp-2Ch]@9
  int v10; // [sp+Ch] [bp-24h]@3

  v2 = (int *)this;
  v3 = *(_DWORD *)(a2 + 20);
  if ( !(_BYTE)v3 )
  {
    if ( v3 & 0xFF0000 )
    {
      sub_119C884((void **)&v9, "playscreen.realmFull");
      I18n::get(v2, (int **)&v9);
      v4 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          goto LABEL_21;
      }
      return;
    }
LABEL_14:
    Util::toString<int,(void *)0,(void *)0>((void **)v2, *(_DWORD *)(a2 + 8));
    return;
  }
  if ( !(v3 & 0xFF00) )
    goto LABEL_14;
  sub_119C884((void **)&v10, "playscreen.realmExpired");
  I18n::get(v2, (int **)&v10);
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
LABEL_21:
      j_j_j_j_j__ZdlPv_9_1(v4);
}


void __fastcall RealmsWorldInfo::getOwnerName(RealmsWorldInfo *this, int a2)
{
  Util *v2; // r4@1
  int v3; // r0@1
  int *v4; // r1@1
  int v5; // r5@2
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+8h] [bp-28h]@2
  unsigned int v13; // [sp+Ch] [bp-24h]@2

  v2 = this;
  v3 = *(_BYTE *)(a2 + 20);
  v4 = (int *)(a2 + 12);
  if ( v3 )
  {
    v5 = *v4;
    sub_119C884((void **)&v12, "realmsWorld.owner");
    I18n::get((int *)&v13, (int **)&v12);
    Util::format(v2, "%s (%s)", __PAIR__(v13, v5));
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v12 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
  }
  else
    sub_119C854((int *)v2, v4);
}


int __fastcall RealmsWorldInfo::setRealmFull(int result, int a2)
{
  unsigned int v2; // r1@2
  unsigned int v3; // r1@4
  signed int v4; // r2@7

  if ( a2 )
  {
    v2 = *(_WORD *)(result + 20);
    *(_BYTE *)(result + 22) = v2 ^ 1;
    if ( (unsigned __int8)v2 != 1 )
    {
      *(_DWORD *)(result + 4) = 2;
      return result;
    }
    v3 = v2 >> 8;
  }
  else
    *(_BYTE *)(result + 22) = 0;
    v3 = *(_BYTE *)(result + 21);
  if ( !v3 )
    v4 = 0;
    if ( *(_DWORD *)(*(_DWORD *)(result + 24) + 8) != 2 )
      v4 = 1;
    *(_DWORD *)(result + 4) = v4;
  return result;
}


void __fastcall RealmsWorldInfo::getOwnerName(RealmsWorldInfo *this, int a2)
{
  RealmsWorldInfo::getOwnerName(this, a2);
}


      if ( RealmsWorldInfo::getPlayerCount(v22) != v34 )
{
        RealmsWorldInfo::setPlayerCount(v22, v34);
        *(_BYTE *)(v62 + 112) = 1;
      }
      if ( (RealmsWorldInfo::getRealmFull(v22) ^ v49) == 1 )
      {
        RealmsWorldInfo::setRealmFull(v22, v49);
      v22 = (RealmsWorldInfo *)((char *)v22 + 28);
      v21 = v60;
    }
    sub_21E034C(&v64);
    *(_QWORD *)(v62 + 384) = v64;
    *(_BYTE *)(v63 + 308) = 0;
    std::_Rb_tree<Realms::Id,std::pair<Realms::Id const,bool>,std::_Select1st<std::pair<Realms::Id const,bool>>,std::less<Realms::Id>,std::allocator<std::pair<Realms::Id const,bool>>>::_M_erase(
      (int)&v65,
      v67);
    std::_Rb_tree<Realms::Id,std::pair<Realms::Id const,int>,std::_Select1st<std::pair<Realms::Id const,int>>,std::less<Realms::Id>,std::allocator<std::pair<Realms::Id const,int>>>::_M_erase(
      (int)&v71,
      v73);
    v5 = v61;
    v4 = v59;
  }
  if ( v4 )
  {
    v54 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
    else
      v55 = (*v54)--;
    if ( v55 == 1 )
      v56 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        __dmb();
        do
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
      else
        v57 = (*v56)--;
      if ( v57 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  if ( v5 != v6 )
    v58 = v5;
    do
      v58 = (Realms::World *)((char *)Realms::World::~World(v58) + 72);
    while ( v6 != v58 );
  if ( v5 )
    operator delete((void *)v5);
}


int __fastcall RealmsWorldInfo::setPlayerCount(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  if ( *(_DWORD *)(*(_DWORD *)(result + 24) + 36) == a2 )
    *(_DWORD *)(result + 4) = 2;
  return result;
}


signed int __fastcall RealmsWorldInfo::isPlayerOwner(int a1, const void **a2)
{
  signed int v2; // r4@1
  _DWORD *v3; // r1@1
  _DWORD *v4; // r0@1
  size_t v5; // r2@1

  v2 = 0;
  v3 = *a2;
  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 24) + 20);
  v5 = *(v4 - 3);
  if ( v5 == *(v3 - 3) && !memcmp(v4, v3, v5) )
    v2 = 1;
  return v2;
}


int __fastcall RealmsWorldInfo::RealmsWorldInfo(int a1, int a2, const void **a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int *v5; // r8@1
  const void **v6; // r7@1
  signed int v7; // r0@1
  char v8; // r4@3
  _DWORD *v9; // r0@3
  size_t v10; // r2@3
  unsigned __int8 v11; // r0@6
  unsigned __int8 v12; // r1@6

  v3 = a2;
  v4 = a1;
  v5 = (int *)(a1 + 12);
  *(_DWORD *)a1 = 5;
  v6 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  sub_119C884((void **)(a1 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v4 + 16), (const char *)&unk_257BC67);
  v7 = 0;
  *(_BYTE *)(v4 + 20) = 0;
  *(_BYTE *)(v4 + 21) = 0;
  *(_BYTE *)(v4 + 22) = 0;
  *(_DWORD *)(v4 + 24) = v3;
  if ( *(_DWORD *)(v3 + 8) != 2 )
    v7 = 1;
  *(_DWORD *)(v4 + 4) = v7;
  EntityInteraction::setInteractText(v5, (int *)(v3 + 24));
  EntityInteraction::setInteractText((int *)(v4 + 16), (int *)(v3 + 12));
  v8 = 0;
  v9 = *(_DWORD **)(*(_DWORD *)(v4 + 24) + 20);
  v10 = *(v9 - 3);
  if ( v10 == *((_DWORD *)*v6 - 3) && !memcmp(v9, *v6, v10) )
    v8 = 1;
  *(_BYTE *)(v4 + 20) = v8;
  v11 = *(_BYTE *)(v3 + 32);
  *(_BYTE *)(v4 + 21) = v11;
  v12 = *(_BYTE *)(v3 + 53);
  if ( *(_BYTE *)(v3 + 53) )
    v12 = v8 ^ 1;
  *(_BYTE *)(v4 + 22) = v12;
  if ( v11 | v12 )
    *(_DWORD *)(v4 + 4) = 2;
  return v4;
}


void __fastcall RealmsWorldInfo::getPlayerCountAsString(RealmsWorldInfo *this, int a2)
{
  RealmsWorldInfo::getPlayerCountAsString(this, a2);
}


char *__fastcall RealmsWorldInfo::getWorldName(RealmsWorldInfo *this)
{
  return (char *)this + 16;
}
