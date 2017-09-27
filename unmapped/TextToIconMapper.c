

const void **__fastcall TextToIconMapper::_init(TextToIconMapper *this)
{
  TextToIconMapper *v1; // r8@1
  int **v2; // r7@1
  unsigned int *v3; // r2@2
  signed int v4; // r1@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  int v7; // r1@18
  void *v8; // r0@18
  int *v9; // r0@19
  int *v10; // r4@21
  unsigned int *v11; // r2@22
  signed int v12; // r1@24
  int v13; // r1@30
  void *v14; // r0@30
  int v16; // [sp+4h] [bp-144h]@21
  int v17; // [sp+8h] [bp-140h]@21
  int v18; // [sp+Ch] [bp-13Ch]@21
  int v19; // [sp+10h] [bp-138h]@21
  int v20; // [sp+14h] [bp-134h]@21
  int v21; // [sp+18h] [bp-130h]@21
  int v22; // [sp+1Ch] [bp-12Ch]@21
  int v23; // [sp+20h] [bp-128h]@21
  int v24; // [sp+24h] [bp-124h]@21
  int v25; // [sp+28h] [bp-120h]@21
  int v26; // [sp+2Ch] [bp-11Ch]@21
  int v27; // [sp+30h] [bp-118h]@21
  int v28; // [sp+34h] [bp-114h]@21
  int v29; // [sp+38h] [bp-110h]@21
  int v30; // [sp+3Ch] [bp-10Ch]@21
  int v31; // [sp+40h] [bp-108h]@21
  int v32; // [sp+44h] [bp-104h]@21
  int v33; // [sp+48h] [bp-100h]@21
  int v34; // [sp+4Ch] [bp-FCh]@21
  int v35; // [sp+50h] [bp-F8h]@21
  int v36; // [sp+54h] [bp-F4h]@21
  int v37; // [sp+58h] [bp-F0h]@21
  int v38; // [sp+5Ch] [bp-ECh]@21
  int v39; // [sp+60h] [bp-E8h]@21
  int v40; // [sp+64h] [bp-E4h]@21
  int v41; // [sp+68h] [bp-E0h]@21
  int v42; // [sp+6Ch] [bp-DCh]@21
  int v43; // [sp+70h] [bp-D8h]@21
  int v44; // [sp+74h] [bp-D4h]@21
  int v45; // [sp+78h] [bp-D0h]@21
  int v46; // [sp+7Ch] [bp-CCh]@21
  int v47; // [sp+80h] [bp-C8h]@21
  int *v48[12]; // [sp+84h] [bp-C4h]@1
  char v49; // [sp+B4h] [bp-94h]@1

  v1 = this;
  sub_DA7364((void **)v48, "key.jump");
  sub_DA7364((void **)&v48[1], ":touch_jump:");
  sub_DA7364((void **)&v48[2], "key.sneak");
  sub_DA7364((void **)&v48[3], ":touch_sneak:");
  sub_DA7364((void **)&v48[4], "key.forward");
  sub_DA7364((void **)&v48[5], ":touch_forward:");
  sub_DA7364((void **)&v48[6], "key.left");
  sub_DA7364((void **)&v48[7], ":touch_left:");
  sub_DA7364((void **)&v48[8], "key.back");
  sub_DA7364((void **)&v48[9], ":touch_back:");
  sub_DA7364((void **)&v48[10], "key.right");
  sub_DA7364((void **)&v48[11], ":touch_right:");
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (int)v1 + 28,
    v48,
    6);
  v2 = (int **)&v49;
  do
  {
    v7 = (int)*(v2 - 1);
    v2 -= 2;
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
        j_j_j_j_j__ZdlPv_9(v8);
    }
    v9 = *v2 - 3;
    if ( v9 != &dword_28898C0 )
      v5 = (unsigned int *)(*v2 - 1);
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
  }
  while ( v2 != v48 );
  v16 = 1;
  sub_DA7364((void **)&v17, ":xbox_face_button_down:");
  v18 = 2;
  sub_DA7364((void **)&v19, ":xbox_face_button_right:");
  v20 = 3;
  sub_DA7364((void **)&v21, ":xbox_face_button_left:");
  v22 = 4;
  sub_DA7364((void **)&v23, ":xbox_face_button_up:");
  v24 = 5;
  sub_DA7364((void **)&v25, ":xbox_dpad_up:");
  v26 = 6;
  sub_DA7364((void **)&v27, ":xbox_dpad_down:");
  v28 = 7;
  sub_DA7364((void **)&v29, ":xbox_dpad_left:");
  v30 = 8;
  sub_DA7364((void **)&v31, ":xbox_dpad_right:");
  v32 = 9;
  sub_DA7364((void **)&v33, ":xbox_stick_left:");
  v34 = 10;
  sub_DA7364((void **)&v35, ":xbox_stick_right:");
  v36 = 11;
  sub_DA7364((void **)&v37, ":xbox_bumper_left:");
  v38 = 12;
  sub_DA7364((void **)&v39, ":xbox_bumper_right:");
  v40 = 13;
  sub_DA7364((void **)&v41, ":xbox_select:");
  v42 = 14;
  sub_DA7364((void **)&v43, ":xbox_start:");
  v44 = -100;
  sub_DA7364((void **)&v45, ":xbox_trigger_left:");
  v46 = -99;
  sub_DA7364((void **)&v47, ":xbox_trigger_right:");
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::operator=(
    (int)v1,
    (unsigned int *)&v16,
    16);
  v10 = (int *)v48;
    v13 = *(v10 - 1);
    v10 -= 2;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v13 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
  while ( v10 != &v16 );
  return sub_DA78A4((void **)v1 + 14, ":xbox_", (_BYTE *)6);
}


void __fastcall TextToIconMapper::_remapTouchIcon(int *a1, int a2, int **a3)
{
  TextToIconMapper::_remapTouchIcon(a1, a2, a3);
}


void __fastcall TextToIconMapper::preprocessText(int a1, int *a2, __int64 a3)
{
  int *v3; // r10@1
  int v4; // r5@1
  char *v5; // r11@1
  int *v6; // r8@2
  size_t v7; // r9@3
  unsigned int v8; // r7@3
  unsigned int v9; // r3@4
  int v10; // r4@5
  signed int v11; // r7@5
  void *v12; // r0@5
  unsigned int v13; // r3@7
  int *v14; // r6@8
  char *v15; // r0@8
  int v16; // r4@8
  char *v17; // r0@9
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  signed int v20; // r7@14
  void *v21; // r0@14
  unsigned int v22; // r3@16
  const void **v23; // r0@17
  int v24; // r11@17
  int v25; // r0@17
  int v26; // r1@17 OVERLAPPED
  int v27; // r7@17
  unsigned int v28; // r2@17
  char *v29; // r3@20
  void *v30; // r0@22
  char *v31; // r8@23
  char *v32; // r7@23
  void *v33; // r0@24
  unsigned int *v34; // r2@27
  signed int v35; // r1@29
  unsigned int *v36; // r2@31
  signed int v37; // r1@33
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@62
  signed int v43; // r1@64
  unsigned int *v44; // r1@66
  signed int v45; // r0@68
  char *v46; // r5@72
  __int64 v47; // [sp+1Ch] [bp-54h]@1
  int v48; // [sp+24h] [bp-4Ch]@17
  char *v49; // [sp+28h] [bp-48h]@17
  int v50; // [sp+30h] [bp-40h]@14
  char *v51; // [sp+34h] [bp-3Ch]@8
  int v52; // [sp+38h] [bp-38h]@8
  int v53; // [sp+40h] [bp-30h]@5
  int v54; // [sp+44h] [bp-2Ch]@5

  v3 = a2;
  v47 = a3;
  v4 = a1;
  v5 = sub_DA8964(a2, 58, 0);
  if ( v5 != (char *)-1 )
  {
    v6 = &dword_28898C0;
    do
    {
      v7 = (size_t)v5;
      v8 = (unsigned int)(v5 + 1);
      v5 = sub_DA8964(v3, 58, (unsigned int)(v5 + 1));
      if ( v5 == (char *)-1 )
        return;
      v9 = *(_DWORD *)(*v3 - 12);
      if ( v9 < v8 )
        sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
      v10 = (int)&v5[-v7];
      sub_DA7574((void **)&v54, v3, v8, (unsigned int)&v5[-v7 - 1]);
      sub_DA7364((void **)&v53, "_input_");
      v11 = Util::startsWith(&v54, &v53);
      v12 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != v6 )
      {
        v34 = (unsigned int *)(v53 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        }
        else
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9(v12);
      }
      if ( v11 == 1 )
        v13 = *(_DWORD *)(v54 - 12);
        if ( v13 <= 6 )
          sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 7, v13);
        sub_DA7574((void **)&v52, &v54, 7u, 0xFFFFFFFF);
        TextToIconMapper::_mapInputIcon((int *)&v51, v4, (int **)&v52, v47, SHIDWORD(v47));
        sub_DA8934((const void **)v3, v7, v10 + 1, v51, *((_BYTE **)v51 - 3));
        v14 = v6;
        v15 = v51 - 12;
        v16 = *((_DWORD *)v51 - 3);
        if ( (int *)(v51 - 12) != v6 )
          v40 = (unsigned int *)(v51 - 4);
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
            j_j_j_j_j__ZdlPv_9(v15);
        v5 = (char *)(v16 + v7);
        v17 = (char *)(v52 - 12);
        if ( (int *)(v52 - 12) == v6 )
          goto LABEL_24;
        v18 = (unsigned int *)(v52 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 > 0 )
      else
        sub_DA7364((void **)&v50, "_gamepad_");
        v20 = Util::startsWith(&v54, &v50);
        v21 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != v6 )
          v38 = (unsigned int *)(v50 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j_j__ZdlPv_9(v21);
        if ( v20 != 1 )
        v22 = *(_DWORD *)(v54 - 12);
        if ( v22 <= 8 )
          sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 9, v22);
        sub_DA7574((void **)&v48, &v54, 9u, 0xFFFFFFFF);
        v23 = sub_DA7948((const void **)&v48, 0, *(_DWORD *)(v4 + 56), *(_BYTE **)(*(_DWORD *)(v4 + 56) - 12));
        v24 = v4;
        v49 = (char *)*v23;
        *v23 = v6 + 3;
        v25 = (int)v49;
        *(_QWORD *)&v26 = *(_QWORD *)(v49 - 12);
        v27 = v26 + 1;
        if ( v26 + 1 > v28 || *((_DWORD *)v49 - 1) >= 1 )
          sub_DA7404((const void **)&v49, v26 + 1);
          v25 = (int)v49;
          v26 = *((_DWORD *)v49 - 3);
        *(_BYTE *)(v25 + v26) = 58;
        v29 = v49;
        if ( (int *)(v49 - 12) != v6 )
          *((_DWORD *)v49 - 1) = 0;
          *((_DWORD *)v29 - 3) = v27;
          v29[v27] = byte_26C67B8[0];
          v29 = v49;
        v49 = (char *)(v6 + 3);
        v30 = (void *)(v48 - 12);
        if ( (int *)(v48 - 12) != v6 )
          v42 = (unsigned int *)(v48 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            v46 = v29;
            j_j_j_j_j__ZdlPv_9(v30);
            v29 = v46;
        v31 = v29 - 12;
        v32 = v29;
        sub_DA8934((const void **)v3, v7, v10 + 1, v29, *((_BYTE **)v29 - 3));
        v4 = v24;
        v5 = (char *)(*(_DWORD *)v31 + v7);
        if ( (int *)v31 == v14 )
        v44 = (unsigned int *)(v32 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 > 0 )
        v17 = v31;
      j_j_j_j_j__ZdlPv_9(v17);
LABEL_24:
      v33 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != v14 )
        v36 = (unsigned int *)(v54 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9(v33);
      v6 = v14;
    }
    while ( v5 != (char *)-1 );
  }
}


int __fastcall TextToIconMapper::TextToIconMapper(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r7@6

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(a1)));
  *(_DWORD *)(v1 + 4) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_DA7414();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 1065353216;
  *(_DWORD *)(v1 + 48) = 0;
  LODWORD(v2) = v1 + 44;
  v5 = sub_DA7744(v2);
  *(_DWORD *)(v1 + 32) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 52) = 0;
    v7 = (void *)(v1 + 52);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 28) = v7;
  *(_DWORD *)(v1 + 56) = &unk_28898CC;
  TextToIconMapper::_init((TextToIconMapper *)v1);
  return v1;
}


void __fastcall TextToIconMapper::_remapGamepadIcon(TextToIconMapper *this, int a2, unsigned int a3)
{
  TextToIconMapper::_remapGamepadIcon(this, a2, a3);
}


void __fastcall TextToIconMapper::_mapInputIcon(int *a1, int a2, int **a3, int a4, int a5)
{
  TextToIconMapper::_mapInputIcon(a1, a2, a3, a4, a5);
}


void __fastcall TextToIconMapper::_mapInputIcon(int *a1, int a2, int **a3, int a4, int a5)
{
  int *v5; // r4@1
  int v6; // r6@1
  int v7; // r5@1
  signed int v8; // r6@6
  int v9; // r0@7
  char *v10; // r0@13
  void *v11; // r0@15
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  void *v14; // r0@23
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  signed int v17; // r5@28
  void *v18; // r0@33
  unsigned int *v19; // r2@36
  signed int v20; // r1@38
  int v21; // [sp+8h] [bp-48h]@45
  int v22; // [sp+Ch] [bp-44h]@12
  void *ptr; // [sp+10h] [bp-40h]@13
  int v24; // [sp+28h] [bp-28h]@5
  void *v25; // [sp+2Ch] [bp-24h]@31

  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( (unsigned int)(a5 - 3) >= 2 )
  {
    if ( a5 == 2 )
    {
      TextToIconMapper::_remapTouchIcon(a1, a2, a3);
      return;
    }
    if ( a5 != 1 || !a4 )
      goto LABEL_45;
    RemappingLayout::getKeymappingByAction((int)&v24, a4, (const void **)a3);
    if ( Keymapping::isAssigned((Keymapping *)&v24) != 1 )
      v17 = 2;
      goto LABEL_31;
    v8 = **(_DWORD **)Keymapping::getKeys((Keymapping *)&v24);
    if ( v8 > -1 )
      goto LABEL_61;
    v9 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 12))(v7, v8);
    if ( v9 == 3 )
      sub_DA7364((void **)v5, ":mouse_middle_button:");
      goto LABEL_30;
    if ( v9 == 2 )
      sub_DA7364((void **)v5, ":mouse_right_button:");
    if ( v9 != 1 )
LABEL_61:
      (*(void (__fastcall **)(int *, int, signed int))(*(_DWORD *)v7 + 20))(v5, v7, v8);
    else
      sub_DA7364((void **)v5, ":mouse_left_button:");
LABEL_30:
    v17 = 1;
LABEL_31:
    if ( v25 )
      operator delete(v25);
    v18 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    if ( v17 == 1 )
LABEL_45:
    sub_DA7364((void **)&v21, "controllerLayoutScreen.unassigned");
    I18n::get(v5, (int **)&v21);
    v11 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) == &dword_28898C0 )
    v12 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      goto LABEL_52;
LABEL_51:
    v13 = (*v12)--;
LABEL_52:
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
    return;
  }
  if ( !a4 )
    goto LABEL_45;
  RemappingLayout::getKeymappingByAction((int)&v22, a4, (const void **)a3);
  if ( Keymapping::isAssigned((Keymapping *)&v22) != 1 )
    if ( ptr )
      operator delete(ptr);
    v14 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v22 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
  v10 = Keymapping::getKeys((Keymapping *)&v22);
  TextToIconMapper::_remapGamepadIcon((TextToIconMapper *)v5, v6, **(_DWORD **)v10);
  if ( ptr )
    operator delete(ptr);
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v22 - 4);
    goto LABEL_51;
}


void __fastcall TextToIconMapper::_remapTouchIcon(int *a1, int a2, int **a3)
{
  int *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-1Ch]@3

  v3 = a1;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 28),
         a3);
  if ( v4 )
  {
    sub_DA73B4(v3, (int *)(v4 + 8));
  }
  else
    sub_DA7364((void **)&v8, "controllerLayoutScreen.unassigned");
    I18n::get(v3, (int **)&v8);
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
        j_j_j_j_j__ZdlPv_9(v5);
    }
}


void __fastcall TextToIconMapper::_remapGamepadIcon(TextToIconMapper *this, int a2, unsigned int a3)
{
  __int64 v3; // kr00_8@1
  int *v4; // r8@1
  unsigned int v5; // r7@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r4@2
  _DWORD *v9; // r5@4
  bool v10; // zf@7
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+4h] [bp-2Ch]@11

  v3 = *(_QWORD *)a2;
  v4 = (int *)this;
  v5 = a3 % (unsigned int)(*(_QWORD *)a2 >> 32);
  v6 = *(_DWORD **)(*(_QWORD *)a2 + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = (_DWORD *)*v6;
  v8 = *(_DWORD *)(*v6 + 4);
  while ( v8 != a3 )
  {
    v9 = (_DWORD *)*v7;
    if ( *v7 )
    {
      v8 = v9[1];
      v6 = v7;
      v7 = (_DWORD *)*v7;
      if ( v9[1] % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v6 = (_DWORD *)*v6;
    v10 = v6 == 0;
  if ( v10 )
LABEL_11:
    sub_DA7364((void **)&v14, "controllerLayoutScreen.unassigned");
    I18n::get(v4, (int **)&v14);
    v11 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9(v11);
  else
    sub_DA73B4(v4, v6 + 2);
}


void __fastcall TextToIconMapper::preprocessText(int a1, int *a2, __int64 a3)
{
  TextToIconMapper::preprocessText(a1, a2, a3);
}
