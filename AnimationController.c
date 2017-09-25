

int __fastcall AnimationController::clearAnimationLists(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  void (*v4)(void); // r3@3
  unsigned int *v5; // r2@6
  unsigned int v6; // r1@8
  __int64 v7; // kr08_8@14
  int v8; // r5@15
  void (*v9)(void); // r3@16
  unsigned int *v10; // r2@19
  unsigned int v11; // r1@21

  v1 = result;
  v2 = *(_QWORD *)result;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v4 = *(void (**)(void))(v3 + 16);
      if ( v4 )
        v4();
      result = *(_DWORD *)(v3 + 4);
      if ( result )
      {
        v5 = (unsigned int *)(result + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      }
      v3 += 24;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 4) = v2;
  v7 = *(_QWORD *)(v1 + 12);
  if ( HIDWORD(v7) != (_DWORD)v7 )
    v8 = v7;
      v9 = *(void (**)(void))(v8 + 16);
      if ( v9 )
        v9();
      result = *(_DWORD *)(v8 + 4);
        v10 = (unsigned int *)(result + 8);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 == 1 )
      v8 += 24;
    while ( v8 != HIDWORD(v7) );
  *(_DWORD *)(v1 + 16) = v7;
  return result;
}


int __fastcall AnimationController::AnimationController(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


AnimationController *__fastcall AnimationController::~AnimationController(AnimationController *this)
{
  AnimationController *v1; // r8@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void (*v4)(void); // r3@2
  int v5; // r0@4
  unsigned int *v6; // r2@5
  unsigned int v7; // r1@7
  int v8; // r5@16 OVERLAPPED
  int v9; // r6@16 OVERLAPPED
  void (*v10)(void); // r3@17
  int v11; // r0@19
  unsigned int *v12; // r2@20
  unsigned int v13; // r1@22

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void (**)(void))(v2 + 16);
      if ( v4 )
        v4();
      v5 = *(_DWORD *)(v2 + 4);
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 == 1 )
          (*(void (**)(void))(*(_DWORD *)v5 + 12))();
      }
      v2 += 24;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 3);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_QWORD *)&v8 = *(_QWORD *)v1;
  if ( v8 != v9 )
      v10 = *(void (**)(void))(v8 + 16);
      if ( v10 )
        v10();
      v11 = *(_DWORD *)(v8 + 4);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 8);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (**)(void))(*(_DWORD *)v11 + 12))();
      v8 += 24;
    while ( v8 != v9 );
    v8 = *(_DWORD *)v1;
  if ( v8 )
    operator delete((void *)v8);
  return v1;
}


int __fastcall AnimationController::_tick(int a1, unsigned __int64 *a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // r4@1
  int v5; // r9@1
  int v6; // r5@1
  signed int v7; // r7@2
  void **v8; // r10@2
  int v10; // r0@8
  bool v11; // zf@8
  int v12; // r0@12
  char *v13; // r7@15
  char *v14; // r11@15
  int v15; // r7@15
  char v16; // r1@17
  char *v17; // r0@19
  void *v18; // r0@19
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  int v21; // r11@36
  unsigned int v22; // r0@37
  unsigned int *v23; // r8@37
  unsigned int v24; // r1@40
  unsigned int v25; // r2@41
  char v26; // r0@44
  unsigned __int16 v27; // r0@46
  int v28; // r11@47
  int v29; // r0@48
  unsigned int *v30; // r1@53
  unsigned int v31; // r0@55
  unsigned int *v32; // r8@59
  unsigned int v33; // r0@61
  UIControl *v34; // [sp+4h] [bp-114h]@44
  int v35; // [sp+8h] [bp-110h]@44
  unsigned int v36; // [sp+Ch] [bp-10Ch]@2
  signed int v37; // [sp+1Ch] [bp-FCh]@6
  void **v38; // [sp+30h] [bp-E8h]@2
  void **v39; // [sp+3Ch] [bp-DCh]@15
  void **v40; // [sp+40h] [bp-D8h]@19
  int v41; // [sp+5Ch] [bp-BCh]@20
  int v42; // [sp+64h] [bp-B4h]@19
  int v43; // [sp+68h] [bp-B0h]@20
  int v44; // [sp+110h] [bp-8h]@5

  v4 = a2;
  v5 = a3;
  v6 = *a2;
  if ( v6 == *a2 >> 32 )
  {
    LOBYTE(v7) = 0;
    return v7 & 1;
  }
  v7 = 0;
  v36 = a4;
  v8 = off_26D3F28;
  v38 = off_26D3F34;
  do
    v37 = v7;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v6 + 4);
      v11 = v10 == 0;
      if ( v10 )
        v11 = *(_DWORD *)(v10 + 4) == 0;
      if ( v11 )
      {
        v6 = std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>::_M_erase(
               (int)v4,
               v6);
        goto LABEL_32;
      }
      if ( !*(_DWORD *)(v6 + 16) )
        sub_DA7654();
      v12 = (*(int (__fastcall **)(int, int))(v6 + 20))(v6 + 8, v5);
      if ( v12 == 2 )
        break;
      if ( v12 == 1 )
        v7 = v37;
        goto LABEL_36;
      if ( v12 )
        sub_DA7A7C((int)&v39, 16);
        sub_DA78D4((char *)&v39, (int)"Unknown animationStatus: ", 25);
        v13 = sub_DA8B64((char *)&v39);
        sub_DA78D4(v13, (int)" @ ", 3);
        sub_DA78D4(v13, (int)"_tick", 5);
        sub_DA78D4(v13, (int)" (", 2);
        sub_DA78D4(
          v13,
          (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\Minecraft\\Minecraft.Client\\..\\..\\..\\..\\src-client"
               "\\common\\client\\gui\\screens\\AnimationController.cpp",
          142);
        sub_DA78D4(v13, (int)":", 1);
        v14 = (char *)sub_DA78E4((int)v13, 75);
        sub_DA78D4(v14, (int)")", 1);
        v15 = *(_DWORD *)&v14[*(_DWORD *)(*(_DWORD *)v14 - 12) + 124];
        if ( !v15 )
          sub_DA7ACC();
        if ( *(_BYTE *)(v15 + 28) )
        {
          v16 = *(_BYTE *)(v15 + 39);
        }
        else
          sub_DA7A9C(v15);
          v16 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v15 + 24))(v15, 10);
        v17 = sub_DA7AAC(v14, v16);
        sub_DA7ABC(v17);
        v39 = v8;
        *(_DWORD *)((char *)*(v8 - 3) + (_DWORD)&v39) = v38;
        v40 = &off_27734E8;
        v18 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v42 - 4);
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
        v40 = &off_26D40A8;
        sub_DA76D4((unsigned int **)&v41);
        sub_DA76E4(&v43);
        if ( v6 == *((_DWORD *)v4 + 1) )
          LOBYTE(v7) = v37;
          return v7 & 1;
      else
        v6 += 24;
LABEL_32:
    }
    v7 = 1;
LABEL_36:
    v21 = *(_DWORD *)(v6 + 4);
    if ( v21 )
      v22 = *(_DWORD *)(v21 + 4);
      v23 = (unsigned int *)(v21 + 4);
      while ( v22 )
        __dmb();
        v24 = __ldrex(v23);
        if ( v24 == v22 )
          v25 = __strex(v22 + 1, v23);
          v22 = v24;
          if ( !v25 )
            if ( *v23 )
            {
              if ( *(_DWORD *)v6 )
              {
                v34 = *(UIControl **)v6;
                v35 = v21;
                v26 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id;
                __dmb();
                if ( !(v26 & 1)
                  && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id) )
                {
                  v27 = typeid_t<UIComponent>::count[0]++;
                  type_id<UIComponent,AnimationComponent>(void)::id[0] = v27;
                  j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,AnimationComponent>(void)::id);
                }
                v28 = type_id<UIComponent,AnimationComponent>(void)::id[0];
                if ( UIControl::_hasComponent(v34, type_id<UIComponent,AnimationComponent>(void)::id[0]) == 1 )
                  v29 = *(_DWORD *)(*((_DWORD *)v34 + 27) + 4 * UIControl::_getComponentIndex(v34, v28));
                  if ( v29 )
                    AnimationComponent::collectScreenEvents(v29, 0, v36);
                v21 = v35;
              }
              else
                v7 = v44;
            }
            goto LABEL_52;
          __clrex();
    v21 = 0;
LABEL_52:
    v6 = std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>::_M_erase(
           (int)v4,
           v6);
      v30 = (unsigned int *)(v21 + 4);
      if ( &pthread_create )
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        v32 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  while ( v6 != *((_DWORD *)v4 + 1) );
  return v7 & 1;
}


int __fastcall std::__find_if<__gnu_cxx::__normal_iterator<AnimationController::AnimationUIControlFunctionCallback *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>>,__gnu_cxx::__ops::_Iter_pred<void AnimationController::_removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>&,UIControl const*)::{lambda(AnimationController::AnimationUIControlFunctionCallback const&)#1}>>(int a1, int a2, int a3)
{
  signed int v3; // r9@0
  int v4; // r7@1
  int v5; // r5@1
  signed int v6; // r6@2
  unsigned int v7; // r1@3
  unsigned int *v8; // r0@3
  unsigned int v9; // r2@6
  unsigned int v10; // r3@7
  signed int v11; // r8@8
  unsigned int v12; // r1@8
  unsigned int *v13; // r4@18
  unsigned int v14; // r0@20
  bool v15; // zf@25
  int v16; // r8@25
  signed int v17; // r10@27
  unsigned int v18; // r1@28
  unsigned int *v19; // r0@28
  unsigned int v20; // r2@31
  unsigned int v21; // r3@32
  unsigned int v22; // r1@33
  unsigned int *v23; // r4@43
  unsigned int v24; // r0@45
  int v25; // r6@51
  unsigned int v26; // r1@52
  unsigned int *v27; // r0@52
  unsigned int v28; // r2@55
  unsigned int v29; // r3@56
  unsigned int v30; // r1@57
  unsigned int *v31; // r4@67
  unsigned int v32; // r0@69
  int v33; // r6@75
  unsigned int v34; // r1@76
  unsigned int *v35; // r0@76
  unsigned int v36; // r2@79
  unsigned int v37; // r3@80
  unsigned int v38; // r1@81
  unsigned int *v39; // r4@91
  unsigned int v40; // r0@93
  unsigned __int8 v41; // vf@99
  int v42; // r0@101
  int v43; // r7@104
  unsigned int v44; // r1@105
  unsigned int *v45; // r0@105
  unsigned int v46; // r2@108
  unsigned int v47; // r3@109
  signed int v48; // r4@110
  unsigned int v49; // r1@110
  unsigned int *v50; // r6@120
  unsigned int v51; // r0@122
  int v52; // r7@129
  unsigned int v53; // r1@130
  unsigned int *v54; // r0@130
  unsigned int v55; // r2@133
  unsigned int v56; // r3@134
  signed int v57; // r4@135
  unsigned int v58; // r1@135
  unsigned int *v59; // r6@145
  unsigned int v60; // r0@147
  int v61; // r7@154
  unsigned int v62; // r1@155
  unsigned int *v63; // r0@155
  unsigned int v64; // r2@158
  unsigned int v65; // r3@159
  signed int v66; // r4@160
  unsigned int v67; // r1@160
  unsigned int *v69; // r6@172
  unsigned int v70; // r0@174
  __int64 v71; // [sp+4h] [bp-2Ch]@1

  v4 = a1;
  v71 = *(_QWORD *)&a2;
  v5 = -1431655765 * ((a2 - a1) >> 3) >> 2;
  if ( v5 >= 1 )
  {
    do
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 4);
        v8 = (unsigned int *)(v6 + 4);
        while ( v7 )
        {
          __dmb();
          v9 = __ldrex(v8);
          if ( v9 == v7 )
          {
            v10 = __strex(v7 + 1, v8);
            v7 = v9;
            if ( !v10 )
            {
              __dmb();
              v11 = 0;
              v12 = *v8;
              if ( *v8 )
              {
                if ( *(_DWORD *)v4 )
                {
                  v3 = 0;
                  v11 = 1;
                  if ( *(_DWORD *)HIDWORD(v71) == *(_DWORD *)v4 )
                    v3 = 1;
                }
              }
              if ( &pthread_create )
                __dmb();
                do
                  v12 = __ldrex(v8);
                while ( __strex(v12 - 1, v8) );
              else
                *v8 = v12 - 1;
              if ( v12 == 1 )
                v13 = (unsigned int *)(v6 + 8);
                (*(void (__fastcall **)(signed int))(*(_DWORD *)v6 + 8))(v6);
                if ( &pthread_create )
                  __dmb();
                  do
                    v14 = __ldrex(v13);
                  while ( __strex(v14 - 1, v13) );
                else
                  v14 = (*v13)--;
                if ( v14 == 1 )
                  (*(void (__fastcall **)(signed int))(*(_DWORD *)v6 + 12))(v6);
              v15 = (v3 & v11) == 0;
              v16 = v4;
              if ( v15 )
                break;
              return v16;
            }
          }
          else
            __clrex();
        }
      }
      v17 = *(_DWORD *)(v4 + 28);
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 4);
        v16 = v4 + 24;
        v19 = (unsigned int *)(v17 + 4);
        while ( v18 )
          v20 = __ldrex(v19);
          if ( v20 == v18 )
            v21 = __strex(v18 + 1, v19);
            v18 = v20;
            if ( !v21 )
              v3 = 0;
              v22 = *v19;
              if ( *v19 )
                if ( *(_DWORD *)v16 )
                  v6 = 0;
                  v3 = 1;
                  if ( *(_DWORD *)HIDWORD(v71) == *(_DWORD *)v16 )
                    v6 = 1;
                  v22 = __ldrex(v19);
                while ( __strex(v22 - 1, v19) );
                *v19 = v22 - 1;
              if ( v22 == 1 )
                v23 = (unsigned int *)(v17 + 8);
                (*(void (__fastcall **)(signed int))(*(_DWORD *)v17 + 8))(v17);
                    v24 = __ldrex(v23);
                  while ( __strex(v24 - 1, v23) );
                  v24 = (*v23)--;
                if ( v24 == 1 )
                  (*(void (__fastcall **)(signed int))(*(_DWORD *)v17 + 12))(v17);
              if ( v6 & v3 )
                return v16;
              break;
      v25 = *(_DWORD *)(v4 + 52);
      if ( v25 )
        v26 = *(_DWORD *)(v25 + 4);
        v16 = v4 + 48;
        v27 = (unsigned int *)(v25 + 4);
        while ( v26 )
          v28 = __ldrex(v27);
          if ( v28 == v26 )
            v29 = __strex(v26 + 1, v27);
            v26 = v28;
            if ( !v29 )
              v30 = *v27;
              if ( *v27 )
                  v17 = 0;
                    v17 = 1;
                  v30 = __ldrex(v27);
                while ( __strex(v30 - 1, v27) );
                *v27 = v30 - 1;
              if ( v30 == 1 )
                v31 = (unsigned int *)(v25 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
                    v32 = __ldrex(v31);
                  while ( __strex(v32 - 1, v31) );
                  v32 = (*v31)--;
                if ( v32 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
              if ( v17 & v3 )
      v33 = *(_DWORD *)(v4 + 76);
      if ( v33 )
        v34 = *(_DWORD *)(v33 + 4);
        v16 = v4 + 72;
        v35 = (unsigned int *)(v33 + 4);
        while ( v34 )
          v36 = __ldrex(v35);
          if ( v36 == v34 )
            v37 = __strex(v34 + 1, v35);
            v34 = v36;
            if ( !v37 )
              v38 = *v35;
              if ( *v35 )
                  v38 = __ldrex(v35);
                while ( __strex(v38 - 1, v35) );
                *v35 = v38 - 1;
              if ( v38 == 1 )
                v39 = (unsigned int *)(v33 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                  v40 = (*v39)--;
                if ( v40 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
      v41 = __OFSUB__(v5--, 1);
      v4 += 96;
    }
    while ( !((unsigned __int8)((v5 < 0) ^ v41) | (v5 == 0)) );
  }
  v16 = v4;
  v42 = -1431655765 * (((signed int)v71 - v4) >> 3);
  if ( v42 == 1 )
    goto LABEL_154;
  if ( v42 == 2 )
LABEL_129:
    v52 = *(_DWORD *)(v16 + 4);
    if ( v52 )
      v53 = *(_DWORD *)(v52 + 4);
      v54 = (unsigned int *)(v52 + 4);
      while ( v53 )
        __dmb();
        v55 = __ldrex(v54);
        if ( v55 == v53 )
          v56 = __strex(v53 + 1, v54);
          v53 = v55;
          if ( !v56 )
            __dmb();
            v57 = 0;
            v58 = *v54;
            if ( *v54 )
              if ( *(_DWORD *)v16 )
                v5 = 0;
                v57 = 1;
                if ( *(_DWORD *)HIDWORD(v71) == *(_DWORD *)v16 )
                  v5 = 1;
            if ( &pthread_create )
              do
                v58 = __ldrex(v54);
              while ( __strex(v58 - 1, v54) );
            else
              *v54 = v58 - 1;
            if ( v58 == 1 )
              v59 = (unsigned int *)(v52 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
            if ( v5 & v57 )
            break;
        else
          __clrex();
    v16 += 24;
LABEL_154:
    v61 = *(_DWORD *)(v16 + 4);
    if ( v61 )
      v62 = *(_DWORD *)(v61 + 4);
      v63 = (unsigned int *)(v61 + 4);
      while ( v62 )
        v64 = __ldrex(v63);
        if ( v64 == v62 )
          v65 = __strex(v62 + 1, v63);
          v62 = v64;
          if ( !v65 )
            v66 = 0;
            v67 = *v63;
            if ( *v63 )
                v66 = 1;
                v67 = __ldrex(v63);
              while ( __strex(v67 - 1, v63) );
              *v63 = v67 - 1;
            if ( v67 == 1 )
              v69 = (unsigned int *)(v61 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v70 = (*v69)--;
              if ( v70 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
            if ( !(v5 & v66) )
              v16 = v71;
            return v16;
    return v71;
  if ( v42 == 3 )
    v43 = *(_DWORD *)(v4 + 4);
    if ( v43 )
      v44 = *(_DWORD *)(v43 + 4);
      v45 = (unsigned int *)(v43 + 4);
      while ( v44 )
        v46 = __ldrex(v45);
        if ( v46 == v44 )
          v47 = __strex(v44 + 1, v45);
          v44 = v46;
          if ( !v47 )
            v48 = 0;
            v49 = *v45;
            if ( *v45 )
                v48 = 1;
                v49 = __ldrex(v45);
              while ( __strex(v49 - 1, v45) );
              *v45 = v49 - 1;
            if ( v49 == 1 )
              v50 = (unsigned int *)(v43 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
                v51 = (*v50)--;
              if ( v51 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
            if ( v5 & v48 )
    goto LABEL_129;
  return v71;
}


int __fastcall AnimationController::removeComponentAnimationCallback<ScrollViewComponent>(int a1, UIComponent *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r4@3
  int v6; // t1@3
  int v7; // r1@3
  int result; // r0@3
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@3

  v2 = a1;
  v3 = UIComponent::getOwner(a2);
  v9 = v3;
  v4 = std::__find_if<__gnu_cxx::__normal_iterator<AnimationController::AnimationUIControlFunctionCallback *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>>,__gnu_cxx::__ops::_Iter_pred<void AnimationController::_removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>&,UIControl const*)::{lambda(AnimationController::AnimationUIControlFunctionCallback const&)#1}>>(
         *(_QWORD *)v2,
         *(_QWORD *)v2 >> 32,
         (int)&v9);
  if ( v4 != *(_DWORD *)(v2 + 4) )
    std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>::_M_erase(
      v2,
      v4);
  v10 = v3;
  v6 = *(_DWORD *)(v2 + 12);
  v5 = v2 + 12;
  v7 = std::__find_if<__gnu_cxx::__normal_iterator<AnimationController::AnimationUIControlFunctionCallback *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>>,__gnu_cxx::__ops::_Iter_pred<void AnimationController::_removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>&,UIControl const*)::{lambda(AnimationController::AnimationUIControlFunctionCallback const&)#1}>>(
         v6,
         *(_DWORD *)(v5 + 4),
         (int)&v10);
  result = *(_DWORD *)(v5 + 4);
  if ( v7 != result )
    result = std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>::_M_erase(
               v5,
               v7);
  return result;
}


int __fastcall std::__find_if<__gnu_cxx::__normal_iterator<AnimationController::AnimationUIControlFunctionCallback *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>>,__gnu_cxx::__ops::_Iter_pred<void AnimationController::_removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>&,UIControl const*)::{lambda(AnimationController::AnimationUIControlFunctionCallback const&)#1}>>(int a1, int a2, int a3)
{
  return std::__find_if<__gnu_cxx::__normal_iterator<AnimationController::AnimationUIControlFunctionCallback *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>>,__gnu_cxx::__ops::_Iter_pred<void AnimationController::_removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *,std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>>&,UIControl const*)::{lambda(AnimationController::AnimationUIControlFunctionCallback const&)#1}>>(
           a1,
           a2,
           a3);
}


int __fastcall AnimationController::tickRenderTimestep(int a1, int a2, unsigned int a3)
{
  return j_j_j__ZN19AnimationController5_tickERSt6vectorINS_34AnimationUIControlFunctionCallbackESaIS1_EERKN3mce8TimeStepERS0_I11ScreenEventSaIS9_EE(
           a1,
           (unsigned __int64 *)(a1 + 12),
           a2,
           a3);
}


int __fastcall AnimationController::tickFixedTimestep(unsigned __int64 *a1, int a2, unsigned int a3)
{
  return j_j_j__ZN19AnimationController5_tickERSt6vectorINS_34AnimationUIControlFunctionCallbackESaIS1_EERKN3mce8TimeStepERS0_I11ScreenEventSaIS9_EE(
           (int)a1,
           a1,
           a2,
           a3);
}
