

int __fastcall ButtonChordTracker::ButtonChordTracker(int a1, __int64 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3
  int result; // r0@4

  v2 = a1;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1065353216;
  v3 = a1 + 36;
  *(_DWORD *)(a1 + 40) = 0;
  v4 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 36)));
  *(_DWORD *)(v3 - 12) = v4;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v2 + 44) = 0;
    v6 = (void *)(v2 + 44);
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  result = v2;
  *(_DWORD *)(v2 + 20) = v6;
  return result;
}


int __fastcall ButtonChordTracker::raiseLongestChordSequences(ButtonChordTracker *this, ButtonChordTracker::TrackerMappingAndState *a2, int a3)
{
  ButtonChordTracker *v3; // r8@1
  __int64 v4; // r0@1
  int *v5; // r9@2
  int v6; // r2@4
  int v7; // r3@5
  _WORD **v8; // lr@5
  _DWORD *v9; // r12@5
  _WORD *v10; // r4@7
  int v11; // r7@8
  _WORD *v12; // r5@8
  _WORD *v13; // r7@8
  int v14; // r10@10
  int v15; // r11@10
  int v17; // [sp+10h] [bp-30h]@1
  ButtonChordTracker::TrackerMappingAndState *v18; // [sp+14h] [bp-2Ch]@1
  int *v19; // [sp+18h] [bp-28h]@1

  v17 = a3;
  v18 = a2;
  v3 = this;
  v4 = *((_QWORD *)this + 1);
  v19 = (int *)HIDWORD(v4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
    return v4;
  v5 = (int *)v4;
  while ( 2 )
  {
    v6 = *v5;
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
LABEL_15:
      InputEventQueue::enqueueButton(*(_DWORD *)v3, *(_WORD *)(v6 + 8), 1, 0, 0, v17, 0);
      goto LABEL_17;
    }
    v7 = *((_DWORD *)v18 + 10);
    v8 = (_WORD **)(v7 + 12 * *(_DWORD *)(v6 + 16));
    v9 = v8 + 1;
    while ( *(_DWORD *)v4 == v6 )
LABEL_14:
      LODWORD(v4) = v4 + 4;
      if ( (_DWORD)v4 == HIDWORD(v4) )
        goto LABEL_15;
    v10 = *v8;
    if ( *v8 != (_WORD *)*v9 )
      v11 = v7 + 12 * *(_DWORD *)(*(_DWORD *)v4 + 16);
      v12 = *(_WORD **)v11;
      v13 = *(_WORD **)(v11 + 4);
      while ( v12 != v13 )
      {
        v14 = *v12;
        v15 = *v10;
        if ( v15 < v14 )
          break;
        ++v12;
        if ( v14 >= v15 )
        {
          ++v10;
          if ( v10 == (_WORD *)*v9 )
            goto LABEL_16;
        }
      }
      goto LABEL_14;
LABEL_16:
    *(_DWORD *)(*((_DWORD *)v18 + 7) + 4 * *(_DWORD *)(v6 + 12)) &= 0x80000000;
LABEL_17:
    ++v5;
    LODWORD(v4) = v19;
    if ( v5 != v19 )
      v4 = *((_QWORD *)v3 + 1);
      continue;
  }
}


void __fastcall ButtonChordTracker::setMapping(int a1, unsigned __int64 *a2, int a3)
{
  ButtonChordTracker::setMapping(a1, a2, a3);
}


signed int __fastcall ButtonChordTracker::trackButtonEvent(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r10@1
  unsigned int v5; // r7@1
  int v6; // r11@1
  unsigned __int64 *v7; // r0@1
  int *v8; // r4@1
  unsigned __int64 *v9; // r9@1
  unsigned __int64 v10; // kr00_8@1
  unsigned int v11; // r5@1
  _DWORD *v12; // r0@1
  _DWORD *v13; // r11@2
  unsigned __int16 v14; // r2@2
  int v15; // r4@3
  signed int v16; // r6@6
  int v17; // r5@9
  int *v18; // r11@11
  int v19; // r1@13
  int v20; // r0@13
  int v21; // r2@13
  int v22; // r3@16
  _BYTE *v23; // r8@19
  char *v24; // r6@19
  unsigned int v25; // r1@19
  unsigned int v26; // r0@21
  unsigned int v27; // r7@21
  char *v28; // r0@27
  signed int v29; // r2@28
  int v30; // r11@28
  int v31; // r1@37
  int v32; // r0@37
  int v33; // r2@37
  int *v35; // [sp+10h] [bp-30h]@2
  int v36; // [sp+14h] [bp-2Ch]@2
  int v37; // [sp+18h] [bp-28h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v37 = a4;
  v7 = (unsigned __int64 *)std::__detail::_Map_base<int,std::pair<int const,ButtonChordTracker::TrackerMappingAndState>,std::allocator<std::pair<int const,ButtonChordTracker::TrackerMappingAndState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                             (unsigned __int64 *)(a1 + 20),
                             (unsigned int *)&v37);
  v8 = *(int **)(v4 + 8);
  v9 = v7;
  *(_DWORD *)(v4 + 12) = v8;
  v10 = *v7;
  v11 = v5 % (*v7 >> 32);
  v12 = *(_DWORD **)(*v7 + 4 * v11);
  if ( v12 )
  {
    v35 = v8;
    v36 = v6;
    v13 = (_DWORD *)*v12;
    v14 = *(_WORD *)(*v12 + 4);
    while ( 1 )
    {
      v15 = (unsigned __int16)v5;
      if ( v14 == (unsigned __int16)v5 )
        break;
      if ( !*v13 )
      {
        v16 = 0;
        goto LABEL_45;
      }
      v12 = v13;
      v14 = *(_WORD *)(v10 + 4);
      v13 = (_DWORD *)*v13;
      if ( (unsigned int)*(_WORD *)(v10 + 4) % HIDWORD(v10) != v11 )
    }
    if ( v12 )
      v17 = *v12;
      if ( *v12 )
        if ( v36 == 1 )
        {
          v18 = v35;
          do
          {
            if ( *(_WORD *)(v17 + 4) != v15 )
              break;
            v19 = *(_DWORD *)(v17 + 20);
            v20 = *((_DWORD *)v9 + 7);
            v21 = *(_DWORD *)(v20 + 4 * v19);
            if ( (*(_DWORD *)(v17 + 12) & v21) == *(_DWORD *)(v17 + 12) )
            {
              v16 = 1;
            }
            else
              *(_DWORD *)(v20 + 4 * v19) = v21 | *(_DWORD *)(v17 + 8);
              if ( (*(_DWORD *)(v20 + 4 * *(_DWORD *)(v17 + 20)) & *(_DWORD *)(v17 + 12)) == *(_DWORD *)(v17 + 12) )
              {
                v22 = v17 + 8;
                if ( v18 == *(int **)(v4 + 16) )
                {
                  v23 = *(_BYTE **)(v4 + 8);
                  v24 = 0;
                  v25 = ((char *)v18 - v23) >> 2;
                  if ( !v25 )
                    v25 = 1;
                  v26 = v25 + (((char *)v18 - v23) >> 2);
                  v27 = v25 + (((char *)v18 - v23) >> 2);
                  if ( 0 != v26 >> 30 )
                    v27 = 0x3FFFFFFF;
                  if ( v26 < v25 )
                  if ( v27 )
                  {
                    if ( v27 >> 30 )
                      sub_21E57F4();
                    v28 = (char *)operator new(4 * v27);
                    v18 = (int *)(*(_QWORD *)(v4 + 8) >> 32);
                    v23 = (_BYTE *)*(_QWORD *)(v4 + 8);
                    v24 = v28;
                    v22 = v17 + 8;
                  }
                  v29 = (char *)v18 - v23;
                  v30 = (int)&v24[(char *)v18 - v23];
                  *(_DWORD *)&v24[v29] = v22;
                  if ( v29 >> 2 )
                    _aeabi_memmove4(v24, v23);
                  v18 = (int *)(v30 + 4);
                  if ( v23 )
                    operator delete(v23);
                  *(_DWORD *)(v4 + 8) = v24;
                  *(_DWORD *)(v4 + 12) = v18;
                  *(_DWORD *)(v4 + 16) = &v24[4 * v27];
                }
                else
                  *v18 = v22;
                  v18 = (int *)(*(_DWORD *)(v4 + 12) + 4);
                v16 = 2;
              }
              else
                v16 = 1;
            v17 = *(_DWORD *)v17;
          }
          while ( v17 );
        }
        else
            if ( *(_WORD *)(v17 + 4) != (unsigned __int16)v5 )
            v31 = *(_DWORD *)(v17 + 20);
            v16 = 1;
            v32 = *((_DWORD *)v9 + 7);
            v33 = *(_DWORD *)(v32 + 4 * v31);
            if ( v33 >= 0 && (*(_DWORD *)(v17 + 12) & v33) == *(_DWORD *)(v17 + 12) )
              InputEventQueue::enqueueButton(*(_DWORD *)v4, *(_WORD *)(v17 + 16), 0, 0, 0, v37, 0);
              v31 = *(_DWORD *)(v17 + 20);
              v16 = 2;
              v32 = *((_DWORD *)v9 + 7);
              v33 = *(_DWORD *)(v32 + 4 * v31);
            *(_DWORD *)(v32 + 4 * v31) = v33 & 0x7FFFFFFF;
            *(_DWORD *)(v32 + 4 * *(_DWORD *)(v17 + 20)) &= ~*(_DWORD *)(v17 + 8);
      else
    else
      v16 = 0;
  }
  else
    v16 = 0;
LABEL_45:
  ButtonChordTracker::raiseLongestChordSequences(
    (ButtonChordTracker *)v4,
    (ButtonChordTracker::TrackerMappingAndState *)v9,
    v37);
  return v16;
}


void __fastcall ButtonChordTracker::setMapping(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r10@1
  unsigned __int64 *v4; // r4@1
  unsigned int v5; // r0@1
  int v6; // r8@1
  void *v7; // r0@1
  void *v8; // r5@2
  void **v9; // r5@3
  void **v10; // r6@3
  void **v11; // r7@4
  int v12; // r9@8
  int v13; // r11@8
  __int64 v14; // r4@9
  __int64 v15; // r0@10
  void *v16; // r5@12
  char *v17; // r4@12
  unsigned int v18; // r2@12
  unsigned int v19; // r1@14
  unsigned int v20; // r6@14
  char *v21; // r7@21
  int v22; // r7@23
  char *v23; // r6@26
  int v24; // r1@26
  char *v25; // r4@27
  __int64 v26; // kr18_8@28
  char *v27; // r8@28
  int v28; // r7@28
  signed int v29; // r0@28
  unsigned int v30; // r5@28
  int v31; // r11@29
  int v32; // r9@29
  _WORD *v33; // r0@29
  char *v34; // r10@31
  unsigned int v35; // r1@31
  int v36; // r0@33
  int v37; // r7@33
  signed int v38; // r2@40
  int v39; // r4@40
  __int64 v40; // kr28_8@49
  signed int v41; // r4@50
  void *v42; // r0@50
  int v43; // r7@53
  unsigned __int64 *v44; // [sp+8h] [bp-50h]@3
  int i; // [sp+Ch] [bp-4Ch]@8
  int v46; // [sp+10h] [bp-48h]@1
  int v47; // [sp+14h] [bp-44h]@28
  int v48; // [sp+18h] [bp-40h]@28
  int v49; // [sp+1Ch] [bp-3Ch]@1
  __int16 v50; // [sp+20h] [bp-38h]@26
  char *v51; // [sp+24h] [bp-34h]@26
  char *v52; // [sp+28h] [bp-30h]@26
  int v53; // [sp+2Ch] [bp-2Ch]@26
  int v54; // [sp+30h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v46 = a1;
  v54 = a3;
  v5 = std::__detail::_Map_base<int,std::pair<int const,ButtonChordTracker::TrackerMappingAndState>,std::allocator<std::pair<int const,ButtonChordTracker::TrackerMappingAndState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)(a1 + 20),
         (unsigned int *)&v54);
  v6 = v5;
  v7 = *(void **)(v5 + 8);
  v49 = v6;
  if ( v7 )
  {
    do
    {
      v8 = *(void **)v7;
      operator delete(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  _aeabi_memclr4(*(_QWORD *)v6, 4 * (*(_QWORD *)v6 >> 32));
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 28);
  v9 = *(void ***)(v6 + 40);
  v44 = (unsigned __int64 *)(v6 + 40);
  v10 = *(void ***)(v6 + 44);
  if ( v10 != v9 )
    v11 = *(void ***)(v6 + 40);
      if ( *v11 )
        operator delete(*v11);
      v11 += 3;
    while ( v10 != v11 );
  *(_DWORD *)(v6 + 44) = v9;
  v13 = *v4 >> 32;
  v12 = *v4;
  for ( i = v13; v12 != v13; v12 += 16 )
    v14 = *(_QWORD *)(v12 + 4);
    if ( (unsigned int)(((HIDWORD(v14) - (signed int)v14) >> 2) - 2) <= 0x1D )
      v15 = *(_QWORD *)(v6 + 32);
      if ( (_DWORD)v15 == HIDWORD(v15) )
      {
        v16 = *(void **)(v6 + 28);
        v17 = 0;
        v18 = ((signed int)v15 - (signed int)v16) >> 2;
        if ( !v18 )
          v18 = 1;
        HIDWORD(v15) = v18 + (((signed int)v15 - (signed int)v16) >> 2);
        v20 = v18 + (((signed int)v15 - (signed int)v16) >> 2);
        if ( 0 != HIDWORD(v15) >> 30 )
          v20 = 0x3FFFFFFF;
        if ( v19 < v18 )
        if ( v20 )
        {
          if ( v20 >= 0x40000000 )
            goto LABEL_61;
          v17 = (char *)operator new(4 * v20);
          LODWORD(v15) = *(_QWORD *)(v6 + 28) >> 32;
          v16 = (void *)*(_QWORD *)(v6 + 28);
        }
        v21 = &v17[v15 - (_DWORD)v16];
        *(_DWORD *)v21 = 0;
        if ( ((signed int)v15 - (signed int)v16) >> 2 )
          _aeabi_memmove4(v17, v16);
        v22 = (int)(v21 + 4);
        if ( v16 )
          operator delete(v16);
        *(_DWORD *)(v6 + 28) = v17;
        *(_DWORD *)(v6 + 32) = v22;
        *(_DWORD *)(v6 + 36) = &v17[4 * v20];
        v14 = *(_QWORD *)(v12 + 4);
      }
      else
        *(_DWORD *)v15 = 0;
        *(_DWORD *)(v6 + 32) = v15 + 4;
      v23 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v50 = NameRegistry::getNameId(*(unsigned __int64 **)(v3 + 4), (int **)v12);
      v24 = *(_QWORD *)(v12 + 4);
      if ( *(_QWORD *)(v12 + 4) >> 32 == v24 )
        v25 = 0;
        v26 = *(_QWORD *)(v6 + 28);
        v27 = 0;
        v28 = 0;
        v48 = ((HIDWORD(v26) - (signed int)v26) >> 2) - 1;
        v29 = HIDWORD(v14) - v14;
        v30 = 0;
        v47 = (1 << (v29 >> 2)) - 1;
        do
          v31 = v12;
          v32 = NameRegistry::getNameId(*(unsigned __int64 **)(v3 + 4), (int **)&v23[v24]);
          v33 = operator new(0x1Cu);
          *(_DWORD *)v33 = 0;
          v33[2] = v32;
          *((_DWORD *)v33 + 2) = 1 << v30;
          *((_DWORD *)v33 + 3) = v47;
          v33[8] = v50;
          *((_DWORD *)v33 + 5) = v48;
          *((_DWORD *)v33 + 6) = v48;
          std::_Hashtable<short,std::pair<short const,ButtonChordTracker::ChordButtonDetails>,std::allocator<std::pair<short const,ButtonChordTracker::ChordButtonDetails>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
            v49,
            0,
            v32,
            (int)v33);
          if ( v25 == (char *)v28 )
          {
            v34 = 0;
            v35 = (v25 - v27) >> 1;
            if ( !v35 )
              v35 = 1;
            v36 = v35 + ((v25 - v27) >> 1);
            v37 = v35 + ((v25 - v27) >> 1);
            if ( v36 < 0 )
              v37 = 0x7FFFFFFF;
            if ( v36 < v35 )
            if ( v37 )
            {
              if ( v37 <= -1 )
                goto LABEL_61;
              v34 = (char *)operator new(2 * v37);
            }
            v38 = v25 - v27;
            v39 = (int)&v34[v25 - v27];
            *(_WORD *)&v34[v38] = v32;
            if ( v38 >> 1 )
              _aeabi_memmove(v34, v27);
            v25 = (char *)(v39 + 2);
            v12 = v31;
            if ( v27 )
              operator delete(v27);
            v51 = v34;
            v52 = v25;
            v28 = (int)&v34[2 * v37];
            v27 = v34;
            v3 = v46;
            v53 = v28;
          }
          else
            *(_WORD *)v25 = v32;
            v25 += 2;
          v24 = *(_QWORD *)(v12 + 4);
          v23 += 4;
          ++v30;
        while ( v30 < (signed int)((*(_QWORD *)(v12 + 4) >> 32) - v24) >> 2 );
        v23 = v51;
        v6 = v49;
        v13 = i;
      if ( v23 != v25 )
        std::__introsort_loop<__gnu_cxx::__normal_iterator<short *,std::vector<short,std::allocator<short>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
          (int)v23,
          (int)v25,
          2 * (31 - __clz((v25 - v23) >> 1)));
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<short *,std::vector<short,std::allocator<short>>>,__gnu_cxx::__ops::_Iter_less_iter>(
          v23,
          v25);
      v40 = *(_QWORD *)(v6 + 44);
      if ( (_DWORD)v40 == HIDWORD(v40) )
        std::vector<std::vector<short,std::allocator<short>>,std::allocator<std::vector<short,std::allocator<short>>>>::_M_emplace_back_aux<std::vector<short,std::allocator<short>> const&>(
          v44,
          (unsigned __int64 *)&v51);
        v41 = v25 - v23;
        v42 = 0;
        *(_DWORD *)v40 = 0;
        *(_DWORD *)(v40 + 4) = 0;
        *(_DWORD *)(v40 + 8) = 0;
        if ( v41 >> 1 )
          if ( v41 <= -1 )
LABEL_61:
            sub_21E57F4();
          v42 = operator new(v41);
        *(_DWORD *)v40 = HIDWORD(v40);
        *(_DWORD *)(v40 + 4) = HIDWORD(v40);
        v43 = HIDWORD(v40) + 2 * (v41 >> 1);
        *(_DWORD *)(v40 + 8) = v43;
          _aeabi_memmove(v42, v23);
        *(_DWORD *)(v40 + 4) = v43;
        *(_DWORD *)(v6 + 44) += 12;
      if ( v23 )
        operator delete(v23);
}


ButtonChordTracker::TrackerMappingAndState *__fastcall ButtonChordTracker::TrackerMappingAndState::~TrackerMappingAndState(ButtonChordTracker::TrackerMappingAndState *this)
{
  ButtonChordTracker::TrackerMappingAndState *v1; // r4@1
  void **v2; // r5@1 OVERLAPPED
  void **v3; // r6@1 OVERLAPPED
  void *v4; // r0@8
  void *v5; // r0@10
  void *v6; // r5@11
  char *v7; // r0@12

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 5);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
        operator delete(*v2);
      v2 += 3;
    }
    while ( v3 != v2 );
    v2 = (void **)*((_DWORD *)v1 + 10);
  }
  if ( v2 )
    operator delete(v2);
  v4 = (void *)*((_DWORD *)v1 + 7);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 2);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v7 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v7 )
    operator delete(v7);
  return v1;
}


unsigned int __fastcall ButtonChordTracker::changeControllerId(ButtonChordTracker *this, int a2, int a3)
{
  ButtonChordTracker *v3; // r5@1
  unsigned __int64 *v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  unsigned int v7; // r7@1
  int v8; // r6@1
  unsigned int v9; // r1@1
  unsigned int result; // r0@1
  unsigned int v11; // r1@1
  unsigned int v12; // t0@1
  unsigned int v13; // r5@1
  void **v14; // r11@1
  void **v15; // r10@2
  void **v16; // r8@2
  int v17; // r6@2
  void *v18; // r9@4
  unsigned int v19; // r0@5
  int v20; // r1@5
  void *v21; // r4@8
  ButtonChordTracker *v22; // r6@9
  int v23; // r1@10
  int v24; // r9@13
  int v25; // r1@14
  int v26; // r1@15
  char *v27; // [sp+0h] [bp-38h]@1
  int v28; // [sp+4h] [bp-34h]@1
  ButtonChordTracker *v29; // [sp+8h] [bp-30h]@1
  int v30; // [sp+Ch] [bp-2Ch]@1
  unsigned int v31; // [sp+10h] [bp-28h]@1

  v3 = this;
  v4 = (unsigned __int64 *)((char *)this + 20);
  v31 = a2;
  v29 = this;
  v30 = a3;
  v27 = (char *)this + 20;
  v5 = std::__detail::_Map_base<int,std::pair<int const,ButtonChordTracker::TrackerMappingAndState>,std::allocator<std::pair<int const,ButtonChordTracker::TrackerMappingAndState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)((char *)this + 20),
         &v31);
  v6 = std::__detail::_Map_base<int,std::pair<int const,ButtonChordTracker::TrackerMappingAndState>,std::allocator<std::pair<int const,ButtonChordTracker::TrackerMappingAndState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         v4,
         (unsigned int *)&v30);
  std::swap<ButtonChordTracker::TrackerMappingAndState>(v5, v6);
  v7 = *((_DWORD *)v3 + 6);
  v8 = *((_DWORD *)v3 + 5);
  v9 = *((_DWORD *)v3 + 6);
  v28 = *((_DWORD *)v3 + 5);
  v12 = v31 / v9;
  v11 = v31 % v9;
  result = v12;
  v13 = v11;
  v14 = *(void ***)(v8 + 4 * v11);
  if ( v14 )
  {
    v15 = (void **)*v14;
    v16 = *(void ***)(v8 + 4 * v11);
    v17 = *((_DWORD *)*v14 + 1);
    while ( v31 != v17 )
    {
      v18 = *v15;
      if ( *v15 )
      {
        v17 = *((_DWORD *)v18 + 1);
        v19 = *((_DWORD *)v18 + 1);
        v20 = v19 % v7;
        result = v19 / v7;
        v16 = v15;
        v15 = (void **)*v15;
        if ( v20 == v13 )
          continue;
      }
      return result;
    }
    if ( v16 )
      v21 = *v16;
      if ( v14 != v16 )
        v22 = v29;
        if ( *(_DWORD *)v21 )
        {
          v23 = *(_DWORD *)(*(_DWORD *)v21 + 4) % v7;
          if ( v23 != v13 )
            *(_DWORD *)(v28 + 4 * v23) = v16;
        }
        goto LABEL_20;
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v25 = *(_DWORD *)(v24 + 4) % v7;
        if ( v25 == v13 )
LABEL_20:
          *v16 = *(void **)v21;
          ButtonChordTracker::TrackerMappingAndState::~TrackerMappingAndState((ButtonChordTracker::TrackerMappingAndState *)((char *)v21 + 8));
          operator delete(v21);
          result = *((_DWORD *)v22 + 8) - 1;
          *((_DWORD *)v22 + 8) = result;
          return result;
        *(_DWORD *)(v28 + 4 * v25) = v14;
        v26 = *(_DWORD *)v27;
        v14 = *(void ***)(*(_DWORD *)v27 + 4 * v13);
      else
        v26 = v28;
      if ( (void **)((char *)v22 + 28) == v14 )
        *v14 = (void *)v24;
      *(_DWORD *)(v26 + 4 * v13) = 0;
      goto LABEL_20;
  }
  return result;
}
