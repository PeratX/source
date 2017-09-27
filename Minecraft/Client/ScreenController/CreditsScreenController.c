

void __fastcall CreditsScreenController::_registerEventHandlers(CreditsScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  __int64 v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v10, "button.show_skip");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1181870;
  *v3 = v1;
  HIDWORD(v4) = sub_1181738;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
}


UIPropertyBag *__fastcall CreditsScreenController::_createCreditsObjects(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  void *v5; // r0@3
  char *v6; // r0@4
  int v7; // r0@5
  void *v8; // r0@6
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+4h] [bp-74h]@5
  char v15; // [sp+8h] [bp-70h]@5
  int v16; // [sp+34h] [bp-44h]@2
  char v17; // [sp+38h] [bp-40h]@2

  v2 = a2;
  v3 = a1;
  if ( *((_DWORD *)*a2 - 3) )
  {
    v4 = UIPropertyBag::UIPropertyBag((int)&v17);
    UIPropertyBag::set<char [13]>(v4, 4, "name", "credits_text");
    UIPropertyBag::set<char [13]>((int)&v17, 10, "control_id", "credits_text");
    UIPropertyBag::set<std::string>((int)&v17, 13, "#credits_text", v2);
    sub_119C884((void **)&v16, "credits_text_factory");
    if ( !*(_DWORD *)(v3 + 12) )
      sub_119C8E4();
    (*(void (__fastcall **)(int, int *, char *))(v3 + 16))(v3 + 4, &v16, &v17);
    v5 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v16 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = &v17;
  }
  else
    v7 = UIPropertyBag::UIPropertyBag((int)&v15);
    UIPropertyBag::set<char [8]>(v7, 4, "name", "padding");
    UIPropertyBag::set<char [8]>((int)&v15, 10, "control_id", "padding");
    sub_119C884((void **)&v14, "credits_text_factory");
    (*(void (__fastcall **)(int, int *, char *))(v3 + 16))(v3 + 4, &v14, &v15);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    v6 = &v15;
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)v6);
}


void __fastcall CreditsScreenController::_registerEventHandlers(CreditsScreenController *this)
{
  CreditsScreenController::_registerEventHandlers(this);
}


void __fastcall CreditsScreenController::~CreditsScreenController(CreditsScreenController *this)
{
  CreditsScreenController::~CreditsScreenController(this);
}


void __fastcall CreditsScreenController::onOpen(CreditsScreenController *this)
{
  CreditsScreenController::onOpen(this);
}


void __fastcall CreditsScreenController::~CreditsScreenController(CreditsScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E18A8;
  v2 = (void (*)(void))*((_DWORD *)this + 108);
  if ( v2 )
    v2();
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall CreditsScreenController::onTerminate(CreditsScreenController *this)
{
  if ( !*((_DWORD *)this + 108) )
    sub_119C8E4();
  return (*((int (__fastcall **)(_DWORD))this + 109))((char *)this + 424);
}


void __fastcall CreditsScreenController::_createCreditsFromFile(int a1, unsigned __int64 *a2, int a3)
{
  CreditsScreenController::_createCreditsFromFile(a1, a2, a3);
}


void __fastcall CreditsScreenController::_createCreditsFromFile(int a1, unsigned __int64 *a2, int a3)
{
  int *v3; // r6@1
  int *v4; // r8@1
  int v5; // r4@1
  int i; // r9@1
  void *v7; // r0@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+0h] [bp-30h]@2

  v4 = (int *)(*a2 >> 32);
  v3 = (int *)*a2;
  v5 = a3;
  for ( i = a1; v3 != v4; ++v3 )
  {
    sub_119C854(&v10, v3);
    if ( !*(_DWORD *)(v5 + 8) )
      sub_119C8E4();
    (*(void (__fastcall **)(int, int *))(v5 + 12))(v5, &v10);
    CreditsScreenController::_createCreditsObjects(i, (const void **)&v10);
    v7 = (void *)(v10 - 12);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
  }
}


int __fastcall CreditsScreenController::CreditsScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  void (__fastcall *v13)(int, int, signed int); // r3@21
  int v14; // r6@23
  _DWORD *v15; // r0@23
  __int64 v16; // r1@23
  void *v17; // r0@25
  int v18; // r6@26
  _DWORD *v19; // r0@26
  __int64 v20; // r1@26
  void *v21; // r0@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  _DWORD *v27; // [sp+0h] [bp-50h]@26
  __int64 v28; // [sp+8h] [bp-48h]@26
  int v29; // [sp+14h] [bp-3Ch]@26
  _DWORD *v30; // [sp+18h] [bp-38h]@23
  __int64 v31; // [sp+20h] [bp-30h]@23
  int v32; // [sp+2Ch] [bp-24h]@23
  int v33; // [sp+30h] [bp-20h]@1
  int v34; // [sp+34h] [bp-1Ch]@1

  v3 = a1;
  v33 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v34 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v33);
  v8 = v34;
  if ( v34 )
    v9 = (unsigned int *)(v34 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E18A8;
  *(_DWORD *)(v3 + 432) = 0;
  v13 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v13 )
    v13(v3 + 424, v4, 2);
    *(_DWORD *)(v3 + 436) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 432) = *(_DWORD *)(v4 + 8);
  *(_BYTE *)(v3 + 440) = 0;
  sub_119C884((void **)&v32, "scroll_end");
  v14 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v32);
  v15 = operator new(4u);
  LODWORD(v16) = sub_1181170;
  *v15 = v3;
  HIDWORD(v16) = sub_1181054;
  v30 = v15;
  v31 = v16;
  ScreenController::registerAnimationEventHandler(v3, v14, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  v17 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v32 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v29, "credits_end");
  v18 = MinecraftScreenController::_getNameId((ScreenController *)v3, (int **)&v29);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11811B8;
  *v19 = v3;
  HIDWORD(v20) = sub_11811A6;
  v27 = v19;
  v28 = v20;
  ScreenController::registerAnimationEventHandler(v3, v18, (int)&v27);
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  v21 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v29 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  CreditsScreenController::_registerEventHandlers((CreditsScreenController *)v3);
  return v3;
}


void __fastcall CreditsScreenController::onOpen(CreditsScreenController *this)
{
  CreditsScreenController *v1; // r10@1
  unsigned int v2; // r0@2
  int v3; // r1@2
  signed int v4; // r2@2
  int v5; // r0@3
  int *v6; // r4@3
  int v7; // r5@3
  const void **v8; // r0@4
  const void **v9; // r0@4
  char *v10; // r0@4
  void *v11; // r0@5
  _DWORD *v12; // r0@6
  __int64 v13; // r1@6
  void *v14; // r5@8
  void *v15; // r7@8
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  int *v18; // r0@18
  char *v19; // r0@23
  void *v20; // r0@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  unsigned int *v27; // r2@38
  signed int v28; // r1@40
  _DWORD *v29; // [sp+0h] [bp-A28h]@6
  __int64 v30; // [sp+8h] [bp-A20h]@6
  void *v31; // [sp+10h] [bp-A18h]@6
  void *v32; // [sp+14h] [bp-A14h]@8
  int v33; // [sp+1Ch] [bp-A0Ch]@4
  char *v34; // [sp+20h] [bp-A08h]@4
  char *v35; // [sp+24h] [bp-A04h]@4
  int v36; // [sp+2Ch] [bp-9FCh]@4
  unsigned int v37; // [sp+30h] [bp-9F8h]@2
  unsigned int v38; // [sp+34h] [bp-9F4h]@2
  int v39; // [sp+9F4h] [bp-34h]@2
  char v40; // [sp+9F8h] [bp-30h]@2
  int v41; // [sp+9FCh] [bp-2Ch]@2
  int v42; // [sp+A00h] [bp-28h]@4

  v1 = this;
  if ( !*((_BYTE *)this + 440) )
  {
    v2 = sub_119D73C((int)&Random::mRandomDevice);
    v37 = v2;
    v39 = 625;
    v3 = 0;
    v4 = 1;
    v40 = 0;
    v41 = 0;
    v38 = v2;
    do
    {
      v5 = v2 ^ (v2 >> 30);
      v6 = (int *)(&v37 + v3);
      v7 = v3++ + 1812433253 * v5;
      v2 = v4++ + 1812433253 * v5;
      v6[2] = v7 + 1;
    }
    while ( v3 != 397 );
    v39 = 624;
    v42 = 398;
    sub_119C884((void **)&v36, "XXXXXXXX");
    sub_119C854(&v33, (int *)&unk_27DADA4);
    sub_119C8A4((const void **)&v33, (const void **)&unk_27DADA8);
    v8 = sub_119C8A4((const void **)&v33, (const void **)&unk_27DAD90);
    v34 = (char *)*v8;
    *v8 = &unk_28898CC;
    v9 = sub_119C8A4((const void **)&v34, (const void **)&unk_27DAD94);
    v35 = (char *)*v9;
    *v9 = &unk_28898CC;
    v10 = v34 - 12;
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    v11 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v33 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    MinecraftScreenModel::readEndPoem((MinecraftScreenModel *)&v31, *((_DWORD *)v1 + 95));
    v12 = operator new(0x10u);
    LODWORD(v13) = sub_11816F8;
    *v12 = v1;
    v12[1] = &v37;
    HIDWORD(v13) = sub_11811F0;
    v12[2] = &v36;
    v12[3] = &v35;
    v29 = v12;
    v30 = v13;
    CreditsScreenController::_createCreditsFromFile((int)v1, (unsigned __int64 *)&v31, (int)&v29);
    if ( (_DWORD)v30 )
      ((void (*)(void))v30)();
    v15 = v32;
    v14 = v31;
    if ( v31 != v32 )
      do
        v18 = (int *)(*(_DWORD *)v14 - 12);
        if ( v18 != &dword_28898C0 )
        {
          v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v18);
        }
        v14 = (char *)v14 + 4;
      while ( v14 != v15 );
      v14 = v31;
    if ( v14 )
      operator delete(v14);
    *((_BYTE *)v1 + 440) = 1;
    v19 = v35 - 12;
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v35 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v36 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
  }
}


ScreenController *__fastcall CreditsScreenController::~CreditsScreenController(CreditsScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E18A8;
  v2 = (void (*)(void))*((_DWORD *)this + 108);
  if ( v2 )
    v2();
  return j_j_j__ZN25MinecraftScreenControllerD2Ev(v1);
}
