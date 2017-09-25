

unsigned int __fastcall KeyboardMapper::changeControllerId(KeyboardMapper *this, int a2, int a3)
{
  KeyboardMapper *v3; // r4@1
  unsigned __int64 *v4; // r8@1
  int v5; // r5@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  unsigned int v8; // r1@1
  unsigned int result; // r0@1
  int v10; // r10@1
  int *v11; // r2@1
  int *v12; // r5@2
  int v13; // r4@2
  int v14; // r6@4
  unsigned int v15; // r0@5
  int v16; // r1@5
  int v17; // [sp+0h] [bp-28h]@1
  unsigned int v18; // [sp+4h] [bp-24h]@1

  v3 = this;
  v4 = (unsigned __int64 *)((char *)this + 40);
  v17 = a3;
  v18 = a2;
  v5 = std::__detail::_Map_base<int,std::pair<int const,KeyboardMapper::KeyboardMappingData>,std::allocator<std::pair<int const,KeyboardMapper::KeyboardMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)this + 5,
         (unsigned int *)&v17);
  v6 = std::__detail::_Map_base<int,std::pair<int const,KeyboardMapper::KeyboardMappingData>,std::allocator<std::pair<int const,KeyboardMapper::KeyboardMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         v4,
         &v18);
  std::swap<KeyboardMapper::KeyboardMappingData>(v5, v6);
  v7 = *((_QWORD *)v3 + 5);
  v8 = *((_QWORD *)v3 + 5) >> 32;
  result = v18 / v8;
  v10 = v18 % v8;
  v11 = *(int **)(v7 + 4 * (v18 % v8));
  if ( v11 )
  {
    v12 = (int *)*v11;
    v13 = *(_DWORD *)(*v11 + 4);
    while ( v18 != v13 )
    {
      v14 = *v12;
      if ( *v12 )
      {
        v13 = *(_DWORD *)(v14 + 4);
        v15 = *(_DWORD *)(v14 + 4);
        v16 = v15 % HIDWORD(v7);
        result = v15 / HIDWORD(v7);
        v11 = (int *)v7;
        v12 = *(int **)v7;
        if ( v16 == v10 )
          continue;
      }
      return result;
    }
    if ( v11 )
      result = std::_Hashtable<int,std::pair<int const,KeyboardMapper::KeyboardMappingData>,std::allocator<std::pair<int const,KeyboardMapper::KeyboardMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
                 (int)v4,
                 v10,
                 v11,
                 *v11);
  }
  return result;
}


void __fastcall KeyboardMapper::KeyboardMapper(KeyboardMapper *this)
{
  KeyboardMapper::KeyboardMapper(this);
}


InputDeviceMapper *__fastcall KeyboardMapper::~KeyboardMapper(KeyboardMapper *this)
{
  KeyboardMapper *v1; // r8@1
  int v2; // r6@1
  int v3; // r5@2
  void *v4; // r0@2
  void *v5; // r4@3
  void *v6; // r0@4
  char *v7; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_26E8974;
  v2 = *((_DWORD *)this + 12);
  while ( v2 )
  {
    v3 = v2;
    v4 = *(void **)(v2 + 16);
    v2 = *(_DWORD *)v2;
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
    _aeabi_memclr4(*(_QWORD *)(v3 + 8), 4 * (*(_QWORD *)(v3 + 8) >> 32));
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    v6 = *(void **)(v3 + 8);
    if ( v6 && (void *)(v3 + 32) != v6 )
      operator delete(v6);
    operator delete((void *)v3);
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 5), 4 * (*((_QWORD *)v1 + 5) >> 32));
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  v7 = (char *)*((_DWORD *)v1 + 10);
  if ( v7 && (char *)v1 + 64 != v7 )
    operator delete(v7);
  return j_j_j__ZN17InputDeviceMapperD2Ev(v1);
}


InputDeviceMapper *__fastcall KeyboardMapper::KeyboardMapper(InputDeviceMapper *a1)
{
  InputDeviceMapper *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  InputDeviceMapper *result; // r0@4

  v1 = a1;
  InputDeviceMapper::InputDeviceMapper(a1);
  HIDWORD(v2) = 10;
  *(_DWORD *)v1 = &off_26E8974;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 1065353216;
  LODWORD(v2) = (char *)v1 + 56;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 11) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 16) = 0;
    v5 = (char *)v1 + 64;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  result = v1;
  *((_DWORD *)v1 + 10) = v5;
  return result;
}


int __fastcall KeyboardMapper::tick(int a1, int a2, int a3)
{
  signed int v3; // r11@1
  int v4; // r8@1
  int *v5; // r4@1
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r6@4
  void *v9; // r0@4
  void *v10; // r0@5
  signed int v11; // r0@6
  int v12; // r2@8
  int v13; // r5@11
  int v14; // r0@11
  unsigned int v15; // r4@11
  int v16; // r0@11
  int v17; // r1@11
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned __int64 *v22; // r0@25
  int v23; // r8@25
  _DWORD *v24; // r0@25
  _DWORD *v25; // r5@26
  int v26; // r11@26
  _DWORD *v27; // r6@28
  int v28; // r11@40
  unsigned int v29; // r5@40
  int v30; // r6@40
  int v31; // r4@42
  bool v32; // zf@42
  char v33; // r4@47
  int v34; // r0@53
  signed int v35; // r2@53
  int i; // r1@53
  int v38; // [sp+18h] [bp-60h]@25
  int v39; // [sp+1Ch] [bp-5Ch]@1
  unsigned __int64 *v40; // [sp+20h] [bp-58h]@1
  int v41; // [sp+28h] [bp-50h]@1
  int v42; // [sp+2Ch] [bp-4Ch]@1
  char v43; // [sp+34h] [bp-44h]@1
  unsigned int v44; // [sp+34h] [bp-44h]@25
  int v45; // [sp+40h] [bp-38h]@4
  int v46; // [sp+44h] [bp-34h]@4
  __int64 v47; // [sp+48h] [bp-30h]@4

  v41 = a1;
  v40 = (unsigned __int64 *)(a1 + 40);
  v3 = -1431655765;
  v4 = a2;
  v42 = a3;
  v39 = a2;
  v5 = (int *)&Keyboard::_textIndex;
  v43 = 0;
  do
  {
    while ( 1 )
    {
      v6 = Keyboard::_inputText;
      v7 = *v5 + 1;
      if ( v7 >= ((dword_27E7CF0 - (signed int)Keyboard::_inputText) >> 2) * v3 )
      {
        v11 = 0;
      }
      else
        *v5 = v7;
        v8 = v6 + 12 * v7;
        sub_21E8AF4(&v46, (int *)v8);
        v47 = *(_QWORD *)(v8 + 4);
        sub_21E8AF4(&v45, &v46);
        InputEventQueue::enqueueTextChar(v4, &v45, v47, 0, SHIDWORD(v47));
        v9 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
        {
          v18 = (unsigned int *)(v45 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        }
        v10 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v46 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        v11 = 1;
      v12 = Keyboard::_index + 1;
      if ( Keyboard::_index + 1 >= ((unk_27E7CE4 - Keyboard::_inputs) >> 2) * v3 )
        break;
      ++Keyboard::_index;
      v13 = *(_DWORD *)(Keyboard::_inputs + 12 * v12);
      v14 = Keyboard::_inputs + 12 * v12;
      v15 = *(_BYTE *)(v14 + 4);
      v16 = *(_DWORD *)(v14 + 8);
      v17 = *(_DWORD *)(v42 + 28);
      if ( v16 != -1 )
        v17 = v16;
      v46 = v17;
      if ( (*(int (**)(void))(*(_DWORD *)v41 + 40))() == 1 )
        if ( v13 != 1 )
          LOBYTE(v13) = 0;
        InputEventQueue::enqueueRawInput(v4, v15, 4, v13, v46, 1);
        v38 = v13;
        v22 = (unsigned __int64 *)std::__detail::_Map_base<int,std::pair<int const,KeyboardMapper::KeyboardMappingData>,std::allocator<std::pair<int const,KeyboardMapper::KeyboardMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                                    v40,
                                    (unsigned int *)&v46);
        v44 = *v22 >> 32;
        v23 = v15 % v44;
        v24 = *(_DWORD **)(*v22 + 4 * (v15 % v44));
        if ( !v24 )
          goto LABEL_46;
        v25 = (_DWORD *)*v24;
        v26 = *(_DWORD *)(*v24 + 4);
        while ( v15 != v26 )
          v27 = (_DWORD *)*v25;
          if ( *v25 )
            v26 = v27[1];
            v24 = v25;
            v25 = (_DWORD *)*v25;
            if ( v27[1] % v44 == v23 )
              continue;
        if ( v24 && (v28 = *v24, v29 = v15, (v30 = *v24) != 0) )
          while ( 1 )
            v30 = *(_DWORD *)v30;
            if ( !v30 )
              break;
            v31 = *(_DWORD *)(v30 + 4);
            v32 = v29 == v31;
            if ( v29 == v31 )
              v32 = *(_DWORD *)(v30 + 4) % v44 == v23;
            if ( !v32 )
              goto LABEL_47;
          v30 = 0;
        else
LABEL_46:
          v28 = 0;
LABEL_47:
        v4 = v39;
        v33 = v38;
        if ( v28 != v30 )
          if ( v38 != 1 )
            v33 = 0;
          do
            InputEventQueue::enqueueButton(v39, *(_DWORD *)(v28 + 8), v33, 0, *(_DWORD *)(v28 + 8) >> 16, v46, 0);
            v28 = *(_DWORD *)v28;
          while ( v28 != v30 );
      v3 = -1431655765;
      v43 = 1;
      v5 = (int *)&Keyboard::_textIndex;
    }
  }
  while ( v11 );
  v34 = Keyboard::_inputCaretLocation;
  v35 = Keyboard::_caretLocationIndex;
  for ( i = Keyboard::_caretLocationIndex + 1;
        Keyboard::_caretLocationIndex + 1 < (dword_27E7CFC - Keyboard::_inputCaretLocation) >> 2;
        i = Keyboard::_caretLocationIndex + 1 )
    Keyboard::_caretLocationIndex = i;
    if ( v35 >= -1 )
      i = *(_DWORD *)(v34 + 4 * i);
    InputEventQueue::enqueueCaretLocation(v4, i, 0, Keyboard::_gameControllerId);
    v34 = Keyboard::_inputCaretLocation;
    v35 = Keyboard::_caretLocationIndex;
  return v43 & 1;
}


void __fastcall KeyboardMapper::~KeyboardMapper(KeyboardMapper *this)
{
  InputDeviceMapper *v1; // r0@1

  v1 = KeyboardMapper::~KeyboardMapper(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall KeyboardMapper::~KeyboardMapper(KeyboardMapper *this)
{
  KeyboardMapper::~KeyboardMapper(this);
}


signed int __fastcall KeyboardMapper::clearInputDeviceQueue(KeyboardMapper *this)
{
  __int64 v1; // kr00_8@1
  _DWORD *v2; // r5@2
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int *v5; // r0@11
  signed int result; // r0@13

  unk_27E7CE4 = Keyboard::_inputs;
  v1 = Keyboard::_inputText;
  if ( dword_27E7CF0 != (_DWORD)Keyboard::_inputText )
  {
    v2 = (_DWORD *)Keyboard::_inputText;
    do
    {
      v5 = (int *)(*v2 - 12);
      if ( v5 != &dword_28898C0 )
      {
        v3 = (unsigned int *)(*v2 - 4);
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
          j_j_j_j__ZdlPv_9(v5);
      }
      v2 += 3;
    }
    while ( v2 != (_DWORD *)HIDWORD(v1) );
  }
  dword_27E7CF0 = v1;
  dword_27E7CFC = Keyboard::_inputCaretLocation;
  result = -1;
  Keyboard::_index = -1;
  Keyboard::_textIndex = -1;
  Keyboard::_caretLocationIndex = -1;
  return result;
}


int __fastcall KeyboardMapper::setMapping(KeyboardMapper *this, InputEventQueue *a2, const BindingFactory *a3, NameRegistry *a4, const InputMapping *a5, int a6)
{
  unsigned __int64 *v6; // r8@1
  unsigned int v7; // r0@1
  int v8; // r10@1
  void *v9; // r0@1
  void *v10; // r5@2
  int result; // r0@3
  int i; // r6@3
  int v13; // r11@3
  unsigned int v16; // r4@4
  _DWORD *v17; // r3@4
  int v23; // [sp+0h] [bp-28h]@1

  v23 = a6;
  v6 = (unsigned __int64 *)a4;
  v7 = std::__detail::_Map_base<int,std::pair<int const,KeyboardMapper::KeyboardMappingData>,std::allocator<std::pair<int const,KeyboardMapper::KeyboardMappingData>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)this + 5,
         (unsigned int *)&v23);
  v8 = v7;
  v9 = *(void **)(v7 + 8);
  if ( v9 )
  {
    do
    {
      v10 = *(void **)v9;
      operator delete(v9);
      v9 = v10;
    }
    while ( v10 );
  }
  result = _aeabi_memclr4(*(_QWORD *)v8, 4 * (*(_QWORD *)v8 >> 32));
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  v13 = *(_QWORD *)a5 >> 32;
  for ( i = *(_QWORD *)a5; i != v13; i += 12 )
    _R7 = NameRegistry::getNameId(v6, (int **)i);
    _R5 = *(_BYTE *)(i + 8);
    v16 = *(_DWORD *)(i + 4);
    v17 = operator new(0xCu);
    __asm { PKHBT.W         R0, R7, R5,LSL#16 }
    *v17 = 0;
    v17[1] = v16;
    v17[2] = _R0;
    result = std::_Hashtable<int,std::pair<int const,KeyboardMapper::KeyboardKeyButtonDetails>,std::allocator<std::pair<int const,KeyboardMapper::KeyboardKeyButtonDetails>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,false>>::_M_insert_multi_node(
               v8,
               0,
               v16,
               (int)v17);
  return result;
}


int __fastcall KeyboardMapper::getInputMode(KeyboardMapper *this)
{
  return 0;
}
