

signed int __fastcall SkinRepositoryClientInterface::hasValidCustomSkin(SkinRepositoryClientInterface *this)
{
  return j_j_j__ZNK14SkinRepository11isValidSkinERK16ResourceLocation(
           *((SkinRepository **)this + 2),
           (SkinRepositoryClientInterface *)((char *)this + 140));
}


void __fastcall SkinRepositoryClientInterface::_solveSerializableName(int *a1, int a2, unsigned int *a3)
{
  SkinRepositoryClientInterface::_solveSerializableName(a1, a2, a3);
}


void __fastcall SkinRepositoryClientInterface::_registerCustomSkins(int a1, int a2)
{
  SkinRepositoryClientInterface::_registerCustomSkins(a1, a2);
}


char *__fastcall SkinRepositoryClientInterface::getRecentSkins(SkinRepositoryClientInterface *this)
{
  return (char *)this + 120;
}


Skin *__fastcall SkinRepositoryClientInterface::getSkinBySerializableName(int a1, unsigned int *a2)
{
  int v2; // r4@1
  Skin *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  SkinRepositoryClientInterface::_solveSerializableName(&v8, a1, a2);
  v3 = SkinRepository::getSkinBySerializableName(*(_DWORD *)(v2 + 8), (unsigned int *)&v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  return v3;
}


void __fastcall SkinRepositoryClientInterface::initialize(SkinRepositoryClientInterface *this)
{
  Options *v1; // r9@0
  SkinRepositoryClientInterface *v2; // r11@1
  int v3; // r5@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r4@2
  unsigned int v6; // r1@5
  unsigned int v7; // r2@6
  bool v8; // zf@7
  unsigned int *v9; // r0@10
  Skin *v10; // r1@16
  unsigned int v11; // r0@18
  signed int v12; // r2@18
  int v13; // r1@18
  int v14; // r0@19
  int *v15; // r7@19
  int v16; // r5@19
  char v17; // r0@20
  Skin *v18; // r1@20
  int v19; // r7@23
  int v20; // r0@23
  unsigned int *v21; // r0@24
  unsigned int v22; // r1@26
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  int v25; // r0@31
  unsigned int *v26; // r2@32
  unsigned int v27; // r1@34
  int v28; // r12@39
  int v29; // r2@39
  int v30; // r7@39
  __int64 v31; // kr00_8@39
  char *v32; // r0@40
  char *v33; // r6@40
  __int64 v34; // r0@40
  Options **v35; // r10@40
  signed int v36; // r2@40
  int v37; // r8@43
  Options **v38; // r7@44
  int *v39; // r1@48
  void *v40; // r0@51
  Options **v41; // r5@53
  unsigned int *v42; // r2@54
  signed int v43; // r1@56
  int *v44; // r0@62
  void *v45; // r0@66
  void *v46; // r0@67
  unsigned int v47; // r0@71
  unsigned int *v48; // r4@75
  unsigned int v49; // r0@77
  unsigned int *v50; // r2@83
  signed int v51; // r1@85
  unsigned int *v52; // r2@87
  signed int v53; // r1@89
  unsigned int *v54; // r2@91
  signed int v55; // r1@93
  int v56; // [sp+0h] [bp-A40h]@14
  int v57; // [sp+4h] [bp-A3Ch]@49
  _DWORD *v58; // [sp+8h] [bp-A38h]@29
  __int64 v59; // [sp+10h] [bp-A30h]@29
  int v60; // [sp+18h] [bp-A28h]@23
  int v61; // [sp+1Ch] [bp-A24h]@23
  __int64 v62; // [sp+20h] [bp-A20h]@10
  __int64 v63; // [sp+28h] [bp-A18h]@11
  int v64; // [sp+30h] [bp-A10h]@12
  int v65; // [sp+34h] [bp-A0Ch]@13
  int v66; // [sp+3Ch] [bp-A04h]@10
  unsigned int v67; // [sp+40h] [bp-A00h]@18
  unsigned int v68; // [sp+44h] [bp-9FCh]@18
  int v69; // [sp+A04h] [bp-3Ch]@18
  char v70; // [sp+A08h] [bp-38h]@18
  int v71; // [sp+A0Ch] [bp-34h]@18
  int v72; // [sp+A10h] [bp-30h]@20

  v2 = this;
  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5 == 0;
          if ( *v5 )
          {
            v1 = *(Options **)v2;
            v8 = *(_DWORD *)v2 == 0;
          }
          if ( v8 )
            goto LABEL_110;
          if ( ((v9 = (unsigned int *)Options::getSkinId(v1),
                 SkinRepositoryClientInterface::_solveSerializableName(&v66, (int)v2, v9),
                 SkinRepository::deserializeSkinName((int)&v62, *((_DWORD *)v2 + 2), (unsigned int *)&v66),
                 *(_QWORD *)&mce::UUID::EMPTY != v62)
             || qword_287E930 != v63)
            && (v64 != -1 || *(_DWORD *)(v65 - 12)) )
            v56 = v3;
            if ( SkinRepository::isKnownSkinPackUnLoaded(*((SkinRepository **)v2 + 2), (const mce::UUID *)&v62) == 1 )
              SkinRepository::loadSkinPack(*((SkinRepository **)v2 + 2), (const mce::UUID *)&v62, 0);
            v10 = SkinRepository::resolveSkinHandle(*((_DWORD *)v2 + 2), (int)&v62);
            if ( v10 )
            {
              SkinRepositoryClientInterface::setSelectedSkin(v2, v10);
            }
            else
              v19 = *((_DWORD *)v2 + 2);
              v60 = *((_DWORD *)v2 + 37);
              v20 = *((_DWORD *)v2 + 38);
              v61 = v20;
              if ( v20 )
              {
                v21 = (unsigned int *)(v20 + 8);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v22 = __ldrex(v21);
                  while ( __strex(v22 + 1, v21) );
                }
                else
                  ++*v21;
              }
              v23 = operator new(4u);
              LODWORD(v24) = sub_E84D98;
              *v23 = v2;
              HIDWORD(v24) = sub_E84CEC;
              v58 = v23;
              v59 = v24;
              SkinRepository::addLoadListener(v19, (int)&v60, (int)&v58);
              if ( (_DWORD)v59 )
                ((void (*)(void))v59)();
              v25 = v61;
              if ( v61 )
                v26 = (unsigned int *)(v61 + 8);
                    v27 = __ldrex(v26);
                  while ( __strex(v27 - 1, v26) );
                  v27 = (*v26)--;
                if ( v27 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v25 + 12))();
              v28 = (int)v2 + 40;
              v29 = HIDWORD(v62);
              v31 = v63;
              v30 = v64;
              *(_DWORD *)v28 = v62;
              *(_DWORD *)(v28 + 4) = v29;
              *(_QWORD *)(v28 + 8) = v31;
              *(_DWORD *)(v28 + 16) = v30;
              EntityInteraction::setInteractText((int *)v2 + 15, &v65);
          else
            v11 = *((_DWORD *)v2 + 33);
            v67 = v11;
            v12 = 1;
            v69 = 625;
            v13 = 0;
            v70 = 0;
            v71 = 0;
            v68 = v11;
            do
              v14 = v11 ^ (v11 >> 30);
              v15 = (int *)(&v67 + v13);
              v16 = v13++ + 1812433253 * v14;
              v11 = v12++ + 1812433253 * v14;
              v15[2] = v16 + 1;
            while ( v13 != 397 );
            v69 = 624;
            v72 = 398;
            v17 = Random::_genRandInt32((Random *)&v67);
            v18 = SkinRepositoryClientInterface::_getDefaultSkin((int)v2, v17 & 1 ^ 3);
            if ( !v18 )
              v18 = (SkinRepositoryClientInterface *)((char *)v2 + 64);
            SkinRepositoryClientInterface::setSelectedSkin(v2, v18);
          v32 = Options::getRecentSkinIds(v1);
          v33 = v32;
          v34 = *(_QWORD *)v32;
          v35 = 0;
          v36 = HIDWORD(v34) - v34;
          if ( (HIDWORD(v34) - (signed int)v34) >> 2 )
            if ( (unsigned int)(v36 >> 2) >= 0x40000000 )
              sub_119C874();
            v35 = (Options **)operator new(v36);
            v34 = *(_QWORD *)v33;
          v37 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                  v34,
                  SHIDWORD(v34),
                  (int)v35);
          if ( v35 != (Options **)v37 )
            v38 = v35;
              if ( *((_DWORD *)*v38 - 3) )
                SkinRepositoryClientInterface::addRecentSkin((int)v2, v38);
              ++v38;
            while ( (Options **)v37 != v38 );
          v39 = (int *)Options::getLastCustomSkinId(v1);
          if ( *(_DWORD *)(*v39 - 12) )
            sub_119C854(&v57, v39);
            sub_119C884((void **)&v57, "Standard_Dummy");
          EntityInteraction::setInteractText((int *)v2 + 29, &v57);
          v40 = (void *)(v57 - 12);
          if ( (int *)(v57 - 12) != &dword_28898C0 )
            v50 = (unsigned int *)(v57 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v40);
            v41 = v35;
              v44 = (int *)((char *)*v41 - 12);
              if ( v44 != &dword_28898C0 )
                v42 = (unsigned int *)((char *)*v41 - 4);
                    v43 = __ldrex(v42);
                  while ( __strex(v43 - 1, v42) );
                  v43 = (*v42)--;
                if ( v43 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v44);
              ++v41;
            while ( v41 != (Options **)v37 );
          if ( v35 )
            operator delete(v35);
          v3 = v56;
          v45 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v65 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v45);
          v46 = (void *)(v66 - 12);
          if ( (int *)(v66 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v66 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v46);
          if ( v56 )
LABEL_110:
                v47 = __ldrex(v5);
              while ( __strex(v47 - 1, v5) );
              v47 = (*v5)--;
            if ( v47 == 1 )
              v48 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
                __dmb();
                do
                  v49 = __ldrex(v48);
                while ( __strex(v49 - 1, v48) );
              else
                v49 = (*v48)--;
              if ( v49 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


Skin *__fastcall SkinRepositoryClientInterface::_getDefaultSkin(int a1, int a2)
{
  int v2; // r4@1
  Skin *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = *(_DWORD *)(a1 + 8);
  SkinRepositoryClientInterface::_getDefaultSkinSerializableName((void **)&v8, a1, a2);
  v3 = SkinRepository::resolveSkinHandle(v2, (unsigned int *)&v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  return v3;
}


void __fastcall SkinRepositoryClientInterface::_getDefaultSkinSerializableName(void **a1, int a2, int a3)
{
  int v3; // r5@1
  void **v4; // r4@1
  const void **v5; // r0@9
  const void **v6; // r0@9
  char *v7; // r0@9
  void *v8; // r0@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  int v13; // [sp+10h] [bp-28h]@3
  char *v14; // [sp+14h] [bp-24h]@9

  v3 = a2;
  v4 = a1;
  switch ( a3 )
  {
    case 0:
    case 1:
      if ( a3 == 1 )
        sub_119C884((void **)&v13, "CustomSlim");
      else
        sub_119C884((void **)&v13, "Custom");
      v5 = sub_119C984((const void **)&v13, 0, (unsigned int)"Standard_", (_BYTE *)9);
      v14 = (char *)*v5;
      *v5 = &unk_28898CC;
      v6 = sub_119C8A4((const void **)&v14, (const void **)(v3 + 136));
      *v4 = (void *)*v6;
      *v6 = &unk_28898CC;
      v7 = v14 - 12;
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v8 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v13 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
      break;
    case 4:
      sub_119C884(a1, "Standard_Dummy");
    case 2:
      sub_119C884(a1, "Standard_Alex");
    case 3:
      sub_119C884(a1, "Standard_Steve");
    default:
  }
}


signed int __fastcall SkinRepositoryClientInterface::isValidSelectedSkin(SkinRepositoryClientInterface *this, const mce::UUID *a2, int a3)
{
  __int64 v3; // kr08_8@1
  bool v4; // zf@1
  signed int v5; // r1@7
  signed int result; // r0@10

  v3 = *((_QWORD *)a2 + 1);
  v4 = *(_QWORD *)&mce::UUID::EMPTY == *(_QWORD *)a2;
  if ( *(_QWORD *)&mce::UUID::EMPTY == *(_QWORD *)a2 )
    v4 = qword_287E930 == v3;
  if ( v4 || a3 == -1 && !dword_28898C0 || *((_QWORD *)this + 2) != *(_QWORD *)a2 )
  {
    result = 0;
  }
  else
    v5 = 0;
    if ( *((_QWORD *)this + 3) == v3 && *((_DWORD *)this + 8) == a3 )
      v5 = 1;
    result = v5;
  return result;
}


void __fastcall SkinRepositoryClientInterface::_registerCustomSkins(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  SkinPack *v4; // r9@1
  Skin *v5; // r7@5
  void *v6; // r0@5
  void *v7; // r0@11
  void *v8; // r0@13
  unsigned int *v9; // r2@15
  signed int v10; // r1@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@30
  signed int v14; // r1@32
  int v15; // [sp+8h] [bp-78h]@9
  char v16; // [sp+Ch] [bp-74h]@11
  int v17; // [sp+40h] [bp-40h]@5
  int v18; // [sp+44h] [bp-3Ch]@3

  v2 = a2;
  v3 = a1;
  v4 = SkinRepository::getSkinPackById(
         *(SkinRepository **)(a1 + 8),
         (const mce::UUID *)&SkinRepository::VANILLA_SKIN_PACK_UUID);
  if ( v4 )
  {
    if ( v2 == 1 )
      sub_119C884((void **)&v18, "CustomSlim");
    else
      sub_119C884((void **)&v18, "Custom");
    sub_119C854(&v17, &v18);
    sub_119C8A4((const void **)&v17, (const void **)(v3 + 136));
    v5 = SkinPack::getSkinByName((int)v4, (_BYTE **)&v17);
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    if ( v5 )
      Skin::setSkinPackSourceOverride(v5, (const ResourceLocation *)(v3 + 140));
      if ( v2 == 1 )
        sub_119C884((void **)&v15, "geometry.humanoid.customSlim");
        sub_119C884((void **)&v15, "geometry.humanoid.custom");
      Skin::createCustomSkin((int)&v16, v4, &v18, (const void **)(v3 + 136), &v15, v3 + 140);
      v7 = (void *)(v15 - 12);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      SkinPack::addSkin(v4, (const Skin *)&v16);
      Skin::~Skin((Skin *)&v16);
    v8 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v18 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
  }
}


SkinRepositoryClientInterface *__fastcall SkinRepositoryClientInterface::~SkinRepositoryClientInterface(SkinRepositoryClientInterface *this)
{
  SkinRepositoryClientInterface *v1; // r11@1
  int v2; // r6@1
  unsigned int v3; // r0@2
  unsigned int *v4; // r7@2
  unsigned int v5; // r1@5
  unsigned int v6; // r2@6
  int v7; // r0@7
  bool v8; // zf@7
  Option *v9; // r0@10
  unsigned int v10; // r0@14
  unsigned int *v11; // r4@18
  unsigned int v12; // r0@20
  int v13; // r5@25
  unsigned int *v14; // r1@26
  unsigned int v15; // r0@28
  unsigned int *v16; // r4@32
  unsigned int v17; // r0@34
  int v18; // r1@39
  void *v19; // r0@39
  int v20; // r1@40
  void *v21; // r0@40
  void *v22; // r5@41
  void *v23; // r7@41
  unsigned int *v24; // r2@43
  signed int v25; // r1@45
  int *v26; // r0@51
  int v27; // r1@56
  void *v28; // r0@56
  int v29; // r1@57
  void *v30; // r0@57
  int v31; // r1@58
  void *v32; // r0@58
  int v33; // r0@59
  unsigned int *v34; // r2@60
  unsigned int v35; // r1@62
  unsigned int *v37; // r2@68
  signed int v38; // r1@70
  unsigned int *v39; // r2@72
  signed int v40; // r1@74
  unsigned int *v41; // r2@76
  signed int v42; // r1@78
  unsigned int *v43; // r2@80
  signed int v44; // r1@82
  unsigned int *v45; // r2@84
  signed int v46; // r1@86

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4;
          v8 = *v4 == 0;
          if ( *v4 )
          {
            v7 = *(_DWORD *)v1;
            v8 = *(_DWORD *)v1 == 0;
          }
          if ( !v8 )
            v9 = (Option *)Options::get(v7, 15);
            if ( v9 )
              Option::unregisterObserver(v9, (void *)v1);
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v4);
            while ( __strex(v10 - 1, v4) );
          else
            v10 = (*v4)--;
          if ( v10 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          break;
        }
      }
      else
        __clrex();
    }
  }
  v13 = *((_DWORD *)v1 + 38);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v18 = *((_DWORD *)v1 + 35);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v18 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = *((_DWORD *)v1 + 34);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v20 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v23 = (void *)(*((_QWORD *)v1 + 15) >> 32);
  v22 = (void *)*((_QWORD *)v1 + 15);
  if ( v22 != v23 )
    do
      v26 = (int *)(*(_DWORD *)v22 - 12);
      if ( v26 != &dword_28898C0 )
        v24 = (unsigned int *)(*(_DWORD *)v22 - 4);
        if ( &pthread_create )
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      v22 = (char *)v22 + 4;
    while ( v22 != v23 );
    v22 = (void *)*((_DWORD *)v1 + 30);
  if ( v22 )
    operator delete(v22);
  v27 = *((_DWORD *)v1 + 29);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v27 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  Skin::~Skin((SkinRepositoryClientInterface *)((char *)v1 + 64));
  v29 = *((_DWORD *)v1 + 15);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v29 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = *((_DWORD *)v1 + 9);
  v32 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v31 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = *((_DWORD *)v1 + 1);
  if ( v33 )
    v34 = (unsigned int *)(v33 + 8);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      (*(void (**)(void))(*(_DWORD *)v33 + 12))();
  return v1;
}


signed int __fastcall SkinRepositoryClientInterface::storeCustomSkin(SkinRepositoryClientInterface *this, const ResourceLocation *a2)
{
  return j_j_j__ZN14SkinRepository9storeSkinERK16ResourceLocationS2_(
           *((SkinRepository **)this + 2),
           a2,
           (SkinRepositoryClientInterface *)((char *)this + 140));
}


Skin *__fastcall SkinRepositoryClientInterface::_setDefaultSkin(SkinRepositoryClientInterface *this)
{
  SkinRepositoryClientInterface *v1; // r8@1
  unsigned int v2; // r0@1
  int v3; // r1@1
  signed int v4; // r2@1
  int v5; // r0@2
  int *v6; // r7@2
  int v7; // r6@2
  char v8; // r0@3
  Skin *v9; // r1@3
  unsigned int v11; // [sp+4h] [bp-9ECh]@1
  unsigned int v12; // [sp+8h] [bp-9E8h]@1
  int v13; // [sp+9C8h] [bp-28h]@1
  char v14; // [sp+9CCh] [bp-24h]@1
  int v15; // [sp+9D0h] [bp-20h]@1
  int v16; // [sp+9D4h] [bp-1Ch]@3

  v1 = this;
  v2 = *((_DWORD *)this + 33);
  v11 = v2;
  v13 = 625;
  v3 = 0;
  v4 = 1;
  v14 = 0;
  v15 = 0;
  v12 = v2;
  do
  {
    v5 = v2 ^ (v2 >> 30);
    v6 = (int *)(&v11 + v3);
    v7 = v3++ + 1812433253 * v5;
    v2 = v4++ + 1812433253 * v5;
    v6[2] = v7 + 1;
  }
  while ( v3 != 397 );
  v13 = 624;
  v16 = 398;
  v8 = Random::_genRandInt32((Random *)&v11);
  v9 = SkinRepositoryClientInterface::_getDefaultSkin((int)v1, v8 & 1 ^ 3);
  if ( !v9 )
    v9 = (SkinRepositoryClientInterface *)((char *)v1 + 64);
  return SkinRepositoryClientInterface::setSelectedSkin(v1, v9);
}


signed int __fastcall SkinRepositoryClientInterface::getNumRecentSkins(SkinRepositoryClientInterface *this)
{
  return (signed int)((*((_QWORD *)this + 15) >> 32) - *((_QWORD *)this + 15)) >> 2;
}


void __fastcall SkinRepositoryClientInterface::_solveSerializableName(int *a1, int a2, unsigned int *a3)
{
  int v3; // r10@1
  int *v4; // r8@1
  int *v5; // r6@1
  char *v6; // r7@1
  size_t v7; // r2@1
  char *v8; // r4@3
  signed int v9; // r5@3
  char *v10; // r7@3
  size_t v11; // r2@3
  char *v12; // r0@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r1@23
  signed int v18; // r0@25
  void *ptr; // [sp+0h] [bp-50h]@3
  void *s2; // [sp+4h] [bp-4Ch]@1
  char v21; // [sp+8h] [bp-48h]@1
  void *s1; // [sp+1Ch] [bp-34h]@1

  v3 = a2;
  v4 = a1;
  v5 = (int *)a3;
  SkinRepository::deserializeSkinName((int)&v21, *(_DWORD *)(a2 + 8), a3);
  sub_119C884(&s2, "Custom");
  v6 = (char *)s2;
  v7 = *((_DWORD *)s1 - 3);
  if ( v7 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, v7) )
  {
    v9 = 1;
  }
  else
    sub_119C884(&ptr, "CustomSlim");
    v8 = (char *)ptr;
    v9 = 0;
    v10 = (char *)ptr - 12;
    v11 = *((_DWORD *)s1 - 3);
    if ( v11 == *((_DWORD *)ptr - 3) && !memcmp(s1, ptr, v11) )
      v9 = 1;
    if ( (int *)v10 != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    v6 = (char *)s2;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6 - 12);
  if ( v9 == 1 )
    sub_119C854(v4, v5);
    sub_119C8A4((const void **)v4, (const void **)(v3 + 136));
  v12 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)((char *)s1 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


void __fastcall SkinRepositoryClientInterface::addRecentSkin(int a1, Options **a2)
{
  SkinRepositoryClientInterface::addRecentSkin(a1, a2);
}


void __fastcall SkinRepositoryClientInterface::setSelectedSkin(int a1, unsigned int *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@1
  Skin *v5; // r0@4
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+4h] [bp-34h]@1
  char v12; // [sp+8h] [bp-30h]@1
  int v13; // [sp+1Ch] [bp-1Ch]@4

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 8);
  SkinRepositoryClientInterface::_solveSerializableName(&v11, a1, a2);
  SkinRepository::deserializeSkinName((int)&v12, v3, (unsigned int *)&v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  if ( SkinRepository::isKnownSkinPackUnLoaded(*(SkinRepository **)(v2 + 8), (const mce::UUID *)&v12) == 1 )
    SkinRepository::loadSkinPack(*(SkinRepository **)(v2 + 8), (const mce::UUID *)&v12, 0);
  v5 = SkinRepository::resolveSkinHandle(*(_DWORD *)(v2 + 8), (int)&v12);
  SkinRepositoryClientInterface::setSelectedSkin((SkinRepositoryClientInterface *)v2, v5);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


Skin *__fastcall SkinRepositoryClientInterface::getSelectedSkinOrDefault(SkinRepositoryClientInterface *this, int a2)
{
  SkinRepositoryClientInterface *v2; // r9@1
  const mce::UUID *v3; // r8@1
  int v4; // r7@1
  Skin *v5; // r0@1
  Skin *v6; // r6@1
  unsigned int v7; // r0@5
  int v8; // r1@5
  signed int v9; // r2@5
  int v10; // r0@6
  int *v11; // r5@6
  int v12; // r4@6
  char v13; // r0@7
  Skin *v14; // r1@7
  unsigned int v16; // [sp+0h] [bp-9F0h]@5
  unsigned int v17; // [sp+4h] [bp-9ECh]@5
  int v18; // [sp+9C4h] [bp-2Ch]@5
  char v19; // [sp+9C8h] [bp-28h]@5
  int v20; // [sp+9CCh] [bp-24h]@5
  int v21; // [sp+9D0h] [bp-20h]@7

  v2 = this;
  v3 = (SkinRepositoryClientInterface *)((char *)this + 16);
  v4 = a2;
  v5 = SkinRepository::resolveSkinHandle(*((_DWORD *)this + 2), (int)this + 16);
  v6 = v5;
  if ( !v5 || v4 == 1 && !Skin::isFree(v5) && !SkinRepository::isSkinPackOwned(*((SkinRepository **)v2 + 2), v3) )
  {
    v7 = *((_DWORD *)v2 + 33);
    v16 = v7;
    v18 = 625;
    v8 = 0;
    v9 = 1;
    v19 = 0;
    v20 = 0;
    v17 = v7;
    do
    {
      v10 = v7 ^ (v7 >> 30);
      v11 = (int *)(&v16 + v8);
      v12 = v8++ + 1812433253 * v10;
      v7 = v9++ + 1812433253 * v10;
      v11[2] = v12 + 1;
    }
    while ( v8 != 397 );
    v18 = 624;
    v21 = 398;
    v13 = Random::_genRandInt32((Random *)&v16);
    v14 = SkinRepositoryClientInterface::_getDefaultSkin((int)v2, v13 & 1 ^ 3);
    if ( !v14 )
      v14 = (SkinRepositoryClientInterface *)((char *)v2 + 64);
    SkinRepositoryClientInterface::setSelectedSkin(v2, v14);
    v6 = SkinRepository::resolveSkinHandle(*((_DWORD *)v2 + 2), (int)v3);
  }
  return v6;
}


char *__fastcall SkinRepositoryClientInterface::getCustomSkinLocation(SkinRepositoryClientInterface *this)
{
  return (char *)this + 140;
}


void __fastcall SkinRepositoryClientInterface::initialize(SkinRepositoryClientInterface *this)
{
  SkinRepositoryClientInterface::initialize(this);
}


_DWORD *__fastcall SkinRepositoryClientInterface::SkinRepositoryClientInterface(_DWORD *a1, int a2, int a3, unsigned int *a4, int a5)
{
  _DWORD *v5; // r4@1
  unsigned int *v6; // r8@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@4
  int v10; // r12@7
  int v11; // r3@7
  __int64 v12; // kr00_8@7
  int v13; // r12@7
  int v14; // r3@7
  __int64 v15; // kr08_8@7
  int v16; // r5@9
  unsigned int v17; // r0@10
  unsigned int *v18; // r7@10
  unsigned int v19; // r1@13
  unsigned int v20; // r2@14
  int v21; // r0@15
  bool v22; // zf@15
  int v23; // r8@18
  _DWORD *v24; // r0@18
  __int64 v25; // r1@18
  unsigned int v26; // r0@22
  unsigned int *v27; // r6@26
  unsigned int v28; // r0@28
  _DWORD *v30; // [sp+8h] [bp-40h]@18
  __int64 v31; // [sp+10h] [bp-38h]@18
  char v32; // [sp+1Bh] [bp-2Dh]@7
  char v33; // [sp+1Ch] [bp-2Ch]@7

  v5 = a1;
  *a1 = *(_DWORD *)a3;
  v6 = a4;
  v7 = *(_DWORD *)(a3 + 4);
  v5[1] = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  v10 = (int)(v5 + 4);
  v5[2] = a2;
  v11 = *(&mce::UUID::EMPTY + 1);
  v12 = qword_287E930;
  *(_DWORD *)v10 = mce::UUID::EMPTY;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  v13 = (int)(v5 + 10);
  v5[7] = HIDWORD(v12);
  v5[8] = -1;
  v5[9] = &unk_28898CC;
  v14 = *(&mce::UUID::EMPTY + 1);
  v15 = qword_287E930;
  *(_DWORD *)v13 = mce::UUID::EMPTY;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  v5[13] = HIDWORD(v15);
  v5[14] = -1;
  v5[15] = &unk_28898CC;
  Skin::Skin((int)(v5 + 16));
  v5[29] = &unk_28898CC;
  v5[30] = 0;
  v5[31] = 0;
  v5[32] = 0;
  v5[33] = *v6;
  Util::toString<unsigned int,(void *)0,(void *)0>((void **)v5 + 34, *v6);
  sub_119C854(v5 + 35, (int *)a5);
  v5[36] = *(_DWORD *)(a5 + 4);
  v32 = 1;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
    (int)(v5 + 37),
    (int)&v33,
    &v32);
  SkinRepositoryClientInterface::_registerCustomSkins((int)v5, 0);
  SkinRepositoryClientInterface::_registerCustomSkins((int)v5, 1);
  if ( SkinRepository::isValidSkin((SkinRepository *)v5[2], (const ResourceLocation *)(v5 + 35)) == 1 )
    SkinRepository::loadSkin((SkinRepository *)v5[2], (const ResourceLocation *)(v5 + 35));
  v16 = v5[1];
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 4);
    v18 = (unsigned int *)(v16 + 4);
    while ( v17 )
      v19 = __ldrex(v18);
      if ( v19 == v17 )
      {
        v20 = __strex(v17 + 1, v18);
        v17 = v19;
        if ( !v20 )
        {
          __dmb();
          v21 = *v18;
          v22 = *v18 == 0;
          if ( *v18 )
          {
            v21 = *v5;
            v22 = *v5 == 0;
          }
          if ( !v22 )
            v23 = Options::get(v21, 15);
            v24 = operator new(4u);
            LODWORD(v25) = sub_E84CB4;
            *v24 = v5;
            HIDWORD(v25) = sub_E84CAC;
            v30 = v24;
            v31 = v25;
            Option::registerObserver(v23, (int)v5, (int)&v30);
            if ( (_DWORD)v31 )
              ((void (*)(void))v31)();
          if ( &pthread_create )
            __dmb();
            do
              v26 = __ldrex(v18);
            while ( __strex(v26 - 1, v18) );
          else
            v26 = (*v18)--;
          if ( v26 == 1 )
            v27 = (unsigned int *)(v16 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
          return v5;
        }
      }
      else
        __clrex();
  return v5;
}


void __fastcall SkinRepositoryClientInterface::addRecentSkin(int a1, Options **a2)
{
  Options *v2; // r5@0
  int v3; // r9@1
  int *v4; // r10@1
  const void **v5; // r4@1
  unsigned __int64 *v6; // r8@1
  int *v7; // r7@1
  size_t v8; // r6@2
  int v9; // r1@7
  int v10; // r0@9
  int v11; // r2@10
  signed int v12; // r3@11
  int v13; // r4@13
  int v14; // r1@15
  void *v15; // r0@15
  int v16; // r4@16
  unsigned int v17; // r0@17
  unsigned int *v18; // r6@17
  unsigned int v19; // r1@20
  unsigned int v20; // r2@21
  bool v21; // zf@22
  unsigned int v22; // r0@28
  unsigned int *v23; // r5@32
  unsigned int v24; // r0@34
  unsigned int *v25; // r2@40
  signed int v26; // r1@42

  v3 = a1;
  v4 = (int *)a2;
  v6 = (unsigned __int64 *)(a1 + 120);
  v5 = *(const void ***)(a1 + 120);
  v7 = *(int **)(a1 + 124);
  if ( (int *)v5 == v7 )
  {
LABEL_6:
    if ( v7 == *(int **)(v3 + 128) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(v6, v4);
      v9 = *(_DWORD *)(v3 + 124);
    }
    else
      sub_119C854(v7, v4);
      v9 = *(_DWORD *)(v3 + 124) + 4;
      *(_DWORD *)(v3 + 124) = v9;
    v10 = *(_DWORD *)v6;
    if ( (unsigned int)((v9 - *(_DWORD *)v6) >> 2) >= 4 )
      v11 = v10 + 4;
      if ( v10 + 4 != v9 )
      {
        v12 = v9 - v11;
        v11 = v9;
        if ( v12 >= 1 )
        {
          v2 = (Options *)((v12 >> 2) + 1);
          do
          {
            v13 = v10 + 4;
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)v10,
              (int *)(v10 + 4));
            v2 = (Options *)((char *)v2 - 1);
            v10 = v13;
          }
          while ( (signed int)v2 > 1 );
          v11 = *(_DWORD *)(v3 + 124);
        }
      }
      *(_DWORD *)(v3 + 124) = v11 - 4;
      v14 = *(_DWORD *)(v11 - 4);
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
          __dmb();
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = *(_DWORD *)(v3 + 4);
    if ( v16 )
      v17 = *(_DWORD *)(v16 + 4);
      v18 = (unsigned int *)(v16 + 4);
      while ( v17 )
        __dmb();
        v19 = __ldrex(v18);
        if ( v19 == v17 )
          v20 = __strex(v17 + 1, v18);
          v17 = v19;
          if ( !v20 )
            __dmb();
            v21 = *v18 == 0;
            if ( *v18 )
            {
              v2 = *(Options **)v3;
              v21 = *(_DWORD *)v3 == 0;
            }
            if ( !v21 )
              Options::setRecentSkinIds((int)v2, v6);
              Options::save(v2, 0);
            if ( &pthread_create )
              __dmb();
              do
                v22 = __ldrex(v18);
              while ( __strex(v22 - 1, v18) );
            else
              v22 = (*v18)--;
            if ( v22 == 1 )
              v23 = (unsigned int *)(v16 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v24 = __ldrex(v23);
                while ( __strex(v24 - 1, v23) );
              }
              else
                v24 = (*v23)--;
              if ( v24 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
            return;
          __clrex();
  }
  else
    v2 = *a2;
    v8 = *((_DWORD *)*a2 - 3);
    while ( *((_DWORD *)*v5 - 3) != v8 || memcmp(*v5, (const void *)v2, v8) )
      ++v5;
      if ( (const void **)v7 == v5 )
        goto LABEL_6;
}


void **__fastcall SkinRepositoryClientInterface::_getCustomSkinSerializableName(void **a1, int a2, int a3)
{
  void **result; // r0@2

  if ( a3 == 1 )
    result = sub_119C884(a1, "CustomSlim");
  else
    result = sub_119C884(a1, "Custom");
  return result;
}


void __fastcall SkinRepositoryClientInterface::_getDefaultSkinSerializableName(void **a1, int a2, int a3)
{
  SkinRepositoryClientInterface::_getDefaultSkinSerializableName(a1, a2, a3);
}


int *__fastcall SkinRepositoryClientInterface::getPendingSelectedSkin(SkinRepositoryClientInterface *this, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // lr@1

  v2 = *(_DWORD *)(a2 + 44);
  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_DWORD *)(a2 + 52);
  v5 = *(_DWORD *)(a2 + 56);
  *(_DWORD *)this = *(_DWORD *)(a2 + 40);
  *((_DWORD *)this + 1) = v2;
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 3) = v4;
  *((_DWORD *)this + 4) = v5;
  return sub_119C854((int *)this + 5, (int *)(a2 + 60));
}


SkinPack *__fastcall SkinRepositoryClientInterface::setLastCustomSkinIndex(SkinRepositoryClientInterface *this, int a2)
{
  int v2; // r4@1
  SkinRepositoryClientInterface *v3; // r5@1
  SkinPack *result; // r0@1
  int *v5; // r0@3
  const void **v6; // r6@3
  int v7; // r4@3
  unsigned int *v8; // r7@4
  SkinPack *v9; // r1@7
  unsigned int v10; // r2@8
  bool v11; // zf@9
  unsigned int *v12; // r5@19

  v2 = a2;
  v3 = this;
  result = SkinRepository::getSkinPackById(
             *((SkinRepository **)this + 2),
             (const mce::UUID *)&SkinRepository::VANILLA_SKIN_PACK_UUID);
  if ( result )
  {
    result = (SkinPack *)SkinPack::getSkinAt(result, v2);
    if ( result )
    {
      v5 = (int *)Skin::getSerializable(result);
      v6 = (const void **)((char *)v3 + 116);
      result = (SkinPack *)EntityInteraction::setInteractText((int *)v3 + 29, v5);
      v7 = *((_DWORD *)v3 + 1);
      if ( v7 )
      {
        result = *(SkinPack **)(v7 + 4);
        v8 = (unsigned int *)(v7 + 4);
        while ( result )
        {
          __dmb();
          v9 = (SkinPack *)__ldrex(v8);
          if ( v9 == result )
          {
            v10 = __strex((unsigned int)result + 1, v8);
            result = v9;
            if ( !v10 )
            {
              __dmb();
              v11 = *v8 == 0;
              if ( *v8 )
              {
                v3 = *(SkinRepositoryClientInterface **)v3;
                v11 = v3 == 0;
              }
              if ( !v11 )
                Options::setLastCustomSkinId((int)v3, v6);
                Options::save(v3, 0);
              if ( &pthread_create )
                __dmb();
                do
                  result = (SkinPack *)__ldrex(v8);
                while ( __strex((unsigned int)result - 1, v8) );
              else
                result = (SkinPack *)(*v8)--;
              if ( result == (SkinPack *)1 )
                v12 = (unsigned int *)(v7 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    result = (SkinPack *)__ldrex(v12);
                  while ( __strex((unsigned int)result - 1, v12) );
                }
                else
                  result = (SkinPack *)(*v12)--;
                if ( result == (SkinPack *)1 )
                  result = (SkinPack *)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
              return result;
            }
          }
          else
            __clrex();
        }
      }
    }
  }
  return result;
}


int __fastcall SkinRepositoryClientInterface::pickCustomSkin(int a1, int a2)
{
  __int64 v2; // r6@0
  int v3; // r8@1
  int v4; // r6@1
  void (__fastcall *v5)(int *); // r3@1
  void *v6; // r0@4
  int result; // r0@4
  int v8; // [sp+4h] [bp-3Ch]@1
  int v9; // [sp+8h] [bp-38h]@2
  int (__fastcall *v10)(int *, int *, signed int); // [sp+10h] [bp-30h]@1
  int v11; // [sp+14h] [bp-2Ch]@2
  void *v12; // [sp+18h] [bp-28h]@4
  int (*v13)(void); // [sp+20h] [bp-20h]@4
  void (__fastcall *v14)(int *, int, int *); // [sp+24h] [bp-1Ch]@4

  v3 = *(_DWORD *)(a1 + 8);
  v8 = a1;
  v4 = a2;
  v10 = 0;
  v5 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v5 )
  {
    v5(&v9);
    HIDWORD(v2) = *(_DWORD *)(v4 + 12);
    v11 = *(_DWORD *)(v2 + 12);
    LODWORD(v2) = *(_DWORD *)(v2 + 8);
    v10 = (int (__fastcall *)(int *, int *, signed int))v2;
  }
  else
    LODWORD(v2) = 0;
  v13 = 0;
  v6 = operator new(0x14u);
  *(_DWORD *)v6 = v8;
  *(_QWORD *)((char *)v6 + 4) = *(_QWORD *)&v9;
  *(_QWORD *)((char *)v6 + 12) = v2;
  v12 = v6;
  v13 = (int (*)(void))sub_E84FC4;
  v14 = sub_E84DD0;
  result = SkinRepository::pickSkin(v3, (int)&v12);
  if ( v13 )
    result = v13();
  if ( v10 )
    result = v10(&v9, &v9, 3);
  return result;
}


Skin *__fastcall SkinRepositoryClientInterface::getDefaultSkin(SkinRepositoryClientInterface *this)
{
  SkinRepositoryClientInterface *v1; // r8@1
  unsigned int v2; // r0@1
  int v3; // r1@1
  signed int v4; // r2@1
  int v5; // r0@2
  int *v6; // r7@2
  int v7; // r6@2
  char v8; // r0@3
  Skin *result; // r0@3
  unsigned int v10; // [sp+4h] [bp-9ECh]@1
  unsigned int v11; // [sp+8h] [bp-9E8h]@1
  int v12; // [sp+9C8h] [bp-28h]@1
  char v13; // [sp+9CCh] [bp-24h]@1
  int v14; // [sp+9D0h] [bp-20h]@1
  int v15; // [sp+9D4h] [bp-1Ch]@3

  v1 = this;
  v2 = *((_DWORD *)this + 33);
  v10 = v2;
  v12 = 625;
  v3 = 0;
  v4 = 1;
  v13 = 0;
  v14 = 0;
  v11 = v2;
  do
  {
    v5 = v2 ^ (v2 >> 30);
    v6 = (int *)(&v10 + v3);
    v7 = v3++ + 1812433253 * v5;
    v2 = v4++ + 1812433253 * v5;
    v6[2] = v7 + 1;
  }
  while ( v3 != 397 );
  v12 = 624;
  v15 = 398;
  v8 = Random::_genRandInt32((Random *)&v10);
  result = SkinRepositoryClientInterface::_getDefaultSkin((int)v1, v8 & 1 ^ 3);
  if ( !result )
    result = (SkinRepositoryClientInterface *)((char *)v1 + 64);
  return result;
}


_BOOL4 __fastcall SkinRepositoryClientInterface::hasDefaultSkin(int a1, int a2)
{
  return SkinRepositoryClientInterface::_getDefaultSkin(a1, a2) != 0;
}


void **__fastcall SkinRepositoryClientInterface::_getCustomSkinGeometryName(void **a1, int a2, int a3)
{
  void **result; // r0@2

  if ( a3 == 1 )
    result = sub_119C884(a1, "geometry.humanoid.customSlim");
  else
    result = sub_119C884(a1, "geometry.humanoid.custom");
  return result;
}


int __fastcall SkinRepositoryClientInterface::getLastCustomSkinIndex(SkinRepositoryClientInterface *this)
{
  SkinRepositoryClientInterface *v1; // r4@1
  int v2; // r5@1
  int *v3; // r0@1
  Skin *v4; // r6@1
  void *v5; // r0@1
  Skin *v6; // r0@3
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-20h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  v3 = sub_119C854(&v10, (int *)this + 29);
  sub_119C8A4((const void **)v3, (const void **)v1 + 34);
  v4 = SkinRepository::getSkinBySerializableName(v2, (unsigned int *)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  if ( v4 )
    v6 = v4;
  else
    v6 = SkinRepositoryClientInterface::_getDefaultSkin((int)v1, 4);
    if ( !v6 )
      v6 = (SkinRepositoryClientInterface *)((char *)v1 + 64);
  return Skin::getSkinIndex(v6);
}


Skin *__fastcall SkinRepositoryClientInterface::setSelectedSkin(SkinRepositoryClientInterface *this, const Skin *a2)
{
  Options *v2; // r4@0
  const Skin *v3; // r5@1
  SkinRepositoryClientInterface *v4; // r8@1
  char *v5; // r6@4
  int v6; // r0@4
  int v7; // ST00_4@4
  Options *v8; // ST04_4@4
  const Skin *v9; // ST08_4@4
  int v10; // ST0C_4@4
  int v11; // ST10_4@4
  int v12; // r0@4
  char *v13; // r0@4
  unsigned int *v14; // r2@5
  signed int v15; // r1@7
  unsigned int v16; // r0@10
  signed int v17; // r2@10
  int v18; // r1@10
  int v19; // r0@11
  int *v20; // r7@11
  int v21; // r4@11
  char v22; // r0@12
  Skin *v23; // r1@12
  Skin *result; // r0@15
  bool v25; // zf@15
  unsigned int v26; // r1@18
  unsigned int *v27; // r6@18
  unsigned int v28; // r2@21
  unsigned int v29; // r3@22
  bool v30; // zf@23
  char *v31; // r0@26
  unsigned int *v32; // r4@33
  char *v33; // [sp+14h] [bp-9F4h]@4
  unsigned int v34; // [sp+1Ch] [bp-9ECh]@10
  unsigned int v35; // [sp+20h] [bp-9E8h]@10
  int v36; // [sp+9E0h] [bp-28h]@10
  char v37; // [sp+9E4h] [bp-24h]@10
  int v38; // [sp+9E8h] [bp-20h]@10
  int v39; // [sp+9ECh] [bp-1Ch]@12

  v3 = a2;
  v4 = this;
  if ( a2 )
  {
    if ( Skin::isCustomSkin(a2) != 1
      || SkinRepository::isValidSkin(*((SkinRepository **)v4 + 2), (SkinRepositoryClientInterface *)((char *)v4 + 140)) )
    {
      v5 = Skin::getSkinPackId(v3);
      v6 = Skin::getSkinIndex(v3);
      v7 = *(_DWORD *)v5;
      v8 = (Options *)*((_DWORD *)v5 + 1);
      v9 = (const Skin *)*((_DWORD *)v5 + 2);
      v10 = *((_DWORD *)v5 + 3);
      v11 = v6;
      v33 = (char *)&unk_28898CC;
      v12 = (int)v4 + 16;
      v2 = v8;
      v3 = v9;
      *(_DWORD *)v12 = v7;
      *(_DWORD *)(v12 + 4) = v8;
      *(_DWORD *)(v12 + 8) = v9;
      *(_DWORD *)(v12 + 12) = v10;
      *(_DWORD *)(v12 + 16) = v11;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v4 + 9,
        (int *)&v33);
      v13 = v33 - 12;
      if ( (int *)(v33 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v33 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      }
    }
    else
      v16 = *((_DWORD *)v4 + 33);
      v34 = v16;
      v17 = 1;
      v36 = 625;
      v18 = 0;
      v3 = (const Skin *)397;
      v37 = 0;
      v38 = 0;
      v35 = v16;
      do
        v19 = v16 ^ (v16 >> 30);
        v20 = (int *)(&v34 + v18);
        v21 = v18++ + 1812433253 * v19;
        v16 = v17++ + 1812433253 * v19;
        v2 = (Options *)(v21 + 1);
        v20[2] = (int)v2;
      while ( v18 != 397 );
      v36 = 624;
      v39 = 398;
      v22 = Random::_genRandInt32((Random *)&v34);
      v23 = SkinRepositoryClientInterface::_getDefaultSkin((int)v4, v22 & 1 ^ 3);
      if ( !v23 )
        v23 = (SkinRepositoryClientInterface *)((char *)v4 + 64);
      SkinRepositoryClientInterface::setSelectedSkin(v4, v23);
  }
  else
    SkinRepositoryClientInterface::_setDefaultSkin(this);
  result = SkinRepository::resolveSkinHandle(*((_DWORD *)v4 + 2), (int)v4 + 16);
  v25 = result == 0;
  if ( result )
    v3 = (const Skin *)*((_DWORD *)v4 + 1);
    v25 = v3 == 0;
  if ( !v25 )
    v26 = *((_DWORD *)v3 + 1);
    v27 = (unsigned int *)((char *)v3 + 4);
    while ( v26 )
      __dmb();
      v28 = __ldrex(v27);
      if ( v28 == v26 )
        v29 = __strex(v26 + 1, v27);
        v26 = v28;
        if ( !v29 )
          v30 = *v27 == 0;
          if ( *v27 )
          {
            v2 = *(Options **)v4;
            v30 = *(_DWORD *)v4 == 0;
          }
          if ( !v30 )
            v31 = Skin::getSerializable(result);
            Options::setSkinId((int)v2, (const void **)v31);
            Options::save(v2, 0);
          if ( &pthread_create )
            __dmb();
            do
              result = (Skin *)__ldrex(v27);
            while ( __strex((unsigned int)result - 1, v27) );
          else
            result = (Skin *)(*v27)--;
          if ( result == (Skin *)1 )
            v32 = (unsigned int *)((char *)v3 + 8);
            (*(void (__fastcall **)(const Skin *))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (Skin *)__ldrex(v32);
              while ( __strex((unsigned int)result - 1, v32) );
            }
            else
              result = (Skin *)(*v32)--;
            if ( result == (Skin *)1 )
              result = (Skin *)(*(int (__fastcall **)(const Skin *))(*(_DWORD *)v3 + 12))(v3);
          return result;
      else
        __clrex();
  return result;
}


Skin *__fastcall SkinRepositoryClientInterface::getDefaultSkin(int a1, int a2)
{
  int v2; // r4@1
  Skin *result; // r0@1

  v2 = a1;
  result = SkinRepositoryClientInterface::_getDefaultSkin(a1, a2);
  if ( !result )
    result = (Skin *)(v2 + 64);
  return result;
}
