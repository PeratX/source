

int __fastcall CubemapBackgroundScreen::renderCubemap(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  int v10; // r7@1
  int v11; // r0@4
  float v17; // [sp+0h] [bp-78h]@8
  int v18; // [sp+4h] [bp-74h]@8
  int v19; // [sp+8h] [bp-70h]@8
  int v20; // [sp+Ch] [bp-6Ch]@8
  int v21; // [sp+10h] [bp-68h]@8
  int v22; // [sp+18h] [bp-60h]@8
  int v23; // [sp+1Ch] [bp-5Ch]@8
  int v24; // [sp+20h] [bp-58h]@8
  int v25; // [sp+24h] [bp-54h]@8
  signed int v26; // [sp+2Ch] [bp-4Ch]@8
  int v27; // [sp+30h] [bp-48h]@8
  int v28; // [sp+34h] [bp-44h]@8
  int v29; // [sp+3Ch] [bp-3Ch]@8
  char v30; // [sp+40h] [bp-38h]@6

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 64));
  v5 = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  __asm
  {
    VMOV.F32        S18, #1.0
    VLDR            S0, =100.0
  }
  v10 = v5;
  __asm { VMOV.F32        S16, S18 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S0 }
  if ( v5 == 1 )
    v11 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 64));
    _R0 = (*(int (**)(void))(*(_DWORD *)v11 + 248))();
    __asm
    {
      VLDR            S0, =0.0087266
      VMOV            S2, R0
      VMUL.F32        S20, S2, S0
    }
  else
    __asm { VLDR            S20, =0.74176 }
  MatrixStack::push((MatrixStack *)&v30, *(_DWORD *)(v3 + 16) + 32);
    VMOV            R0, S20
    VLDR            S0, =300.0
    VMOV.F32        S20, #10.0
  if ( v10 )
    __asm { VMOVNE.F32      S20, S0 }
  _R0 = tanf(_R0);
    VLDR            S4, =-0.1
    VMOV            S2, R0
    VLDR            S0, =-0.05
    VMUL.F32        S4, S20, S4
    VADD.F32        S6, S20, S0
    VSUB.F32        S0, S0, S20
    VDIV.F32        S2, S18, S2
    VDIV.F32        S0, S0, S6
    VDIV.F32        S4, S4, S6
    VSTR            S2, [SP,#0x78+var_78]
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  __asm { VSTR            S2, [SP,#0x78+var_64] }
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  __asm { VSTR            S0, [SP,#0x78+var_50] }
  v26 = -1082130432;
  v27 = 0;
  v28 = 0;
  __asm { VSTR            S4, [SP,#0x78+var_40] }
  v29 = 0;
  MatrixStack::MatrixStackRef::operator=((int)&v30, (int)&v17);
  __asm { VMOV            R3, S16 }
  Cubemap::renderCubemap(v3, (__int64 *)(v2 + 32), v2 + 20, _R3);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v30);
}


void __fastcall CubemapBackgroundScreen::_init(CubemapBackgroundScreen *this, int a2, int a3)
{
  CubemapBackgroundScreen::_init(this, a2, a3);
}


int __fastcall CubemapBackgroundScreen::isShowingMenu(CubemapBackgroundScreen *this)
{
  return 0;
}


signed int __fastcall CubemapBackgroundScreen::renderGameBehind(CubemapBackgroundScreen *this)
{
  return 1;
}


void __fastcall CubemapBackgroundScreen::~CubemapBackgroundScreen(CubemapBackgroundScreen *this)
{
  CubemapBackgroundScreen::~CubemapBackgroundScreen(this);
}


BaseScreen *__fastcall CubemapBackgroundScreen::CubemapBackgroundScreen(BaseScreen *a1, unsigned int a2, unsigned int a3, char a4)
{
  char v4; // r5@1
  unsigned __int64 v5; // r6@1
  BaseScreen *v6; // r11@1
  void *v7; // r0@1
  int v8; // r10@2
  void *v9; // r0@2
  __int64 v10; // kr00_8@2
  char *v11; // r1@3
  char *v12; // r0@5
  char *v13; // r0@6
  void *v14; // r0@7
  __int64 v15; // kr08_8@7
  char *v16; // r1@8
  char *v17; // r0@10
  char *v18; // r0@11
  void *v19; // r0@12
  __int64 v20; // kr10_8@12
  char *v21; // r1@13
  char *v22; // r0@15
  char *v23; // r0@16
  void *v24; // r0@17
  __int64 v25; // kr18_8@17
  char *v26; // r1@18
  char *v27; // r0@20
  char *v28; // r0@21
  void *v29; // r0@22
  __int64 v30; // kr20_8@22
  char *v31; // r1@23
  char *v32; // r0@25
  char *v33; // r0@26
  void *v34; // r0@27
  __int64 v35; // kr28_8@27
  char *v36; // r1@28
  char *v37; // r0@30
  char *v38; // r0@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  unsigned int *v56; // r2@65
  signed int v57; // r1@67
  unsigned int *v58; // r2@69
  signed int v59; // r1@71
  unsigned int *v60; // r2@73
  signed int v61; // r1@75
  unsigned int *v62; // r2@77
  signed int v63; // r1@79
  unsigned int *v64; // r2@81
  signed int v65; // r1@83
  void *v66; // [sp+Ch] [bp-8Ch]@27
  char *v67; // [sp+10h] [bp-88h]@27
  int v68; // [sp+14h] [bp-84h]@27
  void *v69; // [sp+1Ch] [bp-7Ch]@22
  char *v70; // [sp+20h] [bp-78h]@22
  int v71; // [sp+24h] [bp-74h]@22
  void *v72; // [sp+2Ch] [bp-6Ch]@17
  char *v73; // [sp+30h] [bp-68h]@17
  int v74; // [sp+34h] [bp-64h]@17
  void *v75; // [sp+3Ch] [bp-5Ch]@12
  char *v76; // [sp+40h] [bp-58h]@12
  int v77; // [sp+44h] [bp-54h]@12
  void *v78; // [sp+4Ch] [bp-4Ch]@7
  char *v79; // [sp+50h] [bp-48h]@7
  int v80; // [sp+54h] [bp-44h]@7
  void *v81; // [sp+5Ch] [bp-3Ch]@2
  char *v82; // [sp+60h] [bp-38h]@2
  int v83; // [sp+64h] [bp-34h]@2
  int v84; // [sp+6Ch] [bp-2Ch]@1

  v4 = a4;
  v5 = __PAIR__(a3, a2);
  v6 = a1;
  BaseScreen::BaseScreen(a1);
  *(_DWORD *)v6 = &off_26E4654;
  sub_21E94B4((void **)&v84, "ui_cubemap");
  mce::MaterialPtr::MaterialPtr(
    (BaseScreen *)((char *)v6 + 20),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v84);
  v7 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
  {
    v40 = (unsigned int *)(v84 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  *((_DWORD *)v6 + 8) = 0;
  v8 = (int)v6 + 32;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_BYTE *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 28) = v5;
  sub_21E94B4(&v81, "textures/ui/panorama_0");
  v9 = v81;
  v82 = (char *)v81;
  v81 = &unk_28898CC;
  v83 = 0;
  v10 = *((_QWORD *)v6 + 6);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_emplace_back_aux<ResourceLocation>(
      (unsigned __int64 *)((char *)v6 + 44),
      (int)&v82);
    v11 = v82;
  else
    *(_DWORD *)v10 = v9;
    v11 = (char *)&unk_28898CC;
    v82 = (char *)&unk_28898CC;
    *(_DWORD *)(v10 + 4) = 0;
    *((_DWORD *)v6 + 12) = v10 + 8;
  v12 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v11 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (char *)v81 - 12;
  if ( (int *)((char *)v81 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)((char *)v81 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4(&v78, "textures/ui/panorama_1");
  v14 = v78;
  v79 = (char *)v78;
  v78 = &unk_28898CC;
  v80 = 0;
  v15 = *((_QWORD *)v6 + 6);
  if ( (_DWORD)v15 == HIDWORD(v15) )
      (int)&v79);
    v16 = v79;
    *(_DWORD *)v15 = v14;
    v16 = (char *)&unk_28898CC;
    v79 = (char *)&unk_28898CC;
    *(_DWORD *)(v15 + 4) = 0;
    *((_DWORD *)v6 + 12) = v15 + 8;
  v17 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v16 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (char *)v78 - 12;
  if ( (int *)((char *)v78 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)((char *)v78 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4(&v75, "textures/ui/panorama_2");
  v19 = v75;
  v76 = (char *)v75;
  v75 = &unk_28898CC;
  v77 = 0;
  v20 = *((_QWORD *)v6 + 6);
  if ( (_DWORD)v20 == HIDWORD(v20) )
      (int)&v76);
    v21 = v76;
    *(_DWORD *)v20 = v19;
    v21 = (char *)&unk_28898CC;
    v76 = (char *)&unk_28898CC;
    *(_DWORD *)(v20 + 4) = 0;
    *((_DWORD *)v6 + 12) = v20 + 8;
  v22 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v21 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (char *)v75 - 12;
  if ( (int *)((char *)v75 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)((char *)v75 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4(&v72, "textures/ui/panorama_3");
  v24 = v72;
  v73 = (char *)v72;
  v72 = &unk_28898CC;
  v74 = 0;
  v25 = *((_QWORD *)v6 + 6);
  if ( (_DWORD)v25 == HIDWORD(v25) )
      (int)&v73);
    v26 = v73;
    *(_DWORD *)v25 = v24;
    v26 = (char *)&unk_28898CC;
    v73 = (char *)&unk_28898CC;
    *(_DWORD *)(v25 + 4) = 0;
    *((_DWORD *)v6 + 12) = v25 + 8;
  v27 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v26 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (char *)v72 - 12;
  if ( (int *)((char *)v72 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)((char *)v72 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4(&v69, "textures/ui/panorama_4");
  v29 = v69;
  v70 = (char *)v69;
  v69 = &unk_28898CC;
  v71 = 0;
  v30 = *((_QWORD *)v6 + 6);
  if ( (_DWORD)v30 == HIDWORD(v30) )
      (int)&v70);
    v31 = v70;
    *(_DWORD *)v30 = v29;
    v31 = (char *)&unk_28898CC;
    v70 = (char *)&unk_28898CC;
    *(_DWORD *)(v30 + 4) = 0;
    *((_DWORD *)v6 + 12) = v30 + 8;
  v32 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v31 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (char *)v69 - 12;
  if ( (int *)((char *)v69 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)((char *)v69 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4(&v66, "textures/ui/panorama_5");
  v34 = v66;
  v67 = (char *)v66;
  v66 = &unk_28898CC;
  v68 = 0;
  v35 = *((_QWORD *)v6 + 6);
  if ( (_DWORD)v35 == HIDWORD(v35) )
      (int)&v67);
    v36 = v67;
    *(_DWORD *)v35 = v34;
    v36 = (char *)&unk_28898CC;
    v67 = (char *)&unk_28898CC;
    *(_DWORD *)(v35 + 4) = 0;
    *((_DWORD *)v6 + 12) = v35 + 8;
  v37 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v36 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (char *)v66 - 12;
  if ( (int *)((char *)v66 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)((char *)v66 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  return v6;
}


void __fastcall CubemapBackgroundScreen::terminate(CubemapBackgroundScreen *this)
{
  CubemapBackgroundScreen::terminate(this);
}


int __fastcall CubemapBackgroundScreen::getShouldSendEvents(CubemapBackgroundScreen *this)
{
  return 0;
}


CubemapBackgroundScreen *__fastcall CubemapBackgroundScreen::~CubemapBackgroundScreen(CubemapBackgroundScreen *this)
{
  CubemapBackgroundScreen *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  char *v7; // r0@16
  char *v8; // r5@16
  int v9; // r4@17

  v1 = this;
  *(_DWORD *)this = &off_26E4654;
  v3 = (void *)(*(_QWORD *)((char *)this + 44) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 44);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 8;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 11);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (char *)(*((_QWORD *)v1 + 4) >> 32);
  v7 = (char *)*((_QWORD *)v1 + 4);
  if ( v7 != v8 )
      v9 = (int)(v7 + 24);
      (**(void (***)(void))v7)();
      v7 = (char *)v9;
    while ( v8 != (char *)v9 );
    v7 = (char *)*((_DWORD *)v1 + 8);
  if ( v7 )
    operator delete(v7);
  mce::MaterialPtr::~MaterialPtr((CubemapBackgroundScreen *)((char *)v1 + 20));
  BaseScreen::~BaseScreen(v1);
  return v1;
}


int __fastcall CubemapBackgroundScreen::renderOnlyWhenTopMost(CubemapBackgroundScreen *this)
{
  CubemapBackgroundScreen *v1; // r4@1
  int result; // r0@2
  SceneStack *v3; // r0@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 176))() == 1 )
  {
    v3 = (SceneStack *)ClientInstance::getClientSceneStack(*((ClientInstance **)v1 + 16));
    result = SceneStack::isEmpty(v3) ^ 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall CubemapBackgroundScreen::terminate(CubemapBackgroundScreen *this)
{
  CubemapBackgroundScreen *v1; // r11@1
  void (***v2)(void); // r5@1 OVERLAPPED
  void (***v3)(void); // r6@1 OVERLAPPED
  void (***v4)(void); // r0@2
  int v5; // r7@3
  __int64 v6; // kr00_8@4
  _DWORD *v7; // r6@5
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int *v10; // r0@14

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 4);
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      v5 = (int)(v4 + 6);
      (**v4)();
      v4 = (void (***)(void))v5;
    }
    while ( v3 != (void (***)(void))v5 );
  }
  *((_DWORD *)v1 + 9) = v2;
  v6 = *(_QWORD *)((char *)v1 + 44);
  if ( HIDWORD(v6) != (_DWORD)v6 )
    v7 = (_DWORD *)v6;
      v10 = (int *)(*v7 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*v7 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v7 += 2;
    while ( v7 != (_DWORD *)HIDWORD(v6) );
  *((_DWORD *)v1 + 12) = v6;
}


int __fastcall CubemapBackgroundScreen::render(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r0@2
  int v6; // r0@2
  void *v12; // r0@3
  int v16; // [sp+10h] [bp-50h]@3
  int v17; // [sp+14h] [bp-4Ch]@3
  int v18; // [sp+18h] [bp-48h]@3
  signed int v19; // [sp+1Ch] [bp-44h]@3
  int v20; // [sp+20h] [bp-40h]@3
  signed int v21; // [sp+24h] [bp-3Ch]@3
  signed __int64 v22; // [sp+28h] [bp-38h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = *(_DWORD *)(v3 + 12);
    mce::RenderContext::clearDepthStencilBuffer();
    (*(void (**)(void))(**(_DWORD **)(v2 + 16) + 8))();
    CubemapBackgroundScreen::renderCubemap(v2, v3);
    v6 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 64));
    if ( !(*(int (**)(void))(*(_DWORD *)v6 + 44))() )
    {
      _R0 = GuiData::getScreenSizeData(*(GuiData **)(v3 + 24));
      __asm
      {
        VLDR            S0, [R0,#0x10]
        VLDR            S2, [R0,#0x14]
        VCVTR.S32.F32   S16, S0
        VCVTR.S32.F32   S18, S2
      }
      v12 = ScreenRenderer::singleton((ScreenRenderer *)_R0);
        VMOV            R2, S18
        VMOV            R3, S16
      v20 = 1065353216;
      v21 = 1065353216;
      v22 = 4518011146384441344LL;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 1051931443;
      ScreenRenderer::fillGradient(
        *(float *)&v12,
        *(float *)&v3,
        0,
        _R3 + 1,
        _R2 + 1,
        (const Color *)&v20,
        (const Color *)&v16);
    }
    LODWORD(v4) = (*(int (**)(void))(**(_DWORD **)(v2 + 16) + 12))();
  }
  return v4;
}


void __fastcall CubemapBackgroundScreen::_init(CubemapBackgroundScreen *this, int a2, int a3)
{
  CubemapBackgroundScreen *v3; // r4@1
  int v4; // r5@1
  unsigned __int64 *v5; // r8@1
  int v6; // r6@1
  void (***v7)(void); // r0@2
  int v8; // r7@3
  int i; // r6@4
  int v10; // r11@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  mce::TextureGroup *v13; // r7@14
  __int64 v14; // r0@14
  void *v15; // r0@17
  int v16; // [sp+8h] [bp-48h]@6
  int v17; // [sp+Ch] [bp-44h]@14
  char v18; // [sp+10h] [bp-40h]@14

  v3 = this;
  v5 = (unsigned __int64 *)((char *)this + 32);
  v4 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 9);
  if ( v6 != v4 )
  {
    v7 = (void (***)(void))*((_DWORD *)this + 8);
    do
    {
      v8 = (int)(v7 + 6);
      (**v7)();
      v7 = (void (***)(void))v8;
    }
    while ( v6 != v8 );
  }
  *((_DWORD *)v3 + 9) = v4;
  v10 = *(_QWORD *)((char *)v3 + 44) >> 32;
  for ( i = *(_QWORD *)((char *)v3 + 44); i != v10; i += 8 )
    v13 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 16));
    sub_21E8AF4(&v16, (int *)i);
    v17 = *(_DWORD *)(i + 4);
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v18, v13, (int)&v16, 0);
    v14 = *(_QWORD *)((char *)v3 + 36);
    if ( (_DWORD)v14 == HIDWORD(v14) )
      std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TexturePtr>(v5, (int)&v18);
    else
      mce::TexturePtr::TexturePtr(v14, (int)&v18);
      *((_DWORD *)v3 + 9) += 24;
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v18);
    v15 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


void __fastcall CubemapBackgroundScreen::~CubemapBackgroundScreen(CubemapBackgroundScreen *this)
{
  CubemapBackgroundScreen *v1; // r0@1

  v1 = CubemapBackgroundScreen::~CubemapBackgroundScreen(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall CubemapBackgroundScreen::screenIsNotFlushable(CubemapBackgroundScreen *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 56);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}
