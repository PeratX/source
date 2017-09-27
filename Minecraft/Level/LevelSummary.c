

signed int __fastcall LevelSummary::isEditionCompatible(LevelSummary *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 45);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


LevelSummary *__fastcall LevelSummary::~LevelSummary(LevelSummary *this)
{
  LevelSummary *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 13);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (int *)(*(_DWORD *)v1 - 12);
  if ( v8 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  return v1;
}


        if ( LevelSummary::operator<((int)v7, (int)v4) == 1 )
{
          do
            v7 += 16;
          while ( LevelSummary::operator<((int)v7, (int)v4) );
        }
        do
          v8 -= 64;
        while ( LevelSummary::operator<((int)v4, v8) );
        if ( (unsigned int)v7 >= v8 )
          break;
        std::swap<LevelSummary>(v7, v8);
        v7 += 16;
      }
      std::__introsort_loop<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
        (int)v7,
        (int)v3,
        --v6);
      result = (char *)v7 - (char *)v4;
      v3 = v7;
      if ( (char *)v7 - (char *)v4 <= 1024 )
        return result;
    }
    std::__make_heap<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Iter_less_iter>(
      (int)v4,
      (int)v3);
    do
    {
      v3 -= 16;
      std::__pop_heap<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Iter_less_iter>(
        (int)v4,
        v3);
      result = (char *)v3 - (char *)v4;
    while ( (char *)v3 - (char *)v4 > 64 );
  }
  return result;
}


    if ( LevelSummary::operator<((int)&v27, v2 - 52) != 1 )
{
    EntityInteraction::setInteractText(v1, (int *)(v2 - 52));
    EntityInteraction::setInteractText(v1 + 1, (int *)(v2 - 48));
    v4 = (int)(v1 + 2);
    v5 = *(_DWORD *)(v2 - 40);
    v6 = *(_DWORD *)(v2 - 36);
    v7 = *(_DWORD *)(v2 - 32);
    v8 = *(_DWORD *)(v2 - 28);
    *(_DWORD *)v4 = *(_DWORD *)(v2 - 44);
    *(_DWORD *)(v4 + 4) = v5;
    *(_DWORD *)(v4 + 8) = v6;
    *(_DWORD *)(v4 + 12) = v7;
    *(_DWORD *)(v4 + 16) = v8;
    v9 = (int)(v1 + 7);
    v10 = *(_DWORD *)(v2 - 20);
    v11 = *(_DWORD *)(v2 - 16);
    v12 = *(_DWORD *)(v2 - 12);
    v13 = *(_DWORD *)(v2 - 8);
    v14 = *(_DWORD *)(v2 - 4);
    *(_DWORD *)v9 = *(_DWORD *)(v2 - 24);
    *(_DWORD *)(v9 + 4) = v10;
    *(_DWORD *)(v9 + 8) = v11;
    *(_DWORD *)(v9 + 12) = v12;
    *(_DWORD *)(v9 + 16) = v13;
    *(_DWORD *)(v9 + 20) = v14;
    EntityInteraction::setInteractText(v1 + 13, (int *)v2);
    EntityInteraction::setInteractText(v1 + 14, (int *)(v2 + 4));
    v2 -= 64;
    v1 = (int *)v3;
  }
  EntityInteraction::setInteractText(v1, &v27);
  EntityInteraction::setInteractText(v1 + 1, (int *)((unsigned int)&v27 | 4));
  v15 = (int)(v1 + 2);
  v16 = v29;
  v17 = v30;
  v18 = v31;
  v19 = v32;
  *(_DWORD *)v15 = v28;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  *(_DWORD *)(v15 + 12) = v18;
  *(_DWORD *)(v15 + 16) = v19;
  v20 = (int)(v1 + 7);
  v21 = v34;
  v22 = v35;
  v23 = v36;
  v24 = v37;
  v25 = v38;
  *(_DWORD *)v20 = v33;
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  *(_DWORD *)(v20 + 16) = v24;
  *(_DWORD *)(v20 + 20) = v25;
  EntityInteraction::setInteractText(v1 + 13, &v39);
  EntityInteraction::setInteractText(v1 + 14, &v40);
  return LevelSummary::~LevelSummary((LevelSummary *)&v27);
}


RakNet *__fastcall LevelSummary::_initializeWorldIconPath(int a1, int *a2)
{
  int v2; // r8@1
  int *v3; // r5@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r2@1
  int v8; // r3@1
  void *v9; // r0@5
  void *v10; // r0@6
  RakNet *result; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+0h] [bp-18h]@3
  int v17; // [sp+4h] [bp-14h]@3
  int v18; // [sp+8h] [bp-10h]@1
  int v19; // [sp+Ch] [bp-Ch]@1
  int v20; // [sp+10h] [bp-8h]@1
  int v21; // [sp+14h] [bp-4h]@1
  int v22; // [sp+18h] [bp+0h]@1
  int v23; // [sp+1Ch] [bp+4h]@1
  int v24; // [sp+20h] [bp+8h]@1
  int v25; // [sp+24h] [bp+Ch]@1
  char v26; // [sp+34h] [bp+1Ch]@1
  int v27; // [sp+38h] [bp+20h]@1
  RakNet *v28; // [sp+43Ch] [bp+424h]@1

  v2 = a1;
  v3 = a2;
  v28 = _stack_chk_guard;
  v4 = *a2;
  v5 = *(_DWORD *)(LevelSummary::CUSTOM_ICON_FILENAME - 12);
  v6 = *(_DWORD *)(v4 - 12);
  v22 = v4;
  v23 = v6;
  v24 = LevelSummary::CUSTOM_ICON_FILENAME;
  v25 = v5;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v26, (int)&v22, 2);
  sub_21E94B4((void **)&v21, (const char *)&v27);
  v7 = *(_DWORD *)(LevelSummary::WORLD_ICON_FILENAME - 12);
  v8 = *(_DWORD *)(*v3 - 12);
  v22 = *v3;
  v23 = v8;
  v24 = LevelSummary::WORLD_ICON_FILENAME;
  v25 = v7;
  sub_21E94B4((void **)&v20, (const char *)&v27);
  v18 = v21;
  v19 = *(_DWORD *)(v21 - 12);
  if ( j_Core::FileSystem::fileOrDirectoryExists((__int64 *)&v18) == 1 )
  {
    EntityInteraction::setInteractText((int *)(v2 + 52), &v21);
  }
  else
    v16 = v20;
    v17 = *(_DWORD *)(v20 - 12);
    if ( j_Core::FileSystem::fileOrDirectoryExists((__int64 *)&v16) == 1 )
      EntityInteraction::setInteractText((int *)(v2 + 52), &v20);
  v9 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v13 = __ldrex(v12);
        __strex(v13 - 1, v12);
      }
      while ( &v22 );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
        v15 = __ldrex(v14);
        __strex(v15 - 1, v14);
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  result = (RakNet *)(_stack_chk_guard - v28);
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail((int)result);
  return result;
}


char *__fastcall LevelSummary::buildCustomIconPath(void **a1, int *a2)
{
  void **v2; // r4@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  char *result; // r0@1
  int v7; // [sp+0h] [bp-430h]@1
  int v8; // [sp+4h] [bp-42Ch]@1
  int v9; // [sp+8h] [bp-428h]@1
  int v10; // [sp+Ch] [bp-424h]@1
  char v11; // [sp+14h] [bp-41Ch]@1
  int v12; // [sp+18h] [bp-418h]@1
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v2 = a1;
  v13 = _stack_chk_guard;
  v3 = *a2;
  v4 = *(_DWORD *)(LevelSummary::CUSTOM_ICON_FILENAME - 12);
  v5 = *(_DWORD *)(v3 - 12);
  v7 = v3;
  v8 = v5;
  v9 = LevelSummary::CUSTOM_ICON_FILENAME;
  v10 = v4;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v7, 2);
  sub_21E94B4(v2, (const char *)&v12);
  result = (char *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    j___stack_chk_fail((int)result);
  return result;
}


int *__fastcall LevelSummary::LevelSummary(int *a1)
{
  int *v1; // r5@1

  v1 = a1;
  sub_21E8AF4(a1, (int *)&LevelSummary::INVALID_LEVEL_ID);
  sub_21E94B4((void **)v1 + 1, "invalid name");
  v1[2] = -1;
  v1[3] = -1;
  v1[4] = 4;
  v1[5] = -1;
  v1[8] = -1;
  v1[9] = -1;
  *((_WORD *)v1 + 22) = 0;
  v1[10] = 0;
  v1[13] = (int)&unk_28898CC;
  v1[14] = (int)&unk_28898CC;
  return v1;
}


signed int __fastcall LevelSummary::isNetworkCompatible(LevelSummary *this)
{
  signed int v1; // r2@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 6);
  result = 0;
  if ( v1 <= 137 )
    result = 1;
  return result;
}


int *__fastcall LevelSummary::LevelSummary(int *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11, char a12, char a13, char a14, char a15, char a16, int a17, int *a18, int *a19)
{
  return LevelSummary::LevelSummary(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19);
}


      if ( LevelSummary::operator<((int)v2, (int)v4) == 1 )
{
        v37 = v7;
        LevelSummary::LevelSummary(v6, v2);
        if ( (char *)v2 - (char *)v4 >= 1 )
        {
          v8 = (int *)v7;
          v9 = (((char *)v2 - (char *)v4) >> 6) + 1;
          do
          {
            EntityInteraction::setInteractText(v8 - 14, v8 - 30);
            EntityInteraction::setInteractText(v8 - 13, v8 - 29);
            v10 = (int)(v8 - 12);
            v11 = *(v8 - 27);
            v12 = *(v8 - 26);
            v13 = *(v8 - 25);
            v14 = *(v8 - 24);
            *(_DWORD *)v10 = *(v8 - 28);
            *(_DWORD *)(v10 + 4) = v11;
            *(_DWORD *)(v10 + 8) = v12;
            *(_DWORD *)(v10 + 12) = v13;
            *(_DWORD *)(v10 + 16) = v14;
            v15 = (int)(v8 - 7);
            v16 = *(v8 - 22);
            v17 = *(v8 - 21);
            v18 = *(v8 - 20);
            v19 = *(v8 - 19);
            v20 = *(v8 - 18);
            *(_DWORD *)v15 = *(v8 - 23);
            *(_DWORD *)(v15 + 4) = v16;
            *(_DWORD *)(v15 + 8) = v17;
            *(_DWORD *)(v15 + 12) = v18;
            *(_DWORD *)(v15 + 16) = v19;
            *(_DWORD *)(v15 + 20) = v20;
            EntityInteraction::setInteractText(v8 - 1, v8 - 17);
            EntityInteraction::setInteractText(v8, v8 - 16);
            --v9;
            v8 -= 16;
          }
          while ( v9 > 1 );
        }
        v4 = (LevelSummary *)v36;
        v6 = (int *)&v38;
        EntityInteraction::setInteractText(v36, (int *)&v38);
        EntityInteraction::setInteractText(v34, (int *)((unsigned int)&v38 | 4));
        v21 = v40;
        v22 = v41;
        v23 = v42;
        v24 = v43;
        *(_DWORD *)v32 = v39;
        *((_DWORD *)v32 + 1) = v21;
        *((_DWORD *)v32 + 2) = v22;
        *((_DWORD *)v32 + 3) = v23;
        *((_DWORD *)v32 + 4) = v24;
        v25 = (int)(v32 + 20);
        v26 = v45;
        v27 = v46;
        v28 = v47;
        v29 = v48;
        v30 = v49;
        *(_DWORD *)v25 = v44;
        *(_DWORD *)(v25 + 4) = v26;
        *(_DWORD *)(v25 + 8) = v27;
        *(_DWORD *)(v25 + 12) = v28;
        *(_DWORD *)(v25 + 16) = v29;
        *(_DWORD *)(v25 + 20) = v30;
        EntityInteraction::setInteractText(v33, &v50);
        EntityInteraction::setInteractText(v31, &v51);
        result = LevelSummary::~LevelSummary((LevelSummary *)&v38);
        v3 = v35;
        v7 = v37;
      }
      else
      {
        result = std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Val_less_iter>(v2);
      v2 += 16;
      v7 += 64;
    }
    while ( (LevelSummary *)v2 != v3 );
  }
  return result;
}


int *__fastcall LevelSummary::LevelSummary(int *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11, char a12, char a13, char a14, char a15, char a16, int a17, int *a18, int *a19)
{
  int v19; // r5@1
  int *v20; // r7@1
  int *v21; // r4@1

  v19 = a4;
  v20 = a3;
  v21 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v21 + 1, v20);
  v21[2] = v19;
  v21[3] = a5;
  v21[4] = a6;
  v21[5] = a7;
  v21[6] = a8;
  v21[8] = a9;
  v21[9] = a10;
  *((_BYTE *)v21 + 40) = a11;
  *((_BYTE *)v21 + 41) = a12;
  *((_BYTE *)v21 + 42) = a13;
  *((_BYTE *)v21 + 43) = a14;
  *((_BYTE *)v21 + 44) = a15;
  *((_BYTE *)v21 + 45) = a16;
  v21[12] = a17;
  v21[13] = (int)&unk_28898CC;
  sub_21E8AF4(v21 + 14, a19);
  LevelSummary::_initializeWorldIconPath((int)v21, a18);
  return v21;
}


signed int __fastcall LevelSummary::operator<(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)(a1 + 8);
  result = 0;
  if ( v2 > *(_DWORD *)(a2 + 8) )
    result = 1;
  return result;
}


      if ( LevelSummary::operator<(v3 + (v4 << 6), v3 + ((2 * v6 | 1) << 6)) )
{
      v8 = v3 + (v4 << 6);
      EntityInteraction::setInteractText((int *)(v3 + (v6 << 6)), (int *)(v3 + (v4 << 6)));
      EntityInteraction::setInteractText((int *)(v3 + (v6 << 6) + 4), (int *)(v8 + 4));
      v9 = v3;
      v10 = v3 + (v6 << 6) + 8;
      v11 = *(_DWORD *)(v8 + 12);
      v12 = *(_DWORD *)(v8 + 16);
      v13 = *(_DWORD *)(v8 + 20);
      v14 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)v10 = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v10 + 4) = v11;
      *(_DWORD *)(v10 + 8) = v12;
      *(_DWORD *)(v10 + 12) = v13;
      *(_DWORD *)(v10 + 16) = v14;
      v15 = v7 + 28;
      v16 = *(_DWORD *)(v8 + 32);
      v17 = *(_DWORD *)(v8 + 36);
      v18 = *(_DWORD *)(v8 + 40);
      v19 = *(_DWORD *)(v8 + 44);
      v20 = *(_DWORD *)(v8 + 48);
      *(_DWORD *)v15 = *(_DWORD *)(v8 + 28);
      *(_DWORD *)(v15 + 4) = v16;
      *(_DWORD *)(v15 + 8) = v17;
      *(_DWORD *)(v15 + 12) = v18;
      *(_DWORD *)(v15 + 16) = v19;
      *(_DWORD *)(v15 + 20) = v20;
      v3 = v9;
      EntityInteraction::setInteractText((int *)(v7 + 52), (int *)(v8 + 52));
      EntityInteraction::setInteractText((int *)(v7 + 56), (int *)(v8 + 56));
      v6 = v4;
    }
    while ( v4 < v5 );
  }
  if ( !(v36 & 1) && v4 == ((signed int)v36 - 2) / 2 )
  {
    v21 = v3 + (v4 << 6);
    v4 = 2 * v4 | 1;
    v22 = v3 + (v4 << 6);
    EntityInteraction::setInteractText((int *)v21, (int *)(v3 + (v4 << 6)));
    EntityInteraction::setInteractText((int *)(v21 + 4), (int *)(v22 + 4));
    v23 = v3;
    v24 = v21 + 8;
    v25 = *(_DWORD *)(v22 + 12);
    v26 = *(_DWORD *)(v22 + 16);
    v27 = *(_DWORD *)(v22 + 20);
    v28 = *(_DWORD *)(v22 + 24);
    *(_DWORD *)v24 = *(_DWORD *)(v22 + 8);
    *(_DWORD *)(v24 + 4) = v25;
    *(_DWORD *)(v24 + 8) = v26;
    *(_DWORD *)(v24 + 12) = v27;
    *(_DWORD *)(v24 + 16) = v28;
    v29 = v21 + 28;
    v30 = *(_DWORD *)(v22 + 32);
    v31 = *(_DWORD *)(v22 + 36);
    v32 = *(_DWORD *)(v22 + 40);
    v33 = *(_DWORD *)(v22 + 44);
    v34 = *(_DWORD *)(v22 + 48);
    *(_DWORD *)v29 = *(_DWORD *)(v22 + 28);
    *(_DWORD *)(v29 + 4) = v30;
    *(_DWORD *)(v29 + 8) = v31;
    *(_DWORD *)(v29 + 12) = v32;
    *(_DWORD *)(v29 + 16) = v33;
    *(_DWORD *)(v29 + 20) = v34;
    v3 = v23;
    EntityInteraction::setInteractText((int *)(v21 + 52), (int *)(v22 + 52));
    EntityInteraction::setInteractText((int *)(v21 + 56), (int *)(v22 + 56));
  LevelSummary::LevelSummary((int *)&v38, (int *)HIDWORD(v36));
  std::__push_heap<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,int,LevelSummary,__gnu_cxx::__ops::_Iter_less_val>(
    v3,
    v4,
    v37,
    (int)&v38);
  return LevelSummary::~LevelSummary((LevelSummary *)&v38);
}


char *__fastcall LevelSummary::buildWorldIconPath(void **a1, int *a2)
{
  void **v2; // r4@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  char *result; // r0@1
  int v7; // [sp+0h] [bp-430h]@1
  int v8; // [sp+4h] [bp-42Ch]@1
  int v9; // [sp+8h] [bp-428h]@1
  int v10; // [sp+Ch] [bp-424h]@1
  char v11; // [sp+14h] [bp-41Ch]@1
  int v12; // [sp+18h] [bp-418h]@1
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v2 = a1;
  v13 = _stack_chk_guard;
  v3 = *a2;
  v4 = *(_DWORD *)(LevelSummary::WORLD_ICON_FILENAME - 12);
  v5 = *(_DWORD *)(v3 - 12);
  v7 = v3;
  v8 = v5;
  v9 = LevelSummary::WORLD_ICON_FILENAME;
  v10 = v4;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v7, 2);
  sub_21E94B4(v2, (const char *)&v12);
  result = (char *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    j___stack_chk_fail((int)result);
  return result;
}


      if ( LevelSummary::operator<(v32 + (v6 << 6), v33) != 1 )
{
      EntityInteraction::setInteractText((int *)(v32 + (v5 << 6)), (int *)v7);
      EntityInteraction::setInteractText((int *)(v8 + 4), (int *)(v7 + 4));
      v9 = v8 + 8;
      v10 = *(_DWORD *)(v7 + 12);
      v11 = *(_DWORD *)(v7 + 16);
      v12 = *(_DWORD *)(v7 + 20);
      v13 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)v9 = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(v9 + 4) = v10;
      *(_DWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v9 + 12) = v12;
      *(_DWORD *)(v9 + 16) = v13;
      v14 = v8 + 28;
      v15 = *(_DWORD *)(v7 + 32);
      v16 = *(_DWORD *)(v7 + 36);
      v17 = *(_DWORD *)(v7 + 40);
      v18 = *(_DWORD *)(v7 + 44);
      v19 = *(_DWORD *)(v7 + 48);
      *(_DWORD *)v14 = *(_DWORD *)(v7 + 28);
      *(_DWORD *)(v14 + 4) = v15;
      *(_DWORD *)(v14 + 8) = v16;
      *(_DWORD *)(v14 + 12) = v17;
      *(_DWORD *)(v14 + 16) = v18;
      *(_DWORD *)(v14 + 20) = v19;
      EntityInteraction::setInteractText((int *)(v8 + 52), (int *)(v7 + 52));
      EntityInteraction::setInteractText((int *)(v8 + 56), (int *)(v7 + 56));
      v5 = v6;
      if ( v6 <= v4 )
        goto LABEL_6;
    }
  }
  EntityInteraction::setInteractText((int *)v8, (int *)v33);
  EntityInteraction::setInteractText((int *)(v8 + 4), (int *)(v33 + 4));
  v20 = v8 + 8;
  v21 = *(_DWORD *)(v33 + 12);
  v22 = *(_DWORD *)(v33 + 16);
  v23 = *(_DWORD *)(v33 + 20);
  v24 = *(_DWORD *)(v33 + 24);
  *(_DWORD *)v20 = *(_DWORD *)(v33 + 8);
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  *(_DWORD *)(v20 + 16) = v24;
  v25 = v8 + 28;
  v26 = *(_DWORD *)(v33 + 32);
  v27 = *(_DWORD *)(v33 + 36);
  v28 = *(_DWORD *)(v33 + 40);
  v29 = *(_DWORD *)(v33 + 44);
  v30 = *(_DWORD *)(v33 + 48);
  *(_DWORD *)v25 = *(_DWORD *)(v33 + 28);
  *(_DWORD *)(v25 + 4) = v26;
  *(_DWORD *)(v25 + 8) = v27;
  *(_DWORD *)(v25 + 12) = v28;
  *(_DWORD *)(v25 + 16) = v29;
  *(_DWORD *)(v25 + 20) = v30;
  EntityInteraction::setInteractText((int *)(v8 + 52), (int *)(v33 + 52));
  return j_EntityInteraction::setInteractText((int *)(v8 + 56), (int *)(v33 + 56));
}


int *__fastcall LevelSummary::LevelSummary(int *a1, int *a2)
{
  int *v2; // r10@1
  int *v3; // r9@1
  int v4; // r1@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r1@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r7@1

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v3 + 1, v2 + 1);
  v4 = (int)(v3 + 2);
  v5 = v2[3];
  v6 = v2[4];
  v7 = v2[5];
  v8 = v2[6];
  *(_DWORD *)v4 = v2[2];
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  v9 = (int)(v3 + 7);
  v10 = v2[8];
  v11 = v2[9];
  v12 = v2[10];
  v13 = v2[11];
  v14 = v2[12];
  *(_DWORD *)v9 = v2[7];
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  *(_DWORD *)(v9 + 20) = v14;
  sub_DA73B4(v3 + 13, v2 + 13);
  sub_DA73B4(v3 + 14, v2 + 14);
  return v3;
}


int __fastcall LevelSummary::LevelSummary(int a1, LevelData *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r8@1
  LevelData *v5; // r7@1
  __int64 v6; // r0@1
  int v7; // r0@1
  int v8; // r6@2
  const char *v9; // r9@2
  unsigned int v10; // r0@2
  unsigned int v11; // r5@2
  unsigned int v12; // r10@2
  int *v13; // r0@9
  int *v14; // r0@9
  int v16; // [sp+4h] [bp-A5Ch]@9
  int v17; // [sp+8h] [bp-A58h]@9
  char v18; // [sp+Ch] [bp-A54h]@9
  void (*v19)(void); // [sp+14h] [bp-A4Ch]@9
  char v20; // [sp+1Ch] [bp-A44h]@9
  __int64 v21; // [sp+20h] [bp-A40h]@1
  int v22; // [sp+28h] [bp-A38h]@2
  char v23; // [sp+2Ch] [bp-A34h]@2
  int v24; // [sp+42Ch] [bp-634h]@2
  char v25; // [sp+434h] [bp-62Ch]@1
  int v26; // [sp+A34h] [bp-2Ch]@1
  RakNet *v27; // [sp+A38h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v27 = _stack_chk_guard;
  LODWORD(v6) = *a3;
  HIDWORD(v6) = *(_DWORD *)(*a3 - 12);
  v21 = v6;
  v7 = j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v25, (const char **)&v21);
  if ( v26 )
  {
    v8 = 0;
    v22 = 1023;
    v9 = *(const char **)(v7 + 8 * v26 + 1016);
    v23 = 0;
    v24 = 0;
    v10 = j_strlen(v9);
    v11 = v10;
    v12 = (unsigned int)&v22 | 4;
    if ( v10 < 0x400 )
    {
      if ( v10 )
        j___aeabi_memcpy((unsigned int)&v22 | 4, (int)v9, v10);
      *((_BYTE *)&v22 + v11 + 4) = 0;
      v8 = v24 + v11;
    }
    else
      v23 = 0;
    v24 = v8;
  }
  else
    j___aeabi_memclr8((int)&v22, 1028);
  sub_21E91E0((void **)v3, v12, v8);
  v13 = (int *)j_LevelData::getLevelName(v5);
  sub_21E8AF4((int *)(v3 + 4), v13);
  *(_DWORD *)(v3 + 8) = j_LevelData::getLastPlayed(v5);
  *(_DWORD *)(v3 + 12) = j_LevelData::getGameType(v5);
  *(_DWORD *)(v3 + 16) = j_LevelData::getGameDifficulty(v5);
  *(_DWORD *)(v3 + 20) = j_LevelData::getSeed(v5);
  *(_DWORD *)(v3 + 24) = j_LevelData::getNetworkVersion(v5);
  *(_BYTE *)(v3 + 40) = j_LevelData::isMultiplayerGame(v5);
  *(_BYTE *)(v3 + 41) = j_LevelData::hasLANBroadcast(v5);
  *(_BYTE *)(v3 + 42) = j_LevelData::hasXBLBroadcast(v5);
  *(_BYTE *)(v3 + 43) = j_LevelData::hasPlatformBroadcast(v5);
  *(_BYTE *)(v3 + 44) = j_LevelData::hasCommandsEnabled(v5);
  *(_BYTE *)(v3 + 45) = j_LevelData::isEduLevel(v5);
  *(_QWORD *)(v3 + 48) = __PAIR__(&unk_28898CC, j_LevelData::getStorageVersion(v5));
  v14 = (int *)j_LevelData::getPremiumTemplatePackId(v5);
  sub_21E8AF4((int *)(v3 + 56), v14);
  v16 = *v4;
  v17 = *(_DWORD *)(v16 - 12);
  j_Core::FileSystem::getFileOrDirectorySize((int)&v18, (__int64 *)&v16, v3 + 32);
  v20 |= 2u;
  if ( v19 )
    v19();
  LevelSummary::_initializeWorldIconPath(v3, v4);
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail(_stack_chk_guard - v27);
  return v3;
}


  if ( LevelSummary::operator<(a2, a3) != 1 )
{
    if ( LevelSummary::operator<(v5, v7) == 1 )
      goto LABEL_6;
    if ( LevelSummary::operator<(v4, v7) == 1 )
    {
LABEL_8:
      v8 = v6;
      v9 = v7;
      return j_j_j__ZSt4swapI12LevelSummaryEvRT_S2_(v8, v9);
    }
LABEL_9:
    v8 = v6;
    v9 = v4;
    return j_j_j__ZSt4swapI12LevelSummaryEvRT_S2_(v8, v9);
  }
  if ( LevelSummary::operator<(v4, v7) == 1 )
    goto LABEL_9;
  if ( LevelSummary::operator<(v5, v7) == 1 )
    goto LABEL_8;
LABEL_6:
  v8 = v6;
  v9 = v5;
  return j_j_j__ZSt4swapI12LevelSummaryEvRT_S2_(v8, v9);
}
