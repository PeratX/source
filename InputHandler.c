

int __fastcall InputHandler::registerAddClientHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // r4@1
  int result; // r0@1
  int v5; // r5@1
  void (__fastcall *v6)(__int64 *); // r3@1
  __int64 *v7; // r6@1
  int v8; // r1@2
  int (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  __int64 v10; // [sp+0h] [bp-20h]@2
  int (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  result = 0;
  v5 = a2;
  v11 = 0;
  v6 = *(void (__fastcall **)(__int64 *))(a2 + 8);
  v7 = (__int64 *)(v3 + 148);
  if ( v6 )
  {
    v6(&v10);
    result = *(_DWORD *)(v5 + 12);
    v12 = *(_DWORD *)(v5 + 12);
    v8 = *(_DWORD *)(v5 + 8);
    v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
    v6 = (void (__fastcall *)(__int64 *))HIDWORD(v10);
    v2 = v10;
  }
  else
    v8 = 0;
  v10 = *v7;
  *(_DWORD *)v7 = v2;
  *(_DWORD *)(v3 + 152) = v6;
  v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 156);
  v9 = v11;
  *(_DWORD *)(v3 + 156) = v8;
  v12 = *(_DWORD *)(v3 + 160);
  *(_DWORD *)(v3 + 160) = result;
  if ( v9 )
    result = v9(&v10, &v10, 3, v9);
  return result;
}


void __fastcall InputHandler::popInputMapping(InputHandler *this, int a2)
{
  int v2; // r9@1
  InputHandler *v3; // r11@1
  unsigned int v4; // r0@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  void *v8; // r0@1
  int v9; // r8@3
  int v10; // r0@3
  int *v11; // r4@3
  int *v12; // r7@3
  int v13; // r6@3
  int v14; // t1@4
  unsigned int *v15; // r2@7
  signed int v16; // r1@9
  int v17; // [sp+Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  v17 = a2;
  v4 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)this + 29,
         (unsigned int *)&v17);
  v5 = v4;
  v6 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v5 + 12) = v6 - 4;
  v7 = *(_DWORD *)(v6 - 4);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  if ( (unsigned int)*(_QWORD *)(v5 + 8) != *(_QWORD *)(v5 + 8) >> 32 )
    v9 = (*(int (**)(void))(**((_DWORD **)v3 + 57) + 12))();
    (*(void (**)(void))(**((_DWORD **)v3 + 56) + 8))();
    v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v9 + 12))(v9, *(_DWORD *)(v5 + 12) - 4);
    v12 = (int *)(*(_QWORD *)((char *)v3 + 212) >> 32);
    v11 = (int *)*(_QWORD *)((char *)v3 + 212);
    v13 = v10;
    while ( v12 != v11 )
      v14 = *v11;
      ++v11;
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v14 + 8))(v14, *((_QWORD *)v3 + 25) >> 32);
    ButtonChordTracker::setMapping(*((_DWORD *)v3 + 52), (unsigned __int64 *)(v13 + 276), v2);
}


void __fastcall InputHandler::popInputMapping(InputHandler *this, int a2)
{
  InputHandler::popInputMapping(this, a2);
}


__int64 *__fastcall InputHandler::_handleInputModeChange(__int64 *result, int a2, int a3)
{
  __int64 v3; // r6@1
  int v4; // r4@1
  int i; // r5@1

  v3 = *result;
  v4 = a3;
  for ( i = a2; HIDWORD(v3) != (_DWORD)v3; LODWORD(v3) = v3 + 16 )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      sub_21E5F48();
    result = (__int64 *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v3 + 12))(v3, i, v4);
  }
  return result;
}


void __fastcall InputHandler::tick(int a1, void *a2, int a3, int a4, int a5)
{
  InputHandler::tick(a1, a2, a3, a4, a5);
}


int __fastcall InputHandler::_handleAddClientEvent(int result, MinecraftGame *a2, int a3, int a4)
{
  if ( *(_DWORD *)(result + 156) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(result + 160))(result + 148, a2, a3, a4);
  return result;
}


unsigned int __fastcall InputHandler::registerTextCharHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  void (__fastcall *v5)(int); // r3@2
  unsigned int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 == *(_QWORD *)(a1 + 64) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFvRKSsb11FocusImpactR14ClientInstanceEESaIS7_EE19_M_emplace_back_auxIJRKS7_EEEvDpOT_(
               (unsigned __int64 *)(a1 + 60),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 64);
    }
    result = v4 + 16;
    *(_DWORD *)(v2 + 64) = v4 + 16;
  return result;
}


int __fastcall InputHandler::_flushDownButtons(InputHandler *this, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r4@1
  void *v4; // r0@1
  void *v5; // r5@2
  int result; // r0@3
  int v7; // [sp+4h] [bp-14h]@1

  v7 = a2;
  v2 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)this + 29,
         (unsigned int *)&v7);
  v3 = v2;
  v4 = *(void **)(v2 + 28);
  if ( v4 )
  {
    do
    {
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_QWORD *)(v3 + 20), 4 * (*(_QWORD *)(v3 + 20) >> 32));
  result = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  return result;
}


InputHandler *__fastcall InputHandler::~InputHandler(InputHandler *this)
{
  InputHandler *v1; // r11@1
  void *v2; // r5@1
  void *v3; // r7@2
  char *v4; // r0@3
  char *v5; // r5@6 OVERLAPPED
  char *v6; // r6@6 OVERLAPPED
  int v7; // r5@13
  int v8; // r6@14
  int v9; // r7@15
  void *v10; // r0@16
  void *v11; // r0@19
  InputEventQueue *v12; // r0@22
  InputEventQueue *v13; // r0@23
  int v14; // r9@24
  unsigned __int64 *v15; // r6@25
  unsigned int *v16; // r2@27
  signed int v17; // r1@29
  unsigned __int64 *v18; // r7@35
  int v19; // r1@35
  void *v20; // r0@35
  void *v21; // r0@37
  void (*v22)(void); // r3@41
  void (*v23)(void); // r3@43
  void (*v24)(void); // r3@45
  void (*v25)(void); // r3@47
  int v26; // r5@49 OVERLAPPED
  int v27; // r6@49 OVERLAPPED
  void (__fastcall *v28)(int, int, signed int); // r3@50
  int v29; // r5@56 OVERLAPPED
  int v30; // r6@56 OVERLAPPED
  void (__fastcall *v31)(int, int, signed int); // r3@57
  int v32; // r5@63 OVERLAPPED
  int v33; // r6@63 OVERLAPPED
  void (__fastcall *v34)(int, int, signed int); // r3@64
  int v35; // r5@70 OVERLAPPED
  int v36; // r6@70 OVERLAPPED
  void (__fastcall *v37)(int, int, signed int); // r3@71
  int v38; // r5@77 OVERLAPPED
  int v39; // r6@77 OVERLAPPED
  void (__fastcall *v40)(int, int, signed int); // r3@78
  char v42; // [sp+4h] [bp-2Ch]@2

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 60);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      __gnu_cxx::new_allocator<std::pair<int const,InputHandler::InputHandlerState>>::destroy<std::pair<int const,InputHandler::InputHandlerState>>(
        (int)&v42,
        (int)v2 + 4);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 29), 4 * (*((_QWORD *)v1 + 29) >> 32));
  *((_DWORD *)v1 + 60) = 0;
  *((_DWORD *)v1 + 61) = 0;
  v4 = (char *)*((_DWORD *)v1 + 58);
  if ( v4 && (char *)v1 + 256 != v4 )
    operator delete(v4);
  *(_QWORD *)&v5 = *(_QWORD *)((char *)v1 + 212);
  if ( v5 != v6 )
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 4))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    while ( v6 != v5 );
    v5 = (char *)*((_DWORD *)v1 + 53);
  if ( v5 )
    operator delete(v5);
  v7 = *((_DWORD *)v1 + 52);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 28);
    if ( v8 )
      do
      {
        v9 = *(_DWORD *)v8;
        ButtonChordTracker::TrackerMappingAndState::~TrackerMappingAndState((ButtonChordTracker::TrackerMappingAndState *)(v8 + 8));
        operator delete((void *)v8);
        v8 = v9;
      }
      while ( v9 );
    _aeabi_memclr4(*(_QWORD *)(v7 + 20), 4 * (*(_QWORD *)(v7 + 20) >> 32));
    *(_DWORD *)(v7 + 28) = 0;
    *(_DWORD *)(v7 + 32) = 0;
    v10 = *(void **)(v7 + 20);
    if ( v10 && (void *)(v7 + 44) != v10 )
      operator delete(v10);
    v11 = *(void **)(v7 + 8);
    if ( v11 )
      operator delete(v11);
    operator delete((void *)v7);
  *((_DWORD *)v1 + 52) = 0;
  v12 = (InputEventQueue *)*((_DWORD *)v1 + 51);
  if ( v12 )
    v13 = InputEventQueue::~InputEventQueue(v12);
    operator delete((void *)v13);
  *((_DWORD *)v1 + 51) = 0;
  v14 = *((_DWORD *)v1 + 50);
  if ( v14 )
    v15 = *(unsigned __int64 **)(v14 + 8);
    while ( v15 )
      v18 = v15;
      v19 = *v15 >> 32;
      v15 = (unsigned __int64 *)*v15;
      v20 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      operator delete(v18);
    _aeabi_memclr4(*(_QWORD *)v14, 4 * (*(_QWORD *)v14 >> 32));
    *(_DWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 12) = 0;
    v21 = *(void **)v14;
    if ( *(_DWORD *)v14 && (void *)(v14 + 24) != v21 )
      operator delete(v21);
    operator delete((void *)v14);
  *((_DWORD *)v1 + 50) = 0;
  v22 = (void (*)(void))*((_DWORD *)v1 + 47);
  if ( v22 )
    v22();
  v23 = (void (*)(void))*((_DWORD *)v1 + 43);
  if ( v23 )
    v23();
  v24 = (void (*)(void))*((_DWORD *)v1 + 39);
  if ( v24 )
    v24();
  v25 = (void (*)(void))*((_DWORD *)v1 + 35);
  if ( v25 )
    v25();
  *(_QWORD *)&v26 = *((_QWORD *)v1 + 15);
  if ( v26 != v27 )
      v28 = *(void (__fastcall **)(int, int, signed int))(v26 + 8);
      if ( v28 )
        v28(v26, v26, 3);
      v26 += 16;
    while ( v27 != v26 );
    v26 = *((_DWORD *)v1 + 30);
  if ( v26 )
    operator delete((void *)v26);
  std::_Rb_tree<DirectionId,std::pair<DirectionId const,std::function<void ()(float,float,FocusImpact,ClientInstance &)>>,std::_Select1st<std::pair<DirectionId const,std::function<void ()(float,float,FocusImpact,ClientInstance &)>>>,std::less<DirectionId>,std::allocator<std::pair<DirectionId const,std::function<void ()(float,float,FocusImpact,ClientInstance &)>>>>::_M_erase(
    (int)v1 + 96,
    *((_DWORD *)v1 + 26));
  *(_QWORD *)&v29 = *(_QWORD *)((char *)v1 + 84);
  if ( v29 != v30 )
      v31 = *(void (__fastcall **)(int, int, signed int))(v29 + 8);
      if ( v31 )
        v31(v29, v29, 3);
      v29 += 16;
    while ( v30 != v29 );
    v29 = *((_DWORD *)v1 + 21);
  if ( v29 )
    operator delete((void *)v29);
  *(_QWORD *)&v32 = *((_QWORD *)v1 + 9);
  if ( v32 != v33 )
      v34 = *(void (__fastcall **)(int, int, signed int))(v32 + 8);
      if ( v34 )
        v34(v32, v32, 3);
      v32 += 16;
    while ( v33 != v32 );
    v32 = *((_DWORD *)v1 + 18);
  if ( v32 )
    operator delete((void *)v32);
  *(_QWORD *)&v35 = *(_QWORD *)((char *)v1 + 60);
  if ( v35 != v36 )
      v37 = *(void (__fastcall **)(int, int, signed int))(v35 + 8);
      if ( v37 )
        v37(v35, v35, 3);
      v35 += 16;
    while ( v36 != v35 );
    v35 = *((_DWORD *)v1 + 15);
  if ( v35 )
    operator delete((void *)v35);
  std::_Rb_tree<short,std::pair<short const,std::pair<bool,std::function<void ()(FocusImpact,ClientInstance &)>>>,std::_Select1st<std::pair<short const,std::pair<bool,std::function<void ()(FocusImpact,ClientInstance &)>>>>,std::less<short>,std::allocator<std::pair<short const,std::pair<bool,std::function<void ()(FocusImpact,ClientInstance &)>>>>>::_M_erase(
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
    (int)v1 + 12,
    *((_DWORD *)v1 + 5));
  *(_QWORD *)&v38 = *(_QWORD *)v1;
  if ( v38 != v39 )
      v40 = *(void (__fastcall **)(int, int, signed int))(v38 + 8);
      if ( v40 )
        v40(v38, v38, 3);
      v38 += 16;
    while ( v39 != v38 );
    v38 = *(_DWORD *)v1;
  if ( v38 )
    operator delete((void *)v38);
  return v1;
}


unsigned __int64 __fastcall InputHandler::changeControllerId(InputHandler *this, int a2, int a3)
{
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  InputHandler *v5; // r9@1
  int *v6; // r4@1
  int *v7; // r7@1
  int v8; // t1@2
  int v9; // r5@3
  int v10; // r0@3
  unsigned int v11; // r7@3
  unsigned int v12; // r6@3
  void *v13; // r0@3
  void *v14; // r4@4
  void *v15; // r0@5
  int *v16; // r5@7
  int v17; // r0@9
  unsigned int v18; // r1@10
  int v19; // r0@10
  unsigned int v20; // r7@12
  int v21; // r4@12
  int v22; // r1@12
  int v23; // r6@12
  void **v24; // r11@12
  void **v25; // r10@13
  void **v26; // r8@13
  int v27; // r4@13
  _DWORD *v28; // r9@15
  void **v29; // r4@19
  InputHandler *v30; // r5@20
  int v31; // r1@21
  _DWORD *v32; // r9@24
  int v33; // r1@25
  int v34; // r1@26
  unsigned __int64 result; // r0@32
  InputHandler *v36; // [sp+4h] [bp-3Ch]@3
  int v37; // [sp+8h] [bp-38h]@12
  InputHandler *v38; // [sp+Ch] [bp-34h]@12
  __int64 v39; // [sp+10h] [bp-30h]@1
  char v40; // [sp+18h] [bp-28h]@31

  v3 = a3;
  v4 = a2;
  v5 = this;
  v39 = *(_QWORD *)&v3;
  v7 = (int *)(*(_QWORD *)((char *)this + 212) >> 32);
  v6 = (int *)*(_QWORD *)((char *)this + 212);
  while ( v7 != v6 )
  {
    v8 = *v6;
    ++v6;
    (*(void (**)(void))(*(_DWORD *)v8 + 44))();
  }
  ButtonChordTracker::changeControllerId(*((ButtonChordTracker **)v5 + 52), v4, v3);
  v36 = (InputHandler *)((char *)v5 + 232);
  v9 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)v5 + 29,
         (unsigned int *)&v39 + 1);
  v10 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
          (unsigned __int64 *)v5 + 29,
          (unsigned int *)&v39);
  std::swap<InputHandler::InputHandlerState>(v9, v10);
  v11 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
  v12 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
          (unsigned int *)&v39 + 1);
  v13 = *(void **)(v11 + 28);
  if ( v13 )
    do
    {
      v14 = *(void **)v13;
      operator delete(v13);
      v13 = v14;
    }
    while ( v14 );
  v15 = *(void **)(v11 + 20);
  if ( (void *)(v11 + 44) != v15 )
    operator delete(v15);
  *(_QWORD *)(v11 + 36) = *(_QWORD *)(v12 + 36);
  v16 = *(int **)(v12 + 20);
  if ( (int *)(v12 + 44) == v16 )
    *(_DWORD *)(v11 + 20) = v11 + 44;
    v17 = *v16;
    v16 = (int *)(v11 + 44);
    *(_DWORD *)(v11 + 44) = v17;
  else
    *(_DWORD *)(v11 + 20) = v16;
  v18 = *(_DWORD *)(v12 + 24);
  *(_DWORD *)(v11 + 24) = v18;
  v19 = *(_DWORD *)(v12 + 28);
  *(_DWORD *)(v11 + 28) = v19;
  *(_DWORD *)(v11 + 32) = *(_DWORD *)(v12 + 32);
  if ( v19 )
    v16[*(_WORD *)(v19 + 4) % v18] = v11 + 28;
  *(_DWORD *)(v12 + 40) = 0;
  *(_DWORD *)(v12 + 44) = 0;
  *(_DWORD *)(v12 + 20) = v12 + 44;
  *(_DWORD *)(v12 + 24) = 1;
  *(_DWORD *)(v12 + 28) = 0;
  *(_DWORD *)(v12 + 32) = 0;
  v20 = *((_DWORD *)v5 + 59);
  v21 = *((_DWORD *)v5 + 58);
  v37 = *((_DWORD *)v5 + 58);
  v38 = v5;
  v22 = HIDWORD(v39) % *((_DWORD *)v5 + 59);
  v23 = v22;
  v24 = *(void ***)(v21 + 4 * v22);
  if ( v24 )
    v25 = (void **)*v24;
    v26 = *(void ***)(v21 + 4 * v22);
    v27 = *((_DWORD *)*v24 + 1);
    while ( HIDWORD(v39) != v27 )
      v28 = *v25;
      if ( *v25 )
      {
        v27 = v28[1];
        v26 = v25;
        v25 = (void **)*v25;
        if ( v28[1] % v20 == v22 )
          continue;
      }
      goto LABEL_32;
    if ( v26 )
      v29 = (void **)*v26;
      if ( v24 != v26 )
        v30 = v38;
        if ( *v29 )
        {
          v31 = *((_DWORD *)*v29 + 1) % v20;
          if ( v31 != v23 )
            *(_DWORD *)(v37 + 4 * v31) = v26;
        }
        goto LABEL_31;
      v32 = *v29;
      if ( *v29 )
        v33 = v32[1] % v20;
        if ( v33 == v23 )
LABEL_31:
          v38 = v30;
          *v26 = *v29;
          __gnu_cxx::new_allocator<std::pair<int const,InputHandler::InputHandlerState>>::destroy<std::pair<int const,InputHandler::InputHandlerState>>(
            (int)&v40,
            (int)(v29 + 1));
          operator delete(v29);
          --*((_DWORD *)v30 + 61);
          goto LABEL_32;
        *(_DWORD *)(v37 + 4 * v33) = v24;
        v34 = *(_DWORD *)v36;
        v24 = *(void ***)(*(_DWORD *)v36 + 4 * v23);
      else
        v34 = v37;
      if ( (void **)((char *)v30 + 240) == v24 )
        *v24 = v32;
      *(_DWORD *)(v34 + 4 * v23) = 0;
      goto LABEL_31;
LABEL_32:
  result = __PAIR__((unsigned int)v38, (unsigned int)v39);
  *((_DWORD *)v38 + 65) = v39;
  return result;
}


int __fastcall InputHandler::setWindowSize(int result, int a2, int a3)
{
  __int64 i; // r6@1
  int v4; // t1@2

  for ( i = *(_QWORD *)(result + 212); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v4 + 32))() )
  {
    v4 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


unsigned int __fastcall InputHandler::setSuspendInput(InputHandler *this, bool a2, int a3)
{
  InputHandler *v3; // r5@1
  int v4; // r6@1
  int *v5; // r4@1
  int *v6; // r7@1
  bool v7; // r8@1
  int v8; // t1@2
  unsigned int result; // r0@3
  int v10; // [sp+4h] [bp-1Ch]@3

  v3 = this;
  v4 = a3;
  v5 = (int *)(*(_QWORD *)((char *)this + 212) >> 32);
  v6 = (int *)*(_QWORD *)((char *)this + 212);
  v7 = a2;
  while ( v5 != v6 )
  {
    v8 = *v6;
    ++v6;
    (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  }
  v10 = v4;
  result = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
             (unsigned __int64 *)v3 + 29,
             (unsigned int *)&v10);
  *(_BYTE *)(result + 48) = v7;
  return result;
}


int __fastcall InputHandler::render(int result, InputRenderContext *a2)
{
  int v2; // r8@1
  unsigned int v3; // r6@1
  __int64 v4; // kr00_8@2
  unsigned int v5; // r11@2
  _DWORD *v6; // r5@3
  int v7; // r4@3
  _DWORD *v8; // r7@5
  int v9; // r4@7
  int v10; // r5@17 OVERLAPPED
  int v11; // r6@17 OVERLAPPED

  v2 = result;
  v3 = *(_DWORD *)(result + 260);
  if ( v3 == -1 )
  {
    v9 = 0;
  }
  else
    v4 = *(_QWORD *)(result + 232);
    v5 = v3 % (unsigned int)(*(_QWORD *)(result + 232) >> 32);
    result = *(_DWORD *)(v4 + 4 * v5);
    if ( result )
    {
      v6 = *(_DWORD **)result;
      v7 = *(_DWORD *)(*(_DWORD *)result + 4);
      while ( v7 != v3 )
      {
        v8 = (_DWORD *)*v6;
        if ( !*v6 )
        {
          v9 = 0;
          goto LABEL_17;
        }
        v7 = v8[1];
        result = (int)v6;
        v6 = (_DWORD *)*v6;
        if ( v8[1] % HIDWORD(v4) != v5 )
      }
      if ( result )
        result = *(_DWORD *)result;
        if ( result )
          v9 = *(_DWORD *)(result + 8);
        else
      else
        v9 = 0;
    }
    else
      v9 = 0;
LABEL_17:
  for ( *(_QWORD *)&v10 = *(_QWORD *)(v2 + 212); v11 != v10; v10 += 4 )
    result = (*(int (**)(void))(**(_DWORD **)v10 + 20))();
    if ( v9 == result )
      result = (*(int (**)(void))(**(_DWORD **)v10 + 28))();
  return result;
}


int __fastcall InputHandler::registerChangeUserHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // r4@1
  int result; // r0@1
  int v5; // r5@1
  void (__fastcall *v6)(__int64 *); // r3@1
  __int64 *v7; // r6@1
  int v8; // r1@2
  int (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  __int64 v10; // [sp+0h] [bp-20h]@2
  int (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  result = 0;
  v5 = a2;
  v11 = 0;
  v6 = *(void (__fastcall **)(__int64 *))(a2 + 8);
  v7 = (__int64 *)(v3 + 164);
  if ( v6 )
  {
    v6(&v10);
    result = *(_DWORD *)(v5 + 12);
    v12 = *(_DWORD *)(v5 + 12);
    v8 = *(_DWORD *)(v5 + 8);
    v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
    v6 = (void (__fastcall *)(__int64 *))HIDWORD(v10);
    v2 = v10;
  }
  else
    v8 = 0;
  v10 = *v7;
  *(_DWORD *)v7 = v2;
  *(_DWORD *)(v3 + 168) = v6;
  v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 172);
  v9 = v11;
  *(_DWORD *)(v3 + 172) = v8;
  v12 = *(_DWORD *)(v3 + 176);
  *(_DWORD *)(v3 + 176) = result;
  if ( v9 )
    result = v9(&v10, &v10, 3, v9);
  return result;
}


void __fastcall InputHandler::_handleMappingChange(InputHandler *this, const InputMapping *a2, const InputMapping *a3, int a4)
{
  InputHandler::_handleMappingChange(this, a2, a3, a4);
}


void __fastcall InputHandler::updateInputMapping(int a1, int *a2, int a3)
{
  InputHandler::updateInputMapping(a1, a2, a3);
}


int __fastcall InputHandler::InputHandler(int a1, int a2, int a3, int a4, char a5, char a6)
{
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r6@1
  int v9; // r8@1
  int v10; // r0@1
  int v11; // r9@1
  int v12; // r0@1
  NameRegistry *v13; // r0@1
  int v14; // r0@1
  void *v15; // r0@1
  int v16; // r0@1
  int v17; // r0@1
  double v18; // r0@1
  unsigned int v19; // r0@1
  int v20; // r7@3
  void *v21; // r6@3
  __int64 v22; // r6@4
  ButtonChordTracker *v23; // r0@4
  __int64 v24; // r2@4
  int v25; // r0@4
  int v26; // r6@4
  int v27; // r7@5
  int v28; // r5@6
  void *v29; // r0@7
  void *v30; // r0@10
  void (*v31)(void); // r3@13

  v6 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v7 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  v8 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v9 = a4;
  *(_DWORD *)(a1 + 16) = 0;
  v10 = a1 + 16;
  v11 = a3;
  *(_DWORD *)(v8 + 24) = v10;
  *(_DWORD *)(v8 + 28) = v10;
  *(_DWORD *)(v8 + 44) = 0;
  *(_DWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)(v8 + 48) = v8 + 40;
  *(_DWORD *)(v8 + 52) = v8 + 40;
  v12 = v8 + 60;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 112) = 0;
  *(_DWORD *)(v8 + 116) = 0;
  *(_DWORD *)(v8 + 100) = 0;
  v8 += 100;
  _aeabi_memclr4(v12, 36);
  *(_DWORD *)(v6 + 108) = v8;
  *(_DWORD *)(v6 + 112) = v8;
  *(_DWORD *)(v6 + 120) = 0;
  *(_DWORD *)(v6 + 124) = 0;
  *(_DWORD *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 140) = 0;
  *(_DWORD *)(v6 + 156) = 0;
  *(_DWORD *)(v6 + 172) = 0;
  *(_DWORD *)(v6 + 188) = 0;
  *(_BYTE *)(v6 + 196) = a5;
  *(_BYTE *)(v6 + 197) = a6;
  v13 = (NameRegistry *)operator new(0x20u);
  NameRegistry::NameRegistry(v13, 1);
  *(_DWORD *)(v6 + 200) = v14;
  v15 = operator new(0x28u);
  v16 = InputEventQueue::InputEventQueue((int)v15);
  *(_DWORD *)(v6 + 212) = 0;
  *(_DWORD *)(v6 + 216) = 0;
  *(_DWORD *)(v6 + 204) = v16;
  *(_DWORD *)(v6 + 208) = 0;
  v17 = v6 + 220;
  *(_DWORD *)v17 = 0;
  *(_DWORD *)(v17 + 4) = v7;
  *(_DWORD *)(v17 + 8) = v11;
  HIDWORD(v18) = 10;
  *(_DWORD *)(v6 + 240) = 0;
  *(_DWORD *)(v6 + 244) = 0;
  *(_DWORD *)(v6 + 248) = 1065353216;
  LODWORD(v18) = v6 + 248;
  *(_DWORD *)(LODWORD(v18) + 4) = 0;
  v19 = sub_21E6254(v18);
  *(_DWORD *)(v6 + 236) = v19;
  if ( v19 == 1 )
  {
    *(_DWORD *)(v6 + 256) = 0;
    v21 = (void *)(v6 + 256);
  }
  else
    if ( v19 >= 0x40000000 )
      sub_21E57F4();
    v20 = 4 * v19;
    v21 = operator new(4 * v19);
    _aeabi_memclr4(v21, v20);
  *(_DWORD *)(v6 + 232) = v21;
  *(_DWORD *)(v6 + 260) = 0;
  v22 = *(_QWORD *)(v6 + 200);
  v23 = (ButtonChordTracker *)operator new(0x30u);
  LODWORD(v24) = v22;
  v25 = ButtonChordTracker::ButtonChordTracker(v23, (InputEventQueue *)HIDWORD(v22), v24);
  v26 = *(_DWORD *)(v6 + 208);
  *(_DWORD *)(v6 + 208) = v25;
  if ( v26 )
    v27 = *(_DWORD *)(v26 + 28);
    if ( v27 )
    {
      do
      {
        v28 = *(_DWORD *)v27;
        ButtonChordTracker::TrackerMappingAndState::~TrackerMappingAndState((ButtonChordTracker::TrackerMappingAndState *)(v27 + 8));
        operator delete((void *)v27);
        v27 = v28;
      }
      while ( v28 );
    }
    _aeabi_memclr4(*(_QWORD *)(v26 + 20), 4 * (*(_QWORD *)(v26 + 20) >> 32));
    *(_DWORD *)(v26 + 28) = 0;
    *(_DWORD *)(v26 + 32) = 0;
    v29 = *(void **)(v26 + 20);
    if ( v29 && (void *)(v26 + 44) != v29 )
      operator delete(v29);
    v30 = *(void **)(v26 + 8);
    if ( v30 )
      operator delete(v30);
    operator delete((void *)v26);
  InputHandler::initNewControllerIdOwner(v6, *(_DWORD *)(v6 + 260), v9);
  v31 = *(void (**)(void))(v6 + 156);
  if ( v31 )
    v31();
    *(_DWORD *)(v6 + 156) = 0;
    *(_DWORD *)(v6 + 160) = 0;
  return v6;
}


int __fastcall InputHandler::setIgnoreButtonRelease(InputHandler *this, int a2)
{
  int result; // r0@1
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  for ( result = *(_DWORD *)(std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                               (unsigned __int64 *)this + 29,
                               (unsigned int *)&v3)
                           + 28); result; result = *(_DWORD *)result )
    *(_DWORD *)(result + 8) = 1;
  return result;
}


char *__fastcall InputHandler::pushInputMapping(int a1, int *a2, int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  int v5; // r11@1
  int v6; // r9@1
  int v7; // r0@1
  int *v8; // r4@1
  int *v9; // r5@1
  int v10; // r8@1
  int v11; // t1@2
  unsigned int v12; // r0@3
  unsigned int v13; // r7@3
  int *v14; // r1@3
  int *v15; // r0@3
  unsigned __int64 *v16; // r10@3
  const InputMapping *v17; // r0@4
  char *result; // r0@6
  int *v19; // [sp+Ch] [bp-2Ch]@1
  int v20; // [sp+10h] [bp-28h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v19 = a2;
  v6 = (*(int (**)(void))(**(_DWORD **)(a1 + 228) + 12))();
  (*(void (**)(void))(**(_DWORD **)(v3 + 224) + 8))();
  v7 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 12))(v6, v4);
  v8 = (int *)(*(_QWORD *)(v3 + 212) >> 32);
  v9 = (int *)*(_QWORD *)(v3 + 212);
  v10 = v7;
  while ( v8 != v9 )
  {
    v11 = *v9;
    ++v9;
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v11 + 8))(v11, *(_QWORD *)(v3 + 200) >> 32);
  }
  ButtonChordTracker::setMapping(*(_DWORD *)(v3 + 208), (unsigned __int64 *)(v10 + 276), v5);
  v20 = v5;
  v12 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
          (unsigned __int64 *)(v3 + 232),
          (unsigned int *)&v20);
  v13 = v12;
  v14 = *(int **)(v12 + 12);
  v16 = (unsigned __int64 *)(v12 + 8);
  v15 = *(int **)(v12 + 8);
  if ( v15 != v14 )
    v17 = (const InputMapping *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 12))(v6, v14 - 1);
    InputHandler::_handleMappingChange((InputHandler *)v3, (const InputMapping *)v10, v17, v5);
    v15 = *(int **)(v13 + 12);
  if ( v15 == *(int **)(v13 + 16) )
    result = std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(v16, v19);
  else
    sub_21E8AF4(v15, v19);
    result = (char *)(*(_DWORD *)(v13 + 12) + 4);
    *(_DWORD *)(v13 + 12) = result;
  return result;
}


int __fastcall InputHandler::_handlePointerLocationEvent(unsigned int a1, _DWORD *a2, int a3, int a4, unsigned int a5)
{
  _DWORD *v5; // r6@1
  unsigned int v6; // r7@1
  int v7; // r9@1
  int v8; // r10@1
  unsigned int v9; // r4@1
  __int64 v10; // kr00_8@2
  _DWORD *v11; // r0@2
  _DWORD *v12; // r4@3
  int v13; // r7@3
  int result; // r0@7
  int v15; // r0@11
  int v16; // r4@19
  int i; // r7@19
  __int64 v18; // kr10_8@19
  unsigned __int64 v19; // [sp+0h] [bp-30h]@3

  v5 = a2;
  v6 = *a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  if ( a5 == -1 )
  {
    result = 0;
  }
  else
    v10 = *(_QWORD *)(a1 + 232);
    v11 = *(_DWORD **)(v10 + 4 * (a5 % HIDWORD(v10)));
    if ( v11 )
    {
      v19 = __PAIR__(v6, v9);
      v12 = (_DWORD *)*v11;
      v13 = *(_DWORD *)(*v11 + 4);
      while ( v13 != a5 )
      {
        if ( *v12 )
        {
          v13 = *(_DWORD *)(v10 + 4);
          v11 = v12;
          v12 = (_DWORD *)*v12;
          if ( *(_DWORD *)(v10 + 4) % HIDWORD(v10) == a5 % HIDWORD(v10) )
            continue;
        }
        result = 0;
        v6 = HIDWORD(v19);
        v9 = v19;
        goto LABEL_16;
      }
      v6 = HIDWORD(v19);
      if ( v11 )
        v15 = *v11;
        if ( v15 )
          result = *(_DWORD *)(v15 + 8);
        else
          result = 0;
      else
    }
    else
      result = 0;
LABEL_16:
  if ( v6 == result || (result = *(_BYTE *)(v9 + 197)) != 0 && v6 == 2 )
    v18 = *(_QWORD *)(v9 + 84);
    v16 = *(_QWORD *)(v9 + 84) >> 32;
    for ( i = v18; v16 != i; i += 16 )
      if ( !*(_DWORD *)(i + 8) )
        sub_21E5F48();
      result = (*(int (__fastcall **)(int, _DWORD *, int, int))(i + 12))(i, v5, v8, v7);
  return result;
}


void __fastcall InputHandler::initNewControllerIdOwner(int a1, int a2, int a3)
{
  InputHandler::initNewControllerIdOwner(a1, a2, a3);
}


int __fastcall InputHandler::registerDirectionHandler(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  _DWORD *v6; // r5@1
  void (__fastcall *v7)(_DWORD *, int, signed int); // r3@1
  int v8; // r0@3
  int v9; // r3@3
  int v10; // r2@3
  int *v11; // r7@4
  int v12; // r0@8
  int result; // r0@12

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x24u);
  v6[4] = v5;
  v6[7] = 0;
  v7 = *(void (__fastcall **)(_DWORD *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7(v6 + 5, v4, 2);
    v6[8] = *(_DWORD *)(v4 + 12);
    v6[7] = *(_DWORD *)(v4 + 8);
  }
  v8 = *(_DWORD *)(v3 + 104);
  v9 = v3 + 100;
  v10 = v3 + 100;
  if ( v8 )
    do
    {
      v10 = v8;
      v11 = (int *)(v8 + 12);
      if ( v6[4] < *(_DWORD *)(v8 + 16) )
        v11 = (int *)(v8 + 8);
      v8 = *v11;
    }
    while ( *v11 );
  if ( v9 == v10 )
    v12 = 1;
  else
    v12 = 0;
    if ( v6[4] < *(_DWORD *)(v10 + 16) )
      v12 = 1;
  sub_21D4928(v12, (int)v6, v10, v9);
  result = *(_DWORD *)(v3 + 116) + 1;
  *(_DWORD *)(v3 + 116) = result;
  return result;
}


void __fastcall InputHandler::releaseButtonsAndSticks(int a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r5@1
  int v5; // r0@2
  int v6; // r4@2
  __int64 v7; // r0@2
  __int64 v8; // r0@2
  int **v9; // r0@2
  int **v10; // r11@2
  unsigned int v11; // r0@5
  unsigned __int16 v12; // r4@5
  __int64 v13; // kr08_8@5
  unsigned int v14; // r6@5
  _DWORD *v15; // r0@5
  _DWORD *v16; // r9@6
  unsigned __int16 v17; // r2@6
  _DWORD *v18; // r8@8
  bool v19; // zf@11
  __int64 v20; // kr10_8@14
  __int16 v21; // r0@14
  __int64 v22; // r4@15
  int v23; // t1@16
  int **v24; // r4@20
  int **v25; // r6@20
  unsigned int *v26; // r2@22
  signed int v27; // r1@24
  int *v28; // r0@30
  int v29; // [sp+10h] [bp-48h]@2
  int **v30; // [sp+14h] [bp-44h]@2
  unsigned int v31; // [sp+18h] [bp-40h]@1
  int v32; // [sp+1Ch] [bp-3Ch]@2
  int v33; // [sp+20h] [bp-38h]@15
  int **v34; // [sp+28h] [bp-30h]@1
  int **v35; // [sp+2Ch] [bp-2Ch]@2

  v3 = a1;
  v4 = a3;
  v34 = (int **)a3;
  v31 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
          (unsigned __int64 *)(a1 + 232),
          (unsigned int *)&v34);
  if ( (unsigned int)*(_QWORD *)(v31 + 8) != *(_QWORD *)(v31 + 8) >> 32 )
  {
    v29 = v4;
    v5 = (*(int (**)(void))(**(_DWORD **)(v3 + 228) + 12))();
    v6 = (*(int (**)(void))(*(_DWORD *)v5 + 12))();
    LODWORD(v7) = &v34;
    HIDWORD(v7) = v6;
    InputMapping::getButtonDifference(v7, 0);
    LODWORD(v8) = &v32;
    HIDWORD(v8) = v6;
    InputMapping::getStickDifference(v8, 0);
    v9 = v35;
    v10 = v34;
    v30 = v35;
    while ( v10 != v9 )
    {
      v11 = NameRegistry::getNameId(*(unsigned __int64 **)(v3 + 200), v10);
      v12 = v11;
      v13 = *(_QWORD *)(v31 + 20);
      v14 = v11 % (unsigned int)(*(_QWORD *)(v31 + 20) >> 32);
      v15 = *(_DWORD **)(v13 + 4 * v14);
      if ( v15 )
      {
        v16 = (_DWORD *)*v15;
        v17 = *(_WORD *)(*v15 + 4);
        while ( v12 != v17 )
        {
          v18 = (_DWORD *)*v16;
          if ( *v16 )
          {
            v15 = v16;
            v17 = *((_WORD *)v18 + 2);
            v16 = (_DWORD *)*v16;
            if ( (unsigned int)*((_WORD *)v18 + 2) % HIDWORD(v13) == v14 )
              continue;
          }
          goto LABEL_3;
        }
        v19 = v15 == 0;
        if ( v15 )
          v19 = *v15 == 0;
        if ( !v19 )
          v20 = *(_QWORD *)(v3 + 200);
          v21 = NameRegistry::getNameId((unsigned __int64 *)v20, v10);
          InputEventQueue::enqueueButton(SHIDWORD(v20), v21, 0, 0, 0, v4, 1);
      }
LABEL_3:
      ++v10;
      v9 = v30;
    }
    v22 = *(_QWORD *)&v32;
    if ( v32 != v33 )
      do
        v23 = *(_DWORD *)v22;
        LODWORD(v22) = v22 + 4;
        InputEventQueue::enqueueDirection(*(_DWORD *)(v3 + 204), v23, 0, 0, 0, v29, 1);
      while ( HIDWORD(v22) != (_DWORD)v22 );
      LODWORD(v22) = v32;
    if ( (_DWORD)v22 )
      operator delete((void *)v22);
    v25 = v35;
    v24 = v34;
    if ( v34 != v35 )
        v28 = *v24 - 3;
        if ( v28 != &dword_28898C0 )
          v26 = (unsigned int *)(*v24 - 1);
          if ( &pthread_create )
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          else
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        ++v24;
      while ( v24 != v25 );
      v24 = v34;
    if ( v24 )
      operator delete(v24);
  }
}


int __fastcall InputHandler::registerButtonDownHandler(int a1, int **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r7@1
  int v6; // r6@1
  int v7; // r0@1
  signed int v8; // r5@1
  void (__fastcall *v9)(__int64 *, int, signed int); // r3@1
  void *v10; // r0@3
  int v11; // r1@3
  __int64 v12; // kr00_8@3
  int v13; // r3@3
  int v14; // r0@3
  int v15; // r2@3
  int v16; // r0@3
  int *v17; // r7@4
  int v18; // r0@8
  int result; // r0@12
  __int64 v20; // [sp+4h] [bp-24h]@2
  int (*v21)(void); // [sp+Ch] [bp-1Ch]@1
  int v22; // [sp+10h] [bp-18h]@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = NameRegistry::getNameId(*(unsigned __int64 **)(a1 + 200), a2);
  v21 = 0;
  v8 = v7;
  v9 = *(void (__fastcall **)(__int64 *, int, signed int))(v6 + 8);
  if ( v9 )
  {
    v9(&v20, v6, 2);
    v22 = *(_DWORD *)(v6 + 12);
    v21 = *(int (**)(void))(v6 + 8);
  }
  v10 = operator new(0x28u);
  v11 = (int)v10;
  *((_WORD *)v10 + 8) = v8;
  *((_BYTE *)v10 + 20) = v5;
  v12 = v20;
  v20 = *((_QWORD *)v10 + 3);
  *((_QWORD *)v10 + 3) = v12;
  v13 = v4 + 16;
  *((_DWORD *)v10 + 8) = v21;
  v14 = *((_DWORD *)v10 + 9);
  *(_DWORD *)(v11 + 36) = v22;
  v15 = v4 + 16;
  v22 = v14;
  v16 = *(_DWORD *)(v4 + 20);
  if ( v16 )
    do
    {
      v15 = v16;
      v17 = (int *)(v16 + 12);
      if ( v8 < *(_WORD *)(v16 + 16) )
        v17 = (int *)(v16 + 8);
      v16 = *v17;
    }
    while ( *v17 );
  if ( v13 == v15 )
    v18 = 1;
  else
    v18 = 0;
    if ( v8 < *(_WORD *)(v15 + 16) )
      v18 = 1;
  sub_21D4928(v18, v11, v15, v13);
  result = *(_DWORD *)(v4 + 32) + 1;
  *(_DWORD *)(v4 + 32) = result;
  if ( v21 )
    result = v21();
  return result;
}


signed int __fastcall InputHandler::_handleButtonEvent(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r6@1
  unsigned int v7; // r7@1
  signed int result; // r0@1
  int v9; // r2@2
  int v10; // r1@4
  int v11; // r5@4
  int v12; // r4@4
  int v13; // r2@5
  bool v14; // zf@18
  int v15; // [sp+0h] [bp-20h]@1

  v5 = a1;
  v6 = a2;
  v15 = a5;
  v7 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)(a1 + 232),
         (unsigned int *)&v15);
  result = ButtonChordTracker::trackButtonEvent(*(_DWORD *)(v5 + 208), *(_WORD *)v6, *(_BYTE *)(v6 + 2), a5);
  if ( result != 2 )
  {
    result = *(_BYTE *)(v6 + 2);
    v9 = v5 + 36;
    if ( result == 1 )
      v9 = v5 + 12;
    v10 = *(_DWORD *)(v9 + 8);
    v11 = v9 + 4;
    v12 = v9 + 4;
    if ( v10 )
    {
      result = *(_WORD *)v6;
      v13 = v9 + 4;
      do
      {
        v12 = v10;
        while ( *(_WORD *)(v12 + 16) < result )
        {
          v12 = *(_DWORD *)(v12 + 12);
          if ( !v12 )
          {
            v12 = v13;
            goto LABEL_11;
          }
        }
        v10 = *(_DWORD *)(v12 + 8);
        v13 = v12;
      }
      while ( v10 );
    }
LABEL_11:
    if ( v12 != v11 )
      result = *(_WORD *)(v12 + 16);
      if ( *(_WORD *)v6 < result )
        v12 = v11;
      while ( v12 != v11 )
        result = *(_WORD *)v6;
        if ( *(_WORD *)(v12 + 16) != result )
          break;
        v14 = *(_BYTE *)(v7 + 48) == 0;
        if ( *(_BYTE *)(v7 + 48) )
          v14 = *(_BYTE *)(v12 + 20) == 0;
        if ( v14 )
          if ( !*(_DWORD *)(v12 + 32) )
            sub_21E5F48();
          (*(void (__cdecl **)(int))(v12 + 36))(v12 + 24);
        result = sub_21D4820(v12);
        v12 = result;
  }
  return result;
}


int __fastcall InputHandler::clearInputDeviceQueues(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 212); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 12))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


_BOOL4 __fastcall InputHandler::areButtonsDown(InputHandler *this, int a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return *(_DWORD *)(std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                       (unsigned __int64 *)this + 29,
                       (unsigned int *)&v3)
                   + 32) != 0;
}


int __fastcall InputHandler::registerInputDeviceMapper(int result, int *a2)
{
  __int64 v2; // r2@1
  int v3; // r12@3

  v2 = *(_QWORD *)(result + 216);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = (int)j_j_j__ZNSt6vectorISt10unique_ptrI17InputDeviceMapperSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
                    (_QWORD *)(result + 212),
                    a2);
  }
  else
    v3 = *a2;
    *a2 = 0;
    *(_DWORD *)v2 = v3;
    *(_DWORD *)(result + 216) += 4;
  return result;
}


int __fastcall InputHandler::_handleControllerConnectionStateChangeEvent(InputHandler *this, ClientInstance *a2, int a3, int a4)
{
  if ( !*((_DWORD *)this + 47) )
    sub_21E5F48();
  return (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))this + 48))((char *)this + 180, a2, a3, a4);
}


int __fastcall InputHandler::_handleDirectionEvent(int result, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r1@1
  int v6; // r9@1
  int v7; // r7@1
  int v8; // r2@2

  v3 = a2;
  v4 = result + 100;
  v5 = *(_DWORD *)(result + 104);
  v6 = a3;
  v7 = result + 100;
  if ( v5 )
  {
    result = *(_DWORD *)v3;
    v8 = v4;
    do
    {
      v7 = v5;
      while ( *(_DWORD *)(v7 + 16) < result )
      {
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v8;
          goto LABEL_8;
        }
      }
      v5 = *(_DWORD *)(v7 + 8);
      v8 = v7;
    }
    while ( v5 );
  }
LABEL_8:
  if ( v7 != v4 )
    result = *(_DWORD *)(v7 + 16);
    if ( *(_DWORD *)v3 < result )
      v7 = v4;
    while ( v7 != v4 )
      result = *(_DWORD *)v3;
      if ( *(_DWORD *)(v7 + 16) != *(_DWORD *)v3 )
        break;
      if ( !*(_DWORD *)(v7 + 28) )
        sub_21E5F48();
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(v7 + 32))(
        v7 + 20,
        *(_QWORD *)(v3 + 4),
        *(_QWORD *)(v3 + 4) >> 32,
        v6);
      result = sub_21D47E8(v7);
      v7 = result;
  return result;
}


void __fastcall InputHandler::updateInputMapping(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r6@1
  int v5; // r4@1
  unsigned int v6; // r7@1
  int v7; // r0@1
  int v8; // r1@1
  void *v9; // r0@1
  int v10; // r7@2
  const InputMapping *v11; // r6@2
  const InputMapping *v12; // r0@2
  void *v13; // r0@2
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  int v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v19 = a3;
  v6 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)(a1 + 232),
         (unsigned int *)&v19);
  sub_21E8AF4(&v18, (int *)(*(_DWORD *)(v6 + 12) - 4));
  v7 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v7 - 4;
  v8 = *(_DWORD *)(v7 - 4);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  InputHandler::pushInputMapping(v3, v4, v5);
  v10 = (*(int (**)(void))(**(_DWORD **)(v3 + 228) + 12))();
  v11 = (const InputMapping *)(*(int (**)(void))(*(_DWORD *)v10 + 12))();
  v12 = (const InputMapping *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)v10 + 12))(v10, &v18);
  InputHandler::_handleMappingChange((InputHandler *)v3, v11, v12, v5);
  v13 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


int __fastcall InputHandler::_handleRawInputEvent(int a1, int a2)
{
  int v2; // r12@2
  unsigned int v3; // r3@2
  int v4; // r1@2

  if ( !*(_DWORD *)(a1 + 140) )
    sub_21E5F48();
  v2 = *(_DWORD *)a2;
  v3 = *(_WORD *)(a2 + 4);
  v4 = *(_BYTE *)(a2 + 6);
  return (*(int (__fastcall **)(int, int, unsigned int, _DWORD))(a1 + 144))(a1 + 132, v2, v3 >> 8, (unsigned __int8)v3);
}


int __fastcall InputHandler::_handleCaretLocationEvent(int result, _DWORD *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r9@1
  _DWORD *i; // r6@1

  v4 = *(_QWORD *)(result + 72) >> 32;
  v5 = *(_QWORD *)(result + 72);
  v6 = a4;
  v7 = a3;
  for ( i = a2; v4 != v5; v5 += 16 )
  {
    if ( !*(_DWORD *)(v5 + 8) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(int, _DWORD, int, int))(v5 + 12))(v5, *i, v7, v6);
  }
  return result;
}


unsigned int __fastcall InputHandler::registerCaretLocationHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  void (__fastcall *v5)(int); // r3@2
  unsigned int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 76);
  if ( v4 == *(_QWORD *)(a1 + 76) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFvi11FocusImpactR14ClientInstanceEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(
               (unsigned __int64 *)(a1 + 72),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 76);
    }
    result = v4 + 16;
    *(_DWORD *)(v2 + 76) = v4 + 16;
  return result;
}


void __fastcall InputHandler::releaseButtonsAndSticks(int a1, int a2, int a3)
{
  InputHandler::releaseButtonsAndSticks(a1, a2, a3);
}


int __fastcall InputHandler::getCurrentInputMode(InputHandler *this, int a2)
{
  __int64 v2; // kr00_8@2
  _DWORD *v3; // r0@2
  _DWORD *v4; // r6@3
  int v5; // r7@3
  bool v6; // zf@8
  int result; // r0@11

  if ( a2 == -1 )
    goto LABEL_12;
  v2 = *((_QWORD *)this + 29);
  v3 = *(_DWORD **)(v2 + 4 * ((unsigned int)a2 % HIDWORD(v2)));
  if ( !v3 )
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 4);
  while ( v5 != a2 )
  {
    if ( *v4 )
    {
      v5 = *(_DWORD *)(v2 + 4);
      v3 = v4;
      v4 = (_DWORD *)*v4;
      if ( *(_DWORD *)(v2 + 4) % HIDWORD(v2) == (unsigned int)a2 % HIDWORD(v2) )
        continue;
    }
  }
  v6 = v3 == 0;
  if ( v3 )
    v3 = (_DWORD *)*v3;
    v6 = v3 == 0;
  if ( v6 )
LABEL_12:
    result = 0;
  else
    result = v3[2];
  return result;
}


int __fastcall InputHandler::updateInputMappingWithFlush(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r0@1
  unsigned int v6; // r4@1
  void *v7; // r0@1
  void *v8; // r5@2
  int result; // r0@3
  int v10; // [sp+4h] [bp-14h]@1

  v3 = a3;
  v4 = a1;
  InputHandler::updateInputMapping(a1, a2, a3);
  v10 = v3;
  v5 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)(v4 + 232),
         (unsigned int *)&v10);
  v6 = v5;
  v7 = *(void **)(v5 + 28);
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
  _aeabi_memclr4(*(_QWORD *)(v6 + 20), 4 * (*(_QWORD *)(v6 + 20) >> 32));
  result = 0;
  *(_DWORD *)(v6 + 28) = 0;
  *(_DWORD *)(v6 + 32) = 0;
  return result;
}


unsigned int __fastcall InputHandler::registerInputModeHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  void (__fastcall *v5)(int); // r3@2
  unsigned int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( v4 == *(_QWORD *)(a1 + 4) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFv9InputModeR14ClientInstanceEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(
               (unsigned __int64 *)a1,
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 4);
    }
    result = v4 + 16;
    *(_DWORD *)(v2 + 4) = v4 + 16;
  return result;
}


void __fastcall InputHandler::refreshInputMapping(InputHandler *this, int a2)
{
  int v2; // r4@1
  InputHandler *v3; // r5@1
  __int64 v4; // kr00_8@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+4h] [bp-1Ch]@2
  int v9; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  v9 = a2;
  v4 = *(_QWORD *)(std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                     (unsigned __int64 *)this + 29,
                     (unsigned int *)&v9)
                 + 8);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    sub_21E8AF4(&v8, (int *)(HIDWORD(v4) - 4));
    InputHandler::updateInputMapping((int)v3, &v8, v2);
    v5 = (void *)(v8 - 12);
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
        j_j_j_j__ZdlPv_9(v5);
    }
  }
}


int __fastcall InputHandler::registerControllerConnectionStateChangeHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // r4@1
  int result; // r0@1
  int v5; // r5@1
  void (__fastcall *v6)(__int64 *); // r3@1
  __int64 *v7; // r6@1
  int v8; // r1@2
  int (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  __int64 v10; // [sp+0h] [bp-20h]@2
  int (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  result = 0;
  v5 = a2;
  v11 = 0;
  v6 = *(void (__fastcall **)(__int64 *))(a2 + 8);
  v7 = (__int64 *)(v3 + 180);
  if ( v6 )
  {
    v6(&v10);
    result = *(_DWORD *)(v5 + 12);
    v12 = *(_DWORD *)(v5 + 12);
    v8 = *(_DWORD *)(v5 + 8);
    v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
    v6 = (void (__fastcall *)(__int64 *))HIDWORD(v10);
    v2 = v10;
  }
  else
    v8 = 0;
  v10 = *v7;
  *(_DWORD *)v7 = v2;
  *(_DWORD *)(v3 + 184) = v6;
  v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 188);
  v9 = v11;
  *(_DWORD *)(v3 + 188) = v8;
  v12 = *(_DWORD *)(v3 + 192);
  *(_DWORD *)(v3 + 192) = result;
  if ( v9 )
    result = v9(&v10, &v10, 3, v9);
  return result;
}


unsigned int __fastcall InputHandler::registerPointerLocationHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  void (__fastcall *v5)(int); // r3@2
  unsigned int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 == *(_QWORD *)(a1 + 88) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFvRK24PointerLocationEventData11FocusImpactR14ClientInstanceEESaIS8_EE19_M_emplace_back_auxIJRKS8_EEEvDpOT_(
               (unsigned __int64 *)(a1 + 84),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 88);
    }
    result = v4 + 16;
    *(_DWORD *)(v2 + 88) = v4 + 16;
  return result;
}


void __fastcall InputHandler::initNewControllerIdOwner(int a1, int a2, int a3)
{
  int v3; // r9@1
  _DWORD *v4; // r10@1
  double v5; // r0@1
  unsigned int v6; // r0@1
  int v7; // r7@3
  int *v8; // r6@3
  void *v9; // r0@4
  void *v10; // r5@5
  __int64 v11; // r6@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int *v14; // r0@19
  int v15; // [sp+0h] [bp-60h]@1
  int v16; // [sp+4h] [bp-5Ch]@1
  int v17; // [sp+8h] [bp-58h]@1
  int v18; // [sp+Ch] [bp-54h]@1
  int v19; // [sp+10h] [bp-50h]@1
  void *v20; // [sp+14h] [bp-4Ch]@4
  unsigned int v21; // [sp+18h] [bp-48h]@1
  void *ptr; // [sp+1Ch] [bp-44h]@1
  int v23; // [sp+20h] [bp-40h]@1
  signed int v24; // [sp+24h] [bp-3Ch]@1
  int v25; // [sp+28h] [bp-38h]@1
  int v26; // [sp+2Ch] [bp-34h]@7
  __int16 v27; // [sp+30h] [bp-30h]@4
  int v28; // [sp+38h] [bp-28h]@1

  v28 = a2;
  v3 = a3;
  v4 = (_DWORD *)std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                   (unsigned __int64 *)(a1 + 232),
                   (unsigned int *)&v28);
  _aeabi_memclr8(&v15, 52);
  v15 = 3;
  ptr = 0;
  v23 = 0;
  HIDWORD(v5) = 10;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v24 = 1065353216;
  v25 = 0;
  LODWORD(v5) = &v24;
  v6 = sub_21E6254(v5);
  v21 = v6;
  if ( v6 == 1 )
  {
    v26 = 0;
    v8 = &v26;
  }
  else
    if ( v6 >= 0x40000000 )
      sub_21E57F4();
    v7 = 4 * v6;
    v8 = (int *)operator new(4 * v6);
    _aeabi_memclr4(v8, v7);
  v20 = v8;
  v27 = 0;
  InputHandler::InputHandlerState::operator=((int)v4, (int)&v15);
  v9 = ptr;
  if ( ptr )
    do
    {
      v10 = *(void **)v9;
      operator delete(v9);
      v9 = v10;
    }
    while ( v10 );
  _aeabi_memclr4(v20, 4 * v21);
  if ( v20 && &v26 != v20 )
    operator delete(v20);
  v11 = *(_QWORD *)&v17;
  if ( v17 != v18 )
      v14 = (int *)(*(_DWORD *)v11 - 12);
      if ( v14 != &dword_28898C0 )
      {
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
          j_j_j_j__ZdlPv_9(v14);
      }
      LODWORD(v11) = v11 + 4;
    while ( (_DWORD)v11 != HIDWORD(v11) );
    LODWORD(v11) = v17;
  if ( (_DWORD)v11 )
    operator delete((void *)v11);
  *v4 = v3;
}


int __fastcall InputHandler::_handleChangeUserEvent(InputHandler *this, MinecraftGame *a2, int a3, int a4)
{
  if ( !*((_DWORD *)this + 43) )
    sub_21E5F48();
  return (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))this + 44))((char *)this + 164, a2, a3, a4);
}


const void **__fastcall InputHandler::getCurrentInputMapping(InputHandler *this, int a2)
{
  __int64 v2; // kr00_8@2
  _DWORD *v3; // r0@2
  _DWORD *v4; // r7@3
  int v5; // r4@3
  const void **v6; // r8@3
  _DWORD *v7; // r6@5
  void **v8; // r0@8
  int v9; // r0@11
  __int64 v10; // kr08_8@12

  if ( a2 == -1 )
  {
    v8 = &Util::EMPTY_STRING;
  }
  else
    v2 = *((_QWORD *)this + 29);
    v3 = *(_DWORD **)(v2 + 4 * ((unsigned int)a2 % HIDWORD(v2)));
    if ( v3 )
    {
      v4 = (_DWORD *)*v3;
      v5 = *(_DWORD *)(*v3 + 4);
      v6 = &Util::EMPTY_STRING;
      while ( v5 != a2 )
      {
        v7 = (_DWORD *)*v4;
        if ( *v4 )
        {
          v5 = v7[1];
          v3 = v4;
          v4 = (_DWORD *)*v4;
          if ( v7[1] % HIDWORD(v2) == (unsigned int)a2 % HIDWORD(v2) )
            continue;
        }
        return v6;
      }
      if ( v3 )
        v9 = *v3;
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 16);
          v6 = (const void **)(HIDWORD(v10) - 4);
          if ( (_DWORD)v10 == HIDWORD(v10) )
            v6 = &Util::EMPTY_STRING;
          return v6;
        v8 = &Util::EMPTY_STRING;
      else
    }
    else
      v8 = &Util::EMPTY_STRING;
  return (const void **)*v8;
}


_DWORD *__fastcall InputHandler::getStateOrNull(InputHandler *this, int a2)
{
  __int64 v2; // kr00_8@2
  _DWORD *v3; // r0@2
  _DWORD *v4; // r6@3
  int v5; // r7@3
  bool v6; // zf@8
  _DWORD *result; // r0@11

  if ( a2 == -1 )
    goto LABEL_12;
  v2 = *((_QWORD *)this + 29);
  v3 = *(_DWORD **)(v2 + 4 * ((unsigned int)a2 % HIDWORD(v2)));
  if ( !v3 )
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 4);
  while ( v5 != a2 )
  {
    if ( *v4 )
    {
      v5 = *(_DWORD *)(v2 + 4);
      v3 = v4;
      v4 = (_DWORD *)*v4;
      if ( *(_DWORD *)(v2 + 4) % HIDWORD(v2) == (unsigned int)a2 % HIDWORD(v2) )
        continue;
    }
  }
  v6 = v3 == 0;
  if ( v3 )
    v3 = (_DWORD *)*v3;
    v6 = v3 == 0;
  if ( v6 )
LABEL_12:
    result = 0;
  else
    result = v3 + 2;
  return result;
}


unsigned int __fastcall InputHandler::setDisableInput(InputHandler *this, bool a2, int a3)
{
  InputHandler *v3; // r5@1
  int v4; // r6@1
  int *v5; // r4@1
  int *v6; // r7@1
  bool v7; // r8@1
  int v8; // t1@2
  unsigned int result; // r0@3
  int v10; // [sp+4h] [bp-1Ch]@3

  v3 = this;
  v4 = a3;
  v5 = (int *)(*(_QWORD *)((char *)this + 212) >> 32);
  v6 = (int *)*(_QWORD *)((char *)this + 212);
  v7 = a2;
  while ( v5 != v6 )
  {
    v8 = *v6;
    ++v6;
    (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  }
  v10 = v4;
  result = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
             (unsigned __int64 *)v3 + 29,
             (unsigned int *)&v10);
  *(_BYTE *)(result + 49) = v7;
  return result;
}


int __fastcall InputHandler::setInputBindingMode(int result)
{
  __int64 i; // r6@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 212); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 36))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


void __fastcall InputHandler::refreshInputMapping(InputHandler *this, int a2)
{
  InputHandler::refreshInputMapping(this, a2);
}


int __fastcall InputHandler::_handleVectorEvent(int result, int a2)
{
  int v2; // r4@1
  int v3; // r7@1

  v2 = *(_QWORD *)(result + 120) >> 32;
  v3 = *(_QWORD *)(result + 120);
  for ( _R6 = a2; v2 != v3; v3 += 16 )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      sub_21E5F48();
    __asm
    {
      VLDR            S0, [R6,#0xC]
      VSTR            S0, [SP,#0x28+var_28]
    }
    result = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(v3 + 12))(
               v3,
               *(_WORD *)_R6,
               *(_QWORD *)(_R6 + 4),
               *(_QWORD *)(_R6 + 4) >> 32);
  }
  return result;
}


signed int __fastcall InputHandler::getInputMappingStackSize(InputHandler *this, int a2)
{
  __int64 v2; // kr00_8@2
  _DWORD *v3; // r0@2
  _DWORD *v4; // r6@3
  int v5; // r7@3
  bool v6; // zf@8
  signed int result; // r0@11

  if ( a2 == -1 )
    goto LABEL_12;
  v2 = *((_QWORD *)this + 29);
  v3 = *(_DWORD **)(v2 + 4 * ((unsigned int)a2 % HIDWORD(v2)));
  if ( !v3 )
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 4);
  while ( v5 != a2 )
  {
    if ( *v4 )
    {
      v5 = *(_DWORD *)(v2 + 4);
      v3 = v4;
      v4 = (_DWORD *)*v4;
      if ( *(_DWORD *)(v2 + 4) % HIDWORD(v2) == (unsigned int)a2 % HIDWORD(v2) )
        continue;
    }
  }
  v6 = v3 == 0;
  if ( v3 )
    v3 = (_DWORD *)*v3;
    v6 = v3 == 0;
  if ( v6 )
LABEL_12:
    result = 0;
  else
    result = (signed int)((*((_QWORD *)v3 + 2) >> 32) - *((_QWORD *)v3 + 2)) >> 2;
  return result;
}


int __fastcall InputHandler::registerButtonUpHandler(int a1, int **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r7@1
  int v6; // r6@1
  int v7; // r0@1
  signed int v8; // r5@1
  void (__fastcall *v9)(__int64 *, int, signed int); // r3@1
  void *v10; // r0@3
  int v11; // r1@3
  __int64 v12; // kr00_8@3
  int v13; // r3@3
  int v14; // r0@3
  int v15; // r2@3
  int v16; // r0@3
  int *v17; // r7@4
  int v18; // r0@8
  int result; // r0@12
  __int64 v20; // [sp+4h] [bp-24h]@2
  int (*v21)(void); // [sp+Ch] [bp-1Ch]@1
  int v22; // [sp+10h] [bp-18h]@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = NameRegistry::getNameId(*(unsigned __int64 **)(a1 + 200), a2);
  v21 = 0;
  v8 = v7;
  v9 = *(void (__fastcall **)(__int64 *, int, signed int))(v6 + 8);
  if ( v9 )
  {
    v9(&v20, v6, 2);
    v22 = *(_DWORD *)(v6 + 12);
    v21 = *(int (**)(void))(v6 + 8);
  }
  v10 = operator new(0x28u);
  v11 = (int)v10;
  *((_WORD *)v10 + 8) = v8;
  *((_BYTE *)v10 + 20) = v5;
  v12 = v20;
  v20 = *((_QWORD *)v10 + 3);
  *((_QWORD *)v10 + 3) = v12;
  v13 = v4 + 40;
  *((_DWORD *)v10 + 8) = v21;
  v14 = *((_DWORD *)v10 + 9);
  *(_DWORD *)(v11 + 36) = v22;
  v15 = v4 + 40;
  v22 = v14;
  v16 = *(_DWORD *)(v4 + 44);
  if ( v16 )
    do
    {
      v15 = v16;
      v17 = (int *)(v16 + 12);
      if ( v8 < *(_WORD *)(v16 + 16) )
        v17 = (int *)(v16 + 8);
      v16 = *v17;
    }
    while ( *v17 );
  if ( v13 == v15 )
    v18 = 1;
  else
    v18 = 0;
    if ( v8 < *(_WORD *)(v15 + 16) )
      v18 = 1;
  sub_21D4928(v18, v11, v15, v13);
  result = *(_DWORD *)(v4 + 56) + 1;
  *(_DWORD *)(v4 + 56) = result;
  if ( v21 )
    result = v21();
  return result;
}


int __fastcall InputHandler::registerRawInputHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // r4@1
  int result; // r0@1
  int v5; // r5@1
  void (__fastcall *v6)(__int64 *); // r3@1
  __int64 *v7; // r6@1
  int v8; // r1@2
  int (__cdecl *v9)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  __int64 v10; // [sp+0h] [bp-20h]@2
  int (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  result = 0;
  v5 = a2;
  v11 = 0;
  v6 = *(void (__fastcall **)(__int64 *))(a2 + 8);
  v7 = (__int64 *)(v3 + 132);
  if ( v6 )
  {
    v6(&v10);
    result = *(_DWORD *)(v5 + 12);
    v12 = *(_DWORD *)(v5 + 12);
    v8 = *(_DWORD *)(v5 + 8);
    v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
    v6 = (void (__fastcall *)(__int64 *))HIDWORD(v10);
    v2 = v10;
  }
  else
    v8 = 0;
  v10 = *v7;
  *(_DWORD *)v7 = v2;
  *(_DWORD *)(v3 + 136) = v6;
  v11 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v3 + 140);
  v9 = v11;
  *(_DWORD *)(v3 + 140) = v8;
  v12 = *(_DWORD *)(v3 + 144);
  *(_DWORD *)(v3 + 144) = result;
  if ( v9 )
    result = v9(&v10, &v10, 3, v9);
  return result;
}


unsigned int __fastcall InputHandler::getState(InputHandler *this, int a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
           (unsigned __int64 *)this + 29,
           (unsigned int *)&v3);
}


void __fastcall InputHandler::tick(int a1, void *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r7@1
  int j; // r9@1
  int v8; // r11@1
  int i; // r4@1
  int v10; // r6@1
  int v11; // r1@2
  int v12; // r0@3
  _DWORD *v13; // r10@6
  unsigned int v15; // r0@10
  const char *v16; // r6@11
  int v17; // r0@13
  const char *v18; // r6@14
  int v19; // r0@16
  int v20; // r4@16
  char v21; // r1@18
  char *v22; // r0@20
  char *v23; // r4@20
  char *v24; // r4@20
  int v25; // r6@20
  char v26; // r1@22
  char *v27; // r0@24
  char *v28; // r0@24
  int v29; // r4@25
  int v30; // r6@25
  int v31; // r11@28
  void *v32; // r8@28
  void *v33; // r4@28
  void *v34; // r7@28
  XtInputCallbackProc *v35; // r9@28
  unsigned int v36; // r5@28
  unsigned int v37; // r4@32
  void *v38; // t1@33
  int v39; // r8@36
  InputEvent *v40; // r5@36
  char *v41; // r10@36
  bool v42; // zf@38
  _WORD *v43; // r9@39
  int v44; // r7@41
  unsigned int v45; // r6@41
  _DWORD *v46; // r4@41
  _DWORD *v47; // r0@41
  _DWORD *v48; // r5@42
  unsigned int v49; // r1@45
  int v50; // r1@49
  unsigned int v51; // r1@50
  int v52; // r0@55
  int v53; // r0@62
  signed int v54; // r1@62
  unsigned int v55; // r0@68
  unsigned __int64 *v56; // r8@68
  unsigned int v57; // r9@68
  _DWORD *v58; // r0@68
  _DWORD *v59; // r4@69
  unsigned __int16 v60; // r2@69
  _DWORD *v61; // r6@71
  unsigned int v62; // r0@74
  unsigned int v63; // r11@74
  int v64; // r7@74 OVERLAPPED
  unsigned int v65; // r8@74 OVERLAPPED
  unsigned int v66; // r4@74
  _DWORD *v67; // r0@74
  _DWORD *v68; // r7@75
  unsigned __int16 v69; // r2@75
  _DWORD *v70; // r6@77
  bool v71; // zf@81
  XtPointer v72; // r2@87
  _InputEvent *v73; // r3@87
  int v74; // r10@87
  XtAppContext v75; // r2@87
  int v76; // r3@87
  XtInputMask v77; // r7@87
  _DWORD **v78; // r4@88
  _InputEvent **v79; // r0@90
  _InputEvent *v80; // r3@90
  _InputEvent *v81; // r7@90
  XtAppContext v82; // r3@90
  int v83; // r6@90
  XtInputMask v84; // r7@90
  int v85; // r1@94
  int v86; // r10@95
  XtInputCallbackProc v87; // r3@96
  _InputEvent *v88; // r4@96
  _InputEvent *v89; // r5@96
  _XtAppStruct *v90; // r6@96
  int v91; // r7@96
  int v92; // r1@99
  int v93; // r0@99
  int v94; // r7@100
  int v95; // r3@100
  int v96; // r2@106
  bool v97; // zf@110
  int v98; // r1@116
  int v99; // r3@117
  int v100; // r0@127
  int *v101; // r4@127
  int v102; // r1@128
  int *v103; // r0@129
  int v104; // r2@129
  int v105; // r0@132
  int v106; // r7@138
  int v107; // r7@141
  int *v108; // r2@141
  int *v109; // r4@142
  unsigned int v110; // r2@156
  int v111; // r3@156
  void (__fastcall *v112)(int, XtPointer, unsigned int, int); // r7@156
  int v113; // r0@156
  XtPointer v114; // r1@156
  int v115; // r8@159
  int v116; // r3@160
  int v117; // r2@160
  int k; // r1@160
  int v119; // r0@169
  _DWORD *v120; // r0@171
  int v121; // r2@173
  int v122; // r3@179
  unsigned int v123; // r4@190
  XtPointer v124; // r7@194
  __int64 v125; // kr18_8@195
  unsigned int v126; // r5@195
  _DWORD *v127; // r0@195
  _DWORD *v128; // r11@196
  int v129; // r4@196
  _DWORD *v130; // r7@198
  void *v131; // r0@200
  int v132; // r8@200
  int v133; // r4@201
  int v134; // r8@201
  unsigned int *v135; // r2@203
  signed int v136; // r1@205
  void *v137; // r0@212
  int v138; // r4@215
  int v139; // r8@215
  int v140; // r1@219
  int v141; // r4@219
  int v142; // r2@220
  int v143; // r4@227
  int v144; // r8@227
  int v148; // r6@233
  XtPointer v149; // r0@237
  const void **v150; // r7@248
  int v151; // r5@248
  int v152; // r1@248
  unsigned int v153; // r1@249
  unsigned int v154; // r1@249
  _DWORD *v155; // r0@249
  _DWORD *v156; // r8@250
  int v157; // r4@250
  int v158; // r11@252
  const void **v159; // r5@252
  _DWORD *v160; // r7@252
  int v161; // r1@253
  int v162; // r0@258
  int v163; // r4@266
  int v164; // r7@266
  int v165; // r0@271
  int v166; // r0@272
  __int64 v167; // kr48_8@272
  void *v168; // r4@279
  _DWORD **v169; // r5@280
  unsigned int v170; // r6@281
  void *v171; // t1@282
  unsigned int *v172; // r2@285
  signed int v173; // r1@287
  const void **v174; // [sp+1Ch] [bp-16Ch]@95
  int v175; // [sp+20h] [bp-168h]@95
  int v176; // [sp+24h] [bp-164h]@95
  int v177; // [sp+28h] [bp-160h]@95
  int v178; // [sp+30h] [bp-158h]@18
  int v179; // [sp+30h] [bp-158h]@28
  int v180; // [sp+38h] [bp-150h]@95
  int v181; // [sp+3Ch] [bp-14Ch]@35
  int v182; // [sp+3Ch] [bp-14Ch]@195
  const char *v183; // [sp+40h] [bp-148h]@95
  int v184; // [sp+44h] [bp-144h]@50
  int v185; // [sp+44h] [bp-144h]@190
  unsigned int v186; // [sp+44h] [bp-144h]@249
  int v187; // [sp+48h] [bp-140h]@41
  int v188; // [sp+48h] [bp-140h]@192
  unsigned int v189; // [sp+48h] [bp-140h]@249
  int v190; // [sp+4Ch] [bp-13Ch]@75
  int v191; // [sp+4Ch] [bp-13Ch]@95
  unsigned __int64 *v192; // [sp+50h] [bp-138h]@6
  void *v193; // [sp+54h] [bp-134h]@1
  int v194; // [sp+5Ch] [bp-12Ch]@6
  int v195; // [sp+5Ch] [bp-12Ch]@95
  int v196; // [sp+60h] [bp-128h]@68
  int v197; // [sp+64h] [bp-124h]@94
  int v198; // [sp+68h] [bp-120h]@94
  int *v199; // [sp+6Ch] [bp-11Ch]@94
  int *v200; // [sp+70h] [bp-118h]@94
  int v201; // [sp+74h] [bp-114h]@94
  __int16 v202; // [sp+78h] [bp-110h]@85
  int v203; // [sp+7Ch] [bp-10Ch]@85
  InputEvent v204; // [sp+80h] [bp-108h]@35
  void *v205; // [sp+A0h] [bp-E8h]@6
  void **v206; // [sp+A4h] [bp-E4h]@10
  XtInputCallbackProc *v207; // [sp+A8h] [bp-E0h]@10
  void *ptr; // [sp+ACh] [bp-DCh]@10
  char *v209; // [sp+B0h] [bp-D8h]@10
  void **v210; // [sp+B4h] [bp-D4h]@10
  XtInputCallbackProc *v211; // [sp+B8h] [bp-D0h]@10
  _DWORD *v212; // [sp+BCh] [bp-CCh]@10
  char *v213; // [sp+C0h] [bp-C8h]@10
  _DWORD **v214; // [sp+C4h] [bp-C4h]@10
  char *v215; // [sp+C8h] [bp-C0h]@10
  void **v216; // [sp+CCh] [bp-BCh]@10
  int v217; // [sp+13Ch] [bp-4Ch]@10
  __int16 v218; // [sp+140h] [bp-48h]@10
  int v219; // [sp+144h] [bp-44h]@10
  int v220; // [sp+148h] [bp-40h]@10
  int v221; // [sp+14Ch] [bp-3Ch]@10
  int v222; // [sp+150h] [bp-38h]@10
  int v223; // [sp+15Ch] [bp-2Ch]@190

  v5 = a4;
  v6 = a1;
  j = a3;
  v193 = a2;
  v8 = 0;
  v10 = *(_QWORD *)(a1 + 212) >> 32;
  for ( i = *(_QWORD *)(a1 + 212); v10 != i; i += 4 )
  {
    v11 = *(_DWORD *)(v6 + 204);
    if ( (*(int (**)(void))(**(_DWORD **)i + 16))() == 1 )
    {
      v12 = (*(int (**)(void))(**(_DWORD **)i + 20))();
      if ( v12 )
        v8 = v12;
    }
  }
  v205 = *(void **)(v6 + 260);
  v194 = v5;
  v192 = (unsigned __int64 *)(v6 + 232);
  v13 = (_DWORD *)std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                    (unsigned __int64 *)(v6 + 232),
                    (unsigned int *)&v205);
  _ZF = v8 == 0;
  if ( v8 )
    _ZF = v8 == *v13;
  if ( !_ZF && !*(_BYTE *)(v6 + 196) )
    sub_21B6308((int)&v216);
    v216 = &off_26D3AF0;
    v217 = 0;
    v218 = 0;
    v221 = 0;
    v222 = 0;
    v219 = 0;
    v220 = 0;
    v205 = off_26D3F2C;
    *(void **)((char *)&v205 + *((_DWORD *)off_26D3F2C - 3)) = off_26D3F30;
    sub_21B5AD4((int)&v205 + *((_DWORD *)v205 - 3), 0);
    v205 = &off_26D3F44;
    v216 = &off_26D3F58;
    v212 = 0;
    v210 = 0;
    v211 = 0;
    ptr = 0;
    v209 = 0;
    v206 = &off_26D40A8;
    v207 = 0;
    sub_21C9520((unsigned int **)&v213);
    v206 = &off_27734E8;
    v214 = (_DWORD **)16;
    v215 = (char *)&unk_28898CC;
    sub_21B5AD4((int)&v205 + *((_DWORD *)v205 - 3), (unsigned int)&v205 | 4);
    sub_21CBF38((char *)&v205, (int)"Switching input mode from ", 26);
    v15 = *v13 - 1;
    if ( v15 > 3 )
      v16 = "Undefined";
    else
      v16 = off_26E895C[v15];
    v17 = strlen(v16);
    sub_21CBF38((char *)&v205, (int)v16, v17);
    sub_21CBF38((char *)&v205, (int)" to ", 4);
    if ( (unsigned int)(v8 - 1) > 3 )
      v18 = "Undefined";
      v18 = off_26E895C[v8 - 1];
    v19 = strlen(v18);
    sub_21CBF38((char *)&v205, (int)v18, v19);
    v20 = *(int *)((char *)&v205 + *((_DWORD *)v205 - 3) + 124);
    if ( !v20
      || (!*(_BYTE *)(v20 + 28) ? (v178 = j,
                                   sub_21B50F0(v20),
                                   v21 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v20 + 24))(v20, 10)) : (v178 = j, v21 = *(_BYTE *)(v20 + 39)),
          v22 = sub_21CBC4C((char *)&v205, v21),
          v23 = sub_21CB78C(v22),
          sub_21CBF38(v23, (int)" @ ", 3),
          sub_21CBF38(v23, (int)"tick", 4),
          sub_21CBF38(v23, (int)" (", 2),
          sub_21CBF38(
            v23,
            (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\systems\\Input\\Input.Shared\\..\\..\\..\\..\\..\\src"
                 "-deps\\Input\\InputHandler.cpp",
            116),
          sub_21CBF38(v23, (int)":", 1),
          v24 = (char *)sub_21CC43C(v23, 84),
          sub_21CBF38(v24, (int)")", 1),
          (v25 = *(_DWORD *)&v24[*(_DWORD *)(*(_DWORD *)v24 - 12) + 124]) == 0) )
      sub_21E5824();
    if ( *(_BYTE *)(v25 + 28) )
      v26 = *(_BYTE *)(v25 + 39);
      sub_21B50F0(v25);
      v26 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v25 + 24))(v25, 10);
    v27 = sub_21CBC4C(v24, v26);
    sub_21CB78C(v27);
    v205 = off_26D3F28;
    *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v205) = off_26D3F34;
    v28 = v215 - 12;
    if ( (int *)(v215 - 12) != &dword_28898C0 )
      v172 = (unsigned int *)(v215 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v173 = __ldrex(v172);
        while ( __strex(v173 - 1, v172) );
      }
      else
        v173 = (*v172)--;
      if ( v173 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    sub_21C802C((unsigned int **)&v213);
    sub_21B6560(&v216);
    *v13 = v8;
    v30 = *(_QWORD *)v6 >> 32;
    v29 = *(_QWORD *)v6;
    for ( j = v178; v30 != v29; v29 += 16 )
      if ( !*(_DWORD *)(v29 + 8) )
LABEL_293:
        sub_21E5F48();
      (*(void (__fastcall **)(int, int, int))(v29 + 12))(v29, v8, v178);
  v31 = v6;
  v179 = j;
  v32 = operator new(0x20u);
  v33 = operator new(0x1F8u);
  *((_DWORD *)v32 + 3) = v33;
  v211 = 0;
  v212 = 0;
  v209 = 0;
  v210 = 0;
  v207 = 0;
  ptr = 0;
  v205 = 0;
  v206 = (void **)8;
  v34 = operator new(0x20u);
  v205 = v34;
  v35 = (XtInputCallbackProc *)operator new(0x1F8u);
  v36 = (unsigned int)v32 + 12;
  v210 = (void **)((char *)v34 + 12);
  *((_DWORD *)v34 + 3) = v35;
  ptr = v35;
  v209 = (char *)(v35 + 126);
  v213 = (char *)(v35 + 126);
  v214 = (_DWORD **)((char *)v34 + 12);
  v207 = v35;
  v211 = v35;
  v212 = v35;
  if ( v32 )
    v207 = (XtInputCallbackProc *)v33;
    ptr = v33;
    v209 = (char *)v33 + 504;
    v210 = (void **)((char *)v32 + 12);
    v35 = (XtInputCallbackProc *)v33;
    v211 = (XtInputCallbackProc *)v33;
    v212 = v33;
    v213 = (char *)v33 + 504;
    v214 = (_DWORD **)((char *)v32 + 12);
    v36 = (unsigned int)v34 + 12;
    v205 = v32;
    v206 = (void **)8;
    v32 = v34;
    if ( v36 < v36 + 4 )
      v37 = v36 - 4;
      do
        v38 = *(void **)(v37 + 4);
        v37 += 4;
        operator delete(v38);
      while ( v37 < v36 );
    operator delete(v32);
  v204.ie_source = -1;
  LOBYTE(v204.ie_condition) = 0;
  v181 = v31;
  if ( !InputEventQueue::nextEvent(*(InputEventQueue **)(v31 + 204), &v204) )
    v39 = v194;
    v41 = (char *)v35;
    goto LABEL_94;
  v39 = v194;
  v40 = &v204;
  v41 = (char *)v35;
  do
    if ( LOBYTE(v204.ie_proc) )
      goto LABEL_86;
    v53 = v204.ie_source;
    v54 = 0;
    if ( v204.ie_source == -1 )
      v54 = 1;
    if ( v54 | a5 ^ 1 )
      v53 = *(_DWORD *)(v31 + 260);
    if ( BYTE2(v204.ie_closure) )
      if ( BYTE2(v204.ie_closure) == 1 )
        v196 = v53;
        v55 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                v192,
                (unsigned int *)&v196);
        v56 = (unsigned __int64 *)(v55 + 20);
        v57 = *(_DWORD *)(v55 + 24);
        v58 = *(_DWORD **)(*(_DWORD *)(v55 + 20) + 4 * (SLOWORD(v204.ie_closure) % v57));
        if ( v58 )
        {
          v59 = (_DWORD *)*v58;
          v60 = *(_WORD *)(*v58 + 4);
          while ( SLOWORD(v204.ie_closure) != v60 )
          {
            v61 = (_DWORD *)*v59;
            if ( *v59 )
            {
              v58 = v59;
              v60 = *((_WORD *)v61 + 2);
              v59 = (_DWORD *)*v59;
              if ( *((_WORD *)v61 + 2) % v57 == SLOWORD(v204.ie_closure) % v57 )
                continue;
            }
            goto LABEL_85;
          }
          v71 = v58 == 0;
          if ( v58 )
            v71 = *v58 == 0;
          if ( !v71 )
            goto LABEL_48;
        }
LABEL_85:
        v202 = (__int16)v204.ie_closure;
        v203 = 0;
        std::_Hashtable<short,std::pair<short const,ButtonIgnore>,std::allocator<std::pair<short const,ButtonIgnore>>,std::__detail::_Select1st,std::equal_to<short>,std::hash<short>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert<std::pair<short const,ButtonIgnore> const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::pair<short const,ButtonIgnore>,false>>>>(
          &v196,
          v56,
          &v202);
        v39 = v194;
        v40 = &v204;
        v31 = v181;
    v196 = v53;
    v62 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
            v192,
            (unsigned int *)&v196);
    v63 = v62;
    *(_QWORD *)&v64 = *(_QWORD *)(v62 + 20);
    v66 = SLOWORD(v204.ie_closure) % (unsigned int)(*(_QWORD *)(v62 + 20) >> 32);
    v67 = *(_DWORD **)(v64 + 4 * v66);
    if ( !v67 )
      v39 = v194;
      v31 = v181;
      continue;
    v190 = v64;
    v43 = (_WORD *)SLOWORD(v204.ie_closure);
    v68 = (_DWORD *)*v67;
    v69 = *(_WORD *)(*v67 + 4);
    while ( SLOWORD(v204.ie_closure) != v69 )
      v70 = (_DWORD *)*v68;
      if ( *v68 )
        v67 = v68;
        v69 = *((_WORD *)v70 + 2);
        v68 = (_DWORD *)*v68;
        if ( *((_WORD *)v70 + 2) % v65 == v66 )
          continue;
      goto LABEL_48;
    v42 = v67 == 0;
    if ( v67 )
      v43 = (_WORD *)*v67;
      v42 = *v67 == 0;
    if ( v42 )
LABEL_48:
      v40 = &v204;
    v44 = v190;
    v45 = v43[2] % v65;
    v187 = *((_DWORD *)v43 + 2);
    v46 = *(_DWORD **)(v190 + 4 * v45);
    v47 = *(_DWORD **)(v190 + 4 * v45);
    do
      v48 = v47;
      v47 = (_DWORD *)*v47;
    while ( (_WORD *)v47 != v43 );
    if ( v46 == v48 )
      v50 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v184 = *(_DWORD *)v43;
        v51 = *(_WORD *)(v50 + 4) % v65;
        if ( v51 == v45 )
          goto LABEL_55;
        *(_DWORD *)(v190 + 4 * v51) = v46;
        v44 = *(_DWORD *)(v63 + 20);
        v50 = v184;
        v46 = *(_DWORD **)(v44 + 4 * v45);
      if ( (_DWORD *)(v63 + 28) == v46 )
        *v46 = v50;
      *(_DWORD *)(v44 + 4 * v45) = 0;
    else if ( *(_DWORD *)v43 )
      v49 = *(_WORD *)(*(_DWORD *)v43 + 4) % v65;
      if ( v49 != v45 )
        *(_DWORD *)(v190 + 4 * v49) = v48;
LABEL_55:
    *v48 = *(_DWORD *)v43;
    operator delete(v43);
    v52 = *(_DWORD *)(v63 + 32) - 1;
    *(_DWORD *)(v63 + 32) = v52;
    if ( BYTE3(v204.ie_closure) )
      if ( v187 == 1 || v52 )
        continue;
      if ( v187 == 1 )
LABEL_86:
    if ( v41 == v213 - 28 )
      v78 = v214;
      if ( (unsigned int)v206 - (((char *)v214 - (_BYTE *)v205) >> 2) <= 1 )
        std::deque<InputEvent,std::allocator<InputEvent>>::_M_reallocate_map((int)&v205, 1u, 0);
        v78 = v214;
      v78[1] = operator new(0x1F8u);
      v79 = (_InputEvent **)v211;
      v80 = (_InputEvent *)v40->ie_closure;
      v81 = v40->ie_next;
      *v211 = v40->ie_proc;
      v79[1] = v80;
      v79[2] = v81;
      v79 += 3;
      v82 = v40->app;
      v83 = v40->ie_source;
      v84 = v40->ie_condition;
      *v79 = v40->ie_oq;
      v79[1] = (_InputEvent *)v82;
      v79[2] = (_InputEvent *)v83;
      v79[3] = (_InputEvent *)v84;
      ++v214;
      v41 = (char *)*v214;
      v212 = v41;
      v213 = v41 + 504;
      v72 = v40->ie_closure;
      v73 = v40->ie_next;
      *(_DWORD *)v41 = v40->ie_proc;
      *((_DWORD *)v41 + 1) = v72;
      *((_DWORD *)v41 + 2) = v73;
      v74 = (int)(v41 + 12);
      v75 = v40->app;
      v76 = v40->ie_source;
      v77 = v40->ie_condition;
      *(_DWORD *)v74 = v40->ie_oq;
      *(_DWORD *)(v74 + 4) = v75;
      *(_DWORD *)(v74 + 8) = v76;
      *(_DWORD *)(v74 + 12) = v77;
      v41 = (char *)(v211 + 7);
    v211 = (XtInputCallbackProc *)v41;
  while ( InputEventQueue::nextEvent(*(InputEventQueue **)(v31 + 204), v40) );
  v35 = v207;
LABEL_94:
  v85 = 0;
  v201 = 0;
  v197 = 0;
  v198 = 0;
  v199 = &v197;
  v200 = &v197;
  if ( (XtInputCallbackProc *)v41 == v35 )
    goto LABEL_279;
  v176 = v31 + 180;
  v175 = v31 + 132;
  v177 = v31 + 100;
  v180 = v31 + 164;
  v191 = v31 + 148;
  v183 = (const char *)((unsigned int)&v204 | 4);
  v86 = v39 + 4;
  v195 = v39;
  v174 = &Util::EMPTY_STRING;
  while ( 2 )
    v87 = v35[1];
    v88 = (_InputEvent *)v35[2];
    v89 = (_InputEvent *)v35[3];
    v90 = (_XtAppStruct *)v35[4];
    v91 = (int)v35[5];
    v204.ie_proc = *v35;
    v204.ie_closure = v87;
    v204.ie_next = v88;
    v204.ie_oq = v89;
    v204.app = v90;
    v204.ie_source = v91;
    LOBYTE(v204.ie_condition) = *((_BYTE *)v35 + 24);
    if ( (char *)v35 == v209 - 28 )
      operator delete(ptr);
      ++v210;
      v35 = (XtInputCallbackProc *)*v210;
      ptr = v35;
      v209 = (char *)(v35 + 126);
      v35 += 7;
    v207 = v35;
    v92 = v86;
    v93 = *(_DWORD *)(v195 + 8);
    if ( v93 )
      v94 = *(_DWORD *)(v195 + 8);
      v95 = v86;
        v92 = v94;
        while ( *(_DWORD *)(v92 + 16) < v204.ie_source )
          v92 = *(_DWORD *)(v92 + 12);
          if ( !v92 )
            v92 = v95;
            goto LABEL_106;
        v94 = *(_DWORD *)(v92 + 8);
        v95 = v92;
      while ( v94 );
LABEL_106:
    v96 = v86;
    if ( v92 != v86 )
      if ( v204.ie_source < *(_DWORD *)(v92 + 16) )
        v92 = v86;
      v96 = v92;
    v97 = v96 == v86;
    if ( v96 == v86 )
      v97 = LOBYTE(v204.ie_proc) == 7;
    if ( v97 )
      if ( *(_DWORD *)(v31 + 156) )
        (*(void (__fastcall **)(int, void *, int, _DWORD))(v31 + 160))(
          v191,
          v193,
          v204.ie_source,
          LOBYTE(v204.ie_closure));
        v93 = *(_DWORD *)(v195 + 8);
      v98 = v86;
      if ( v93 )
        v99 = v86;
          v98 = v93;
          while ( *(_DWORD *)(v98 + 16) < v204.ie_source )
            v98 = *(_DWORD *)(v98 + 12);
            if ( !v98 )
              v98 = v99;
              goto LABEL_123;
          v93 = *(_DWORD *)(v98 + 8);
          v99 = v98;
        while ( v93 );
LABEL_123:
      if ( v98 == v86 )
        goto def_142C528;
      if ( v204.ie_source < *(_DWORD *)(v98 + 16) )
        v98 = v86;
      v100 = v198;
      v101 = &v197;
      if ( !v198 )
        goto LABEL_297;
      v102 = v204.ie_source;
        v101 = (int *)v100;
        v103 = (int *)(v100 + 12);
        v104 = v101[4];
        if ( v204.ie_source < v104 )
          v103 = v101 + 2;
        v100 = *v103;
      while ( v100 );
      v105 = (int)v101;
      if ( v204.ie_source < v104 )
LABEL_297:
        if ( v101 == v199 )
LABEL_136:
          if ( v101 )
            if ( &v197 == v101 )
              v106 = 1;
            else
              v106 = 0;
              if ( v204.ie_source < v101[4] )
                v106 = 1;
            v120 = operator new(0x14u);
            v120[4] = v204.ie_source;
            sub_21D4928(v106, (int)v120, (int)v101, (int)&v197);
            ++v201;
          goto def_142C528;
        v105 = sub_21D4858((int)v101);
        v102 = v204.ie_source;
      if ( *(_DWORD *)(v105 + 16) >= v102 )
      goto LABEL_136;
    v107 = v198;
    v108 = &v197;
    if ( v198 )
      v109 = &v197;
        v108 = (int *)v107;
        while ( v108[4] < v204.ie_source )
          v108 = (int *)v108[3];
          if ( !v108 )
            v108 = v109;
            goto LABEL_150;
        v107 = v108[2];
        v109 = v108;
      while ( v107 );
LABEL_150:
    if ( v108 != &v197 )
      if ( v204.ie_source < v108[4] )
        v108 = &v197;
      if ( v108 != &v197 )
    if ( LOBYTE(v204.ie_proc) != 8 )
      v115 = *(_DWORD *)(v31 + 260);
      if ( a5 != 1 )
        v119 = v179;
LABEL_190:
        v185 = v119;
        v223 = v115;
        v123 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                 v192,
                 (unsigned int *)&v223);
        if ( !*(_BYTE *)(v123 + 49) || LOBYTE(v204.ie_condition) )
          v188 = (unsigned int)LOWORD(v204.ie_proc) >> 8;
          switch ( LOBYTE(v204.ie_proc) )
            case 0u:
              InputHandler::_handleButtonEvent(v31, (int)v183, v188, v185, v115);
              goto def_142C528;
            case 1u:
              v124 = v204.ie_closure;
              if ( v115 == -1 )
              {
                v131 = 0;
                v132 = v185;
              }
              else
                v125 = *(_QWORD *)(v31 + 232);
                v182 = v31;
                v126 = v115 % (unsigned int)(*(_QWORD *)(v31 + 232) >> 32);
                v127 = *(_DWORD **)(v125 + 4 * v126);
                if ( v127 )
                {
                  v128 = (_DWORD *)*v127;
                  v129 = *(_DWORD *)(*v127 + 4);
                  while ( v129 != v115 )
                  {
                    v130 = (_DWORD *)*v128;
                    if ( *v128 )
                    {
                      v129 = v130[1];
                      v127 = v128;
                      v128 = (_DWORD *)*v128;
                      if ( v130[1] % HIDWORD(v125) == v126 )
                        continue;
                    }
                    v131 = 0;
                    v31 = v182;
                    v132 = v185;
                    v124 = v204.ie_closure;
                    goto LABEL_263;
                  }
                  v132 = v185;
                  v124 = v204.ie_closure;
                  if ( v127 )
                    v162 = *v127;
                    if ( v162 )
                      v131 = *(void **)(v162 + 8);
                    else
                      v131 = 0;
                  else
                }
                else
                  v131 = 0;
LABEL_263:
              if ( v124 != v131 && (v124 != (XtPointer)2 || !*(_BYTE *)(v31 + 197)) )
                goto def_142C528;
              v164 = *(_QWORD *)(v31 + 84) >> 32;
              v163 = *(_QWORD *)(v31 + 84);
              if ( v163 == v164 )
              while ( *(_DWORD *)(v163 + 8) )
                (*(void (__fastcall **)(int, const char *, int, int))(v163 + 12))(v163, v183, v188, v132);
                v163 += 16;
                if ( v164 == v163 )
                  goto def_142C528;
              goto LABEL_293;
            case 2u:
              v134 = *(_QWORD *)(v31 + 60) >> 32;
              v133 = *(_QWORD *)(v31 + 60);
              if ( v133 == v134 )
              do
                sub_21E94B4((void **)&v223, v183);
                if ( !*(_DWORD *)(v133 + 8) )
                  goto LABEL_293;
                (*(void (__fastcall **)(int, int *, _DWORD, int))(v133 + 12))(v133, &v223, BYTE1(v204.ie_next), v188);
                v137 = (void *)(v223 - 12);
                if ( (int *)(v223 - 12) != &dword_28898C0 )
                  v135 = (unsigned int *)(v223 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v136 = __ldrex(v135);
                    while ( __strex(v136 - 1, v135) );
                    v136 = (*v135)--;
                  if ( v136 <= 0 )
                    j_j_j_j__ZdlPv_9(v137);
                v133 += 16;
              while ( v133 != v134 );
              v35 = v207;
            case 3u:
              v139 = *(_QWORD *)(v31 + 72) >> 32;
              v138 = *(_QWORD *)(v31 + 72);
              if ( v138 == v139 )
              while ( *(_DWORD *)(v138 + 8) )
                (*(void (__fastcall **)(int, XtPointer, int, int))(v138 + 12))(v138, v204.ie_closure, v188, v185);
                v138 += 16;
                if ( v139 == v138 )
            case 4u:
              v140 = *(_DWORD *)(v31 + 104);
              v141 = v177;
              if ( !v140 )
                goto LABEL_236;
              v142 = v177;
                v141 = v140;
                while ( *(_DWORD *)(v141 + 16) < (signed int)v204.ie_closure )
                  v141 = *(_DWORD *)(v141 + 12);
                  if ( !v141 )
                    v141 = v142;
                    goto LABEL_236;
                v140 = *(_DWORD *)(v141 + 8);
                v142 = v141;
              while ( v140 );
LABEL_236:
              if ( v141 != v177 )
                v149 = v204.ie_closure;
                if ( (signed int)v204.ie_closure < *(_DWORD *)(v141 + 16) )
                  v141 = v177;
                if ( v141 != v177 )
                  while ( *(XtPointer *)(v141 + 16) == v149 )
                    if ( !*(_DWORD *)(v141 + 28) )
                      goto LABEL_293;
                    (*(void (__fastcall **)(int, _InputEvent *, _InputEvent *, int))(v141 + 32))(
                      v141 + 20,
                      v204.ie_next,
                      v204.ie_oq,
                      v188);
                    v141 = sub_21D47E8(v141);
                    if ( v141 == v177 )
                      break;
                    v149 = v204.ie_closure;
            case 5u:
              v144 = *(_QWORD *)(v31 + 120) >> 32;
              v143 = *(_QWORD *)(v31 + 120);
              if ( v143 == v144 )
              while ( *(_DWORD *)(v143 + 8) )
                __asm
                  VLDR            S0, [SP,#0x188+var_108.app]
                  VSTR            S0, [SP,#0x188+var_188]
                (*(void (__fastcall **)(int, _DWORD, _InputEvent *, _InputEvent *))(v143 + 12))(
                  v143,
                  SLOWORD(v204.ie_closure),
                  v204.ie_next,
                  v204.ie_oq);
                v143 += 16;
                if ( v144 == v143 )
            case 6u:
              if ( !*(_DWORD *)(v31 + 140) )
                goto LABEL_293;
              v112 = *(void (__fastcall **)(int, XtPointer, unsigned int, int))(v31 + 144);
              v111 = LOBYTE(v204.ie_next);
              v110 = (unsigned int)LOWORD(v204.ie_next) >> 8;
              v114 = v204.ie_closure;
              v113 = v175;
              goto LABEL_157;
            case 9u:
              v148 = v31;
              if ( !*(_DWORD *)(v31 + 188) )
              (*(void (__fastcall **)(int, int, _DWORD, int))(v31 + 192))(
                v176,
                v185,
                LOBYTE(v204.ie_closure),
                v204.ie_source);
              if ( LOBYTE(v204.ie_closure) || (unsigned int)(*(_DWORD *)v123 - 3) > 1 )
              v150 = v174;
              v151 = v204.ie_source;
              v152 = (int)v174;
              if ( v204.ie_source == -1 )
                goto LABEL_276;
              v153 = *(_QWORD *)(v31 + 232) >> 32;
              v189 = v153;
              v154 = v204.ie_source % v153;
              v155 = *(_DWORD **)(*(_QWORD *)(v31 + 232) + 4 * v154);
              v186 = v154;
              if ( !v155 )
              v156 = (_DWORD *)*v155;
              v157 = *(_DWORD *)(*v155 + 4);
              break;
            default:
          while ( v157 != v151 )
            v158 = v151;
            v159 = v150;
            v160 = (_DWORD *)*v156;
            if ( !*v156 )
              v150 = v159;
              v151 = v158;
              v152 = (int)v150;
              goto LABEL_276;
            v157 = v160[1];
            v161 = v160[1] % v189;
            v155 = v156;
            v156 = (_DWORD *)*v156;
            v150 = v159;
            v151 = v158;
            if ( v161 != v186 )
          v152 = (int)v150;
          if ( v155 )
            v165 = *v155;
            v152 = (int)v150;
            if ( v165 )
              v167 = *(_QWORD *)(v165 + 16);
              v166 = *(_QWORD *)(v165 + 16) >> 32;
              if ( (_DWORD)v167 != v166 )
                v152 = v166 - 4;
LABEL_276:
          v174 = v150;
          v31 = v148;
          InputHandler::releaseButtonsAndSticks(v148, v152, v151);
      v116 = *(_DWORD *)(v195 + 8);
      v117 = v86;
      k = v86;
          k = v116;
          while ( *(_DWORD *)(k + 16) < v115 )
            k = *(_DWORD *)(k + 12);
            if ( !k )
              k = v117;
              goto LABEL_172;
          v116 = *(_DWORD *)(k + 8);
          v117 = k;
        while ( v116 );
LABEL_172:
      if ( k == v86 )
        v121 = v204.ie_source;
        if ( v115 < *(_DWORD *)(k + 16) )
          k = v86;
        if ( k != v86 && v204.ie_source == -1 )
LABEL_189:
          v119 = *(_QWORD *)(k + 16) >> 32;
          v115 = *(_QWORD *)(k + 16);
          goto LABEL_190;
      v122 = v86;
      for ( k = v86; v93; v122 = k )
        k = v93;
        while ( *(_DWORD *)(k + 16) < v121 )
          k = *(_DWORD *)(k + 12);
          if ( !k )
            k = v122;
            goto LABEL_185;
        v93 = *(_DWORD *)(k + 8);
LABEL_185:
      if ( v121 < *(_DWORD *)(k + 16) )
        k = v86;
      goto LABEL_189;
    if ( !*(_DWORD *)(v31 + 172) )
      goto LABEL_293;
    v110 = v204.ie_source;
    v111 = LOBYTE(v204.ie_closure);
    v112 = *(void (__fastcall **)(int, XtPointer, unsigned int, int))(v31 + 176);
    v113 = v180;
    v114 = v193;
LABEL_157:
    v112(v113, v114, v110, v111);
def_142C528:
    if ( v211 != v35 )
    break;
  v85 = v198;
LABEL_279:
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase((int)&v196, v85);
  v168 = v205;
  if ( v205 )
    v169 = v214;
    if ( v210 < (void **)v214 + 1 )
      v170 = (unsigned int)(v210 - 1);
        v171 = *(void **)(v170 + 4);
        v170 += 4;
        operator delete(v171);
      while ( v170 < (unsigned int)v169 );
    operator delete(v168);
}


unsigned int __fastcall InputHandler::registerVectorHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  void (__fastcall *v5)(int); // r3@2
  unsigned int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 124);
  if ( v4 == *(_QWORD *)(a1 + 124) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFvsfff11FocusImpactR14ClientInstanceEESaIS5_EE19_M_emplace_back_auxIJRKS5_EEEvDpOT_(
               (unsigned __int64 *)(a1 + 120),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 124);
    }
    result = v4 + 16;
    *(_DWORD *)(v2 + 124) = v4 + 16;
  return result;
}


void __fastcall InputHandler::_handleMappingChange(InputHandler *this, const InputMapping *a2, const InputMapping *a3, int a4)
{
  InputHandler *v4; // r10@1
  const InputMapping *v5; // r4@1
  int v6; // r6@1
  const InputMapping *v7; // r7@1
  __int64 v8; // r0@2
  __int64 v9; // r0@2
  int **v10; // r0@2
  int **v11; // r11@2
  unsigned int v12; // r0@5
  unsigned __int16 v13; // r4@5
  __int64 v14; // kr08_8@5
  unsigned int v15; // r6@5
  _DWORD *v16; // r0@5
  _DWORD *v17; // r9@6
  unsigned __int16 v18; // r2@6
  _DWORD *v19; // r8@8
  bool v20; // zf@11
  __int64 v21; // kr10_8@14
  __int16 v22; // r0@14
  void *v23; // r4@15
  void *v24; // r8@15
  int v25; // t1@16
  int **v26; // r4@20
  int **v27; // r6@20
  unsigned int *v28; // r2@22
  signed int v29; // r1@24
  int *v30; // r0@30
  int v31; // [sp+10h] [bp-48h]@2
  int **v32; // [sp+14h] [bp-44h]@2
  unsigned int v33; // [sp+18h] [bp-40h]@1
  void *v34; // [sp+1Ch] [bp-3Ch]@2
  void *v35; // [sp+20h] [bp-38h]@15
  int **v36; // [sp+28h] [bp-30h]@1
  int **v37; // [sp+2Ch] [bp-2Ch]@2

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v36 = (int **)a4;
  v33 = std::__detail::_Map_base<int,std::pair<int const,InputHandler::InputHandlerState>,std::allocator<std::pair<int const,InputHandler::InputHandlerState>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
          (unsigned __int64 *)this + 29,
          (unsigned int *)&v36);
  if ( (unsigned int)*(_QWORD *)(v33 + 8) != *(_QWORD *)(v33 + 8) >> 32 )
  {
    LODWORD(v8) = &v36;
    HIDWORD(v8) = v7;
    v31 = v6;
    InputMapping::getButtonDifference(v8, (int)v5);
    LODWORD(v9) = &v34;
    HIDWORD(v9) = v7;
    InputMapping::getStickDifference(v9, (int)v5);
    v10 = v37;
    v11 = v36;
    v32 = v37;
    while ( v11 != v10 )
    {
      v12 = NameRegistry::getNameId(*((unsigned __int64 **)v4 + 50), v11);
      v13 = v12;
      v14 = *(_QWORD *)(v33 + 20);
      v15 = v12 % (unsigned int)(*(_QWORD *)(v33 + 20) >> 32);
      v16 = *(_DWORD **)(v14 + 4 * v15);
      if ( v16 )
      {
        v17 = (_DWORD *)*v16;
        v18 = *(_WORD *)(*v16 + 4);
        while ( v13 != v18 )
        {
          v19 = (_DWORD *)*v17;
          if ( *v17 )
          {
            v16 = v17;
            v18 = *((_WORD *)v19 + 2);
            v17 = (_DWORD *)*v17;
            if ( (unsigned int)*((_WORD *)v19 + 2) % HIDWORD(v14) == v15 )
              continue;
          }
          goto LABEL_3;
        }
        v20 = v16 == 0;
        if ( v16 )
          v20 = *v16 == 0;
        if ( !v20 )
          v21 = *((_QWORD *)v4 + 25);
          v22 = NameRegistry::getNameId((unsigned __int64 *)v21, v11);
          InputEventQueue::enqueueButton(SHIDWORD(v21), v22, 0, 0, 0, v31, 0);
      }
LABEL_3:
      ++v11;
      v10 = v32;
    }
    v24 = v35;
    v23 = v34;
    if ( v34 != v35 )
      do
        v25 = *(_DWORD *)v23;
        v23 = (char *)v23 + 4;
        InputEventQueue::enqueueDirection(*((_DWORD *)v4 + 51), v25, 0, 0, 0, v31, 0);
      while ( v24 != v23 );
      v23 = v34;
    if ( v23 )
      operator delete(v23);
    v27 = v37;
    v26 = v36;
    if ( v36 != v37 )
        v30 = *v26 - 3;
        if ( v30 != &dword_28898C0 )
          v28 = (unsigned int *)(*v26 - 1);
          if ( &pthread_create )
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        ++v26;
      while ( v26 != v27 );
      v26 = v36;
    if ( v26 )
      operator delete(v26);
  }
}
