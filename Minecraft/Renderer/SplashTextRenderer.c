

int __fastcall SplashTextRenderer::render(SplashTextRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v7; // r8@1
  ClientInstance *v8; // r11@1
  MinecraftUIRenderContext *v9; // r10@1
  void *v10; // r1@2
  __int64 v11; // kr00_8@2
  int v12; // r1@2
  int *v13; // r1@3
  _DWORD *v14; // r5@3
  int (**v15)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@3
  unsigned int *v16; // r2@4
  signed int v17; // r4@6
  int *v18; // r4@10
  int (**v19)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@10
  int *v20; // r0@11
  void *v21; // r5@15
  void *v22; // r4@15
  int *v23; // r1@16
  int (**v24)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@16
  unsigned int *v25; // r2@17
  signed int v26; // r6@19
  int *v27; // r6@23
  int (**v28)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@23
  int *v29; // r0@24
  char *v31; // r0@27
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  char *v34; // r0@34
  int result; // r0@37
  int v36; // r5@37
  unsigned int v37; // r4@38
  unsigned int v38; // r0@39
  int v39; // r1@39
  signed int v40; // r2@39
  int v41; // r0@40
  int *v42; // r4@40
  int v43; // r7@40
  signed int v44; // r0@42
  Minecraft *v45; // r0@44
  int v46; // r1@44
  float v55; // r7@44
  int v56; // r0@44
  int v59; // r6@44
  int v60; // r4@44
  void *v61; // r0@45
  unsigned int *v66; // r2@51
  signed int v67; // r1@53
  int v69; // [sp+0h] [bp-A78h]@0
  int v70; // [sp+Ch] [bp-A6Ch]@0
  int v71; // [sp+14h] [bp-A64h]@0
  char v72; // [sp+24h] [bp-A54h]@47
  unsigned int v73; // [sp+34h] [bp-A44h]@3
  unsigned int v74; // [sp+38h] [bp-A40h]@39
  int v75; // [sp+9F8h] [bp-80h]@39
  char v76; // [sp+9FCh] [bp-7Ch]@39
  int v77; // [sp+A00h] [bp-78h]@39
  int v78; // [sp+A04h] [bp-74h]@41
  char *v79; // [sp+A0Ch] [bp-6Ch]@2
  char *v80; // [sp+A10h] [bp-68h]@2
  int v81; // [sp+A14h] [bp-64h]@2
  void *ptr; // [sp+A18h] [bp-60h]@2
  void *v83; // [sp+A1Ch] [bp-5Ch]@2
  int v84; // [sp+A20h] [bp-58h]@2

  _R9 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !*((_BYTE *)this + 24) )
  {
    sub_119C884((void **)&v79, "splashes.json");
    v80 = v79;
    v81 = 0;
    v79 = (char *)&unk_28898CC;
    SplashTextRenderer::_loadSplashes((SplashTextRenderer *)&ptr, (const ResourceLocation *)&v80);
    v10 = ptr;
    v11 = *(_QWORD *)&SplashTextRenderer::mSplashes;
    ptr = 0;
    SplashTextRenderer::mSplashes = v10;
    v12 = (int)v83;
    v83 = 0;
    dword_27D9630 = v12;
    unk_27D9634 = v84;
    v84 = 0;
    if ( (_DWORD)v11 != HIDWORD(v11) )
    {
      v13 = (int *)&v73;
      v14 = (_DWORD *)v11;
      v15 = &pthread_create;
      do
      {
        v20 = (int *)(*v14 - 12);
        if ( v20 != &dword_28898C0 )
        {
          v16 = (unsigned int *)(*v14 - 4);
          if ( v15 )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 <= 0 )
            v18 = v13;
            v19 = v15;
            j_j_j_j_j__ZdlPv_9_1(v20);
            v15 = v19;
            v13 = v18;
        }
        ++v14;
      }
      while ( v14 != (_DWORD *)HIDWORD(v11) );
    }
    if ( (_DWORD)v11 )
      operator delete((void *)v11);
    v21 = ptr;
    v22 = v83;
    if ( ptr != v83 )
      v23 = (int *)&v73;
      v24 = &pthread_create;
        v29 = (int *)(*(_DWORD *)v21 - 12);
        if ( v29 != &dword_28898C0 )
          v25 = (unsigned int *)(*(_DWORD *)v21 - 4);
          if ( v24 )
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            v27 = v23;
            v28 = v24;
            j_j_j_j_j__ZdlPv_9_1(v29);
            v24 = v28;
            v23 = v27;
        v21 = (char *)v21 + 4;
      while ( v21 != v22 );
      v21 = ptr;
    if ( v21 )
      operator delete(v21);
    v34 = v80 - 12;
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
      else
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v34);
    v31 = v79 - 12;
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v79 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
    *((_BYTE *)_R9 + 24) = 1;
  }
  result = dword_27D9630;
  v36 = SplashTextRenderer::mSplashes;
  if ( SplashTextRenderer::mSplashes != dword_27D9630 )
    v37 = *((_DWORD *)_R9 + 2);
    if ( v37 == -1 )
      v38 = sub_119D73C((int)&Random::mRandomDevice);
      v73 = v38;
      v75 = 625;
      v39 = 0;
      v40 = 1;
      v76 = 0;
      v77 = 0;
      v74 = v38;
        v41 = v38 ^ (v38 >> 30);
        v42 = (int *)(&v73 + v39);
        v43 = v39++ + 1812433253 * v41;
        v38 = v40++ + 1812433253 * v41;
        v42[2] = v43 + 1;
      while ( v39 != 397 );
      v75 = 624;
      v78 = 398;
      v37 = 0;
      v36 = SplashTextRenderer::mSplashes;
      if ( (dword_27D9630 - SplashTextRenderer::mSplashes) >> 2 )
        v44 = dword_27D9630 - SplashTextRenderer::mSplashes;
        v37 = Random::_genRandInt32((Random *)&v73) % (v44 >> 2);
        v36 = SplashTextRenderer::mSplashes;
      *((_DWORD *)_R9 + 2) = v37;
    v45 = (Minecraft *)ClientInstance::getServerData(v8);
    _R0 = Minecraft::getLastTimestep(v45, v46);
    __asm
      VMOV            D0, R0, R1
      VLDR            D1, [R9,#0x10]
      VADD.F64        D8, D1, D0
    _R0 = &mce::Math::PI;
      VLDR            D0, =2.29999995
      VLDR            S2, [R0]
      VMUL.F64        D0, D8, D0
      VCVT.F64.F32    D1, S2
      VMUL.F64        D0, D0, D1
      VMOV            R0, R1, D0
    _R0 = COERCE_UNSIGNED_INT64(sin(_R0));
      VSTR            D8, [R9,#0x10]
    LODWORD(v55) = v36 + 4 * v37;
    __asm { VCVT.F32.F64    S18, D0 }
    v56 = ClientInstance::getFont(v8);
    _R0 = Font::getLineLength(v56, (int *)(v36 + 4 * v37), 1065353216, 0);
      VMOV            S0, R0
      VLDR            S2, =32.0
      VMUL.F32        S4, S18, S18
      VCVT.F32.S32    S0, S0
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S0, S2
      VLDR            S2, =100.0
      VDIV.F32        S20, S2, S0
      VLDR            S0, =0.06
      VMUL.F32        S22, S4, S0
    _R0 = UIControl::getPosition(v7);
      VLDR            S0, =1.3
      VLDR            S18, [R0]
      VLDR            S16, [R0,#4]
      VADD.F32        S22, S22, S0
    v59 = ClientInstance::getFont(v8);
    v60 = MinecraftUIRenderContext::getScreenContext(v9);
    __asm { VMUL.F32        S20, S22, S20 }
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v61 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v61 = &ServiceLocator<AppPlatform>::mDefaultService;
    _R0 = (*(int (**)(void))(**(_DWORD **)v61 + 324))();
      VMOV            R3, S18
      VMOV            S2, R0
      VMOV.F32        S0, #0.3125
      VCVT.F32.S32    S2, S2
      VSTR            S20, [SP,#0xA78+var_A6C]
      VSTR            S16, [SP,#0xA78+var_A78]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0xA78+var_A64]
    Font::drawTransformed(*(float *)&v59, v60, v55, _R3, v69, COERCE_FLOAT(&Color::YELLOW), -1046478848, v70, 1, v71);
    UIControl::getAABB((UIControl *)&v72, (int)v7);
    result = RectangleArea::operator=((int)a6, (int)&v72);
  return result;
}


int __fastcall SplashTextRenderer::clone(SplashTextRenderer *this)
{
  SplashTextRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI18SplashTextRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall SplashTextRenderer::~SplashTextRenderer(SplashTextRenderer *this)
{
  SplashTextRenderer::~SplashTextRenderer(this);
}


_QWORD *__fastcall SplashTextRenderer::SplashTextRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E06D4;
  *((_DWORD *)result + 2) = -1;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 5) = 0;
  *((_BYTE *)result + 24) = 0;
  return result;
}


Json::Value *__fastcall SplashTextRenderer::_loadSplashes(SplashTextRenderer *this, const ResourceLocation *a2)
{
  SplashTextRenderer *v2; // r9@1
  const ResourceLocation *v3; // r5@1
  int v4; // r5@2
  int v5; // r11@3
  __int64 v6; // r0@3
  int v7; // r1@4
  void *v8; // r0@6
  void *v9; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  char *v14; // r0@26
  unsigned int *v16; // r2@28
  signed int v17; // r1@30
  int v18; // [sp+Ch] [bp-C4h]@3
  void *v19; // [sp+10h] [bp-C0h]@3
  char v20; // [sp+14h] [bp-BCh]@2
  char v21; // [sp+1Ch] [bp-B4h]@2
  char *v22; // [sp+24h] [bp-ACh]@1
  char v23; // [sp+28h] [bp-A8h]@1
  char v24; // [sp+98h] [bp-38h]@1

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  Json::Value::Value(&v24, 0);
  Json::Reader::Reader((Json::Reader *)&v23);
  v22 = (char *)&unk_28898CC;
  Resource::load((int)v3);
  if ( Json::Reader::parse((int)&v23, (int *)&v22, (int)&v24, 1) == 1 )
  {
    v4 = Json::Value::operator[]((Json::Value *)&v24, "splashes");
    Json::Value::begin((Json::Value *)&v21, v4);
    Json::Value::end((Json::Value *)&v20, v4);
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v21, (const Json::ValueIteratorBase *)&v20) != 1 )
    {
      v5 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v21);
      sub_119C884((void **)&v18, (const char *)&unk_257BC67);
      Json::Value::asString((int *)&v19, v5, &v18);
      v6 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v6 == HIDWORD(v6) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v2,
          &v19);
        v7 = (int)v19;
      }
      else
        *(_DWORD *)v6 = v19;
        HIDWORD(v6) = &unk_28898CC;
        v19 = &unk_28898CC;
        *((_DWORD *)v2 + 1) = v6 + 4;
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v7 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      v9 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v18 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v21);
    }
  }
  v14 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  Json::Reader::~Reader((Json::Reader *)&v23);
  return Json::Value::~Value((Json::Value *)&v24);
}


void __fastcall SplashTextRenderer::~SplashTextRenderer(SplashTextRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}
