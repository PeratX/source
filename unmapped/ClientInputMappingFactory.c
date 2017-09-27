

char *__fastcall ClientInputMappingFactory::_createBedTestAutoInputMapping(ClientInputMappingFactory *this)
{
  int v2; // [sp+4h] [bp-2Ch]@1

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v2 = 31;
  return std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[12],ActionEvent::{unnamed type#1}>(
           (__int64 *)this,
           "button.chat",
           &v2);
}


void __fastcall ClientInputMappingFactory::registerNames(ClientInputMappingFactory *this, NameRegistry *a2)
{
  ClientInputMappingFactory::registerNames(this, a2);
}


int __fastcall ClientInputMappingFactory::_activateMapping(int a1, int **a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r6@1
  int **v4; // r5@1
  int result; // r0@1
  char v6; // r1@5
  __int64 i; // r2@5
  __int64 j; // r2@9
  int v9; // r2@14
  bool v10; // zf@14
  int v11; // [sp+0h] [bp-18h]@3

  v2 = a1;
  v3 = (unsigned __int64 *)(a1 + 4);
  v4 = a2;
  result = std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(a1 + 4),
             a2);
  if ( !result )
  {
    result = std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)(v2 + 32),
               v4);
    if ( result )
    {
      std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,InputMapping&>(
        &v11,
        (int)v3,
        (int *)v4,
        (unsigned __int64 *)(result + 8));
      result = sub_119C9E8((const void **)v4, "screen");
      if ( result )
      {
        result = sub_119C9E8((const void **)v4, "screenTextInputOnly");
        if ( result )
        {
          result = std::__detail::_Map_base<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     v3,
                     v4);
          v6 = *(_BYTE *)(v2 + 60);
          *(_BYTE *)(result + 48) = v6;
          for ( i = *(_QWORD *)(result + 124); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 12 )
          {
            if ( *(_DWORD *)(i + 4) == 1 )
              *(_BYTE *)(i + 9) = v6;
          }
          for ( j = *(_QWORD *)(result + 176); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 12 )
            if ( *(_DWORD *)(j + 4) == 1 )
              *(_BYTE *)(j + 9) = v6;
          if ( *(_DWORD *)(*(_DWORD *)(result + 76) - 12) )
            v9 = *(_DWORD *)(*(_DWORD *)(result + 80) - 12);
            v10 = v9 == 0;
            if ( v9 )
              v10 = *(_DWORD *)(*(_DWORD *)(result + 84) - 12) == 0;
            if ( !v10 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(result + 88) - 12) )
              {
                *(_BYTE *)(result + 108) = v6;
                *(_DWORD *)(result + 92) = *(_DWORD *)(v2 + 64);
              }
            }
        }
      }
    }
  }
  return result;
}


void __fastcall ClientInputMappingFactory::_createBoatTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createBoatTouchMapping(this);
}


char *__fastcall ClientInputMappingFactory::_createBoatKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r6@1
  __int64 v6; // kr00_8@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  __int64 v14; // kr08_8@11
  char *result; // r0@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  char v30; // [sp+Bh] [bp-5Dh]@11
  int v31; // [sp+Ch] [bp-5Ch]@11
  int v32; // [sp+14h] [bp-54h]@10
  int v33; // [sp+1Ch] [bp-4Ch]@9
  int v34; // [sp+24h] [bp-44h]@8
  int v35; // [sp+2Ch] [bp-3Ch]@7
  int v36; // [sp+34h] [bp-34h]@6
  int v37; // [sp+3Ch] [bp-2Ch]@5
  int v38; // [sp+44h] [bp-24h]@4
  char v39; // [sp+4Bh] [bp-1Dh]@1
  int v40; // [sp+4Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ClientInputMappingFactory::_addInvariantKeyboardControls(a1, a2, a3);
  ClientInputMappingFactory::_addGameplayMouseControls(v5, v4, v3);
  v40 = 27;
  v39 = 0;
  v6 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[13],Keyboard::{unnamed type#1},FocusImpact>(
      (__int64 *)v4,
      "button.pause",
      &v40,
      &v39);
  }
  else
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[13],Keyboard::{unnamed type#1},FocusImpact>(
      v4,
      v6,
    *(_DWORD *)(v4 + 4) += 12;
  sub_119C884((void **)&v38, "button.dismount");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v38, 16, 0);
  v7 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v38 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v37, "button.inventory");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v37, 14, 0);
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v37 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v36, "button.toggle_perspective");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v36, 15, 0);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v36 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v35, "button.paddle_right");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v35, 20, 0);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v34, "button.paddle_left");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v34, 19, 0);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v34 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v33, "button.chat");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v33, 23, 0);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v33 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v32, "button.console");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v32, 32, 0);
  v13 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v31 = 112;
  v30 = 0;
  v14 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    result = std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[16],Keyboard::{unnamed type#1},FocusImpact>(
               (__int64 *)v4,
               "button.hide_gui",
               &v31,
               &v30);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[16],Keyboard::{unnamed type#1},FocusImpact>(
      v14,
      "button.hide_gui",
      &v31,
      &v30);
    result = (char *)(*(_DWORD *)(v4 + 4) + 12);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


signed int __fastcall ClientInputMappingFactory::_createScreenGameControllerMapping(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  int v5; // r4@1
  __int64 v6; // kr00_8@1
  int v7; // r1@2
  int v8; // r1@5
  int v9; // r1@8
  int v10; // r1@11
  int v11; // r1@14
  int v12; // r1@17
  int v13; // r1@20
  int v14; // r1@23
  int v15; // r1@26
  int v16; // r1@29
  int v17; // r1@32
  int v18; // r1@35
  int v19; // r1@38
  __int64 v20; // kr08_8@44
  int v21; // r1@45
  __int64 v22; // kr10_8@46
  int v23; // r1@47
  __int64 v24; // kr18_8@52
  int v25; // r1@53
  int v26; // r1@56
  int v27; // r1@59
  __int64 v28; // kr20_8@64
  int v29; // r1@65
  int v30; // r1@72
  int v31; // r1@75
  int v32; // r1@78
  int v33; // r1@81
  __int64 v34; // kr28_8@86
  int v35; // r1@87
  __int64 v36; // kr30_8@92
  void *v37; // r0@99
  signed int result; // r0@100
  unsigned int *v39; // r2@101
  signed int v40; // r1@103
  int v41; // [sp+10h] [bp-B8h]@96
  int v42; // [sp+14h] [bp-B4h]@67
  int v43; // [sp+18h] [bp-B0h]@64
  int v44; // [sp+1Ch] [bp-ACh]@61
  int v45; // [sp+20h] [bp-A8h]@58
  int v46; // [sp+24h] [bp-A4h]@55
  int v47; // [sp+28h] [bp-A0h]@52
  int v48; // [sp+2Ch] [bp-9Ch]@49
  int v49; // [sp+30h] [bp-98h]@44
  int v50; // [sp+34h] [bp-94h]@92
  int v51; // [sp+38h] [bp-90h]@89
  int v52; // [sp+3Ch] [bp-8Ch]@86
  int v53; // [sp+40h] [bp-88h]@83
  int v54; // [sp+44h] [bp-84h]@80
  int v55; // [sp+48h] [bp-80h]@77
  int v56; // [sp+4Ch] [bp-7Ch]@74
  int v57; // [sp+50h] [bp-78h]@71
  int v58; // [sp+54h] [bp-74h]@46
  char v59; // [sp+5Ah] [bp-6Eh]@43
  char v60; // [sp+5Bh] [bp-6Dh]@43
  int v61; // [sp+5Ch] [bp-6Ch]@43
  int v62; // [sp+60h] [bp-68h]@43
  char v63; // [sp+66h] [bp-62h]@43
  char v64; // [sp+67h] [bp-61h]@43
  int v65; // [sp+68h] [bp-60h]@43
  int v66; // [sp+6Ch] [bp-5Ch]@43
  int v67; // [sp+70h] [bp-58h]@40
  int v68; // [sp+74h] [bp-54h]@37
  int v69; // [sp+78h] [bp-50h]@34
  int v70; // [sp+7Ch] [bp-4Ch]@31
  int v71; // [sp+80h] [bp-48h]@28
  int v72; // [sp+84h] [bp-44h]@25
  int v73; // [sp+88h] [bp-40h]@22
  int v74; // [sp+8Ch] [bp-3Ch]@19
  int v75; // [sp+90h] [bp-38h]@16
  int v76; // [sp+94h] [bp-34h]@13
  int v77; // [sp+98h] [bp-30h]@10
  int v78; // [sp+9Ch] [bp-2Ch]@7
  int v79; // [sp+A0h] [bp-28h]@4
  int v80; // [sp+A4h] [bp-24h]@1
  int v81; // [sp+A8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  _aeabi_memclr4(a1, 48);
  v81 = 0;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[15],int>(
    (__int64 *)v5,
    "button.menu_ok",
    &v81);
  v6 = *(_QWORD *)(v5 + 4);
  v80 = 1;
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
      (__int64 *)v5,
      "button.menu_cancel",
      &v80);
    v7 = *(_DWORD *)(v5 + 4);
  }
  else
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[19],int>(
      v5,
      v6,
    v7 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v7;
  v79 = 2;
  if ( v7 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[18],int>(
      "button.menu_clear",
      &v79);
    v8 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[18],int>(
      v7,
    v8 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v8;
  v78 = 2;
  if ( v8 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[25],int>(
      "button.controller_select",
      &v78);
    v9 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[25],int>(
      v8,
    v9 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v9;
  v77 = 3;
  if ( v9 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[35],int>(
      "button.controller_secondary_select",
      &v77);
    v10 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[35],int>(
      v9,
    v10 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v10;
  v76 = 4;
  if ( v10 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[30],int>(
      "button.controller_textedit_up",
      &v76);
    v11 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[30],int>(
      v10,
    v11 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v11;
  v75 = 5;
  if ( v11 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[32],int>(
      "button.controller_textedit_down",
      &v75);
    v12 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[32],int>(
      v11,
    v12 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v12;
  v74 = 6;
  if ( v12 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[36],int>(
      "button.controller_autocomplete_back",
      &v74);
    v13 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[36],int>(
      v12,
    v13 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v13;
  v73 = 7;
  if ( v13 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[31],int>(
      "button.controller_autocomplete",
      &v73);
    v14 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[31],int>(
      v13,
    v14 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v14;
  v72 = 2;
  if ( v14 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[23],int>(
      "button.menu_vr_realign",
      &v72);
    v15 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[23],int>(
      v14,
    v15 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v15;
  v71 = 4;
  if ( v15 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[15],int>(
      "button.menu_up",
      &v71);
    v16 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[15],int>(
      v15,
    v16 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v16;
  v70 = 5;
  if ( v16 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[17],int>(
      "button.menu_down",
      &v70);
    v17 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[17],int>(
      v16,
    v17 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v17;
  v69 = 6;
  if ( v17 == *(_DWORD *)(v5 + 8) )
      "button.menu_left",
      &v69);
    v18 = *(_DWORD *)(v5 + 4);
      v17,
    v18 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v18;
  v68 = 7;
  if ( v18 == *(_DWORD *)(v5 + 8) )
      "button.menu_right",
      &v68);
    v19 = *(_DWORD *)(v5 + 4);
      v18,
    v19 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v19;
  v67 = 13;
  if ( v19 == *(_DWORD *)(v5 + 8) )
      &v67);
      v19,
    *(_DWORD *)(v5 + 4) += 12;
  v65 = 0;
  v66 = 0;
  v64 = 0;
  v63 = 0;
  sub_DD757C(v5 + 12, &v66, &v65, &v64, &v63);
  v61 = 1;
  v62 = 1;
  v60 = 0;
  v59 = 0;
  sub_DD757C(v5 + 12, &v62, &v61, &v60, &v59);
  if ( v4 )
    v49 = 10;
    v20 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v20 == HIDWORD(v20) )
    {
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[22],int>(
        (__int64 *)v5,
        "button.inventory_left",
        &v49);
      v21 = *(_DWORD *)(v5 + 4);
    }
    else
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[22],int>(
        v5,
        v20,
      v21 = *(_DWORD *)(v5 + 4) + 12;
      *(_DWORD *)(v5 + 4) = v21;
    v48 = 10;
    if ( v21 == *(_DWORD *)(v5 + 8) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[21],int>(
        "button.menu_tab_left",
        &v48);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[21],int>(
        v21,
      *(_DWORD *)(v5 + 4) += 12;
    v47 = 0;
    v24 = *(_QWORD *)(v5 + 28);
    if ( (_DWORD)v24 == HIDWORD(v24) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[23],int>(
        (__int64 *)(v5 + 24),
        "button.inventory_right",
        &v47);
      v25 = *(_DWORD *)(v5 + 28);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[23],int>(
        v5 + 24,
        v24,
      v25 = *(_DWORD *)(v5 + 28) + 12;
      *(_DWORD *)(v5 + 28) = v25;
    v46 = 0;
    if ( v25 == *(_DWORD *)(v5 + 32) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[22],int>(
        "button.menu_tab_right",
        &v46);
      v26 = *(_DWORD *)(v5 + 28);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[22],int>(
        v25,
      v26 = *(_DWORD *)(v5 + 28) + 12;
      *(_DWORD *)(v5 + 28) = v26;
    v45 = 1;
    if ( v26 == *(_DWORD *)(v5 + 32) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
        "button.menu_select",
        &v45);
      v27 = *(_DWORD *)(v5 + 28);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[19],int>(
        v26,
      v27 = *(_DWORD *)(v5 + 28) + 12;
      *(_DWORD *)(v5 + 28) = v27;
    v44 = 1;
    if ( v27 == *(_DWORD *)(v5 + 32) )
        "button.pointer_pressed",
        &v44);
        v27,
      *(_DWORD *)(v5 + 28) += 12;
    v43 = 9;
    v28 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v28 == HIDWORD(v28) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[35],int>(
        "button.controller_secondary_select",
        &v43);
      v29 = *(_DWORD *)(v5 + 4);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[35],int>(
        v28,
      v29 = *(_DWORD *)(v5 + 4) + 12;
      *(_DWORD *)(v5 + 4) = v29;
    v42 = 11;
    if ( v29 == *(_DWORD *)(v5 + 8) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[25],int>(
        "button.controller_select",
        &v42);
      goto LABEL_96;
      v29,
      &v42);
    goto LABEL_94;
  v58 = 8;
  v22 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v22 == HIDWORD(v22) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[40],int>(
      "button.controller_secondary_select_left",
      &v58);
    v23 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[40],int>(
      v22,
    v23 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v23;
  v57 = 9;
  if ( v23 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[41],int>(
      "button.controller_secondary_select_right",
      &v57);
    v30 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[41],int>(
      v23,
    v30 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v30;
  v56 = 10;
  if ( v30 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[22],int>(
      "button.inventory_left",
      &v56);
    v31 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[22],int>(
      v30,
    v31 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v31;
  v55 = 10;
  if ( v31 == *(_DWORD *)(v5 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[21],int>(
      "button.menu_tab_left",
      &v55);
    v32 = *(_DWORD *)(v5 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[21],int>(
      v31,
    v32 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v32;
  v54 = 11;
  if ( v32 == *(_DWORD *)(v5 + 8) )
      "button.inventory_right",
      &v54);
    v33 = *(_DWORD *)(v5 + 4);
      v32,
    v33 = *(_DWORD *)(v5 + 4) + 12;
    *(_DWORD *)(v5 + 4) = v33;
  v53 = 11;
  if ( v33 == *(_DWORD *)(v5 + 8) )
      "button.menu_tab_right",
      &v53);
      v33,
  v52 = 0;
  v34 = *(_QWORD *)(v5 + 28);
  if ( (_DWORD)v34 == HIDWORD(v34) )
    std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[31],int>(
      (__int64 *)(v5 + 24),
      "button.menu_alternate_tab_left",
      &v52);
    v35 = *(_DWORD *)(v5 + 28);
    __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[31],int>(
      v5 + 24,
      v34,
    v35 = *(_DWORD *)(v5 + 28) + 12;
    *(_DWORD *)(v5 + 28) = v35;
  v51 = 1;
  if ( v35 == *(_DWORD *)(v5 + 32) )
    std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[32],int>(
      "button.menu_alternate_tab_right",
      &v51);
    __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[32],int>(
      v35,
    *(_DWORD *)(v5 + 28) += 12;
  v50 = 14;
  v36 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v36 != HIDWORD(v36) )
      v36,
      "button.menu_select",
      &v50);
LABEL_94:
    goto LABEL_96;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
    "button.menu_select",
    &v50);
LABEL_96:
  sub_119C884((void **)&v41, "button.interactwithtoast");
    ClientInputMappingFactory::_bindActionToGameControllerInput(
      -1082130432,
      *(float *)&v5,
      v3 + 108,
      &v41,
      31,
      -1082130432);
      v3 + 68,
  v37 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  result = 1;
  *(_DWORD *)(v5 + 48) = 1;
  return result;
}


void __fastcall ClientInputMappingFactory::_createRideableKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ClientInputMappingFactory::_createBaseNormalGamePlayKeyboardAndMouseMapping(a1, a2, a3);
  sub_119C884((void **)&v9, "button.dismount");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v9, 17, 0);
  v6 = (void *)(v9 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


void __fastcall ClientInputMappingFactory::onConfigChanged(ClientInputMappingFactory *this, const Config *a2)
{
  ClientInputMappingFactory *v2; // r11@1
  Config *v3; // r9@1
  _DWORD *v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  _DWORD *v7; // r7@11
  InputMapping *v8; // r0@11
  int v9; // r1@11
  void *v10; // r0@11
  int v11; // r6@13
  Options *v12; // r5@13
  void *v13; // r0@14
  int v14; // r0@16
  int v15; // r6@16
  int v16; // r3@16
  int v17; // r1@16
  int v18; // r2@16
  int v19; // r6@16
  int v20; // r3@16
  int v21; // r1@16
  int v22; // r2@16
  int v23; // r5@16

  v2 = this;
  v3 = a2;
  v4 = (_DWORD *)*((_DWORD *)this + 3);
  while ( v4 )
  {
    v7 = v4;
    v8 = (InputMapping *)(v4 + 2);
    v4 = (_DWORD *)*v4;
    InputMapping::~InputMapping(v8);
    v9 = v7[1];
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    operator delete(v7);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v2 + 4), 4 * (*(_QWORD *)((char *)v2 + 4) >> 32));
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  v11 = Config::getCurrentInputMode(v3);
  v12 = (Options *)Config::getOptions(v3);
  *((_BYTE *)v2 + 60) = Options::getInvertYMouse((int)v12, v11);
  *((_DWORD *)v2 + 16) = Options::getSensitivity((int)v12, v11);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v13 = &ServiceLocator<AppPlatform>::mDefaultService;
  v14 = (*(int (**)(void))(**(_DWORD **)v13 + 460))();
  v15 = Options::getGamePadRemappingByType((int)v12, v14);
  std::vector<Keymapping,std::allocator<Keymapping>>::operator=((int)v2 + 72, (unsigned __int64 *)(v15 + 4));
  std::vector<Keymapping,std::allocator<Keymapping>>::operator=((int)v2 + 84, (unsigned __int64 *)(v15 + 16));
  v16 = (int)v2 + 96;
  v17 = *(_DWORD *)(v15 + 32);
  v18 = *(_DWORD *)(v15 + 36);
  *(_DWORD *)v16 = *(_DWORD *)(v15 + 28);
  *(_DWORD *)(v16 + 4) = v17;
  *(_DWORD *)(v16 + 8) = v18;
  v19 = Options::getMotionControllerRemapping(v12);
  std::vector<Keymapping,std::allocator<Keymapping>>::operator=((int)v2 + 112, (unsigned __int64 *)(v19 + 4));
  std::vector<Keymapping,std::allocator<Keymapping>>::operator=((int)v2 + 124, (unsigned __int64 *)(v19 + 16));
  v20 = (int)v2 + 136;
  v21 = *(_DWORD *)(v19 + 32);
  v22 = *(_DWORD *)(v19 + 36);
  *(_DWORD *)v20 = *(_DWORD *)(v19 + 28);
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  v23 = Options::getKeyboardRemapping(v12);
  std::vector<Keymapping,std::allocator<Keymapping>>::operator=((int)v2 + 152, (unsigned __int64 *)(v23 + 4));
  std::vector<Keymapping,std::allocator<Keymapping>>::operator=((int)v2 + 164, (unsigned __int64 *)(v23 + 16));
  ClientInputMappingFactory::_updateGameControllerControls(v2);
  ClientInputMappingFactory::_updateKeyboardAndMouseControls(v2);
}


void __fastcall ClientInputMappingFactory::_addInvariantGamePlayTouchControls(ClientInputMappingFactory *this, TouchInputMapping *a2)
{
  TouchInputMapping *v2; // r8@1
  char *v3; // r10@1
  __int64 v4; // r0@1
  int v5; // r11@2
  int v6; // r0@2
  int v7; // r7@3
  int v8; // r1@3
  unsigned int v9; // r3@3
  unsigned int v10; // r6@5
  unsigned int v11; // r1@5
  char *v12; // r12@11
  char *v13; // r9@13
  int v14; // r10@13
  int v15; // r12@13
  int v16; // r1@14
  int v17; // r7@15
  int v18; // r3@15
  int v19; // r0@15
  int v20; // r2@15
  int v21; // r4@15
  int v22; // r5@15
  int v23; // r6@15
  int v24; // r3@15
  int v25; // r0@15
  int v26; // r2@15
  int v27; // r4@15
  int v28; // r5@15
  int v29; // r6@15
  int v30; // r3@15
  int v31; // r2@15
  int v32; // r4@15
  int v33; // r5@15
  int v34; // r6@15
  int v35; // r6@16
  unsigned int *v36; // r2@18
  signed int v37; // r1@20
  unsigned int *v38; // r2@22
  signed int v39; // r1@24
  unsigned int *v40; // r2@26
  signed int v41; // r1@28
  int v42; // r1@42
  void *v43; // r0@42
  int v44; // r1@43
  void *v45; // r0@43
  int *v46; // r0@44
  int v47; // r0@53
  int v48; // r1@53
  unsigned int v49; // r3@53
  unsigned int v50; // r7@55
  unsigned int v51; // r1@55
  char *v52; // r12@61
  char *v53; // r4@63
  int v54; // r9@63
  int v55; // r12@63
  int v56; // r1@64
  int v57; // r7@65
  int v58; // r3@65
  int v59; // r0@65
  int v60; // r2@65
  int v61; // r4@65
  int v62; // r5@65
  int v63; // r6@65
  int v64; // r3@65
  int v65; // r0@65
  int v66; // r2@65
  int v67; // r4@65
  int v68; // r5@65
  int v69; // r6@65
  int v70; // r3@65
  int v71; // r2@65
  int v72; // r4@65
  int v73; // r5@65
  int v74; // r6@65
  int v75; // r7@66
  int v76; // r11@66
  unsigned int *v77; // r2@68
  signed int v78; // r1@70
  unsigned int *v79; // r2@72
  signed int v80; // r1@74
  unsigned int *v81; // r2@76
  signed int v82; // r1@78
  int v83; // r1@92
  void *v84; // r0@92
  int v85; // r1@93
  void *v86; // r0@93
  int *v87; // r0@94
  int *v88; // r0@102
  void *v89; // r0@102
  void *v90; // r0@103
  void *v91; // r0@104
  void *v92; // r0@105
  void *v93; // r0@106
  void *v94; // r0@107
  unsigned int *v95; // r2@109
  signed int v96; // r1@111
  unsigned int *v97; // r2@113
  signed int v98; // r1@115
  unsigned int *v99; // r2@117
  signed int v100; // r1@119
  unsigned int *v101; // r2@121
  signed int v102; // r1@123
  unsigned int *v103; // r2@125
  signed int v104; // r1@127
  unsigned int *v105; // r2@129
  signed int v106; // r1@131
  char *v107; // [sp+20h] [bp-D8h]@64
  unsigned int v108; // [sp+24h] [bp-D4h]@11
  unsigned int v109; // [sp+24h] [bp-D4h]@61
  char *v110; // [sp+28h] [bp-D0h]@11
  char *v111; // [sp+28h] [bp-D0h]@61
  int v112; // [sp+34h] [bp-C4h]@106
  int v113; // [sp+38h] [bp-C0h]@106
  char v114; // [sp+3Ch] [bp-BCh]@106
  int v115; // [sp+40h] [bp-B8h]@102
  int v116; // [sp+48h] [bp-B0h]@102
  int v117; // [sp+50h] [bp-A8h]@102
  int v118; // [sp+58h] [bp-A0h]@102
  int v119[4]; // [sp+5Ch] [bp-9Ch]@102
  int v120; // [sp+6Ch] [bp-8Ch]@102
  int v121; // [sp+70h] [bp-88h]@102
  char v122; // [sp+77h] [bp-81h]@102
  int v123; // [sp+78h] [bp-80h]@102
  int v124; // [sp+7Ch] [bp-7Ch]@102
  int v125; // [sp+80h] [bp-78h]@102
  int v126; // [sp+84h] [bp-74h]@102
  int v127; // [sp+88h] [bp-70h]@102
  char v128; // [sp+8Fh] [bp-69h]@102
  int v129; // [sp+90h] [bp-68h]@102
  int v130; // [sp+94h] [bp-64h]@102
  int v131; // [sp+98h] [bp-60h]@102
  int v132; // [sp+9Ch] [bp-5Ch]@102
  int v133; // [sp+A0h] [bp-58h]@51
  char v134; // [sp+A7h] [bp-51h]@51
  int v135; // [sp+A8h] [bp-50h]@51
  int v136; // [sp+ACh] [bp-4Ch]@51
  int v137; // [sp+B0h] [bp-48h]@51
  int v138; // [sp+B4h] [bp-44h]@51
  int v139; // [sp+B8h] [bp-40h]@1
  char v140; // [sp+BFh] [bp-39h]@1
  int v141; // [sp+C0h] [bp-38h]@1
  int v142; // [sp+C4h] [bp-34h]@1
  int v143; // [sp+C8h] [bp-30h]@1
  int v144; // [sp+CCh] [bp-2Ch]@1

  v2 = a2;
  v144 = 200;
  v143 = 64;
  v141 = 18;
  v142 = 18;
  v140 = 0;
  v139 = 2;
  v3 = (char *)a2 + 12;
  v4 = *((_QWORD *)a2 + 2);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v7 = *(_DWORD *)v3;
    HIDWORD(v4) = ((signed int)v4 - *(_DWORD *)v3) >> 2;
    v9 = 678152731 * HIDWORD(v4);
    if ( (_DWORD)v4 == *(_DWORD *)v3 )
      v9 = 1;
    v11 = v9 + 678152731 * v8;
    v10 = v11;
    if ( v11 > 0x35E50D7 )
      v11 = 56512727;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x35E50D8 )
        sub_119C874();
      v110 = v3;
      v108 = v11;
      v12 = (char *)operator new(76 * v11);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 12) >> 32;
      v7 = *(_QWORD *)((char *)v2 + 12);
    }
    else
      v108 = 0;
      v12 = 0;
    v13 = v12;
    sub_DEFCF4(
      (int)&v12[v4 - v7],
      "button.pause",
      "binding.area.pause",
      "binding.bool.true",
      (int)&unk_27CA864,
      &v144,
      &v143,
      (float *)&v142,
      &v141,
      &v140,
      &v139);
    v15 = *(_QWORD *)((char *)v2 + 12) >> 32;
    v14 = *(_QWORD *)((char *)v2 + 12);
    if ( v14 == v15 )
      v5 = (int)(v13 + 76);
      v16 = (int)(v13 - 76);
      do
      {
        v17 = v14 + 12;
        *(_DWORD *)(v16 + 76) = *(_DWORD *)v14;
        v16 += 76;
        *(_DWORD *)v14 = &unk_28898CC;
        *(_DWORD *)(v16 + 4) = *(_DWORD *)(v14 + 4);
        *(_DWORD *)(v14 + 4) = &unk_28898CC;
        *(_DWORD *)(v16 + 8) = *(_DWORD *)(v14 + 8);
        v18 = v16 + 12;
        *(_DWORD *)(v14 + 8) = &unk_28898CC;
        v14 += 76;
        v19 = *(_DWORD *)v17;
        v20 = *(_DWORD *)(v17 + 4);
        v21 = *(_DWORD *)(v17 + 8);
        v22 = *(_DWORD *)(v17 + 12);
        v23 = *(_DWORD *)(v17 + 16);
        v17 += 20;
        *(_DWORD *)v18 = v19;
        *(_DWORD *)(v18 + 4) = v20;
        *(_DWORD *)(v18 + 8) = v21;
        *(_DWORD *)(v18 + 12) = v22;
        *(_DWORD *)(v18 + 16) = v23;
        v24 = v16 + 32;
        v25 = *(_DWORD *)v17;
        v26 = *(_DWORD *)(v17 + 4);
        v27 = *(_DWORD *)(v17 + 8);
        v28 = *(_DWORD *)(v17 + 12);
        v29 = *(_DWORD *)(v17 + 16);
        *(_DWORD *)v24 = v25;
        *(_DWORD *)(v24 + 4) = v26;
        *(_DWORD *)(v24 + 8) = v27;
        *(_DWORD *)(v24 + 12) = v28;
        *(_DWORD *)(v24 + 16) = v29;
        v30 = v16 + 52;
        v31 = *(_DWORD *)(v17 + 4);
        v32 = *(_DWORD *)(v17 + 8);
        v33 = *(_DWORD *)(v17 + 12);
        v34 = *(_DWORD *)(v17 + 16);
        *(_DWORD *)v30 = *(_DWORD *)v17;
        *(_DWORD *)(v30 + 4) = v31;
        *(_DWORD *)(v30 + 8) = v32;
        *(_DWORD *)(v30 + 12) = v33;
        *(_DWORD *)(v30 + 16) = v34;
        *(_BYTE *)(v16 + 72) = *(_BYTE *)(v17 + 20);
      }
      while ( v14 != v15 );
      v35 = *(_QWORD *)((char *)v2 + 12) >> 32;
      v14 = *(_QWORD *)((char *)v2 + 12);
      v5 = v16 + 152;
      if ( v14 != v35 )
        do
        {
          v42 = *(_DWORD *)(v14 + 8);
          v43 = (void *)(v42 - 12);
          if ( (int *)(v42 - 12) != &dword_28898C0 )
          {
            v36 = (unsigned int *)(v42 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
            }
            else
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v43);
          }
          v44 = *(_DWORD *)(v14 + 4);
          v45 = (void *)(v44 - 12);
          if ( (int *)(v44 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v44 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v45);
          v46 = (int *)(*(_DWORD *)v14 - 12);
          if ( v46 != &dword_28898C0 )
            v40 = (unsigned int *)(*(_DWORD *)v14 - 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v46);
          v14 += 76;
        }
        while ( v14 != v35 );
        v14 = *(_DWORD *)v110;
    if ( v14 )
      operator delete((void *)v14);
    *((_DWORD *)v2 + 3) = v13;
    *((_DWORD *)v2 + 4) = v5;
    v3 = v110;
    v6 = (int)&v13[76 * v108];
    *((_DWORD *)v2 + 5) = v6;
  }
  else
      v4,
    v5 = *((_DWORD *)v2 + 4) + 76;
    v6 = *((_DWORD *)v2 + 5);
  v138 = 200;
  v137 = 82;
  v135 = 18;
  v136 = 18;
  v134 = 0;
  v133 = 2;
  if ( v5 == v6 )
    v47 = *(_DWORD *)v3;
    v48 = (v5 - *(_DWORD *)v3) >> 2;
    v49 = 678152731 * v48;
    if ( v5 == *(_DWORD *)v3 )
      v49 = 1;
    v51 = v49 + 678152731 * v48;
    v50 = v51;
    if ( v51 > 0x35E50D7 )
      v51 = 56512727;
    if ( v50 < v49 )
    if ( v51 )
      if ( v51 >= 0x35E50D8 )
      v111 = v3;
      v109 = v51;
      v52 = (char *)operator new(76 * v51);
      v5 = *(_QWORD *)((char *)v2 + 12) >> 32;
      v47 = *(_QWORD *)((char *)v2 + 12);
      v109 = 0;
      v52 = 0;
    v53 = v52;
    sub_DEFF48(
      (int)&v52[v5 - v47],
      "button.chat",
      "binding.area.chat",
      &v138,
      &v137,
      (float *)&v136,
      &v135,
      &v134,
      &v133);
    v55 = *(_QWORD *)((char *)v2 + 12) >> 32;
    v54 = *(_QWORD *)((char *)v2 + 12);
    v3 = v111;
    if ( v54 == v55 )
      v76 = (int)(v53 + 76);
      v56 = (int)(v53 - 76);
      v107 = v53;
        v57 = v54 + 12;
        *(_DWORD *)(v56 + 76) = *(_DWORD *)v54;
        v56 += 76;
        *(_DWORD *)v54 = &unk_28898CC;
        *(_DWORD *)(v56 + 4) = *(_DWORD *)(v54 + 4);
        *(_DWORD *)(v54 + 4) = &unk_28898CC;
        *(_DWORD *)(v56 + 8) = *(_DWORD *)(v54 + 8);
        v58 = v56 + 12;
        *(_DWORD *)(v54 + 8) = &unk_28898CC;
        v54 += 76;
        v59 = *(_DWORD *)v57;
        v60 = *(_DWORD *)(v57 + 4);
        v61 = *(_DWORD *)(v57 + 8);
        v62 = *(_DWORD *)(v57 + 12);
        v63 = *(_DWORD *)(v57 + 16);
        v57 += 20;
        *(_DWORD *)v58 = v59;
        *(_DWORD *)(v58 + 4) = v60;
        *(_DWORD *)(v58 + 8) = v61;
        *(_DWORD *)(v58 + 12) = v62;
        *(_DWORD *)(v58 + 16) = v63;
        v64 = v56 + 32;
        v65 = *(_DWORD *)v57;
        v66 = *(_DWORD *)(v57 + 4);
        v67 = *(_DWORD *)(v57 + 8);
        v68 = *(_DWORD *)(v57 + 12);
        v69 = *(_DWORD *)(v57 + 16);
        *(_DWORD *)v64 = v65;
        *(_DWORD *)(v64 + 4) = v66;
        *(_DWORD *)(v64 + 8) = v67;
        *(_DWORD *)(v64 + 12) = v68;
        *(_DWORD *)(v64 + 16) = v69;
        v70 = v56 + 52;
        v71 = *(_DWORD *)(v57 + 4);
        v72 = *(_DWORD *)(v57 + 8);
        v73 = *(_DWORD *)(v57 + 12);
        v74 = *(_DWORD *)(v57 + 16);
        *(_DWORD *)v70 = *(_DWORD *)v57;
        *(_DWORD *)(v70 + 4) = v71;
        *(_DWORD *)(v70 + 8) = v72;
        *(_DWORD *)(v70 + 12) = v73;
        *(_DWORD *)(v70 + 16) = v74;
        *(_BYTE *)(v56 + 72) = *(_BYTE *)(v57 + 20);
      while ( v54 != v55 );
      v75 = *(_QWORD *)((char *)v2 + 12) >> 32;
      v54 = *(_QWORD *)((char *)v2 + 12);
      v76 = v56 + 152;
      if ( v54 != v75 )
          v83 = *(_DWORD *)(v54 + 8);
          v84 = (void *)(v83 - 12);
          if ( (int *)(v83 - 12) != &dword_28898C0 )
            v77 = (unsigned int *)(v83 - 4);
                v78 = __ldrex(v77);
              while ( __strex(v78 - 1, v77) );
              v78 = (*v77)--;
            if ( v78 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v84);
          v85 = *(_DWORD *)(v54 + 4);
          v86 = (void *)(v85 - 12);
          if ( (int *)(v85 - 12) != &dword_28898C0 )
            v79 = (unsigned int *)(v85 - 4);
                v80 = __ldrex(v79);
              while ( __strex(v80 - 1, v79) );
              v80 = (*v79)--;
            if ( v80 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v86);
          v87 = (int *)(*(_DWORD *)v54 - 12);
          if ( v87 != &dword_28898C0 )
            v81 = (unsigned int *)(*(_DWORD *)v54 - 4);
                v82 = __ldrex(v81);
              while ( __strex(v82 - 1, v81) );
              v82 = (*v81)--;
            if ( v82 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v87);
          v54 += 76;
        while ( v54 != v75 );
        v54 = *(_DWORD *)v111;
      v53 = v107;
    if ( v54 )
      operator delete((void *)v54);
    *((_DWORD *)v2 + 3) = v53;
    *((_DWORD *)v2 + 4) = v76;
    *((_DWORD *)v2 + 5) = &v53[76 * v109];
      v5,
    *((_DWORD *)v2 + 4) += 76;
  v131 = 164;
  v130 = 118;
  v129 = 20;
  v132 = 0;
  v128 = 0;
  v127 = 2;
  sub_DD6E74((int)v2, &v132, &v131, &v130, &v129, &v128, &v127);
  v125 = 0;
  v126 = 0;
  v123 = 0;
  v124 = 0;
  v122 = 0;
  v121 = 2;
  sub_DD706C((int)v3, &v126, &v125, (float *)&v124, &v123, &v122, &v121);
  sub_119C884((void **)&v118, "button.turn_interact");
  sub_119C884((void **)&v117, "button.build_or_attack");
  sub_119C884((void **)&v116, "button.destroy_or_interact");
  v88 = (int *)sub_119C884((void **)&v115, "binding.area.turn_interact");
  TouchTurnInteractBinding::TouchTurnInteractBinding(v119, &v118, &v117, &v116, v88);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 6,
    v119);
    (int *)v2 + 7,
    &v119[1]);
    (int *)v2 + 8,
    &v119[2]);
    (int *)v2 + 9,
    &v119[3]);
  *((_DWORD *)v2 + 10) = v120;
  TouchTurnInteractBinding::~TouchTurnInteractBinding((TouchTurnInteractBinding *)v119);
  v89 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v115 - 4);
    if ( &pthread_create )
      __dmb();
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v89);
  v90 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v116 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v90);
  v91 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v117 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v91);
  v92 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v118 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  sub_119C884((void **)&v112, "button.pointer_pressed");
  sub_119C884((void **)&v113, "button.menu_select");
  std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(
    (int)v2 + 44,
    (int)&v112,
    (int)&v114);
  v93 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v113 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v93);
  v94 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v112 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v94);
}


void __fastcall ClientInputMappingFactory::_createBedTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createBedTouchMapping(this);
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ClientInputMappingFactory::_createBaseNormalGamePlayKeyboardAndMouseMapping(a1, a2, a3);
  sub_119C884((void **)&v9, "button.sneak");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v9, 17, 0);
  v6 = (void *)(v9 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


int __fastcall ClientInputMappingFactory::getMapping(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  ClientInputMappingFactory::_activateMapping(a1, a2);
  result = std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(v3 + 4),
             v2);
  if ( result )
    result += 8;
  return result;
}


char *__fastcall ClientInputMappingFactory::_createBaseNormalGamePlayKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  void *v16; // r0@11
  __int64 v17; // kr00_8@12
  int v18; // r1@13
  int v19; // r1@16
  int v20; // r1@19
  char *result; // r0@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  unsigned int *v28; // r2@36
  signed int v29; // r1@38
  unsigned int *v30; // r2@40
  signed int v31; // r1@42
  unsigned int *v32; // r2@44
  signed int v33; // r1@46
  unsigned int *v34; // r2@48
  signed int v35; // r1@50
  unsigned int *v36; // r2@52
  signed int v37; // r1@54
  unsigned int *v38; // r2@56
  signed int v39; // r1@58
  unsigned int *v40; // r2@60
  signed int v41; // r1@62
  unsigned int *v42; // r2@64
  signed int v43; // r1@66
  char v44; // [sp+Bh] [bp-8Dh]@21
  int v45; // [sp+Ch] [bp-8Ch]@21
  char v46; // [sp+13h] [bp-85h]@18
  int v47; // [sp+14h] [bp-84h]@18
  char v48; // [sp+1Bh] [bp-7Dh]@15
  int v49; // [sp+1Ch] [bp-7Ch]@15
  char v50; // [sp+23h] [bp-75h]@12
  int v51; // [sp+24h] [bp-74h]@12
  int v52; // [sp+2Ch] [bp-6Ch]@11
  int v53; // [sp+34h] [bp-64h]@10
  int v54; // [sp+3Ch] [bp-5Ch]@9
  int v55; // [sp+44h] [bp-54h]@8
  int v56; // [sp+4Ch] [bp-4Ch]@7
  int v57; // [sp+54h] [bp-44h]@6
  int v58; // [sp+5Ch] [bp-3Ch]@5
  int v59; // [sp+64h] [bp-34h]@4
  int v60; // [sp+6Ch] [bp-2Ch]@3
  int v61; // [sp+74h] [bp-24h]@2
  int v62; // [sp+7Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ClientInputMappingFactory::_addInvariantKeyboardControls(a1, a2, a3);
  ClientInputMappingFactory::_addGameplayMouseControls(v5, v4, v3);
  sub_119C884((void **)&v62, "button.mobeffects");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v62, 30, 0);
  v6 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v61, "button.drop");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v61, 3, 0);
  v7 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v61 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v60, "button.inventory");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v60, 14, 0);
  v8 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v60 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v59, "button.chat");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v59, 23, 0);
  v9 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v59 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v58, "button.console");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v58, 32, 0);
  v10 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v58 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v57, "button.jump");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v57, 16, 0);
  v11 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v57 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v56, "button.sprint");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v56, 18, 0);
  v12 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v56 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v55, "button.left");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v55, 19, 1);
  v13 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v55 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v54, "button.up");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v54, 22, 1);
  v14 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v54 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v53, "button.down");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v53, 21, 1);
  v15 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v53 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v52, "button.right");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v52, 20, 1);
  v16 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v52 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v51 = 27;
  v50 = 0;
  v17 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[13],Keyboard::{unnamed type#1},FocusImpact>(
      (__int64 *)v4,
      "button.pause",
      &v51,
      &v50);
    v18 = *(_DWORD *)(v4 + 4);
  else
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[13],Keyboard::{unnamed type#1},FocusImpact>(
      v4,
      v17,
    v18 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v18;
  v49 = 112;
  v48 = 0;
  if ( v18 == *(_DWORD *)(v4 + 8) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[16],Keyboard::{unnamed type#1},FocusImpact>(
      "button.hide_gui",
      &v49,
      &v48);
    v19 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[16],Keyboard::{unnamed type#1},FocusImpact>(
      v18,
    v19 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v19;
  v47 = 119;
  v46 = 0;
  if ( v19 == *(_DWORD *)(v4 + 8) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[22],Keyboard::{unnamed type#1},FocusImpact>(
      "button.hide_paperdoll",
      &v47,
      &v46);
    v20 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[22],Keyboard::{unnamed type#1},FocusImpact>(
      v19,
    v20 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v20;
  v45 = 121;
  v44 = 0;
  if ( v20 == *(_DWORD *)(v4 + 8) )
    result = std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[21],Keyboard::{unnamed type#1},FocusImpact>(
               (__int64 *)v4,
               "button.hide_tooltips",
               &v45,
               &v44);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[21],Keyboard::{unnamed type#1},FocusImpact>(
      v20,
      "button.hide_tooltips",
      &v45,
      &v44);
    result = (char *)(*(_DWORD *)(v4 + 4) + 12);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createBoatTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r10@1
  __int64 *v2; // r11@1
  __int64 v3; // kr00_8@1
  int v4; // r1@2
  __int64 v5; // r0@7
  char *v6; // r6@9
  int v7; // r1@9
  unsigned int v8; // r3@9
  unsigned int v9; // r1@11
  unsigned int v10; // r9@11
  char *v11; // r5@17
  char *v12; // r0@19
  char *v13; // r12@19
  int v14; // r8@20
  int v15; // r6@21
  int v16; // r7@21
  int v17; // r1@21
  int v18; // r3@21
  int v19; // r4@21
  int v20; // r5@21
  int v21; // r7@21
  int v22; // r1@21
  int v23; // r2@21
  int v24; // r3@21
  int v25; // r4@21
  int v26; // r5@21
  int v27; // r7@21
  int v28; // r2@21
  int v29; // r3@21
  int v30; // r4@21
  int v31; // r5@21
  char *v32; // r6@22
  int v33; // r4@22
  __int64 v34; // kr20_8@30
  int v35; // r1@31
  int v36; // r1@34
  int v37; // r1@37
  int *v38; // r0@42
  void *v39; // r0@42
  void *v40; // r0@43
  void *v41; // r0@44
  void *v42; // r0@45
  void *v43; // r0@46
  void *v44; // r0@47
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  unsigned int *v47; // r2@53
  signed int v48; // r1@55
  unsigned int *v49; // r2@57
  signed int v50; // r1@59
  unsigned int *v51; // r2@61
  signed int v52; // r1@63
  unsigned int *v53; // r2@65
  signed int v54; // r1@67
  unsigned int *v55; // r2@69
  signed int v56; // r1@71
  char *v57; // [sp+20h] [bp-110h]@20
  int v58; // [sp+24h] [bp-10Ch]@17
  int v59; // [sp+30h] [bp-100h]@46
  int v60; // [sp+34h] [bp-FCh]@46
  char v61; // [sp+38h] [bp-F8h]@46
  int v62; // [sp+3Ch] [bp-F4h]@42
  int v63; // [sp+44h] [bp-ECh]@42
  int v64; // [sp+4Ch] [bp-E4h]@42
  int v65; // [sp+54h] [bp-DCh]@42
  int v66[4]; // [sp+58h] [bp-D8h]@42
  int v67; // [sp+68h] [bp-C8h]@42
  int v68; // [sp+6Ch] [bp-C4h]@42
  char v69; // [sp+73h] [bp-BDh]@42
  int v70; // [sp+74h] [bp-BCh]@42
  int v71; // [sp+78h] [bp-B8h]@42
  int v72; // [sp+7Ch] [bp-B4h]@42
  int v73; // [sp+80h] [bp-B0h]@42
  char v74; // [sp+87h] [bp-A9h]@39
  int v75; // [sp+88h] [bp-A8h]@39
  int v76; // [sp+8Ch] [bp-A4h]@39
  int v77; // [sp+90h] [bp-A0h]@39
  int v78; // [sp+94h] [bp-9Ch]@39
  char v79; // [sp+9Bh] [bp-95h]@36
  int v80; // [sp+9Ch] [bp-94h]@36
  int v81; // [sp+A0h] [bp-90h]@36
  int v82; // [sp+A4h] [bp-8Ch]@36
  int v83; // [sp+A8h] [bp-88h]@36
  char v84; // [sp+AEh] [bp-82h]@33
  char v85; // [sp+AFh] [bp-81h]@30
  int v86; // [sp+B0h] [bp-80h]@30
  char v87; // [sp+B7h] [bp-79h]@30
  int v88; // [sp+B8h] [bp-78h]@30
  int v89; // [sp+BCh] [bp-74h]@30
  int v90; // [sp+C0h] [bp-70h]@30
  int v91; // [sp+C4h] [bp-6Ch]@30
  int v92; // [sp+C8h] [bp-68h]@7
  char v93; // [sp+CFh] [bp-61h]@7
  int v94; // [sp+D0h] [bp-60h]@7
  int v95; // [sp+D4h] [bp-5Ch]@7
  int v96; // [sp+D8h] [bp-58h]@7
  int v97; // [sp+DCh] [bp-54h]@7
  char v98; // [sp+E3h] [bp-4Dh]@4
  int v99; // [sp+E4h] [bp-4Ch]@4
  int v100; // [sp+E8h] [bp-48h]@4
  int v101; // [sp+ECh] [bp-44h]@4
  int v102; // [sp+F0h] [bp-40h]@4
  char v103; // [sp+F7h] [bp-39h]@1
  int v104; // [sp+F8h] [bp-38h]@1
  int v105; // [sp+FCh] [bp-34h]@1
  int v106; // [sp+100h] [bp-30h]@1
  int v107; // [sp+104h] [bp-2Ch]@1

  v1 = this;
  TouchInputMapping::TouchInputMapping(this);
  v2 = (__int64 *)((char *)v1 + 12);
  v107 = 200;
  v106 = 64;
  v104 = 18;
  v105 = 18;
  v103 = 0;
  v3 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[13],char const(&)[19],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      (__int64 *)((char *)v1 + 12),
      "button.pause",
      "binding.area.pause",
      "binding.bool.true",
      (int)&unk_27CA864,
      &v107,
      &v106,
      (float *)&v105,
      &v104,
      &v103);
    v4 = *((_DWORD *)v1 + 4);
  }
  else
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[13],char const(&)[19],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      (int)v1 + 12,
      v3,
    v4 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v4;
  v102 = 200;
  v101 = 82;
  v99 = 18;
  v100 = 18;
  v98 = 0;
  if ( v4 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[18],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      "button.chat",
      "binding.area.chat",
      &v102,
      &v101,
      (float *)&v100,
      &v99,
      &v98);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[18],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v4,
    *((_DWORD *)v1 + 4) += 76;
  v96 = 164;
  v95 = 118;
  v97 = 0;
  v93 = 0;
  v94 = 20;
  v92 = 2;
  v5 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    v6 = *(char **)v1;
    HIDWORD(v5) = ((signed int)v5 - *(_DWORD *)v1) >> 3;
    v8 = 954437177 * HIDWORD(v5);
    if ( (_DWORD)v5 == *(_DWORD *)v1 )
      v8 = 1;
    v9 = v8 + 954437177 * v7;
    v10 = v9;
    if ( v9 > 0x38E38E3 )
      v10 = 59652323;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x38E38E4 )
        sub_119C874();
      v11 = (char *)operator new(72 * v10);
      v58 = (int)v1 + 12;
      LODWORD(v5) = *(_QWORD *)v1 >> 32;
      v6 = (char *)*(_QWORD *)v1;
    }
    else
      v11 = 0;
    sub_DE6280(
      (int *)&v11[v5 - (_DWORD)v6],
      "button.dismount",
      "binding.point.interact",
      "binding.bool.show_boat_exit",
      "binding.string.boat_exit_text",
      &v97,
      &v96,
      &v95,
      &v94,
      &v93,
      &v92);
    v13 = (char *)(*(_QWORD *)v1 >> 32);
    v12 = (char *)*(_QWORD *)v1;
    v2 = (__int64 *)v58;
    if ( v12 == v13 )
      v33 = (int)(v11 + 72);
      v14 = (int)(v11 - 72);
      v57 = v11;
      do
      {
        v15 = (int)(v12 + 16);
        *(_DWORD *)(v14 + 72) = *(_DWORD *)v12;
        v14 += 72;
        *(_DWORD *)v12 = &unk_28898CC;
        *(_DWORD *)(v14 + 4) = *((_DWORD *)v12 + 1);
        *((_DWORD *)v12 + 1) = &unk_28898CC;
        *(_DWORD *)(v14 + 8) = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = &unk_28898CC;
        *(_DWORD *)(v14 + 12) = *((_DWORD *)v12 + 3);
        v16 = v14 + 16;
        *((_DWORD *)v12 + 3) = &unk_28898CC;
        v12 += 72;
        v17 = *(_DWORD *)v15;
        v18 = *(_DWORD *)(v15 + 4);
        v19 = *(_DWORD *)(v15 + 8);
        v20 = *(_DWORD *)(v15 + 12);
        v15 += 16;
        *(_DWORD *)v16 = v17;
        *(_DWORD *)(v16 + 4) = v18;
        *(_DWORD *)(v16 + 8) = v19;
        *(_DWORD *)(v16 + 12) = v20;
        v21 = v14 + 32;
        v22 = *(_DWORD *)v15;
        v23 = *(_DWORD *)(v15 + 4);
        v24 = *(_DWORD *)(v15 + 8);
        v25 = *(_DWORD *)(v15 + 12);
        v26 = *(_DWORD *)(v15 + 16);
        v15 += 20;
        *(_DWORD *)v21 = v22;
        *(_DWORD *)(v21 + 4) = v23;
        *(_DWORD *)(v21 + 8) = v24;
        *(_DWORD *)(v21 + 12) = v25;
        *(_DWORD *)(v21 + 16) = v26;
        v27 = v14 + 52;
        v28 = *(_DWORD *)(v15 + 4);
        v29 = *(_DWORD *)(v15 + 8);
        v30 = *(_DWORD *)(v15 + 12);
        v31 = *(_DWORD *)(v15 + 16);
        *(_DWORD *)v27 = *(_DWORD *)v15;
        *(_DWORD *)(v27 + 4) = v28;
        *(_DWORD *)(v27 + 8) = v29;
        *(_DWORD *)(v27 + 12) = v30;
        *(_DWORD *)(v27 + 16) = v31;
      }
      while ( v12 != v13 );
      v32 = (char *)(*(_QWORD *)v1 >> 32);
      v12 = (char *)*(_QWORD *)v1;
      v33 = v14 + 144;
      if ( v12 != v32 )
        do
          v12 = (char *)TouchTextButtonBinding::~TouchTextButtonBinding((TouchTextButtonBinding *)v12) + 72;
        while ( v32 != v12 );
        v12 = *(char **)v1;
      v11 = v57;
    if ( v12 )
      operator delete(v12);
    *(_DWORD *)v1 = v11;
    *((_DWORD *)v1 + 1) = v33;
    *((_DWORD *)v1 + 2) = &v11[72 * v10];
      (int *)v5,
    *((_DWORD *)v1 + 1) += 72;
  v90 = 164;
  v89 = 118;
  v88 = 20;
  v91 = 0;
  v87 = 0;
  v86 = 2;
  sub_DD6E74((int)v1, &v91, &v90, &v89, &v88, &v87, &v86);
  v85 = 0;
  v34 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v34 == HIDWORD(v34) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[19],char const(&)[25],char const(&)[24],ButtonColors const&,int const&,int const&,int const&,int const&,bool>(
      v2,
      "button.paddle_left",
      "binding.area.paddle_left",
      "binding.bool.can_paddle",
      (int *)"",
      (int *)&unk_262C64C,
      &flt_262C650,
      (int *)&flt_262C650,
      &v85);
    v35 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[19],char const(&)[25],char const(&)[24],ButtonColors const&,int const&,int const&,int const&,int const&,bool>(
      (int)v2,
      v34,
    v35 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v35;
  v84 = 0;
  if ( v35 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[20],char const(&)[26],char const(&)[24],ButtonColors const&,int const&,int const&,int const&,int const&,bool>(
      "button.paddle_right",
      "binding.area.paddle_right",
      &v84);
    v36 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[20],char const(&)[26],char const(&)[24],ButtonColors const&,int const&,int const&,int const&,int const&,bool>(
      v35,
    v36 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v36;
  v82 = 0;
  v83 = 0;
  v80 = 0;
  v81 = 0;
  v79 = 0;
  if ( v36 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[11],char const(&)[32],char const(&)[24],ButtonColors const&,int,int,int,int,bool>(
      "no_binding",
      "binding.area.paddle_left_border",
      &v83,
      &v82,
      (float *)&v81,
      &v80,
      &v79);
    v37 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[11],char const(&)[32],char const(&)[24],ButtonColors const&,int,int,int,int,bool>(
      v36,
    v37 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v37;
  v77 = 0;
  v78 = 0;
  v75 = 0;
  v76 = 0;
  v74 = 0;
  if ( v37 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[11],char const(&)[33],char const(&)[24],ButtonColors const&,int,int,int,int,bool>(
      "binding.area.paddle_right_border",
      &v78,
      &v77,
      (float *)&v76,
      &v75,
      &v74);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[11],char const(&)[33],char const(&)[24],ButtonColors const&,int,int,int,int,bool>(
      v37,
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v71 = 0;
  v69 = 0;
  v68 = 2;
  sub_DD706C((int)v2, &v73, &v72, (float *)&v71, &v70, &v69, &v68);
  sub_119C884((void **)&v65, "button.turn_interact");
  sub_119C884((void **)&v64, "button.build_or_attack");
  sub_119C884((void **)&v63, "button.destroy_or_interact");
  v38 = (int *)sub_119C884((void **)&v62, "binding.area.turn_interact");
  TouchTurnInteractBinding::TouchTurnInteractBinding(v66, &v65, &v64, &v63, v38);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 6,
    v66);
    (int *)v1 + 7,
    &v66[1]);
    (int *)v1 + 8,
    &v66[2]);
    (int *)v1 + 9,
    &v66[3]);
  *((_DWORD *)v1 + 10) = v67;
  TouchTurnInteractBinding::~TouchTurnInteractBinding((TouchTurnInteractBinding *)v66);
  v39 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v63 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v64 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  v42 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v65 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  sub_119C884((void **)&v59, "button.pointer_pressed");
  sub_119C884((void **)&v60, "button.menu_select");
  std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(
    (int)v1 + 44,
    (int)&v59,
    (int)&v61);
  v43 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v60 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  v44 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v59 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
}


void __fastcall ClientInputMappingFactory::_bindActionToGameControllerInput(int a1, float a2, int a3, int *a4, int a5, int a6)
{
  float v6; // r6@1
  int *v7; // r11@1
  int v12; // r5@1
  _DWORD *v13; // r10@1
  __int64 v14; // kr00_8@1
  int v15; // r4@2
  __int64 v16; // r0@4
  __int64 v17; // r0@7
  int *v18; // r0@8
  int *v19; // r0@10
  void *v20; // r0@18
  void *v21; // r0@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  int v26; // [sp+0h] [bp-50h]@2
  int v27; // [sp+4h] [bp-4Ch]@1
  void *ptr; // [sp+8h] [bp-48h]@16
  int v29; // [sp+14h] [bp-3Ch]@1
  float v30; // [sp+18h] [bp-38h]@13

  v6 = a2;
  v7 = a4;
  __asm { VLDR            S16, [SP,#0x50+arg_4] }
  v12 = a3;
  __asm { VSTR            S16, [SP,#0x50+var_38] }
  Remapping::getActionName((void **)&v29, a5);
  RemappingLayout::getKeymappingByAction((int)&v27, v12, (const void **)&v29);
  v14 = *(_QWORD *)Keymapping::getKeys((Keymapping *)&v27);
  v13 = (_DWORD *)v14;
  if ( (_DWORD)v14 != HIDWORD(v14) )
  {
    do
    {
      v15 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v12 + 12))(v12, *v13);
      v26 = v15;
      if ( Keymapping::isAssigned((Keymapping *)&v27) == 1 )
      {
        if ( Keymapping::isAltKey((Keymapping *)&v27) != 1 )
        {
          v17 = *(_QWORD *)(LODWORD(v6) + 4);
          if ( (_DWORD)v17 == HIDWORD(v17) )
          {
            std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<std::string const&,int &>(
              (unsigned __int64 *)LODWORD(v6),
              v7,
              &v26);
          }
          else
            v18 = sub_119C854((int *)v17, v7);
            v18[1] = v15;
            *((_BYTE *)v18 + 8) = 0;
            *(_DWORD *)(LODWORD(v6) + 4) += 12;
          goto LABEL_15;
        }
        v16 = *(_QWORD *)(LODWORD(v6) + 28);
        __asm
          VCMPE.F32       S16, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          if ( (_DWORD)v16 == HIDWORD(v16) )
            std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<std::string const&,int &>(
              (unsigned __int64 *)(LODWORD(v6) + 24),
            goto LABEL_15;
          v19 = sub_119C854((int *)v16, v7);
          v19[1] = v15;
          v19[2] = 1056964608;
        else
            std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<std::string const&,int &,float &>(
              &v26,
              (int *)&v30);
          sub_119C854((int *)v16, v7)[1] = v15;
          __asm { VSTR            S16, [R0,#8] }
        *(_DWORD *)(LODWORD(v6) + 28) += 12;
      }
LABEL_15:
      ++v13;
    }
    while ( (_DWORD *)HIDWORD(v14) != v13 );
  }
  if ( ptr )
    operator delete(ptr);
  v20 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
}


void __fastcall ClientInputMappingFactory::~ClientInputMappingFactory(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r0@1

  v1 = ClientInputMappingFactory::~ClientInputMappingFactory(this);
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall ClientInputMappingFactory::_createNormalGamePlayTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  ClientInputMappingFactory *v2; // r0@1
  ClientInputMappingFactory *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r1@2
  int v6; // r1@5
  int v7; // r1@8
  int v8; // r0@11
  int v9; // r0@14
  int v10; // r8@14
  int v11; // r0@14
  int v12; // r7@15
  int v13; // r1@15
  unsigned int v14; // r3@15
  unsigned int v15; // r1@17
  unsigned int v16; // r5@17
  char *v17; // r9@23
  int v18; // r10@25
  int v19; // r12@25
  int v20; // r1@26
  int v21; // r7@27
  int v22; // r3@27
  int v23; // r0@27
  int v24; // r2@27
  int v25; // r4@27
  int v26; // r5@27
  int v27; // r6@27
  int v28; // r3@27
  int v29; // r0@27
  int v30; // r2@27
  int v31; // r4@27
  int v32; // r5@27
  int v33; // r6@27
  int v34; // r3@27
  int v35; // r2@27
  int v36; // r4@27
  int v37; // r5@27
  int v38; // r6@27
  int v39; // r5@28
  unsigned int *v40; // r2@30
  signed int v41; // r1@32
  unsigned int *v42; // r2@34
  signed int v43; // r1@36
  unsigned int *v44; // r2@38
  signed int v45; // r1@40
  int v46; // r1@54
  void *v47; // r0@54
  int v48; // r1@55
  void *v49; // r0@55
  int *v50; // r0@56
  __int64 *v51; // r10@64
  int v52; // r8@64
  int v53; // r0@64
  int v54; // r12@65
  int v55; // r1@65
  unsigned int v56; // r3@65
  unsigned int v57; // r1@67
  unsigned int v58; // r4@67
  char *v59; // r9@73
  int v60; // r10@75
  int v61; // r12@75
  int v62; // r1@76
  int v63; // r7@77
  int v64; // r3@77
  int v65; // r0@77
  int v66; // r2@77
  int v67; // r4@77
  int v68; // r5@77
  int v69; // r6@77
  int v70; // r3@77
  int v71; // r0@77
  int v72; // r2@77
  int v73; // r4@77
  int v74; // r5@77
  int v75; // r6@77
  int v76; // r3@77
  int v77; // r2@77
  int v78; // r4@77
  int v79; // r5@77
  int v80; // r6@77
  int v81; // r5@78
  unsigned int v82; // r7@79
  unsigned int *v83; // r2@80
  signed int v84; // r1@82
  unsigned int *v85; // r2@84
  signed int v86; // r1@86
  unsigned int *v87; // r2@88
  signed int v88; // r1@90
  int v89; // r1@104
  void *v90; // r0@104
  int v91; // r1@105
  void *v92; // r0@105
  int *v93; // r0@106
  int v94; // r1@115
  int v95; // r1@118
  int v96; // r1@121
  int v97; // r0@123
  int v98; // r1@124
  int v99; // r1@127
  char *result; // r0@130
  unsigned int v101; // [sp+2Ch] [bp-F4h]@23
  unsigned int v102; // [sp+2Ch] [bp-F4h]@73
  __int64 *v103; // [sp+30h] [bp-F0h]@14
  char v104; // [sp+37h] [bp-E9h]@129
  int v105; // [sp+38h] [bp-E8h]@129
  int v106; // [sp+3Ch] [bp-E4h]@129
  int v107; // [sp+40h] [bp-E0h]@129
  int v108; // [sp+44h] [bp-DCh]@129
  char v109; // [sp+4Bh] [bp-D5h]@126
  int v110; // [sp+4Ch] [bp-D4h]@126
  int v111; // [sp+50h] [bp-D0h]@126
  int v112; // [sp+54h] [bp-CCh]@126
  int v113; // [sp+58h] [bp-C8h]@126
  char v114; // [sp+5Fh] [bp-C1h]@123
  int v115; // [sp+60h] [bp-C0h]@123
  char v116; // [sp+67h] [bp-B9h]@123
  int v117; // [sp+68h] [bp-B8h]@123
  int v118; // [sp+6Ch] [bp-B4h]@123
  int v119; // [sp+70h] [bp-B0h]@123
  int v120; // [sp+74h] [bp-ACh]@123
  char v121; // [sp+7Bh] [bp-A5h]@120
  int v122; // [sp+7Ch] [bp-A4h]@120
  int v123; // [sp+80h] [bp-A0h]@117
  char v124; // [sp+87h] [bp-99h]@117
  int v125; // [sp+88h] [bp-98h]@117
  int v126; // [sp+8Ch] [bp-94h]@117
  int v127; // [sp+90h] [bp-90h]@114
  char v128; // [sp+97h] [bp-89h]@114
  int v129; // [sp+98h] [bp-88h]@114
  int v130; // [sp+9Ch] [bp-84h]@63
  char v131; // [sp+A3h] [bp-7Dh]@63
  int v132; // [sp+A4h] [bp-7Ch]@63
  int v133; // [sp+A8h] [bp-78h]@63
  int v134; // [sp+ACh] [bp-74h]@63
  int v135; // [sp+B0h] [bp-70h]@63
  int v136; // [sp+B4h] [bp-6Ch]@13
  char v137; // [sp+BBh] [bp-65h]@13
  int v138; // [sp+BCh] [bp-64h]@13
  int v139; // [sp+C0h] [bp-60h]@13
  int v140; // [sp+C4h] [bp-5Ch]@13
  int v141; // [sp+C8h] [bp-58h]@13
  int v142; // [sp+CCh] [bp-54h]@10
  char v143; // [sp+D3h] [bp-4Dh]@10
  int v144; // [sp+D4h] [bp-4Ch]@7
  char v145; // [sp+DBh] [bp-45h]@7
  int v146; // [sp+DCh] [bp-44h]@7
  int v147; // [sp+E0h] [bp-40h]@4
  char v148; // [sp+E7h] [bp-39h]@4
  int v149; // [sp+E8h] [bp-38h]@4
  int v150; // [sp+ECh] [bp-34h]@1
  char v151; // [sp+F3h] [bp-2Dh]@1
  int v152; // [sp+F4h] [bp-2Ch]@1

  v1 = this;
  v2 = (ClientInputMappingFactory *)TouchInputMapping::TouchInputMapping(this);
  ClientInputMappingFactory::_addInvariantGamePlayTouchControls(v2, v1);
  v3 = (ClientInputMappingFactory *)((char *)v1 + 12);
  v152 = 26;
  v151 = 0;
  v150 = 3;
  v4 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[23],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (__int64 *)((char *)v1 + 12),
      (int)"button.left",
      (int)"binding.area.move_left",
      "binding.bool.true",
      (int)&unk_27CA864,
      &v152,
      (int *)&unk_262C64C,
      &flt_262C650,
      (int *)&flt_262C650,
      &v151,
      &v150,
      (int)"??Y?");
    v5 = *((_DWORD *)v1 + 4);
  }
  else
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[23],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (int)v1 + 12,
      v4,
      "button.left",
      "binding.area.move_left",
    v5 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v5;
  v149 = 78;
  v148 = 0;
  v147 = 3;
  if ( v5 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[13],char const(&)[24],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (int)"button.right",
      (int)"binding.area.move_right",
      &v149,
      &v148,
      &v147,
    v6 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[13],char const(&)[24],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      v5,
      "button.right",
      "binding.area.move_right",
    v6 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v6;
  v146 = 52;
  v145 = 0;
  v144 = 3;
  if ( v6 == *((_DWORD *)v1 + 5) )
      (int)"button.down",
      (int)"binding.area.move_down",
      &v146,
      &v145,
      &v144,
    v7 = *((_DWORD *)v1 + 4);
      v6,
      "button.down",
      "binding.area.move_down",
    v7 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v7;
  v143 = 1;
  v142 = 3;
  if ( v7 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[17],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      (int)"button.up_ignore",
      (int)"binding.area.move_up",
      (int *)"",
      &v143,
      &v142,
    v8 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[17],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      v7,
      "button.up_ignore",
      "binding.area.move_up",
    v8 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v8;
  v141 = 218;
  v140 = 64;
  v138 = 18;
  v139 = 18;
  v137 = 0;
  v136 = 4;
  if ( v8 == *((_DWORD *)v1 + 5) )
    v12 = *(_DWORD *)v3;
    v13 = (v8 - *(_DWORD *)v3) >> 2;
    v14 = 678152731 * v13;
    if ( v8 == *(_DWORD *)v3 )
      v14 = 1;
    v15 = v14 + 678152731 * v13;
    v16 = v15;
    if ( v15 > 0x35E50D7 )
      v16 = 56512727;
    if ( v15 < v14 )
    if ( v16 )
    {
      if ( v16 >= 0x35E50D8 )
        sub_119C874();
      v17 = (char *)operator new(76 * v16);
      v101 = v16;
      v103 = (__int64 *)((char *)v1 + 12);
      v8 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v12 = *(_QWORD *)((char *)v1 + 12);
    }
    else
      v101 = 0;
      v17 = 0;
    sub_DE1E08(
      (int)&v17[v8 - v12],
      "button.sneak_toggle",
      "binding.area.sneak",
      "binding.bool.sneaking",
      (int)&unk_27CA884,
      &v141,
      &v140,
      (float *)&v139,
      &v138,
      &v137,
      &v136,
      (int)&unk_262C65C);
    v19 = *(_QWORD *)((char *)v1 + 12) >> 32;
    v18 = *(_QWORD *)((char *)v1 + 12);
    if ( v18 == v19 )
      v10 = (int)(v17 + 76);
      v20 = (int)(v17 - 76);
      do
      {
        v21 = v18 + 12;
        *(_DWORD *)(v20 + 76) = *(_DWORD *)v18;
        v20 += 76;
        *(_DWORD *)v18 = &unk_28898CC;
        *(_DWORD *)(v20 + 4) = *(_DWORD *)(v18 + 4);
        *(_DWORD *)(v18 + 4) = &unk_28898CC;
        *(_DWORD *)(v20 + 8) = *(_DWORD *)(v18 + 8);
        v22 = v20 + 12;
        *(_DWORD *)(v18 + 8) = &unk_28898CC;
        v18 += 76;
        v23 = *(_DWORD *)v21;
        v24 = *(_DWORD *)(v21 + 4);
        v25 = *(_DWORD *)(v21 + 8);
        v26 = *(_DWORD *)(v21 + 12);
        v27 = *(_DWORD *)(v21 + 16);
        v21 += 20;
        *(_DWORD *)v22 = v23;
        *(_DWORD *)(v22 + 4) = v24;
        *(_DWORD *)(v22 + 8) = v25;
        *(_DWORD *)(v22 + 12) = v26;
        *(_DWORD *)(v22 + 16) = v27;
        v28 = v20 + 32;
        v29 = *(_DWORD *)v21;
        v30 = *(_DWORD *)(v21 + 4);
        v31 = *(_DWORD *)(v21 + 8);
        v32 = *(_DWORD *)(v21 + 12);
        v33 = *(_DWORD *)(v21 + 16);
        *(_DWORD *)v28 = v29;
        *(_DWORD *)(v28 + 4) = v30;
        *(_DWORD *)(v28 + 8) = v31;
        *(_DWORD *)(v28 + 12) = v32;
        *(_DWORD *)(v28 + 16) = v33;
        v34 = v20 + 52;
        v35 = *(_DWORD *)(v21 + 4);
        v36 = *(_DWORD *)(v21 + 8);
        v37 = *(_DWORD *)(v21 + 12);
        v38 = *(_DWORD *)(v21 + 16);
        *(_DWORD *)v34 = *(_DWORD *)v21;
        *(_DWORD *)(v34 + 4) = v35;
        *(_DWORD *)(v34 + 8) = v36;
        *(_DWORD *)(v34 + 12) = v37;
        *(_DWORD *)(v34 + 16) = v38;
        *(_BYTE *)(v20 + 72) = *(_BYTE *)(v21 + 20);
      }
      while ( v18 != v19 );
      v39 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v18 = *(_QWORD *)((char *)v1 + 12);
      v10 = v20 + 152;
      if ( v18 != v39 )
        do
        {
          v46 = *(_DWORD *)(v18 + 8);
          v47 = (void *)(v46 - 12);
          if ( (int *)(v46 - 12) != &dword_28898C0 )
          {
            v40 = (unsigned int *)(v46 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
            }
            else
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v47);
          }
          v48 = *(_DWORD *)(v18 + 4);
          v49 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            v42 = (unsigned int *)(v48 - 4);
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v49);
          v50 = (int *)(*(_DWORD *)v18 - 12);
          if ( v50 != &dword_28898C0 )
            v44 = (unsigned int *)(*(_DWORD *)v18 - 4);
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
              v45 = (*v44)--;
            if ( v45 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v50);
          v18 += 76;
        }
        while ( v18 != v39 );
        v18 = *(_DWORD *)v103;
    if ( v18 )
      operator delete((void *)v18);
    *((_DWORD *)v1 + 3) = v17;
    *((_DWORD *)v1 + 4) = v10;
    v11 = (int)&v17[76 * v101];
    *((_DWORD *)v1 + 5) = v11;
      v8,
    v9 = *((_DWORD *)v1 + 4);
    v103 = (__int64 *)((char *)v1 + 12);
    v10 = v9 + 76;
    *((_DWORD *)v1 + 4) = v9 + 76;
    v11 = *((_DWORD *)v1 + 5);
  v135 = 218;
  v134 = 82;
  v132 = 18;
  v133 = 18;
  v131 = 0;
  v130 = 4;
  if ( v10 == v11 )
    v54 = *(_DWORD *)v103;
    v55 = (v10 - *(_DWORD *)v103) >> 2;
    v56 = 678152731 * v55;
    if ( v10 == *(_DWORD *)v103 )
      v56 = 1;
    v57 = v56 + 678152731 * v55;
    v58 = v57;
    if ( v57 > 0x35E50D7 )
      v58 = 56512727;
    if ( v57 < v56 )
    if ( v58 )
      if ( v58 >= 0x35E50D8 )
      v102 = v58;
      v59 = (char *)operator new(76 * v58);
      v10 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v54 = *(_QWORD *)((char *)v1 + 12);
      v102 = 0;
      v59 = 0;
    sub_DE2064(
      (int)&v59[v10 - v54],
      "binding.bool.not_sneaking",
      (int)&unk_27CA8A4,
      &v135,
      &v134,
      (float *)&v133,
      &v132,
      &v131,
      &v130,
    v61 = *(_QWORD *)((char *)v1 + 12) >> 32;
    v60 = *(_QWORD *)((char *)v1 + 12);
    if ( v60 == v61 )
      v52 = (int)(v59 + 76);
      v82 = v102;
      v62 = (int)(v59 - 76);
        v63 = v60 + 12;
        *(_DWORD *)(v62 + 76) = *(_DWORD *)v60;
        v62 += 76;
        *(_DWORD *)v60 = &unk_28898CC;
        *(_DWORD *)(v62 + 4) = *(_DWORD *)(v60 + 4);
        *(_DWORD *)(v60 + 4) = &unk_28898CC;
        *(_DWORD *)(v62 + 8) = *(_DWORD *)(v60 + 8);
        v64 = v62 + 12;
        *(_DWORD *)(v60 + 8) = &unk_28898CC;
        v60 += 76;
        v65 = *(_DWORD *)v63;
        v66 = *(_DWORD *)(v63 + 4);
        v67 = *(_DWORD *)(v63 + 8);
        v68 = *(_DWORD *)(v63 + 12);
        v69 = *(_DWORD *)(v63 + 16);
        v63 += 20;
        *(_DWORD *)v64 = v65;
        *(_DWORD *)(v64 + 4) = v66;
        *(_DWORD *)(v64 + 8) = v67;
        *(_DWORD *)(v64 + 12) = v68;
        *(_DWORD *)(v64 + 16) = v69;
        v70 = v62 + 32;
        v71 = *(_DWORD *)v63;
        v72 = *(_DWORD *)(v63 + 4);
        v73 = *(_DWORD *)(v63 + 8);
        v74 = *(_DWORD *)(v63 + 12);
        v75 = *(_DWORD *)(v63 + 16);
        *(_DWORD *)v70 = v71;
        *(_DWORD *)(v70 + 4) = v72;
        *(_DWORD *)(v70 + 8) = v73;
        *(_DWORD *)(v70 + 12) = v74;
        *(_DWORD *)(v70 + 16) = v75;
        v76 = v62 + 52;
        v77 = *(_DWORD *)(v63 + 4);
        v78 = *(_DWORD *)(v63 + 8);
        v79 = *(_DWORD *)(v63 + 12);
        v80 = *(_DWORD *)(v63 + 16);
        *(_DWORD *)v76 = *(_DWORD *)v63;
        *(_DWORD *)(v76 + 4) = v77;
        *(_DWORD *)(v76 + 8) = v78;
        *(_DWORD *)(v76 + 12) = v79;
        *(_DWORD *)(v76 + 16) = v80;
        *(_BYTE *)(v62 + 72) = *(_BYTE *)(v63 + 20);
      while ( v60 != v61 );
      v81 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v60 = *(_QWORD *)((char *)v1 + 12);
      v52 = v62 + 152;
      if ( v60 == v81 )
        v82 = v102;
      else
          v89 = *(_DWORD *)(v60 + 8);
          v90 = (void *)(v89 - 12);
          if ( (int *)(v89 - 12) != &dword_28898C0 )
            v83 = (unsigned int *)(v89 - 4);
                v84 = __ldrex(v83);
              while ( __strex(v84 - 1, v83) );
              v84 = (*v83)--;
            if ( v84 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v90);
          v91 = *(_DWORD *)(v60 + 4);
          v92 = (void *)(v91 - 12);
          if ( (int *)(v91 - 12) != &dword_28898C0 )
            v85 = (unsigned int *)(v91 - 4);
                v86 = __ldrex(v85);
              while ( __strex(v86 - 1, v85) );
              v86 = (*v85)--;
            if ( v86 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v92);
          v93 = (int *)(*(_DWORD *)v60 - 12);
          if ( v93 != &dword_28898C0 )
            v87 = (unsigned int *)(*(_DWORD *)v60 - 4);
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
              v88 = (*v87)--;
            if ( v88 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v93);
          v60 += 76;
        while ( v60 != v81 );
        v60 = *(_DWORD *)v103;
    if ( v60 )
      operator delete((void *)v60);
    *((_DWORD *)v1 + 3) = v59;
    *((_DWORD *)v1 + 4) = v52;
    v53 = (int)&v59[76 * v82];
    v51 = v103;
    *((_DWORD *)v1 + 5) = v53;
      v10,
    v52 = *((_DWORD *)v1 + 4) + 76;
    v53 = *((_DWORD *)v1 + 5);
  v129 = 133;
  v128 = 0;
  v127 = 3;
  if ( v52 == v53 )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[14],char const(&)[26],char const(&)[31],ButtonColors const&,int const&,int,int const&,int const&,bool,int,float const&>(
      v51,
      (int)"button.upleft",
      (int)"binding.area.move_up_left",
      "binding.bool.is_moving_forward",
      &v129,
      &v128,
      &v127,
    v94 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[14],char const(&)[26],char const(&)[31],ButtonColors const&,int const&,int,int const&,int const&,bool,int,float const&>(
      (int)v51,
      v52,
      "button.upleft",
      "binding.area.move_up_left",
    v94 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v94;
  v126 = 26;
  v125 = 133;
  v124 = 0;
  v123 = 3;
  if ( v94 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[15],char const(&)[27],char const(&)[31],ButtonColors const&,int,int,int const&,int const&,bool,int,float const&>(
      (int)"button.upright",
      (int)"binding.area.move_up_right",
      &v126,
      &v125,
      &v124,
      &v123,
    v95 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[15],char const(&)[27],char const(&)[31],ButtonColors const&,int,int,int const&,int const&,bool,int,float const&>(
      v94,
      "button.upright",
      "binding.area.move_up_right",
    v95 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v95;
  v122 = 104;
  v121 = 0;
  if ( v95 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[18],char const(&)[30],ButtonColors const&,int,int const&,int const&,int const&,bool>(
      "button.jump",
      "binding.area.jump",
      "binding.bool.show_jump_button",
      &v122,
      &v121);
    v96 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[18],char const(&)[30],ButtonColors const&,int,int const&,int const&,int const&,bool>(
      v95,
    v96 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v96;
  v119 = 0;
  v120 = 0;
  v117 = 0;
  v118 = 0;
  v116 = 1;
  v114 = 1;
  v97 = *((_DWORD *)v1 + 5);
  v115 = 3;
  if ( v96 == v97 )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[10],char const(&)[31],char const(&)[18],ButtonColors const&,int,int,int,int,bool,int,float const&,bool>(
      (int)"button.up",
      (int)"binding.area.move_up_invisible",
      &v120,
      &v119,
      (float *)&v118,
      &v117,
      &v116,
      &v115,
      (int)"??Y?",
      &v114);
    v98 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[10],char const(&)[31],char const(&)[18],ButtonColors const&,int,int,int,int,bool,int,float const&,bool>(
      v96,
      "button.up",
      "binding.area.move_up_invisible",
    v98 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v98;
  v112 = 0;
  v113 = 0;
  v110 = 0;
  v111 = 0;
  v109 = 1;
  if ( v98 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[25],char const(&)[27],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      "button.hide_sneak_button",
      "binding.area.disable_sneak",
      &v113,
      &v112,
      (float *)&v111,
      &v110,
      &v109);
    v99 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[25],char const(&)[27],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v98,
    v99 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v99;
  v107 = 0;
  v108 = 0;
  v105 = 0;
  v106 = 0;
  v104 = 0;
  if ( v99 == *((_DWORD *)v1 + 5) )
    result = std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
               v51,
               "no_binding",
               "binding.area.dpad_no_turn_interact",
               "binding.bool.true",
               (int)&unk_27CA864,
               &v108,
               &v107,
               (float *)&v106,
               &v105,
               &v104);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v99,
      "no_binding",
      "binding.area.dpad_no_turn_interact",
      &v108,
      &v107,
      (float *)&v106,
      &v105,
      &v104);
    result = (char *)(*((_DWORD *)v1 + 4) + 76);
    *((_DWORD *)v1 + 4) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createScreenChordMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r10@1
  char *v2; // r0@1
  __int64 v3; // r0@1
  char *v4; // r5@4
  int v5; // r7@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int *v8; // r0@14
  char *v9; // r0@19
  void *v10; // r0@20
  void *v11; // r0@21
  char *v12; // r0@22
  __int64 v13; // r0@22
  char *v14; // r5@25
  int v15; // r7@25
  unsigned int *v16; // r2@27
  signed int v17; // r1@29
  int *v18; // r0@35
  char *v19; // r0@40
  void *v20; // r0@41
  void *v21; // r0@42
  char *v22; // r0@43
  __int64 v23; // r0@43
  char *v24; // r5@46
  int v25; // r7@46
  unsigned int *v26; // r2@48
  signed int v27; // r1@50
  int *v28; // r0@56
  char *v29; // r0@61
  void *v30; // r0@62
  void *v31; // r0@63
  char *v32; // r0@64
  __int64 v33; // r0@64
  char *v34; // r4@67
  int v35; // r6@67
  unsigned int *v36; // r2@69
  signed int v37; // r1@71
  int *v38; // r0@77
  char *v39; // r0@82
  void *v40; // r0@83
  void *v41; // r0@84
  unsigned int *v42; // r2@86
  signed int v43; // r1@88
  unsigned int *v44; // r2@90
  signed int v45; // r1@92
  unsigned int *v46; // r2@94
  signed int v47; // r1@96
  unsigned int *v48; // r2@98
  signed int v49; // r1@100
  unsigned int *v50; // r2@102
  signed int v51; // r1@104
  unsigned int *v52; // r2@106
  signed int v53; // r1@108
  unsigned int *v54; // r2@110
  signed int v55; // r1@112
  unsigned int *v56; // r2@114
  signed int v57; // r1@116
  unsigned int *v58; // r2@118
  signed int v59; // r1@120
  unsigned int *v60; // r2@122
  signed int v61; // r1@124
  unsigned int *v62; // r2@126
  signed int v63; // r1@128
  unsigned int *v64; // r2@130
  signed int v65; // r1@132
  int v66; // [sp+8h] [bp-B0h]@64
  int v67; // [sp+Ch] [bp-ACh]@64
  char v68; // [sp+10h] [bp-A8h]@64
  char *v69; // [sp+14h] [bp-A4h]@64
  char *v70; // [sp+18h] [bp-A0h]@64
  char *v71; // [sp+1Ch] [bp-9Ch]@64
  char *v72; // [sp+20h] [bp-98h]@64
  int v73; // [sp+2Ch] [bp-8Ch]@43
  int v74; // [sp+30h] [bp-88h]@43
  char v75; // [sp+34h] [bp-84h]@43
  char *v76; // [sp+38h] [bp-80h]@43
  char *v77; // [sp+3Ch] [bp-7Ch]@43
  char *v78; // [sp+40h] [bp-78h]@43
  char *v79; // [sp+44h] [bp-74h]@43
  int v80; // [sp+50h] [bp-68h]@22
  int v81; // [sp+54h] [bp-64h]@22
  char v82; // [sp+58h] [bp-60h]@22
  char *v83; // [sp+5Ch] [bp-5Ch]@22
  char *v84; // [sp+60h] [bp-58h]@22
  char *v85; // [sp+64h] [bp-54h]@22
  char *v86; // [sp+68h] [bp-50h]@22
  int v87; // [sp+74h] [bp-44h]@1
  int v88; // [sp+78h] [bp-40h]@1
  char v89; // [sp+7Ch] [bp-3Ch]@1
  char *v90; // [sp+80h] [bp-38h]@1
  char *v91; // [sp+84h] [bp-34h]@1
  char *v92; // [sp+88h] [bp-30h]@1
  char *v93; // [sp+8Ch] [bp-2Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  ClientInputMappingFactory::_addInvariantChordControls(0, (int)this);
  sub_119C884((void **)&v90, "button.menu_auto_place");
  sub_119C884((void **)&v87, "button.shift");
  sub_119C884((void **)&v88, "button.menu_select");
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v2 = (char *)operator new(8u);
  v91 = v2;
  v93 = v2 + 8;
  v92 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v87,
                  (int)&v89,
                  (int)v2);
  v3 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>>::_M_emplace_back_aux<ChordButtonMapping>(
      v1,
      (int)&v90);
  }
  else
    *(_DWORD *)v3 = v90;
    v90 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 4) = v91;
    v91 = 0;
    HIDWORD(v3) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v92;
    v92 = (char *)HIDWORD(v3);
    HIDWORD(v3) = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v93;
    v93 = (char *)HIDWORD(v3);
    *((_DWORD *)v1 + 1) = v3 + 16;
  v5 = (int)v92;
  v4 = v91;
  if ( v91 != v92 )
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      v4 += 4;
    }
    while ( v4 != (char *)v5 );
    v4 = v91;
  if ( v4 )
    operator delete(v4);
  v9 = v90 - 12;
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v90 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v88 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v87 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v83, "button.menu_auto_place");
  sub_119C884((void **)&v80, "button.shift");
  sub_119C884((void **)&v81, "button.menu_secondary_select");
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v12 = (char *)operator new(8u);
  v84 = v12;
  v86 = v12 + 8;
  v85 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v80,
                  (int)&v82,
                  (int)v12);
  v13 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v13 == HIDWORD(v13) )
      (int)&v83);
    *(_DWORD *)v13 = v83;
    v83 = (char *)&unk_28898CC;
    *(_DWORD *)(v13 + 4) = 0;
    *(_DWORD *)(v13 + 8) = 0;
    *(_DWORD *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 4) = v84;
    v84 = 0;
    HIDWORD(v13) = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v85;
    v85 = (char *)HIDWORD(v13);
    HIDWORD(v13) = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v86;
    v86 = (char *)HIDWORD(v13);
    *((_DWORD *)v1 + 1) = v13 + 16;
  v15 = (int)v85;
  v14 = v84;
  if ( v84 != v85 )
      v18 = (int *)(*(_DWORD *)v14 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v14 += 4;
    while ( v14 != (char *)v15 );
    v14 = v84;
  if ( v14 )
    operator delete(v14);
  v19 = v83 - 12;
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v83 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v81 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v80 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v76, "button.menu_inventory_drop_all");
  sub_119C884((void **)&v73, "button.control");
  sub_119C884((void **)&v74, "button.menu_inventory_drop");
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v22 = (char *)operator new(8u);
  v77 = v22;
  v79 = v22 + 8;
  v78 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v73,
                  (int)&v75,
                  (int)v22);
  v23 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v23 == HIDWORD(v23) )
      (int)&v76);
    *(_DWORD *)v23 = v76;
    v76 = (char *)&unk_28898CC;
    *(_DWORD *)(v23 + 4) = 0;
    *(_DWORD *)(v23 + 8) = 0;
    *(_DWORD *)(v23 + 12) = 0;
    *(_DWORD *)(v23 + 4) = v77;
    v77 = 0;
    HIDWORD(v23) = *(_DWORD *)(v23 + 8);
    *(_DWORD *)(v23 + 8) = v78;
    v78 = (char *)HIDWORD(v23);
    HIDWORD(v23) = *(_DWORD *)(v23 + 12);
    *(_DWORD *)(v23 + 12) = v79;
    v79 = (char *)HIDWORD(v23);
    *((_DWORD *)v1 + 1) = v23 + 16;
  v25 = (int)v78;
  v24 = v77;
  if ( v77 != v78 )
      v28 = (int *)(*(_DWORD *)v24 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v24 += 4;
    while ( v24 != (char *)v25 );
    v24 = v77;
  if ( v24 )
    operator delete(v24);
  v29 = v76 - 12;
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v76 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v74 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v73 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  sub_119C884((void **)&v69, "button.menu_autocomplete_back");
  sub_119C884((void **)&v66, "button.shift");
  sub_119C884((void **)&v67, "button.menu_autocomplete");
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v32 = (char *)operator new(8u);
  v70 = v32;
  v72 = v32 + 8;
  v71 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v66,
                  (int)&v68,
                  (int)v32);
  v33 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v33 == HIDWORD(v33) )
      (int)&v69);
    *(_DWORD *)v33 = v69;
    v69 = (char *)&unk_28898CC;
    *(_DWORD *)(v33 + 4) = 0;
    *(_DWORD *)(v33 + 8) = 0;
    *(_DWORD *)(v33 + 12) = 0;
    *(_DWORD *)(v33 + 4) = v70;
    v70 = 0;
    HIDWORD(v33) = *(_DWORD *)(v33 + 8);
    *(_DWORD *)(v33 + 8) = v71;
    v71 = (char *)HIDWORD(v33);
    HIDWORD(v33) = *(_DWORD *)(v33 + 12);
    *(_DWORD *)(v33 + 12) = v72;
    v72 = (char *)HIDWORD(v33);
    *((_DWORD *)v1 + 1) = v33 + 16;
  v35 = (int)v71;
  v34 = v70;
  if ( v70 != v71 )
      v38 = (int *)(*(_DWORD *)v34 - 12);
      if ( v38 != &dword_28898C0 )
        v36 = (unsigned int *)(*(_DWORD *)v34 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      v34 += 4;
    while ( v34 != (char *)v35 );
    v34 = v70;
  if ( v34 )
    operator delete(v34);
  v39 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v69 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v67 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v66 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
}


void __fastcall ClientInputMappingFactory::onConfigChanged(ClientInputMappingFactory *this, const Config *a2)
{
  ClientInputMappingFactory::onConfigChanged(this, a2);
}


void __fastcall ClientInputMappingFactory::_createBoatGameControllerMapping(float a1, int a2, int a3)
{
  ClientInputMappingFactory::_createBoatGameControllerMapping(a1, a2, a3);
}


void __fastcall ClientInputMappingFactory::~ClientInputMappingFactory(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::~ClientInputMappingFactory(this);
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayDeviceButtonMapping(ClientInputMappingFactory *this)
{
  unsigned __int64 *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+4h] [bp-34h]@1
  int v9; // [sp+8h] [bp-30h]@1
  int v10; // [sp+Ch] [bp-2Ch]@1

  v1 = (unsigned __int64 *)this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  sub_119C884((void **)&v8, "button.pause");
  sub_119C854(&v9, &v8);
  v10 = 0;
  std::vector<DeviceButtonMapping,std::allocator<DeviceButtonMapping>>::_M_emplace_back_aux<DeviceButtonMapping>(
    v1,
    (int)&v9);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
}


void __fastcall ClientInputMappingFactory::_createInputMappingTemplates(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  __int64 v2; // kr00_8@1
  int *v3; // r1@2
  _DWORD *v4; // r6@2
  unsigned int *v5; // r2@3
  signed int v6; // r7@5
  int *v7; // r4@9
  int *v8; // r0@10
  void *v9; // r4@12
  void *v10; // r6@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  int *v13; // r0@22
  void *v14; // r4@27
  void *v15; // r6@27
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  int *v18; // r0@37
  void *v19; // r4@42
  void *v20; // r6@42
  unsigned int *v21; // r2@44
  signed int v22; // r1@46
  int *v23; // r0@52
  void *v24; // r4@63
  void *v25; // r6@63
  unsigned int *v26; // r2@65
  signed int v27; // r1@67
  int *v28; // r0@73
  void *v29; // r4@78
  void *v30; // r6@78
  unsigned int *v31; // r2@80
  signed int v32; // r1@82
  int *v33; // r0@88
  void *v34; // r4@93
  void *v35; // r6@93
  unsigned int *v36; // r2@95
  signed int v37; // r1@97
  int *v38; // r0@103
  void *v39; // r4@108
  void *v40; // r6@108
  unsigned int *v41; // r2@110
  signed int v42; // r1@112
  int *v43; // r0@118
  void *v44; // r4@123
  void *v45; // r6@123
  unsigned int *v46; // r2@125
  signed int v47; // r1@127
  int *v48; // r0@133
  void *v49; // r4@138
  void *v50; // r6@138
  unsigned int *v51; // r2@140
  signed int v52; // r1@142
  int *v53; // r0@148
  void *v54; // r4@153
  void *v55; // r6@153
  unsigned int *v56; // r2@155
  signed int v57; // r1@157
  int *v58; // r0@163
  void *v59; // r4@168
  void *v60; // r6@168
  unsigned int *v61; // r2@170
  signed int v62; // r1@172
  int *v63; // r0@178
  void *v64; // r4@183
  void *v65; // r6@183
  unsigned int *v66; // r2@185
  signed int v67; // r1@187
  int *v68; // r0@193
  void *v69; // r4@198
  void *v70; // r6@198
  unsigned int *v71; // r2@200
  signed int v72; // r1@202
  int *v73; // r0@208
  char v74; // [sp+24h] [bp+8h]@12
  char v75; // [sp+2Ch] [bp+10h]@12
  char v76; // [sp+34h] [bp+18h]@12
  char v77; // [sp+3Ch] [bp+20h]@12
  char v78; // [sp+44h] [bp+28h]@12
  char v79; // [sp+4Ch] [bp+30h]@12
  char v80; // [sp+54h] [bp+38h]@12
  char v81; // [sp+5Ch] [bp+40h]@12
  char v82; // [sp+64h] [bp+48h]@12
  char v83; // [sp+6Ch] [bp+50h]@12
  unsigned __int64 v84[37]; // [sp+74h] [bp+58h]@12
  unsigned __int64 v85[37]; // [sp+1A0h] [bp+184h]@12
  unsigned __int64 v86[37]; // [sp+2CCh] [bp+2B0h]@12
  unsigned __int64 v87[37]; // [sp+3F8h] [bp+3DCh]@12
  unsigned __int64 v88[37]; // [sp+524h] [bp+508h]@12
  unsigned __int64 v89[37]; // [sp+650h] [bp+634h]@12
  unsigned __int64 v90[37]; // [sp+77Ch] [bp+760h]@12
  unsigned __int64 v91[37]; // [sp+8A8h] [bp+88Ch]@12
  unsigned __int64 v92[37]; // [sp+9D4h] [bp+9B8h]@12
  unsigned __int64 v93[37]; // [sp+B00h] [bp+AE4h]@12
  void *ptr; // [sp+C2Ch] [bp+C10h]@12
  void *v95; // [sp+C30h] [bp+C14h]@12
  int v96; // [sp+C34h] [bp+C18h]@12
  void *v97; // [sp+C38h] [bp+C1Ch]@12
  void *v98; // [sp+C3Ch] [bp+C20h]@27
  void *v99; // [sp+C44h] [bp+C28h]@12
  void *v100; // [sp+C48h] [bp+C2Ch]@42
  unsigned __int64 v101[6]; // [sp+C50h] [bp+C34h]@12
  unsigned __int64 v102[6]; // [sp+C84h] [bp+C68h]@12
  void *v103; // [sp+CB4h] [bp+C98h]@12
  int v104; // [sp+CB8h] [bp+C9Ch]@12
  int v105; // [sp+CBCh] [bp+CA0h]@12
  void *v106; // [sp+CC0h] [bp+CA4h]@12
  int v107; // [sp+CC4h] [bp+CA8h]@59
  void *v108; // [sp+CCCh] [bp+CB0h]@12
  int v109; // [sp+CD0h] [bp+CB4h]@61
  void *v110; // [sp+CD8h] [bp+CBCh]@12
  void *v111; // [sp+CDCh] [bp+CC0h]@12
  int v112; // [sp+CE0h] [bp+CC4h]@12
  void *v113; // [sp+CE4h] [bp+CC8h]@12
  void *v114; // [sp+CE8h] [bp+CCCh]@78
  void *v115; // [sp+CF0h] [bp+CD4h]@12
  void *v116; // [sp+CF4h] [bp+CD8h]@93
  void *v117; // [sp+CFCh] [bp+CE0h]@12
  void *v118; // [sp+D00h] [bp+CE4h]@108
  unsigned __int64 v119[7]; // [sp+D08h] [bp+CECh]@12
  unsigned __int64 v120[6]; // [sp+D40h] [bp+D24h]@12
  unsigned __int64 v121[6]; // [sp+D74h] [bp+D58h]@12
  unsigned __int64 v122[6]; // [sp+DA8h] [bp+D8Ch]@12
  unsigned __int64 v123[6]; // [sp+DDCh] [bp+DC0h]@12
  unsigned __int64 v124[6]; // [sp+E10h] [bp+DF4h]@12
  unsigned __int64 v125[6]; // [sp+E44h] [bp+E28h]@12
  unsigned __int64 v126[6]; // [sp+E78h] [bp+E5Ch]@12
  unsigned __int64 v127[6]; // [sp+EACh] [bp+E90h]@12
  unsigned __int64 v128[6]; // [sp+EE0h] [bp+EC4h]@12
  unsigned __int64 v129[6]; // [sp+F14h] [bp+EF8h]@12
  unsigned __int64 v130[6]; // [sp+F48h] [bp+F2Ch]@12
  unsigned __int64 v131[6]; // [sp+F7Ch] [bp+F60h]@12
  unsigned __int64 v132[6]; // [sp+FB0h] [bp+F94h]@12
  unsigned __int64 v133[51]; // [sp+FE4h] [bp+FC8h]@12
  unsigned __int64 v134[15]; // [sp+1180h] [bp+1164h]@12
  _DWORD v135[11]; // [sp+11F8h] [bp+11DCh]@1
  void *v136; // [sp+1224h] [bp+1208h]@1
  void *v137; // [sp+1228h] [bp+120Ch]@1
  int v138; // [sp+122Ch] [bp+1210h]@1
  int v139; // [sp+1230h] [bp+1214h]@1
  void *v140; // [sp+125Ch] [bp+1240h]@1
  void *v141; // [sp+1260h] [bp+1244h]@1
  int v142; // [sp+1264h] [bp+1248h]@1
  int v143; // [sp+1268h] [bp+124Ch]@1
  void *v144; // [sp+1294h] [bp+1278h]@1
  void *v145; // [sp+1298h] [bp+127Ch]@1
  int v146; // [sp+129Ch] [bp+1280h]@1
  char v147; // [sp+12A0h] [bp+1284h]@1
  void *v148; // [sp+12CCh] [bp+12B0h]@1
  void *v149; // [sp+12D0h] [bp+12B4h]@1
  int v150; // [sp+12D4h] [bp+12B8h]@1
  int v151; // [sp+12D8h] [bp+12BCh]@1
  void *v152; // [sp+1304h] [bp+12E8h]@1
  void *v153; // [sp+1308h] [bp+12ECh]@1
  int v154; // [sp+130Ch] [bp+12F0h]@1
  int v155; // [sp+1310h] [bp+12F4h]@1
  void *v156; // [sp+133Ch] [bp+1320h]@1
  void *v157; // [sp+1340h] [bp+1324h]@1
  int v158; // [sp+1344h] [bp+1328h]@1
  signed int v159; // [sp+1348h] [bp+132Ch]@12
  int v160; // [sp+134Ch] [bp+1330h]@2

  v1 = this;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  _aeabi_memclr8(&v155, 36);
  ClientInputMappingFactory::_createBedKeyboardAndMouseMapping((int)v1, (int)&v156, (int)&v155);
  v152 = 0;
  v153 = 0;
  v154 = 0;
  _aeabi_memclr8(&v151, 36);
  ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping((int)v1, (int)&v152, (int)&v151);
  v148 = 0;
  v149 = 0;
  v150 = 0;
  _aeabi_memclr8(&v147, 36);
  ClientInputMappingFactory::_createBoatKeyboardAndMouseMapping((int)v1, (int)&v148, (int)&v147);
  v144 = 0;
  v145 = 0;
  v146 = 0;
  _aeabi_memclr8(&v143, 36);
  ClientInputMappingFactory::_createNormalGamePlayKeyboardAndMouseMapping((int)v1, (int)&v144, (int)&v143);
  v140 = 0;
  v141 = 0;
  v142 = 0;
  _aeabi_memclr8(&v139, 36);
  ClientInputMappingFactory::_createRideableKeyboardAndMouseMapping((int)v1, (int)&v140, (int)&v139);
  v136 = 0;
  v137 = 0;
  v138 = 0;
  _aeabi_memclr8(v135, 36);
  ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping((int)v1, (int)&v136, (int)v135);
  v2 = *(_QWORD *)v135;
  if ( v135[1] != v135[0] )
  {
    v3 = &v160;
    v4 = (_DWORD *)v135[0];
    do
    {
      v8 = (int *)(*v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*v4 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          v7 = v3;
          j_j_j_j_j__ZdlPv_9_1(v8);
          v3 = v7;
      }
      v4 += 2;
    }
    while ( v4 != (_DWORD *)HIDWORD(v2) );
  }
  v135[1] = v2;
  ClientInputMappingFactory::_createScreenTouchMapping((ClientInputMappingFactory *)((char *)&v134[7] + 4));
  ClientInputMappingFactory::_createNormalGamePlayTouchMapping((ClientInputMappingFactory *)v134);
  ClientInputMappingFactory::_createFlyingTouchMapping((ClientInputMappingFactory *)&v133[44]);
  ClientInputMappingFactory::_createBoatTouchMapping((ClientInputMappingFactory *)((char *)&v133[36] + 4));
  ClientInputMappingFactory::_createMinecartTouchMapping((ClientInputMappingFactory *)&v133[29]);
  ClientInputMappingFactory::_createBedTouchMapping((ClientInputMappingFactory *)((char *)&v133[21] + 4));
  ClientInputMappingFactory::_createRideableTouchMapping((ClientInputMappingFactory *)&v133[14]);
  TouchInputMapping::TouchInputMapping((TouchInputMapping *)((char *)&v133[6] + 4));
  ClientInputMappingFactory::_createScreenGameControllerMapping((int)v133, (int)v1, 0);
  ClientInputMappingFactory::_createGazeMouseControllerMapping((int)v132, (int)v1, 0);
  ClientInputMappingFactory::_createGazeScreenGameControllerMapping((int)v131, (int)v1, 0);
  ClientInputMappingFactory::_createBoatGameControllerMapping(COERCE_FLOAT(v130), (int)v1, 0);
  ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(COERCE_FLOAT(v129), (int)v1, 0);
  ClientInputMappingFactory::_createFlyingGameControllerMapping(COERCE_FLOAT(v128), (int)v1, 0);
  ClientInputMappingFactory::_createRideableGameControllerMapping(COERCE_FLOAT(v127), (int)v1, 0);
  ClientInputMappingFactory::_createScreenGameControllerMapping((int)v126, (int)v1, 1);
  ClientInputMappingFactory::_createGazeMouseControllerMapping((int)v125, (int)v1, 1);
  ClientInputMappingFactory::_createGazeScreenGameControllerMapping((int)v124, (int)v1, 1);
  ClientInputMappingFactory::_createBoatGameControllerMapping(COERCE_FLOAT(v123), (int)v1, 1);
  ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(COERCE_FLOAT(v122), (int)v1, 1);
  ClientInputMappingFactory::_createFlyingGameControllerMapping(COERCE_FLOAT(v121), (int)v1, 1);
  ClientInputMappingFactory::_createRideableGameControllerMapping(COERCE_FLOAT(v120), (int)v1, 1);
  _aeabi_memclr8(v119, 48);
  ClientInputMappingFactory::_createScreenTestAutoInputMapping((ClientInputMappingFactory *)&v117);
  ClientInputMappingFactory::_createNormalGamePlayTestAutoInputMapping((ClientInputMappingFactory *)&v115);
  ClientInputMappingFactory::_createBoatTestAutoInputMapping((ClientInputMappingFactory *)&v113);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v159 = 31;
  std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[12],ActionEvent::{unnamed type#1}>(
    (__int64 *)&v110,
    "button.chat",
    &v159);
  ClientInputMappingFactory::_createScreenChordMapping((ClientInputMappingFactory *)&v108);
  ClientInputMappingFactory::_createNormalGamePlayChordMapping((ClientInputMappingFactory *)&v106);
  v103 = 0;
  v104 = 0;
  v105 = 0;
  ClientInputMappingFactory::_createGGVMapping((ClientInputMappingFactory *)v102);
  _aeabi_memclr8(v101, 48);
  ClientInputMappingFactory::_createScreenDeviceButtonMapping((ClientInputMappingFactory *)&v99);
  ClientInputMappingFactory::_createNormalGamePlayDeviceButtonMapping((ClientInputMappingFactory *)&v97);
  ptr = 0;
  v95 = 0;
  v96 = 0;
  InputMapping::InputMapping(
    (int)v93,
    (unsigned __int64 *)&v152,
    (unsigned __int64 *)&v151,
    (unsigned __int64 *)((char *)&v134[7] + 4),
    v133,
    v126,
    v102,
    (__int64 *)&v117,
    (unsigned __int64 *)&v108,
    (__int64 *)&v99);
    (int)v92,
    v132,
    v125,
    (int)v91,
    v131,
    v124,
    (int)v90,
    (unsigned __int64 *)&v144,
    (unsigned __int64 *)&v143,
    v134,
    v129,
    v122,
    (__int64 *)&v115,
    (unsigned __int64 *)&v106,
    (__int64 *)&v97);
    (int)v89,
    &v133[44],
    v128,
    v121,
    (int)v88,
    (unsigned __int64 *)&v148,
    (unsigned __int64 *)&v139,
    (unsigned __int64 *)((char *)&v133[36] + 4),
    v130,
    v123,
    (__int64 *)&v113,
    (int)v87,
    (unsigned __int64 *)&v156,
    (unsigned __int64 *)&v155,
    (unsigned __int64 *)((char *)&v133[21] + 4),
    (int)v86,
    (unsigned __int64 *)&v140,
    &v133[29],
    v127,
    v120,
    (int)v85,
    &v133[14],
    (int)v84,
    (unsigned __int64 *)&v136,
    (unsigned __int64 *)v135,
    (unsigned __int64 *)((char *)&v133[6] + 4),
    v119,
    v101,
    (unsigned __int64 *)&v103,
    (__int64 *)&ptr);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[7],InputMapping&>(
    &v83,
    (int)v1 + 32,
    "screen",
    v93);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[14],InputMapping&>(
    &v82,
    "screenVRMouse",
    v92);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[21],InputMapping&>(
    &v81,
    "screenGazeController",
    v91);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[15],InputMapping&>(
    &v80,
    "gamePlayNormal",
    v90);
    &v79,
    "gamePlayFlying",
    v89);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[16],InputMapping&>(
    &v78,
    "gamePlayBoating",
    v88);
    &v77,
    "gamePlayRiding",
    v85);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[10],InputMapping&>(
    &v76,
    "screenBed",
    v87);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[17],InputMapping&>(
    &v75,
    "gamePlayMinecart",
    v86);
  std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[20],InputMapping&>(
    &v74,
    "screenTextInputOnly",
    v84);
  InputMapping::~InputMapping((InputMapping *)v84);
  InputMapping::~InputMapping((InputMapping *)v85);
  InputMapping::~InputMapping((InputMapping *)v86);
  InputMapping::~InputMapping((InputMapping *)v87);
  InputMapping::~InputMapping((InputMapping *)v88);
  InputMapping::~InputMapping((InputMapping *)v89);
  InputMapping::~InputMapping((InputMapping *)v90);
  InputMapping::~InputMapping((InputMapping *)v91);
  InputMapping::~InputMapping((InputMapping *)v92);
  InputMapping::~InputMapping((InputMapping *)v93);
  v9 = ptr;
  v10 = v95;
  if ( ptr != v95 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v9 = (char *)v9 + 8;
    while ( v9 != v10 );
    v9 = ptr;
  if ( v9 )
    operator delete(v9);
  v14 = v97;
  v15 = v98;
  if ( v97 != v98 )
      v18 = (int *)(*(_DWORD *)v14 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v14 = (char *)v14 + 8;
    while ( v14 != v15 );
    v14 = v97;
  if ( v14 )
    operator delete(v14);
  v19 = v99;
  v20 = v100;
  if ( v99 != v100 )
      v23 = (int *)(*(_DWORD *)v19 - 12);
      if ( v23 != &dword_28898C0 )
        v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v19 = (char *)v19 + 8;
    while ( v19 != v20 );
    v19 = v99;
  if ( v19 )
    operator delete(v19);
  GGVInputMapping::~GGVInputMapping((GGVInputMapping *)v101);
  GGVInputMapping::~GGVInputMapping((GGVInputMapping *)v102);
  std::_Destroy_aux<false>::__destroy<ChordButtonMapping *>((int)v103, v104);
  if ( v103 )
    operator delete(v103);
  std::_Destroy_aux<false>::__destroy<ChordButtonMapping *>((int)v106, v107);
  if ( v106 )
    operator delete(v106);
  std::_Destroy_aux<false>::__destroy<ChordButtonMapping *>((int)v108, v109);
  if ( v108 )
    operator delete(v108);
  v24 = v110;
  v25 = v111;
  if ( v110 != v111 )
      v28 = (int *)(*(_DWORD *)v24 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v24 = (char *)v24 + 8;
    while ( v24 != v25 );
    v24 = v110;
  if ( v24 )
    operator delete(v24);
  v29 = v113;
  v30 = v114;
  if ( v113 != v114 )
      v33 = (int *)(*(_DWORD *)v29 - 12);
      if ( v33 != &dword_28898C0 )
        v31 = (unsigned int *)(*(_DWORD *)v29 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v33);
      v29 = (char *)v29 + 8;
    while ( v29 != v30 );
    v29 = v113;
  if ( v29 )
    operator delete(v29);
  v34 = v115;
  v35 = v116;
  if ( v115 != v116 )
      v38 = (int *)(*(_DWORD *)v34 - 12);
      if ( v38 != &dword_28898C0 )
        v36 = (unsigned int *)(*(_DWORD *)v34 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      v34 = (char *)v34 + 8;
    while ( v34 != v35 );
    v34 = v115;
  if ( v34 )
    operator delete(v34);
  v39 = v117;
  v40 = v118;
  if ( v117 != v118 )
      v43 = (int *)(*(_DWORD *)v39 - 12);
      if ( v43 != &dword_28898C0 )
        v41 = (unsigned int *)(*(_DWORD *)v39 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v43);
      v39 = (char *)v39 + 8;
    while ( v39 != v40 );
    v39 = v117;
  if ( v39 )
    operator delete(v39);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v119);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v120);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v121);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v122);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v123);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v124);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v125);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v126);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v127);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v128);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v129);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v130);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v131);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v132);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v133);
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)((char *)&v133[6] + 4));
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)&v133[14]);
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)((char *)&v133[21] + 4));
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)&v133[29]);
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)((char *)&v133[36] + 4));
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)&v133[44]);
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)v134);
  TouchInputMapping::~TouchInputMapping((TouchInputMapping *)((char *)&v134[7] + 4));
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)v135);
  v45 = v137;
  v44 = v136;
  if ( v136 != v137 )
      v48 = (int *)(*(_DWORD *)v44 - 12);
      if ( v48 != &dword_28898C0 )
        v46 = (unsigned int *)(*(_DWORD *)v44 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v48);
      v44 = (char *)v44 + 12;
    while ( v44 != v45 );
    v44 = v136;
  if ( v44 )
    operator delete(v44);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)&v139);
  v50 = v141;
  v49 = v140;
  if ( v140 != v141 )
      v53 = (int *)(*(_DWORD *)v49 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)(*(_DWORD *)v49 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v53);
      v49 = (char *)v49 + 12;
    while ( v49 != v50 );
    v49 = v140;
  if ( v49 )
    operator delete(v49);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)&v143);
  v55 = v145;
  v54 = v144;
  if ( v144 != v145 )
      v58 = (int *)(*(_DWORD *)v54 - 12);
      if ( v58 != &dword_28898C0 )
        v56 = (unsigned int *)(*(_DWORD *)v54 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v58);
      v54 = (char *)v54 + 12;
    while ( v54 != v55 );
    v54 = v144;
  if ( v54 )
    operator delete(v54);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)&v147);
  v60 = v149;
  v59 = v148;
  if ( v148 != v149 )
      v63 = (int *)(*(_DWORD *)v59 - 12);
      if ( v63 != &dword_28898C0 )
        v61 = (unsigned int *)(*(_DWORD *)v59 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v63);
      v59 = (char *)v59 + 12;
    while ( v59 != v60 );
    v59 = v148;
  if ( v59 )
    operator delete(v59);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)&v151);
  v65 = v153;
  v64 = v152;
  if ( v152 != v153 )
      v68 = (int *)(*(_DWORD *)v64 - 12);
      if ( v68 != &dword_28898C0 )
        v66 = (unsigned int *)(*(_DWORD *)v64 - 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v68);
      v64 = (char *)v64 + 12;
    while ( v64 != v65 );
    v64 = v152;
  if ( v64 )
    operator delete(v64);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)&v155);
  v70 = v157;
  v69 = v156;
  if ( v156 != v157 )
      v73 = (int *)(*(_DWORD *)v69 - 12);
      if ( v73 != &dword_28898C0 )
        v71 = (unsigned int *)(*(_DWORD *)v69 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v73);
      v69 = (char *)v69 + 12;
    while ( v69 != v70 );
    v69 = v156;
  if ( v69 )
    operator delete(v69);
}


char *__fastcall ClientInputMappingFactory::_createGGVMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  int v4; // r1@5
  int v5; // r1@8
  int v6; // r1@11
  __int64 v7; // kr08_8@16
  int v8; // r1@17
  int v9; // r1@20
  int v10; // r1@23
  __int64 v11; // kr10_8@28
  int v12; // r1@29
  int v13; // r1@32
  int v14; // r1@35
  int v15; // r1@38
  int v16; // r1@41
  int v17; // r1@44
  int v18; // r1@47
  char *result; // r0@50
  int v20; // [sp+0h] [bp-58h]@49
  int v21; // [sp+4h] [bp-54h]@46
  int v22; // [sp+8h] [bp-50h]@43
  int v23; // [sp+Ch] [bp-4Ch]@40
  int v24; // [sp+10h] [bp-48h]@37
  int v25; // [sp+14h] [bp-44h]@34
  int v26; // [sp+18h] [bp-40h]@31
  int v27; // [sp+1Ch] [bp-3Ch]@28
  int v28; // [sp+20h] [bp-38h]@25
  int v29; // [sp+24h] [bp-34h]@22
  int v30; // [sp+28h] [bp-30h]@19
  int v31; // [sp+2Ch] [bp-2Ch]@16
  int v32; // [sp+30h] [bp-28h]@13
  int v33; // [sp+34h] [bp-24h]@10
  int v34; // [sp+38h] [bp-20h]@7
  int v35; // [sp+3Ch] [bp-1Ch]@4
  int v36; // [sp+40h] [bp-18h]@1
  int v37; // [sp+44h] [bp-14h]@1

  v1 = this;
  _aeabi_memclr4(this, 48);
  v37 = 0;
  std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::_M_emplace_back_aux<char const(&)[17],GGInput::Event>(
    (__int64 *)v1,
    "gaze.rawPosition",
    &v37);
  v2 = *(_QWORD *)((char *)v1 + 4);
  v36 = 1;
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::_M_emplace_back_aux<char const(&)[18],GGInput::Event>(
      (__int64 *)v1,
      "gaze.rawDirection",
      &v36);
    v3 = *((_DWORD *)v1 + 1);
  }
  else
    __gnu_cxx::new_allocator<GGVectorBinding>::construct<GGVectorBinding,char const(&)[18],GGInput::Event>(
      (int)v1,
      v2,
    v3 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v3;
  v35 = 4;
  if ( v3 == *((_DWORD *)v1 + 2) )
    std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::_M_emplace_back_aux<char const(&)[24],GGInput::Event>(
      "gaze.holoscreenPosition",
      &v35);
    v4 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<GGVectorBinding>::construct<GGVectorBinding,char const(&)[24],GGInput::Event>(
      v3,
    v4 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v4;
  v34 = 5;
  if ( v4 == *((_DWORD *)v1 + 2) )
    std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::_M_emplace_back_aux<char const(&)[25],GGInput::Event>(
      "gaze.holoscreenDirection",
      &v34);
    v5 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<GGVectorBinding>::construct<GGVectorBinding,char const(&)[25],GGInput::Event>(
      v4,
    v5 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v5;
  v33 = 6;
  if ( v5 == *((_DWORD *)v1 + 2) )
      "gaze.holoviewerPosition",
      &v33);
    v6 = *((_DWORD *)v1 + 1);
      v5,
    v6 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v6;
  v32 = 7;
  if ( v6 == *((_DWORD *)v1 + 2) )
      "gaze.holoviewerDirection",
      &v32);
      v6,
    *((_DWORD *)v1 + 1) += 8;
  v31 = 8;
  v7 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    std::vector<GGVectorBinding,std::allocator<GGVectorBinding>>::_M_emplace_back_aux<char const(&)[20],GGInput::Event>(
      (__int64 *)((char *)v1 + 12),
      "hand1.worldPosition",
      &v31);
    v8 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<GGVectorBinding>::construct<GGVectorBinding,char const(&)[20],GGInput::Event>(
      (int)v1 + 12,
      v7,
    v8 = *((_DWORD *)v1 + 4) + 8;
    *((_DWORD *)v1 + 4) = v8;
  v30 = 9;
  if ( v8 == *((_DWORD *)v1 + 5) )
      "hand1.worldDeltaPos",
      &v30);
    v9 = *((_DWORD *)v1 + 4);
      v8,
    v9 = *((_DWORD *)v1 + 4) + 8;
    *((_DWORD *)v1 + 4) = v9;
  v29 = 10;
  if ( v9 == *((_DWORD *)v1 + 5) )
      "hand2.worldPosition",
      &v29);
    v10 = *((_DWORD *)v1 + 4);
      v9,
    v10 = *((_DWORD *)v1 + 4) + 8;
    *((_DWORD *)v1 + 4) = v10;
  v28 = 11;
  if ( v10 == *((_DWORD *)v1 + 5) )
      "hand2.worldDeltaPos",
      &v28);
      v10,
    *((_DWORD *)v1 + 4) += 8;
  v27 = 15;
  v11 = *(_QWORD *)((char *)v1 + 28);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[20],GGInput::Event>(
      (__int64 *)v1 + 3,
      "hand1.fingerPressed",
      &v27);
    v12 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[20],GGInput::Event>(
      (int)v1 + 24,
      v11,
    v12 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v12;
  v26 = 16;
  if ( v12 == *((_DWORD *)v1 + 8) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[21],GGInput::Event>(
      "hand1.fingerReleased",
      &v26);
    v13 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[21],GGInput::Event>(
      v12,
    v13 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v13;
  v25 = 13;
  if ( v13 == *((_DWORD *)v1 + 8) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[15],GGInput::Event>(
      "hand1.detected",
      &v25);
    v14 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[15],GGInput::Event>(
      v13,
    v14 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v14;
  v24 = 14;
  if ( v14 == *((_DWORD *)v1 + 8) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[11],GGInput::Event>(
      "hand1.lost",
      &v24);
    v15 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[11],GGInput::Event>(
      v14,
    v15 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v15;
  v23 = 17;
  if ( v15 == *((_DWORD *)v1 + 8) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[10],GGInput::Event>(
      "hand1.tap",
      &v23);
    v16 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[10],GGInput::Event>(
      v15,
    v16 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v16;
  v22 = 18;
  if ( v16 == *((_DWORD *)v1 + 8) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[13],GGInput::Event>(
      "hand1.circle",
      &v22);
    v17 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[13],GGInput::Event>(
      v16,
    v17 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v17;
  v21 = 19;
  if ( v17 == *((_DWORD *)v1 + 8) )
    std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[16],GGInput::Event>(
      "hand1.swipeLeft",
      &v21);
    v18 = *((_DWORD *)v1 + 7);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[16],GGInput::Event>(
      v17,
    v18 = *((_DWORD *)v1 + 7) + 8;
    *((_DWORD *)v1 + 7) = v18;
  v20 = 20;
  if ( v18 == *((_DWORD *)v1 + 8) )
    result = std::vector<GGVEventBinding,std::allocator<GGVEventBinding>>::_M_emplace_back_aux<char const(&)[17],GGInput::Event>(
               (__int64 *)v1 + 3,
               "hand1.swipeRight",
               &v20);
    __gnu_cxx::new_allocator<GGVEventBinding>::construct<GGVEventBinding,char const(&)[17],GGInput::Event>(
      v18,
      "hand1.swipeRight",
      &v20);
    result = (char *)(*((_DWORD *)v1 + 7) + 8);
    *((_DWORD *)v1 + 7) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  ClientInputMappingFactory::_createNormalGamePlayKeyboardAndMouseMapping(a1, a2, a3);
}


char *__fastcall ClientInputMappingFactory::_createNormalGamePlayTestAutoInputMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  int v4; // r1@5
  int v5; // r1@8
  int v6; // r1@11
  int v7; // r1@14
  int v8; // r1@17
  int v9; // r1@20
  int v10; // r1@23
  int v11; // r1@26
  int v12; // r1@29
  int v13; // r1@32
  int v14; // r1@35
  int v15; // r1@38
  int v16; // r1@41
  int v17; // r1@44
  int v18; // r1@47
  int v19; // r1@50
  int v20; // r1@53
  int v21; // r1@56
  int v22; // r1@59
  int v23; // r1@62
  int v24; // r1@65
  int v25; // r1@68
  int v26; // r1@71
  char *result; // r0@74
  int v28; // [sp+0h] [bp-90h]@73
  int v29; // [sp+4h] [bp-8Ch]@70
  int v30; // [sp+8h] [bp-88h]@67
  int v31; // [sp+Ch] [bp-84h]@64
  int v32; // [sp+10h] [bp-80h]@61
  int v33; // [sp+14h] [bp-7Ch]@58
  int v34; // [sp+18h] [bp-78h]@55
  int v35; // [sp+1Ch] [bp-74h]@52
  int v36; // [sp+20h] [bp-70h]@49
  int v37; // [sp+24h] [bp-6Ch]@46
  int v38; // [sp+28h] [bp-68h]@43
  int v39; // [sp+2Ch] [bp-64h]@40
  int v40; // [sp+30h] [bp-60h]@37
  int v41; // [sp+34h] [bp-5Ch]@34
  int v42; // [sp+38h] [bp-58h]@31
  int v43; // [sp+3Ch] [bp-54h]@28
  int v44; // [sp+40h] [bp-50h]@25
  int v45; // [sp+44h] [bp-4Ch]@22
  int v46; // [sp+48h] [bp-48h]@19
  int v47; // [sp+4Ch] [bp-44h]@16
  int v48; // [sp+50h] [bp-40h]@13
  int v49; // [sp+54h] [bp-3Ch]@10
  int v50; // [sp+58h] [bp-38h]@7
  int v51; // [sp+5Ch] [bp-34h]@4
  int v52; // [sp+60h] [bp-30h]@1
  int v53; // [sp+64h] [bp-2Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v53 = 4;
  std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[12],ActionEvent::{unnamed type#1}>(
    (__int64 *)this,
    "button.down",
    &v53);
  v52 = 2;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[13],ActionEvent::{unnamed type#1}>(
      (__int64 *)v1,
      "button.right",
      &v52);
    v3 = *((_DWORD *)v1 + 1);
  }
  else
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[13],ActionEvent::{unnamed type#1}>(
      (int)v1,
      v2,
    v3 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v3;
  v51 = 3;
  if ( v3 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[10],ActionEvent::{unnamed type#1}>(
      "button.up",
      &v51);
    v4 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[10],ActionEvent::{unnamed type#1}>(
      v3,
    v4 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v4;
  v50 = 1;
  if ( v4 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[12],ActionEvent::{unnamed type#1}>(
      "button.left",
      &v50);
    v5 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[12],ActionEvent::{unnamed type#1}>(
      v4,
    v5 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v5;
  v49 = 5;
  if ( v5 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[14],ActionEvent::{unnamed type#1}>(
      "button.ascend",
      &v49);
    v6 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[14],ActionEvent::{unnamed type#1}>(
      v5,
    v6 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v6;
  v48 = 6;
  if ( v6 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[15],ActionEvent::{unnamed type#1}>(
      "button.descend",
      &v48);
    v7 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[15],ActionEvent::{unnamed type#1}>(
      v6,
    v7 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v7;
  v47 = 10;
  if ( v7 == *((_DWORD *)v1 + 2) )
      "button.sneak",
      &v47);
    v8 = *((_DWORD *)v1 + 1);
      v7,
    v8 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v8;
  v46 = 11;
  if ( v8 == *((_DWORD *)v1 + 2) )
      "button.jump",
      &v46);
    v9 = *((_DWORD *)v1 + 1);
      v8,
    v9 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v9;
  v45 = 12;
  if ( v9 == *((_DWORD *)v1 + 2) )
      "button.sprint",
      &v45);
    v10 = *((_DWORD *)v1 + 1);
      v9,
    v10 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v10;
  v44 = 20;
  if ( v10 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[18],ActionEvent::{unnamed type#1}>(
      "button.mobeffects",
      &v44);
    v11 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[18],ActionEvent::{unnamed type#1}>(
      v10,
    v11 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v11;
  v43 = 21;
  if ( v11 == *((_DWORD *)v1 + 2) )
      "button.drop",
      &v43);
    v12 = *((_DWORD *)v1 + 1);
      v11,
    v12 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v12;
  v42 = 22;
  if ( v12 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[17],ActionEvent::{unnamed type#1}>(
      "button.inventory",
      &v42);
    v13 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[17],ActionEvent::{unnamed type#1}>(
      v12,
    v13 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v13;
  v41 = 23;
  if ( v13 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[25],ActionEvent::{unnamed type#1}>(
      "button.build_or_interact",
      &v41);
    v14 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[25],ActionEvent::{unnamed type#1}>(
      v13,
    v14 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v14;
  v40 = 24;
  if ( v14 == *((_DWORD *)v1 + 2) )
      "button.destroy_or_attack",
      &v40);
    v15 = *((_DWORD *)v1 + 1);
      v14,
    v15 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v15;
  v39 = 30;
  if ( v15 == *((_DWORD *)v1 + 2) )
      "button.pause",
      &v39);
    v16 = *((_DWORD *)v1 + 1);
      v15,
    v16 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v16;
  v38 = 31;
  if ( v16 == *((_DWORD *)v1 + 2) )
      "button.chat",
      &v38);
    v17 = *((_DWORD *)v1 + 1);
      v16,
    v17 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v17;
  v37 = 51;
  if ( v17 == *((_DWORD *)v1 + 2) )
      "button.slot1",
      &v37);
    v18 = *((_DWORD *)v1 + 1);
      v17,
    v18 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v18;
  v36 = 52;
  if ( v18 == *((_DWORD *)v1 + 2) )
      "button.slot2",
      &v36);
    v19 = *((_DWORD *)v1 + 1);
      v18,
    v19 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v19;
  v35 = 53;
  if ( v19 == *((_DWORD *)v1 + 2) )
      "button.slot3",
      &v35);
    v20 = *((_DWORD *)v1 + 1);
      v19,
    v20 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v20;
  v34 = 54;
  if ( v20 == *((_DWORD *)v1 + 2) )
      "button.slot4",
      &v34);
    v21 = *((_DWORD *)v1 + 1);
      v20,
    v21 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v21;
  v33 = 55;
  if ( v21 == *((_DWORD *)v1 + 2) )
      "button.slot5",
      &v33);
    v22 = *((_DWORD *)v1 + 1);
      v21,
    v22 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v22;
  v32 = 56;
  if ( v22 == *((_DWORD *)v1 + 2) )
      "button.slot6",
      &v32);
    v23 = *((_DWORD *)v1 + 1);
      v22,
    v23 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v23;
  v31 = 57;
  if ( v23 == *((_DWORD *)v1 + 2) )
      "button.slot7",
      &v31);
    v24 = *((_DWORD *)v1 + 1);
      v23,
    v24 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v24;
  v30 = 58;
  if ( v24 == *((_DWORD *)v1 + 2) )
      "button.slot8",
      &v30);
    v25 = *((_DWORD *)v1 + 1);
      v24,
    v25 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v25;
  v29 = 59;
  if ( v25 == *((_DWORD *)v1 + 2) )
      "button.slot9",
      &v29);
    v26 = *((_DWORD *)v1 + 1);
      v25,
    v26 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v26;
  v28 = 50;
  if ( v26 == *((_DWORD *)v1 + 2) )
    result = std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[13],ActionEvent::{unnamed type#1}>(
               (__int64 *)v1,
               "button.slot0",
               &v28);
      v26,
      "button.slot0",
      &v28);
    result = (char *)(*((_DWORD *)v1 + 1) + 8);
    *((_DWORD *)v1 + 1) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_addInvariantChordControls(int a1, int a2)
{
  ClientInputMappingFactory::_addInvariantChordControls(a1, a2);
}


int __fastcall ClientInputMappingFactory::ClientInputMappingFactory(double a1, int a2)
{
  int v2; // r11@1
  int v3; // r8@1
  int v4; // r9@1
  double v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3
  unsigned int v8; // r0@4
  int v9; // r6@6
  void *v10; // r5@6
  void *v11; // r0@8
  int v12; // r0@10

  v2 = LODWORD(a1);
  v3 = a2;
  v4 = HIDWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26D9108;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(a1)));
  *(_DWORD *)(v2 + 8) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    v7 = (void *)(v2 + 28);
  }
  else
    if ( LODWORD(v5) >= 0x40000000 )
      sub_119C874();
    v6 = 4 * LODWORD(v5);
    v7 = operator new(4 * LODWORD(v5));
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v2 + 4) = v7;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 1065353216;
  LODWORD(v5) = v2 + 48;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v8 = sub_119C844(v5);
  *(_DWORD *)(v2 + 36) = v8;
  if ( v8 == 1 )
    *(_DWORD *)(v2 + 56) = 0;
    v10 = (void *)(v2 + 56);
    if ( v8 >= 0x40000000 )
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    _aeabi_memclr4(v10, v9);
  *(_DWORD *)(v2 + 32) = v10;
  *(_DWORD *)(v2 + 64) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v11 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v11 = &ServiceLocator<AppPlatform>::mDefaultService;
  v12 = (*(int (**)(void))(**(_DWORD **)v11 + 460))();
  GamePadRemappingLayout::GamePadRemappingLayout(v2 + 68, v12, 0);
  GamePadRemappingLayout::GamePadRemappingLayout(v2 + 108, 3, 1);
  KeyboardRemappingLayout::KeyboardRemappingLayout((KeyboardRemappingLayout *)(v2 + 148), v4, v3);
  ClientInputMappingFactory::_createInputMappingTemplates((ClientInputMappingFactory *)v2);
  return v2;
}


void __fastcall ClientInputMappingFactory::_createScreenDeviceButtonMapping(ClientInputMappingFactory *this)
{
  unsigned __int64 *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+4h] [bp-34h]@1
  int v9; // [sp+8h] [bp-30h]@1
  int v10; // [sp+Ch] [bp-2Ch]@1

  v1 = (unsigned __int64 *)this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  sub_119C884((void **)&v8, "button.menu_cancel");
  sub_119C854(&v9, &v8);
  v10 = 0;
  std::vector<DeviceButtonMapping,std::allocator<DeviceButtonMapping>>::_M_emplace_back_aux<DeviceButtonMapping>(
    v1,
    (int)&v9);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
}


char *__fastcall ClientInputMappingFactory::_createScreenTestAutoInputMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  int v4; // r1@5
  int v5; // r1@8
  int v6; // r1@11
  int v7; // r1@14
  int v8; // r1@17
  char *result; // r0@20
  int v10; // [sp+0h] [bp-48h]@19
  int v11; // [sp+4h] [bp-44h]@16
  int v12; // [sp+8h] [bp-40h]@13
  int v13; // [sp+Ch] [bp-3Ch]@10
  int v14; // [sp+10h] [bp-38h]@7
  int v15; // [sp+14h] [bp-34h]@4
  int v16; // [sp+18h] [bp-30h]@1
  int v17; // [sp+1Ch] [bp-2Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v17 = 104;
  std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[15],ActionEvent::{unnamed type#1}>(
    (__int64 *)this,
    "button.menu_ok",
    &v17);
  v16 = 105;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[19],ActionEvent::{unnamed type#1}>(
      (__int64 *)v1,
      "button.menu_cancel",
      &v16);
    v3 = *((_DWORD *)v1 + 1);
  }
  else
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[19],ActionEvent::{unnamed type#1}>(
      (int)v1,
      v2,
    v3 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v3;
  v15 = 100;
  if ( v3 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[15],ActionEvent::{unnamed type#1}>(
      "button.menu_up",
      &v15);
    v4 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[15],ActionEvent::{unnamed type#1}>(
      v3,
    v4 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v4;
  v14 = 101;
  if ( v4 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[17],ActionEvent::{unnamed type#1}>(
      "button.menu_down",
      &v14);
    v5 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[17],ActionEvent::{unnamed type#1}>(
      v4,
    v5 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v5;
  v13 = 102;
  if ( v5 == *((_DWORD *)v1 + 2) )
      "button.menu_left",
      &v13);
    v6 = *((_DWORD *)v1 + 1);
      v5,
    v6 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v6;
  v12 = 103;
  if ( v6 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[18],ActionEvent::{unnamed type#1}>(
      "button.menu_right",
      &v12);
    v7 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[18],ActionEvent::{unnamed type#1}>(
      v6,
    v7 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v7;
  v11 = 107;
  if ( v7 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[29],ActionEvent::{unnamed type#1}>(
      "button.menu_inventory_cancel",
      &v11);
    v8 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[29],ActionEvent::{unnamed type#1}>(
      v7,
    v8 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v8;
  v10 = 106;
  if ( v8 == *((_DWORD *)v1 + 2) )
    result = std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[27],ActionEvent::{unnamed type#1}>(
               (__int64 *)v1,
               "button.menu_inventory_drop",
               &v10);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[27],ActionEvent::{unnamed type#1}>(
      v8,
      "button.menu_inventory_drop",
      &v10);
    result = (char *)(*((_DWORD *)v1 + 1) + 8);
    *((_DWORD *)v1 + 1) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_bindActionToGameControllerInput(int a1, float a2, int a3, int *a4, int a5, int a6)
{
  ClientInputMappingFactory::_bindActionToGameControllerInput(a1, a2, a3, a4, a5, a6);
}


char *__fastcall ClientInputMappingFactory::_createBoatTestAutoInputMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  int v4; // r1@5
  int v5; // r1@8
  int v6; // r1@11
  int v7; // r1@14
  int v8; // r1@17
  char *result; // r0@20
  int v10; // [sp+0h] [bp-48h]@19
  int v11; // [sp+4h] [bp-44h]@16
  int v12; // [sp+8h] [bp-40h]@13
  int v13; // [sp+Ch] [bp-3Ch]@10
  int v14; // [sp+10h] [bp-38h]@7
  int v15; // [sp+14h] [bp-34h]@4
  int v16; // [sp+18h] [bp-30h]@1
  int v17; // [sp+1Ch] [bp-2Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v17 = 30;
  std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[13],ActionEvent::{unnamed type#1}>(
    (__int64 *)this,
    "button.pause",
    &v17);
  v16 = 14;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[16],ActionEvent::{unnamed type#1}>(
      (__int64 *)v1,
      "button.dismount",
      &v16);
    v3 = *((_DWORD *)v1 + 1);
  }
  else
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[16],ActionEvent::{unnamed type#1}>(
      (int)v1,
      v2,
    v3 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v3;
  v15 = 22;
  if ( v3 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[17],ActionEvent::{unnamed type#1}>(
      "button.inventory",
      &v15);
    v4 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[17],ActionEvent::{unnamed type#1}>(
      v3,
    v4 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v4;
  v14 = 33;
  if ( v4 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[26],ActionEvent::{unnamed type#1}>(
      "button.toggle_perspective",
      &v14);
    v5 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[26],ActionEvent::{unnamed type#1}>(
      v4,
    v5 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v5;
  v13 = 31;
  if ( v5 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[12],ActionEvent::{unnamed type#1}>(
      "button.chat",
      &v13);
    v6 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[12],ActionEvent::{unnamed type#1}>(
      v5,
    v6 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v6;
  v12 = 32;
  if ( v6 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[15],ActionEvent::{unnamed type#1}>(
      "button.console",
      &v12);
    v7 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[15],ActionEvent::{unnamed type#1}>(
      v6,
    v7 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v7;
  v11 = 7;
  if ( v7 == *((_DWORD *)v1 + 2) )
    std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[19],ActionEvent::{unnamed type#1}>(
      "button.paddle_left",
      &v11);
    v8 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[19],ActionEvent::{unnamed type#1}>(
      v7,
    v8 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v8;
  v10 = 8;
  if ( v8 == *((_DWORD *)v1 + 2) )
    result = std::vector<TestAutoInputBinding,std::allocator<TestAutoInputBinding>>::_M_emplace_back_aux<char const(&)[20],ActionEvent::{unnamed type#1}>(
               (__int64 *)v1,
               "button.paddle_right",
               &v10);
    __gnu_cxx::new_allocator<TestAutoInputBinding>::construct<TestAutoInputBinding,char const(&)[20],ActionEvent::{unnamed type#1}>(
      v8,
      "button.paddle_right",
      &v10);
    result = (char *)(*((_DWORD *)v1 + 1) + 8);
    *((_DWORD *)v1 + 1) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayChordMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createNormalGamePlayChordMapping(this);
}


void __fastcall ClientInputMappingFactory::_addInvariantChordControls(int a1, int a2)
{
  int v2; // r4@1
  char *v3; // r0@1
  __int64 v4; // r0@1
  char *v5; // r4@4
  int v6; // r6@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int *v9; // r0@14
  char *v10; // r0@19
  void *v11; // r0@20
  void *v12; // r0@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  unsigned int *v15; // r2@27
  signed int v16; // r1@29
  unsigned int *v17; // r2@31
  signed int v18; // r1@33
  int v19; // [sp+8h] [bp-40h]@1
  int v20; // [sp+Ch] [bp-3Ch]@1
  char v21; // [sp+10h] [bp-38h]@1
  char *v22; // [sp+14h] [bp-34h]@1
  char *v23; // [sp+18h] [bp-30h]@1
  char *v24; // [sp+1Ch] [bp-2Ch]@1
  char *v25; // [sp+20h] [bp-28h]@1

  v2 = a2;
  sub_119C884((void **)&v22, "button.reload_resource_packs");
  sub_119C884((void **)&v19, "button.debug");
  sub_119C884((void **)&v20, "button.chat");
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v3 = (char *)operator new(8u);
  v23 = v3;
  v25 = v3 + 8;
  v24 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v19,
                  (int)&v21,
                  (int)v3);
  v4 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>>::_M_emplace_back_aux<ChordButtonMapping>(
      (_QWORD *)v2,
      (int)&v22);
  }
  else
    *(_DWORD *)v4 = v22;
    v22 = (char *)&unk_28898CC;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 4) = v23;
    v23 = 0;
    HIDWORD(v4) = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v24;
    v24 = (char *)HIDWORD(v4);
    HIDWORD(v4) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v25;
    v25 = (char *)HIDWORD(v4);
    *(_DWORD *)(v2 + 4) += 16;
  v6 = (int)v24;
  v5 = v23;
  if ( v23 != v24 )
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v5 += 4;
    }
    while ( v5 != (char *)v6 );
    v5 = v23;
  if ( v5 )
    operator delete(v5);
  v10 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


char *__fastcall ClientInputMappingFactory::_createMinecartTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r4@1
  ClientInputMappingFactory *v2; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r1@2
  int v5; // r1@5
  int v6; // r0@7
  int v7; // r1@8
  int v8; // r1@11
  char *result; // r0@14
  char v10; // [sp+2Bh] [bp-75h]@13
  int v11; // [sp+2Ch] [bp-74h]@13
  int v12; // [sp+30h] [bp-70h]@13
  int v13; // [sp+34h] [bp-6Ch]@13
  int v14; // [sp+38h] [bp-68h]@13
  char v15; // [sp+3Fh] [bp-61h]@10
  int v16; // [sp+40h] [bp-60h]@10
  int v17; // [sp+44h] [bp-5Ch]@10
  int v18; // [sp+48h] [bp-58h]@10
  int v19; // [sp+4Ch] [bp-54h]@10
  char v20; // [sp+53h] [bp-4Dh]@7
  int v21; // [sp+54h] [bp-4Ch]@7
  char v22; // [sp+5Bh] [bp-45h]@7
  int v23; // [sp+5Ch] [bp-44h]@7
  int v24; // [sp+60h] [bp-40h]@7
  int v25; // [sp+64h] [bp-3Ch]@7
  int v26; // [sp+68h] [bp-38h]@7
  char v27; // [sp+6Fh] [bp-31h]@4
  int v28; // [sp+70h] [bp-30h]@4
  int v29; // [sp+74h] [bp-2Ch]@1
  char v30; // [sp+7Bh] [bp-25h]@1

  v1 = this;
  v2 = (ClientInputMappingFactory *)TouchInputMapping::TouchInputMapping(this);
  ClientInputMappingFactory::_addInvariantGamePlayTouchControls(v2, v1);
  v30 = 1;
  v29 = 3;
  v3 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[17],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      (__int64 *)((char *)v1 + 12),
      (int)"button.up_ignore",
      (int)"binding.area.move_up",
      "binding.bool.true",
      (int)&unk_27CA864,
      (int *)"",
      (int *)&unk_262C64C,
      &flt_262C650,
      (int *)&flt_262C650,
      &v30,
      &v29,
      (int)"??Y?");
    v4 = *((_DWORD *)v1 + 4);
  }
  else
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[17],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      (int)v1 + 12,
      v3,
      "button.up_ignore",
      "binding.area.move_up",
    v4 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v4;
  v28 = 104;
  v27 = 0;
  if ( v4 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[18],char const(&)[30],ButtonColors const&,int,int const&,int const&,int const&,bool>(
      "button.jump",
      "binding.area.jump",
      "binding.bool.show_jump_button",
      &v28,
      &v27);
    v5 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[18],char const(&)[30],ButtonColors const&,int,int const&,int const&,int const&,bool>(
      v4,
    v5 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v5;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v22 = 1;
  v20 = 1;
  v6 = *((_DWORD *)v1 + 5);
  v21 = 3;
  if ( v5 == v6 )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[10],char const(&)[31],char const(&)[18],ButtonColors const&,int,int,int,int,bool,int,float const&,bool>(
      (int)"button.up",
      (int)"binding.area.move_up_invisible",
      &v26,
      &v25,
      (float *)&v24,
      &v23,
      &v22,
      &v21,
      (int)"??Y?",
      &v20);
    v7 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[10],char const(&)[31],char const(&)[18],ButtonColors const&,int,int,int,int,bool,int,float const&,bool>(
      v5,
      "button.up",
      "binding.area.move_up_invisible",
    v7 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v7;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v15 = 1;
  if ( v7 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[24],char const(&)[26],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      "button.hide_jump_button",
      "binding.area.disable_jump",
      &v19,
      &v18,
      (float *)&v17,
      &v16,
      &v15);
    v8 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[24],char const(&)[26],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v7,
    v8 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v8;
  v13 = 0;
  v14 = 0;
  v11 = 0;
  v12 = 0;
  v10 = 0;
  if ( v8 == *((_DWORD *)v1 + 5) )
    result = std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
               (__int64 *)((char *)v1 + 12),
               "no_binding",
               "binding.area.dpad_no_turn_interact",
               "binding.bool.true",
               (int)&unk_27CA864,
               &v14,
               &v13,
               (float *)&v12,
               &v11,
               &v10);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v8,
      "no_binding",
      "binding.area.dpad_no_turn_interact",
      &v14,
      &v13,
      (float *)&v12,
      &v11,
      &v10);
    result = (char *)(*((_DWORD *)v1 + 4) + 76);
    *((_DWORD *)v1 + 4) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createScreenDeviceButtonMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createScreenDeviceButtonMapping(this);
}


void __fastcall ClientInputMappingFactory::_addSharedGamePlayGameControllerControls(int a1, float a2, int a3)
{
  int v3; // r6@1
  float v4; // r7@1
  int v5; // r5@1
  void *v6; // r0@4
  void *v7; // r0@8
  void *v8; // r0@12
  void *v9; // r0@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  unsigned int *v12; // r2@22
  signed int v13; // r1@24
  unsigned int *v14; // r2@26
  signed int v15; // r1@28
  unsigned int *v16; // r2@30
  signed int v17; // r1@32
  int v18; // [sp+Ch] [bp-34h]@13
  int v19; // [sp+14h] [bp-2Ch]@9
  int v20; // [sp+1Ch] [bp-24h]@5
  int v21; // [sp+24h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ClientInputMappingFactory::_addInvariantGamePlayGameControllerControls(a1, a2, a3);
  sub_119C884((void **)&v21, "button.jump");
  if ( v3 )
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 108, &v21, 16, -1082130432);
  else
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 68, &v21, 16, -1082130432);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v21 - 4);
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
  sub_119C884((void **)&v20, "button.drop");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 108, &v20, 3, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 68, &v20, 3, -1082130432);
  v7 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v19, "button.open_crafting");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 108, &v19, 24, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 68, &v19, 24, -1082130432);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v18, "button.sprint");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 108, &v18, 18, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v4, v5 + 68, &v18, 18, -1082130432);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(float a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  float v5; // r7@1
  void *v6; // r0@4
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  int v12; // [sp+10h] [bp-30h]@5
  int v13; // [sp+18h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  _aeabi_memclr4(LODWORD(a1), 48);
  ClientInputMappingFactory::_addSharedGamePlayGameControllerControls(v3, v5, v4);
  sub_119C884((void **)&v13, "button.sneak_toggle");
  if ( v4 )
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v13, 17, -1082130432);
  else
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v13, 17, -1082130432);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v12, "button.sneak_toggle");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v12, 29, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v12, 29, -1082130432);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


char *__fastcall ClientInputMappingFactory::_createScreenKeyboardMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  int v4; // r1@5
  int v5; // r1@8
  int v6; // r1@11
  int v7; // r1@14
  int v8; // r1@17
  int v9; // r1@20
  int v10; // r1@23
  int v11; // r1@26
  int v12; // r1@29
  int v13; // r1@32
  char *result; // r0@35
  char v15; // [sp+Bh] [bp-8Dh]@34
  int v16; // [sp+Ch] [bp-8Ch]@34
  char v17; // [sp+13h] [bp-85h]@31
  int v18; // [sp+14h] [bp-84h]@31
  char v19; // [sp+1Bh] [bp-7Dh]@28
  int v20; // [sp+1Ch] [bp-7Ch]@28
  char v21; // [sp+23h] [bp-75h]@25
  int v22; // [sp+24h] [bp-74h]@25
  char v23; // [sp+2Bh] [bp-6Dh]@22
  int v24; // [sp+2Ch] [bp-6Ch]@22
  char v25; // [sp+33h] [bp-65h]@19
  int v26; // [sp+34h] [bp-64h]@19
  char v27; // [sp+3Bh] [bp-5Dh]@16
  int v28; // [sp+3Ch] [bp-5Ch]@16
  char v29; // [sp+43h] [bp-55h]@13
  int v30; // [sp+44h] [bp-54h]@13
  char v31; // [sp+4Bh] [bp-4Dh]@10
  int v32; // [sp+4Ch] [bp-4Ch]@10
  char v33; // [sp+53h] [bp-45h]@7
  int v34; // [sp+54h] [bp-44h]@7
  char v35; // [sp+5Bh] [bp-3Dh]@4
  int v36; // [sp+5Ch] [bp-3Ch]@4
  char v37; // [sp+63h] [bp-35h]@1
  int v38; // [sp+64h] [bp-34h]@1
  char v39; // [sp+6Bh] [bp-2Dh]@1
  int v40; // [sp+6Ch] [bp-2Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v40 = 13;
  *((_DWORD *)this + 2) = 0;
  v39 = 1;
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[15],Keyboard::{unnamed type#1},FocusImpact>(
    (__int64 *)this,
    "button.menu_ok",
    &v40,
    &v39);
  v2 = *(_QWORD *)((char *)v1 + 4);
  v38 = 27;
  v37 = 0;
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[19],Keyboard::{unnamed type#1},FocusImpact>(
      (__int64 *)v1,
      "button.menu_cancel",
      &v38,
      &v37);
    v3 = *((_DWORD *)v1 + 1);
  }
  else
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[19],Keyboard::{unnamed type#1},FocusImpact>(
      (int)v1,
      v2,
    v3 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v3;
  v36 = 38;
  v35 = 1;
  if ( v3 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[15],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_up",
      &v36,
      &v35);
    v4 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[15],Keyboard::{unnamed type#1},FocusImpact>(
      v3,
    v4 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v4;
  v34 = 40;
  v33 = 1;
  if ( v4 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[17],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_down",
      &v34,
      &v33);
    v5 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[17],Keyboard::{unnamed type#1},FocusImpact>(
      v4,
    v5 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v5;
  v32 = 37;
  v31 = 1;
  if ( v5 == *((_DWORD *)v1 + 2) )
      "button.menu_left",
      &v32,
      &v31);
    v6 = *((_DWORD *)v1 + 1);
      v5,
    v6 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v6;
  v30 = 39;
  v29 = 1;
  if ( v6 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[18],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_right",
      &v30,
      &v29);
    v7 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[18],Keyboard::{unnamed type#1},FocusImpact>(
      v6,
    v7 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v7;
  v28 = 9;
  v27 = 1;
  if ( v7 == *((_DWORD *)v1 + 2) )
      &v28,
      &v27);
    v8 = *((_DWORD *)v1 + 1);
      v7,
    v8 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v8;
  v26 = 9;
  v25 = 0;
  if ( v8 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[25],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_autocomplete",
      &v26,
      &v25);
    v9 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[25],Keyboard::{unnamed type#1},FocusImpact>(
      v8,
    v9 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v9;
  v24 = 38;
  v23 = 0;
  if ( v9 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[24],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_textedit_up",
      &v24,
      &v23);
    v10 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[24],Keyboard::{unnamed type#1},FocusImpact>(
      v9,
    v10 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v10;
  v22 = 40;
  v21 = 0;
  if ( v10 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[26],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_textedit_down",
      &v22,
      &v21);
    v11 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[26],Keyboard::{unnamed type#1},FocusImpact>(
      v10,
    v11 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v11;
  v20 = 37;
  v19 = 0;
  if ( v11 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[27],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_textcursorleft",
      &v20,
      &v19);
    v12 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[27],Keyboard::{unnamed type#1},FocusImpact>(
      v11,
    v12 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v12;
  v18 = 39;
  v17 = 0;
  if ( v12 == *((_DWORD *)v1 + 2) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[28],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_textcursorright",
      &v18,
      &v17);
    v13 = *((_DWORD *)v1 + 1);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[28],Keyboard::{unnamed type#1},FocusImpact>(
      v12,
    v13 = *((_DWORD *)v1 + 1) + 12;
    *((_DWORD *)v1 + 1) = v13;
  v16 = 192;
  v15 = 0;
  if ( v13 == *((_DWORD *)v1 + 2) )
    result = std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[19],Keyboard::{unnamed type#1},FocusImpact>(
               (__int64 *)v1,
               "button.dev_console",
               &v16,
               &v15);
      v13,
      "button.dev_console",
      &v16,
      &v15);
    result = (char *)(*((_DWORD *)v1 + 1) + 12);
    *((_DWORD *)v1 + 1) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createBedKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+10h] [bp-30h]@2
  int v13; // [sp+18h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping(a1, a2, a3);
  sub_119C884((void **)&v13, "button.chat");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v13, 23, 0);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v12, "button.console");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v4, v3, &v12, 32, 0);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayChordMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r10@1
  char *v2; // r0@1
  __int64 v3; // r0@1
  char *v4; // r5@4
  int v5; // r7@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int *v8; // r0@14
  char *v9; // r0@19
  void *v10; // r0@20
  void *v11; // r0@21
  char *v12; // r0@22
  __int64 v13; // r0@22
  char *v14; // r5@25
  int v15; // r7@25
  unsigned int *v16; // r2@27
  signed int v17; // r1@29
  int *v18; // r0@35
  char *v19; // r0@40
  void *v20; // r0@41
  void *v21; // r0@42
  void *v22; // r0@43
  char *v23; // r0@44
  __int64 v24; // r0@44
  char *v25; // r5@47
  int v26; // r7@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  int *v29; // r0@57
  char *v30; // r0@62
  void *v31; // r0@63
  void *v32; // r0@64
  char *v33; // r0@65
  __int64 v34; // r0@65
  char *v35; // r5@68
  int v36; // r7@68
  unsigned int *v37; // r2@70
  signed int v38; // r1@72
  int *v39; // r0@78
  char *v40; // r0@83
  void *v41; // r0@84
  void *v42; // r0@85
  char *v43; // r0@86
  __int64 v44; // r0@86
  char *v45; // r5@89
  int v46; // r7@89
  unsigned int *v47; // r2@91
  signed int v48; // r1@93
  int *v49; // r0@99
  char *v50; // r0@104
  void *v51; // r0@105
  void *v52; // r0@106
  char *v53; // r0@107
  __int64 v54; // r0@107
  char *v55; // r5@110
  int v56; // r7@110
  unsigned int *v57; // r2@112
  signed int v58; // r1@114
  int *v59; // r0@120
  char *v60; // r0@125
  void *v61; // r0@126
  void *v62; // r0@127
  char *v63; // r0@128
  __int64 v64; // r0@128
  char *v65; // r5@131
  int v66; // r7@131
  unsigned int *v67; // r2@133
  signed int v68; // r1@135
  int *v69; // r0@141
  char *v70; // r0@146
  void *v71; // r0@147
  void *v72; // r0@148
  char *v73; // r0@149
  __int64 v74; // r0@149
  char *v75; // r5@152
  int v76; // r7@152
  unsigned int *v77; // r2@154
  signed int v78; // r1@156
  int *v79; // r0@162
  char *v80; // r0@167
  void *v81; // r0@168
  void *v82; // r0@169
  char *v83; // r0@170
  __int64 v84; // r0@170
  char *v85; // r5@173
  int v86; // r7@173
  unsigned int *v87; // r2@175
  signed int v88; // r1@177
  int *v89; // r0@183
  char *v90; // r0@188
  void *v91; // r0@189
  void *v92; // r0@190
  char *v93; // r0@191
  __int64 v94; // r0@191
  char *v95; // r4@194
  int v96; // r6@194
  unsigned int *v97; // r2@196
  signed int v98; // r1@198
  int *v99; // r0@204
  char *v100; // r0@209
  void *v101; // r0@210
  void *v102; // r0@211
  unsigned int *v103; // r2@213
  signed int v104; // r1@215
  unsigned int *v105; // r2@217
  signed int v106; // r1@219
  unsigned int *v107; // r2@221
  signed int v108; // r1@223
  unsigned int *v109; // r2@225
  signed int v110; // r1@227
  unsigned int *v111; // r2@229
  signed int v112; // r1@231
  unsigned int *v113; // r2@233
  signed int v114; // r1@235
  unsigned int *v115; // r2@237
  signed int v116; // r1@239
  unsigned int *v117; // r2@241
  signed int v118; // r1@243
  unsigned int *v119; // r2@245
  signed int v120; // r1@247
  unsigned int *v121; // r2@249
  signed int v122; // r1@251
  unsigned int *v123; // r2@253
  signed int v124; // r1@255
  unsigned int *v125; // r2@257
  signed int v126; // r1@259
  unsigned int *v127; // r2@261
  signed int v128; // r1@263
  unsigned int *v129; // r2@265
  signed int v130; // r1@267
  unsigned int *v131; // r2@269
  signed int v132; // r1@271
  unsigned int *v133; // r2@273
  signed int v134; // r1@275
  unsigned int *v135; // r2@277
  signed int v136; // r1@279
  unsigned int *v137; // r2@281
  signed int v138; // r1@283
  unsigned int *v139; // r2@285
  signed int v140; // r1@287
  unsigned int *v141; // r2@289
  signed int v142; // r1@291
  unsigned int *v143; // r2@293
  signed int v144; // r1@295
  unsigned int *v145; // r2@297
  signed int v146; // r1@299
  unsigned int *v147; // r2@301
  signed int v148; // r1@303
  unsigned int *v149; // r2@305
  signed int v150; // r1@307
  unsigned int *v151; // r2@309
  signed int v152; // r1@311
  unsigned int *v153; // r2@313
  signed int v154; // r1@315
  unsigned int *v155; // r2@317
  signed int v156; // r1@319
  unsigned int *v157; // r2@321
  signed int v158; // r1@323
  unsigned int *v159; // r2@325
  signed int v160; // r1@327
  unsigned int *v161; // r2@329
  signed int v162; // r1@331
  unsigned int *v163; // r2@333
  signed int v164; // r1@335
  int v165; // [sp+8h] [bp-190h]@191
  int v166; // [sp+Ch] [bp-18Ch]@191
  char v167; // [sp+10h] [bp-188h]@191
  char *v168; // [sp+14h] [bp-184h]@191
  char *v169; // [sp+18h] [bp-180h]@191
  char *v170; // [sp+1Ch] [bp-17Ch]@191
  char *v171; // [sp+20h] [bp-178h]@191
  int v172; // [sp+2Ch] [bp-16Ch]@170
  int v173; // [sp+30h] [bp-168h]@170
  char v174; // [sp+34h] [bp-164h]@170
  char *v175; // [sp+38h] [bp-160h]@170
  char *v176; // [sp+3Ch] [bp-15Ch]@170
  char *v177; // [sp+40h] [bp-158h]@170
  char *v178; // [sp+44h] [bp-154h]@170
  int v179; // [sp+50h] [bp-148h]@149
  int v180; // [sp+54h] [bp-144h]@149
  char v181; // [sp+58h] [bp-140h]@149
  char *v182; // [sp+5Ch] [bp-13Ch]@149
  char *v183; // [sp+60h] [bp-138h]@149
  char *v184; // [sp+64h] [bp-134h]@149
  char *v185; // [sp+68h] [bp-130h]@149
  int v186; // [sp+74h] [bp-124h]@128
  int v187; // [sp+78h] [bp-120h]@128
  char v188; // [sp+7Ch] [bp-11Ch]@128
  char *v189; // [sp+80h] [bp-118h]@128
  char *v190; // [sp+84h] [bp-114h]@128
  char *v191; // [sp+88h] [bp-110h]@128
  char *v192; // [sp+8Ch] [bp-10Ch]@128
  int v193; // [sp+98h] [bp-100h]@107
  int v194; // [sp+9Ch] [bp-FCh]@107
  char v195; // [sp+A0h] [bp-F8h]@107
  char *v196; // [sp+A4h] [bp-F4h]@107
  char *v197; // [sp+A8h] [bp-F0h]@107
  char *v198; // [sp+ACh] [bp-ECh]@107
  char *v199; // [sp+B0h] [bp-E8h]@107
  int v200; // [sp+BCh] [bp-DCh]@86
  int v201; // [sp+C0h] [bp-D8h]@86
  char v202; // [sp+C4h] [bp-D4h]@86
  char *v203; // [sp+C8h] [bp-D0h]@86
  char *v204; // [sp+CCh] [bp-CCh]@86
  char *v205; // [sp+D0h] [bp-C8h]@86
  char *v206; // [sp+D4h] [bp-C4h]@86
  int v207; // [sp+E0h] [bp-B8h]@65
  int v208; // [sp+E4h] [bp-B4h]@65
  char v209; // [sp+E8h] [bp-B0h]@65
  char *v210; // [sp+ECh] [bp-ACh]@65
  char *v211; // [sp+F0h] [bp-A8h]@65
  char *v212; // [sp+F4h] [bp-A4h]@65
  char *v213; // [sp+F8h] [bp-A0h]@65
  int v214; // [sp+104h] [bp-94h]@44
  int v215; // [sp+108h] [bp-90h]@44
  char v216; // [sp+10Ch] [bp-8Ch]@44
  char *v217; // [sp+110h] [bp-88h]@44
  char *v218; // [sp+114h] [bp-84h]@44
  char *v219; // [sp+118h] [bp-80h]@44
  char *v220; // [sp+11Ch] [bp-7Ch]@44
  int v221; // [sp+12Ch] [bp-6Ch]@22
  int v222; // [sp+130h] [bp-68h]@22
  int v223; // [sp+134h] [bp-64h]@22
  char v224; // [sp+138h] [bp-60h]@22
  char *v225; // [sp+13Ch] [bp-5Ch]@22
  char *v226; // [sp+140h] [bp-58h]@22
  char *v227; // [sp+144h] [bp-54h]@22
  char *v228; // [sp+148h] [bp-50h]@22
  int v229; // [sp+154h] [bp-44h]@1
  int v230; // [sp+158h] [bp-40h]@1
  char v231; // [sp+15Ch] [bp-3Ch]@1
  char *v232; // [sp+160h] [bp-38h]@1
  char *v233; // [sp+164h] [bp-34h]@1
  char *v234; // [sp+168h] [bp-30h]@1
  char *v235; // [sp+16Ch] [bp-2Ch]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  ClientInputMappingFactory::_addInvariantChordControls(0, (int)this);
  sub_119C884((void **)&v232, "button.decrease_render_distance");
  sub_119C884((void **)&v229, "button.debug");
  sub_119C884((void **)&v230, "button.render_distance");
  v233 = 0;
  v234 = 0;
  v235 = 0;
  v2 = (char *)operator new(8u);
  v233 = v2;
  v235 = v2 + 8;
  v234 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v229,
                   (int)&v231,
                   (int)v2);
  v3 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>>::_M_emplace_back_aux<ChordButtonMapping>(
      v1,
      (int)&v232);
  }
  else
    *(_DWORD *)v3 = v232;
    v232 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 4) = v233;
    v233 = 0;
    HIDWORD(v3) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v234;
    v234 = (char *)HIDWORD(v3);
    HIDWORD(v3) = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v235;
    LODWORD(v3) = *((_DWORD *)v1 + 1);
    v235 = (char *)HIDWORD(v3);
    *((_DWORD *)v1 + 1) = v3 + 16;
  v5 = (int)v234;
  v4 = v233;
  if ( v233 != v234 )
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      v4 += 4;
    }
    while ( v4 != (char *)v5 );
    v4 = v233;
  if ( v4 )
    operator delete(v4);
  v9 = v232 - 12;
  if ( (int *)(v232 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v232 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
    else
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v230 - 12);
  if ( (int *)(v230 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v230 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v229 - 12);
  if ( (int *)(v229 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v229 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v225, "button.increase_render_distance");
  sub_119C884((void **)&v221, "button.shift");
  sub_119C884((void **)&v222, "button.debug");
  sub_119C884((void **)&v223, "button.render_distance");
  v226 = 0;
  v227 = 0;
  v228 = 0;
  v12 = (char *)operator new(0xCu);
  v226 = v12;
  v228 = v12 + 12;
  v227 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v221,
                   (int)&v224,
                   (int)v12);
  v13 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v13 == HIDWORD(v13) )
      (int)&v225);
    *(_DWORD *)v13 = v225;
    v225 = (char *)&unk_28898CC;
    *(_DWORD *)(v13 + 4) = 0;
    *(_DWORD *)(v13 + 8) = 0;
    *(_DWORD *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 4) = v226;
    v226 = 0;
    HIDWORD(v13) = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v227;
    v227 = (char *)HIDWORD(v13);
    HIDWORD(v13) = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v228;
    LODWORD(v13) = *((_DWORD *)v1 + 1);
    v228 = (char *)HIDWORD(v13);
    *((_DWORD *)v1 + 1) = v13 + 16;
  v15 = (int)v227;
  v14 = v226;
  if ( v226 != v227 )
      v18 = (int *)(*(_DWORD *)v14 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v14 += 4;
    while ( v14 != (char *)v15 );
    v14 = v226;
  if ( v14 )
    operator delete(v14);
  v19 = v225 - 12;
  if ( (int *)(v225 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v225 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (void *)(v223 - 12);
  if ( (int *)(v223 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v223 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v222 - 12);
  if ( (int *)(v222 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v222 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v221 - 12);
  if ( (int *)(v221 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v221 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  sub_119C884((void **)&v217, "button.show_chunk_map");
  sub_119C884((void **)&v214, "button.debug");
  sub_119C884((void **)&v215, "button.debug_show_chunk_map");
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v23 = (char *)operator new(8u);
  v218 = v23;
  v220 = v23 + 8;
  v219 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v214,
                   (int)&v216,
                   (int)v23);
  v24 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v24 == HIDWORD(v24) )
      (int)&v217);
    *(_DWORD *)v24 = v217;
    v217 = (char *)&unk_28898CC;
    *(_DWORD *)(v24 + 4) = 0;
    *(_DWORD *)(v24 + 8) = 0;
    *(_DWORD *)(v24 + 12) = 0;
    *(_DWORD *)(v24 + 4) = v218;
    v218 = 0;
    HIDWORD(v24) = *(_DWORD *)(v24 + 8);
    *(_DWORD *)(v24 + 8) = v219;
    v219 = (char *)HIDWORD(v24);
    HIDWORD(v24) = *(_DWORD *)(v24 + 12);
    *(_DWORD *)(v24 + 12) = v220;
    LODWORD(v24) = *((_DWORD *)v1 + 1);
    v220 = (char *)HIDWORD(v24);
    *((_DWORD *)v1 + 1) = v24 + 16;
  v26 = (int)v219;
  v25 = v218;
  if ( v218 != v219 )
      v29 = (int *)(*(_DWORD *)v25 - 12);
      if ( v29 != &dword_28898C0 )
        v27 = (unsigned int *)(*(_DWORD *)v25 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      v25 += 4;
    while ( v25 != (char *)v26 );
    v25 = v218;
  if ( v25 )
    operator delete(v25);
  v30 = v217 - 12;
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v217 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v215 - 12);
  if ( (int *)(v215 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v215 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = (void *)(v214 - 12);
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v214 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  sub_119C884((void **)&v210, "button.show_worker_threads");
  sub_119C884((void **)&v207, "button.debug");
  sub_119C884((void **)&v208, "button.debug_show_worker_threads");
  v211 = 0;
  v212 = 0;
  v213 = 0;
  v33 = (char *)operator new(8u);
  v211 = v33;
  v213 = v33 + 8;
  v212 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v207,
                   (int)&v209,
                   (int)v33);
  v34 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v34 == HIDWORD(v34) )
      (int)&v210);
    *(_DWORD *)v34 = v210;
    v210 = (char *)&unk_28898CC;
    *(_DWORD *)(v34 + 4) = 0;
    *(_DWORD *)(v34 + 8) = 0;
    *(_DWORD *)(v34 + 12) = 0;
    *(_DWORD *)(v34 + 4) = v211;
    v211 = 0;
    HIDWORD(v34) = *(_DWORD *)(v34 + 8);
    *(_DWORD *)(v34 + 8) = v212;
    v212 = (char *)HIDWORD(v34);
    HIDWORD(v34) = *(_DWORD *)(v34 + 12);
    *(_DWORD *)(v34 + 12) = v213;
    LODWORD(v34) = *((_DWORD *)v1 + 1);
    v213 = (char *)HIDWORD(v34);
    *((_DWORD *)v1 + 1) = v34 + 16;
  v36 = (int)v212;
  v35 = v211;
  if ( v211 != v212 )
      v39 = (int *)(*(_DWORD *)v35 - 12);
      if ( v39 != &dword_28898C0 )
        v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v39);
      v35 += 4;
    while ( v35 != (char *)v36 );
    v35 = v211;
  if ( v35 )
    operator delete(v35);
  v40 = v210 - 12;
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v210 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = (void *)(v208 - 12);
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v208 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  v42 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v207 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  sub_119C884((void **)&v203, "button.show_render_chunks");
  sub_119C884((void **)&v200, "button.debug");
  sub_119C884((void **)&v201, "button.debug_show_render_chunks");
  v204 = 0;
  v205 = 0;
  v206 = 0;
  v43 = (char *)operator new(8u);
  v204 = v43;
  v206 = v43 + 8;
  v205 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v200,
                   (int)&v202,
                   (int)v43);
  v44 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v44 == HIDWORD(v44) )
      (int)&v203);
    *(_DWORD *)v44 = v203;
    v203 = (char *)&unk_28898CC;
    *(_DWORD *)(v44 + 4) = 0;
    *(_DWORD *)(v44 + 8) = 0;
    *(_DWORD *)(v44 + 12) = 0;
    *(_DWORD *)(v44 + 4) = v204;
    v204 = 0;
    HIDWORD(v44) = *(_DWORD *)(v44 + 8);
    *(_DWORD *)(v44 + 8) = v205;
    v205 = (char *)HIDWORD(v44);
    HIDWORD(v44) = *(_DWORD *)(v44 + 12);
    *(_DWORD *)(v44 + 12) = v206;
    LODWORD(v44) = *((_DWORD *)v1 + 1);
    v206 = (char *)HIDWORD(v44);
    *((_DWORD *)v1 + 1) = v44 + 16;
  v46 = (int)v205;
  v45 = v204;
  if ( v204 != v205 )
      v49 = (int *)(*(_DWORD *)v45 - 12);
      if ( v49 != &dword_28898C0 )
        v47 = (unsigned int *)(*(_DWORD *)v45 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v49);
      v45 += 4;
    while ( v45 != (char *)v46 );
    v45 = v204;
  if ( v45 )
    operator delete(v45);
  v50 = v203 - 12;
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v203 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v50);
  v51 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v201 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v52 = (void *)(v200 - 12);
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v200 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  sub_119C884((void **)&v196, "button.show_debug_textures");
  sub_119C884((void **)&v193, "button.debug");
  sub_119C884((void **)&v194, "button.debug_show_debug_textures");
  v197 = 0;
  v198 = 0;
  v199 = 0;
  v53 = (char *)operator new(8u);
  v197 = v53;
  v199 = v53 + 8;
  v198 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v193,
                   (int)&v195,
                   (int)v53);
  v54 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v54 == HIDWORD(v54) )
      (int)&v196);
    *(_DWORD *)v54 = v196;
    v196 = (char *)&unk_28898CC;
    *(_DWORD *)(v54 + 4) = 0;
    *(_DWORD *)(v54 + 8) = 0;
    *(_DWORD *)(v54 + 12) = 0;
    *(_DWORD *)(v54 + 4) = v197;
    v197 = 0;
    HIDWORD(v54) = *(_DWORD *)(v54 + 8);
    *(_DWORD *)(v54 + 8) = v198;
    v198 = (char *)HIDWORD(v54);
    HIDWORD(v54) = *(_DWORD *)(v54 + 12);
    *(_DWORD *)(v54 + 12) = v199;
    LODWORD(v54) = *((_DWORD *)v1 + 1);
    v199 = (char *)HIDWORD(v54);
    *((_DWORD *)v1 + 1) = v54 + 16;
  v56 = (int)v198;
  v55 = v197;
  if ( v197 != v198 )
      v59 = (int *)(*(_DWORD *)v55 - 12);
      if ( v59 != &dword_28898C0 )
        v57 = (unsigned int *)(*(_DWORD *)v55 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v59);
      v55 += 4;
    while ( v55 != (char *)v56 );
    v55 = v197;
  if ( v55 )
    operator delete(v55);
  v60 = v196 - 12;
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v196 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v194 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  v62 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v193 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  sub_119C884((void **)&v189, "button.hotbar_drop_all");
  sub_119C884((void **)&v186, "button.control");
  sub_119C884((void **)&v187, "button.drop");
  v190 = 0;
  v191 = 0;
  v192 = 0;
  v63 = (char *)operator new(8u);
  v190 = v63;
  v192 = v63 + 8;
  v191 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v186,
                   (int)&v188,
                   (int)v63);
  v64 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v64 == HIDWORD(v64) )
      (int)&v189);
    *(_DWORD *)v64 = v189;
    v189 = (char *)&unk_28898CC;
    *(_DWORD *)(v64 + 4) = 0;
    *(_DWORD *)(v64 + 8) = 0;
    *(_DWORD *)(v64 + 12) = 0;
    *(_DWORD *)(v64 + 4) = v190;
    v190 = 0;
    HIDWORD(v64) = *(_DWORD *)(v64 + 8);
    *(_DWORD *)(v64 + 8) = v191;
    v191 = (char *)HIDWORD(v64);
    HIDWORD(v64) = *(_DWORD *)(v64 + 12);
    *(_DWORD *)(v64 + 12) = v192;
    LODWORD(v64) = *((_DWORD *)v1 + 1);
    v192 = (char *)HIDWORD(v64);
    *((_DWORD *)v1 + 1) = v64 + 16;
  v66 = (int)v191;
  v65 = v190;
  if ( v190 != v191 )
      v69 = (int *)(*(_DWORD *)v65 - 12);
      if ( v69 != &dword_28898C0 )
        v67 = (unsigned int *)(*(_DWORD *)v65 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v69);
      v65 += 4;
    while ( v65 != (char *)v66 );
    v65 = v190;
  if ( v65 )
    operator delete(v65);
  v70 = v189 - 12;
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v189 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v70);
  v71 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v187 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v71);
  v72 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v186 - 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  sub_119C884((void **)&v182, "button.texel_aa");
  sub_119C884((void **)&v179, "button.control");
  sub_119C884((void **)&v180, "button.debug_texel_aa");
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v73 = (char *)operator new(8u);
  v183 = v73;
  v185 = v73 + 8;
  v184 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v179,
                   (int)&v181,
                   (int)v73);
  v74 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v74 == HIDWORD(v74) )
      (int)&v182);
    *(_DWORD *)v74 = v182;
    v182 = (char *)&unk_28898CC;
    *(_DWORD *)(v74 + 4) = 0;
    *(_DWORD *)(v74 + 8) = 0;
    *(_DWORD *)(v74 + 12) = 0;
    *(_DWORD *)(v74 + 4) = v183;
    v183 = 0;
    HIDWORD(v74) = *(_DWORD *)(v74 + 8);
    *(_DWORD *)(v74 + 8) = v184;
    v184 = (char *)HIDWORD(v74);
    HIDWORD(v74) = *(_DWORD *)(v74 + 12);
    *(_DWORD *)(v74 + 12) = v185;
    LODWORD(v74) = *((_DWORD *)v1 + 1);
    v185 = (char *)HIDWORD(v74);
    *((_DWORD *)v1 + 1) = v74 + 16;
  v76 = (int)v184;
  v75 = v183;
  if ( v183 != v184 )
      v79 = (int *)(*(_DWORD *)v75 - 12);
      if ( v79 != &dword_28898C0 )
        v77 = (unsigned int *)(*(_DWORD *)v75 - 4);
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v79);
      v75 += 4;
    while ( v75 != (char *)v76 );
    v75 = v183;
  if ( v75 )
    operator delete(v75);
  v80 = v182 - 12;
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v147 = (unsigned int *)(v182 - 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  v81 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v149 = (unsigned int *)(v180 - 4);
        v150 = __ldrex(v149);
      while ( __strex(v150 - 1, v149) );
      v150 = (*v149)--;
    if ( v150 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  v82 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v151 = (unsigned int *)(v179 - 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  sub_119C884((void **)&v175, "button.enable_text_to_speech");
  sub_119C884((void **)&v172, "button.control");
  sub_119C884((void **)&v173, "button.text_to_speech");
  v176 = 0;
  v177 = 0;
  v178 = 0;
  v83 = (char *)operator new(8u);
  v176 = v83;
  v178 = v83 + 8;
  v177 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v172,
                   (int)&v174,
                   (int)v83);
  v84 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v84 == HIDWORD(v84) )
      (int)&v175);
    *(_DWORD *)v84 = v175;
    v175 = (char *)&unk_28898CC;
    *(_DWORD *)(v84 + 4) = 0;
    *(_DWORD *)(v84 + 8) = 0;
    *(_DWORD *)(v84 + 12) = 0;
    *(_DWORD *)(v84 + 4) = v176;
    v176 = 0;
    HIDWORD(v84) = *(_DWORD *)(v84 + 8);
    *(_DWORD *)(v84 + 8) = v177;
    v177 = (char *)HIDWORD(v84);
    HIDWORD(v84) = *(_DWORD *)(v84 + 12);
    *(_DWORD *)(v84 + 12) = v178;
    LODWORD(v84) = *((_DWORD *)v1 + 1);
    v178 = (char *)HIDWORD(v84);
    *((_DWORD *)v1 + 1) = v84 + 16;
  v86 = (int)v177;
  v85 = v176;
  if ( v176 != v177 )
      v89 = (int *)(*(_DWORD *)v85 - 12);
      if ( v89 != &dword_28898C0 )
        v87 = (unsigned int *)(*(_DWORD *)v85 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v89);
      v85 += 4;
    while ( v85 != (char *)v86 );
    v85 = v176;
  if ( v85 )
    operator delete(v85);
  v90 = v175 - 12;
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v153 = (unsigned int *)(v175 - 4);
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
      v154 = (*v153)--;
    if ( v154 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v90);
  v91 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v155 = (unsigned int *)(v173 - 4);
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
      v156 = (*v155)--;
    if ( v156 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v91);
  v92 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v157 = (unsigned int *)(v172 - 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  sub_119C884((void **)&v168, "button.creative_select_with_data");
  sub_119C884((void **)&v165, "button.control");
  sub_119C884((void **)&v166, "button.creative_select");
  v169 = 0;
  v170 = 0;
  v171 = 0;
  v93 = (char *)operator new(8u);
  v169 = v93;
  v171 = v93 + 8;
  v170 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v165,
                   (int)&v167,
                   (int)v93);
  v94 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v94 == HIDWORD(v94) )
      (int)&v168);
    *(_DWORD *)v94 = v168;
    v168 = (char *)&unk_28898CC;
    *(_DWORD *)(v94 + 4) = 0;
    *(_DWORD *)(v94 + 8) = 0;
    *(_DWORD *)(v94 + 12) = 0;
    *(_DWORD *)(v94 + 4) = v169;
    v169 = 0;
    HIDWORD(v94) = *(_DWORD *)(v94 + 8);
    *(_DWORD *)(v94 + 8) = v170;
    v170 = (char *)HIDWORD(v94);
    HIDWORD(v94) = *(_DWORD *)(v94 + 12);
    *(_DWORD *)(v94 + 12) = v171;
    LODWORD(v94) = *((_DWORD *)v1 + 1);
    v171 = (char *)HIDWORD(v94);
    *((_DWORD *)v1 + 1) = v94 + 16;
  v96 = (int)v170;
  v95 = v169;
  if ( v169 != v170 )
      v99 = (int *)(*(_DWORD *)v95 - 12);
      if ( v99 != &dword_28898C0 )
        v97 = (unsigned int *)(*(_DWORD *)v95 - 4);
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v99);
      v95 += 4;
    while ( v95 != (char *)v96 );
    v95 = v169;
  if ( v95 )
    operator delete(v95);
  v100 = v168 - 12;
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v159 = (unsigned int *)(v168 - 4);
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
      v160 = (*v159)--;
    if ( v160 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v100);
  v101 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v161 = (unsigned int *)(v166 - 4);
        v162 = __ldrex(v161);
      while ( __strex(v162 - 1, v161) );
      v162 = (*v161)--;
    if ( v162 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v101);
  v102 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v163 = (unsigned int *)(v165 - 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 - 1, v163) );
      v164 = (*v163)--;
    if ( v164 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v102);
}


void __fastcall ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  int v3; // r9@1
  __int64 v4; // kr00_8@1
  char *v5; // r1@2
  _DWORD *v6; // r7@2
  unsigned int *v7; // r2@3
  signed int v8; // r6@5
  char *v9; // r5@9
  int *v10; // r0@10
  int v11; // r6@14
  void *v12; // r7@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int *v15; // r0@24
  void *v16; // r0@29
  void *v17; // r0@30
  unsigned int *v18; // r2@32
  signed int v19; // r1@34
  unsigned int *v20; // r2@36
  signed int v21; // r1@38
  int v22; // [sp+Ch] [bp-74h]@1
  int v23; // [sp+10h] [bp-70h]@1
  int v24; // [sp+18h] [bp-68h]@30
  int v25; // [sp+20h] [bp-60h]@29
  char v26; // [sp+24h] [bp-5Ch]@29
  void *v27; // [sp+4Ch] [bp-34h]@1
  void *v28; // [sp+50h] [bp-30h]@1
  int v29; // [sp+54h] [bp-2Ch]@1
  char v30; // [sp+58h] [bp-28h]@2

  v23 = a1;
  v22 = a3;
  v3 = a2;
  ClientInputMappingFactory::_createScreenKeyboardMapping((ClientInputMappingFactory *)&v27);
  v4 = *(_QWORD *)v3;
  *(_DWORD *)v3 = v27;
  v27 = 0;
  *(_DWORD *)(v3 + 4) = v28;
  v28 = 0;
  *(_DWORD *)(v3 + 8) = v29;
  v29 = 0;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = &v30;
    v6 = (_DWORD *)v4;
    do
    {
      v10 = (int *)(*v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*v6 - 4);
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
          v9 = v5;
          j_j_j_j_j__ZdlPv_9_1(v10);
          v5 = v9;
      }
      v6 += 3;
    }
    while ( v6 != (_DWORD *)HIDWORD(v4) );
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
  v11 = (int)v28;
  v12 = v27;
  if ( v27 != v28 )
      v15 = (int *)(*(_DWORD *)v12 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v12 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v12 = (char *)v12 + 12;
    while ( v12 != (void *)v11 );
    v12 = v27;
  if ( v12 )
    operator delete(v12);
  ClientInputMappingFactory::_createScreenMouseMapping((ClientInputMappingFactory *)&v26);
  MouseInputMapping::operator=(v22, (int)&v26);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)&v26);
  ClientInputMappingFactory::_addInvariantKeyboardControls(v23, v3, v22);
  sub_119C884((void **)&v25, "button.menu_inventory_cancel");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v23, v3, v22, &v25, 14, 0);
  v16 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v24, "button.menu_inventory_drop");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v23, v3, v22, &v24, 3, 0);
  v17 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v24 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


void __fastcall ClientInputMappingFactory::_createRideableKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  ClientInputMappingFactory::_createRideableKeyboardAndMouseMapping(a1, a2, a3);
}


void __fastcall ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(int a1, int a2, int a3, int *a4, int a5, char a6)
{
  int v6; // r6@1
  int v7; // r4@1
  int *v8; // r8@1
  int v9; // r10@1
  KeyboardRemappingLayout *v10; // r7@1
  int *v11; // r5@1
  __int64 v12; // kr00_8@1
  int v13; // r4@2
  __int64 v14; // r0@4
  __int64 v15; // r0@6
  int *v16; // r0@7
  void *v17; // r0@13
  void *v18; // r0@14
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  int v23; // [sp+4h] [bp-44h]@2
  int v24; // [sp+8h] [bp-40h]@1
  void *ptr; // [sp+Ch] [bp-3Ch]@11
  int v26; // [sp+18h] [bp-30h]@1
  char v27; // [sp+1Fh] [bp-29h]@1

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  v27 = a6;
  Remapping::getActionName((void **)&v26, a5);
  v10 = (KeyboardRemappingLayout *)(v7 + 148);
  RemappingLayout::getKeymappingByAction((int)&v24, v7 + 148, (const void **)&v26);
  v12 = *(_QWORD *)Keymapping::getKeys((Keymapping *)&v24);
  v11 = (int *)v12;
  if ( (_DWORD)v12 != HIDWORD(v12) )
  {
    do
    {
      v13 = KeyboardRemappingLayout::getAdjustedKey(v10, *v11);
      v23 = v13;
      if ( Keymapping::isAssigned((Keymapping *)&v24) == 1 )
      {
        if ( Keymapping::isAltKey((Keymapping *)&v24) == 1 )
        {
          v14 = *(_QWORD *)(v9 + 4);
          if ( (_DWORD)v14 == HIDWORD(v14) )
          {
            std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::_M_emplace_back_aux<std::string const&,int &>(
              (_QWORD *)v9,
              v8,
              &v23);
          }
          else
            sub_119C854((int *)v14, v8)[1] = v13;
            *(_DWORD *)(v9 + 4) += 8;
        }
        else
          v15 = *(_QWORD *)(v6 + 4);
          if ( (_DWORD)v15 == HIDWORD(v15) )
            std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<std::string const&,int &,FocusImpact &>(
              (unsigned __int64 *)v6,
              &v23,
              &v27);
            v16 = sub_119C854((int *)v15, v8);
            v16[1] = v13;
            *((_BYTE *)v16 + 8) = a6;
            *(_DWORD *)(v6 + 4) += 12;
      }
      ++v11;
    }
    while ( (int *)HIDWORD(v12) != v11 );
  }
  if ( ptr )
    operator delete(ptr);
  v17 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(float a1, int a2, int a3)
{
  ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(a1, a2, a3);
}


void __fastcall ClientInputMappingFactory::_updateKeyboardAndMouseControls(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r6@1
  unsigned int v2; // r9@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r4@1
  int *v5; // r7@1
  int v6; // r10@2
  _DWORD *v7; // r8@2
  int v8; // r6@2
  _DWORD *v9; // r1@4
  size_t v10; // r2@4
  int v11; // r5@8
  unsigned int v12; // r9@14
  __int64 v13; // kr08_8@14
  unsigned int v14; // r10@14
  int *v15; // r7@14
  int v16; // r4@15
  _DWORD *v17; // r8@15
  int v18; // r5@15
  _DWORD *v19; // r1@17
  size_t v20; // r2@17
  int v21; // r6@19
  int v22; // r7@21
  unsigned __int64 *v23; // r8@27
  unsigned int v24; // r10@27
  __int64 v25; // kr10_8@27
  int *v26; // r9@27
  int v27; // r8@28
  _DWORD *v28; // r11@28
  int v29; // r6@28
  _DWORD *v30; // r1@30
  size_t v31; // r2@30
  int v32; // r7@32
  int v33; // r7@34
  int v34; // r5@34
  unsigned int v35; // r9@39
  __int64 v36; // kr18_8@39
  unsigned int v37; // r10@39
  int *v38; // r7@39
  int v39; // r4@40
  _DWORD *v40; // r8@40
  int v41; // r5@40
  _DWORD *v42; // r1@42
  size_t v43; // r2@42
  int v44; // r6@44
  int v45; // r7@46
  unsigned int v46; // r10@52
  __int64 v47; // kr20_8@52
  int *v48; // r9@52
  int v49; // r8@53
  _DWORD *v50; // r11@53
  int v51; // r6@53
  _DWORD *v52; // r1@55
  size_t v53; // r2@55
  int v54; // r7@57
  int v55; // r7@61
  int v56; // r6@61
  unsigned int v57; // r8@65
  __int64 v58; // kr28_8@65
  unsigned int v59; // r10@65
  int *v60; // r5@65
  int v61; // r4@66
  _DWORD *v62; // r11@66
  int v63; // r6@66
  _DWORD *v64; // r1@68
  size_t v65; // r2@68
  int v66; // r7@70
  int v67; // r7@72
  unsigned int v68; // r8@78
  unsigned int v69; // r9@78
  int v70; // r11@78
  int *v71; // r4@78
  int v72; // r5@79
  _DWORD *v73; // r10@79
  int v74; // r6@79
  _DWORD *v75; // r1@81
  size_t v76; // r2@81
  int v77; // r7@83
  int v78; // r4@85
  void *v79; // r4@110
  void *v80; // r6@110
  unsigned int *v81; // r2@112
  signed int v82; // r1@114
  int *v83; // r0@120
  void *v84; // r4@125
  void *v85; // r6@125
  unsigned int *v86; // r2@127
  signed int v87; // r1@129
  int *v88; // r0@135
  void *v89; // r4@140
  void *v90; // r6@140
  unsigned int *v91; // r2@142
  signed int v92; // r1@144
  int *v93; // r0@150
  void *v94; // r4@155
  void *v95; // r6@155
  unsigned int *v96; // r2@157
  signed int v97; // r1@159
  int *v98; // r0@165
  void *v99; // r4@170
  void *v100; // r6@170
  unsigned int *v101; // r2@172
  signed int v102; // r1@174
  int *v103; // r0@180
  unsigned int *v104; // r2@186
  signed int v105; // r1@188
  unsigned int *v106; // r2@190
  signed int v107; // r1@192
  unsigned int *v108; // r2@194
  signed int v109; // r1@196
  unsigned int *v110; // r2@198
  signed int v111; // r1@200
  unsigned int *v112; // r2@202
  signed int v113; // r1@204
  unsigned int *v114; // r2@206
  signed int v115; // r1@208
  unsigned int *v116; // r2@210
  signed int v117; // r1@212
  ClientInputMappingFactory *v118; // [sp+Ch] [bp-17Ch]@2
  ClientInputMappingFactory *v119; // [sp+Ch] [bp-17Ch]@15
  ClientInputMappingFactory *v120; // [sp+Ch] [bp-17Ch]@27
  void *v121; // [sp+14h] [bp-174h]@78
  void *v122; // [sp+1Ch] [bp-16Ch]@65
  void *v123; // [sp+24h] [bp-164h]@52
  void *v124; // [sp+2Ch] [bp-15Ch]@39
  void *v125; // [sp+34h] [bp-154h]@27
  void *v126; // [sp+3Ch] [bp-14Ch]@14
  void *s1; // [sp+44h] [bp-144h]@1
  unsigned __int64 v128[4]; // [sp+48h] [bp-140h]@1
  char v129; // [sp+6Ch] [bp-11Ch]@52
  void *v130; // [sp+74h] [bp-114h]@1
  void *v131; // [sp+78h] [bp-110h]@1
  int v132; // [sp+7Ch] [bp-10Ch]@1
  unsigned __int64 v133[4]; // [sp+80h] [bp-108h]@1
  char v134; // [sp+A4h] [bp-E4h]@27
  void *v135; // [sp+ACh] [bp-DCh]@1
  void *v136; // [sp+B0h] [bp-D8h]@1
  int v137; // [sp+B4h] [bp-D4h]@1
  unsigned __int64 v138[4]; // [sp+B8h] [bp-D0h]@1
  char v139; // [sp+DCh] [bp-ACh]@65
  void *v140; // [sp+E4h] [bp-A4h]@1
  void *v141; // [sp+E8h] [bp-A0h]@1
  int v142; // [sp+ECh] [bp-9Ch]@1
  unsigned __int64 v143[4]; // [sp+F0h] [bp-98h]@1
  char v144; // [sp+114h] [bp-74h]@14
  void *v145; // [sp+11Ch] [bp-6Ch]@1
  void *v146; // [sp+120h] [bp-68h]@1
  int v147; // [sp+124h] [bp-64h]@1
  unsigned __int64 v148[4]; // [sp+128h] [bp-60h]@1
  char v149; // [sp+14Ch] [bp-3Ch]@78
  void *v150; // [sp+154h] [bp-34h]@1
  void *v151; // [sp+158h] [bp-30h]@1
  int v152; // [sp+15Ch] [bp-2Ch]@1

  v1 = this;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  _aeabi_memclr8(v148, 36);
  ClientInputMappingFactory::_createBedKeyboardAndMouseMapping((int)v1, (int)&v150, (int)v148);
  v145 = 0;
  v146 = 0;
  v147 = 0;
  _aeabi_memclr8(v143, 36);
  ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping((int)v1, (int)&v145, (int)v143);
  v140 = 0;
  v141 = 0;
  v142 = 0;
  _aeabi_memclr8(v138, 36);
  ClientInputMappingFactory::_createBoatKeyboardAndMouseMapping((int)v1, (int)&v140, (int)v138);
  v135 = 0;
  v136 = 0;
  v137 = 0;
  _aeabi_memclr8(v133, 36);
  ClientInputMappingFactory::_createNormalGamePlayKeyboardAndMouseMapping((int)v1, (int)&v135, (int)v133);
  v130 = 0;
  v131 = 0;
  v132 = 0;
  _aeabi_memclr8(v128, 36);
  ClientInputMappingFactory::_createRideableKeyboardAndMouseMapping((int)v1, (int)&v130, (int)v128);
  sub_119C884(&s1, "screen");
  ClientInputMappingFactory::_activateMapping((int)v1, (int **)&s1);
  v2 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v3 = *(_QWORD *)((char *)v1 + 4);
  v4 = v2 % (unsigned int)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v5 = *(int **)(v3 + 4 * v4);
  if ( v5 )
  {
    v6 = *v5;
    v118 = v1;
    v7 = s1;
    v8 = *(_DWORD *)(*v5 + 308);
    while ( 1 )
    {
      if ( v8 == v2 )
      {
        v9 = *(_DWORD **)(v6 + 4);
        v10 = *(v7 - 3);
        if ( v10 == *(v9 - 3) && !memcmp(v7, v9, v10) )
          break;
      }
      if ( *(_DWORD *)v6 )
        v8 = *(_DWORD *)(v3 + 308);
        v5 = (int *)v6;
        v6 = *(_DWORD *)v6;
        if ( *(_DWORD *)(v3 + 308) % HIDWORD(v3) == v4 )
          continue;
      goto LABEL_8;
    }
    if ( !v5 )
LABEL_8:
      v11 = 0;
      goto LABEL_9;
    v11 = *v5;
LABEL_9:
    v1 = v118;
  }
  else
    v11 = 0;
  if ( v11 )
    v11 += 8;
  if ( v7 - 3 != &dword_28898C0 )
    v104 = v7 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
    else
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v11, (unsigned __int64 *)&v145);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v11 + 12, v143);
  std::vector<std::string,std::allocator<std::string>>::operator=(v11 + 24, (unsigned __int64 *)((char *)&v143[1] + 4));
  std::vector<std::string,std::allocator<std::string>>::operator=(v11 + 36, &v143[3]);
  *(_BYTE *)(v11 + 48) = v144;
  sub_119C884(&v126, "gamePlayNormal");
  ClientInputMappingFactory::_activateMapping((int)v1, (int **)&v126);
  v12 = sub_119C9A4((int *)v126, *((_DWORD *)v126 - 3), -955291385);
  v13 = *(_QWORD *)((char *)v1 + 4);
  v14 = v12 % (unsigned int)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v15 = *(int **)(v13 + 4 * v14);
  if ( v15 )
    v16 = *v15;
    v17 = v126;
    v119 = v1;
    v18 = *(_DWORD *)(*v15 + 308);
      if ( v18 == v12 )
        v19 = *(_DWORD **)(v16 + 4);
        v20 = *(v17 - 3);
        if ( v20 == *(v19 - 3) && !memcmp(v17, v19, v20) )
      v21 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 )
        v18 = *(_DWORD *)(v21 + 308);
        v15 = (int *)v13;
        v16 = *(_DWORD *)v13;
        if ( *(_DWORD *)(v21 + 308) % HIDWORD(v13) == v14 )
      goto LABEL_21;
    if ( !v15 )
LABEL_21:
      v22 = 0;
      goto LABEL_22;
    v22 = *v15;
LABEL_22:
    v1 = v119;
    v22 = 0;
  if ( v22 )
    v22 += 8;
  if ( v17 - 3 != &dword_28898C0 )
    v106 = v17 - 1;
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v22, (unsigned __int64 *)&v135);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v22 + 12, v133);
  v23 = (unsigned __int64 *)((char *)&v133[1] + 4);
  std::vector<std::string,std::allocator<std::string>>::operator=(v22 + 24, (unsigned __int64 *)((char *)&v133[1] + 4));
  std::vector<std::string,std::allocator<std::string>>::operator=(v22 + 36, &v133[3]);
  *(_BYTE *)(v22 + 48) = v134;
  sub_119C884(&v125, "gamePlayFlying");
  ClientInputMappingFactory::_activateMapping((int)v1, (int **)&v125);
  v24 = sub_119C9A4((int *)v125, *((_DWORD *)v125 - 3), -955291385);
  v120 = v1;
  v25 = *(_QWORD *)((char *)v1 + 4);
  v26 = *(int **)(v25 + 4 * (v24 % HIDWORD(v25)));
  if ( v26 )
    v27 = *v26;
    v28 = v125;
    v29 = *(_DWORD *)(*v26 + 308);
      if ( v29 == v24 )
        v30 = *(_DWORD **)(v27 + 4);
        v31 = *(v28 - 3);
        if ( v31 == *(v30 - 3) && !memcmp(v28, v30, v31) )
      v32 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 )
        v29 = *(_DWORD *)(v32 + 308);
        v26 = (int *)v27;
        v27 = *(_DWORD *)v27;
        if ( *(_DWORD *)(v32 + 308) % HIDWORD(v25) == v24 % HIDWORD(v25) )
      v33 = 0;
      v34 = (int)v120;
      v23 = (unsigned __int64 *)((char *)&v133[1] + 4);
      goto LABEL_36;
    v34 = (int)v120;
    v23 = (unsigned __int64 *)((char *)&v133[1] + 4);
    if ( v26 )
      v33 = *v26;
    v33 = 0;
    v34 = (int)v1;
LABEL_36:
  if ( v33 )
    v33 += 8;
  if ( v28 - 3 != &dword_28898C0 )
    v108 = v28 - 1;
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v33, (unsigned __int64 *)&v135);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v33 + 12, v133);
  std::vector<std::string,std::allocator<std::string>>::operator=(v33 + 24, v23);
  std::vector<std::string,std::allocator<std::string>>::operator=(v33 + 36, &v133[3]);
  *(_BYTE *)(v33 + 48) = v134;
  sub_119C884(&v124, "gamePlayRiding");
  ClientInputMappingFactory::_activateMapping(v34, (int **)&v124);
  v35 = sub_119C9A4((int *)v124, *((_DWORD *)v124 - 3), -955291385);
  v36 = *(_QWORD *)(v34 + 4);
  v37 = v35 % (unsigned int)(*(_QWORD *)(v34 + 4) >> 32);
  v38 = *(int **)(v36 + 4 * v37);
  if ( v38 )
    v39 = *v38;
    v40 = v124;
    v41 = *(_DWORD *)(*v38 + 308);
      if ( v41 == v35 )
        v42 = *(_DWORD **)(v39 + 4);
        v43 = *(v40 - 3);
        if ( v43 == *(v42 - 3) && !memcmp(v40, v42, v43) )
      v44 = *(_DWORD *)v39;
      if ( *(_DWORD *)v39 )
        v41 = *(_DWORD *)(v44 + 308);
        v38 = (int *)v36;
        v39 = *(_DWORD *)v36;
        if ( *(_DWORD *)(v44 + 308) % HIDWORD(v36) == v37 )
      goto LABEL_46;
    if ( !v38 )
LABEL_46:
      v45 = 0;
      goto LABEL_47;
    v45 = *v38;
LABEL_47:
    v45 = 0;
  if ( v45 )
    v45 += 8;
  if ( v40 - 3 != &dword_28898C0 )
    v110 = v40 - 1;
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v45, (unsigned __int64 *)&v130);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v45 + 12, v128);
  std::vector<std::string,std::allocator<std::string>>::operator=(v45 + 24, (unsigned __int64 *)((char *)&v128[1] + 4));
  std::vector<std::string,std::allocator<std::string>>::operator=(v45 + 36, &v128[3]);
  *(_BYTE *)(v45 + 48) = v129;
  sub_119C884(&v123, "gamePlayBoating");
  ClientInputMappingFactory::_activateMapping(v34, (int **)&v123);
  v46 = sub_119C9A4((int *)v123, *((_DWORD *)v123 - 3), -955291385);
  v47 = *(_QWORD *)(v34 + 4);
  v48 = *(int **)(v47 + 4 * (v46 % HIDWORD(v47)));
  if ( v48 )
    v49 = *v48;
    v50 = v123;
    v51 = *(_DWORD *)(*v48 + 308);
      if ( v51 == v46 )
        v52 = *(_DWORD **)(v49 + 4);
        v53 = *(v50 - 3);
        if ( v53 == *(v52 - 3) && !memcmp(v50, v52, v53) )
      v54 = *(_DWORD *)v49;
      if ( *(_DWORD *)v49 )
        v51 = *(_DWORD *)(v54 + 308);
        v48 = (int *)v49;
        v49 = *(_DWORD *)v49;
        if ( *(_DWORD *)(v54 + 308) % HIDWORD(v47) == v46 % HIDWORD(v47) )
      goto LABEL_61;
    v56 = (int)v120;
    if ( v48 )
      v55 = *v48;
      v55 = 0;
LABEL_61:
    v55 = 0;
  if ( v55 )
    v55 += 8;
  if ( v50 - 3 != &dword_28898C0 )
    v112 = v50 - 1;
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v50 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v55, (unsigned __int64 *)&v140);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v55 + 12, v138);
  std::vector<std::string,std::allocator<std::string>>::operator=(v55 + 24, (unsigned __int64 *)((char *)&v138[1] + 4));
  std::vector<std::string,std::allocator<std::string>>::operator=(v55 + 36, &v138[3]);
  *(_BYTE *)(v55 + 48) = v139;
  sub_119C884(&v122, "screenBed");
  ClientInputMappingFactory::_activateMapping(v56, (int **)&v122);
  v57 = sub_119C9A4((int *)v122, *((_DWORD *)v122 - 3), -955291385);
  v58 = *(_QWORD *)(v56 + 4);
  v59 = v57 % (unsigned int)(*(_QWORD *)(v56 + 4) >> 32);
  v60 = *(int **)(v58 + 4 * v59);
  if ( v60 )
    v61 = *v60;
    v62 = v122;
    v63 = *(_DWORD *)(*v60 + 308);
      if ( v63 == v57 )
        v64 = *(_DWORD **)(v61 + 4);
        v65 = *(v62 - 3);
        if ( v65 == *(v64 - 3) && !memcmp(v62, v64, v65) )
      v66 = *(_DWORD *)v61;
      if ( *(_DWORD *)v61 )
        v63 = *(_DWORD *)(v66 + 308);
        v60 = (int *)v58;
        v61 = *(_DWORD *)v58;
        if ( *(_DWORD *)(v66 + 308) % HIDWORD(v58) == v59 )
      goto LABEL_72;
    if ( !v60 )
LABEL_72:
      v67 = 0;
      goto LABEL_73;
    v67 = *v60;
LABEL_73:
    v67 = 0;
  if ( v67 )
    v67 += 8;
  if ( v62 - 3 != &dword_28898C0 )
    v114 = v62 - 1;
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v67, (unsigned __int64 *)&v150);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v67 + 12, v148);
  std::vector<std::string,std::allocator<std::string>>::operator=(v67 + 24, (unsigned __int64 *)((char *)&v148[1] + 4));
  std::vector<std::string,std::allocator<std::string>>::operator=(v67 + 36, &v148[3]);
  *(_BYTE *)(v67 + 48) = v149;
  sub_119C884(&v121, "gamePlayMinecart");
  ClientInputMappingFactory::_activateMapping(v56, (int **)&v121);
  v68 = sub_119C9A4((int *)v121, *((_DWORD *)v121 - 3), -955291385);
  v69 = *(_QWORD *)(v56 + 4) >> 32;
  v70 = v68 % v69;
  v71 = *(int **)(*(_QWORD *)(v56 + 4) + 4 * v70);
  if ( v71 )
    v72 = *v71;
    v73 = v121;
    v74 = *(_DWORD *)(*v71 + 308);
      if ( v74 == v68 )
        v75 = *(_DWORD **)(v72 + 4);
        v76 = *(v73 - 3);
        if ( v76 == *(v75 - 3) && !memcmp(v73, v75, v76) )
      v77 = *(_DWORD *)v72;
      if ( !*(_DWORD *)v72 )
        v78 = 0;
        goto LABEL_107;
      v74 = *(_DWORD *)(v77 + 308);
      v71 = (int *)v72;
      v72 = *(_DWORD *)v72;
      if ( *(_DWORD *)(v77 + 308) % v69 != v70 )
    if ( v71 )
      v78 = *v71;
      v78 = 0;
    v78 = 0;
LABEL_107:
  if ( v78 )
    v78 += 8;
  if ( v73 - 3 != &dword_28898C0 )
    v116 = v73 - 1;
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v73 - 3);
  std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::operator=(v78, (unsigned __int64 *)&v130);
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::operator=(v78 + 12, v128);
  std::vector<std::string,std::allocator<std::string>>::operator=(v78 + 24, (unsigned __int64 *)((char *)&v128[1] + 4));
  std::vector<std::string,std::allocator<std::string>>::operator=(v78 + 36, &v128[3]);
  *(_BYTE *)(v78 + 48) = v129;
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)v128);
  v80 = v131;
  v79 = v130;
  if ( v130 != v131 )
    do
      v83 = (int *)(*(_DWORD *)v79 - 12);
      if ( v83 != &dword_28898C0 )
        v81 = (unsigned int *)(*(_DWORD *)v79 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
        }
        else
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v83);
      v79 = (char *)v79 + 12;
    while ( v79 != v80 );
    v79 = v130;
  if ( v79 )
    operator delete(v79);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)v133);
  v85 = v136;
  v84 = v135;
  if ( v135 != v136 )
      v88 = (int *)(*(_DWORD *)v84 - 12);
      if ( v88 != &dword_28898C0 )
        v86 = (unsigned int *)(*(_DWORD *)v84 - 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v88);
      v84 = (char *)v84 + 12;
    while ( v84 != v85 );
    v84 = v135;
  if ( v84 )
    operator delete(v84);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)v138);
  v90 = v141;
  v89 = v140;
  if ( v140 != v141 )
      v93 = (int *)(*(_DWORD *)v89 - 12);
      if ( v93 != &dword_28898C0 )
        v91 = (unsigned int *)(*(_DWORD *)v89 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v93);
      v89 = (char *)v89 + 12;
    while ( v89 != v90 );
    v89 = v140;
  if ( v89 )
    operator delete(v89);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)v143);
  v95 = v146;
  v94 = v145;
  if ( v145 != v146 )
      v98 = (int *)(*(_DWORD *)v94 - 12);
      if ( v98 != &dword_28898C0 )
        v96 = (unsigned int *)(*(_DWORD *)v94 - 4);
            v97 = __ldrex(v96);
          while ( __strex(v97 - 1, v96) );
          v97 = (*v96)--;
        if ( v97 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v98);
      v94 = (char *)v94 + 12;
    while ( v94 != v95 );
    v94 = v145;
  if ( v94 )
    operator delete(v94);
  MouseInputMapping::~MouseInputMapping((MouseInputMapping *)v148);
  v100 = v151;
  v99 = v150;
  if ( v150 != v151 )
      v103 = (int *)(*(_DWORD *)v99 - 12);
      if ( v103 != &dword_28898C0 )
        v101 = (unsigned int *)(*(_DWORD *)v99 - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v103);
      v99 = (char *)v99 + 12;
    while ( v99 != v100 );
    v99 = v150;
  if ( v99 )
    operator delete(v99);
}


char *__fastcall ClientInputMappingFactory::_createGazeMouseControllerMapping(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  __int64 v5; // kr00_8@2
  int v6; // r1@3
  __int64 v7; // kr08_8@4
  int v8; // r1@5
  int v9; // r1@8
  int v10; // r1@11
  char *result; // r0@15
  int v12; // r1@18
  int v13; // r1@21
  char v14; // [sp+7h] [bp-59h]@13
  int v15; // [sp+8h] [bp-58h]@13
  char v16; // [sp+Fh] [bp-51h]@10
  int v17; // [sp+10h] [bp-50h]@10
  char v18; // [sp+17h] [bp-49h]@7
  int v19; // [sp+18h] [bp-48h]@7
  char v20; // [sp+1Fh] [bp-41h]@2
  int v21; // [sp+20h] [bp-40h]@2
  char v22; // [sp+27h] [bp-39h]@23
  int v23; // [sp+28h] [bp-38h]@23
  char v24; // [sp+2Fh] [bp-31h]@20
  int v25; // [sp+30h] [bp-30h]@20
  char v26; // [sp+37h] [bp-29h]@17
  int v27; // [sp+38h] [bp-28h]@17
  char v28; // [sp+3Fh] [bp-21h]@4
  int v29; // [sp+40h] [bp-20h]@4
  char v30; // [sp+47h] [bp-19h]@1
  int v31; // [sp+48h] [bp-18h]@1
  int v32; // [sp+4Ch] [bp-14h]@1

  v3 = a3;
  v4 = a1;
  ClientInputMappingFactory::_createScreenGameControllerMapping(a1, a2, a3);
  v31 = 0;
  v32 = 0;
  v30 = 1;
  sub_DD769C(v4 + 36, &v32, &v31, &v30);
  if ( v3 )
  {
    v21 = 4;
    v20 = 1;
    v5 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[31],int,bool>(
        (__int64 *)v4,
        "button.switch_to_vr_controller",
        &v21,
        &v20);
      v6 = *(_DWORD *)(v4 + 4);
    }
    else
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[31],int,bool>(
        v4,
        v5,
      v6 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v6;
    v19 = 5;
    v18 = 1;
    if ( v6 == *(_DWORD *)(v4 + 8) )
        &v19,
        &v18);
      v9 = *(_DWORD *)(v4 + 4);
        v6,
      v9 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v9;
    v17 = 6;
    v16 = 1;
    if ( v9 == *(_DWORD *)(v4 + 8) )
        &v17,
        &v16);
      v10 = *(_DWORD *)(v4 + 4);
        v9,
      v10 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v10;
    v15 = 7;
    v14 = 1;
    if ( v10 == *(_DWORD *)(v4 + 8) )
      return std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[31],int,bool>(
               (__int64 *)v4,
               "button.switch_to_vr_controller",
               &v15,
               &v14);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[31],int,bool>(
      v4,
      v10,
      "button.switch_to_vr_controller",
      &v15,
      &v14);
    goto LABEL_25;
  }
  v29 = 4;
  v28 = 1;
  v7 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[28],int,bool>(
      (__int64 *)v4,
      "button.switch_to_controller",
      &v29,
      &v28);
    v8 = *(_DWORD *)(v4 + 4);
  else
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[28],int,bool>(
      v7,
    v8 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v8;
  v27 = 5;
  v26 = 1;
  if ( v8 == *(_DWORD *)(v4 + 8) )
      &v27,
      &v26);
    v12 = *(_DWORD *)(v4 + 4);
      v8,
    v12 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v12;
  v25 = 6;
  v24 = 1;
  if ( v12 == *(_DWORD *)(v4 + 8) )
      &v25,
      &v24);
    v13 = *(_DWORD *)(v4 + 4);
      v12,
    v13 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v13;
  v23 = 7;
  v22 = 1;
  if ( v13 != *(_DWORD *)(v4 + 8) )
      v13,
      &v23,
      &v22);
LABEL_25:
    result = (char *)(*(_DWORD *)(v4 + 4) + 12);
    *(_DWORD *)(v4 + 4) = result;
    return result;
  return std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[28],int,bool>(
           (__int64 *)v4,
           "button.switch_to_controller",
           &v23,
           &v22);
}


void __fastcall ClientInputMappingFactory::_createRideableGameControllerMapping(float a1, int a2, int a3)
{
  ClientInputMappingFactory::_createRideableGameControllerMapping(a1, a2, a3);
}


void __fastcall ClientInputMappingFactory::_addInvariantGamePlayTouchControls(ClientInputMappingFactory *this, TouchInputMapping *a2)
{
  ClientInputMappingFactory::_addInvariantGamePlayTouchControls(this, a2);
}


char *__fastcall ClientInputMappingFactory::_addInvariantGamePlayGameControllerControls(int a1, float a2, int a3)
{
  float v3; // r4@1
  int v4; // r8@1
  int v5; // r6@1
  void *v6; // r0@4
  void *v7; // r0@8
  void *v8; // r0@12
  void *v9; // r0@16
  void *v10; // r0@20
  void *v11; // r0@24
  void *v12; // r0@28
  void *v13; // r0@32
  void *v14; // r0@36
  void *v15; // r0@40
  void *v16; // r0@44
  void *v17; // r0@48
  void *v18; // r0@52
  void *v19; // r0@56
  void *v20; // r0@60
  void *v21; // r0@64
  char *result; // r0@65
  __int64 v23; // kr00_8@66
  int v24; // r1@67
  unsigned int *v25; // r2@73
  signed int v26; // r1@75
  unsigned int *v27; // r2@77
  signed int v28; // r1@79
  unsigned int *v29; // r2@81
  signed int v30; // r1@83
  unsigned int *v31; // r2@85
  signed int v32; // r1@87
  unsigned int *v33; // r2@89
  signed int v34; // r1@91
  unsigned int *v35; // r2@93
  signed int v36; // r1@95
  unsigned int *v37; // r2@97
  signed int v38; // r1@99
  unsigned int *v39; // r2@101
  signed int v40; // r1@103
  unsigned int *v41; // r2@105
  signed int v42; // r1@107
  unsigned int *v43; // r2@109
  signed int v44; // r1@111
  unsigned int *v45; // r2@113
  signed int v46; // r1@115
  unsigned int *v47; // r2@117
  signed int v48; // r1@119
  unsigned int *v49; // r2@121
  signed int v50; // r1@123
  unsigned int *v51; // r2@125
  signed int v52; // r1@127
  unsigned int *v53; // r2@129
  signed int v54; // r1@131
  unsigned int *v55; // r2@133
  signed int v56; // r1@135
  int v57; // [sp+Ch] [bp-BCh]@69
  int v58; // [sp+10h] [bp-B8h]@66
  char v59; // [sp+16h] [bp-B2h]@65
  char v60; // [sp+17h] [bp-B1h]@65
  int v61; // [sp+18h] [bp-B0h]@65
  int v62; // [sp+1Ch] [bp-ACh]@65
  char v63; // [sp+22h] [bp-A6h]@65
  char v64; // [sp+23h] [bp-A5h]@65
  int v65; // [sp+24h] [bp-A4h]@65
  int v66; // [sp+28h] [bp-A0h]@65
  int v67; // [sp+30h] [bp-98h]@61
  int v68; // [sp+38h] [bp-90h]@57
  int v69; // [sp+40h] [bp-88h]@53
  int v70; // [sp+48h] [bp-80h]@49
  int v71; // [sp+50h] [bp-78h]@45
  int v72; // [sp+58h] [bp-70h]@41
  int v73; // [sp+60h] [bp-68h]@37
  int v74; // [sp+68h] [bp-60h]@33
  int v75; // [sp+70h] [bp-58h]@29
  int v76; // [sp+78h] [bp-50h]@25
  int v77; // [sp+80h] [bp-48h]@21
  int v78; // [sp+88h] [bp-40h]@17
  int v79; // [sp+90h] [bp-38h]@13
  int v80; // [sp+98h] [bp-30h]@9
  int v81; // [sp+A0h] [bp-28h]@5
  int v82; // [sp+A8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_119C884((void **)&v82, "button.inventory");
  if ( v4 )
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v82, 14, -1082130432);
  else
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v82, 14, -1082130432);
  v6 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v82 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v81, "button.inventory_left");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v81, 25, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v81, 25, -1082130432);
  v7 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v81 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v80, "button.inventory_right");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v80, 26, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v80, 26, -1082130432);
  v8 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v80 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v79, "button.toggle_perspective");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v79, 15, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v79, 15, -1082130432);
  v9 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v79 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v78, "button.pause");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v78, 27, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v78, 27, -1082130432);
  v10 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v78 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v77, "button.chat");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v77, 23, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v77, 23, -1082130432);
  v11 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v77 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v76, "button.mobeffects");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v76, 30, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v76, 30, -1082130432);
  v12 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v76 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v75, "button.build_or_interact");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v75, 2, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v75, 2, -1082130432);
  v13 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v75 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v74, "button.destroy_or_attack");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v74, 0, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v74, 0, -1082130432);
  v14 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v74 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v73, "button.stick_cursor");
    ClientInputMappingFactory::_bindActionToGameControllerInput(1064514355, v3, v5 + 108, &v73, 0, 1064514355);
    ClientInputMappingFactory::_bindActionToGameControllerInput(1064514355, v3, v5 + 68, &v73, 0, 1064514355);
  v15 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v73 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v72, "button.up");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v72, 22, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v72, 22, -1082130432);
  v16 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v72 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v71, "button.down");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v71, 21, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v71, 21, -1082130432);
  v17 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v71 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v70, "button.left");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v70, 19, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v70, 19, -1082130432);
  v18 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v70 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v69, "button.right");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v69, 20, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v69, 20, -1082130432);
  v19 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v69 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v68, "button.interactwithtoast");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v68, 31, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v68, 31, -1082130432);
  v20 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v68 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v67, "button.creative_select");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 108, &v67, 1, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v3, v5 + 68, &v67, 1, -1082130432);
  v21 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v67 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v65 = 0;
  v66 = 0;
  v64 = 1;
  v63 = 0;
  sub_DD757C(LODWORD(v3) + 12, &v66, &v65, &v64, &v63);
  v61 = 1;
  v62 = 1;
  v60 = 0;
  v59 = 0;
  result = sub_DD757C(LODWORD(v3) + 12, &v62, &v61, &v60, &v59);
  *(_DWORD *)(LODWORD(v3) + 48) = 1;
  if ( v4 == 1 )
    v58 = 1;
    v23 = *(_QWORD *)(LODWORD(v3) + 28);
    if ( (_DWORD)v23 == HIDWORD(v23) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
        (__int64 *)(LODWORD(v3) + 24),
        "button.menu_select",
        &v58);
      v24 = *(_DWORD *)(LODWORD(v3) + 28);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[19],int>(
        LODWORD(v3) + 24,
        v23,
      v24 = *(_DWORD *)(LODWORD(v3) + 28) + 12;
      *(_DWORD *)(LODWORD(v3) + 28) = v24;
    v57 = 1;
    if ( v24 == *(_DWORD *)(LODWORD(v3) + 32) )
      result = std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[23],int>(
                 (__int64 *)(LODWORD(v3) + 24),
                 "button.pointer_pressed",
                 &v57);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[23],int>(
        v24,
        "button.pointer_pressed",
        &v57);
      result = (char *)(*(_DWORD *)(LODWORD(v3) + 28) + 12);
      *(_DWORD *)(LODWORD(v3) + 28) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createScreenTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+8h] [bp-38h]@1
  int v9; // [sp+Ch] [bp-34h]@1
  int v10; // [sp+10h] [bp-30h]@1

  v1 = this;
  TouchInputMapping::TouchInputMapping(this);
  sub_119C884((void **)&v8, "button.pointer_pressed");
  sub_119C884((void **)&v9, "button.menu_select");
  std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(
    (int)v1 + 44,
    (int)&v8,
    (int)&v10);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
}


char *__fastcall ClientInputMappingFactory::_createGazeScreenGameControllerMapping(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  __int64 v5; // kr00_8@1
  int v6; // r1@2
  int v7; // r1@5
  int v8; // r1@8
  int v9; // r1@11
  int v10; // r1@14
  int v11; // r1@17
  int v12; // r1@20
  int v13; // r1@23
  int v14; // r1@26
  int v15; // r1@29
  __int64 v16; // r0@35
  __int64 v17; // kr08_8@37
  int v18; // r1@38
  char *v19; // r10@39
  unsigned int v20; // r3@39
  unsigned int v21; // r2@41
  unsigned int v22; // r11@41
  __int64 v23; // r0@48
  int v24; // r3@49
  char *v25; // r7@49
  char v26; // r6@50
  int v27; // r6@51
  int v28; // r8@51
  int v29; // r5@51
  char *v30; // r1@52
  int (**v31)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@52
  unsigned int *v32; // r2@53
  signed int v33; // r7@55
  int (**v34)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r5@59
  char *v35; // r7@59
  int v36; // r2@60
  void *v37; // r0@60
  int v38; // r1@65
  int v39; // r1@68
  int v40; // r1@71
  int v41; // r1@74
  __int64 v42; // kr28_8@85
  int v43; // r1@86
  __int64 v44; // kr30_8@91
  int v45; // r1@92
  __int64 v46; // kr38_8@97
  __int64 v47; // kr40_8@100
  __int64 v48; // kr48_8@103
  __int64 v49; // kr50_8@106
  char *result; // r0@109
  int v51; // [sp+4h] [bp-BCh]@52
  char v52; // [sp+Ah] [bp-B6h]@109
  char v53; // [sp+Bh] [bp-B5h]@109
  int v54; // [sp+Ch] [bp-B4h]@109
  int v55; // [sp+10h] [bp-B0h]@109
  int v56; // [sp+14h] [bp-ACh]@106
  int v57; // [sp+18h] [bp-A8h]@103
  int v58; // [sp+1Ch] [bp-A4h]@100
  int v59; // [sp+20h] [bp-A0h]@97
  int v60; // [sp+24h] [bp-9Ch]@94
  int v61; // [sp+28h] [bp-98h]@91
  int v62; // [sp+2Ch] [bp-94h]@88
  int v63; // [sp+30h] [bp-90h]@85
  char v64; // [sp+36h] [bp-8Ah]@35
  char v65; // [sp+37h] [bp-89h]@79
  int v66; // [sp+38h] [bp-88h]@79
  int v67; // [sp+3Ch] [bp-84h]@79
  int v68; // [sp+40h] [bp-80h]@76
  int v69; // [sp+44h] [bp-7Ch]@73
  int v70; // [sp+48h] [bp-78h]@70
  int v71; // [sp+4Ch] [bp-74h]@67
  int v72; // [sp+50h] [bp-70h]@64
  int v73; // [sp+54h] [bp-6Ch]@37
  int v74; // [sp+58h] [bp-68h]@31
  char v75; // [sp+5Fh] [bp-61h]@28
  int v76; // [sp+60h] [bp-60h]@28
  char v77; // [sp+67h] [bp-59h]@25
  int v78; // [sp+68h] [bp-58h]@25
  char v79; // [sp+6Fh] [bp-51h]@22
  int v80; // [sp+70h] [bp-50h]@22
  char v81; // [sp+77h] [bp-49h]@19
  int v82; // [sp+78h] [bp-48h]@19
  int v83; // [sp+7Ch] [bp-44h]@16
  int v84; // [sp+80h] [bp-40h]@13
  int v85; // [sp+84h] [bp-3Ch]@10
  int v86; // [sp+88h] [bp-38h]@7
  int v87; // [sp+8Ch] [bp-34h]@4
  int v88; // [sp+90h] [bp-30h]@1
  int v89; // [sp+94h] [bp-2Ch]@1
  char v90; // [sp+98h] [bp-28h]@52

  v3 = a3;
  v4 = a1;
  _aeabi_memclr4(a1, 48);
  v89 = 0;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
    (__int64 *)v4,
    "button.menu_select",
    &v89);
  v5 = *(_QWORD *)(v4 + 4);
  v88 = 0;
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[23],int>(
      (__int64 *)v4,
      "button.pointer_pressed",
      &v88);
    v6 = *(_DWORD *)(v4 + 4);
  }
  else
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[23],int>(
      v4,
      v5,
    v6 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v6;
  v87 = 1;
  if ( v6 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
      "button.menu_cancel",
      &v87);
    v7 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[19],int>(
      v6,
    v7 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v7;
  v86 = 2;
  if ( v7 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[18],int>(
      "button.menu_clear",
      &v86);
    v8 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[18],int>(
      v7,
    v8 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v8;
  v85 = 2;
  if ( v8 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[25],int>(
      "button.controller_select",
      &v85);
    v9 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[25],int>(
      v8,
    v9 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v9;
  v84 = 3;
  if ( v9 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[35],int>(
      "button.controller_secondary_select",
      &v84);
    v10 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[35],int>(
      v9,
    v10 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v10;
  v83 = 2;
  if ( v10 == *(_DWORD *)(v4 + 8) )
      "button.menu_vr_realign",
      &v83);
    v11 = *(_DWORD *)(v4 + 4);
      v10,
    v11 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v11;
  v82 = 4;
  v81 = 1;
  if ( v11 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[15],int,bool>(
      "button.menu_up",
      &v82,
      &v81);
    v12 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[15],int,bool>(
      v11,
    v12 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v12;
  v80 = 5;
  v79 = 1;
  if ( v12 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[17],int,bool>(
      "button.menu_down",
      &v80,
      &v79);
    v13 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[17],int,bool>(
      v12,
    v13 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v13;
  v78 = 6;
  v77 = 1;
  if ( v13 == *(_DWORD *)(v4 + 8) )
      "button.menu_left",
      &v78,
      &v77);
    v14 = *(_DWORD *)(v4 + 4);
      v13,
    v14 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v14;
  v76 = 7;
  v75 = 1;
  if ( v14 == *(_DWORD *)(v4 + 8) )
    std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[18],int,bool>(
      "button.menu_right",
      &v76,
      &v75);
    v15 = *(_DWORD *)(v4 + 4);
    __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[18],int,bool>(
      v14,
    v15 = *(_DWORD *)(v4 + 4) + 12;
    *(_DWORD *)(v4 + 4) = v15;
  v74 = 13;
  if ( v15 == *(_DWORD *)(v4 + 8) )
      &v74);
      v15,
    *(_DWORD *)(v4 + 4) += 12;
  if ( v3 )
    v64 = 1;
    v16 = *(_QWORD *)(v4 + 40);
    if ( (_DWORD)v16 == HIDWORD(v16) )
    {
      HIDWORD(v16) = *(_DWORD *)(v4 + 36);
      v19 = 0;
      v20 = ((signed int)v16 - HIDWORD(v16)) >> 4;
      if ( !v20 )
        v20 = 1;
      v21 = v20 + (((signed int)v16 - HIDWORD(v16)) >> 4);
      v22 = v20 + (((signed int)v16 - HIDWORD(v16)) >> 4);
      if ( 0 != v21 >> 28 )
        v22 = 0xFFFFFFF;
      if ( v21 < v20 )
      if ( v22 )
      {
        if ( v22 >= 0x10000000 )
          sub_119C874();
        v19 = (char *)operator new(16 * v22);
        LODWORD(v16) = *(_QWORD *)(v4 + 36) >> 32;
        HIDWORD(v16) = *(_QWORD *)(v4 + 36);
      }
      sub_DEB7E8((int)&v19[v16 - HIDWORD(v16)], 0, 0, "button.switch_to_vr_controller", &v64);
      v23 = *(_QWORD *)(v4 + 36);
      if ( (_DWORD)v23 == HIDWORD(v23) )
        v29 = (int)(v19 + 16);
      else
        v24 = *(_QWORD *)(v4 + 36);
        v25 = v19;
        do
        {
          *(_QWORD *)v25 = *(_QWORD *)v24;
          *((_DWORD *)v25 + 2) = *(_DWORD *)(v24 + 8);
          *(_DWORD *)(v24 + 8) = &unk_28898CC;
          v26 = *(_BYTE *)(v24 + 12);
          v24 += 16;
          v25[12] = v26;
          v25 += 16;
        }
        while ( HIDWORD(v23) != v24 );
        v28 = *(_QWORD *)(v4 + 36) >> 32;
        v27 = *(_QWORD *)(v4 + 36);
        v29 = (int)&v19[((HIDWORD(v23) - 16 - v23) & 0xFFFFFFF0) + 32];
        if ( v27 == v28 )
          LODWORD(v23) = *(_QWORD *)(v4 + 36);
        else
          v30 = &v90;
          v51 = v29;
          v31 = &pthread_create;
          do
          {
            v36 = *(_DWORD *)(v27 + 8);
            v37 = (void *)(v36 - 12);
            if ( (int *)(v36 - 12) != &dword_28898C0 )
            {
              v32 = (unsigned int *)(v36 - 4);
              if ( v31 )
              {
                __dmb();
                do
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
              }
              else
                v33 = (*v32)--;
              if ( v33 <= 0 )
                v34 = v31;
                v35 = v30;
                j_j_j_j_j__ZdlPv_9_1(v37);
                v30 = v35;
                v31 = v34;
            }
            v27 += 16;
          }
          while ( v27 != v28 );
          LODWORD(v23) = *(_DWORD *)(v4 + 36);
          v29 = v51;
      if ( (_DWORD)v23 )
        operator delete((void *)v23);
      *(_DWORD *)(v4 + 36) = v19;
      *(_DWORD *)(v4 + 40) = v29;
      *(_DWORD *)(v4 + 44) = &v19[16 * v22];
    }
    else
      sub_DEB7E8(v16, 0, 0, "button.switch_to_vr_controller", &v64);
      *(_DWORD *)(v4 + 40) += 16;
    v63 = 1;
    v42 = *(_QWORD *)(v4 + 28);
    if ( (_DWORD)v42 == HIDWORD(v42) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
        (__int64 *)(v4 + 24),
        "button.menu_select",
        &v63);
      v43 = *(_DWORD *)(v4 + 28);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[19],int>(
        v4 + 24,
        v42,
      v43 = *(_DWORD *)(v4 + 28) + 12;
      *(_DWORD *)(v4 + 28) = v43;
    v62 = 1;
    if ( v43 == *(_DWORD *)(v4 + 32) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[23],int>(
        "button.pointer_pressed",
        &v62);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[23],int>(
        v43,
      *(_DWORD *)(v4 + 28) += 12;
    v61 = 9;
    v44 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v44 == HIDWORD(v44) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[35],int>(
        (__int64 *)v4,
        "button.controller_secondary_select",
        &v61);
      v45 = *(_DWORD *)(v4 + 4);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[35],int>(
        v4,
        v44,
      v45 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v45;
    v60 = 10;
    if ( v45 == *(_DWORD *)(v4 + 8) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[21],int>(
        "button.menu_tab_left",
        &v60);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[21],int>(
        v45,
      *(_DWORD *)(v4 + 4) += 12;
    v59 = 0;
    v46 = *(_QWORD *)(v4 + 28);
    if ( (_DWORD)v46 == HIDWORD(v46) )
      std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::_M_emplace_back_aux<char const(&)[22],int>(
        "button.menu_tab_right",
        &v59);
      __gnu_cxx::new_allocator<GameControllerTriggerBinding>::construct<GameControllerTriggerBinding,char const(&)[22],int>(
        v46,
    v58 = 10;
    v47 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v47 == HIDWORD(v47) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[22],int>(
        "button.inventory_left",
        &v58);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[22],int>(
        v47,
    v57 = 0;
    v48 = *(_QWORD *)(v4 + 28);
    if ( (_DWORD)v48 == HIDWORD(v48) )
        "button.inventory_right",
        &v57);
        v48,
    v56 = 11;
    v49 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v49 == HIDWORD(v49) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[25],int>(
        "button.controller_select",
        &v56);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[25],int>(
        v49,
    v73 = 10;
    v17 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v17 == HIDWORD(v17) )
        &v73);
      v18 = *(_DWORD *)(v4 + 4);
        v17,
      v18 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v18;
    v72 = 11;
    if ( v18 == *(_DWORD *)(v4 + 8) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[23],int>(
        &v72);
      v38 = *(_DWORD *)(v4 + 4);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[23],int>(
        v18,
      v38 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v38;
    v71 = 10;
    if ( v38 == *(_DWORD *)(v4 + 8) )
        &v71);
      v39 = *(_DWORD *)(v4 + 4);
        v38,
      v39 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v39;
    v70 = 11;
    if ( v39 == *(_DWORD *)(v4 + 8) )
        &v70);
      v40 = *(_DWORD *)(v4 + 4);
        v39,
      v40 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v40;
    v69 = 14;
    if ( v40 == *(_DWORD *)(v4 + 8) )
      std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::_M_emplace_back_aux<char const(&)[19],int>(
        &v69);
      v41 = *(_DWORD *)(v4 + 4);
      __gnu_cxx::new_allocator<GameControllerButtonBinding>::construct<GameControllerButtonBinding,char const(&)[19],int>(
        v40,
      v41 = *(_DWORD *)(v4 + 4) + 12;
      *(_DWORD *)(v4 + 4) = v41;
    v68 = 14;
    if ( v41 == *(_DWORD *)(v4 + 8) )
        &v68);
        v41,
    v66 = 0;
    v67 = 0;
    v65 = 1;
    sub_DD769C(v4 + 36, &v67, &v66, &v65);
  v54 = 1;
  v55 = 1;
  v53 = 0;
  v52 = 0;
  result = sub_DD757C(v4 + 12, &v55, &v54, &v53, &v52);
  *(_DWORD *)(v4 + 48) = 1;
  return result;
}


void __fastcall ClientInputMappingFactory::_bindActionToGamePadOrMotionControllerInput(int a1, float a2, int *a3, int a4, int a5, int a6)
{
  int *v6; // r12@1
  int v11; // r2@2
  int v12; // [sp+4h] [bp-Ch]@0

  v6 = a3;
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_4]
    VSTR            S0, [SP,#0x10+var_C]
  }
  if ( _ZF )
    v11 = a1 + 68;
  else
    v11 = a1 + 108;
  ClientInputMappingFactory::_bindActionToGameControllerInput(a1, a2, v11, v6, a4, v12);
}


void __fastcall ClientInputMappingFactory::_addSharedGamePlayGameControllerControls(int a1, float a2, int a3)
{
  ClientInputMappingFactory::_addSharedGamePlayGameControllerControls(a1, a2, a3);
}


char *__fastcall ClientInputMappingFactory::_addInvariantKeyboardControls(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  __int64 v16; // kr00_8@11
  int v17; // r1@12
  void *v18; // r0@17
  void *v19; // r0@18
  __int64 v20; // kr08_8@19
  void *v21; // r0@22
  __int64 v22; // kr10_8@23
  char *result; // r0@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  unsigned int *v38; // r2@54
  signed int v39; // r1@56
  unsigned int *v40; // r2@58
  signed int v41; // r1@60
  unsigned int *v42; // r2@62
  signed int v43; // r1@64
  unsigned int *v44; // r2@66
  signed int v45; // r1@68
  unsigned int *v46; // r2@70
  signed int v47; // r1@72
  unsigned int *v48; // r2@74
  signed int v49; // r1@76
  char v50; // [sp+Bh] [bp-9Dh]@23
  int v51; // [sp+Ch] [bp-9Ch]@23
  int v52; // [sp+14h] [bp-94h]@22
  char v53; // [sp+1Bh] [bp-8Dh]@19
  int v54; // [sp+1Ch] [bp-8Ch]@19
  int v55; // [sp+24h] [bp-84h]@18
  int v56; // [sp+2Ch] [bp-7Ch]@17
  char v57; // [sp+33h] [bp-75h]@14
  int v58; // [sp+34h] [bp-74h]@14
  char v59; // [sp+3Bh] [bp-6Dh]@11
  int v60; // [sp+3Ch] [bp-6Ch]@11
  int v61; // [sp+44h] [bp-64h]@10
  int v62; // [sp+4Ch] [bp-5Ch]@9
  int v63; // [sp+54h] [bp-54h]@8
  int v64; // [sp+5Ch] [bp-4Ch]@7
  int v65; // [sp+64h] [bp-44h]@6
  int v66; // [sp+6Ch] [bp-3Ch]@5
  int v67; // [sp+74h] [bp-34h]@4
  int v68; // [sp+7Ch] [bp-2Ch]@3
  int v69; // [sp+84h] [bp-24h]@2
  int v70; // [sp+8Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_119C884((void **)&v70, "button.slot1");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v70, 4, 0);
  v6 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v70 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v69, "button.slot2");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v69, 5, 0);
  v7 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v69 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v68, "button.slot3");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v68, 6, 0);
  v8 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v68 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v67, "button.slot4");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v67, 7, 0);
  v9 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v67 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v66, "button.slot5");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v66, 8, 0);
  v10 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v66 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v65, "button.slot6");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v65, 9, 0);
  v11 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v65 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v64, "button.slot7");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v64, 10, 0);
  v12 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v64 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v63, "button.slot8");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v63, 11, 0);
  v13 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v63 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v62, "button.slot9");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v62, 12, 0);
  v14 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v62 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v61, "button.slot0");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v61, 13, 0);
  v15 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v61 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v60 = 16;
  v59 = 0;
  v16 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v16 == HIDWORD(v16) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[13],Keyboard::{unnamed type#1},FocusImpact>(
      (__int64 *)v3,
      "button.shift",
      &v60,
      &v59);
    v17 = *(_DWORD *)(v3 + 4);
  else
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[13],Keyboard::{unnamed type#1},FocusImpact>(
      v3,
      v16,
    v17 = *(_DWORD *)(v3 + 4) + 12;
    *(_DWORD *)(v3 + 4) = v17;
  v58 = 17;
  v57 = 0;
  if ( v17 == *(_DWORD *)(v3 + 8) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[15],Keyboard::{unnamed type#1},FocusImpact>(
      "button.control",
      &v58,
      &v57);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[15],Keyboard::{unnamed type#1},FocusImpact>(
      v17,
    *(_DWORD *)(v3 + 4) += 12;
  sub_119C884((void **)&v56, "button.mobeffects");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v56, 30, 0);
  v18 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v56 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v55, "button.toggle_perspective");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v55, 15, 0);
  v19 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v55 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v54 = 78;
  v53 = 0;
  v20 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v20 == HIDWORD(v20) )
    std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[23],Keyboard::{unnamed type#1},FocusImpact>(
      "button.menu_vr_realign",
      &v54,
      &v53);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[23],Keyboard::{unnamed type#1},FocusImpact>(
      v20,
  sub_119C884((void **)&v52, "button.chat");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v52, 23, 0);
  v21 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v52 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v51 = 66;
  v50 = 0;
  v22 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v22 == HIDWORD(v22) )
    result = std::vector<KeyboardKeyBinding,std::allocator<KeyboardKeyBinding>>::_M_emplace_back_aux<char const(&)[22],Keyboard::{unnamed type#1},FocusImpact>(
               (__int64 *)v3,
               "button.text_to_speech",
               &v51,
               &v50);
    __gnu_cxx::new_allocator<KeyboardKeyBinding>::construct<KeyboardKeyBinding,char const(&)[22],Keyboard::{unnamed type#1},FocusImpact>(
      v22,
      "button.text_to_speech",
      &v51,
      &v50);
    result = (char *)(*(_DWORD *)(v3 + 4) + 12);
    *(_DWORD *)(v3 + 4) = result;
  return result;
}


char *__fastcall ClientInputMappingFactory::_createFlyingTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r4@1
  ClientInputMappingFactory *v2; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r1@2
  int v5; // r1@5
  int v6; // r1@8
  int v7; // r1@11
  int v8; // r1@14
  int v9; // r1@17
  int v10; // r1@20
  int v11; // r1@23
  int v12; // r1@26
  char *result; // r0@29
  char v14; // [sp+2Bh] [bp-9Dh]@28
  int v15; // [sp+2Ch] [bp-9Ch]@28
  int v16; // [sp+30h] [bp-98h]@28
  char v17; // [sp+37h] [bp-91h]@25
  int v18; // [sp+38h] [bp-90h]@25
  int v19; // [sp+3Ch] [bp-8Ch]@25
  char v20; // [sp+43h] [bp-85h]@22
  int v21; // [sp+44h] [bp-84h]@22
  int v22; // [sp+48h] [bp-80h]@22
  int v23; // [sp+4Ch] [bp-7Ch]@22
  int v24; // [sp+50h] [bp-78h]@22
  int v25; // [sp+54h] [bp-74h]@19
  char v26; // [sp+5Bh] [bp-6Dh]@19
  int v27; // [sp+5Ch] [bp-6Ch]@19
  int v28; // [sp+60h] [bp-68h]@19
  int v29; // [sp+64h] [bp-64h]@16
  char v30; // [sp+6Bh] [bp-5Dh]@16
  int v31; // [sp+6Ch] [bp-5Ch]@16
  char v32; // [sp+73h] [bp-55h]@13
  int v33; // [sp+74h] [bp-54h]@13
  int v34; // [sp+78h] [bp-50h]@13
  int v35; // [sp+7Ch] [bp-4Ch]@10
  char v36; // [sp+83h] [bp-45h]@10
  int v37; // [sp+84h] [bp-44h]@7
  char v38; // [sp+8Bh] [bp-3Dh]@7
  int v39; // [sp+8Ch] [bp-3Ch]@7
  int v40; // [sp+90h] [bp-38h]@4
  char v41; // [sp+97h] [bp-31h]@4
  int v42; // [sp+98h] [bp-30h]@4
  int v43; // [sp+9Ch] [bp-2Ch]@1
  char v44; // [sp+A3h] [bp-25h]@1
  int v45; // [sp+A4h] [bp-24h]@1

  v1 = this;
  v2 = (ClientInputMappingFactory *)TouchInputMapping::TouchInputMapping(this);
  ClientInputMappingFactory::_addInvariantGamePlayTouchControls(v2, v1);
  v45 = 26;
  v44 = 0;
  v43 = 3;
  v3 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[23],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (__int64 *)((char *)v1 + 12),
      (int)"button.left",
      (int)"binding.area.move_left",
      "binding.bool.true",
      (int)&unk_27CA864,
      &v45,
      (int *)&unk_262C64C,
      &flt_262C650,
      (int *)&flt_262C650,
      &v44,
      &v43,
      (int)"??Y?");
    v4 = *((_DWORD *)v1 + 4);
  }
  else
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[23],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (int)v1 + 12,
      v3,
      "button.left",
      "binding.area.move_left",
    v4 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v4;
  v42 = 78;
  v41 = 0;
  v40 = 3;
  if ( v4 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[13],char const(&)[24],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (int)"button.right",
      (int)"binding.area.move_right",
      &v42,
      &v41,
      &v40,
    v5 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[13],char const(&)[24],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      v4,
      "button.right",
      "binding.area.move_right",
    v5 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v5;
  v39 = 52;
  v38 = 0;
  v37 = 3;
  if ( v5 == *((_DWORD *)v1 + 5) )
      (int)"button.down",
      (int)"binding.area.move_down",
      &v39,
      &v38,
      &v37,
    v6 = *((_DWORD *)v1 + 4);
      v5,
      "button.down",
      "binding.area.move_down",
    v6 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v6;
  v36 = 0;
  v35 = 3;
  if ( v6 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[10],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      (int)"button.up",
      (int)"binding.area.move_up",
      (int *)"",
      &v36,
      &v35,
    v7 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[10],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      v6,
      "button.up",
      "binding.area.move_up",
    v7 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v7;
  v34 = 104;
  v33 = 133;
  v32 = 0;
  if ( v7 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[28],char const(&)[18],char const(&)[18],ButtonColors const&,int,int,int const&,int const&,bool>(
      "button.change_flight_height",
      "binding.area.jump",
      &v34,
      &v33,
      &v32);
    v8 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[28],char const(&)[18],char const(&)[18],ButtonColors const&,int,int,int const&,int const&,bool>(
      v7,
    v8 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v8;
  v31 = 133;
  v30 = 0;
  v29 = 3;
  if ( v8 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[14],char const(&)[26],char const(&)[31],ButtonColors const&,int const&,int,int const&,int const&,bool,int,float const&>(
      (int)"button.upleft",
      (int)"binding.area.move_up_left",
      "binding.bool.is_moving_forward",
      &v31,
      &v30,
      &v29,
    v9 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[14],char const(&)[26],char const(&)[31],ButtonColors const&,int const&,int,int const&,int const&,bool,int,float const&>(
      v8,
      "button.upleft",
      "binding.area.move_up_left",
    v9 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v9;
  v28 = 26;
  v27 = 133;
  v26 = 0;
  v25 = 3;
  if ( v9 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[15],char const(&)[27],char const(&)[31],ButtonColors const&,int,int,int const&,int const&,bool,int,float const&>(
      (int)"button.upright",
      (int)"binding.area.move_up_right",
      &v28,
      &v27,
      &v26,
      &v25,
    v10 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[15],char const(&)[27],char const(&)[31],ButtonColors const&,int,int,int const&,int const&,bool,int,float const&>(
      v9,
      "button.upright",
      "binding.area.move_up_right",
    v10 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v10;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  if ( v10 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      "no_binding",
      "binding.area.dpad_no_turn_interact",
      &v24,
      &v23,
      (float *)&v22,
      &v21,
      &v20);
    v11 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v10,
    v11 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v11;
  v19 = 78;
  v18 = 133;
  v17 = 0;
  if ( v11 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[15],char const(&)[21],char const(&)[18],ButtonColors const&,int,int,int const&,int const&,bool>(
      "button.descend",
      "binding.area.descend",
      &v19,
      &v18,
      &v17);
    v12 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[15],char const(&)[21],char const(&)[18],ButtonColors const&,int,int,int const&,int const&,bool>(
      v11,
    v12 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v12;
  v16 = 52;
  v15 = 133;
  v14 = 0;
  if ( v12 == *((_DWORD *)v1 + 5) )
    result = std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[14],char const(&)[20],char const(&)[18],ButtonColors const&,int,int,int const&,int const&,bool>(
               (__int64 *)((char *)v1 + 12),
               "button.ascend",
               "binding.area.ascend",
               "binding.bool.true",
               (int)&unk_27CA864,
               &v16,
               &v15,
               &flt_262C650,
               (int *)&flt_262C650,
               &v14);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[14],char const(&)[20],char const(&)[18],ButtonColors const&,int,int,int const&,int const&,bool>(
      v12,
      "button.ascend",
      "binding.area.ascend",
      &v16,
      &v15,
      &v14);
    result = (char *)(*((_DWORD *)v1 + 4) + 76);
    *((_DWORD *)v1 + 4) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::registerNames(ClientInputMappingFactory *this, NameRegistry *a2)
{
  NameRegistry *v2; // r4@1
  int i; // r5@1

  v2 = a2;
  for ( i = *((_DWORD *)this + 10); i; i = *(_DWORD *)i )
    InputMapping::registerNames((InputMapping *)(i + 8), v2);
}


void __fastcall ClientInputMappingFactory::_updateKeyboardAndMouseControls(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_updateKeyboardAndMouseControls(this);
}


void __fastcall ClientInputMappingFactory::_createScreenChordMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createScreenChordMapping(this);
}


void __fastcall ClientInputMappingFactory::_createBedTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  __int64 *v2; // r0@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r2@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+24h] [bp-44h]@4
  int v12; // [sp+28h] [bp-40h]@4
  int v13; // [sp+2Ch] [bp-3Ch]@4
  char v14; // [sp+2Fh] [bp-39h]@1
  int v15; // [sp+30h] [bp-38h]@1
  int v16; // [sp+34h] [bp-34h]@1
  int v17; // [sp+38h] [bp-30h]@1
  int v18; // [sp+3Ch] [bp-2Ch]@1

  v1 = this;
  TouchInputMapping::TouchInputMapping(this);
  v18 = 200;
  v17 = 82;
  v15 = 18;
  v16 = 18;
  v14 = 0;
  v2 = (__int64 *)((char *)v1 + 12);
  *(_QWORD *)&v3 = *((_QWORD *)v1 + 2);
  if ( v3 == v4 )
  {
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[18],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v2,
      "button.chat",
      "binding.area.chat",
      "binding.bool.true",
      (int)&unk_27CA864,
      &v18,
      &v17,
      (float *)&v16,
      &v15,
      &v14);
  }
  else
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[18],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      (int)v2,
      v3,
    *((_DWORD *)v1 + 4) += 76;
  sub_119C884((void **)&v11, "button.pointer_pressed");
  sub_119C884((void **)&v12, "button.menu_select");
  std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(
    (int)v1 + 44,
    (int)&v11,
    (int)&v13);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


void __fastcall ClientInputMappingFactory::_createScreenTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createScreenTouchMapping(this);
}


void __fastcall ClientInputMappingFactory::_createBoatGameControllerMapping(float a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  float v5; // r7@1
  void *v6; // r0@4
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  int v12; // [sp+10h] [bp-30h]@5
  int v13; // [sp+18h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  _aeabi_memclr4(LODWORD(a1), 48);
  ClientInputMappingFactory::_addInvariantGamePlayGameControllerControls(v3, v5, v4);
  sub_119C884((void **)&v13, "button.dismount");
  if ( v4 )
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v13, 16, -1082130432);
  else
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v13, 16, -1082130432);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v12, "button.dismount");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v12, 17, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v12, 17, -1082130432);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


char *__fastcall ClientInputMappingFactory::_createScreenMouseMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r1@2
  char *result; // r0@5
  int v5; // [sp+4h] [bp-1Ch]@4
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v1 = this;
  _aeabi_memclr4(this, 36);
  v7 = 1;
  std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::_M_emplace_back_aux<char const(&)[23],MouseAction::{unnamed type#1}>(
    (__int64 *)v1,
    "button.pointer_pressed",
    &v7);
  v2 = *(_QWORD *)((char *)v1 + 4);
  v6 = 1;
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::_M_emplace_back_aux<char const(&)[19],MouseAction::{unnamed type#1}>(
      (__int64 *)v1,
      "button.menu_select",
      &v6);
    v3 = *((_DWORD *)v1 + 1);
  }
  else
    __gnu_cxx::new_allocator<MouseButtonBinding>::construct<MouseButtonBinding,char const(&)[19],MouseAction::{unnamed type#1}>(
      (int)v1,
      v2,
    v3 = *((_DWORD *)v1 + 1) + 8;
    *((_DWORD *)v1 + 1) = v3;
  v5 = 2;
  if ( v3 == *((_DWORD *)v1 + 2) )
    result = std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::_M_emplace_back_aux<char const(&)[29],MouseAction::{unnamed type#1}>(
               (__int64 *)v1,
               "button.menu_secondary_select",
               &v5);
    __gnu_cxx::new_allocator<MouseButtonBinding>::construct<MouseButtonBinding,char const(&)[29],MouseAction::{unnamed type#1}>(
      v3,
      "button.menu_secondary_select",
      &v5);
    result = (char *)(*((_DWORD *)v1 + 1) + 8);
    *((_DWORD *)v1 + 1) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createNormalGamePlayDeviceButtonMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createNormalGamePlayDeviceButtonMapping(this);
}


int __fastcall ClientInputMappingFactory::_getMappingInternal(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  ClientInputMappingFactory::_activateMapping(a1, a2);
  result = std::_Hashtable<std::string,std::pair<std::string const,InputMapping>,std::allocator<std::pair<std::string const,InputMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(v3 + 4),
             v2);
  if ( result )
    result += 8;
  return result;
}


void __fastcall ClientInputMappingFactory::_createBedKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  ClientInputMappingFactory::_createBedKeyboardAndMouseMapping(a1, a2, a3);
}


void __fastcall ClientInputMappingFactory::_createTextInputOnlyKeyboardMapping(int a1, int a2, int a3)
{
  int v3; // r11@1
  __int64 v4; // kr00_8@1
  _DWORD *v5; // r6@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11

  v3 = a3;
  ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping(a1, a2, a3);
  v4 = *(_QWORD *)v3;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = (_DWORD *)v4;
    do
    {
      v8 = (int *)(*v5 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*v5 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      v5 += 2;
    }
    while ( v5 != (_DWORD *)HIDWORD(v4) );
  }
  *(_DWORD *)(v3 + 4) = v4;
}


void __fastcall ClientInputMappingFactory::_createInputMappingTemplates(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory::_createInputMappingTemplates(this);
}


void __fastcall ClientInputMappingFactory::_createFlyingGameControllerMapping(float a1, int a2, int a3)
{
  ClientInputMappingFactory::_createFlyingGameControllerMapping(a1, a2, a3);
}


int __fastcall ClientInputMappingFactory::_configureGameControllerMapping(int result, GameControllerInputMapping *a2)
{
  int v2; // r1@1
  int i; // r2@1
  __int64 v4; // kr00_8@1

  v4 = *(_QWORD *)((char *)a2 + 12);
  v2 = *(_QWORD *)((char *)a2 + 12) >> 32;
  for ( i = v4; v2 != i; i += 12 )
  {
    if ( *(_DWORD *)(i + 4) == 1 )
      *(_BYTE *)(i + 9) = *(_BYTE *)(result + 60);
  }
  return result;
}


GameControllerInputMapping *__fastcall ClientInputMappingFactory::_updateGameControllerControls(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r5@1
  __int64 i; // r0@1
  __int64 j; // r0@5
  __int64 k; // r0@9
  __int64 l; // r0@13
  unsigned int v6; // r10@17
  __int64 v7; // kr00_8@17
  unsigned int v8; // r7@17
  int v9; // r6@17
  int v10; // r8@18
  _DWORD *v11; // r9@18
  int v12; // r4@18
  _DWORD *v13; // r1@20
  size_t v14; // r2@20
  int v15; // r5@22
  int v16; // r5@24
  int v17; // r7@25
  char *v18; // r0@27
  unsigned int v19; // r10@28
  __int64 v20; // kr08_8@28
  unsigned int v21; // r8@28
  int v22; // r6@28
  int v23; // r7@29
  _DWORD *v24; // r9@29
  int v25; // r4@29
  _DWORD *v26; // r1@31
  size_t v27; // r2@31
  int v28; // r5@33
  int v29; // r5@35
  char *v30; // r0@40
  unsigned int v31; // r10@41
  __int64 v32; // kr10_8@41
  unsigned int v33; // r8@41
  int v34; // r6@41
  int v35; // r7@42
  _DWORD *v36; // r9@42
  int v37; // r4@42
  _DWORD *v38; // r1@44
  size_t v39; // r2@44
  int v40; // r5@46
  int v41; // r5@48
  char *v42; // r0@52
  unsigned int v43; // r10@53
  __int64 v44; // kr18_8@53
  unsigned int v45; // r8@53
  int v46; // r6@53
  int v47; // r7@54
  _DWORD *v48; // r9@54
  int v49; // r4@54
  _DWORD *v50; // r1@56
  size_t v51; // r2@56
  int v52; // r5@58
  int v53; // r5@60
  char *v54; // r0@65
  unsigned int v55; // r10@66
  __int64 v56; // kr20_8@66
  unsigned int v57; // r8@66
  int v58; // r6@66
  int v59; // r7@67
  _DWORD *v60; // r9@67
  int v61; // r4@67
  _DWORD *v62; // r1@69
  size_t v63; // r2@69
  int v64; // r5@71
  int v65; // r5@73
  char *v66; // r0@77
  __int64 m; // r0@78
  __int64 n; // r0@82
  __int64 ii; // r0@86
  __int64 jj; // r0@90
  unsigned int v71; // r10@94
  __int64 v72; // kr28_8@94
  unsigned int v73; // r8@94
  int v74; // r6@94
  int v75; // r7@95
  _DWORD *v76; // r9@95
  int v77; // r4@95
  _DWORD *v78; // r1@97
  size_t v79; // r2@97
  int v80; // r5@99
  int v81; // r5@101
  char *v82; // r0@105
  unsigned int v83; // r10@106
  __int64 v84; // kr30_8@106
  unsigned int v85; // r8@106
  int v86; // r6@106
  int v87; // r7@107
  _DWORD *v88; // r9@107
  int v89; // r4@107
  _DWORD *v90; // r1@109
  size_t v91; // r2@109
  int v92; // r5@111
  int v93; // r5@113
  char *v94; // r0@117
  unsigned int v95; // r10@118
  __int64 v96; // kr38_8@118
  unsigned int v97; // r8@118
  int v98; // r6@118
  int v99; // r7@119
  _DWORD *v100; // r9@119
  int v101; // r4@119
  _DWORD *v102; // r1@121
  size_t v103; // r2@121
  int v104; // r5@123
  int v105; // r5@125
  char *v106; // r0@130
  unsigned int v107; // r10@131
  __int64 v108; // kr40_8@131
  unsigned int v109; // r8@131
  int v110; // r6@131
  int v111; // r7@132
  _DWORD *v112; // r9@132
  int v113; // r4@132
  _DWORD *v114; // r1@134
  size_t v115; // r2@134
  int v116; // r5@136
  int v117; // r5@138
  char *v118; // r0@143
  unsigned int v119; // r9@144
  unsigned int v120; // r10@144
  int v121; // r11@144
  int v122; // r4@144
  int v123; // r6@145
  _DWORD *v124; // r8@145
  int v125; // r7@145
  _DWORD *v126; // r1@147
  size_t v127; // r2@147
  int v128; // r5@149
  int v129; // r5@151
  char *v130; // r0@185
  unsigned int *v132; // r2@187
  signed int v133; // r1@189
  unsigned int *v134; // r2@191
  signed int v135; // r1@193
  unsigned int *v136; // r2@195
  signed int v137; // r1@197
  unsigned int *v138; // r2@199
  signed int v139; // r1@201
  unsigned int *v140; // r2@203
  signed int v141; // r1@205
  unsigned int *v142; // r2@207
  signed int v143; // r1@209
  unsigned int *v144; // r2@211
  signed int v145; // r1@213
  unsigned int *v146; // r2@215
  signed int v147; // r1@217
  unsigned int *v148; // r2@219
  signed int v149; // r1@221
  unsigned int *v150; // r2@223
  signed int v151; // r1@225
  int v152; // [sp+4h] [bp-284h]@17
  void *v153; // [sp+Ch] [bp-27Ch]@144
  void *v154; // [sp+14h] [bp-274h]@131
  void *v155; // [sp+1Ch] [bp-26Ch]@118
  void *v156; // [sp+24h] [bp-264h]@106
  void *v157; // [sp+2Ch] [bp-25Ch]@94
  unsigned __int64 v158[6]; // [sp+30h] [bp-258h]@78
  int v159; // [sp+60h] [bp-228h]@185
  unsigned __int64 v160[6]; // [sp+64h] [bp-224h]@78
  int v161; // [sp+94h] [bp-1F4h]@143
  unsigned __int64 v162[6]; // [sp+98h] [bp-1F0h]@78
  int v163; // [sp+C8h] [bp-1C0h]@117
  unsigned __int64 v164[6]; // [sp+CCh] [bp-1BCh]@78
  int v165; // [sp+FCh] [bp-18Ch]@105
  unsigned __int64 v166[6]; // [sp+100h] [bp-188h]@78
  int v167; // [sp+130h] [bp-158h]@130
  void *v168; // [sp+138h] [bp-150h]@66
  void *v169; // [sp+140h] [bp-148h]@53
  void *v170; // [sp+148h] [bp-140h]@41
  void *v171; // [sp+150h] [bp-138h]@28
  void *s1; // [sp+158h] [bp-130h]@17
  unsigned __int64 v173[6]; // [sp+15Ch] [bp-12Ch]@1
  int v174; // [sp+18Ch] [bp-FCh]@77
  unsigned __int64 v175; // [sp+190h] [bp-F8h]@1
  __int64 v176; // [sp+19Ch] [bp-ECh]@13
  int v177; // [sp+1A8h] [bp-E0h]@65
  int v178; // [sp+1B4h] [bp-D4h]@65
  int v179; // [sp+1C0h] [bp-C8h]@65
  unsigned __int64 v180; // [sp+1C4h] [bp-C4h]@1
  __int64 v181; // [sp+1D0h] [bp-B8h]@9
  int v182; // [sp+1DCh] [bp-ACh]@40
  int v183; // [sp+1E8h] [bp-A0h]@40
  int v184; // [sp+1F4h] [bp-94h]@40
  unsigned __int64 v185; // [sp+1F8h] [bp-90h]@1
  __int64 v186; // [sp+204h] [bp-84h]@5
  int v187; // [sp+210h] [bp-78h]@27
  int v188; // [sp+21Ch] [bp-6Ch]@27
  int v189; // [sp+228h] [bp-60h]@27
  unsigned __int64 v190; // [sp+22Ch] [bp-5Ch]@1
  __int64 v191; // [sp+238h] [bp-50h]@1
  int v192; // [sp+244h] [bp-44h]@52
  int v193; // [sp+250h] [bp-38h]@52
  int v194; // [sp+25Ch] [bp-2Ch]@52

  v1 = this;
  ClientInputMappingFactory::_createBoatGameControllerMapping(COERCE_FLOAT(&v190), (int)this, 0);
  ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(COERCE_FLOAT(&v185), (int)v1, 0);
  ClientInputMappingFactory::_createFlyingGameControllerMapping(COERCE_FLOAT(&v180), (int)v1, 0);
  ClientInputMappingFactory::_createRideableGameControllerMapping(COERCE_FLOAT(&v175), (int)v1, 0);
  ClientInputMappingFactory::_createGazeScreenGameControllerMapping((int)v173, (int)v1, 0);
  for ( i = v191; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 12 )
  {
    if ( *(_DWORD *)(i + 4) == 1 )
      *(_BYTE *)(i + 9) = *((_BYTE *)v1 + 60);
  }
  for ( j = v186; HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 12 )
    if ( *(_DWORD *)(j + 4) == 1 )
      *(_BYTE *)(j + 9) = *((_BYTE *)v1 + 60);
  for ( k = v181; HIDWORD(k) != (_DWORD)k; LODWORD(k) = k + 12 )
    if ( *(_DWORD *)(k + 4) == 1 )
      *(_BYTE *)(k + 9) = *((_BYTE *)v1 + 60);
  for ( l = v176; HIDWORD(l) != (_DWORD)l; LODWORD(l) = l + 12 )
    if ( *(_DWORD *)(l + 4) == 1 )
      *(_BYTE *)(l + 9) = *((_BYTE *)v1 + 60);
  sub_119C884(&s1, "gamePlayNormal");
  ClientInputMappingFactory::_activateMapping((int)v1, (int **)&s1);
  v6 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v7 = *(_QWORD *)((char *)v1 + 4);
  v152 = (int)v1;
  v8 = v6 % (unsigned int)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v9 = *(_DWORD *)(v7 + 4 * v8);
  if ( !v9 )
    goto LABEL_24;
  v10 = *(_DWORD *)v9;
  v11 = s1;
  v12 = *(_DWORD *)(*(_DWORD *)v9 + 308);
  while ( 1 )
    if ( v12 == v6 )
    {
      v13 = *(_DWORD **)(v10 + 4);
      v14 = *(v11 - 3);
      if ( v14 == *(v13 - 3) && !memcmp(v11, v13, v14) )
        break;
    }
    v15 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
      v12 = *(_DWORD *)(v15 + 308);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v15 + 308) % HIDWORD(v7) == v8 )
        continue;
  if ( v9 )
    v16 = *(_DWORD *)v9;
  else
LABEL_24:
    v16 = 0;
  v17 = v152;
  if ( v16 )
    v16 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v16 + 112, &v185);
  std::vector<GameControllerStickBinding,std::allocator<GameControllerStickBinding>>::operator=(
    (unsigned __int64 *)(v16 + 124),
    (unsigned __int64 *)&v186);
  std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::operator=(
    v16 + 136,
    (unsigned __int64 *)&v187);
  std::vector<GameControllerStickToButtonBinding,std::allocator<GameControllerStickToButtonBinding>>::operator=(
    v16 + 148,
    (unsigned __int64 *)&v188);
  *(_DWORD *)(v16 + 160) = v189;
  v18 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
    else
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884(&v171, "gamePlayFlying");
  ClientInputMappingFactory::_activateMapping(v152, (int **)&v171);
  v19 = sub_119C9A4((int *)v171, *((_DWORD *)v171 - 3), -955291385);
  v20 = *(_QWORD *)(v152 + 4);
  v21 = v19 % (unsigned int)(*(_QWORD *)(v152 + 4) >> 32);
  v22 = *(_DWORD *)(v20 + 4 * v21);
  if ( v22 )
    v23 = *(_DWORD *)v22;
    v24 = v171;
    v25 = *(_DWORD *)(*(_DWORD *)v22 + 308);
    while ( 1 )
      if ( v25 == v19 )
      {
        v26 = *(_DWORD **)(v23 + 4);
        v27 = *(v24 - 3);
        if ( v27 == *(v26 - 3) && !memcmp(v24, v26, v27) )
          break;
      }
      v28 = *(_DWORD *)v23;
      if ( *(_DWORD *)v23 )
        v25 = *(_DWORD *)(v28 + 308);
        v22 = v23;
        v23 = *(_DWORD *)v23;
        if ( *(_DWORD *)(v28 + 308) % HIDWORD(v20) == v21 )
          continue;
      goto LABEL_35;
    if ( !v22 )
LABEL_35:
      v29 = 0;
      goto LABEL_36;
    v29 = *(_DWORD *)v22;
LABEL_36:
    v17 = v152;
    v29 = 0;
  if ( v29 )
    v29 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v29 + 112, &v180);
    (unsigned __int64 *)(v29 + 124),
    (unsigned __int64 *)&v181);
    v29 + 136,
    (unsigned __int64 *)&v182);
    v29 + 148,
    (unsigned __int64 *)&v183);
  *(_DWORD *)(v29 + 160) = v184;
  v30 = (char *)v171 - 12;
  if ( (int *)((char *)v171 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)((char *)v171 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  sub_119C884(&v170, "gamePlayBoating");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v170);
  v31 = sub_119C9A4((int *)v170, *((_DWORD *)v170 - 3), -955291385);
  v32 = *(_QWORD *)(v17 + 4);
  v33 = v31 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v34 = *(_DWORD *)(v32 + 4 * v33);
  if ( v34 )
    v35 = *(_DWORD *)v34;
    v36 = v170;
    v37 = *(_DWORD *)(*(_DWORD *)v34 + 308);
      if ( v37 == v31 )
        v38 = *(_DWORD **)(v35 + 4);
        v39 = *(v36 - 3);
        if ( v39 == *(v38 - 3) && !memcmp(v36, v38, v39) )
      v40 = *(_DWORD *)v35;
      if ( *(_DWORD *)v35 )
        v37 = *(_DWORD *)(v40 + 308);
        v34 = v35;
        v35 = *(_DWORD *)v35;
        if ( *(_DWORD *)(v40 + 308) % HIDWORD(v32) == v33 )
      v41 = 0;
      v17 = v152;
      goto LABEL_50;
    if ( v34 )
      v41 = *(_DWORD *)v34;
    v41 = 0;
LABEL_50:
  if ( v41 )
    v41 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v41 + 112, &v190);
    (unsigned __int64 *)(v41 + 124),
    (unsigned __int64 *)&v191);
    v41 + 136,
    (unsigned __int64 *)&v192);
    v41 + 148,
    (unsigned __int64 *)&v193);
  *(_DWORD *)(v41 + 160) = v194;
  v42 = (char *)v170 - 12;
  if ( (int *)((char *)v170 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)((char *)v170 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  sub_119C884(&v169, "gamePlayRiding");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v169);
  v43 = sub_119C9A4((int *)v169, *((_DWORD *)v169 - 3), -955291385);
  v44 = *(_QWORD *)(v17 + 4);
  v45 = v43 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v46 = *(_DWORD *)(v44 + 4 * v45);
  if ( v46 )
    v47 = *(_DWORD *)v46;
    v48 = v169;
    v49 = *(_DWORD *)(*(_DWORD *)v46 + 308);
      if ( v49 == v43 )
        v50 = *(_DWORD **)(v47 + 4);
        v51 = *(v48 - 3);
        if ( v51 == *(v50 - 3) && !memcmp(v48, v50, v51) )
      v52 = *(_DWORD *)v47;
      if ( *(_DWORD *)v47 )
        v49 = *(_DWORD *)(v52 + 308);
        v46 = v47;
        v47 = *(_DWORD *)v47;
        if ( *(_DWORD *)(v52 + 308) % HIDWORD(v44) == v45 )
      goto LABEL_60;
    if ( !v46 )
LABEL_60:
      v53 = 0;
      goto LABEL_61;
    v53 = *(_DWORD *)v46;
LABEL_61:
    v53 = 0;
  if ( v53 )
    v53 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v53 + 112, &v175);
    (unsigned __int64 *)(v53 + 124),
    (unsigned __int64 *)&v176);
    v53 + 136,
    (unsigned __int64 *)&v177);
    v53 + 148,
    (unsigned __int64 *)&v178);
  *(_DWORD *)(v53 + 160) = v179;
  v54 = (char *)v169 - 12;
  if ( (int *)((char *)v169 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)((char *)v169 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  sub_119C884(&v168, "screenGazeController");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v168);
  v55 = sub_119C9A4((int *)v168, *((_DWORD *)v168 - 3), -955291385);
  v56 = *(_QWORD *)(v17 + 4);
  v57 = v55 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v58 = *(_DWORD *)(v56 + 4 * v57);
  if ( v58 )
    v59 = *(_DWORD *)v58;
    v60 = v168;
    v61 = *(_DWORD *)(*(_DWORD *)v58 + 308);
      if ( v61 == v55 )
        v62 = *(_DWORD **)(v59 + 4);
        v63 = *(v60 - 3);
        if ( v63 == *(v62 - 3) && !memcmp(v60, v62, v63) )
      v64 = *(_DWORD *)v59;
      if ( *(_DWORD *)v59 )
        v61 = *(_DWORD *)(v64 + 308);
        v58 = v59;
        v59 = *(_DWORD *)v59;
        if ( *(_DWORD *)(v64 + 308) % HIDWORD(v56) == v57 )
      v65 = 0;
      goto LABEL_75;
    if ( v58 )
      v65 = *(_DWORD *)v58;
    v65 = 0;
LABEL_75:
  if ( v65 )
    v65 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v65 + 112, v173);
    (unsigned __int64 *)(v65 + 124),
    (unsigned __int64 *)((char *)&v173[1] + 4));
  std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::operator=(v65 + 136, &v173[3]);
    v65 + 148,
    (unsigned __int64 *)((char *)&v173[4] + 4));
  *(_DWORD *)(v65 + 160) = v174;
  v66 = (char *)v168 - 12;
  if ( (int *)((char *)v168 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)((char *)v168 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  ClientInputMappingFactory::_createBoatGameControllerMapping(COERCE_FLOAT(v166), v17, 1);
  ClientInputMappingFactory::_createNormalGamePlayGameControllerMapping(COERCE_FLOAT(v164), v17, 1);
  ClientInputMappingFactory::_createFlyingGameControllerMapping(COERCE_FLOAT(v162), v17, 1);
  ClientInputMappingFactory::_createRideableGameControllerMapping(COERCE_FLOAT(v160), v17, 1);
  ClientInputMappingFactory::_createGazeScreenGameControllerMapping((int)v158, v17, 1);
  for ( m = v191; HIDWORD(m) != (_DWORD)m; LODWORD(m) = m + 12 )
    if ( *(_DWORD *)(m + 4) == 1 )
      *(_BYTE *)(m + 9) = *(_BYTE *)(v17 + 60);
  for ( n = v186; HIDWORD(n) != (_DWORD)n; LODWORD(n) = n + 12 )
    if ( *(_DWORD *)(n + 4) == 1 )
      *(_BYTE *)(n + 9) = *(_BYTE *)(v17 + 60);
  for ( ii = v181; HIDWORD(ii) != (_DWORD)ii; LODWORD(ii) = ii + 12 )
    if ( *(_DWORD *)(ii + 4) == 1 )
      *(_BYTE *)(ii + 9) = *(_BYTE *)(v17 + 60);
  for ( jj = v176; HIDWORD(jj) != (_DWORD)jj; LODWORD(jj) = jj + 12 )
    if ( *(_DWORD *)(jj + 4) == 1 )
      *(_BYTE *)(jj + 9) = *(_BYTE *)(v17 + 60);
  sub_119C884(&v157, "gamePlayNormal");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v157);
  v71 = sub_119C9A4((int *)v157, *((_DWORD *)v157 - 3), -955291385);
  v72 = *(_QWORD *)(v17 + 4);
  v73 = v71 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v74 = *(_DWORD *)(v72 + 4 * v73);
  if ( v74 )
    v75 = *(_DWORD *)v74;
    v76 = v157;
    v77 = *(_DWORD *)(*(_DWORD *)v74 + 308);
      if ( v77 == v71 )
        v78 = *(_DWORD **)(v75 + 4);
        v79 = *(v76 - 3);
        if ( v79 == *(v78 - 3) && !memcmp(v76, v78, v79) )
      v80 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v77 = *(_DWORD *)(v80 + 308);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v80 + 308) % HIDWORD(v72) == v73 )
      v81 = 0;
      goto LABEL_103;
    if ( v74 )
      v81 = *(_DWORD *)v74;
    v81 = 0;
LABEL_103:
  if ( v81 )
    v81 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v81 + 164, v164);
    (unsigned __int64 *)(v81 + 176),
    (unsigned __int64 *)((char *)&v164[1] + 4));
  std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::operator=(v81 + 188, &v164[3]);
    v81 + 200,
    (unsigned __int64 *)((char *)&v164[4] + 4));
  *(_DWORD *)(v81 + 212) = v165;
  v82 = (char *)v157 - 12;
  if ( (int *)((char *)v157 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)((char *)v157 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  sub_119C884(&v156, "gamePlayFlying");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v156);
  v83 = sub_119C9A4((int *)v156, *((_DWORD *)v156 - 3), -955291385);
  v84 = *(_QWORD *)(v17 + 4);
  v85 = v83 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v86 = *(_DWORD *)(v84 + 4 * v85);
  if ( v86 )
    v87 = *(_DWORD *)v86;
    v88 = v156;
    v89 = *(_DWORD *)(*(_DWORD *)v86 + 308);
      if ( v89 == v83 )
        v90 = *(_DWORD **)(v87 + 4);
        v91 = *(v88 - 3);
        if ( v91 == *(v90 - 3) && !memcmp(v88, v90, v91) )
      v92 = *(_DWORD *)v87;
      if ( *(_DWORD *)v87 )
        v89 = *(_DWORD *)(v92 + 308);
        v86 = v87;
        v87 = *(_DWORD *)v87;
        if ( *(_DWORD *)(v92 + 308) % HIDWORD(v84) == v85 )
      v93 = 0;
      goto LABEL_115;
    if ( v86 )
      v93 = *(_DWORD *)v86;
    v93 = 0;
LABEL_115:
  if ( v93 )
    v93 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v93 + 164, v162);
    (unsigned __int64 *)(v93 + 176),
    (unsigned __int64 *)((char *)&v162[1] + 4));
  std::vector<GameControllerTriggerBinding,std::allocator<GameControllerTriggerBinding>>::operator=(v93 + 188, &v162[3]);
    v93 + 200,
    (unsigned __int64 *)((char *)&v162[4] + 4));
  *(_DWORD *)(v93 + 212) = v163;
  v94 = (char *)v156 - 12;
  if ( (int *)((char *)v156 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)((char *)v156 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v94);
  sub_119C884(&v155, "gamePlayBoating");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v155);
  v95 = sub_119C9A4((int *)v155, *((_DWORD *)v155 - 3), -955291385);
  v96 = *(_QWORD *)(v17 + 4);
  v97 = v95 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v98 = *(_DWORD *)(v96 + 4 * v97);
  if ( v98 )
    v99 = *(_DWORD *)v98;
    v100 = v155;
    v101 = *(_DWORD *)(*(_DWORD *)v98 + 308);
      if ( v101 == v95 )
        v102 = *(_DWORD **)(v99 + 4);
        v103 = *(v100 - 3);
        if ( v103 == *(v102 - 3) && !memcmp(v100, v102, v103) )
      v104 = *(_DWORD *)v99;
      if ( *(_DWORD *)v99 )
        v101 = *(_DWORD *)(v104 + 308);
        v98 = v99;
        v99 = *(_DWORD *)v99;
        if ( *(_DWORD *)(v104 + 308) % HIDWORD(v96) == v97 )
      goto LABEL_125;
    if ( !v98 )
LABEL_125:
      v105 = 0;
      goto LABEL_126;
    v105 = *(_DWORD *)v98;
LABEL_126:
    v105 = 0;
  if ( v105 )
    v105 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v105 + 164, v166);
    (unsigned __int64 *)(v105 + 176),
    (unsigned __int64 *)((char *)&v166[1] + 4));
    v105 + 188,
    &v166[3]);
    v105 + 200,
    (unsigned __int64 *)((char *)&v166[4] + 4));
  *(_DWORD *)(v105 + 212) = v167;
  v106 = (char *)v155 - 12;
  if ( (int *)((char *)v155 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)((char *)v155 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v106);
  sub_119C884(&v154, "gamePlayRiding");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v154);
  v107 = sub_119C9A4((int *)v154, *((_DWORD *)v154 - 3), -955291385);
  v108 = *(_QWORD *)(v17 + 4);
  v109 = v107 % (unsigned int)(*(_QWORD *)(v17 + 4) >> 32);
  v110 = *(_DWORD *)(v108 + 4 * v109);
  if ( v110 )
    v111 = *(_DWORD *)v110;
    v112 = v154;
    v113 = *(_DWORD *)(*(_DWORD *)v110 + 308);
      if ( v113 == v107 )
        v114 = *(_DWORD **)(v111 + 4);
        v115 = *(v112 - 3);
        if ( v115 == *(v114 - 3) && !memcmp(v112, v114, v115) )
      v116 = *(_DWORD *)v111;
      if ( *(_DWORD *)v111 )
        v113 = *(_DWORD *)(v116 + 308);
        v110 = v111;
        v111 = *(_DWORD *)v111;
        if ( *(_DWORD *)(v116 + 308) % HIDWORD(v108) == v109 )
      goto LABEL_138;
    if ( !v110 )
LABEL_138:
      v117 = 0;
      goto LABEL_139;
    v117 = *(_DWORD *)v110;
LABEL_139:
    v117 = 0;
  if ( v117 )
    v117 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v117 + 164, v160);
    (unsigned __int64 *)(v117 + 176),
    (unsigned __int64 *)((char *)&v160[1] + 4));
    v117 + 188,
    &v160[3]);
    v117 + 200,
    (unsigned __int64 *)((char *)&v160[4] + 4));
  *(_DWORD *)(v117 + 212) = v161;
  v118 = (char *)v154 - 12;
  if ( (int *)((char *)v154 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)((char *)v154 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v118);
  sub_119C884(&v153, "screenGazeController");
  ClientInputMappingFactory::_activateMapping(v17, (int **)&v153);
  v119 = sub_119C9A4((int *)v153, *((_DWORD *)v153 - 3), -955291385);
  v120 = *(_QWORD *)(v17 + 4) >> 32;
  v121 = v119 % v120;
  v122 = *(_DWORD *)(*(_QWORD *)(v17 + 4) + 4 * v121);
  if ( v122 )
    v123 = *(_DWORD *)v122;
    v124 = v153;
    v125 = *(_DWORD *)(*(_DWORD *)v122 + 308);
      if ( v125 == v119 )
        v126 = *(_DWORD **)(v123 + 4);
        v127 = *(v124 - 3);
        if ( v127 == *(v126 - 3) && !memcmp(v124, v126, v127) )
      v128 = *(_DWORD *)v123;
      if ( !*(_DWORD *)v123 )
        v129 = 0;
        goto LABEL_183;
      v125 = *(_DWORD *)(v128 + 308);
      v122 = v123;
      v123 = *(_DWORD *)v123;
      if ( *(_DWORD *)(v128 + 308) % v120 != v121 )
    if ( v122 )
      v129 = *(_DWORD *)v122;
      v129 = 0;
    v129 = 0;
LABEL_183:
  if ( v129 )
    v129 += 8;
  std::vector<GameControllerButtonBinding,std::allocator<GameControllerButtonBinding>>::operator=(v129 + 164, v158);
    (unsigned __int64 *)(v129 + 176),
    (unsigned __int64 *)((char *)&v158[1] + 4));
    v129 + 188,
    &v158[3]);
    v129 + 200,
    (unsigned __int64 *)((char *)&v158[4] + 4));
  *(_DWORD *)(v129 + 212) = v159;
  v130 = (char *)v153 - 12;
  if ( (int *)((char *)v153 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)((char *)v153 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v130);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v158);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v160);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v162);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v164);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v166);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)v173);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)&v175);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)&v180);
  GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)&v185);
  return GameControllerInputMapping::~GameControllerInputMapping((GameControllerInputMapping *)&v190);
}


ClientInputMappingFactory *__fastcall ClientInputMappingFactory::~ClientInputMappingFactory(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r10@1
  _DWORD *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  InputMapping *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  char *v9; // r0@13
  _DWORD *v10; // r7@16
  unsigned int *v11; // r2@18
  signed int v12; // r1@20
  _DWORD *v13; // r6@26
  InputMapping *v14; // r0@26
  int v15; // r1@26
  void *v16; // r0@26
  char *v17; // r0@28

  v1 = this;
  *(_DWORD *)this = &off_26D9108;
  KeyboardRemappingLayout::~KeyboardRemappingLayout((ClientInputMappingFactory *)((char *)this + 148));
  GamePadRemappingLayout::~GamePadRemappingLayout((ClientInputMappingFactory *)((char *)v1 + 108));
  GamePadRemappingLayout::~GamePadRemappingLayout((ClientInputMappingFactory *)((char *)v1 + 68));
  v2 = (_DWORD *)*((_DWORD *)v1 + 10);
  while ( v2 )
  {
    v5 = v2;
    v6 = (InputMapping *)(v2 + 2);
    v2 = (_DWORD *)*v2;
    InputMapping::~InputMapping(v6);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  v9 = (char *)*((_DWORD *)v1 + 8);
  if ( v9 && (char *)v1 + 56 != v9 )
    operator delete(v9);
  v10 = (_DWORD *)*((_DWORD *)v1 + 3);
  while ( v10 )
    v13 = v10;
    v14 = (InputMapping *)(v10 + 2);
    v10 = (_DWORD *)*v10;
    InputMapping::~InputMapping(v14);
    v15 = v13[1];
    v16 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v15 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    operator delete(v13);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v17 = (char *)*((_DWORD *)v1 + 1);
  if ( v17 && (char *)v1 + 28 != v17 )
    operator delete(v17);
  return v1;
}


int __fastcall ClientInputMappingFactory::_addGameplayMouseControls(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r7@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  __int64 v9; // kr00_8@4
  void *v10; // r0@7
  void *v11; // r0@8
  int result; // r0@9
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  int v23; // [sp+10h] [bp-40h]@8
  char v24; // [sp+14h] [bp-3Ch]@8
  int v25; // [sp+18h] [bp-38h]@7
  int v26; // [sp+1Ch] [bp-34h]@4
  int v27; // [sp+24h] [bp-2Ch]@3
  int v28; // [sp+2Ch] [bp-24h]@2
  int v29; // [sp+34h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_119C884((void **)&v29, "button.destroy_or_attack");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v29, 0, 0);
  v6 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v29 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v28, "button.build_or_interact");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v28, 2, 0);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v28 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v27, "button.creative_select");
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(v5, v3, v4, &v27, 1, 0);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v26 = 1;
  v9 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v9 == HIDWORD(v9) )
    std::vector<MouseButtonBinding,std::allocator<MouseButtonBinding>>::_M_emplace_back_aux<char const(&)[23],MouseAction::{unnamed type#1}>(
      (__int64 *)v4,
      "button.pointer_pressed",
      &v26);
  else
    __gnu_cxx::new_allocator<MouseButtonBinding>::construct<MouseButtonBinding,char const(&)[23],MouseAction::{unnamed type#1}>(
      v4,
      v9,
    *(_DWORD *)(v4 + 4) += 8;
  sub_119C884((void **)&v25, "button.inventory_left");
  std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(v4 + 12, (int)&v25, (int)&v26);
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v23, "button.inventory_right");
  std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(v4 + 24, (int)&v23, (int)&v24);
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  result = *(_BYTE *)(v5 + 60);
  *(_BYTE *)(v4 + 36) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_createFlyingGameControllerMapping(float a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  float v5; // r7@1
  void *v6; // r0@4
  void *v7; // r0@8
  void *v8; // r0@12
  unsigned int *v9; // r2@14
  signed int v10; // r1@16
  unsigned int *v11; // r2@18
  signed int v12; // r1@20
  unsigned int *v13; // r2@22
  signed int v14; // r1@24
  int v15; // [sp+Ch] [bp-2Ch]@9
  int v16; // [sp+14h] [bp-24h]@5
  int v17; // [sp+1Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  _aeabi_memclr4(LODWORD(a1), 48);
  ClientInputMappingFactory::_addSharedGamePlayGameControllerControls(v3, v5, v4);
  sub_119C884((void **)&v17, "button.sneak");
  if ( v4 )
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v17, 17, -1082130432);
  else
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v17, 17, -1082130432);
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
  sub_119C884((void **)&v16, "button.fly_down_slow");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v16, 29, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v16, 29, -1082130432);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v15, "button.fly_up_slow");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v15, 28, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v15, 28, -1082130432);
  v8 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


void __fastcall ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping(int a1, int a2, int a3)
{
  ClientInputMappingFactory::_createScreenKeyboardAndMouseMapping(a1, a2, a3);
}


char *__fastcall ClientInputMappingFactory::_createRideableTouchMapping(ClientInputMappingFactory *this)
{
  ClientInputMappingFactory *v1; // r11@1
  ClientInputMappingFactory *v2; // r0@1
  ClientInputMappingFactory *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r1@2
  int v6; // r1@5
  int v7; // r1@8
  int v8; // r0@11
  int v9; // r0@14
  int v10; // r8@14
  int v11; // r0@14
  int v12; // r7@15
  int v13; // r1@15
  unsigned int v14; // r3@15
  unsigned int v15; // r1@17
  unsigned int v16; // r5@17
  char *v17; // r9@23
  int v18; // r10@25
  int v19; // r12@25
  int v20; // r1@26
  int v21; // r7@27
  int v22; // r3@27
  int v23; // r0@27
  int v24; // r2@27
  int v25; // r4@27
  int v26; // r5@27
  int v27; // r6@27
  int v28; // r3@27
  int v29; // r0@27
  int v30; // r2@27
  int v31; // r4@27
  int v32; // r5@27
  int v33; // r6@27
  int v34; // r3@27
  int v35; // r2@27
  int v36; // r4@27
  int v37; // r5@27
  int v38; // r6@27
  int v39; // r5@28
  unsigned int *v40; // r2@30
  signed int v41; // r1@32
  unsigned int *v42; // r2@34
  signed int v43; // r1@36
  unsigned int *v44; // r2@38
  signed int v45; // r1@40
  int v46; // r1@54
  void *v47; // r0@54
  int v48; // r1@55
  void *v49; // r0@55
  int *v50; // r0@56
  __int64 *v51; // r10@64
  int v52; // r8@64
  int v53; // r0@64
  int v54; // r12@65
  int v55; // r1@65
  unsigned int v56; // r3@65
  unsigned int v57; // r1@67
  unsigned int v58; // r4@67
  char *v59; // r9@73
  int v60; // r10@75
  int v61; // r12@75
  int v62; // r1@76
  int v63; // r7@77
  int v64; // r3@77
  int v65; // r0@77
  int v66; // r2@77
  int v67; // r4@77
  int v68; // r5@77
  int v69; // r6@77
  int v70; // r3@77
  int v71; // r0@77
  int v72; // r2@77
  int v73; // r4@77
  int v74; // r5@77
  int v75; // r6@77
  int v76; // r3@77
  int v77; // r2@77
  int v78; // r4@77
  int v79; // r5@77
  int v80; // r6@77
  int v81; // r5@78
  unsigned int v82; // r7@79
  unsigned int *v83; // r2@80
  signed int v84; // r1@82
  unsigned int *v85; // r2@84
  signed int v86; // r1@86
  unsigned int *v87; // r2@88
  signed int v88; // r1@90
  int v89; // r1@104
  void *v90; // r0@104
  int v91; // r1@105
  void *v92; // r0@105
  int *v93; // r0@106
  int v94; // r1@115
  int v95; // r1@118
  int v96; // r1@121
  int v97; // r0@123
  int v98; // r1@124
  int v99; // r1@127
  char *result; // r0@130
  unsigned int v101; // [sp+2Ch] [bp-F4h]@23
  unsigned int v102; // [sp+2Ch] [bp-F4h]@73
  __int64 *v103; // [sp+30h] [bp-F0h]@14
  char v104; // [sp+37h] [bp-E9h]@129
  int v105; // [sp+38h] [bp-E8h]@129
  int v106; // [sp+3Ch] [bp-E4h]@129
  int v107; // [sp+40h] [bp-E0h]@129
  int v108; // [sp+44h] [bp-DCh]@129
  char v109; // [sp+4Bh] [bp-D5h]@126
  int v110; // [sp+4Ch] [bp-D4h]@126
  int v111; // [sp+50h] [bp-D0h]@126
  int v112; // [sp+54h] [bp-CCh]@126
  int v113; // [sp+58h] [bp-C8h]@126
  char v114; // [sp+5Fh] [bp-C1h]@123
  int v115; // [sp+60h] [bp-C0h]@123
  char v116; // [sp+67h] [bp-B9h]@123
  int v117; // [sp+68h] [bp-B8h]@123
  int v118; // [sp+6Ch] [bp-B4h]@123
  int v119; // [sp+70h] [bp-B0h]@123
  int v120; // [sp+74h] [bp-ACh]@123
  char v121; // [sp+7Bh] [bp-A5h]@120
  int v122; // [sp+7Ch] [bp-A4h]@120
  int v123; // [sp+80h] [bp-A0h]@117
  char v124; // [sp+87h] [bp-99h]@117
  int v125; // [sp+88h] [bp-98h]@117
  int v126; // [sp+8Ch] [bp-94h]@117
  int v127; // [sp+90h] [bp-90h]@114
  char v128; // [sp+97h] [bp-89h]@114
  int v129; // [sp+98h] [bp-88h]@114
  int v130; // [sp+9Ch] [bp-84h]@63
  char v131; // [sp+A3h] [bp-7Dh]@63
  int v132; // [sp+A4h] [bp-7Ch]@63
  int v133; // [sp+A8h] [bp-78h]@63
  int v134; // [sp+ACh] [bp-74h]@63
  int v135; // [sp+B0h] [bp-70h]@63
  int v136; // [sp+B4h] [bp-6Ch]@13
  char v137; // [sp+BBh] [bp-65h]@13
  int v138; // [sp+BCh] [bp-64h]@13
  int v139; // [sp+C0h] [bp-60h]@13
  int v140; // [sp+C4h] [bp-5Ch]@13
  int v141; // [sp+C8h] [bp-58h]@13
  int v142; // [sp+CCh] [bp-54h]@10
  char v143; // [sp+D3h] [bp-4Dh]@10
  int v144; // [sp+D4h] [bp-4Ch]@7
  char v145; // [sp+DBh] [bp-45h]@7
  int v146; // [sp+DCh] [bp-44h]@7
  int v147; // [sp+E0h] [bp-40h]@4
  char v148; // [sp+E7h] [bp-39h]@4
  int v149; // [sp+E8h] [bp-38h]@4
  int v150; // [sp+ECh] [bp-34h]@1
  char v151; // [sp+F3h] [bp-2Dh]@1
  int v152; // [sp+F4h] [bp-2Ch]@1

  v1 = this;
  v2 = (ClientInputMappingFactory *)TouchInputMapping::TouchInputMapping(this);
  ClientInputMappingFactory::_addInvariantGamePlayTouchControls(v2, v1);
  v3 = (ClientInputMappingFactory *)((char *)v1 + 12);
  v152 = 26;
  v151 = 0;
  v150 = 3;
  v4 = *((_QWORD *)v1 + 2);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[23],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (__int64 *)((char *)v1 + 12),
      (int)"button.left",
      (int)"binding.area.move_left",
      "binding.bool.true",
      (int)&unk_27CA864,
      &v152,
      (int *)&unk_262C64C,
      &flt_262C650,
      (int *)&flt_262C650,
      &v151,
      &v150,
      (int)"??Y?");
    v5 = *((_DWORD *)v1 + 4);
  }
  else
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[23],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (int)v1 + 12,
      v4,
      "button.left",
      "binding.area.move_left",
    v5 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v5;
  v149 = 78;
  v148 = 0;
  v147 = 3;
  if ( v5 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[13],char const(&)[24],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      (int)"button.right",
      (int)"binding.area.move_right",
      &v149,
      &v148,
      &v147,
    v6 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[13],char const(&)[24],char const(&)[18],ButtonColors const&,int,int const&,int const&,int const&,bool,int,float const&>(
      v5,
      "button.right",
      "binding.area.move_right",
    v6 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v6;
  v146 = 52;
  v145 = 0;
  v144 = 3;
  if ( v6 == *((_DWORD *)v1 + 5) )
      (int)"button.down",
      (int)"binding.area.move_down",
      &v146,
      &v145,
      &v144,
    v7 = *((_DWORD *)v1 + 4);
      v6,
      "button.down",
      "binding.area.move_down",
    v7 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v7;
  v143 = 1;
  v142 = 3;
  if ( v7 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[17],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      (int)"button.up_ignore",
      (int)"binding.area.move_up",
      (int *)"",
      &v143,
      &v142,
    v8 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[17],char const(&)[21],char const(&)[18],ButtonColors const&,int const&,int const&,int const&,int const&,bool,int,float const&>(
      v7,
      "button.up_ignore",
      "binding.area.move_up",
    v8 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v8;
  v141 = 218;
  v140 = 64;
  v138 = 18;
  v139 = 18;
  v137 = 0;
  v136 = 4;
  if ( v8 == *((_DWORD *)v1 + 5) )
    v12 = *(_DWORD *)v3;
    v13 = (v8 - *(_DWORD *)v3) >> 2;
    v14 = 678152731 * v13;
    if ( v8 == *(_DWORD *)v3 )
      v14 = 1;
    v15 = v14 + 678152731 * v13;
    v16 = v15;
    if ( v15 > 0x35E50D7 )
      v16 = 56512727;
    if ( v15 < v14 )
    if ( v16 )
    {
      if ( v16 >= 0x35E50D8 )
        sub_119C874();
      v17 = (char *)operator new(76 * v16);
      v101 = v16;
      v103 = (__int64 *)((char *)v1 + 12);
      v8 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v12 = *(_QWORD *)((char *)v1 + 12);
    }
    else
      v101 = 0;
      v17 = 0;
    sub_DE3E18(
      (int)&v17[v8 - v12],
      "button.dismount",
      "binding.area.sneak",
      "binding.bool.sneaking",
      (int)&unk_27CA884,
      &v141,
      &v140,
      (float *)&v139,
      &v138,
      &v137,
      &v136,
      (int)&unk_262C65C);
    v19 = *(_QWORD *)((char *)v1 + 12) >> 32;
    v18 = *(_QWORD *)((char *)v1 + 12);
    if ( v18 == v19 )
      v10 = (int)(v17 + 76);
      v20 = (int)(v17 - 76);
      do
      {
        v21 = v18 + 12;
        *(_DWORD *)(v20 + 76) = *(_DWORD *)v18;
        v20 += 76;
        *(_DWORD *)v18 = &unk_28898CC;
        *(_DWORD *)(v20 + 4) = *(_DWORD *)(v18 + 4);
        *(_DWORD *)(v18 + 4) = &unk_28898CC;
        *(_DWORD *)(v20 + 8) = *(_DWORD *)(v18 + 8);
        v22 = v20 + 12;
        *(_DWORD *)(v18 + 8) = &unk_28898CC;
        v18 += 76;
        v23 = *(_DWORD *)v21;
        v24 = *(_DWORD *)(v21 + 4);
        v25 = *(_DWORD *)(v21 + 8);
        v26 = *(_DWORD *)(v21 + 12);
        v27 = *(_DWORD *)(v21 + 16);
        v21 += 20;
        *(_DWORD *)v22 = v23;
        *(_DWORD *)(v22 + 4) = v24;
        *(_DWORD *)(v22 + 8) = v25;
        *(_DWORD *)(v22 + 12) = v26;
        *(_DWORD *)(v22 + 16) = v27;
        v28 = v20 + 32;
        v29 = *(_DWORD *)v21;
        v30 = *(_DWORD *)(v21 + 4);
        v31 = *(_DWORD *)(v21 + 8);
        v32 = *(_DWORD *)(v21 + 12);
        v33 = *(_DWORD *)(v21 + 16);
        *(_DWORD *)v28 = v29;
        *(_DWORD *)(v28 + 4) = v30;
        *(_DWORD *)(v28 + 8) = v31;
        *(_DWORD *)(v28 + 12) = v32;
        *(_DWORD *)(v28 + 16) = v33;
        v34 = v20 + 52;
        v35 = *(_DWORD *)(v21 + 4);
        v36 = *(_DWORD *)(v21 + 8);
        v37 = *(_DWORD *)(v21 + 12);
        v38 = *(_DWORD *)(v21 + 16);
        *(_DWORD *)v34 = *(_DWORD *)v21;
        *(_DWORD *)(v34 + 4) = v35;
        *(_DWORD *)(v34 + 8) = v36;
        *(_DWORD *)(v34 + 12) = v37;
        *(_DWORD *)(v34 + 16) = v38;
        *(_BYTE *)(v20 + 72) = *(_BYTE *)(v21 + 20);
      }
      while ( v18 != v19 );
      v39 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v18 = *(_QWORD *)((char *)v1 + 12);
      v10 = v20 + 152;
      if ( v18 != v39 )
        do
        {
          v46 = *(_DWORD *)(v18 + 8);
          v47 = (void *)(v46 - 12);
          if ( (int *)(v46 - 12) != &dword_28898C0 )
          {
            v40 = (unsigned int *)(v46 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
            }
            else
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v47);
          }
          v48 = *(_DWORD *)(v18 + 4);
          v49 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            v42 = (unsigned int *)(v48 - 4);
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v49);
          v50 = (int *)(*(_DWORD *)v18 - 12);
          if ( v50 != &dword_28898C0 )
            v44 = (unsigned int *)(*(_DWORD *)v18 - 4);
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
              v45 = (*v44)--;
            if ( v45 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v50);
          v18 += 76;
        }
        while ( v18 != v39 );
        v18 = *(_DWORD *)v103;
    if ( v18 )
      operator delete((void *)v18);
    *((_DWORD *)v1 + 3) = v17;
    *((_DWORD *)v1 + 4) = v10;
    v11 = (int)&v17[76 * v101];
    *((_DWORD *)v1 + 5) = v11;
      v8,
    v9 = *((_DWORD *)v1 + 4);
    v103 = (__int64 *)((char *)v1 + 12);
    v10 = v9 + 76;
    *((_DWORD *)v1 + 4) = v9 + 76;
    v11 = *((_DWORD *)v1 + 5);
  v135 = 218;
  v134 = 82;
  v132 = 18;
  v133 = 18;
  v131 = 0;
  v130 = 4;
  if ( v10 == v11 )
    v54 = *(_DWORD *)v103;
    v55 = (v10 - *(_DWORD *)v103) >> 2;
    v56 = 678152731 * v55;
    if ( v10 == *(_DWORD *)v103 )
      v56 = 1;
    v57 = v56 + 678152731 * v55;
    v58 = v57;
    if ( v57 > 0x35E50D7 )
      v58 = 56512727;
    if ( v57 < v56 )
    if ( v58 )
      if ( v58 >= 0x35E50D8 )
      v102 = v58;
      v59 = (char *)operator new(76 * v58);
      v10 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v54 = *(_QWORD *)((char *)v1 + 12);
      v102 = 0;
      v59 = 0;
    sub_DE4074(
      (int)&v59[v10 - v54],
      "binding.bool.not_sneaking",
      (int)&unk_27CA8A4,
      &v135,
      &v134,
      (float *)&v133,
      &v132,
      &v131,
      &v130,
    v61 = *(_QWORD *)((char *)v1 + 12) >> 32;
    v60 = *(_QWORD *)((char *)v1 + 12);
    if ( v60 == v61 )
      v52 = (int)(v59 + 76);
      v82 = v102;
      v62 = (int)(v59 - 76);
        v63 = v60 + 12;
        *(_DWORD *)(v62 + 76) = *(_DWORD *)v60;
        v62 += 76;
        *(_DWORD *)v60 = &unk_28898CC;
        *(_DWORD *)(v62 + 4) = *(_DWORD *)(v60 + 4);
        *(_DWORD *)(v60 + 4) = &unk_28898CC;
        *(_DWORD *)(v62 + 8) = *(_DWORD *)(v60 + 8);
        v64 = v62 + 12;
        *(_DWORD *)(v60 + 8) = &unk_28898CC;
        v60 += 76;
        v65 = *(_DWORD *)v63;
        v66 = *(_DWORD *)(v63 + 4);
        v67 = *(_DWORD *)(v63 + 8);
        v68 = *(_DWORD *)(v63 + 12);
        v69 = *(_DWORD *)(v63 + 16);
        v63 += 20;
        *(_DWORD *)v64 = v65;
        *(_DWORD *)(v64 + 4) = v66;
        *(_DWORD *)(v64 + 8) = v67;
        *(_DWORD *)(v64 + 12) = v68;
        *(_DWORD *)(v64 + 16) = v69;
        v70 = v62 + 32;
        v71 = *(_DWORD *)v63;
        v72 = *(_DWORD *)(v63 + 4);
        v73 = *(_DWORD *)(v63 + 8);
        v74 = *(_DWORD *)(v63 + 12);
        v75 = *(_DWORD *)(v63 + 16);
        *(_DWORD *)v70 = v71;
        *(_DWORD *)(v70 + 4) = v72;
        *(_DWORD *)(v70 + 8) = v73;
        *(_DWORD *)(v70 + 12) = v74;
        *(_DWORD *)(v70 + 16) = v75;
        v76 = v62 + 52;
        v77 = *(_DWORD *)(v63 + 4);
        v78 = *(_DWORD *)(v63 + 8);
        v79 = *(_DWORD *)(v63 + 12);
        v80 = *(_DWORD *)(v63 + 16);
        *(_DWORD *)v76 = *(_DWORD *)v63;
        *(_DWORD *)(v76 + 4) = v77;
        *(_DWORD *)(v76 + 8) = v78;
        *(_DWORD *)(v76 + 12) = v79;
        *(_DWORD *)(v76 + 16) = v80;
        *(_BYTE *)(v62 + 72) = *(_BYTE *)(v63 + 20);
      while ( v60 != v61 );
      v81 = *(_QWORD *)((char *)v1 + 12) >> 32;
      v60 = *(_QWORD *)((char *)v1 + 12);
      v52 = v62 + 152;
      if ( v60 == v81 )
        v82 = v102;
      else
          v89 = *(_DWORD *)(v60 + 8);
          v90 = (void *)(v89 - 12);
          if ( (int *)(v89 - 12) != &dword_28898C0 )
            v83 = (unsigned int *)(v89 - 4);
                v84 = __ldrex(v83);
              while ( __strex(v84 - 1, v83) );
              v84 = (*v83)--;
            if ( v84 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v90);
          v91 = *(_DWORD *)(v60 + 4);
          v92 = (void *)(v91 - 12);
          if ( (int *)(v91 - 12) != &dword_28898C0 )
            v85 = (unsigned int *)(v91 - 4);
                v86 = __ldrex(v85);
              while ( __strex(v86 - 1, v85) );
              v86 = (*v85)--;
            if ( v86 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v92);
          v93 = (int *)(*(_DWORD *)v60 - 12);
          if ( v93 != &dword_28898C0 )
            v87 = (unsigned int *)(*(_DWORD *)v60 - 4);
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
              v88 = (*v87)--;
            if ( v88 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v93);
          v60 += 76;
        while ( v60 != v81 );
        v60 = *(_DWORD *)v103;
    if ( v60 )
      operator delete((void *)v60);
    *((_DWORD *)v1 + 3) = v59;
    *((_DWORD *)v1 + 4) = v52;
    v53 = (int)&v59[76 * v82];
    v51 = v103;
    *((_DWORD *)v1 + 5) = v53;
      v10,
    v52 = *((_DWORD *)v1 + 4) + 76;
    v53 = *((_DWORD *)v1 + 5);
  v129 = 133;
  v128 = 0;
  v127 = 3;
  if ( v52 == v53 )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[14],char const(&)[26],char const(&)[31],ButtonColors const&,int const&,int,int const&,int const&,bool,int,float const&>(
      v51,
      (int)"button.upleft",
      (int)"binding.area.move_up_left",
      "binding.bool.is_moving_forward",
      &v129,
      &v128,
      &v127,
    v94 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[14],char const(&)[26],char const(&)[31],ButtonColors const&,int const&,int,int const&,int const&,bool,int,float const&>(
      (int)v51,
      v52,
      "button.upleft",
      "binding.area.move_up_left",
    v94 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v94;
  v126 = 26;
  v125 = 133;
  v124 = 0;
  v123 = 3;
  if ( v94 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[15],char const(&)[27],char const(&)[31],ButtonColors const&,int,int,int const&,int const&,bool,int,float const&>(
      (int)"button.upright",
      (int)"binding.area.move_up_right",
      &v126,
      &v125,
      &v124,
      &v123,
    v95 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[15],char const(&)[27],char const(&)[31],ButtonColors const&,int,int,int const&,int const&,bool,int,float const&>(
      v94,
      "button.upright",
      "binding.area.move_up_right",
    v95 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v95;
  v122 = 104;
  v121 = 0;
  if ( v95 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[12],char const(&)[18],char const(&)[30],ButtonColors const&,int,int const&,int const&,int const&,bool>(
      "button.jump",
      "binding.area.jump",
      "binding.bool.show_jump_button",
      &v122,
      &v121);
    v96 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[12],char const(&)[18],char const(&)[30],ButtonColors const&,int,int const&,int const&,int const&,bool>(
      v95,
    v96 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v96;
  v119 = 0;
  v120 = 0;
  v117 = 0;
  v118 = 0;
  v116 = 1;
  v114 = 1;
  v97 = *((_DWORD *)v1 + 5);
  v115 = 3;
  if ( v96 == v97 )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[10],char const(&)[31],char const(&)[18],ButtonColors const&,int,int,int,int,bool,int,float const&,bool>(
      (int)"button.up",
      (int)"binding.area.move_up_invisible",
      &v120,
      &v119,
      (float *)&v118,
      &v117,
      &v116,
      &v115,
      (int)"??Y?",
      &v114);
    v98 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[10],char const(&)[31],char const(&)[18],ButtonColors const&,int,int,int,int,bool,int,float const&,bool>(
      v96,
      "button.up",
      "binding.area.move_up_invisible",
    v98 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v98;
  v112 = 0;
  v113 = 0;
  v110 = 0;
  v111 = 0;
  v109 = 1;
  if ( v98 == *((_DWORD *)v1 + 5) )
    std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[24],char const(&)[26],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      "button.hide_jump_button",
      "binding.area.disable_jump",
      &v113,
      &v112,
      (float *)&v111,
      &v110,
      &v109);
    v99 = *((_DWORD *)v1 + 4);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[24],char const(&)[26],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v98,
    v99 = *((_DWORD *)v1 + 4) + 76;
    *((_DWORD *)v1 + 4) = v99;
  v107 = 0;
  v108 = 0;
  v105 = 0;
  v106 = 0;
  v104 = 0;
  if ( v99 == *((_DWORD *)v1 + 5) )
    result = std::vector<TouchGlyphButtonBinding,std::allocator<TouchGlyphButtonBinding>>::_M_emplace_back_aux<char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
               v51,
               "no_binding",
               "binding.area.dpad_no_turn_interact",
               "binding.bool.true",
               (int)&unk_27CA864,
               &v108,
               &v107,
               (float *)&v106,
               &v105,
               &v104);
    __gnu_cxx::new_allocator<TouchGlyphButtonBinding>::construct<TouchGlyphButtonBinding,char const(&)[11],char const(&)[35],char const(&)[18],ButtonColors const&,int,int,int,int,bool>(
      v99,
      "no_binding",
      "binding.area.dpad_no_turn_interact",
      &v108,
      &v107,
      (float *)&v106,
      &v105,
      &v104);
    result = (char *)(*((_DWORD *)v1 + 4) + 76);
    *((_DWORD *)v1 + 4) = result;
  return result;
}


void __fastcall ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(int a1, int a2, int a3, int *a4, int a5, char a6)
{
  ClientInputMappingFactory::_bindActionToKeyboardAndMouseInput(a1, a2, a3, a4, a5, a6);
}


void __fastcall ClientInputMappingFactory::_createRideableGameControllerMapping(float a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  float v5; // r7@1
  void *v6; // r0@4
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  int v12; // [sp+10h] [bp-30h]@5
  int v13; // [sp+18h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  _aeabi_memclr4(LODWORD(a1), 48);
  ClientInputMappingFactory::_addSharedGamePlayGameControllerControls(v3, v5, v4);
  sub_119C884((void **)&v13, "button.dismount");
  if ( v4 )
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v13, 17, -1082130432);
  else
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v13, 17, -1082130432);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v12, "button.dismount");
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 108, &v12, 29, -1082130432);
    ClientInputMappingFactory::_bindActionToGameControllerInput(-1082130432, v5, v3 + 68, &v12, 29, -1082130432);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}
