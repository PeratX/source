

void __fastcall mce::ShaderGroup::~ShaderGroup(mce::ShaderGroup *this)
{
  mce::ShaderGroup::~ShaderGroup(this);
}


int __fastcall mce::Math::sin(int a1)
{
  int v8; // [sp+4h] [bp-Ch]@1

  v8 = a1;
  _R0 = j_mce::Radian::asFloat((mce::Radian *)&v8);
  __asm
  {
    VLDR            S2, [R0]
    VLDR            S0, =10430.0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  return mce::Math::mSin[(unsigned __int16)_R1];
}


int __fastcall mce::Camera::setProjectionParams(int result, float a2, float a3, float a4, float a5)
{
  __asm { VLDR            S0, [SP,#arg_0] }
  *(float *)(result + 164) = a4;
  *(float *)(result + 168) = a2;
  *(float *)(result + 172) = a3;
  __asm { VSTR            S0, [R0,#0xA0] }
  return result;
}


mce::MaterialPtr *__fastcall mce::RenderMaterialGroup::_removeRef(mce::RenderMaterialGroup *this, mce::MaterialPtr *a2)
{
  mce::RenderMaterialGroup *v2; // r9@1
  mce::MaterialPtr *v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  mce::MaterialPtr *result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 16);
  v5 = (unsigned int)a2;
  v6 = *((_DWORD *)v2 + 15);
  v20 = *((_DWORD *)v2 + 15);
  v8 = (unsigned int)a2 % v4;
  result = (mce::MaterialPtr *)(v5 / v4);
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (mce::MaterialPtr *)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = (mce::MaterialPtr *)(v13 / v4);
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          operator delete(v15);
          result = (mce::MaterialPtr *)(*((_DWORD *)v2 + 18) - 1);
          *((_DWORD *)v2 + 18) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *((_DWORD *)v2 + 15);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)((char *)v2 + 68) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


char *__fastcall mce::ShaderOGL::refelectShaderAttributes(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r11@1
  const char *v2; // r4@2
  int v3; // r5@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r7@11
  int v7; // r9@12
  _BYTE *v8; // r0@12
  _BYTE *v9; // r1@14
  int v10; // r2@14
  unsigned int v11; // r3@14
  unsigned int v12; // r2@16
  unsigned int v13; // r8@16
  char *v14; // r10@22
  void *v15; // r0@24
  void *v16; // r2@24
  char *v17; // r1@24
  __int64 v18; // kr10_8@25
  int v19; // r4@25
  void *v20; // r6@27
  void *v21; // r0@30
  char *result; // r0@35
  int v23; // [sp+34h] [bp-44Ch]@3
  int v24; // [sp+38h] [bp-448h]@1
  int v25; // [sp+40h] [bp-440h]@13
  char v26; // [sp+44h] [bp-43Ch]@11
  void *ptr; // [sp+48h] [bp-438h]@1
  void *v28; // [sp+4Ch] [bp-434h]@1
  char *v29; // [sp+50h] [bp-430h]@1
  char v30; // [sp+58h] [bp-428h]@2
  RakNet *v31; // [sp+458h] [bp-28h]@1

  v1 = this;
  v31 = _stack_chk_guard;
  ptr = 0;
  v28 = 0;
  v29 = 0;
  glad_glGetProgramiv(*((_DWORD *)this + 5), 35721, &v24);
  if ( v24 )
  {
    v2 = &v30;
    v3 = 0;
    do
    {
      glad_glGetActiveAttrib(*((_DWORD *)v1 + 5), v3, 1024, &v26);
      v6 = glad_glGetAttribLocation(*((_DWORD *)v1 + 5), v2);
      if ( v6 >= 0 )
      {
        sub_21E94B4((void **)&v23, v2);
        v7 = mce::ShaderBase::getAttributeForName((int)v1, (int **)&v23);
        v8 = v28;
        if ( v28 == v29 )
        {
          v9 = ptr;
          v10 = ((_BYTE *)v28 - (_BYTE *)ptr) >> 2;
          v11 = -1431655765 * v10;
          if ( v28 == ptr )
            v11 = 1;
          v12 = v11 + -1431655765 * v10;
          v13 = v12;
          if ( v12 > 0x15555555 )
            v13 = 357913941;
          if ( v12 < v11 )
          if ( v13 )
          {
            if ( v13 >= 0x15555556 )
              sub_21E57F4();
            v14 = (char *)operator new(12 * v13);
            v8 = v28;
            v9 = ptr;
          }
          else
            v14 = 0;
          ((void (__fastcall *)(char *, int, int, int))mce::Attribute::Attribute)(&v14[v8 - v9], v6, v25, v7);
          v16 = v28;
          v15 = ptr;
          v17 = v14;
          if ( ptr != v28 )
            do
            {
              v18 = *(_QWORD *)v15;
              v19 = *((_DWORD *)v15 + 2);
              v15 = (char *)v15 + 12;
              *(_QWORD *)v17 = v18;
              *((_DWORD *)v17 + 2) = v19;
              v17 += 12;
            }
            while ( v16 != v15 );
            v15 = ptr;
          v20 = v17 + 12;
          if ( v15 )
            operator delete(v15);
          ptr = v14;
          v28 = v20;
          v2 = &v30;
          v29 = &v14[12 * v13];
        }
        else
          ((void (__cdecl *)(void *, int, int))mce::Attribute::Attribute)(v28, v6, v25);
          v28 = (char *)v28 + 12;
        v21 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v4 = (unsigned int *)(v23 - 4);
          if ( &pthread_create )
            __dmb();
              v5 = __ldrex(v4);
            while ( __strex(v5 - 1, v4) );
            v5 = (*v4)--;
          if ( v5 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        glad_glEnableVertexAttribArray(v6);
      }
      ++v3;
    }
    while ( v3 != v24 );
  }
  *(_DWORD *)v1 = mce::RenderDeviceBase::registerOrGetAttributeListIndex(
                    (int)mce::Singleton<mce::RenderDevice>::mInstance,
                    (unsigned __int64 *)&ptr);
  if ( ptr )
    operator delete(ptr);
  result = (char *)(_stack_chk_guard - v31);
  if ( _stack_chk_guard != v31 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall mce::ShaderOGL::finalizeShaderUniforms(int result)
{
  __int64 i; // r4@1

  for ( i = *(_QWORD *)(result + 24); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 24 )
  {
    result = *(_BYTE *)(i + 8);
    if ( (unsigned int)result <= 0xB )
    {
      result = (int)mce::ConstantBufferContainer::getUnspecializedShaderConstant(
                      *(_DWORD *)(i + 20),
                      (const void **)(i + 12));
      *(_DWORD *)(i + 16) = result;
    }
  }
  return result;
}


signed int __fastcall mce::operator>(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S2, R0 }
  result = 0;
  __asm
  {
    VMOV            S0, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall mce::Mesh::getMeshSize(mce::Mesh *this)
{
  mce::Mesh *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = mce::Buffer::getInternalBufferSize(this);
  return mce::Buffer::getInternalBufferSize((mce::Mesh *)((char *)v1 + 32)) + v2;
}


Json::Value *__fastcall mce::RenderMaterial::_buildHeader(mce::RenderMaterial *this, const Json::Value *a2, const char *a3)
{
  const Json::Value *v3; // r5@1
  const char *v4; // r6@1
  void *v5; // r0@2
  void *v6; // r0@5
  void *v7; // r0@7
  void *v8; // r0@9
  void *v9; // r0@11
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  int v14; // r10@30
  void *v15; // r0@30
  void *v16; // r0@31
  int i; // r6@33
  unsigned int *v18; // r2@35
  signed int v19; // r1@37
  unsigned int *v20; // r2@39
  signed int v21; // r1@41
  const void **v22; // r0@51
  char *v23; // r0@51
  char *v24; // r0@52
  const void **v25; // r4@54
  const void **v26; // r0@54
  char *v27; // r0@54
  char *v28; // r0@55
  const void **v29; // r4@56
  const void **v30; // r0@56
  char *v31; // r0@56
  char *v32; // r0@57
  const void **v33; // r4@58
  const void **v34; // r0@58
  char *v35; // r0@58
  char *v36; // r0@59
  const void **v37; // r4@60
  const void **v38; // r0@60
  char *v39; // r0@60
  char *v40; // r0@61
  unsigned int *v42; // r2@63
  signed int v43; // r1@65
  unsigned int *v44; // r2@67
  signed int v45; // r1@69
  unsigned int *v46; // r2@71
  signed int v47; // r1@73
  unsigned int *v48; // r2@75
  signed int v49; // r1@77
  unsigned int *v50; // r2@79
  signed int v51; // r1@81
  unsigned int *v52; // r2@83
  signed int v53; // r1@85
  unsigned int *v54; // r2@87
  signed int v55; // r1@89
  unsigned int *v56; // r2@91
  signed int v57; // r1@93
  unsigned int *v58; // r2@95
  signed int v59; // r1@97
  unsigned int *v60; // r2@99
  signed int v61; // r1@101
  unsigned int *v62; // r2@103
  signed int v63; // r1@105
  unsigned int *v64; // r2@107
  signed int v65; // r1@109
  unsigned int *v66; // r2@147
  signed int v67; // r1@149
  void **v68; // [sp+Ch] [bp-B4h]@1
  char *v69; // [sp+10h] [bp-B0h]@60
  char *v70; // [sp+14h] [bp-ACh]@60
  char *v71; // [sp+18h] [bp-A8h]@58
  char *v72; // [sp+1Ch] [bp-A4h]@58
  char *v73; // [sp+20h] [bp-A0h]@56
  char *v74; // [sp+24h] [bp-9Ch]@56
  char *v75; // [sp+28h] [bp-98h]@54
  char *v76; // [sp+2Ch] [bp-94h]@54
  char *v77; // [sp+30h] [bp-90h]@39
  char *v78; // [sp+34h] [bp-8Ch]@35
  char v79; // [sp+3Ch] [bp-84h]@30
  int v80; // [sp+48h] [bp-78h]@18
  int v81; // [sp+4Ch] [bp-74h]@14
  char v82; // [sp+50h] [bp-70h]@12
  char v83; // [sp+58h] [bp-68h]@12
  char v84; // [sp+60h] [bp-60h]@2
  int v85; // [sp+78h] [bp-48h]@11
  int v86; // [sp+80h] [bp-40h]@9
  int v87; // [sp+88h] [bp-38h]@7
  int v88; // [sp+90h] [bp-30h]@5
  int v89; // [sp+98h] [bp-28h]@2

  v68 = (void **)this;
  v3 = a2;
  v4 = a3;
  if ( !mce::RenderDevice::checkFeatureSupport() )
  {
    sub_21E94B4((void **)&v89, "R8G8B8A8_SNORM_UNSUPPORTED");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(
      (int)&v84,
      (int)v3 + 8,
      (const void **)&v89);
    v5 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
    {
      v60 = (unsigned int *)(v89 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      }
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
  }
  if ( mce::RenderDevice::checkFeatureSupport() == 1
    && *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 12) >= 2 )
    sub_21E94B4((void **)&v88, "MSAA_FRAMEBUFFER_ENABLED");
      (const void **)&v88);
    v6 = (void *)(v88 - 12);
    if ( (int *)(v88 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v88 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  if ( mce::GlobalConstantBufferManager::isHolographic(mce::Singleton<mce::GlobalConstantBufferManager>::mInstance) == 1 )
    sub_21E94B4((void **)&v87, "VR_MODE");
      (const void **)&v87);
    v7 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v87 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v86, "INSTANCEDSTEREO");
      (const void **)&v86);
    v8 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v86 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  if ( *(_BYTE *)(mce::Singleton<mce::RendererSettings>::mInstance + 49) )
    sub_21E94B4((void **)&v85, "TEXEL_AA_FEATURE");
      (const void **)&v85);
    v9 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v85 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  Json::Value::get((Json::Value *)&v84, v4, (const Json::Value *)"defines", (const Json::Value *)&Json::Value::null);
  Json::Value::begin((Json::Value *)&v83, (int)&v84);
  Json::Value::end((Json::Value *)&v82, (int)&v84);
  while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v83, (const Json::ValueIteratorBase *)&v82) )
    v14 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v83);
    sub_21E94B4((void **)&v80, (const char *)&unk_257BC67);
    Json::Value::asString(&v81, v14, &v80);
      (int)&v79,
      (const void **)&v81);
    v15 = (void *)(v81 - 12);
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v81 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v80 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v83);
  sub_21E94B4(v68, (const char *)&unk_257BC67);
  for ( i = *((_DWORD *)v3 + 5); (const Json::Value *)i != (const Json::Value *)((char *)v3 + 12); i = sub_21D4820(i) )
    v77 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v77, *(_DWORD *)(*(_DWORD *)(i + 16) - 12) + 8);
    sub_21E7408((const void **)&v77, "#define ", 8u);
    sub_21E72F0((const void **)&v77, (const void **)(i + 16));
    v22 = sub_21E7408((const void **)&v77, "\n", 1u);
    v78 = (char *)*v22;
    *v22 = &unk_28898CC;
    sub_21E72F0((const void **)v68, (const void **)&v78);
    v23 = v78 - 12;
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v78 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = v77 - 12;
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v77 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  v25 = (const void **)sub_1448DE8(23);
  v75 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v75, *((_DWORD *)*v25 - 3) + 13);
  sub_21E7408((const void **)&v75, "#define MAT4 ", 0xDu);
  sub_21E72F0((const void **)&v75, v25);
  v26 = sub_21E7408((const void **)&v75, " mat4\n", 6u);
  v76 = (char *)*v26;
  *v26 = &unk_28898CC;
  sub_21E72F0((const void **)v68, (const void **)&v76);
  v27 = v76 - 12;
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = v75 - 12;
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v75 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (const void **)sub_1448DE8(23);
  v73 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v73, *((_DWORD *)*v29 - 3) + 13);
  sub_21E7408((const void **)&v73, "#define POS4 ", 0xDu);
  sub_21E72F0((const void **)&v73, v29);
  v30 = sub_21E7408((const void **)&v73, " vec4\n", 6u);
  v74 = (char *)*v30;
  *v30 = &unk_28898CC;
  sub_21E72F0((const void **)v68, (const void **)&v74);
  v31 = v74 - 12;
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v74 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = v73 - 12;
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v73 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (const void **)sub_1448DE8(23);
  v71 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v71, *((_DWORD *)*v33 - 3) + 13);
  sub_21E7408((const void **)&v71, "#define POS3 ", 0xDu);
  sub_21E72F0((const void **)&v71, v33);
  v34 = sub_21E7408((const void **)&v71, " vec3\n", 6u);
  v72 = (char *)*v34;
  *v34 = &unk_28898CC;
  sub_21E72F0((const void **)v68, (const void **)&v72);
  v35 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v72 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = v71 - 12;
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v71 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (const void **)sub_1448DE8(9);
  v69 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v69, *((_DWORD *)*v37 - 3) + 10);
  sub_21E7408((const void **)&v69, "precision ", 0xAu);
  sub_21E72F0((const void **)&v69, v37);
  v38 = sub_21E7408((const void **)&v69, " float;\n", 8u);
  v70 = (char *)*v38;
  *v38 = &unk_28898CC;
  sub_21E72F0((const void **)v68, (const void **)&v70);
  v39 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v70 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v69 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  return Json::Value::~Value((Json::Value *)&v84);
}


mce::ConstantBufferContainerBase *__fastcall mce::ConstantBufferContainerBase::~ConstantBufferContainerBase(mce::ConstantBufferContainerBase *this)
{
  mce::ConstantBufferContainerBase *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  char *v5; // r5@4 OVERLAPPED
  char *v6; // r6@4 OVERLAPPED
  char *v7; // r0@11
  char *v8; // r5@11
  int v9; // r6@12
  unsigned int *v11; // r2@17
  signed int v12; // r1@19

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)*((_DWORD *)v1 + 6);
  if ( v4 )
    free(v4);
  *(_QWORD *)&v5 = *(_QWORD *)((char *)v1 + 12);
  if ( v5 != v6 )
    do
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 4))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    while ( v6 != v5 );
    v5 = (char *)*((_DWORD *)v1 + 3);
  if ( v5 )
    operator delete(v5);
  v8 = (char *)(*(_QWORD *)v1 >> 32);
  v7 = (char *)*(_QWORD *)v1;
  if ( v7 != v8 )
      v9 = (int)(v7 + 20);
      (**(void (***)(void))v7)();
      v7 = (char *)v9;
    while ( v8 != (char *)v9 );
    v7 = *(char **)v1;
  if ( v7 )
    operator delete(v7);
  return v1;
}


signed int __fastcall mce::SwapChainBase::isMultisampledSwapChain(mce::SwapChainBase *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( v1 > 1 )
    result = 1;
  return result;
}


int __fastcall mce::TextureGroup::loadListAsync(int a1, int a2, unsigned __int64 *a3, char a4)
{
  int result; // r0@1
  int v5; // r4@1
  int *v6; // r8@2
  int (**v7)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@2
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  int v10; // r0@9
  __int64 v11; // r1@9
  int v12; // r0@9
  __int16 v13; // r0@9
  void *v14; // r6@9
  int v15; // r12@9
  int v16; // r1@9
  __int64 v17; // r2@9
  unsigned int *v18; // r0@10
  unsigned int v19; // r1@12
  int v20; // r1@15
  int v21; // r2@15
  int v22; // r3@15
  int v23; // r0@15
  __int16 v24; // r0@15
  void *v25; // r6@15
  int v26; // r12@15
  int v27; // r1@15
  int v28; // r2@15
  int v29; // r3@15
  int v30; // r1@15
  __int16 v31; // r1@15
  char v32; // r0@15
  int v41; // r6@33
  unsigned int *v42; // r1@34
  unsigned int v43; // r0@36
  unsigned int *v44; // r5@40
  unsigned int v45; // r0@42
  int v46; // r6@47
  unsigned int *v47; // r1@48
  unsigned int v48; // r0@50
  unsigned int *v49; // r5@54
  unsigned int v50; // r0@56
  int v51; // [sp+28h] [bp-140h]@1
  int v52; // [sp+2Ch] [bp-13Ch]@1
  char v53; // [sp+30h] [bp-138h]@1
  int v54; // [sp+4Ch] [bp-11Ch]@3
  int v55; // [sp+68h] [bp-100h]@1
  int v56; // [sp+6Ch] [bp-FCh]@9
  int v57; // [sp+74h] [bp-F4h]@9
  int v58; // [sp+78h] [bp-F0h]@9
  int v59; // [sp+80h] [bp-E8h]@15
  int v60; // [sp+84h] [bp-E4h]@15
  int v61; // [sp+88h] [bp-E0h]@15
  int v62; // [sp+8Ch] [bp-DCh]@15
  int v63; // [sp+90h] [bp-D8h]@15
  int v64; // [sp+94h] [bp-D4h]@15
  int v65; // [sp+98h] [bp-D0h]@15
  __int16 v66; // [sp+9Ch] [bp-CCh]@15
  int v67; // [sp+A0h] [bp-C8h]@15
  int v68; // [sp+A4h] [bp-C4h]@15
  int v69; // [sp+A8h] [bp-C0h]@15
  __int16 v70; // [sp+ACh] [bp-BCh]@15
  char v71; // [sp+AEh] [bp-BAh]@15
  char v72; // [sp+B0h] [bp-B8h]@15
  int v73; // [sp+B8h] [bp-B0h]@15
  char v74; // [sp+C0h] [bp-A8h]@15
  void *v75; // [sp+C8h] [bp-A0h]@15
  int (__fastcall *v76)(int *, int *, int); // [sp+D0h] [bp-98h]@15
  char *(__fastcall *v77)(__int64 **); // [sp+D4h] [bp-94h]@15
  int v78; // [sp+D8h] [bp-90h]@3
  int v79; // [sp+DCh] [bp-8Ch]@3
  int v80; // [sp+E0h] [bp-88h]@2
  int v81; // [sp+E4h] [bp-84h]@9
  int v82; // [sp+E8h] [bp-80h]@9
  int v83; // [sp+ECh] [bp-7Ch]@9
  __int64 v84; // [sp+F0h] [bp-78h]@9
  int v85; // [sp+F8h] [bp-70h]@9
  __int16 v86; // [sp+FCh] [bp-6Ch]@9
  int v87; // [sp+100h] [bp-68h]@9
  int v88; // [sp+104h] [bp-64h]@9
  int v89; // [sp+108h] [bp-60h]@9
  __int16 v90; // [sp+10Ch] [bp-5Ch]@9
  char v91; // [sp+10Eh] [bp-5Ah]@9
  char v92; // [sp+110h] [bp-58h]@9
  int v93; // [sp+118h] [bp-50h]@9
  int v94; // [sp+120h] [bp-48h]@9
  void *v95; // [sp+128h] [bp-40h]@9
  void (*v96)(void); // [sp+130h] [bp-38h]@9
  int (__fastcall *v97)(int **); // [sp+134h] [bp-34h]@9
  int v98; // [sp+138h] [bp-30h]@3
  int v99; // [sp+13Ch] [bp-2Ch]@3

  v52 = a2;
  v53 = a4;
  v55 = a1;
  result = *a3 >> 32;
  v5 = *a3;
  v51 = result;
  if ( v5 != result )
  {
    v6 = &v80;
    v7 = &pthread_create;
    do
    {
      j__ZNSt12__shared_ptrI11TexturePairLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v98);
      v54 = *(_DWORD *)(v55 + 92);
      v78 = v98;
      v79 = v99;
      if ( v99 )
      {
        v8 = (unsigned int *)(v99 + 4);
        if ( v7 )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
        else
          ++*v8;
      }
      sub_21E8AF4(v6, (int *)v5);
      v81 = *(_DWORD *)(v5 + 4);
      v10 = *(_DWORD *)(v5 + 12);
      LODWORD(v11) = *(_DWORD *)(v5 + 16);
      HIDWORD(v11) = *(_DWORD *)(v5 + 20);
      v56 = v5;
      v82 = *(_DWORD *)(v5 + 8);
      v83 = v10;
      v84 = v11;
      v12 = *(_DWORD *)(v5 + 24);
      v86 = *(_WORD *)(v5 + 28);
      v85 = v12;
      sub_21E8AF4(&v87, (int *)(v5 + 32));
      sub_21E8AF4(&v88, (int *)(v5 + 36));
      sub_21E8AF4(&v89, (int *)(v5 + 40));
      v13 = *(_WORD *)(v5 + 44);
      v91 = *(_BYTE *)(v5 + 46);
      v90 = v13;
      v92 = *(_BYTE *)(v5 + 48);
      v93 = *(_DWORD *)(v5 + 56);
      v94 = v55;
      v96 = 0;
      v14 = operator new(0x50u);
      *(_DWORD *)v14 = v78;
      *((_DWORD *)v14 + 1) = v79;
      v79 = 0;
      v78 = 0;
      sub_21E8AF4((int *)v14 + 2, &v80);
      v15 = (int)v14 + 16;
      *((_DWORD *)v14 + 3) = v81;
      v16 = v83;
      v17 = v84;
      *(_DWORD *)v15 = v82;
      *(_DWORD *)(v15 + 4) = v16;
      *(_QWORD *)(v15 + 8) = v17;
      *((_WORD *)v14 + 18) = v86;
      *((_DWORD *)v14 + 8) = v85;
      sub_21E8AF4((int *)v14 + 10, &v87);
      sub_21E8AF4((int *)v14 + 11, &v88);
      sub_21E8AF4((int *)v14 + 12, &v89);
      *((_BYTE *)v14 + 54) = v91;
      *((_WORD *)v14 + 26) = v90;
      *((_BYTE *)v14 + 56) = v92;
      *((_DWORD *)v14 + 16) = v93;
      *((_DWORD *)v14 + 18) = v94;
      v95 = v14;
      v97 = sub_1451A6C;
      v96 = (void (*)(void))sub_1451B44;
      v57 = v98;
      v58 = v99;
        v18 = (unsigned int *)(v99 + 4);
        if ( &pthread_create )
            v19 = __ldrex(v18);
          while ( __strex(v19 + 1, v18) );
          ++*v18;
      sub_21E8AF4(&v59, (int *)v5);
      v60 = *(_DWORD *)(v5 + 4);
      v20 = *(_DWORD *)(v5 + 12);
      v21 = *(_DWORD *)(v5 + 16);
      v22 = *(_DWORD *)(v5 + 20);
      v61 = *(_DWORD *)(v5 + 8);
      v62 = v20;
      v63 = v21;
      v64 = v22;
      v23 = *(_DWORD *)(v5 + 24);
      v66 = *(_WORD *)(v5 + 28);
      v65 = v23;
      sub_21E8AF4(&v67, (int *)(v5 + 32));
      sub_21E8AF4(&v68, (int *)(v5 + 36));
      sub_21E8AF4(&v69, (int *)(v5 + 40));
      v24 = *(_WORD *)(v5 + 44);
      v71 = *(_BYTE *)(v5 + 46);
      v70 = v24;
      v72 = *(_BYTE *)(v5 + 48);
      v73 = *(_DWORD *)(v5 + 56);
      v74 = v53;
      v76 = 0;
      v25 = operator new(0x58u);
      *(_DWORD *)v25 = v55;
      *((_DWORD *)v25 + 1) = v57;
      *((_DWORD *)v25 + 2) = v58;
      sub_21E8AF4((int *)v25 + 4, &v59);
      v26 = (int)v25 + 24;
      *((_DWORD *)v25 + 5) = v60;
      v27 = v62;
      v28 = v63;
      v29 = v64;
      *(_DWORD *)v26 = v61;
      *(_DWORD *)(v26 + 4) = v27;
      *(_DWORD *)(v26 + 8) = v28;
      *(_DWORD *)(v26 + 12) = v29;
      v30 = v65;
      *((_WORD *)v25 + 22) = v66;
      *((_DWORD *)v25 + 10) = v30;
      sub_21E8AF4((int *)v25 + 12, &v67);
      sub_21E8AF4((int *)v25 + 13, &v68);
      sub_21E8AF4((int *)v25 + 14, &v69);
      v31 = v70;
      *((_BYTE *)v25 + 62) = v71;
      v32 = v72;
      *((_WORD *)v25 + 30) = v31;
      *((_BYTE *)v25 + 64) = v32;
      *((_DWORD *)v25 + 18) = v73;
      *((_BYTE *)v25 + 80) = v74;
      v75 = v25;
      v77 = sub_1451CA4;
      v76 = sub_1451F0C;
      ResourceLoadManager::loadResource(v54, v52, 0, (int)&v95, (int)&v75);
      if ( v76 )
        v76((int *)&v75, (int *)&v75, 3);
      ResourceLocationPair::~ResourceLocationPair((ResourceLocationPair *)&v59);
      v6 = &v80;
      v7 = &pthread_create;
      if ( v96 )
        v96();
      ResourceLocationPair::~ResourceLocationPair((ResourceLocationPair *)&v80);
      v41 = v79;
      if ( v79 )
        v42 = (unsigned int *)(v79 + 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          v44 = (unsigned int *)(v41 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
          if ( &pthread_create )
          {
            __dmb();
            do
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
          }
          else
            v45 = (*v44)--;
          if ( v45 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
      v46 = v99;
        v47 = (unsigned int *)(v99 + 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 == 1 )
          v49 = (unsigned int *)(v46 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
      v5 += 64;
      result = v51;
    }
    while ( v56 + 64 != v51 );
  }
  return result;
}


int __fastcall mce::RenderContextOGL::lostContext(mce::RenderContextOGL *this)
{
  mce::RenderContextBase *v1; // r4@1

  v1 = this;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  mce::RenderContextBase::clearContextState(this);
  return j_j_j__ZN3mce17RenderContextBase11lostContextEv(v1);
}


void __fastcall mce::TextureGroup::unloadFileSystem(int a1, int a2)
{
  mce::TextureGroup::unloadFileSystem(a1, a2);
}


int __fastcall mce::RenderMaterial::_parseStateName(int a1, int **a2)
{
  unsigned int v2; // r10@1
  unsigned int v3; // r11@1
  int v4; // r7@1
  int *v5; // r6@1
  int v6; // r8@2
  int v7; // r4@2
  int *v8; // r9@2
  const void *v9; // r1@4
  size_t v10; // r2@4
  int v11; // r0@5
  int v12; // r5@6
  unsigned int v13; // r4@8
  int *v14; // r5@8
  int v15; // r7@8
  size_t v16; // r6@8
  _DWORD *v17; // r1@11
  int result; // r0@13
  bool v19; // zf@14
  int **v20; // [sp+0h] [bp-28h]@1

  v20 = a2;
  v2 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v3 = unk_27E8B38;
  v4 = v2 % unk_27E8B38;
  v5 = *(int **)(dword_27E8B34 + 4 * (v2 % unk_27E8B38));
  if ( !v5 )
    goto LABEL_8;
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 12);
  v8 = *v20;
  while ( 1 )
  {
    if ( v7 == v2 )
    {
      v9 = *(const void **)(v6 + 4);
      v10 = *(v8 - 3);
      if ( v10 == *((_DWORD *)v9 - 3) )
      {
        v11 = memcmp(v8, v9, v10);
        if ( !v11 )
          break;
      }
    }
    v12 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
      v7 = *(_DWORD *)(v12 + 12);
      v5 = (int *)v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v12 + 12) % v3 == v4 )
        continue;
  }
  v19 = v5 == 0;
  if ( v5 )
    v11 = *v5;
    v19 = *v5 == 0;
  if ( v19 )
LABEL_8:
    v13 = sub_21B417C(*v20, *(*v20 - 3), -955291385);
    v14 = *v20;
    v15 = **(_DWORD **)(dword_27E8B18 + 4 * unk_27E8B1C);
    v16 = *(*v20 - 3);
    while ( 1 )
      if ( *(_DWORD *)(v15 + 8) == v13 )
        v17 = *(_DWORD **)(v15 + 4);
        if ( v16 == *(v17 - 3) && !memcmp(v14, v17, v16) )
      v15 = *(_DWORD *)v15;
    result = 0;
  else
    result = *(_DWORD *)(v11 + 8);
  return result;
}


void __fastcall mce::QuadIndexBuffer::~QuadIndexBuffer(mce::QuadIndexBuffer *this)
{
  AppPlatformListener *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E8D40;
  mce::Buffer::~Buffer((mce::QuadIndexBuffer *)((char *)this + 8));
  AppPlatformListener::~AppPlatformListener(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int *__fastcall mce::MaterialPtr::getNameW(mce::MaterialPtr *this)
{
  mce::MaterialPtr *v1; // r4@1
  char v2; // r0@1
  const void **v3; // r8@4
  int v4; // r0@4
  const void *v5; // r5@5
  size_t v6; // r7@5
  int *v7; // r9@5
  int *v8; // r6@6
  _DWORD *v9; // r0@7
  size_t v10; // r4@7
  size_t v11; // r2@7
  int v12; // r0@9
  _DWORD *v13; // r1@18
  unsigned int v14; // r4@18
  unsigned int v15; // r5@18
  size_t v16; // r2@18
  int v17; // r0@20
  char *v18; // r0@23
  void *v19; // r0@24
  char *v20; // r0@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  char *v28; // [sp+4h] [bp-34h]@23
  int v29; // [sp+8h] [bp-30h]@23
  char *v30; // [sp+Ch] [bp-2Ch]@23
  char v31; // [sp+10h] [bp-28h]@23

  v1 = this;
  v2 = byte_27E8848;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E8848) )
  {
    dword_27E8854 = 0;
    unk_27E8860 = 0;
    dword_27E8850 = 0;
    unk_27E8858 = &dword_27E8850;
    unk_27E885C = &dword_27E8850;
    _cxa_atexit(std::map<std::string,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>>>>::~map);
    j___cxa_guard_release((unsigned int *)&byte_27E8848);
  }
  v3 = (const void **)((char *)v1 + 8);
  v4 = dword_27E8854;
  if ( dword_27E8854 )
    v5 = *v3;
    v6 = *((_DWORD *)*v3 - 3);
    v7 = &dword_27E8850;
    do
    {
      v8 = (int *)v4;
      while ( 1 )
      {
        v9 = (_DWORD *)v8[4];
        v10 = *(v9 - 3);
        v11 = *(v9 - 3);
        if ( v10 > v6 )
          v11 = v6;
        v12 = memcmp(v9, v5, v11);
        if ( !v12 )
          v12 = v10 - v6;
        if ( v12 >= 0 )
          break;
        v8 = (int *)v8[3];
        if ( !v8 )
        {
          v8 = v7;
          goto LABEL_17;
        }
      }
      v4 = v8[2];
      v7 = v8;
    }
    while ( v4 );
  else
    v8 = &dword_27E8850;
LABEL_17:
  if ( v8 == &dword_27E8850 )
    goto LABEL_53;
  v13 = (_DWORD *)v8[4];
  v14 = *((_DWORD *)*v3 - 3);
  v15 = *(v13 - 3);
  v16 = *((_DWORD *)*v3 - 3);
  if ( v14 > v15 )
    v16 = *(v13 - 3);
  v17 = memcmp(*v3, v13, v16);
  if ( !v17 )
    v17 = v14 - v15;
  if ( v17 < 0 )
LABEL_53:
    Util::toWideString((wchar_t **)&v28, (const char **)v3);
    sub_21E8AF4(&v29, (int *)v3);
    v30 = v28;
    v28 = (char *)&unk_28898DC;
    std::_Rb_tree<std::string,std::pair<std::string const,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>>,std::_Select1st<std::pair<std::string const,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>>>>::_M_insert_unique<std::pair<std::string const,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>> const&>(
      (int)&v31,
      (int)&algn_27E8849[3],
      (const void **)&v29);
    v8 = *(int **)&v31;
    v18 = v30 - 12;
    if ( (_UNKNOWN *)(v30 - 12) != &unk_28898D0 )
      v22 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9_0(v18);
    v19 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v29 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = v28 - 12;
    if ( (_UNKNOWN *)(v28 - 12) != &unk_28898D0 )
      v26 = (unsigned int *)(v28 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9_0(v20);
  return v8 + 5;
}


int __fastcall mce::FrameBufferObject::bindFrameBuffer(mce::FrameBufferObject *this)
{
  *(_DWORD *)(mce::RenderContextImmediate::get(this) + 232) = this;
  return j_j_j__ZN3mce20FrameBufferObjectOGL15bindFrameBufferEv(this);
}


char *__fastcall mce::DeviceInformationBase::getGraphicsVersion(mce::DeviceInformationBase *this)
{
  return (char *)this + 52;
}


signed int __fastcall mce::TextureHelperOGL::getOpenGLTextureFormatFromTextureFormat(signed int a1)
{
  if ( a1 <= 54 )
  {
    if ( (unsigned int)(a1 - 28) >= 2 && a1 != 11 )
    {
      if ( a1 != 45 )
        return 0;
      return 34041;
    }
    return 6408;
  }
  if ( (unsigned int)(a1 - 85) <= 0x1E )
    if ( (1 << (a1 - 85)) & 0x40000046 )
      return 6408;
    if ( a1 == 85 )
      return 6407;
  if ( a1 == 55 )
    return 34041;
  return 0;
}


void __fastcall mce::TextureGroup::enableLRUCache(mce::TextureGroup *this, unsigned int a2)
{
  mce::TextureGroup::enableLRUCache(this, a2);
}


mce::ShaderProgram *__fastcall mce::ShaderGroup::getShaderProgram(int a1, int a2, int *a3, int *a4, const void **a5)
{
  int v5; // r7@1
  int *v6; // r6@1
  int *v7; // r5@1
  int *v8; // r0@1
  unsigned int v9; // r4@1
  int v10; // r6@1
  unsigned int v11; // r7@1
  int *v12; // r10@1
  int v13; // r11@2
  _DWORD *v14; // r6@2
  int v15; // r8@2
  const void *v16; // r1@4
  size_t v17; // r2@4
  int v18; // r0@5
  int v19; // r9@6
  char *v20; // r0@13
  mce::ShaderProgram **v21; // r4@14
  mce::ShaderProgram *v22; // r6@14
  mce::ShaderProgram *v23; // r0@14
  void *v24; // r0@15
  void *v25; // r0@16
  char *v26; // r0@17
  char *v27; // r0@18
  bool v29; // zf@20
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // [sp+8h] [bp-48h]@1
  int v37; // [sp+10h] [bp-40h]@1
  int v38; // [sp+1Ch] [bp-34h]@14
  _DWORD *v39; // [sp+20h] [bp-30h]@8
  void *s1; // [sp+24h] [bp-2Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = sub_119C854((int *)&s1, a4);
  sub_119C8A4((const void **)v8, a5);
  v36 = (unsigned int *)v6;
  v9 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v10 = *(_DWORD *)(v5 + 24);
  v37 = v5;
  v11 = *(_DWORD *)(v5 + 28);
  v12 = *(int **)(v10 + 4 * (v9 % v11));
  if ( !v12 )
    goto LABEL_8;
  v13 = *v12;
  v14 = s1;
  v15 = *(_DWORD *)(*v12 + 12);
  while ( 1 )
  {
    if ( v15 == v9 )
    {
      v16 = *(const void **)(v13 + 4);
      v17 = *(v14 - 3);
      if ( v17 == *((_DWORD *)v16 - 3) )
      {
        v18 = memcmp(v14, v16, v17);
        if ( !v18 )
          break;
      }
    }
    v19 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v15 = *(_DWORD *)(v19 + 12);
      v12 = (int *)v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v19 + 12) % v11 == v9 % v11 )
        continue;
  }
  v29 = v12 == 0;
  if ( v12 )
    v18 = *v12;
    v29 = *v12 == 0;
  if ( v29 )
LABEL_8:
    v39 = &unk_28898CC;
    if ( *(_DWORD *)(*v7 - 12) )
      if ( !mce::_getShaderFromResourcePack(v7) && !mce::ShaderGroup::_getShaderFromBuiltInList(v37, v7) )
        mce::ShaderGroup::_getShaderFromVanillaPack(0, v7);
      if ( *(v39 - 3) )
        v20 = sub_119C8B4((int *)&v39, 10, 0);
        sub_119C984((const void **)&v39, (size_t)(v20 + 1), *v36, *(_BYTE **)(*v36 - 12));
    sub_119C884((void **)&v38, "Shader Program has no name and cannot be hashed! \"header\" = ");
    v21 = (mce::ShaderProgram **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<mce::ShaderProgram,std::default_delete<mce::ShaderProgram>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::ShaderProgram,std::default_delete<mce::ShaderProgram>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                   v37 + 24,
                                   (int **)&s1);
    v22 = (mce::ShaderProgram *)operator new(0x30u);
    mce::ShaderProgram::ShaderProgram((int)v22);
    v23 = *v21;
    *v21 = v22;
    if ( v23 )
      v24 = (void *)mce::ShaderProgram::~ShaderProgram(v23);
      operator delete(v24);
      v22 = *v21;
    v25 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    v26 = (char *)(v39 - 3);
    if ( v39 - 3 != &dword_28898C0 )
      v34 = v39 - 1;
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v26);
  else
    v22 = *(mce::ShaderProgram **)(v18 + 8);
  v27 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  return v22;
}


void __fastcall mce::RenderChunkConstants::init(mce::RenderChunkConstants *this)
{
  mce::RenderChunkConstants::init(this);
}


int __fastcall mce::Math::clampRotate(mce::Math *this, float _R1, float a3, float a4)
{
  signed int v11; // r1@1
  float v12; // r0@1
  float v15; // [sp+0h] [bp-20h]@7
  int v16; // [sp+4h] [bp-1Ch]@1

  __asm
  {
    VMOV            S16, R0
    VMOV            S0, R1
  }
  _R4 = a3;
    VSUB.F32        S0, S0, S16
    VSTR            S0, [SP,#0x20+var_1C]
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v16);
    VLDR            S0, =180.0
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  *(float *)&v16 = j_fmodf(_R0, 360.0);
  v11 = j_mce::operator<(v16, 0);
  v12 = *(float *)&v16;
  __asm { VMOV            S18, R4 }
  if ( v11 == 1 )
    v12 = COERCE_FLOAT(j_mce::operator+(v16, 1135869952));
    *(float *)&v16 = v12;
  _R0 = j_mce::operator-(SLODWORD(v12), 1127481344);
    VMOV            S2, R0
    VNEG.F32        S0, S18
    VCMPE.F32       S2, S18
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R4 = *(float *)&_R0;
    VMOV            S2, R4
    VCMPE.F32       S2, S0
  if ( _NF ^ _VF )
    __asm { VMOVLT          R4, S0 }
    VMOV            S0, R4
    VADD.F32        S0, S0, S16
    VSTR            S0, [SP,#0x20+var_20]
  return *(_DWORD *)j_mce::Degree::asFloat((mce::Degree *)&v15);
}


signed int __fastcall mce::FrameBufferAttachmentOGL::createAttachmentAndTexture(mce::FrameBufferAttachmentOGL *this, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, mce::Texture *a4)
{
  mce::FrameBufferAttachmentOGL *v4; // r4@1
  mce::Texture *v5; // r5@1
  mce::RenderContext *v6; // r6@1
  int v7; // r7@1
  int v8; // r1@5
  int v9; // r2@5
  int v10; // r3@5
  signed int v11; // r0@5
  signed int v12; // r1@7
  int v13; // r3@12
  signed int result; // r0@14
  int v15; // ST00_4@15
  signed int v16; // r2@16
  int v17; // [sp+8h] [bp-18h]@0

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = *((_DWORD *)this + 11) & 8;
  if ( v7 )
    mce::FrameBufferAttachmentBase::createAttachmentAndTexture(this, a2, a3, a4);
  else
    mce::FrameBufferAttachmentBase::setupAttachment(this, a2, a3, a4, 0, 0);
  switch ( *((_DWORD *)v4 + 17) )
  {
    case 1:
      v8 = *((_DWORD *)v4 + 2);
      v9 = *(_DWORD *)(v8 + 68);
      v10 = *(_DWORD *)(v9 - 4) + 36064;
      v11 = 0x4000;
      *((_DWORD *)v4 + 21) = 0x4000;
      *((_DWORD *)v4 + 22) = v10;
      *(_DWORD *)(v8 + 68) = v9 - 4;
      break;
    case 2:
      v12 = 36096;
      v11 = 256;
      goto LABEL_10;
    case 3:
      v12 = 36128;
      v11 = 1024;
    case 4:
      v12 = 33306;
      v11 = 1280;
LABEL_10:
      *((_DWORD *)v4 + 21) = v11;
      *((_DWORD *)v4 + 22) = v12;
    default:
      v11 = *((_DWORD *)v4 + 21);
  }
  *(_DWORD *)(*((_DWORD *)v4 + 2) + 48) |= v11;
    mce::FrameBufferAttachmentBase::allocateTexture(v4, v6, v5);
    v13 = mce::Texture::getInternalTexture(v5);
    if ( *((_BYTE *)v4 + 72) )
    {
      mce::glFramebufferTexture2DMultisampleMCE(
        (mce *)0x8D40,
        *((_DWORD *)v4 + 22),
        0xDE1u,
        v13,
        0,
        *((_DWORD *)v4 + 9),
        v17);
    }
    else
      v15 = *((_BYTE *)v4 + 4);
      if ( *((_DWORD *)v4 + 9) >= 2 )
        v16 = 37120;
      else
        v16 = 3553;
      glad_glFramebufferTexture2D(36160, *((_DWORD *)v4 + 22), v16, v13);
    result = 1;
    *((_BYTE *)v4 + 76) = 1;
    result = j_j_j__ZN3mce24FrameBufferAttachmentOGL20allocateRenderBufferEv(v4);
  return result;
}


_BOOL4 __fastcall mce::Mesh::isTemporary(mce::Mesh *this)
{
  return *((_DWORD *)this + 19) != 0;
}


_BOOL4 __fastcall mce::VertexFormat::hasField(_BYTE *a1, char a2)
{
  return (*a1 & (1 << a2)) != 0;
}


int __fastcall mce::RenderMaterial::resolveTextures(__int64 this)
{
  __int64 v1; // kr00_8@1
  bool v2; // zf@1
  unsigned int v3; // r6@4

  v1 = this;
  LODWORD(this) = *(_BYTE *)(this + 64);
  v2 = (_DWORD)this == 0;
  if ( (_DWORD)this )
  {
    this = *(_QWORD *)(v1 + 68);
    v2 = HIDWORD(this) == (_DWORD)this;
  }
  if ( !v2 )
    v3 = 0;
    do
    {
      mce::RenderMaterial::_resolveTexture((mce::RenderMaterial *)v1, v3++, (mce::TextureGroup *)HIDWORD(v1));
      LODWORD(this) = 954437177 * ((signed int)((*(_QWORD *)(v1 + 68) >> 32) - *(_QWORD *)(v1 + 68)) >> 2);
    }
    while ( v3 < (unsigned int)this );
  return this;
}


int __fastcall mce::TextureGroup::trimLRUCache(int result)
{
  int v1; // r8@1
  int v2; // r6@1
  int v3; // r0@2
  _DWORD *v4; // r2@2
  unsigned int v5; // r1@5
  unsigned int v6; // r7@5
  _DWORD *v7; // r9@6
  int v8; // r4@6
  bool v9; // zf@7
  int i; // r4@15

  v1 = result;
  v2 = *(_DWORD *)(result + 64);
  if ( v2 )
  {
    v3 = 0;
    v4 = *(_DWORD **)(v2 + 12);
    while ( v4 != (_DWORD *)(v2 + 12) )
    {
      v4 = (_DWORD *)*v4;
      ++v3;
    }
    v6 = *(_QWORD *)v2 >> 32;
    v5 = *(_QWORD *)v2;
    if ( v6 <= v5 )
      v7 = (_DWORD *)(v2 + 8);
      result = *(_QWORD *)v2 >> 32;
    else
      v8 = ~v3;
      do
      {
        v9 = ++v8 == 0;
        if ( v8 )
        {
          v5 = *(_DWORD *)(v2 + 16);
          v9 = *(_DWORD *)(v5 + 20) == *(_DWORD *)(v2 + 8);
        }
        if ( v9 )
          break;
        if ( !*(_DWORD *)(v2 + 56) )
          sub_21E5F48();
        (*(void (__fastcall **)(int, unsigned int))(v2 + 60))(v2 + 48, v5 + 8);
        result = *(_QWORD *)v2 >> 32;
        v5 = *(_QWORD *)v2;
      }
      while ( result > v5 );
    ++*v7;
    if ( v6 != result )
      for ( i = *(_DWORD *)(v1 + 44); i; i = *(_DWORD *)i )
        result = (*(int (**)(void))(**(_DWORD **)(i + 4) + 8))();
  }
  return result;
}


mce::FrameBufferAttachmentBase *__fastcall mce::RenderStageWithFrameBufferObject::setupStage(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  mce::FrameBufferAttachmentBase *result; // r0@1

  v3 = a1 + 28;
  v4 = a3;
  v5 = a2;
  mce::FrameBufferObject::bindFrameBuffer((mce::FrameBufferObject *)(a1 + 28));
  v6 = *(_DWORD *)(v5 + 12);
  v7 = *(_DWORD *)(v5 + 20);
  result = (mce::FrameBufferAttachmentBase *)mce::RenderContext::setViewport();
  if ( v4 == 1 )
  {
    mce::FrameBufferObject::clearColorAttachment(v3, 0);
    result = j_j_j__ZNK3mce17FrameBufferObject27clearDepthStencilAttachmentEPKNS_12ViewportInfoE(v3, 0);
  }
  return result;
}


int __fastcall mce::Mesh::setIndexBufferUsageMode(int result, int a2)
{
  *(_DWORD *)(result + 96) = a2;
  return result;
}


int __fastcall mce::RenderContext::beginFrame(mce::RenderContext *this)
{
  mce::RenderContextBase *v1; // r4@1

  v1 = this;
  *((_BYTE *)this + 372) = 1;
  *((_BYTE *)this + 164) = 0;
  mce::RenderContextOGL::unbindAllTextures(this);
  return j_j_j__ZN3mce17RenderContextBase10beginFrameEv(v1);
}


mce::TexturePtr *__fastcall mce::TexturePtr::~TexturePtr(mce::TexturePtr *this)
{
  mce::TexturePtr *v1; // r4@1
  mce::TextureGroup *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E8D98;
  v2 = (mce::TextureGroup *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    mce::TextureGroup::_removeRef(v2, v1);
    *((_DWORD *)v1 + 1) = 0;
  }
  *((_DWORD *)v1 + 2) = 0;
  v3 = *((_DWORD *)v1 + 3);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  return v1;
}


int __fastcall mce::FrameBufferObjectOGL::clearDepthStencilAttachment(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  mce::FrameBufferAttachmentBase *v7; // r0@1
  int v12; // r4@1
  char *v13; // r0@2
  float v15; // [sp+0h] [bp-38h]@2
  __int64 v16; // [sp+8h] [bp-30h]@2

  v4 = a1;
  _R5 = a3;
  _R6 = a2;
  v7 = *(mce::FrameBufferAttachmentBase **)(a1 + 32);
  __asm { VMOV            S16, R5 }
  v12 = a4;
  __asm { VMOV            S18, R6 }
  if ( v7 )
  {
    v13 = mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription(v7);
    __asm
    {
      VSTR            S18, [SP,#0x38+var_38]
      VSTR            S16, [SP,#0x38+var_34]
    }
    v16 = *((_QWORD *)v13 + 6);
    mce::FrameBufferObjectOGL::clearFrameBufferInternal(v4, &v15, *(_DWORD *)(*(_DWORD *)(v4 + 32) + 84), v12);
  }
  return j_j_j__ZNK3mce21FrameBufferObjectBase27clearDepthStencilAttachmentEffPKNS_12ViewportInfoE();
}


mce::FeatureSupportOGL *__fastcall mce::FeatureSupportOGL::~FeatureSupportOGL(mce::FeatureSupportOGL *this)
{
  mce::FeatureSupportOGL *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v1;
}


void __fastcall mce::EffectConstants::~EffectConstants(mce::EffectConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


void __fastcall mce::QuadIndexBuffer::~QuadIndexBuffer(mce::QuadIndexBuffer *this)
{
  mce::QuadIndexBuffer::~QuadIndexBuffer(this);
}


int __fastcall mce::TextureContainer::updateDescriptionFromImage(mce::TextureContainer *this)
{
  char *v1; // r6@1
  char *v2; // r0@1
  int v3; // r0@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r5@1
  int result; // r0@1
  int v13; // [sp+0h] [bp-38h]@1

  v1 = (char *)this + 16;
  v2 = j_mce::ImageBuffer::getImageDescription(*(mce::ImageBuffer **)this);
  v3 = j_mce::TextureDescription::TextureDescription((int)&v13, (int)v2, 8);
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  v3 += 16;
  *(_DWORD *)v1 = v4;
  *((_DWORD *)v1 + 1) = v5;
  *((_DWORD *)v1 + 2) = v6;
  *((_DWORD *)v1 + 3) = v7;
  v1 += 16;
  v8 = *(_DWORD *)(v3 + 4);
  v9 = *(_DWORD *)(v3 + 8);
  v10 = *(_DWORD *)(v3 + 12);
  v11 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)v1 = *(_DWORD *)v3;
  *((_DWORD *)v1 + 1) = v8;
  *((_DWORD *)v1 + 2) = v9;
  *((_DWORD *)v1 + 3) = v10;
  *((_DWORD *)v1 + 4) = v11;
  result = *(_BYTE *)(v3 + 20);
  v1[20] = result;
  return result;
}


void __fastcall mce::SwapChainBase::getClosestSupportedSampleDescription(int a1, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(a2 + 8);
  mce::RenderDevice::getClosestSupportedSampleDescription(a1);
}


unsigned int __fastcall mce::ImageBuffer::get(mce::ImageBuffer *this, unsigned int a2)
{
  return *(_DWORD *)this + *((_DWORD *)this + 3) * a2;
}


char *__fastcall mce::TextureGroup::findOrLoadTexture(mce::TextureGroup *this, const ResourceLocation *a2)
{
  mce::TextureGroup *v2; // r9@1
  char *v3; // r10@1
  char *v4; // r0@1
  const void **v5; // r8@1
  char *v6; // r6@1
  const void *v7; // r7@2
  char *v8; // r11@2
  size_t v9; // r5@2
  _DWORD *v10; // r0@4
  size_t v11; // r4@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  char *v19; // r0@20
  char *v20; // r7@20
  const void *v21; // r5@21
  char *v22; // r9@21
  size_t v23; // r6@21
  _DWORD *v24; // r0@23
  size_t v25; // r4@23
  size_t v26; // r2@23
  int v27; // r0@25
  _DWORD *v28; // r1@32
  unsigned int v29; // r4@32
  unsigned int v30; // r5@32
  size_t v31; // r2@32
  int v32; // r0@34

  v2 = this;
  v3 = (char *)this + 4;
  v4 = (char *)*((_DWORD *)this + 2);
  v5 = (const void **)a2;
  v6 = v3;
  if ( v4 )
  {
    v7 = *(const void **)a2;
    v8 = v3;
    v9 = *(_DWORD *)(*(_DWORD *)a2 - 12);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = (_DWORD *)*((_DWORD *)v6 + 4);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = (char *)*((_DWORD *)v6 + 2);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 == v3 )
    goto LABEL_42;
  v14 = (_DWORD *)*((_DWORD *)v6 + 4);
  v15 = *((_DWORD *)*v5 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v5 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v5, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v3;
LABEL_42:
    mce::TextureGroup::loadTexture(v2, (const ResourceLocation *)v5, 0);
    v19 = (char *)*((_DWORD *)v2 + 2);
    v20 = v3;
    if ( v19 )
      v21 = *v5;
      v22 = v3;
      v23 = *((_DWORD *)*v5 - 3);
      do
        v20 = v19;
        while ( 1 )
          v24 = (_DWORD *)*((_DWORD *)v20 + 4);
          v25 = *(v24 - 3);
          v26 = *(v24 - 3);
          if ( v25 > v23 )
            v26 = v23;
          v27 = memcmp(v24, v21, v26);
          if ( !v27 )
            v27 = v25 - v23;
          if ( v27 >= 0 )
            break;
          v20 = (char *)*((_DWORD *)v20 + 3);
          if ( !v20 )
          {
            v20 = v22;
            goto LABEL_31;
          }
        v19 = (char *)*((_DWORD *)v20 + 2);
        v22 = v20;
      while ( v19 );
LABEL_31:
    if ( v20 != v3 )
      v28 = (_DWORD *)*((_DWORD *)v20 + 4);
      v29 = *((_DWORD *)*v5 - 3);
      v30 = *(v28 - 3);
      v31 = *((_DWORD *)*v5 - 3);
      if ( v29 > v30 )
        v31 = *(v28 - 3);
      v32 = memcmp(*v5, v28, v31);
      if ( !v32 )
        v32 = v29 - v30;
      if ( v32 >= 0 )
        v3 = v20;
      v6 = v3;
  return v6;
}


int __fastcall mce::ShaderOGL::createAndAttachPrograms(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = glad_glCreateProgram();
  *((_DWORD *)v1 + 5) = v2;
  glad_glAttachShader(v2, *(_DWORD *)(*((_DWORD *)v1 + 1) + 12));
  glad_glAttachShader(*((_DWORD *)v1 + 5), *(_DWORD *)(*((_DWORD *)v1 + 2) + 12));
  result = mce::ShaderProgram::isValid(*((mce::ShaderProgram **)v1 + 3));
  if ( result == 1 )
    result = glad_glAttachShader(*((_DWORD *)v1 + 5), *(_DWORD *)(*((_DWORD *)v1 + 3) + 12));
  return result;
}


void __fastcall mce::_getFullPath(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  unsigned int v7; // r6@5
  int v8; // r2@6
  unsigned int v9; // r3@6
  __int64 v10; // kr00_8@7
  unsigned int v11; // r1@7
  const void **v12; // r0@9
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  int v19; // r2@23
  void *v20; // r0@23
  void *v21; // r0@24
  void *v22; // r0@25
  void *v23; // r0@26
  void *v24; // r0@28
  char *v25; // r0@29
  char *v26; // r0@30
  void *v27; // r0@32
  char *v28; // r0@33
  char *v29; // r0@34
  unsigned int *v30; // r2@48
  signed int v31; // r1@50
  unsigned int *v32; // r2@52
  signed int v33; // r1@54
  unsigned int *v34; // r2@56
  signed int v35; // r1@58
  unsigned int *v36; // r2@60
  signed int v37; // r1@62
  unsigned int *v38; // r2@64
  signed int v39; // r1@66
  unsigned int *v40; // r2@68
  signed int v41; // r1@70
  unsigned int *v42; // r2@72
  signed int v43; // r1@74
  unsigned int *v44; // r2@104
  signed int v45; // r1@106
  unsigned int *v46; // r2@108
  signed int v47; // r1@110
  unsigned int *v48; // r2@112
  signed int v49; // r1@114
  char *v50; // [sp+0h] [bp-58h]@32
  char *v51; // [sp+4h] [bp-54h]@32
  int v52; // [sp+8h] [bp-50h]@32
  int v53; // [sp+Ch] [bp-4Ch]@32
  char *v54; // [sp+10h] [bp-48h]@28
  char *v55; // [sp+14h] [bp-44h]@28
  int v56; // [sp+18h] [bp-40h]@28
  int v57; // [sp+1Ch] [bp-3Ch]@28
  int v58; // [sp+20h] [bp-38h]@7
  unsigned int v59; // [sp+24h] [bp-34h]@6
  int v60; // [sp+28h] [bp-30h]@23
  int v61; // [sp+2Ch] [bp-2Ch]@23
  int v62; // [sp+30h] [bp-28h]@23
  char *v63; // [sp+34h] [bp-24h]@1
  char *v64; // [sp+38h] [bp-20h]@1
  int v65; // [sp+3Ch] [bp-1Ch]@1
  int v66; // [sp+40h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  sub_119C854((int *)&v63, a1);
  v64 = v63;
  v63 = (char *)&unk_28898CC;
  v65 = 0;
  Resource::getPath((Resource *)&v66, (const ResourceLocation *)&v64);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v66);
  v4 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v66 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v64 - 12;
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v64 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v63 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  if ( !*(_DWORD *)(*v3 - 12) )
    v7 = sub_119CA58(v2, "/glsl", 0, 5u);
    if ( v7 != -1 )
      sub_119C8C4((void **)&v59, v2, 0, v7);
      v8 = v7 + 5;
      v9 = *(_DWORD *)(*v2 - 12);
      if ( v9 < v7 + 5 )
        sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
      sub_119C8C4((void **)&v58, v2, v8, 0xFFFFFFFF);
      v10 = *(_QWORD *)(v59 - 12);
      v11 = *(_DWORD *)(v58 - 12) + v10;
      if ( v11 > HIDWORD(v10) && v11 <= *(_DWORD *)(v58 - 8) )
        v12 = sub_119C984((const void **)&v58, 0, v59, (_BYTE *)v10);
      else
        v12 = sub_119C8A4((const void **)&v59, (const void **)&v58);
      v19 = (int)*v12;
      *v12 = &unk_28898CC;
      v60 = v19;
      v61 = 0;
      Resource::getPath((Resource *)&v62, (const ResourceLocation *)&v60);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v62);
      v20 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
      {
        v30 = (unsigned int *)(v62 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        }
        else
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      }
      v21 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v60 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v58 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v59 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
    if ( !*(_DWORD *)(*v3 - 12) )
      sub_119C854((int *)&v54, v2);
      v55 = v54;
      v54 = (char *)&unk_28898CC;
      v56 = 1;
      Resource::getPath((Resource *)&v57, (const ResourceLocation *)&v55);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v57);
      v24 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v57 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      v25 = v55 - 12;
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v55 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v26 = v54 - 12;
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v54 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      if ( !*(_DWORD *)(*v3 - 12) )
        sub_119C854((int *)&v50, v2);
        v51 = v50;
        v50 = (char *)&unk_28898CC;
        v52 = 7;
        Resource::getPath((Resource *)&v53, (const ResourceLocation *)&v51);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v53);
        v27 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v53 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
          }
          else
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v27);
        v28 = v51 - 12;
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v51 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v28);
        v29 = v50 - 12;
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v50 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v29);
}


int __fastcall mce::BlendStateDescription::BlendStateDescription(int result)
{
  *(_DWORD *)result = 134416390;
  *(_WORD *)(result + 4) = 15;
  *(_BYTE *)(result + 6) = 0;
  return result;
}


void **__fastcall mce::RenderMaterial::textureLocationToResourceLocation(int a1, int a2, int a3, int *a4)
{
  int *v4; // r4@1
  int v5; // r8@1
  void **result; // r0@3
  unsigned int v7; // r5@7
  int v8; // r6@7
  _DWORD *v9; // r9@7
  int v10; // r4@7
  size_t v11; // r7@7
  _DWORD *v12; // r0@7
  _DWORD *v13; // r1@10
  void *v14; // [sp+0h] [bp-28h]@5
  void *v15; // [sp+4h] [bp-24h]@4
  void *v16; // [sp+8h] [bp-20h]@2

  v4 = a4;
  v5 = a1;
  switch ( a3 )
  {
    case 0:
      sub_21E8AF4((int *)&v16, a4);
      *(_DWORD *)v5 = v16;
      v16 = &unk_28898CC;
      goto LABEL_6;
    case 1:
      sub_21E8AF4((int *)&v15, a4);
      *(_DWORD *)v5 = v15;
      v15 = &unk_28898CC;
    case 2:
      sub_21E8AF4((int *)&v14, a4);
      *(_DWORD *)v5 = v14;
      v14 = &unk_28898CC;
LABEL_6:
      result = (void **)1;
      *(_DWORD *)(v5 + 4) = 1;
      break;
    case 3:
      v7 = sub_21B417C((int *)*a4, *(_DWORD *)(*a4 - 12), -955291385);
      v8 = *(_DWORD *)(dword_27E8B6C + 4 * unk_27E8B70);
      v9 = (_DWORD *)*v4;
      v10 = *(_DWORD *)v8;
      v11 = *(v9 - 3);
      v12 = (_DWORD *)(*(_DWORD *)v8 + 12);
      while ( 1 )
      {
        if ( *v12 == v7 )
        {
          v13 = *(_DWORD **)(v10 + 4);
          if ( v11 == *(v13 - 3) && !memcmp(v9, v13, v11) )
            break;
        }
        v8 = v10;
        v12 = (_DWORD *)(*(_DWORD *)v10 + 12);
        v10 = *(_DWORD *)v10;
      }
      result = mce::TextureGroup::getLocationFor((void **)v5, *(_DWORD *)(*(_DWORD *)v8 + 8));
    default:
      result = (void **)&unk_28898CC;
      *(_QWORD *)v5 = (unsigned int)&unk_28898CC;
  }
  return result;
}


int __fastcall mce::FrameBufferAttachmentBase::setupAttachment(int result, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, const mce::Texture *a4, unsigned __int8 a5, unsigned __int16 a6)
{
  *(_DWORD *)result = a4;
  *(_WORD *)(result + 6) = a6;
  *(_BYTE *)(result + 4) = a5;
  *(_BYTE *)(result + 76) = 1;
  return result;
}


int __fastcall mce::FrameBufferObjectOGL::resolveFrameBuffer(mce::FrameBufferObjectOGL *this, const mce::FrameBufferObject *a2)
{
  const mce::FrameBufferObject *v2; // r4@1
  mce::FrameBufferObjectOGL *v3; // r5@1
  int v4; // r7@1
  __int64 v5; // r2@1
  __int64 v6; // ST08_8@1

  v2 = a2;
  v3 = this;
  mce::FrameBufferObjectBase::resolveFrameBuffer(this, a2);
  v4 = *((_DWORD *)v2 + 12);
  glad_glBindFramebuffer(36008, *(_QWORD *)((char *)v3 + 44));
  glad_glBindFramebuffer(36009, *((_DWORD *)v2 + 11));
  glad_glCheckFramebufferStatus(36008);
  v5 = *((_QWORD *)v3 + 1);
  v6 = *((_QWORD *)v2 + 1);
  return glad_glBlitFramebuffer(0, 0);
}


int __fastcall mce::FlipbookTextureConstants::FlipbookTextureConstants(mce::FlipbookTextureConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8B9C;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


signed int __fastcall mce::BufferBase::isValid(mce::BufferBase *this)
{
  return 1;
}


mce::RenderMaterialGroup *__fastcall mce::RenderMaterialGroup::~RenderMaterialGroup(mce::RenderMaterialGroup *this)
{
  mce::RenderMaterialGroup *v1; // r8@1
  int i; // r0@1
  int v3; // r2@2
  int v4; // r7@3
  void *v5; // r5@4
  int v6; // r4@4
  unsigned int *v7; // r1@5
  unsigned int v8; // r0@7
  unsigned int *v9; // r6@11
  unsigned int v10; // r0@13
  char *v11; // r0@19
  int v12; // r1@22
  void *v13; // r0@22
  void *v14; // r0@23
  void *v15; // r4@24
  char *v16; // r0@25
  unsigned int *v18; // r2@29
  signed int v19; // r1@31

  v1 = this;
  *(_DWORD *)this = &off_26DCCA0;
  for ( i = *((_DWORD *)this + 17); i; i = *(_DWORD *)i )
  {
    v3 = *(_DWORD *)(i + 4);
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
  }
  v4 = *((_DWORD *)v1 + 29);
  while ( v4 )
    v5 = (void *)v4;
    v6 = *(_DWORD *)(v4 + 12);
    v4 = *(_DWORD *)v4;
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    operator delete(v5);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 108), 4 * (*(_QWORD *)((char *)v1 + 108) >> 32));
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 30) = 0;
  v11 = (char *)*((_DWORD *)v1 + 27);
  if ( v11 && (char *)v1 + 132 != v11 )
    operator delete(v11);
  v12 = *((_DWORD *)v1 + 22);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)*((_DWORD *)v1 + 17);
  if ( v14 )
    do
      v15 = *(void **)v14;
      operator delete(v14);
      v14 = v15;
    while ( v15 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v16 = (char *)*((_DWORD *)v1 + 15);
  if ( v16 && (char *)v1 + 84 != v16 )
    operator delete(v16);
  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>,std::_Select1st<std::pair<std::string const,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>>>::_M_erase(
    (int)v1 + 36,
    *((_DWORD *)v1 + 11));
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable((int)v1 + 8);
  AppPlatformListener::~AppPlatformListener(v1);
  return v1;
}


_BOOL4 __fastcall mce::RenderMaterial::hasState(int a1, char a2)
{
  return (*(_DWORD *)(a1 + 32) & (1 << (a2 & 0x1F))) != 0;
}


int __fastcall mce::MathUtility::getBestHorizDirFromViewMatrix(int a1)
{
  int result; // r0@1

  _R0 = j_atan2f(COERCE_FLOAT(*(_DWORD *)(a1 + 8) ^ 0x80000000), *(float *)a1);
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::RADDEG;
  __asm
  {
    VLDR            S2, [R1]
    VMUL.F32        S0, S0, S2
    VLDR            S2, =180.0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall mce::FrameBufferAttachmentDescription::setFromTextureDescription(mce::FrameBufferAttachmentDescription *this, const mce::TextureDescription *a2)
{
  char *v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r4@1
  int v6; // r5@1
  mce::FrameBufferAttachmentDescription *v7; // r7@1
  char *v8; // r0@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r5@1
  int v12; // r6@1
  signed int result; // r0@1

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v6 = *((_DWORD *)a2 + 3);
  v2 = (char *)a2 + 16;
  v7 = this;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v4;
  *((_DWORD *)this + 2) = v5;
  *((_DWORD *)this + 3) = v6;
  v8 = (char *)this + 16;
  v9 = *((_DWORD *)v2 + 1);
  v10 = *((_DWORD *)v2 + 2);
  v11 = *((_DWORD *)v2 + 3);
  v12 = *((_DWORD *)v2 + 4);
  *(_DWORD *)v8 = *(_DWORD *)v2;
  *((_DWORD *)v8 + 1) = v9;
  *((_DWORD *)v8 + 2) = v10;
  *((_DWORD *)v8 + 3) = v11;
  *((_DWORD *)v8 + 4) = v12;
  v8[20] = v2[20];
  result = mce::TextureHelper::frameBufferAttachmentTypeFromTextureFormat(*((_DWORD *)v7 + 2));
  *((_DWORD *)v7 + 14) = result;
  return result;
}


void __fastcall mce::ShaderProgramOGL::compileShaderProgram(int a1)
{
  int v1; // r10@1
  int v2; // r8@1
  const char *v3; // r6@2
  signed int v4; // r7@4
  signed int v5; // r0@5
  const char *v6; // r2@5
  int v7; // r6@8
  bool v8; // nf@9
  unsigned __int8 v9; // vf@9
  char *v10; // r5@14
  int v11; // r0@15
  char *v12; // r7@17
  int v13; // r5@17
  char v14; // r1@19
  char *v15; // r0@21
  char *v16; // r0@21
  char *v17; // r0@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  void **v22; // [sp+0h] [bp-4E8h]@14
  void **v23; // [sp+4h] [bp-4E4h]@14
  int v24; // [sp+8h] [bp-4E0h]@14
  int v25; // [sp+Ch] [bp-4DCh]@14
  int v26; // [sp+10h] [bp-4D8h]@14
  int v27; // [sp+14h] [bp-4D4h]@14
  int v28; // [sp+18h] [bp-4D0h]@14
  int v29; // [sp+1Ch] [bp-4CCh]@14
  int v30; // [sp+20h] [bp-4C8h]@14
  int v31; // [sp+24h] [bp-4C4h]@14
  char *v32; // [sp+28h] [bp-4C0h]@14
  void **v33; // [sp+2Ch] [bp-4BCh]@14
  int v34; // [sp+9Ch] [bp-44Ch]@14
  __int16 v35; // [sp+A0h] [bp-448h]@14
  int v36; // [sp+A4h] [bp-444h]@14
  int v37; // [sp+A8h] [bp-440h]@14
  int v38; // [sp+ACh] [bp-43Ch]@14
  int v39; // [sp+B0h] [bp-438h]@14
  char *s; // [sp+BCh] [bp-42Ch]@14
  int v41; // [sp+C0h] [bp-428h]@13
  char v42[512]; // [sp+C4h] [bp-424h]@9
  int v43[128]; // [sp+2C4h] [bp-224h]@7

  v1 = a1;
  v2 = a1 + 44;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    v3 = *(const char **)(a1 + 16);
    if ( *((_DWORD *)v3 - 3) )
    {
      *(_DWORD *)(a1 + 12) = glad_glCreateShader(dword_260FA00[*(_BYTE *)(a1 + 8)]);
      if ( !strncmp(v3, "// __multiversion__", 0x13u) )
      {
        v5 = gl::isOpenGLES3(0);
        v4 = 1;
        v6 = "#version 300 es\n";
        if ( !v5 )
          v6 = "#version 100\n";
        v43[0] = (int)v6;
      }
      else
        v4 = 0;
      v43[v4] = (int)v3;
      v7 = 0;
      do
        *(_DWORD *)&v42[4 * v7] = strlen((const char *)v43[v7]);
        v9 = __OFSUB__(v7, v4);
        v8 = v7++ - v4 < 0;
      while ( v8 ^ v9 );
      glad_glShaderSource(*(_DWORD *)(v1 + 12), v4 + 1, v43, v42);
      glad_glCompileShader(*(_DWORD *)(v1 + 12));
      glad_glGetShaderiv(*(_DWORD *)(v1 + 12), 35713, v2);
      if ( *(_DWORD *)(v1 + 44) )
        *(_BYTE *)(v1 + 9) = 1;
        v41 = 0;
        glad_glGetShaderiv(*(_DWORD *)(v1 + 12), 35716, &v41);
        if ( v41 >= 2 )
        {
          s = (char *)sub_21E757C(v41, 0);
          sub_21E849C((char *)&s, v41, 0);
          glad_glGetShaderInfoLog(*(_DWORD *)(v1 + 12), v41, &v41, s);
          sub_21B6308((int)&v33);
          v33 = &off_26D3AF0;
          v34 = 0;
          v35 = 0;
          v38 = 0;
          v39 = 0;
          v36 = 0;
          v37 = 0;
          v22 = (void **)off_26D3F2C;
          *(void ***)((char *)&v22 + *((_DWORD *)off_26D3F2C - 3)) = (void **)off_26D3F30;
          sub_21B5AD4((int)*(v22 - 3) + (_DWORD)&v22, 0);
          v22 = &off_26D3F44;
          v33 = &off_26D3F58;
          v29 = 0;
          v27 = 0;
          v28 = 0;
          v25 = 0;
          v26 = 0;
          v23 = &off_26D40A8;
          v24 = 0;
          sub_21C9520((unsigned int **)&v30);
          v23 = &off_27734E8;
          v31 = 16;
          v32 = (char *)&unk_28898CC;
          sub_21B5AD4((int)*(v22 - 3) + (_DWORD)&v22, (unsigned int)&v22 | 4);
          sub_21CBF38((char *)&v22, (int)"Compiler error:\n ", 17);
          v10 = s;
          if ( s )
          {
            v11 = strlen(s);
            sub_21CBF38((char *)&v22, (int)v10, v11);
          }
          else
            sub_21B583C((int)*(v22 - 3) + (_DWORD)&v22, *(_DWORD *)((char *)*(v22 - 3) + (_DWORD)&v22 + 20) | 1);
          sub_21CBF38((char *)&v22, (int)" @ ", 3);
          sub_21CBF38((char *)&v22, (int)"compileShaderProgram", 20);
          sub_21CBF38((char *)&v22, (int)" (", 2);
          sub_21CBF38(
            (char *)&v22,
            (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\systems\\Renderer\\Renderer.Shared\\..\\..\\..\\..\\."
                 ".\\src-deps\\Renderer\\HAL\\OGL\\ShaderProgramOGL.cpp",
            137);
          sub_21CBF38((char *)&v22, (int)":", 1);
          v12 = (char *)sub_21CC43C(&v22, 182);
          sub_21CBF38(v12, (int)")", 1);
          v13 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
          if ( !v13 )
            sub_21E5824();
          if ( *(_BYTE *)(v13 + 28) )
            v14 = *(_BYTE *)(v13 + 39);
            sub_21B50F0(v13);
            v14 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v13 + 24))(v13, 10);
          v15 = sub_21CBC4C(v12, v14);
          sub_21CB78C(v15);
          v22 = off_26D3F28;
          *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v22) = off_26D3F34;
          v16 = v32 - 12;
          if ( (int *)(v32 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v32 - 4);
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
              j_j_j_j__ZdlPv_9(v16);
          sub_21C802C((unsigned int **)&v30);
          sub_21B6560(&v33);
          v17 = s - 12;
          if ( (int *)(s - 12) != &dword_28898C0 )
            v20 = (unsigned int *)(s - 4);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
        }
        *(_BYTE *)(v1 + 9) = 0;
    }
  }
}


int __fastcall mce::BufferBase::updateBuffer(int result, mce::RenderContext *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a5;
  return result;
}


int __fastcall mce::BufferOGL::recreateBuffer(mce::BufferOGL *this, mce::RenderContext *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  mce::BufferOGL *v5; // r4@1
  unsigned int v6; // r6@1
  unsigned int v7; // r2@1
  const void *v8; // r8@1
  mce::RenderContext *v9; // r7@1
  int v10; // r1@2
  char *v11; // r9@3
  int v12; // r3@4
  unsigned int v13; // r1@4
  unsigned int v14; // r6@7
  int result; // r0@7

  v5 = this;
  v6 = a3;
  v7 = *(_BYTE *)this;
  v8 = a4;
  v9 = a2;
  if ( v7 >= 2 )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", *(_BYTE *)this, 2, (int)a4);
  v10 = *((_DWORD *)this + 5);
  if ( *((_DWORD *)v9 + v7 + 70) == v10 )
  {
    v11 = (char *)this + 24;
  }
  else
    glad_glBindBuffer(*((_DWORD *)this + 6), v10);
    v13 = *(_BYTE *)v5;
    if ( v13 >= 2 )
      sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v13, 2, v12);
    *((_DWORD *)v9 + v13 + 70) = *((_DWORD *)v5 + 5);
    if ( v13 == 1 )
      *((_DWORD *)v9 + 89) = *((_DWORD *)v5 + 1);
  *((_DWORD *)v5 + 1) = v6;
  *((_DWORD *)v5 + 2) = a5;
  v14 = v6 * a5;
  glad_glBufferData(*(_DWORD *)v11, v14, 0, *((_DWORD *)v5 + 7));
  result = glad_glBufferData(*(_DWORD *)v11, v14, v8, *((_DWORD *)v5 + 7));
  *((_DWORD *)v5 + 3) = v14;
  return result;
}


mce::RenderContextBase *__fastcall mce::RenderContextBase::RenderContextBase(mce::RenderContextBase *this)
{
  mce::RenderContextBase *v1; // r4@1
  mce::RenderContextBase *result; // r0@1

  v1 = this;
  mce::RenderContextStateBase::RenderContextStateBase(this);
  mce::VertexFormat::VertexFormat((mce::RenderContextBase *)((char *)v1 + 168));
  mce::ImmediateBuffer::ImmediateBuffer((mce::RenderContextBase *)((char *)v1 + 196));
  *((_BYTE *)v1 + 228) &= 0xF0u;
  *((_BYTE *)v1 + 229) = 0;
  *((_DWORD *)v1 + 58) = 0;
  mce::SwapChainBase::SwapChainBase((mce::RenderContextBase *)((char *)v1 + 236));
  result = v1;
  *((_DWORD *)v1 + 66) = 0;
  *((_BYTE *)v1 + 268) = 0;
  return result;
}


int __fastcall mce::SwapChainBase::getMultisampleQualityLevels(int a1)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(a1 + 8);
  return j_j_j__ZNK3mce12RenderDevice27getMultisampleQualityLevelsENS_13TextureFormatERSt6vectorINS_17SampleDescriptionESaIS3_EE();
}


int __fastcall mce::RenderGraph::render(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // r9@1
  int result; // r0@1
  unsigned int *v3; // r4@1
  unsigned __int64 v4; // kr00_8@1
  __int64 v5; // kr08_8@2
  unsigned int v6; // r7@2
  int v7; // r6@2
  int *v8; // r0@2
  int v9; // r11@3
  bool v10; // zf@8
  _DWORD *v11; // r0@12
  int i; // r4@14
  unsigned __int64 j; // r4@17
  bool v14; // zf@18
  int k; // r4@23
  int v16; // [sp+8h] [bp-28h]@1

  v1 = a1;
  v4 = *a1;
  result = *a1 >> 32;
  v3 = (unsigned int *)v4;
  v16 = result;
  if ( (_DWORD)v4 != result )
  {
    do
    {
      v5 = *(unsigned __int64 *)((char *)v1 + 12);
      v6 = *v3;
      v7 = *v3 % (*(unsigned __int64 *)((char *)v1 + 12) >> 32);
      v8 = *(int **)(v5 + 4 * v7);
      if ( !v8 )
        goto LABEL_12;
      v9 = *v8;
      while ( v6 != *(_DWORD *)(v9 + 4) )
      {
        if ( *(_DWORD *)v9 )
        {
          v8 = (int *)v9;
          v9 = *(_DWORD *)v9;
          if ( *(_DWORD *)(v5 + 4) % HIDWORD(v5) == v7 )
            continue;
        }
      }
      v10 = v8 == 0;
      if ( v8 )
        v10 = *v8 == 0;
      if ( v10 )
LABEL_12:
        v11 = operator new(8u);
        *v11 = 0;
        v11[1] = v6;
        std::_Hashtable<mce::RenderStage *,mce::RenderStage *,std::allocator<mce::RenderStage *>,std::__detail::_Identity,std::equal_to<mce::RenderStage *>,std::hash<mce::RenderStage *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
          (int)v1 + 12,
          v7,
          v6,
          (int)v11);
      ++v3;
      result = v16;
    }
    while ( v3 != (unsigned int *)v16 );
  }
  for ( i = *((_DWORD *)v1 + 5); i; i = *(_DWORD *)i )
    result = (*(int (**)(void))(**(_DWORD **)(i + 4) + 8))();
  for ( j = *v1; HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 4 )
    result = *(_DWORD *)j;
    v14 = *(_BYTE *)(*(_DWORD *)j + 22) == 0;
    if ( !*(_BYTE *)(*(_DWORD *)j + 22) )
      v14 = (unsigned int)*(_QWORD *)(result + 4) == *(_QWORD *)(result + 4) >> 32;
    if ( !v14 )
      (*(void (**)(void))(*(_DWORD *)result + 16))();
      (*(void (**)(void))(**(_DWORD **)j + 20))();
      result = (*(int (**)(void))(**(_DWORD **)j + 24))();
  for ( k = *((_DWORD *)v1 + 5); k; k = *(_DWORD *)k )
    result = (*(int (**)(void))(**(_DWORD **)(k + 4) + 12))();
  return result;
}


int __fastcall mce::Math::absMaxSigned(mce::Math *this, float _R1, float a3)
{
  int result; // r0@3

  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R0
    VABS.F32        S4, S0
    VABS.F32        S6, S2
    VCMPE.F32       S6, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


mce::DeviceInformationBase *__fastcall mce::RenderDevice::~RenderDevice(mce::RenderDevice *this)
{
  mce::RenderDevice *v1; // r4@1
  mce::RenderContext *v2; // r0@1
  void *v3; // r0@2

  v1 = this;
  v2 = (mce::RenderContext *)*((_DWORD *)this + 21);
  *((_DWORD *)v1 + 21) = 0;
  if ( v2 )
  {
    v3 = (void *)mce::RenderContext::~RenderContext(v2);
    operator delete(v3);
  }
  mce::FeatureSupportOGL::~FeatureSupportOGL((mce::RenderDevice *)((char *)v1 + 92));
  return j_j_j__ZN3mce16RenderDeviceBaseD2Ev(v1);
}


void __fastcall mce::InterFrameConstants::~InterFrameConstants(mce::InterFrameConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall mce::ShaderBase::isBuiltFrom(int a1, int *a2, const void **a3, const void **a4, const void **a5)
{
  int v5; // r4@1
  const void **v6; // r8@1
  const void **v7; // r7@1
  int *v8; // r5@1
  const void **v9; // r6@1
  int *v10; // r0@1
  char *v11; // r7@1
  size_t v12; // r2@1
  int v13; // r4@3
  const void **v14; // r6@5
  int *v15; // r0@5
  _DWORD *v16; // r0@5
  char *v17; // r6@5
  size_t v18; // r2@5
  const void **v19; // r7@9
  int *v20; // r0@9
  char *v21; // r5@9
  size_t v22; // r2@9
  int v23; // r0@11
  unsigned int *v25; // r2@19
  signed int v26; // r1@21
  unsigned int *v27; // r2@27
  signed int v28; // r1@29
  unsigned int *v29; // r2@35
  signed int v30; // r1@37
  void *v31; // [sp+0h] [bp-30h]@9
  void *v32; // [sp+4h] [bp-2Ch]@5
  void *s2; // [sp+8h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = *(const void ***)(a1 + 4);
  v10 = sub_21E8AF4((int *)&s2, a2);
  sub_21E72F0((const void **)v10, v7);
  v11 = (char *)s2;
  v12 = *((_DWORD *)*v9 - 3);
  if ( v12 == *((_DWORD *)s2 - 3) )
  {
    if ( !memcmp(*v9, s2, v12) )
    {
      v14 = *(const void ***)(v5 + 8);
      v15 = sub_21E8AF4((int *)&v32, v8);
      sub_21E72F0((const void **)v15, v6);
      v16 = *v14;
      v17 = (char *)v32;
      v18 = *(v16 - 3);
      if ( v18 == *((_DWORD *)v32 - 3) )
      {
        if ( !memcmp(v16, v32, v18) )
        {
          v19 = *(const void ***)(v5 + 12);
          v20 = sub_21E8AF4((int *)&v31, v8);
          sub_21E72F0((const void **)v20, a5);
          v21 = (char *)v31;
          v22 = *((_DWORD *)*v19 - 3);
          if ( v22 == *((_DWORD *)v31 - 3) && !memcmp(*v19, v31, v22) )
          {
            v13 = 1;
          }
          else
            v23 = mce::ShaderProgram::isValid(*(mce::ShaderProgram **)(v5 + 12));
            v21 = (char *)v31;
            v13 = v23 ^ 1;
          if ( (int *)(v21 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v21 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
            }
            else
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v21 - 12);
          v17 = (char *)v32;
        }
        else
          v13 = 0;
      }
      else
        v13 = 0;
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v17 - 12);
      v11 = (char *)s2;
    }
    else
      v13 = 0;
  }
  else
    v13 = 0;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v11 - 12);
  return v13;
}


void __fastcall mce::UUID::fromString(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  char v4; // r0@1
  void *v5; // r0@5
  _BYTE *v6; // r1@6
  unsigned int v7; // r11@13
  int v8; // r12@15
  int v9; // r6@16
  int v10; // r0@16
  int v11; // lr@16
  signed int v12; // r3@17
  int v13; // r9@17 OVERLAPPED
  int v14; // r10@17 OVERLAPPED
  char v15; // r5@18
  int v16; // r7@18
  int v17; // r5@23
  unsigned int v18; // r1@24
  char v19; // r1@27
  unsigned int v20; // r2@27
  int v21; // r4@27
  char v22; // r7@27
  int v23; // r4@27
  int v24; // r5@27
  int v25; // r4@27
  unsigned int v26; // r1@27
  void *ptr; // [sp+8h] [bp-40h]@16
  int v28; // [sp+Ch] [bp-3Ch]@16
  int v29; // [sp+10h] [bp-38h]@4
  int v30; // [sp+14h] [bp-34h]@4
  int v31; // [sp+18h] [bp-30h]@4
  int v32; // [sp+1Ch] [bp-2Ch]@4

  v2 = a1;
  v3 = a2;
  v4 = byte_287E910[0];
  __dmb();
  if ( !(v4 & 1) && j_j___cxa_guard_acquire_0(byte_287E910) )
  {
    j_std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(
      (int)&unk_287E914,
      "[a-fA-F0-9]{8}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{12}",
      "",
      16);
    j___cxa_atexit_0((int)std::basic_regex<char,std::regex_traits<char>>::~basic_regex);
    j_j___cxa_guard_release_0(byte_287E910);
  }
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  if ( !j_std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,false>(
          *v3,
          *v3 + *(_DWORD *)(*v3 - 12),
          (int)&v29,
          (int)&unk_287E914,
          0) )
    v5 = (void *)v29;
LABEL_33:
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    goto LABEL_36;
  v5 = (void *)v29;
  if ( v30 == v29 )
    v6 = &std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
  else
    if ( *(_BYTE *)(v29 + 8) )
      v6 = (_BYTE *)v29;
    if ( v30 - v29 == 24 )
      v6 = &std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
  if ( v6[8] )
    v7 = (*(_QWORD *)v6 >> 32) - *(_QWORD *)v6;
    v7 = 0;
  v8 = *v3;
  if ( v7 != *(_DWORD *)(*v3 - 12) )
    goto LABEL_33;
  ptr = (void *)v29;
  v28 = v2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( v7 )
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = *(_BYTE *)(v8 + v9);
      LOBYTE(v16) = v15 - 48;
      if ( (unsigned __int8)(v15 - 48) > 9u )
      {
        if ( (unsigned __int8)(v15 - 97) > 5u )
        {
          if ( (unsigned __int8)(v15 - 65) > 5u )
          {
            if ( v15 != 45 )
              goto LABEL_35;
            goto LABEL_31;
          }
          LOBYTE(v16) = v15 - 55;
        }
        else
          LOBYTE(v16) = v15 - 87;
      }
      v17 = 4 * ++v12;
      if ( v12 > 16 )
        v19 = -128 - v17;
        v20 = (char)v16;
        v21 = (char)v16 >> 31;
        v22 = v17 - 96;
        v23 = v21 << (-128 - v17);
        v24 = 96 - v17;
        v25 = v23 | (v20 >> v22);
        v26 = v20 << v19;
        if ( v24 >= 0 )
          v25 = v20 << v24;
        v13 |= v26;
        v14 |= v25;
      else
        v16 = (char)v16;
        v18 = ((char)v16 >> 31 << (64 - v17)) | ((unsigned int)(char)v16 >> (v17 - 32));
        if ( 32 - v17 >= 0 )
          v18 = v16 << (32 - v17);
        v11 |= v18;
        v10 |= v16 << (64 - v17);
LABEL_31:
      if ( ++v9 >= v7 )
        goto LABEL_35;
    }
  v13 = 0;
  v14 = 0;
LABEL_35:
  *(_DWORD *)v28 = v10;
  *(_DWORD *)(v28 + 4) = v11;
  *(_QWORD *)(v28 + 8) = *(_QWORD *)&v13;
  v5 = ptr;
LABEL_36:
  if ( v5 )
    j_operator delete(v5);
}


void __fastcall mce::Radian::Radian(int a1, int _R1)
{
  __asm { VMOV            S0, R1 }
  _R2 = &mce::Math::DEGRAD;
  __asm
  {
    VLDR            S2, [R2]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0]
  }
}


signed int __fastcall mce::TextureGroup::_addRef(mce::TextureGroup *this, mce::TexturePtr *a2)
{
  char v3; // [sp+4h] [bp-14h]@1
  mce::TexturePtr *v4; // [sp+Ch] [bp-Ch]@1

  v4 = a2;
  return std::_Hashtable<mce::TexturePtr *,mce::TexturePtr *,std::allocator<mce::TexturePtr *>,std::__detail::_Identity,std::equal_to<mce::TexturePtr *>,std::hash<mce::TexturePtr *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_emplace<mce::TexturePtr *>(
           (int)&v3,
           (int)this + 36,
           (unsigned int *)&v4);
}


int __fastcall mce::RasterizerStateOGL::createRasterizerStateDescription(mce::RasterizerStateOGL *this, mce::RenderContext *a2, const mce::RasterizerStateDescription *a3)
{
  const mce::RasterizerStateDescription *v3; // r5@1
  mce::RenderContext *v4; // r4@1
  mce::RasterizerStateOGL *v5; // r6@1
  int v6; // r0@1
  char v7; // r1@1
  signed int v8; // r1@4
  int result; // r0@9
  __int16 v10; // r1@10
  __int64 v11; // r2@10

  v3 = a3;
  v4 = a2;
  v5 = this;
  mce::RasterizerStateBase::createRasterizerStateDescription(this, a2, a3);
  *((_BYTE *)v5 + 16) = *((_BYTE *)v3 + 10);
  v6 = *((_BYTE *)v3 + 8);
  v7 = *((_BYTE *)v3 + 8);
  if ( *((_BYTE *)v3 + 8) )
    v7 = 1;
  *((_BYTE *)v5 + 17) = v7;
  if ( v6 )
  {
    v8 = 0;
    if ( v6 == 1 )
      v8 = 1028;
    if ( v6 == 2 )
      v8 = 1029;
    *((_DWORD *)v5 + 3) = v8;
  }
  *((_DWORD *)v5 + 5) = *(_DWORD *)v3;
  *((_DWORD *)v5 + 6) = *((_DWORD *)v3 + 1);
  result = *((_BYTE *)v4 + 122);
  if ( !*((_BYTE *)v4 + 122) )
    mce::RasterizerStateOGL::bindRasterizerState(v5, v4, 1);
    result = *((_BYTE *)v3 + 10);
    v10 = *((_WORD *)v3 + 4);
    v11 = *(_QWORD *)v3;
    *((_BYTE *)v4 + 42) = result;
    *((_WORD *)v4 + 20) = v10;
    *((_QWORD *)v4 + 4) = v11;
    *((_BYTE *)v4 + 122) = 1;
  return result;
}


signed int __fastcall mce::PolygonHelper::getVertsPerQuadFace(mce::PolygonHelper *this)
{
  char v1; // r0@1
  signed int result; // r0@4

  v1 = byte_27E8A38;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E8A38) )
  {
    byte_27E8A31 = mce::RenderDevice::checkFeatureSupport();
    j___cxa_guard_release((unsigned int *)&byte_27E8A38);
  }
  result = 6;
  if ( byte_27E8A31 )
    result = 4;
  return result;
}


int __fastcall mce::_getShaderFromResourcePack(int *a1)
{
  int *v1; // r6@1
  int v2; // r5@1
  char *v3; // r0@1
  char *v4; // r0@2
  int v5; // r5@4
  unsigned int v6; // r7@5
  int v7; // r2@6
  unsigned int v8; // r3@6
  __int64 v9; // kr00_8@7
  unsigned int v10; // r1@7
  const void **v11; // r0@9
  int v12; // r2@11
  void *v13; // r0@11
  void *v14; // r0@12
  void *v15; // r0@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@31
  signed int v22; // r1@33
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  int v27; // [sp+4h] [bp-34h]@7
  unsigned int v28; // [sp+8h] [bp-30h]@6
  int v29; // [sp+Ch] [bp-2Ch]@11
  int v30; // [sp+10h] [bp-28h]@11
  char *v31; // [sp+14h] [bp-24h]@1
  char *v32; // [sp+18h] [bp-20h]@1
  int v33; // [sp+1Ch] [bp-1Ch]@1

  v1 = a1;
  sub_119C854((int *)&v31, a1);
  v32 = v31;
  v31 = (char *)&unk_28898CC;
  v33 = 0;
  v2 = Resource::load((int)&v32);
  v3 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  if ( v2 )
    v5 = 1;
  else
    v5 = 0;
    v6 = sub_119CA58(v1, "/glsl", 0, 5u);
    if ( v6 != -1 )
      sub_119C8C4((void **)&v28, v1, 0, v6);
      v7 = v6 + 5;
      v8 = *(_DWORD *)(*v1 - 12);
      if ( v8 < v6 + 5 )
        sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v8);
      sub_119C8C4((void **)&v27, v1, v7, 0xFFFFFFFF);
      v9 = *(_QWORD *)(v28 - 12);
      v10 = *(_DWORD *)(v27 - 12) + v9;
      if ( v10 > HIDWORD(v9) && v10 <= *(_DWORD *)(v27 - 8) )
        v11 = sub_119C984((const void **)&v27, 0, v28, (_BYTE *)v9);
      else
        v11 = sub_119C8A4((const void **)&v28, (const void **)&v27);
      v12 = (int)*v11;
      *v11 = &unk_28898CC;
      v29 = v12;
      v30 = 0;
      v5 = Resource::load((int)&v29);
      v13 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
      {
        v21 = (unsigned int *)(v29 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v13);
      }
      v14 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v27 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      v15 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v28 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
  return v5;
}


void __fastcall mce::BannerConstants::init(mce::BannerConstants *this)
{
  mce::BannerConstants::init(this);
}


TexturePair **__fastcall mce::TextureGroup::removeManualTextureData(mce::TextureGroup *this, TexturePair *a2)
{
  mce::TextureGroup *v2; // r6@1
  TexturePair **v3; // r2@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r4@2
  bool v7; // zf@3
  TexturePair **result; // r0@3
  TexturePair *v9; // r5@6
  bool v10; // zf@6
  int v11; // r0@11
  TexturePair **v12; // r1@24
  bool v13; // zf@24

  v2 = this;
  v3 = (TexturePair **)(*((_QWORD *)this + 10) >> 32);
  v4 = *((_QWORD *)this + 10);
  v5 = ((signed int)v3 - v4) >> 4;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v4) >> 2 )
    {
      result = (TexturePair **)v4;
    }
    else
      v11 = ((signed int)v3 - v4) >> 2;
      if ( v11 == 2 )
      {
        result = (TexturePair **)v4;
      }
      else
        if ( v11 != 3 )
        {
          result = v3;
          goto LABEL_23;
        }
        if ( *(TexturePair **)v4 == a2 )
        result = (TexturePair **)(v4 + 4);
      if ( *result == a2 )
        goto LABEL_23;
      ++result;
    if ( *result != a2 )
      result = v3;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_DWORD *)v4 == (_DWORD)a2;
      if ( *(TexturePair **)v4 != a2 )
        v7 = *(_DWORD *)(v4 + 4) == (_DWORD)a2;
      if ( v7 )
        break;
      result = (TexturePair **)(v4 + 8);
      v9 = *(TexturePair **)(v4 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        result = (TexturePair **)(v4 + 12);
        v10 = *(_DWORD *)(v4 + 12) == (_DWORD)a2;
      if ( v10 )
      --v6;
      v4 += 16;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result != v3 )
    v12 = result + 1;
    v13 = result + 1 == v3;
    if ( result + 1 != v3 )
      v13 = v3 == v12;
    if ( !v13 )
      _aeabi_memmove4(result, v12);
      v3 = (TexturePair **)*((_DWORD *)v2 + 21);
    result = v3 - 1;
    *((_DWORD *)v2 + 21) = v3 - 1;
  return result;
}


void __fastcall mce::TextureGroup::createEmptyTexture(mce::TextureGroup *this, const ResourceLocation *a2, const mce::TextureDescription *a3, const mce::TextureDescription *a4)
{
  const mce::TextureDescription *v4; // r7@1
  mce::TextureGroup *v5; // r4@1
  mce::TextureGroup *v6; // r8@1
  const mce::TextureDescription *v7; // r6@1
  mce::RenderContextImmediate *v8; // r0@1
  mce::Texture *v9; // r5@1
  mce::RenderContext *v10; // r0@1
  char *v11; // r0@1
  char *v12; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  char *v17; // [sp+4h] [bp-2Ch]@1
  int v18; // [sp+8h] [bp-28h]@1
  char *v19; // [sp+Ch] [bp-24h]@1
  int v20; // [sp+10h] [bp-20h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = (mce::RenderContextImmediate *)std::map<ResourceLocation,TexturePair,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,TexturePair>>>::operator[](
                                        (int)a2,
                                        (const void **)a3);
  v9 = v8;
  v10 = (mce::RenderContext *)mce::RenderContextImmediate::get(v8);
  mce::Texture::createTexture(v9, v10, v7);
  sub_21E8AF4((int *)&v17, (int *)v4);
  v18 = *((_DWORD *)v4 + 1);
  v19 = v17;
  v17 = (char *)&unk_28898CC;
  v20 = v18;
  mce::TexturePtr::TexturePtr(v6, v5, (int)&v19, 0);
  v11 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


int __fastcall mce::FeatureSupportOGL::checkFeatureSupport(int a1, unsigned int a2, int a3, int a4)
{
  if ( a2 >= 0xB )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", a2, 11, a4);
  return *(_BYTE *)(a1 + a2 + 28);
}


void __fastcall mce::TextureGroup::getTexture(mce::TexturePtr *a1, mce::TextureGroup *a2, int a3)
{
  mce::TextureGroup *v3; // r4@1
  mce::TexturePtr *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a1;
  mce::TextureGroup::getLocationFor((void **)&v8, a3);
  mce::TexturePtr::TexturePtr(v4, v3, (int)&v8, 0);
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


int __fastcall mce::RenderContextBase::getStencilReferenceFromParameter(mce::RenderContextBase *this, int a2)
{
  if ( *((_BYTE *)this + 229) )
    a2 = a2 & 0xF | 16 * *((_BYTE *)this + 228);
  return (unsigned __int8)a2;
}


mce::RenderContextBase *__fastcall mce::RenderContextOGL::RenderContextOGL(mce::RenderContextOGL *this)
{
  mce::RenderContextBase *result; // r0@1

  result = mce::RenderContextBase::RenderContextBase(this);
  *((_DWORD *)result + 72) = 0;
  *((_DWORD *)result + 70) = 0;
  *((_DWORD *)result + 71) = 0;
  *((_DWORD *)result + 68) = 0;
  *((_DWORD *)result + 69) = 0;
  *((_BYTE *)result + 292) = 1;
  *((_BYTE *)result + 293) = 1;
  *((_DWORD *)result + 74) = 0;
  *((_BYTE *)result + 300) = 1;
  *((_BYTE *)result + 301) = 1;
  *((_DWORD *)result + 76) = 0;
  *((_BYTE *)result + 308) = 1;
  *((_BYTE *)result + 309) = 1;
  *((_DWORD *)result + 78) = 0;
  *((_BYTE *)result + 316) = 1;
  *((_BYTE *)result + 317) = 1;
  *((_DWORD *)result + 80) = 0;
  *((_BYTE *)result + 324) = 1;
  *((_BYTE *)result + 325) = 1;
  *((_DWORD *)result + 82) = 0;
  *((_BYTE *)result + 332) = 1;
  *((_BYTE *)result + 333) = 1;
  *((_DWORD *)result + 84) = 0;
  *((_BYTE *)result + 340) = 1;
  *((_BYTE *)result + 341) = 1;
  *((_DWORD *)result + 86) = 0;
  *((_BYTE *)result + 348) = 1;
  *((_BYTE *)result + 349) = 1;
  *((_DWORD *)result + 88) = 0;
  *((_DWORD *)result + 89) = 0;
  *((_DWORD *)result + 90) = 0;
  return result;
}


void __fastcall mce::TextureGroup::unloadFileSystem(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  int *v6; // r0@4
  int *v7; // r4@7
  int *v8; // r7@7
  const void **v9; // r6@8
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int *v12; // r0@20
  int *v13; // [sp+4h] [bp-2Ch]@1
  int *v14; // [sp+8h] [bp-28h]@1
  int *v15; // [sp+Ch] [bp-24h]@1

  v2 = a1;
  v13 = 0;
  v14 = 0;
  v3 = a1 + 4;
  v15 = 0;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 != a1 + 4 )
  {
    do
    {
      if ( *(_DWORD *)(v5 + 20) == v4 )
      {
        TexturePair::unload((TexturePair *)(v5 + 24));
        if ( v14 == v15 )
        {
          std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_emplace_back_aux<ResourceLocation const&>(
            &v13,
            v5 + 16);
        }
        else
          v6 = sub_21E8AF4(v14, (int *)(v5 + 16));
          v6[1] = *(_DWORD *)(v5 + 20);
          v14 = v6 + 2;
      }
      v5 = sub_21D47E8(v5);
    }
    while ( v5 != v3 );
    v7 = v14;
    v8 = v13;
    if ( v13 != v14 )
      v9 = (const void **)v13;
      do
        std::_Rb_tree<ResourceLocation,std::pair<ResourceLocation const,TexturePair>,std::_Select1st<std::pair<ResourceLocation const,TexturePair>>,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,TexturePair>>>::erase(
          v2,
          v9);
        v9 += 2;
      while ( (const void **)v7 != v9 );
      if ( v8 != v7 )
        do
          v12 = (int *)(*v8 - 12);
          if ( v12 != &dword_28898C0 )
          {
            v10 = (unsigned int *)(*v8 - 4);
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
              j_j_j_j__ZdlPv_9(v12);
          }
          v8 += 2;
        while ( v8 != v7 );
        v7 = v13;
    if ( v7 )
      operator delete(v7);
  }
}


mce::RenderContextBase *__fastcall mce::RenderContext::RenderContext(mce::RenderContext *this)
{
  mce::RenderContextBase *result; // r0@1

  result = mce::RenderContextOGL::RenderContextOGL(this);
  *((_BYTE *)result + 372) = 0;
  return result;
}


int __fastcall mce::TextureGroup::reloadAll(int result)
{
  int v1; // r8@1
  int v2; // r4@1
  int i; // r5@1
  bool v4; // r2@5
  __int64 j; // r4@10
  TexturePair *v6; // t1@11
  __int64 k; // r4@12
  int v8; // t1@13

  v1 = result;
  v2 = result + 4;
  for ( i = *(_DWORD *)(result + 12); i != v2; i = result )
  {
    if ( !mce::Texture::isCreated((mce::Texture *)(i + 24)) )
    {
      if ( !mce::TextureContainer::isValid((mce::TextureContainer *)(i + 88)) )
        ImageUtils::uncompress((ImageUtils *)(i + 88), 0, v4);
      if ( mce::TextureContainer::isValid((mce::TextureContainer *)(i + 88)) == 1 )
        TexturePair::load((TexturePair *)(i + 24));
    }
    result = sub_21D47E8(i);
  }
  for ( j = *(_QWORD *)(v1 + 80); HIDWORD(j) != (_DWORD)j; result = TexturePair::load(v6) )
    v6 = *(TexturePair **)j;
    LODWORD(j) = j + 4;
  for ( k = *(_QWORD *)(v1 + 68); HIDWORD(k) != (_DWORD)k; result = (*(int (**)(void))(*(_DWORD *)v8 + 16))() )
    v8 = *(_DWORD *)k;
    LODWORD(k) = k + 4;
  return result;
}


int __fastcall mce::RenderGraph::cleanupRenderScreens(mce::RenderGraph *this)
{
  int v1; // r6@1
  int v2; // r10@2
  __int64 v3; // kr08_8@2
  int v4; // r11@2
  int v5; // r9@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  void *v10; // r0@19
  void *v11; // r4@20
  int result; // r0@21
  mce::RenderGraph *v13; // [sp+4h] [bp-2Ch]@1
  int i; // [sp+8h] [bp-28h]@1

  v13 = this;
  v1 = *(_QWORD *)this;
  for ( i = *(_QWORD *)this >> 32; v1 != i; *(_DWORD *)(v2 + 8) = v3 )
  {
    v2 = *(_DWORD *)v1;
    v3 = *(_QWORD *)(*(_DWORD *)v1 + 4);
    v4 = *(_QWORD *)(*(_DWORD *)v1 + 4);
    if ( HIDWORD(v3) != (_DWORD)v3 )
    {
      do
      {
        v5 = *(_DWORD *)(v4 + 4);
        if ( v5 )
        {
          v6 = (unsigned int *)(v5 + 4);
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
            v8 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
            }
            else
              v9 = (*v8)--;
            if ( v9 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
        }
        v4 += 8;
      }
      while ( v4 != HIDWORD(v3) );
    }
    v1 += 4;
  }
  v10 = (void *)*((_DWORD *)v13 + 5);
  if ( v10 )
    do
      v11 = *(void **)v10;
      operator delete(v10);
      v10 = v11;
    while ( v11 );
  _aeabi_memclr4(*(_QWORD *)((char *)v13 + 12), 4 * (*(_QWORD *)((char *)v13 + 12) >> 32));
  result = 0;
  *((_DWORD *)v13 + 5) = 0;
  *((_DWORD *)v13 + 6) = 0;
  return result;
}


void __fastcall mce::WeatherConstants::init(mce::WeatherConstants *this)
{
  mce::WeatherConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  int v12; // r5@12
  mce::ShaderConstantBase *v13; // r0@12
  mce::ShaderConstantBase *v14; // r5@12
  void *v15; // r0@16
  int v16; // r5@17
  mce::ShaderConstantBase *v17; // r0@17
  mce::ShaderConstantBase *v18; // r5@17
  void *v19; // r0@21
  int v20; // r5@22
  mce::ShaderConstantBase *v21; // r0@22
  mce::ShaderConstantBase *v22; // r5@22
  void *v23; // r0@26
  int v24; // r5@27
  mce::ShaderConstantBase *v25; // r0@27
  mce::ShaderConstantBase *v26; // r5@27
  void *v27; // r0@31
  int v28; // r5@32
  mce::ShaderConstantBase *v29; // r0@32
  mce::ShaderConstantBase *v30; // r5@32
  void *v31; // r0@36
  int v32; // r5@37
  mce::ShaderConstantBase *v33; // r0@37
  mce::ShaderConstantBase *v34; // r5@37
  void *v35; // r0@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  unsigned int *v52; // r2@75
  signed int v53; // r1@77
  int v54; // [sp+8h] [bp-58h]@37
  int v55; // [sp+10h] [bp-50h]@32
  int v56; // [sp+18h] [bp-48h]@27
  int v57; // [sp+20h] [bp-40h]@22
  int v58; // [sp+28h] [bp-38h]@17
  int v59; // [sp+30h] [bp-30h]@12
  int v60; // [sp+38h] [bp-28h]@7
  int v61; // [sp+40h] [bp-20h]@2
  int v62; // [sp+48h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v62, "WeatherConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v62);
  v3 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v62 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v61, "POSITION_OFFSET");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v61);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 4 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v61 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v60, "VELOCITY");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v60);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 4 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v60 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v59, "ALPHA");
  v13 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v12, (const void **)&v59);
  v14 = v13;
  if ( v13 )
    if ( mce::ShaderConstantBase::getType(v13) != 4 )
      v14 = 0;
    *((_DWORD *)v1 + 4) = v14;
  v15 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v59 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v58, "VIEW_POSITION");
  v17 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v16, (const void **)&v58);
  v18 = v17;
  if ( v17 )
    if ( mce::ShaderConstantBase::getType(v17) != 4 )
      v18 = 0;
    *((_DWORD *)v1 + 5) = v18;
  v19 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v58 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v57, "SIZE_SCALE");
  v21 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v20, (const void **)&v57);
  v22 = v21;
  if ( v21 )
    if ( mce::ShaderConstantBase::getType(v21) != 4 )
      v22 = 0;
    *((_DWORD *)v1 + 6) = v22;
  v23 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v57 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v56, "FORWARD");
  v25 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v24, (const void **)&v56);
  v26 = v25;
  if ( v25 )
    if ( mce::ShaderConstantBase::getType(v25) != 4 )
      v26 = 0;
    *((_DWORD *)v1 + 7) = v26;
  v27 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v56 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v55, "UV_INFO");
  v29 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v28, (const void **)&v55);
  v30 = v29;
  if ( v29 )
    if ( mce::ShaderConstantBase::getType(v29) != 4 )
      v30 = 0;
    *((_DWORD *)v1 + 8) = v30;
  v31 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v55 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v54, "PARTICLE_BOX");
  v33 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v32, (const void **)&v54);
  v34 = v33;
  if ( v33 )
    if ( mce::ShaderConstantBase::getType(v33) != 4 )
      v34 = 0;
    *((_DWORD *)v1 + 9) = v34;
  v35 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v54 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
}


char *__fastcall mce::RenderGraph::addScreenToRenderGraph(unsigned __int64 *a1, int a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r6@1
  char *result; // r0@1
  char **v5; // r6@1
  char **v6; // r7@1
  unsigned __int64 v7; // kr00_8@1
  char *i; // r5@1
  int v9; // r1@3 OVERLAPPED
  int v10; // r2@3
  int v11; // r2@4
  unsigned int *v12; // r2@5
  unsigned int v13; // r1@7

  v2 = a2;
  v3 = a1;
  result = (char *)(*(int (**)(void))(**(_DWORD **)a2 + 224))();
  v7 = *v3;
  v5 = (char **)(*v3 >> 32);
  v6 = (char **)v7;
  for ( i = result; v6 != v5; ++v6 )
  {
    result = *v6;
    if ( *((_DWORD *)*v6 + 4) & (unsigned int)i )
    {
      *(_QWORD *)&v9 = *((_QWORD *)result + 1);
      if ( v9 == v10 )
      {
        result = std::vector<std::shared_ptr<AbstractScene>,std::allocator<std::shared_ptr<AbstractScene>>>::_M_emplace_back_aux<std::shared_ptr<AbstractScene>&>(
                   (unsigned __int64 *)(result + 4),
                   v2);
      }
      else
        *(_DWORD *)v9 = *(_DWORD *)v2;
        v11 = *(_DWORD *)(v2 + 4);
        *(_DWORD *)(v9 + 4) = v11;
        if ( v11 )
        {
          v12 = (unsigned int *)(v11 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 + 1, v12) );
            v9 = *((_DWORD *)result + 2);
          }
          else
            ++*v12;
        }
        *((_DWORD *)result + 2) = v9 + 8;
    }
  }
  return result;
}


int __fastcall mce::ImageBuffer::ImageBuffer(int result, int a2)
{
  int v2; // r2@1
  int v3; // r2@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // lr@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v2 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v2;
  v3 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  v4 = result + 20;
  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)v4 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  return result;
}


int __fastcall mce::Camera::getModelViewProjectionMatrix(mce::Camera *this, int a2)
{
  int v2; // r4@1
  mce::Camera *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r0@1
  char v8; // [sp+4h] [bp-54h]@1

  v2 = a2;
  v3 = this;
  v4 = MatrixStack::top((MatrixStack *)(a2 + 32));
  v5 = MatrixStack::top((MatrixStack *)v2);
  glm::detail::operator*<float>((int)&v8, v4, v5);
  v6 = MatrixStack::top((MatrixStack *)(v2 + 16));
  return glm::detail::operator*<float>((int)v3, (int)&v8, v6);
}


int __fastcall mce::BufferOGL::updateBuffer(mce::BufferOGL *this, mce::RenderContext *a2, unsigned int a3, void *a4, unsigned int a5)
{
  mce::BufferOGL *v5; // r7@1
  mce::RenderContext *v6; // r6@1
  unsigned int v7; // r1@1
  void *v8; // r8@1
  unsigned int v9; // r5@1
  int v10; // r3@3
  unsigned int v11; // r1@3

  v5 = this;
  v6 = a2;
  v7 = *(_BYTE *)this;
  v8 = a4;
  v9 = a3;
  if ( v7 >= 2 )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v7, 2, (int)a4);
  if ( *((_DWORD *)v6 + v7 + 70) != *((_DWORD *)this + 5) )
  {
    glad_glBindBuffer(*((_DWORD *)this + 6), *((_DWORD *)this + 5));
    v11 = *(_BYTE *)v5;
    if ( v11 >= 2 )
      sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v11, 2, v10);
    *((_DWORD *)v6 + v11 + 70) = *((_DWORD *)v5 + 5);
    if ( v11 == 1 )
      *((_DWORD *)v6 + 89) = *((_DWORD *)v5 + 1);
  }
  if ( *((_DWORD *)v5 + 3) >= a5 * v9 )
    glad_glBufferSubData(*((_DWORD *)v5 + 6), *((_DWORD *)v5 + 4));
  else
    mce::BufferOGL::recreateBuffer(v5, v6, v9, v8, a5);
  return j_j_j__ZN3mce10BufferBase12updateBufferERNS_13RenderContextEjPKvj(v5, v6, v9, v8, a5);
}


int __fastcall mce::SwapChainBase::SwapChainBase(int result)
{
  *(_QWORD *)(result + 12) = 1LL;
  return result;
}


unsigned int __fastcall mce::ImageBuffer::get(mce::ImageBuffer *this, unsigned int a2)
{
  return *(_DWORD *)this + *((_DWORD *)this + 3) * a2;
}


int __fastcall mce::FrameBufferObjectOGL::clearFrameBufferInternal(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r5@1
  int v6; // r4@1
  int v8; // r8@1
  void (__fastcall *v17)(int, int, _DWORD, _DWORD); // r7@2
  char v23; // [sp+4h] [bp-3Ch]@1
  int v24; // [sp+8h] [bp-38h]@10
  int v25; // [sp+Ch] [bp-34h]@10
  int v26; // [sp+10h] [bp-30h]@10
  char v27; // [sp+14h] [bp-2Ch]@1
  int v28; // [sp+18h] [bp-28h]@10
  int v29; // [sp+1Ch] [bp-24h]@10
  int v30; // [sp+20h] [bp-20h]@10

  v4 = a1;
  _R7 = a4;
  v6 = a3;
  _R9 = a2;
  v8 = mce::RenderContextImmediate::get((mce::RenderContextImmediate *)&glad_glGetIntegerv_ptr);
  glad_glGetIntegerv(3088, &v27);
  glad_glGetIntegerv(2978, &v23);
  if ( _R7 )
  {
    __asm
    {
      VLDR            S0, [R7]
      VLDR            S2, [R7,#4]
      VLDR            S4, [R7,#8]
      VLDR            S6, [R7,#0xC]
      VCVTR.S32.F32   S4, S4
      VCVTR.S32.F32   S6, S6
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S2
      VMOV            R0, S4
      VMOV            R1, S6
      VMOV            R2, S0
      VMOV            R3, S2
    }
    glad_glScissor(_R0, _R1, _R2, _R3);
    v17 = (void (__fastcall *)(int, int, _DWORD, _DWORD))glad_glViewport;
  }
  else
    glad_glScissor(0, 0, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 8) >> 32);
    _R1 = 0;
    _R2 = *(_QWORD *)(v4 + 8);
    _R0 = 0;
  v17(_R0, _R1, _R2, HIDWORD(_R2));
  if ( v6 & 0x4000 )
    glad_glColorMask(1, 1, 1, 1);
    glad_glClearColor(*_R9, _R9[1], _R9[2], _R9[3]);
    *(_BYTE *)(v8 + 4) = 15;
  if ( v6 & 0x100 )
    glad_glDepthMask(1);
    glad_glClearDepthf(*_R9);
    *(_BYTE *)(v8 + 19) = 1;
  if ( v6 & 0x400 )
    glad_glStencilMask(-1);
      VLDR            S0, [R9,#4]
      VMOV            R0, S0
    glad_glClearStencil(_R0);
    *(_DWORD *)(v8 + 24) = -1;
  glad_glClear(v6);
  glad_glScissor(*(_DWORD *)&v27, v28, v29, v30);
  return glad_glViewport(*(_DWORD *)&v23, v24, v25, v26);
}


void __fastcall mce::ShaderProgramOGL::compileShaderProgram(int a1)
{
  mce::ShaderProgramOGL::compileShaderProgram(a1);
}


int __fastcall mce::TextConstants::TextConstants(mce::TextConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8C00;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall mce::TextureGroup::uploadTexture(int a1, const ResourceLocation *a2, int a3, signed int a4)
{
  TexturePair *v4; // r5@1
  ImageUtils *v5; // r11@1
  int v6; // r4@1
  signed int v7; // r7@1
  const ResourceLocation *v8; // r6@1
  bool v9; // r2@1
  int v10; // r0@4
  int v11; // r5@6
  int v12; // r0@6
  int v13; // r7@6
  const void *v14; // r4@7
  int v15; // r9@7
  size_t v16; // r8@7
  _DWORD *v17; // r0@9
  size_t v18; // r10@9
  size_t v19; // r2@9
  int v20; // r0@11
  const void *v21; // r0@18
  const ResourceLocation *v22; // r8@18
  _DWORD *v23; // r1@18
  size_t v24; // r4@18
  size_t v25; // r6@18
  size_t v26; // r2@18
  int v27; // r0@20
  bool v28; // nf@22
  signed int v29; // r0@22
  int v30; // r4@28
  int v31; // r4@33
  mce::ImageBuffer *v32; // r0@34
  unsigned __int64 *v33; // r0@34
  unsigned int v34; // r5@34
  void *v35; // r0@34
  int v36; // r4@36
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  int v40; // [sp+4h] [bp-44h]@6
  signed int v41; // [sp+8h] [bp-40h]@6
  int v42; // [sp+Ch] [bp-3Ch]@6
  int v43; // [sp+10h] [bp-38h]@31
  const ResourceLocation *v44; // [sp+14h] [bp-34h]@31
  int v45; // [sp+18h] [bp-30h]@31
  char v46; // [sp+1Ch] [bp-2Ch]@31

  v4 = (TexturePair *)a3;
  v5 = (ImageUtils *)(a3 + 64);
  v6 = a1;
  v7 = a4;
  v8 = a2;
  if ( !mce::TextureContainer::isValid((mce::TextureContainer *)(a3 + 64)) )
    ImageUtils::uncompress(v5, 0, v9);
  if ( !mce::TextureContainer::isValid(v5) )
  {
    v10 = mce::TextureGroup::getMissingTexture((mce::TextureGroup *)v6);
    if ( v10 )
    {
      TexturePair::setTextureData(v4, (const mce::TextureContainer *)(v10 + 64));
      v7 = 1;
    }
  }
  v40 = (int)v4;
  v41 = v7;
  v11 = v6 + 4;
  v12 = *(_DWORD *)(v6 + 8);
  v13 = v6 + 4;
  v42 = v6;
  if ( v12 )
    v14 = *(const void **)v8;
    v15 = v11;
    v16 = *(_DWORD *)(*(_DWORD *)v8 - 12);
    do
      v13 = v12;
      while ( 1 )
      {
        v17 = *(_DWORD **)(v13 + 16);
        v18 = *(v17 - 3);
        v19 = *(v17 - 3);
        if ( v18 > v16 )
          v19 = v16;
        v20 = memcmp(v17, v14, v19);
        if ( !v20 )
          v20 = v18 - v16;
        if ( v20 >= 0 )
          break;
        v13 = *(_DWORD *)(v13 + 12);
        if ( !v13 )
        {
          v13 = v15;
          goto LABEL_17;
        }
      }
      v12 = *(_DWORD *)(v13 + 8);
      v15 = v13;
    while ( v12 );
LABEL_17:
  if ( v13 == v11 )
    goto LABEL_50;
  v21 = *(const void **)v8;
  v22 = v8;
  v23 = *(_DWORD **)(v13 + 16);
  v24 = *(_DWORD *)(*(_DWORD *)v8 - 12);
  v25 = *(v23 - 3);
  v26 = v24;
  if ( v24 > v25 )
    v26 = *(v23 - 3);
  v27 = memcmp(v21, v23, v26);
  if ( !v27 )
    v27 = v24 - v25;
  v28 = v27 < 0;
  v29 = 0;
  if ( v28 )
    v13 = v11;
    v29 = 1;
  if ( !(v29 | v41) )
    return v13 + 24;
  v8 = v22;
LABEL_50:
    v30 = v42;
    v43 = v40;
    v44 = v8;
    std::_Rb_tree<ResourceLocation,std::pair<ResourceLocation const,TexturePair>,std::_Select1st<std::pair<ResourceLocation const,TexturePair>>,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,TexturePair>>>::_M_emplace_unique<std::piecewise_construct_t const&,std::tuple<ResourceLocation const&>,std::tuple<TexturePair&&>>(
      (int)&v45,
      v42,
      (int)&unk_262D3E0,
      (int *)&v44,
      &v43);
    if ( !v46 )
      return 0;
    v13 = v45;
  else
    TexturePair::unload((TexturePair *)(v13 + 24));
    TexturePair::setTextureData(v13 + 24, (unsigned __int64 *)v5);
    if ( *(_DWORD *)(*(_DWORD *)mce::TextureContainer::getRawImage(v5) - 12) )
      mce::TextureContainer::clearImageBuffers(v5);
  v31 = *(_DWORD *)(v30 + 64);
  if ( v31 )
    v32 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(v13 + 88), 0);
    v33 = (unsigned __int64 *)mce::ImageBuffer::getStorageDEPRECATED(v32);
    v34 = (*v33 >> 32) - *v33;
    *(_DWORD *)(v31 + 4) += v34;
    ResourceLocation::getFullPath((ResourceLocation *)&v45, (int)v8);
    v35 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
      else
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    mce::LRUCache::touch((mce::LRUCache *)v31, v8, v34);
  v36 = v13 + 24;
  TexturePair::load((TexturePair *)(v13 + 24));
  return v36;
}


int __fastcall mce::FrameBufferObjectBase::setupAttachmentParametersFromParent(mce::FrameBufferObjectBase *this, mce::FrameBufferAttachment *a2, const mce::FrameBufferAttachmentDescription *a3)
{
  int result; // r0@1

  *(_QWORD *)((char *)a2 + 36) = *(_QWORD *)this;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2);
  result = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 4) = result;
  return result;
}


signed int __fastcall mce::operator>(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VMOV            S2, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


mce::MaterialPtr *__fastcall mce::MaterialPtr::_move(mce::MaterialPtr *a1, mce::MaterialPtr *a2)
{
  mce::MaterialPtr *v2; // r5@1
  mce::MaterialPtr *v3; // r4@1
  mce::RenderMaterialGroup *v4; // r0@2

  v2 = a2;
  v3 = a1;
  if ( a1 != a2 )
  {
    v4 = *(mce::RenderMaterialGroup **)a1;
    if ( *(_DWORD *)v3 )
    {
      mce::RenderMaterialGroup::_removeRef(v4, v3);
      *(_DWORD *)v3 = 0;
    }
    *((_DWORD *)v3 + 1) = 0;
    *(_DWORD *)v3 = *(_DWORD *)v2;
    *((_DWORD *)v3 + 1) = *((_DWORD *)v2 + 1);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 2,
      (int *)v2 + 2);
    if ( *(_DWORD *)v2 )
      mce::RenderMaterialGroup::_removeRef(*(mce::RenderMaterialGroup **)v2, v2);
      *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
      mce::RenderMaterialGroup::_addRef(*(mce::RenderMaterialGroup **)v3, v3);
  }
  return v3;
}


int __fastcall mce::MaterialPtr::getGroup(mce::MaterialPtr *this)
{
  return *(_DWORD *)this;
}


int __fastcall mce::VertexFormat::VertexFormat(int result)
{
  *(_BYTE *)result = 0;
  *(_BYTE *)(result + 7) = 0;
  *(_BYTE *)(result + 8) = 1;
  *(_WORD *)(result + 5) = -1;
  *(_DWORD *)(result + 1) = -1;
  return result;
}


void __fastcall mce::RenderStageWithDefaultBackBuffer::~RenderStageWithDefaultBackBuffer(mce::RenderStageWithDefaultBackBuffer *this)
{
  mce::RenderStageWithDefaultBackBuffer *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)this + 4) >> 32;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall mce::operator<(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S2, R0 }
  result = 0;
  __asm
  {
    VMOV            S0, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


mce::ShaderConstantBase *__fastcall mce::ConstantBufferContainerBase::registerReflectedShaderParameter(mce::ConstantBufferContainerBase *this, const mce::UniformMetaData *a2)
{
  mce::ConstantBufferContainerBase *v2; // r4@1
  const mce::UniformMetaData *v3; // r7@1
  int v4; // r6@1
  int v5; // r11@1
  int v6; // r0@1
  int v7; // r9@2
  char *v8; // r1@3
  _DWORD *v9; // r0@3
  const void *v10; // r1@3
  size_t v11; // r2@3
  int v12; // r5@4
  char *v13; // r1@5
  _DWORD *v14; // r0@5
  _DWORD *v15; // r1@5
  size_t v16; // r2@5
  char *v17; // r1@7
  _DWORD *v18; // r0@7
  _DWORD *v19; // r1@7
  size_t v20; // r2@7
  char *v21; // r1@9
  _DWORD *v22; // r0@9
  _DWORD *v23; // r1@9
  size_t v24; // r2@9
  int v25; // r0@12
  const void **v26; // r7@15
  char *v27; // r1@17
  const void *v28; // r0@17
  const void *v29; // t1@17
  const void *v30; // r1@17
  size_t v31; // r2@17
  _DWORD *v32; // r1@20
  size_t v33; // r2@20
  const void *v34; // r1@23
  size_t v35; // r2@23
  __int64 v36; // r1@30
  int *v38; // [sp+4h] [bp-3Ch]@1
  char v39; // [sp+8h] [bp-38h]@1
  int v40; // [sp+10h] [bp-30h]@1
  int v41; // [sp+14h] [bp-2Ch]@1
  char v42; // [sp+18h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v38 = (int *)(mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)&v39) | 4);
  EntityInteraction::setInteractText(v38, (int *)v3 + 4);
  v42 = *((_BYTE *)v3 + 8);
  v40 = *(_DWORD *)v3;
  v41 = *((_DWORD *)v3 + 1);
  v5 = *(_QWORD *)v2 >> 32;
  v4 = *(_QWORD *)v2;
  v6 = -858993459 * ((v5 - v4) >> 2) >> 2;
  if ( v6 < 1 )
  {
LABEL_12:
    v25 = -858993459 * ((v5 - v4) >> 2);
    if ( v25 == 1 )
    {
      v26 = (const void **)((char *)v3 + 16);
      v12 = v4;
    }
    else
      if ( v25 == 3 )
      {
        v27 = mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)v4);
        v29 = (const void *)*((_DWORD *)v3 + 4);
        v26 = (const void **)((char *)v3 + 16);
        v28 = v29;
        v30 = *(const void **)v27;
        v31 = *((_DWORD *)v29 - 3);
        if ( v31 == *((_DWORD *)v30 - 3) )
        {
          v12 = v4;
          if ( !memcmp(v28, v30, v31) )
            goto LABEL_28;
        }
        v12 = v4 + 20;
      }
      else
        if ( v25 != 2 )
          goto LABEL_27;
        v12 = v4;
      v32 = *(_DWORD **)mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)v12);
      v33 = *((_DWORD *)*v26 - 3);
      if ( v33 == *(v32 - 3) && !memcmp(*v26, v32, v33) )
        goto LABEL_28;
      v12 += 20;
    v34 = *(const void **)mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)v12);
    v35 = *((_DWORD *)*v26 - 3);
    if ( v35 == *((_DWORD *)v34 - 3) )
      if ( memcmp(*v26, v34, v35) )
        v12 = v5;
      goto LABEL_28;
LABEL_27:
    v12 = v5;
    goto LABEL_28;
  }
  v7 = v6 + 1;
  while ( 1 )
    v8 = mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)v4);
    v9 = (_DWORD *)*((_DWORD *)v3 + 4);
    v10 = *(const void **)v8;
    v11 = *(v9 - 3);
    if ( v11 == *((_DWORD *)v10 - 3) )
      if ( !memcmp(v9, v10, v11) )
        break;
    v12 = v4 + 20;
    v13 = mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)(v4 + 20));
    v14 = (_DWORD *)*((_DWORD *)v3 + 4);
    v15 = *(_DWORD **)v13;
    v16 = *(v14 - 3);
    if ( v16 == *(v15 - 3) && !memcmp(v14, v15, v16) )
      break;
    v12 = v4 + 40;
    v17 = mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)(v4 + 40));
    v18 = (_DWORD *)*((_DWORD *)v3 + 4);
    v19 = *(_DWORD **)v17;
    v20 = *(v18 - 3);
    if ( v20 == *(v19 - 3) && !memcmp(v18, v19, v20) )
    v12 = v4 + 60;
    v21 = mce::ShaderConstantBase::getName((mce::ShaderConstantBase *)(v4 + 60));
    v22 = (_DWORD *)*((_DWORD *)v3 + 4);
    v23 = *(_DWORD **)v21;
    v24 = *(v22 - 3);
    if ( v24 == *(v23 - 3) && !memcmp(v22, v23, v24) )
    --v7;
    v4 += 80;
    if ( v7 <= 1 )
      goto LABEL_12;
LABEL_28:
  if ( v12 == *((_DWORD *)v2 + 1) )
    if ( v12 == *((_DWORD *)v2 + 2) )
      std::vector<mce::ShaderConstantBase,std::allocator<mce::ShaderConstantBase>>::_M_emplace_back_aux<mce::ShaderConstantBase&>(
        (unsigned __int64 *)v2,
        (int)&v39);
      *(_DWORD *)v12 = &off_26E8D30;
      sub_21E8AF4((int *)(v12 + 4), v38);
      v36 = *(_QWORD *)&v40;
      *(_WORD *)(v12 + 16) = *(_WORD *)&v42;
      *(_QWORD *)(v12 + 8) = v36;
      *((_DWORD *)v2 + 1) += 20;
  return mce::ShaderConstantBase::~ShaderConstantBase((mce::ShaderConstantBase *)&v39);
}


void __fastcall mce::WorldConstantsHolographic::init(mce::WorldConstantsHolographic *this, int a2)
{
  mce::WorldConstantsHolographic *v2; // r4@1
  unsigned __int64 *v3; // r5@1
  void *v4; // r0@2
  int v5; // r5@3
  mce::ShaderConstantBase *v6; // r0@3
  mce::ShaderConstantBase *v7; // r5@3
  void *v8; // r0@7
  int v9; // r5@8
  mce::ShaderConstantBase *v10; // r0@8
  mce::ShaderConstantBase *v11; // r5@8
  void *v12; // r0@12
  int v13; // r5@13
  mce::ShaderConstantBase *v14; // r0@13
  mce::ShaderConstantBase *v15; // r5@13
  void *v16; // r0@17
  int v17; // r5@18
  mce::ShaderConstantBase *v18; // r0@18
  mce::ShaderConstantBase *v19; // r5@18
  void *v20; // r0@22
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  void *v23; // r0@27
  int v24; // r5@28
  mce::ShaderConstantBase *v25; // r0@28
  mce::ShaderConstantBase *v26; // r5@28
  void *v27; // r0@32
  int v28; // r5@33
  mce::ShaderConstantBase *v29; // r0@33
  mce::ShaderConstantBase *v30; // r5@33
  void *v31; // r0@37
  int v32; // r5@38
  mce::ShaderConstantBase *v33; // r0@38
  mce::ShaderConstantBase *v34; // r5@38
  void *v35; // r0@42
  int v36; // r5@43
  mce::ShaderConstantBase *v37; // r0@43
  mce::ShaderConstantBase *v38; // r5@43
  unsigned int *v39; // r2@49
  signed int v40; // r1@51
  unsigned int *v41; // r2@53
  signed int v42; // r1@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  unsigned int *v45; // r2@61
  signed int v46; // r1@63
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  unsigned int *v49; // r2@69
  signed int v50; // r1@71
  unsigned int *v51; // r2@73
  signed int v52; // r1@75
  unsigned int *v53; // r2@77
  signed int v54; // r1@79
  int v55; // [sp+8h] [bp-60h]@43
  int v56; // [sp+10h] [bp-58h]@38
  int v57; // [sp+18h] [bp-50h]@33
  int v58; // [sp+20h] [bp-48h]@28
  int v59; // [sp+28h] [bp-40h]@27
  int v60; // [sp+30h] [bp-38h]@18
  int v61; // [sp+38h] [bp-30h]@13
  int v62; // [sp+40h] [bp-28h]@8
  int v63; // [sp+48h] [bp-20h]@3
  int v64; // [sp+50h] [bp-18h]@2

  v2 = this;
  v3 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  *((_BYTE *)this + 24) = a2;
  if ( a2 == 1 )
  {
    sub_21E94B4((void **)&v64, "WorldConstantsStereographic");
    *((_DWORD *)v2 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v3, (const void **)&v64);
    v4 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
    {
      v39 = (unsigned int *)(v64 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
      }
      else
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v63, "WORLDVIEWPROJ_STEREO");
    v6 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v5, (const void **)&v63);
    v7 = v6;
    if ( v6 )
      if ( mce::ShaderConstantBase::getType(v6) != 11 )
        v7 = 0;
      *((_DWORD *)v2 + 2) = v7;
    v8 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v63 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v62, "WORLD_STEREO");
    v10 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v9, (const void **)&v62);
    v11 = v10;
    if ( v10 )
      if ( mce::ShaderConstantBase::getType(v10) != 11 )
        v11 = 0;
      *((_DWORD *)v2 + 3) = v11;
    v12 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v62 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v61, "WORLDVIEW_STEREO");
    v14 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v13, (const void **)&v61);
    v15 = v14;
    if ( v14 )
      if ( mce::ShaderConstantBase::getType(v14) != 11 )
        v15 = 0;
      *((_DWORD *)v2 + 4) = v15;
    v16 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v61 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v60, "PROJ_STEREO");
    v18 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v17, (const void **)&v60);
    v19 = v18;
    if ( v18 )
      if ( mce::ShaderConstantBase::getType(v18) != 11 )
        v19 = 0;
      *((_DWORD *)v2 + 5) = v19;
    v20 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v60 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        goto LABEL_86;
LABEL_85:
      v22 = (*v21)--;
LABEL_86:
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
      return;
  }
  else
    sub_21E94B4((void **)&v59, "WorldConstants");
    *((_DWORD *)v2 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v3, (const void **)&v59);
    v23 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v59 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v58, "WORLDVIEWPROJ");
    v25 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v24, (const void **)&v58);
    v26 = v25;
    if ( v25 )
      if ( mce::ShaderConstantBase::getType(v25) != 11 )
        v26 = 0;
      *((_DWORD *)v2 + 2) = v26;
    v27 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v58 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v57, "WORLD");
    v29 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v28, (const void **)&v57);
    v30 = v29;
    if ( v29 )
      if ( mce::ShaderConstantBase::getType(v29) != 11 )
        v30 = 0;
      *((_DWORD *)v2 + 3) = v30;
    v31 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v57 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v56, "WORLDVIEW");
    v33 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v32, (const void **)&v56);
    v34 = v33;
    if ( v33 )
      if ( mce::ShaderConstantBase::getType(v33) != 11 )
        v34 = 0;
      *((_DWORD *)v2 + 4) = v34;
    v35 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v56 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = *((_DWORD *)v2 + 1);
    sub_21E94B4((void **)&v55, "PROJ");
    v37 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v36, (const void **)&v55);
    v38 = v37;
    if ( v37 )
      if ( mce::ShaderConstantBase::getType(v37) != 11 )
        v38 = 0;
      *((_DWORD *)v2 + 5) = v38;
    v20 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v55 - 4);
      goto LABEL_85;
}


int __fastcall mce::VertexFormat::getFieldOffset(int a1, int a2, int a3)
{
  return *(_BYTE *)(a1 + a2 + 1) + a3;
}


mce::RenderContextStateBase *__fastcall mce::RenderContextStateBase::RenderContextStateBase(mce::RenderContextStateBase *this)
{
  mce::RenderContextStateBase *v1; // r4@1

  v1 = this;
  mce::BlendStateDescription::BlendStateDescription(this);
  mce::DepthStencilStateDescription::DepthStencilStateDescription((mce::RenderContextStateBase *)((char *)v1 + 8));
  mce::RasterizerStateDescription::RasterizerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 32));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 44));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 52));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 60));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 68));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 76));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 84));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 92));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderContextStateBase *)((char *)v1 + 100));
  *((_BYTE *)v1 + 130) = 0;
  *((_WORD *)v1 + 64) = 0;
  *((_DWORD *)v1 + 31) = 0;
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 28) = 0;
  *((_DWORD *)v1 + 27) = 0;
  _aeabi_memclr4((char *)v1 + 132, 33);
  return v1;
}


int __fastcall mce::TexturePtr::invalidate(mce::TexturePtr *this)
{
  mce::TexturePtr *v1; // r4@1
  mce::TextureGroup *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = (mce::TextureGroup *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    mce::TextureGroup::_removeRef(v2, v1);
    *((_DWORD *)v1 + 1) = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 2) = 0;
  return result;
}


int __fastcall mce::Clock::resume(int result)
{
  *(_BYTE *)(result + 20) = 0;
  return result;
}


int __fastcall mce::ShaderProgramOGL::deleteShader(mce::ShaderProgramOGL *this)
{
  mce::ShaderProgramOGL *v1; // r4@1
  int result; // r0@1

  v1 = this;
  glad_glDeleteShader(*((_DWORD *)this + 3));
  result = 0;
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


mce::FrameBufferObjectBase *__fastcall mce::FrameBufferObjectBase::~FrameBufferObjectBase(mce::FrameBufferObjectBase *this)
{
  mce::FrameBufferObjectBase *v1; // r4@1
  mce::FrameBufferAttachment **v2; // r5@1 OVERLAPPED
  mce::FrameBufferAttachment **v3; // r6@1 OVERLAPPED
  void *v4; // r0@3

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
      {
        v4 = (void *)mce::FrameBufferAttachment::~FrameBufferAttachment(*v2);
        operator delete(v4);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (mce::FrameBufferAttachment **)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall mce::RenderMaterialGroup::onAppSuspended(int result)
{
  pthread_mutex_t *v1; // r4@2
  int v2; // r0@2

  __dmb();
  *(_BYTE *)(result + 100) = 1;
  if ( &pthread_create )
  {
    v1 = (pthread_mutex_t *)(result + 96);
    v2 = pthread_mutex_lock((pthread_mutex_t *)(result + 96));
    if ( v2 )
      sub_119CCFC(v2);
    result = (int)&pthread_create;
    if ( &pthread_create )
      result = pthread_mutex_unlock(v1);
  }
  return result;
}


mce::TextureBase *__fastcall mce::TextureBase::~TextureBase(mce::TextureBase *this)
{
  mce::TextureBase *v1; // r4@1
  mce::RenderContextImmediate *v2; // r0@1
  mce::RenderContextStateBase *v3; // r0@2

  v1 = this;
  v2 = (mce::RenderContextImmediate *)*((_BYTE *)this + 40);
  if ( v2 )
  {
    v3 = (mce::RenderContextStateBase *)mce::RenderContextImmediate::get(v2);
    mce::RenderContextStateBase::removeIfBound(v3, v1);
  }
  return v1;
}


int __fastcall mce::ConstantBufferContainerBase::ConstantBufferContainerBase(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  void *v6; // r0@1
  int v7; // r1@1
  int v8; // r1@1

  v2 = a2;
  v3 = a1;
  _aeabi_memclr4(a1, 36);
  *(_DWORD *)(v3 + 36) = &unk_28898CC;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v2 + 12) = 0;
  v4 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 16) = v4;
  v5 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)(v3 + 20) = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 20) = v5;
  v6 = *(void **)(v3 + 24);
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = 0;
  v7 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v2 + 28) = v7;
  v8 = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 32) = v8;
  if ( v6 )
    free(v6);
  return v3;
}


char *__fastcall mce::ShaderConstantBase::getName(mce::ShaderConstantBase *this)
{
  return (char *)this + 4;
}


void __fastcall mce::InterFrameConstants::init(mce::InterFrameConstants *this)
{
  mce::InterFrameConstants::init(this);
}


int __fastcall mce::Camera::setupPerspectiveProjection(mce::Camera *this, float _R1, unsigned int _R2, float _R3, float a5, float a6)
{
  int v11; // r4@1
  int result; // r0@1

  __asm { VMOV            S0, R2 }
  _R5 = this;
  __asm
  {
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VLDR            S18, [SP,#0x28+arg_4]
    VCVT.F32.U32    S2, S2
    VLDR            S20, [SP,#0x28+arg_0]
    VMOV            S4, R3
    VDIV.F32        S0, S2, S0
    VLDR            S2, =0.0087266
    VSTR            S0, [R5,#0xA0]
    VSTR            S20, [R5,#0xA8]
    VMUL.F32        S16, S4, S2
    VSTR            S18, [R5,#0xAC]
  }
  v11 = MatrixStack::getTop((mce::Camera *)((char *)this + 32));
  __asm { VMOV            R0, S16 }
  _R0 = tanf(_R0);
    VMOV.F32        S0, #-2.0
    VLDR            S6, [R5,#0xA0]
    VADD.F32        S2, S20, S18
    VMOV            S4, R0
  result = 0;
    VMOV.F32        S8, #1.0
    VMUL.F32        S6, S6, S4
    VSUB.F32        S10, S18, S20
    VMUL.F32        S0, S20, S0
    VNEG.F32        S2, S2
    VDIV.F32        S4, S8, S4
    VMUL.F32        S0, S0, S18
    VDIV.F32        S6, S8, S6
    VDIV.F32        S2, S2, S10
    VDIV.F32        S0, S0, S10
    VSTR            S6, [R4]
  *(_DWORD *)(v11 + 12) = 0;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  __asm { VSTR            S4, [R4,#0x14] }
  *(_DWORD *)(v11 + 32) = 0;
  *(_DWORD *)(v11 + 36) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = 0;
  __asm { VSTR            S2, [R4,#0x28] }
  *(_DWORD *)(v11 + 44) = -1082130432;
  *(_DWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 52) = 0;
  __asm { VSTR            S0, [R4,#0x38] }
  *(_DWORD *)(v11 + 60) = 0;
  return result;
}


int __fastcall mce::WorldConstants::WorldConstants(mce::WorldConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8C28;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall mce::RasterizerState::RasterizerState(mce::RasterizerState *this)
{
  int result; // r0@1

  result = mce::RasterizerStateDescription::RasterizerStateDescription(this);
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 16) = 0;
  *(_BYTE *)(result + 17) = 1;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


int __fastcall mce::ShaderUniformOGL::bind(mce::ShaderUniformOGL *this, int a2)
{
  mce::ShaderUniformOGL *v2; // r4@1
  int result; // r0@2
  __int64 v4; // r1@3

  v2 = this;
  if ( a2 || (result = mce::ShaderConstantBase::isDirty(*((mce::ShaderConstantBase **)this + 4)), result == 1) )
  {
    v4 = *(_QWORD *)v2;
    result = (*(int (**)(void))(**((_DWORD **)v2 + 4) + 8))();
  }
  return result;
}


void __fastcall mce::ShaderConstantMatrix4x4::~ShaderConstantMatrix4x4(mce::ShaderConstantMatrix4x4 *this)
{
  mce::ShaderConstantMatrix4x4::~ShaderConstantMatrix4x4(this);
}


int __fastcall mce::BufferBase::createDynamicBuffer(int result, int a2, int a3, int a4, int a5, char a6)
{
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a5;
  *(_DWORD *)(result + 12) = a5 * a3;
  *(_BYTE *)result = a6;
  return result;
}


void __fastcall mce::RenderDeviceBase::getClosestSupportedSampleDescription(int a1)
{
  int v1; // r8@1
  _QWORD *v2; // r2@1

  v1 = a1;
  mce::RenderDevice::getMultisampleQualityLevels();
  v2 = 0;
  if ( v2 )
  {
    *(_QWORD *)v1 = *v2;
  }
  else
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    *(_DWORD *)v1 = 1;
}


int __fastcall mce::FrameBufferObjectBase::createFrameBufferAttachmentWithTexture(mce::FrameBufferObjectBase *this, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, const mce::Texture *a4, int a5, unsigned __int16 a6)
{
  mce::FrameBufferObjectBase *v6; // r11@1
  const mce::Texture *v7; // r8@1
  const mce::FrameBufferAttachmentDescription *v8; // r10@1
  mce::RenderContext *v9; // r9@1
  void *v10; // r5@1
  int v11; // r0@1
  int v12; // r3@1
  int v13; // r4@1
  int v14; // r6@1
  int v15; // r7@1
  int v16; // r0@1
  int v17; // r3@1
  int v18; // r4@1
  int v19; // r6@1
  int v20; // r7@1
  int v21; // r0@1
  int v22; // r3@1
  int v23; // r4@1
  int v24; // r6@1
  int v25; // r7@1
  int v26; // r2@1
  __int64 v27; // r0@5
  int v28; // r4@6
  void *v29; // r0@8
  mce::FrameBufferAttachment *v31; // [sp+8h] [bp-28h]@1

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = operator new(0x5Cu);
  mce::FrameBufferAttachment::FrameBufferAttachment((mce::FrameBufferAttachment *)v10);
  v31 = (mce::FrameBufferAttachment *)v10;
  *((_DWORD *)v10 + 2) = v6;
  v11 = (int)v10 + 12;
  v12 = *((_DWORD *)v8 + 1);
  v13 = *((_DWORD *)v8 + 2);
  v14 = *((_DWORD *)v8 + 3);
  v15 = *((_DWORD *)v8 + 4);
  *(_DWORD *)v11 = *(_DWORD *)v8;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  *(_DWORD *)(v11 + 16) = v15;
  v16 = (int)v10 + 32;
  v17 = *((_DWORD *)v8 + 6);
  v18 = *((_DWORD *)v8 + 7);
  v19 = *((_DWORD *)v8 + 8);
  v20 = *((_DWORD *)v8 + 9);
  *(_DWORD *)v16 = *((_DWORD *)v8 + 5);
  *(_DWORD *)(v16 + 4) = v17;
  *(_DWORD *)(v16 + 8) = v18;
  *(_DWORD *)(v16 + 12) = v19;
  *(_DWORD *)(v16 + 16) = v20;
  v21 = (int)v10 + 52;
  v22 = *((_DWORD *)v8 + 11);
  v23 = *((_DWORD *)v8 + 12);
  v24 = *((_DWORD *)v8 + 13);
  v25 = *((_DWORD *)v8 + 14);
  *(_DWORD *)v21 = *((_DWORD *)v8 + 10);
  *(_DWORD *)(v21 + 4) = v22;
  *(_DWORD *)(v21 + 8) = v23;
  *(_DWORD *)(v21 + 12) = v24;
  *(_DWORD *)(v21 + 16) = v25;
  *((_BYTE *)v10 + 72) = *((_BYTE *)v8 + 60);
  v26 = *((_DWORD *)v10 + 17);
  if ( (unsigned int)(v26 - 2) >= 3 )
  {
    if ( v26 == 1 )
    {
      *((_DWORD *)v6 + 7) = v10;
      ++*((_DWORD *)v6 + 9);
    }
  }
  else
    *((_DWORD *)v6 + 8) = v10;
  *(_QWORD *)((char *)v10 + 36) = *(_QWORD *)v6;
  *((_DWORD *)v10 + 3) = *((_DWORD *)v6 + 2);
  *((_DWORD *)v10 + 4) = *((_DWORD *)v6 + 3);
  mce::FrameBufferAttachmentOGL::createAttachmentWithTexture((mce::FrameBufferAttachmentOGL *)v10, v9, v8, v7, a5, a6);
  v27 = *(_QWORD *)((char *)v6 + 20);
  if ( (_DWORD)v27 == HIDWORD(v27) )
    std::vector<std::unique_ptr<mce::FrameBufferAttachment,std::default_delete<mce::FrameBufferAttachment>>,std::allocator<std::unique_ptr<mce::FrameBufferAttachment,std::default_delete<mce::FrameBufferAttachment>>>>::_M_emplace_back_aux<std::unique_ptr<mce::FrameBufferAttachment,std::default_delete<mce::FrameBufferAttachment>>>(
      (_QWORD *)v6 + 2,
      (int *)&v31);
    v28 = *(_DWORD *)(*((_DWORD *)v6 + 5) - 4);
    if ( v31 )
      v29 = (void *)mce::FrameBufferAttachment::~FrameBufferAttachment(v31);
      operator delete(v29);
    v31 = 0;
    *(_DWORD *)v27 = v10;
    *((_DWORD *)v6 + 5) = v27 + 4;
    v28 = *(_DWORD *)v27;
  return v28;
}


int __fastcall mce::RenderContextOGL::setRenderTarget(mce::RenderContextOGL *this)
{
  mce::RenderContextBase *v1; // r4@1

  v1 = this;
  glad_glBindFramebuffer(36160, *((_DWORD *)this + 88));
  return j_j_j__ZN3mce17RenderContextBase15setRenderTargetEv(v1);
}


int __fastcall mce::ShaderGroup::loadShader(int a1, int *a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  int *v6; // r5@1
  int *v7; // r6@1
  int *v8; // r9@1
  int *v9; // r10@1
  mce::ShaderProgram *v10; // r8@4
  mce::ShaderProgram *v11; // r9@4
  mce::ShaderProgram *v12; // r7@4
  mce::Shader *v13; // r6@4
  __int64 v14; // r0@4
  void *v15; // r0@7
  int v16; // r4@9
  char *v17; // r0@9
  char *v18; // r0@10
  char *v19; // r0@11
  unsigned int *v21; // r2@13
  signed int v22; // r1@15
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  int *v27; // [sp+Ch] [bp-3Ch]@1
  mce::Shader *v28; // [sp+10h] [bp-38h]@4
  char *v29; // [sp+14h] [bp-34h]@1
  char *v30; // [sp+18h] [bp-30h]@1
  char *v31; // [sp+1Ch] [bp-2Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a2;
  v27 = a3;
  v31 = (char *)&unk_28898CC;
  v29 = (char *)&unk_28898CC;
  v30 = (char *)&unk_28898CC;
  mce::_getFullPath(a3, (int *)&v31);
  mce::_getFullPath(v6, (int *)&v30);
  mce::_getFullPath(a5, (int *)&v29);
  v8 = *(int **)(v5 + 12);
  v9 = *(int **)(v5 + 16);
  if ( v8 == v9 )
  {
LABEL_4:
    v10 = mce::ShaderGroup::getShaderProgram(v5, 0, v27, v7, (const void **)&v31);
    v11 = mce::ShaderGroup::getShaderProgram(v5, 1, v6, v7, (const void **)&v30);
    v12 = mce::ShaderGroup::getShaderProgram(v5, 2, a5, v7, (const void **)&v29);
    v13 = (mce::Shader *)operator new(0x7Cu);
    mce::Shader::Shader((int)v13, v5 + 52, v10, v11, v12);
    v28 = v13;
    v14 = *(_QWORD *)(v5 + 16);
    if ( (_DWORD)v14 == HIDWORD(v14) )
    {
      std::vector<std::unique_ptr<mce::Shader,std::default_delete<mce::Shader>>,std::allocator<std::unique_ptr<mce::Shader,std::default_delete<mce::Shader>>>>::_M_emplace_back_aux<std::unique_ptr<mce::Shader,std::default_delete<mce::Shader>>>(
        (_QWORD *)(v5 + 12),
        (int *)&v28);
      if ( v28 )
      {
        v15 = (void *)mce::Shader::~Shader(v28);
        operator delete(v15);
      }
    }
    else
      v28 = 0;
      *(_DWORD *)v14 = v13;
      *(_DWORD *)(v5 + 16) = v14 + 4;
    v28 = 0;
    v8 = (int *)(*(_DWORD *)(v5 + 16) - 4);
  }
  else
    while ( !mce::Shader::isBuiltFrom(*v8) )
      ++v8;
      if ( v9 == v8 )
        goto LABEL_4;
  v16 = *v8;
  v17 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v30 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v31 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  return v16;
}


int __fastcall mce::BufferOGL::createDynamicBuffer(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // r5@1
  int v7; // r9@1
  int v8; // r8@1
  int v9; // r7@1
  signed int v10; // r1@1
  int v11; // r3@5

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  mce::BufferBase::createDynamicBuffer(a1, a2, a3, a4, a5, a6);
  v10 = 0;
  if ( a6 == 1 )
    v10 = 34963;
  if ( !a6 )
    v10 = 34962;
  *(_DWORD *)(v6 + 24) = v10;
  glad_glGenBuffers(1, v6 + 20);
  glad_glBindBuffer(*(_QWORD *)(v6 + 20) >> 32, *(_QWORD *)(v6 + 20));
  if ( a6 >= 2 )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", a6, 2, v11);
  *(_DWORD *)(v9 + 4 * a6 + 280) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(v9 + 356) = v8;
  *(_DWORD *)(v6 + 28) = 35040;
  return glad_glBufferData(*(_DWORD *)(v6 + 24), *(_DWORD *)(v6 + 12), v7, 35040);
}


char *__fastcall mce::AlignmentHelper::getAlignedSize(mce::AlignmentHelper *this, unsigned int a2, unsigned int a3)
{
  return (char *)this + (a2 - (unsigned int)this % a2) % a2;
}


int __fastcall mce::WorldConstantsHolographic::_setConstantsForTextureDrawing(int a1, int a2, int a3)
{
  int v3; // r4@1
  MatrixStack *v4; // r7@1
  int v5; // ST64_4@1
  int v6; // ST68_4@1
  int v7; // r1@2
  int v8; // r12@2
  int v9; // r2@2
  int v10; // r4@2
  int v11; // r7@2
  int v12; // r3@2
  int v13; // r9@2
  int v14; // r11@2
  int v15; // lr@2
  int v16; // r10@4
  int v17; // r5@4
  int v18; // r8@4
  int v19; // r0@4
  int v20; // r0@4
  int v21; // r1@4
  int v22; // r11@4
  __int64 v23; // kr40_8@4
  __int64 v24; // ST64_8@4 OVERLAPPED
  int v25; // ST60_4@4
  int v26; // ST58_4@4
  int v27; // ST54_4@4
  int v28; // r5@4
  int v29; // r6@4
  int v30; // r10@4
  __int64 v31; // kr48_8@4
  __int64 v32; // kr50_8@4
  int v33; // r0@4
  int v34; // lr@4
  int v35; // r1@4
  int v36; // r11@4
  __int64 v37; // kr58_8@4
  int v38; // r6@4
  int v39; // r7@4
  __int64 v40; // kr60_8@4
  __int64 v41; // kr68_8@4
  __int64 v42; // kr70_8@4
  int v43; // r0@4
  int v44; // r12@4
  int result; // r0@4
  int v46; // r1@4
  int v47; // [sp+8h] [bp-1D8h]@2
  int v48; // [sp+Ch] [bp-1D4h]@2
  int v49; // [sp+10h] [bp-1D0h]@2
  __int64 v50; // [sp+14h] [bp-1CCh]@2
  __int64 v51; // [sp+1Ch] [bp-1C4h]@2
  __int64 v52; // [sp+24h] [bp-1BCh]@2
  int v53; // [sp+2Ch] [bp-1B4h]@2
  _BYTE v54[12]; // [sp+30h] [bp-1B0h]@2
  int v55; // [sp+3Ch] [bp-1A4h]@2
  int v56; // [sp+40h] [bp-1A0h]@2
  int v57; // [sp+44h] [bp-19Ch]@2
  int v58; // [sp+48h] [bp-198h]@2
  int v59; // [sp+4Ch] [bp-194h]@2
  int v60; // [sp+50h] [bp-190h]@2
  int v61; // [sp+54h] [bp-18Ch]@2
  int v62; // [sp+58h] [bp-188h]@2
  __int64 *v63; // [sp+5Ch] [bp-184h]@2
  __int64 *v64; // [sp+60h] [bp-180h]@2
  __int64 v65; // [sp+64h] [bp-17Ch]@2
  int v66; // [sp+6Ch] [bp-174h]@1
  int v67; // [sp+70h] [bp-170h]@1
  int v68; // [sp+74h] [bp-16Ch]@1
  __int64 v69; // [sp+78h] [bp-168h]@1
  __int64 v70; // [sp+80h] [bp-160h]@1
  __int64 v71; // [sp+88h] [bp-158h]@1
  __int64 v72; // [sp+90h] [bp-150h]@1
  int v73; // [sp+98h] [bp-148h]@1
  int v74; // [sp+9Ch] [bp-144h]@1
  __int64 v75; // [sp+A0h] [bp-140h]@1
  __int64 v76; // [sp+A8h] [bp-138h]@1
  __int64 v77; // [sp+B0h] [bp-130h]@1
  __int64 v78; // [sp+B8h] [bp-128h]@1
  __int64 v79; // [sp+C0h] [bp-120h]@1
  __int64 v80; // [sp+C8h] [bp-118h]@1
  __int64 v81; // [sp+D0h] [bp-110h]@1
  int v82; // [sp+D8h] [bp-108h]@1
  int v83; // [sp+DCh] [bp-104h]@1
  __int64 v84; // [sp+E0h] [bp-100h]@1
  __int64 v85; // [sp+E8h] [bp-F8h]@1
  __int64 v86; // [sp+F0h] [bp-F0h]@1
  __int64 v87; // [sp+F8h] [bp-E8h]@1
  int v88; // [sp+100h] [bp-E0h]@1
  int v89; // [sp+104h] [bp-DCh]@1
  __int64 v90; // [sp+108h] [bp-D8h]@1
  __int64 v91; // [sp+110h] [bp-D0h]@1
  int v92; // [sp+118h] [bp-C8h]@1
  int v93; // [sp+11Ch] [bp-C4h]@1
  __int64 v94; // [sp+120h] [bp-C0h]@1
  __int64 v95; // [sp+128h] [bp-B8h]@1
  __int64 v96; // [sp+130h] [bp-B0h]@1
  __int64 v97; // [sp+138h] [bp-A8h]@1
  int v98; // [sp+140h] [bp-A0h]@1
  int v99; // [sp+144h] [bp-9Ch]@1
  __int64 v100; // [sp+148h] [bp-98h]@1
  __int64 v101; // [sp+150h] [bp-90h]@1
  int v102; // [sp+158h] [bp-88h]@1
  int v103; // [sp+15Ch] [bp-84h]@1
  __int64 v104; // [sp+160h] [bp-80h]@1
  __int64 v105; // [sp+168h] [bp-78h]@1
  __int64 v106; // [sp+170h] [bp-70h]@1
  __int64 v107; // [sp+17Ch] [bp-64h]@1
  int v108; // [sp+184h] [bp-5Ch]@1
  int v109; // [sp+188h] [bp-58h]@1
  __int64 v110; // [sp+18Ch] [bp-54h]@1
  __int64 v111; // [sp+194h] [bp-4Ch]@1
  int v112; // [sp+19Ch] [bp-44h]@1
  int v113; // [sp+1A0h] [bp-40h]@1
  __int64 v114; // [sp+1A4h] [bp-3Ch]@1
  __int64 v115; // [sp+1ACh] [bp-34h]@1
  __int64 v116; // [sp+1B4h] [bp-2Ch]@1

  v3 = a1;
  v4 = (MatrixStack *)a2;
  v66 = a3;
  v68 = a1;
  v67 = MatrixStack::top((MatrixStack *)(a2 + 32));
  v5 = MatrixStack::top(v4);
  v97 = 1065353216LL;
  v99 = 0;
  LODWORD(v100) = 0;
  v98 = 0;
  HIDWORD(v101) = 0;
  v102 = 0;
  *(__int64 *)((char *)&v100 + 4) = 1065353216LL;
  v103 = 0;
  v104 = 1065353216LL;
  v106 = 4575657221408423936LL;
  v105 = 0LL;
  v88 = 0;
  v89 = 0;
  v87 = 1065353216LL;
  LODWORD(v90) = 0;
  *(__int64 *)((char *)&v90 + 4) = 1065353216LL;
  v92 = 0;
  v93 = 0;
  HIDWORD(v91) = 0;
  v95 = 0LL;
  v94 = 1065353216LL;
  v96 = 4575657221408423936LL;
  v79 = 0LL;
  v78 = 1065353216LL;
  LODWORD(v80) = 0;
  *(__int64 *)((char *)&v80 + 4) = 1065353216LL;
  v82 = 0;
  v83 = 0;
  HIDWORD(v81) = 0;
  v85 = 0LL;
  v84 = 1065353216LL;
  v86 = 4575657221408423936LL;
  v70 = 0LL;
  v69 = 1065353216LL;
  LODWORD(v71) = 0;
  *(__int64 *)((char *)&v71 + 4) = 1065353216LL;
  v73 = 0;
  v74 = 0;
  HIDWORD(v72) = 0;
  v76 = 0LL;
  v75 = 1065353216LL;
  v77 = 4575657221408423936LL;
  v6 = *(_BYTE *)(v3 + 476);
  glm::detail::operator*<float>((int)&v107, v3 + 284, v5);
  v97 = v107;
  v98 = v108;
  v99 = v109;
  v100 = v110;
  v101 = v111;
  v102 = v112;
  v103 = v113;
  v104 = v114;
  v105 = v115;
  v106 = v116;
  glm::detail::operator*<float>((int)&v107, v68 + 348, v5);
  v87 = v107;
  *(_QWORD *)&v88 = *(_QWORD *)&v108;
  v90 = v110;
  v91 = v111;
  v92 = v112;
  v93 = v113;
  v94 = v114;
  v95 = v115;
  v96 = v116;
  if ( v6 )
  {
    v64 = &v97;
    glm::detail::operator*<float>((int)&v107, v67, (int)&v97);
    v78 = v107;
    v79 = *(_QWORD *)&v108;
    v80 = v110;
    v81 = v111;
    v82 = v112;
    v83 = v113;
    v84 = v114;
    v85 = v115;
    v86 = v116;
    glm::detail::operator*<float>((int)&v107, (int)&v78, v66);
    v60 = HIDWORD(v107);
    v61 = v107;
    v58 = v108;
    v55 = v109;
    v57 = HIDWORD(v116);
    *(_DWORD *)&v54[8] = v116;
    *(_QWORD *)v54 = v115;
    v52 = v114;
    v49 = v113;
    v48 = v112;
    v51 = v111;
    v50 = v110;
    v63 = &v87;
    glm::detail::operator*<float>((int)&v107, v67, (int)&v87);
    v69 = v107;
    v70 = *(_QWORD *)&v108;
    v71 = v110;
    v72 = v111;
    v73 = v112;
    v74 = v113;
    LODWORD(v75) = v114;
    *(__int64 *)((char *)&v75 + 4) = *(__int64 *)((char *)&v114 + 4);
    HIDWORD(v76) = HIDWORD(v115);
    v77 = v116;
    glm::detail::operator*<float>((int)&v107, (int)&v69, v66);
    v62 = HIDWORD(v116);
    v65 = *(__int64 *)((char *)&v115 + 4);
    v59 = v115;
    v56 = HIDWORD(v114);
    v53 = v114;
    v7 = HIDWORD(v107);
    v8 = v113;
    v47 = v107;
    v9 = v108;
    v10 = v109;
    v11 = v112;
    v13 = HIDWORD(v110);
    v12 = v110;
    v15 = HIDWORD(v111);
    v14 = v111;
  }
  else
    v69 = v78;
    v70 = v79;
    v71 = v80;
    v72 = v81;
    v73 = v82;
    v74 = v83;
    v75 = v84;
    v76 = v85;
    v77 = v86;
    *(_QWORD *)&v54[4] = *(__int64 *)((char *)&v115 + 4);
    *(_DWORD *)v54 = v115;
  v16 = *(_DWORD *)(v68 + 8);
  v17 = *(_DWORD *)(v16 + 20);
  *(_DWORD *)v17 = v61;
  v18 = v17 + 64;
  *(_DWORD *)(v17 + 4) = v60;
  *(_DWORD *)(v17 + 8) = v58;
  *(_DWORD *)(v17 + 12) = v55;
  *(_QWORD *)(v17 + 16) = v50;
  *(_QWORD *)(v17 + 24) = v51;
  *(_DWORD *)(v17 + 32) = v48;
  *(_DWORD *)(v17 + 36) = v49;
  *(_QWORD *)(v17 + 40) = v52;
  *(_QWORD *)(v17 + 48) = *(_QWORD *)v54;
  *(_DWORD *)(v17 + 56) = *(_DWORD *)&v54[8];
  *(_DWORD *)(v17 + 60) = v57;
  *(_DWORD *)v18 = v47;
  *(_DWORD *)(v18 + 4) = v7;
  *(_DWORD *)(v18 + 8) = v9;
  *(_DWORD *)(v18 + 12) = v10;
  v19 = v17 + 80;
  *(_DWORD *)v19 = v12;
  *(_DWORD *)(v19 + 4) = v13;
  *(_DWORD *)(v19 + 8) = v14;
  *(_DWORD *)(v19 + 12) = v15;
  *(_DWORD *)(v17 + 96) = v11;
  *(_DWORD *)(v17 + 100) = v8;
  *(_DWORD *)(v17 + 104) = v53;
  *(_DWORD *)(v17 + 108) = v56;
  *(_DWORD *)(v17 + 112) = v59;
  *(_QWORD *)(v17 + 116) = v65;
  *(_DWORD *)(v17 + 124) = v62;
  *(_BYTE *)(v16 + 17) = 1;
  v20 = *(_DWORD *)(v68 + 12);
  v21 = *(_DWORD *)(v20 + 20);
  *(_DWORD *)v21 = *(_DWORD *)v66;
  *(_DWORD *)(v21 + 4) = *(_DWORD *)(v66 + 4);
  *(_DWORD *)(v21 + 8) = *(_DWORD *)(v66 + 8);
  *(_DWORD *)(v21 + 12) = *(_DWORD *)(v66 + 12);
  *(_DWORD *)(v21 + 16) = *(_DWORD *)(v66 + 16);
  *(_DWORD *)(v21 + 20) = *(_DWORD *)(v66 + 20);
  *(_DWORD *)(v21 + 24) = *(_DWORD *)(v66 + 24);
  *(_DWORD *)(v21 + 28) = *(_DWORD *)(v66 + 28);
  *(_DWORD *)(v21 + 32) = *(_DWORD *)(v66 + 32);
  *(_DWORD *)(v21 + 36) = *(_DWORD *)(v66 + 36);
  *(_DWORD *)(v21 + 40) = *(_DWORD *)(v66 + 40);
  *(_DWORD *)(v21 + 44) = *(_DWORD *)(v66 + 44);
  *(_DWORD *)(v21 + 48) = *(_DWORD *)(v66 + 48);
  *(_DWORD *)(v21 + 52) = *(_DWORD *)(v66 + 52);
  *(_DWORD *)(v21 + 56) = *(_DWORD *)(v66 + 56);
  *(_DWORD *)(v21 + 60) = *(_DWORD *)(v66 + 60);
  *(_BYTE *)(v20 + 17) = 1;
  v22 = *(_DWORD *)(v68 + 16);
  glm::detail::operator*<float>((int)&v107, (int)v64, v66);
  v23 = *(_QWORD *)&v108;
  v24 = v116;
  v25 = HIDWORD(v115);
  v26 = v115;
  v27 = HIDWORD(v114);
  v28 = v112;
  v29 = v113;
  v30 = v114;
  v31 = v110;
  v32 = v111;
  v33 = *(_DWORD *)(v22 + 20);
  *(_QWORD *)v33 = v107;
  v34 = v33 + 16;
  *(_QWORD *)(v33 + 8) = v23;
  *(_QWORD *)v34 = v31;
  *(_QWORD *)(v34 + 8) = v32;
  v35 = v33 + 32;
  *(_DWORD *)v35 = v28;
  *(_DWORD *)(v35 + 4) = v29;
  *(_DWORD *)(v35 + 8) = v30;
  *(_DWORD *)(v33 + 44) = v27;
  *(_DWORD *)(v33 + 48) = v26;
  *(_DWORD *)(v33 + 52) = v25;
  *(_QWORD *)(v33 + 56) = v24;
  *(_BYTE *)(v22 + 17) = 1;
  v36 = *(_DWORD *)(v68 + 16);
  glm::detail::operator*<float>((int)&v107, (int)v63, v66);
  v37 = *(_QWORD *)&v108;
  *(__int64 *)((char *)&v24 + 4) = v116;
  *(__int64 *)((char *)&v24 - 4) = v115;
  v40 = v110;
  v41 = v111;
  v38 = v112;
  v39 = v113;
  v42 = v114;
  v43 = *(_DWORD *)(v36 + 20);
  *(_QWORD *)(v43 + 64) = v107;
  v44 = v43 + 80;
  *(_QWORD *)(v43 + 72) = v37;
  *(_QWORD *)v44 = v40;
  *(_QWORD *)(v44 + 8) = v41;
  *(_DWORD *)(v44 + 16) = v38;
  *(_DWORD *)(v44 + 20) = v39;
  *(_QWORD *)(v44 + 24) = v42;
  *(_QWORD *)(v43 + 112) = *(__int64 *)((char *)&v24 - 4);
  *(_QWORD *)(v43 + 120) = *(__int64 *)((char *)&v24 + 4);
  *(_BYTE *)(v36 + 17) = 1;
  result = *(_DWORD *)(v68 + 20);
  v46 = *(_DWORD *)(result + 20);
  *(_DWORD *)v46 = *(_DWORD *)v67;
  *(_DWORD *)(v46 + 4) = *(_DWORD *)(v67 + 4);
  *(_DWORD *)(v46 + 8) = *(_DWORD *)(v67 + 8);
  *(_DWORD *)(v46 + 12) = *(_DWORD *)(v67 + 12);
  *(_DWORD *)(v46 + 16) = *(_DWORD *)(v67 + 16);
  *(_DWORD *)(v46 + 20) = *(_DWORD *)(v67 + 20);
  *(_DWORD *)(v46 + 24) = *(_DWORD *)(v67 + 24);
  *(_DWORD *)(v46 + 28) = *(_DWORD *)(v67 + 28);
  *(_DWORD *)(v46 + 32) = *(_DWORD *)(v67 + 32);
  *(_DWORD *)(v46 + 36) = *(_DWORD *)(v67 + 36);
  *(_DWORD *)(v46 + 40) = *(_DWORD *)(v67 + 40);
  *(_DWORD *)(v46 + 44) = *(_DWORD *)(v67 + 44);
  *(_DWORD *)(v46 + 48) = *(_DWORD *)(v67 + 48);
  *(_DWORD *)(v46 + 52) = *(_DWORD *)(v67 + 52);
  *(_DWORD *)(v46 + 56) = *(_DWORD *)(v67 + 56);
  *(_DWORD *)(v46 + 60) = *(_DWORD *)(v67 + 60);
  *(_DWORD *)(v46 + 64) = *(_DWORD *)v67;
  *(_DWORD *)(v46 + 68) = *(_DWORD *)(v67 + 4);
  *(_DWORD *)(v46 + 72) = *(_DWORD *)(v67 + 8);
  *(_DWORD *)(v46 + 76) = *(_DWORD *)(v67 + 12);
  *(_DWORD *)(v46 + 80) = *(_DWORD *)(v67 + 16);
  *(_DWORD *)(v46 + 84) = *(_DWORD *)(v67 + 20);
  *(_DWORD *)(v46 + 88) = *(_DWORD *)(v67 + 24);
  *(_DWORD *)(v46 + 92) = *(_DWORD *)(v67 + 28);
  *(_DWORD *)(v46 + 96) = *(_DWORD *)(v67 + 32);
  *(_DWORD *)(v46 + 100) = *(_DWORD *)(v67 + 36);
  *(_DWORD *)(v46 + 104) = *(_DWORD *)(v67 + 40);
  *(_DWORD *)(v46 + 108) = *(_DWORD *)(v67 + 44);
  *(_DWORD *)(v46 + 112) = *(_DWORD *)(v67 + 48);
  *(_DWORD *)(v46 + 116) = *(_DWORD *)(v67 + 52);
  *(_DWORD *)(v46 + 120) = *(_DWORD *)(v67 + 56);
  *(_DWORD *)(v46 + 124) = *(_DWORD *)(v67 + 60);
  *(_BYTE *)(result + 17) = 1;
  return result;
}


int __fastcall mce::WorldConstantsHolographic::setLeftAndRightShiftMats(int result, int a2, int a3)
{
  *(_DWORD *)(result + 284) = *(_DWORD *)a2;
  *(_DWORD *)(result + 288) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 292) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 296) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 300) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 304) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 308) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(result + 312) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 316) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 320) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 324) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 328) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 332) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 336) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 340) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 344) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(result + 348) = *(_DWORD *)a3;
  *(_DWORD *)(result + 352) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 356) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 360) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(result + 364) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(result + 368) = *(_DWORD *)(a3 + 20);
  *(_DWORD *)(result + 372) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(result + 376) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(result + 380) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(result + 384) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(result + 388) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(result + 392) = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(result + 396) = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(result + 400) = *(_DWORD *)(a3 + 52);
  *(_DWORD *)(result + 404) = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(result + 408) = *(_DWORD *)(a3 + 60);
  return result;
}


int __fastcall mce::SwapChainBase::present(mce::SwapChainBase *this)
{
  return 0;
}


signed int __fastcall mce::RenderContextOGL::captureScreenAsRGB(int a1, int a2, int *a3, signed int *a4)
{
  signed int v4; // r10@0
  int *v5; // r5@1
  int v6; // r8@1
  signed int *v7; // r4@1
  int v8; // r9@1
  signed int result; // r0@1
  bool v10; // nf@1
  unsigned __int8 v11; // vf@1
  int v12; // r4@4
  __int64 v13; // kr00_8@4
  unsigned int v14; // r2@4
  unsigned int v15; // r1@4
  void *v16; // r5@8
  int v17; // ST08_4@8
  int v18; // r7@8
  __int16 v19; // r1@11
  int v20; // r0@12
  signed int v21; // r1@12
  signed int v22; // r2@12
  char *v23; // r7@13
  int v24; // r3@13
  int v25; // r7@13
  int v26; // r1@14 OVERLAPPED
  unsigned int v27; // r0@14
  int v28; // r2@14
  unsigned int v29; // r2@14
  const char *v30; // r5@18
  int v31; // r9@18
  int v32; // r11@19
  int v33; // r6@19
  int v34; // r10@19
  const char *v35; // r7@20
  const char *v36; // r4@20
  unsigned int *v37; // r2@26
  signed int v38; // r1@28
  int *v39; // [sp+10h] [bp-60h]@5
  signed int *v40; // [sp+14h] [bp-5Ch]@4
  signed int v41; // [sp+18h] [bp-58h]@18
  int v42; // [sp+1Ch] [bp-54h]@15
  int v43; // [sp+20h] [bp-50h]@19
  const char *v44; // [sp+24h] [bp-4Ch]@18
  void *ptr; // [sp+2Ch] [bp-44h]@8
  char *v46; // [sp+30h] [bp-40h]@8
  char *v47; // [sp+34h] [bp-3Ch]@8
  char v48; // [sp+38h] [bp-38h]@1
  int v49; // [sp+40h] [bp-30h]@1
  int v50; // [sp+44h] [bp-2Ch]@2

  v5 = a3;
  v6 = a2;
  v7 = a4;
  glad_glGetIntegerv(2978, &v48);
  v8 = v49;
  result = 0;
  v11 = __OFSUB__(v49, 1);
  v10 = v49 - 1 < 0;
  if ( v49 >= 1 )
  {
    v4 = v50;
    v11 = __OFSUB__(v50, 1);
    v10 = v50 - 1 < 0;
  }
  if ( !(v10 ^ v11) )
    v40 = v7;
    v12 = v49 * v4;
    v13 = *(_QWORD *)v6;
    v14 = HIDWORD(v13) - v13;
    v15 = 4 * v49 * v4;
    if ( v15 <= HIDWORD(v13) - (signed int)v13 )
    {
      v39 = v5;
      if ( v15 < v14 )
        *(_DWORD *)(v6 + 4) = v13 + v15;
    }
    else
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(v6, v15 - v14);
    glad_glPixelStorei(3333, 1);
    v16 = 0;
    v17 = *(_DWORD *)v6;
    glad_glReadPixels(0, 0, v8, v4);
    v18 = 3 * v12;
    ptr = 0;
    v46 = 0;
    v47 = 0;
    if ( v12 )
      v16 = operator new(3 * v12);
    ptr = v16;
    v47 = (char *)v16 + v18;
    _aeabi_memclr(v16, 3 * v12);
    v46 = (char *)v16 + v18;
    if ( v12 >= 1 )
      v19 = **(_WORD **)v6;
      *((_BYTE *)v16 + 2) = *(_BYTE *)(*(_DWORD *)v6 + 2);
      *(_WORD *)v16 = v19;
      if ( v12 != 1 )
      {
        v20 = v12 - 1;
        v21 = 4;
        v22 = 3;
        do
        {
          --v20;
          v23 = (char *)ptr;
          v24 = *(_DWORD *)v6 + v21;
          *(_WORD *)((char *)ptr + v22) = *(_WORD *)v24;
          v25 = (int)&v23[v22];
          v22 += 3;
          v21 += 4;
          *(_BYTE *)(v25 + 2) = *(_BYTE *)(v24 + 2);
        }
        while ( v20 );
      }
    *(_QWORD *)&v26 = *(_QWORD *)v6;
    v27 = 3 * v8 * v4;
    v29 = v28 - v26;
    if ( v27 <= v29 )
      v42 = v8;
      if ( v27 < v29 )
        *(_DWORD *)(v6 + 4) = v27 + v26;
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(v6, v27 - v29);
    std::vector<unsigned char,std::allocator<unsigned char>>::operator=(__PAIR__(&ptr, v6));
    v30 = (const char *)sub_21E757C(3 * v8, 0);
    v31 = 3 * v8;
    v44 = v30;
    v41 = v4;
    if ( v4 >= 2 )
      v32 = 0;
      v33 = 0;
      v43 = v4 / 2;
      v34 = 3 * (v4 - 1) * v42;
      do
        v35 = *(const char **)v6;
        v36 = (const char *)(*(_DWORD *)v6 + v32);
        _aeabi_memcpy(v30, v36, v31);
        _aeabi_memcpy(v36, &v35[v34], v31);
        v30 = v44;
        _aeabi_memcpy(&v35[v34], v44, v31);
        v32 += v31;
        v34 -= v31;
        ++v33;
      while ( v33 < v43 );
    *v39 = v42;
    *v40 = v41;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
        __dmb();
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9((void *)(v30 - 12));
    if ( ptr )
      operator delete(ptr);
    result = 1;
  return result;
}


void __fastcall mce::ShaderConstantInt4::~ShaderConstantInt4(mce::ShaderConstantInt4 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall mce::operator>(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S2, R0 }
  result = 0;
  __asm
  {
    VMOV            S0, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


char *__fastcall mce::Camera::getFrustum(mce::Camera *this)
{
  return (char *)this + 176;
}


int __fastcall mce::TextureContainer::setImage(__int64 a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r3@1
  int v7; // r5@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r5@1

  v2 = HIDWORD(a1);
  LODWORD(a1) = *(_DWORD *)a1 + 40 * a2;
  v3 = a1;
  j_std::vector<unsigned char,std::allocator<unsigned char>>::operator=(a1);
  v4 = v3 + 12;
  v6 = *(_DWORD *)(v2 + 16);
  v7 = *(_DWORD *)(v2 + 20);
  v5 = v2 + 24;
  *(_DWORD *)v4 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = v7;
  v4 += 12;
  v8 = *(_DWORD *)(v2 + 24);
  v9 = *(_DWORD *)(v2 + 28);
  v10 = *(_DWORD *)(v2 + 32);
  v11 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = v9;
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v11;
  return v4 + 16;
}


int __fastcall mce::DepthStencilStateOGL::createDepthState(mce::DepthStencilStateOGL *this, mce::RenderContext *a2, const mce::DepthStencilStateDescription *a3)
{
  mce::DepthStencilStateOGL *v3; // r6@1
  const mce::DepthStencilStateDescription *v4; // r5@1
  mce::RenderContext *v5; // r4@1
  unsigned int v6; // r0@1
  unsigned int v7; // r1@1
  int v8; // r0@2
  int v9; // r0@4
  int v10; // r2@4
  signed int v11; // r2@6
  int v12; // r1@6
  signed int v13; // r2@10
  int v14; // r1@10
  signed int v15; // r2@14
  int v16; // r1@14
  unsigned int v17; // r1@18
  signed int v18; // r2@20
  int v19; // r0@20
  signed int v20; // r1@20
  signed int v21; // r2@24
  int v22; // r0@24
  int v23; // r0@28
  char v24; // r0@32
  int result; // r0@34
  int v26; // r0@35
  int v27; // r1@35
  int v28; // r5@35
  int v29; // r2@35
  int v30; // r3@35
  int v31; // r6@35
  int v32; // r7@35
  int v33; // [sp+0h] [bp-60h]@1
  int v34; // [sp+18h] [bp-48h]@1
  char v35; // [sp+44h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  mce::DepthStencilStateDescription::DepthStencilStateDescription((mce::DepthStencilStateDescription *)&v33);
  _aeabi_memclr8(&v34, 44);
  v35 = 1;
  _aeabi_memcpy4(v3, &v33, 69);
  mce::DepthStencilStateBase::createDepthState(v3, v5, v4);
  v6 = *((_WORD *)v4 + 1);
  v7 = v6 >> 8;
  if ( (unsigned __int8)v6 > 6u )
    v8 = 0;
  else
    v8 = dword_262D350[(char)v6];
  *((_DWORD *)v3 + 6) = v8;
  v9 = 0;
  v10 = 0;
  if ( v7 <= 6 )
    v10 = dword_262D350[(char)v7];
  *((_DWORD *)v3 + 7) = v10;
  v11 = 0;
  v12 = *((_BYTE *)v4 + 6);
  if ( v12 == 3 )
    v11 = 7681;
  if ( v12 == 1 )
    v11 = 7680;
  *((_DWORD *)v3 + 8) = v11;
  v13 = 0;
  v14 = *((_BYTE *)v4 + 4);
  if ( v14 == 3 )
    v13 = 7681;
  if ( v14 == 1 )
    v13 = 7680;
  *((_DWORD *)v3 + 9) = v13;
  v15 = 0;
  v16 = *((_BYTE *)v4 + 5);
  if ( v16 == 3 )
    v15 = 7681;
  if ( v16 == 1 )
    v15 = 7680;
  *((_DWORD *)v3 + 10) = v15;
  v17 = *((_BYTE *)v4 + 7);
  if ( v17 <= 6 )
    v9 = dword_262D350[v17];
  *((_DWORD *)v3 + 11) = v9;
  v18 = 0;
  v19 = *((_BYTE *)v4 + 10);
  v20 = 0;
  if ( v19 == 3 )
    v18 = 7681;
  if ( v19 == 1 )
    v18 = 7680;
  *((_DWORD *)v3 + 12) = v18;
  v21 = 0;
  v22 = *((_BYTE *)v4 + 8);
  if ( v22 == 3 )
    v21 = 7681;
  if ( v22 == 1 )
    v21 = 7680;
  *((_DWORD *)v3 + 13) = v21;
  v23 = *((_BYTE *)v4 + 9);
  if ( v23 == 3 )
    v20 = 7681;
  if ( v23 == 1 )
    v20 = 7680;
  *((_DWORD *)v3 + 14) = v20;
  *((_DWORD *)v3 + 15) = *((_DWORD *)v4 + 3);
  *((_DWORD *)v3 + 16) = *((_DWORD *)v4 + 4);
  v24 = *((_BYTE *)v4 + 11);
  if ( *((_BYTE *)v4 + 11) )
    v24 = 1;
  *((_BYTE *)v3 + 68) = v24;
  result = *((_BYTE *)v5 + 121);
  if ( !*((_BYTE *)v5 + 121) )
  {
    mce::DepthStencilStateOGL::bindDepthStencilState(v3, v5, 1);
    v26 = (int)v5 + 8;
    v27 = *(_DWORD *)v4;
    v29 = *((_DWORD *)v4 + 1);
    v30 = *((_DWORD *)v4 + 2);
    v31 = *((_DWORD *)v4 + 3);
    v32 = *((_DWORD *)v4 + 4);
    v28 = (int)v4 + 20;
    *(_DWORD *)v26 = v27;
    *(_DWORD *)(v26 + 4) = v29;
    *(_DWORD *)(v26 + 8) = v30;
    *(_DWORD *)(v26 + 12) = v31;
    *(_DWORD *)(v26 + 16) = v32;
    result = (int)v5 + 28;
    LOWORD(v27) = *(_WORD *)v28;
    *(_BYTE *)(result + 2) = *(_BYTE *)(v28 + 2);
    *(_WORD *)result = v27;
    *((_BYTE *)v5 + 121) = 1;
  }
  return result;
}


int __fastcall mce::Math::safeIncrement(int result, int *a2)
{
  if ( *(_DWORD *)result != 0x7FFFFFFF )
    ++*(_DWORD *)result;
  return result;
}


int __fastcall mce::FrameBufferAttachmentOGL::~FrameBufferAttachmentOGL(mce::FrameBufferAttachmentOGL *this)
{
  mce::FrameBufferAttachmentOGL *v1; // r4@1
  char *v2; // r5@1

  v1 = this;
  v2 = (char *)this + 80;
  if ( *((_DWORD *)this + 20) )
  {
    glad_glDeleteRenderbuffers(1, v2);
    *(_DWORD *)v2 = 0;
  }
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  return j_j_j__ZN3mce25FrameBufferAttachmentBaseD2Ev(v1);
}


mce::SamplerStateGroupBase *__fastcall mce::SamplerStateGroupBase::SamplerStateGroupBase(mce::SamplerStateGroupBase *this)
{
  mce::SamplerStateGroupBase *v1; // r4@1

  v1 = this;
  mce::SamplerStateOGL::SamplerStateOGL(this);
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 12));
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 24));
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 36));
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 48));
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 60));
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 72));
  mce::SamplerStateOGL::SamplerStateOGL((mce::SamplerStateGroupBase *)((char *)v1 + 84));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 96));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 104));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 112));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 120));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 128));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 136));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 144));
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateGroupBase *)((char *)v1 + 152));
  *((_WORD *)v1 + 80) = 0;
  return v1;
}


int __fastcall mce::EntityConstants::EntityConstants(mce::EntityConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8B88;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


int __fastcall mce::FrameBufferAttachmentBase::createAttachmentWithTexture(int result, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, const mce::Texture *a4, unsigned __int8 a5, unsigned __int16 a6)
{
  *(_DWORD *)result = a4;
  *(_WORD *)(result + 6) = a6;
  *(_BYTE *)(result + 4) = a5;
  *(_BYTE *)(result + 76) = 1;
  return result;
}


void __fastcall mce::ShaderConstants::~ShaderConstants(mce::ShaderConstants *this)
{
  mce::ShaderConstants::~ShaderConstants(this);
}


void __fastcall mce::RenderDeviceBase::getClosestSupportedSampleDescription(int a1)
{
  mce::RenderDeviceBase::getClosestSupportedSampleDescription(a1);
}


int __fastcall mce::TextureOGL::subBuffer(mce::TextureOGL *this, mce::RenderContext *a2, const void *a3, unsigned int a4)
{
  mce::TextureOGL *v4; // r5@1
  __int64 v5; // kr00_8@1
  int result; // r0@1
  __int64 v7; // r1@3
  int (__fastcall *v8)(signed int, _DWORD, _DWORD, _DWORD); // r5@3
  signed int v9; // r0@3
  __int64 v10; // r1@4

  v4 = this;
  v5 = *(_QWORD *)this;
  mce::TextureOGL::bindTexture(this, a2, 0, a4);
  result = *((_DWORD *)v4 + 12);
  if ( result == 3553 )
  {
    v10 = *((_QWORD *)v4 + 7);
    v8 = (int (__fastcall *)(signed int, _DWORD, _DWORD, _DWORD))glad_glTexSubImage2D;
    v9 = 3553;
  }
  else
    if ( result != 35866 )
      return result;
    v7 = *((_QWORD *)v4 + 7);
    v8 = (int (__fastcall *)(signed int, _DWORD, _DWORD, _DWORD))glad_glTexSubImage3D;
    v9 = 35866;
  return v8(v9, 0, 0, 0);
}


void __fastcall mce::TexturePtr::clone(mce::TexturePtr *this, int a2)
{
  int v2; // r6@1
  mce::TexturePtr *v3; // r4@1
  mce::TextureGroup *v4; // r5@1
  int v5; // r2@2
  void *v6; // r1@2
  char *v7; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  void *v10; // [sp+4h] [bp-1Ch]@2
  int v11; // [sp+8h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  v4 = *(mce::TextureGroup **)(a2 + 4);
  if ( v4 )
  {
    sub_21E8AF4((int *)&v10, (int *)(a2 + 12));
    v11 = *(_DWORD *)(v2 + 16);
    v5 = v11;
    *(_DWORD *)v3 = &off_26E8D98;
    *((_DWORD *)v3 + 1) = v4;
    v6 = v10;
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 3) = v6;
    v10 = &unk_28898CC;
    *((_DWORD *)v3 + 4) = v5;
    *((_DWORD *)v3 + 5) = 0;
    mce::TextureGroup::_addRef(v4, v3);
    *((_DWORD *)v3 + 5) = mce::TextureGroup::_getBackCompatInfo(v4, (mce::TexturePtr *)((char *)v3 + 12));
    (*(void (__fastcall **)(mce::TexturePtr *, _DWORD, signed int))(*(_DWORD *)v3 + 8))(v3, 0, 1);
    v7 = (char *)v10 - 12;
    if ( (int *)((char *)v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)((char *)v10 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  else
    *(_DWORD *)this = &off_26E8D98;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = &unk_28898CC;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
}


int __fastcall mce::TextureBase::TextureBase(int result, int a2)
{
  __int16 v2; // r3@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r9@1
  int v7; // r3@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r7@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 1;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 8;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_BYTE *)(result + 41) = 1;
  v2 = *(_WORD *)(a2 + 40);
  *(_BYTE *)(result + 40) = v2;
  *(_BYTE *)(result + 41) = HIBYTE(v2);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  v6 = result + 16;
  v7 = *(_DWORD *)(a2 + 20);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 28);
  v10 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)v6 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  *(_DWORD *)(v6 + 12) = v9;
  *(_DWORD *)(v6 + 16) = v10;
  *(_BYTE *)(result + 36) = *(_BYTE *)(a2 + 36);
  *(_BYTE *)(a2 + 40) = 0;
  *(_BYTE *)(a2 + 41) = 1;
  *(_DWORD *)(a2 + 32) = 8;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 1;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 1;
  *(_DWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 28) = 0;
  *(_BYTE *)(a2 + 36) = 0;
  return result;
}


int __fastcall mce::PerFrameConstants::PerFrameConstants(mce::PerFrameConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8BC4;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall mce::TextureBase::TextureBase(int result, const mce::TextureDescription *a2)
{
  char *v2; // r1@1
  int v3; // r3@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r12@1
  int v7; // lr@1
  int v8; // r2@1
  int v9; // r4@1
  int v10; // r5@1
  int v11; // r12@1
  int v12; // lr@1

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_DWORD *)a2 + 4);
  v2 = (char *)a2 + 20;
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v5;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 16) = v7;
  v8 = result + 20;
  v9 = *((_DWORD *)v2 + 1);
  v10 = *((_DWORD *)v2 + 2);
  v11 = *((_DWORD *)v2 + 3);
  v12 = *((_DWORD *)v2 + 4);
  *(_DWORD *)v8 = *(_DWORD *)v2;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  *(_WORD *)(result + 40) = 256;
  return result;
}


int __fastcall mce::FrameBufferObjectBase::setupFrameBufferAttachment(mce::FrameBufferObjectBase *this, mce::FrameBufferAttachment *a2, const mce::FrameBufferAttachmentDescription *a3)
{
  char *v3; // r12@1
  char *v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // lr@1
  char *v10; // r12@1
  int v11; // r3@1
  int v12; // r4@1
  int v13; // r5@1
  int v14; // r6@1
  int v15; // lr@1
  char *v16; // r12@1
  int v17; // r4@1
  int v18; // r5@1
  int v19; // r6@1
  int v20; // lr@1
  int v21; // r2@1
  int result; // r0@5

  *((_DWORD *)a2 + 2) = this;
  v3 = (char *)a2 + 12;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v8 = *((_DWORD *)a3 + 3);
  v9 = *((_DWORD *)a3 + 4);
  v4 = (char *)a3 + 20;
  *(_DWORD *)v3 = v5;
  *((_DWORD *)v3 + 1) = v6;
  *((_DWORD *)v3 + 2) = v7;
  *((_DWORD *)v3 + 3) = v8;
  *((_DWORD *)v3 + 4) = v9;
  v10 = (char *)a2 + 32;
  v11 = *(_DWORD *)v4;
  v12 = *((_DWORD *)v4 + 1);
  v13 = *((_DWORD *)v4 + 2);
  v14 = *((_DWORD *)v4 + 3);
  v15 = *((_DWORD *)v4 + 4);
  v4 += 20;
  *(_DWORD *)v10 = v11;
  *((_DWORD *)v10 + 1) = v12;
  *((_DWORD *)v10 + 2) = v13;
  *((_DWORD *)v10 + 3) = v14;
  *((_DWORD *)v10 + 4) = v15;
  v16 = (char *)a2 + 52;
  v17 = *((_DWORD *)v4 + 1);
  v18 = *((_DWORD *)v4 + 2);
  v19 = *((_DWORD *)v4 + 3);
  v20 = *((_DWORD *)v4 + 4);
  *(_DWORD *)v16 = *(_DWORD *)v4;
  *((_DWORD *)v16 + 1) = v17;
  *((_DWORD *)v16 + 2) = v18;
  *((_DWORD *)v16 + 3) = v19;
  *((_DWORD *)v16 + 4) = v20;
  *((_BYTE *)a2 + 72) = v4[20];
  v21 = *((_DWORD *)a2 + 17);
  if ( (unsigned int)(v21 - 2) >= 3 )
  {
    if ( v21 == 1 )
    {
      *((_DWORD *)this + 7) = a2;
      ++*((_DWORD *)this + 9);
    }
  }
  else
    *((_DWORD *)this + 8) = a2;
  *(_QWORD *)((char *)a2 + 36) = *(_QWORD *)this;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2);
  result = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 4) = result;
  return result;
}


int __fastcall mce::ShaderBase::getAttributeForName(int a1, int **a2)
{
  unsigned int v2; // r4@1
  unsigned int v3; // r10@1
  int v4; // r6@1
  unsigned int *v5; // r9@1
  unsigned int v6; // r11@2
  int v7; // r7@2
  _DWORD *v8; // r8@2
  _DWORD *v9; // r1@4
  size_t v10; // r2@4
  unsigned int v11; // r5@6
  int *v12; // r8@8
  void **v13; // r7@8
  void **v14; // r4@8
  unsigned int **v15; // r6@8
  char *v16; // r0@8
  unsigned int v17; // r7@8
  unsigned int v18; // r11@8
  int v19; // r5@8
  unsigned int *v20; // r10@8
  unsigned int v21; // r8@9
  _DWORD *v22; // r9@9
  int v23; // r6@9
  _DWORD *v24; // r1@11
  size_t v25; // r2@11
  unsigned int v26; // r4@13
  int *v27; // r5@15
  void **v28; // r0@19
  char *v29; // r0@19
  bool v31; // zf@22
  unsigned int *v32; // r2@30
  signed int v33; // r1@32
  unsigned int *v34; // r2@34
  signed int v35; // r1@36
  int *v36; // [sp+8h] [bp-F0h]@1
  void *s1; // [sp+Ch] [bp-ECh]@8
  void **v38; // [sp+10h] [bp-E8h]@8
  int v39; // [sp+14h] [bp-E4h]@8
  void **v40; // [sp+18h] [bp-E0h]@8
  void **v41; // [sp+1Ch] [bp-DCh]@8
  int v42; // [sp+20h] [bp-D8h]@8
  int v43; // [sp+24h] [bp-D4h]@8
  int v44; // [sp+28h] [bp-D0h]@8
  int v45; // [sp+2Ch] [bp-CCh]@8
  int v46; // [sp+30h] [bp-C8h]@8
  int v47; // [sp+34h] [bp-C4h]@8
  int v48; // [sp+38h] [bp-C0h]@8
  int v49; // [sp+3Ch] [bp-BCh]@8
  char *v50; // [sp+40h] [bp-B8h]@8
  void **v51; // [sp+44h] [bp-B4h]@8
  int v52; // [sp+B4h] [bp-44h]@8
  __int16 v53; // [sp+B8h] [bp-40h]@8
  int v54; // [sp+BCh] [bp-3Ch]@8
  int v55; // [sp+C0h] [bp-38h]@8
  int v56; // [sp+C4h] [bp-34h]@8
  int v57; // [sp+C8h] [bp-30h]@8

  v36 = (int *)a2;
  v2 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v3 = *(_DWORD *)algn_27B55AC;
  v4 = v2 % *(_DWORD *)algn_27B55AC;
  v5 = *(unsigned int **)(mce::ShaderBase::builtinAttributeMap + 4 * (v2 % *(_DWORD *)algn_27B55AC));
  if ( !v5 )
    goto LABEL_8;
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 12);
  v8 = (_DWORD *)*v36;
  while ( 1 )
  {
    if ( v7 == v2 )
    {
      v9 = *(_DWORD **)(v6 + 4);
      v10 = *(v8 - 3);
      if ( v10 == *(v9 - 3) && !memcmp(v8, v9, v10) )
        break;
    }
    v11 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
      v7 = *(_DWORD *)(v11 + 12);
      v5 = (unsigned int *)v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v11 + 12) % v3 == v4 )
        continue;
  }
  v31 = v5 == 0;
  if ( v5 )
    v2 = *v5;
    v31 = *v5 == 0;
  if ( v31 )
LABEL_8:
    v12 = (int *)&v51;
    sub_21B6308((int)&v51);
    v51 = &off_26D3AF0;
    v13 = (void **)off_26D3F64;
    v14 = (void **)off_26D3F70;
    v52 = 0;
    v53 = 0;
    v56 = 0;
    v57 = 0;
    v54 = 0;
    v55 = 0;
    v38 = (void **)off_26D3F68;
    *(void ***)((char *)&v38 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v39 = 0;
    sub_21B5AD4((int)*(v38 - 3) + (_DWORD)&v38, 0);
    v40 = v14;
    *(_DWORD *)((char *)*(v14 - 3) + (_DWORD)&v40) = off_26D3F74;
    sub_21B5AD4((int)*(v40 - 3) + (_DWORD)&v40, 0);
    v38 = v13;
    v15 = (unsigned int **)&v48;
    *(_DWORD *)((char *)*(v13 - 3) + (_DWORD)&v38) = off_26D3F78;
    v38 = &off_26D3F94;
    v51 = &off_26D3FBC;
    v40 = &off_26D3FA8;
    v47 = 0;
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v41 = &off_26D40A8;
    v42 = 0;
    sub_21C9520((unsigned int **)&v48);
    v41 = &off_27734E8;
    v49 = 24;
    v50 = (char *)&unk_28898CC;
    sub_21B5AD4((int)*(v38 - 3) + (_DWORD)&v38, (unsigned int)&v41);
    v16 = sub_21CBF38((char *)&v40, *v36, *(_DWORD *)(*v36 - 12));
    sub_21CC440(v16);
    sub_21CFED8((int *)&s1, (int)&v41);
    v17 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v18 = *(_DWORD *)algn_27B55AC;
    v19 = v17 % *(_DWORD *)algn_27B55AC;
    v20 = *(unsigned int **)(mce::ShaderBase::builtinAttributeMap + 4 * (v17 % *(_DWORD *)algn_27B55AC));
    if ( v20 )
      v21 = *v20;
      v22 = s1;
      v23 = *(_DWORD *)(*v20 + 12);
      while ( 1 )
      {
        if ( v23 == v17 )
        {
          v24 = *(_DWORD **)(v21 + 4);
          v25 = *(v22 - 3);
          if ( v25 == *(v24 - 3) && !memcmp(v22, v24, v25) )
            break;
        }
        v26 = *(_DWORD *)v21;
        if ( *(_DWORD *)v21 )
          v23 = *(_DWORD *)(v26 + 12);
          v20 = (unsigned int *)v21;
          v21 = *(_DWORD *)v21;
          if ( *(_DWORD *)(v26 + 12) % v18 == v19 )
            continue;
        v2 = 0;
        v12 = (int *)&v51;
        v27 = (int *)&v38;
        goto LABEL_16;
      }
      v12 = (int *)&v51;
      v27 = (int *)&v38;
      if ( v20 )
        v2 = *v20;
      else
LABEL_16:
      v15 = (unsigned int **)&v48;
    else
      v2 = 0;
    if ( v22 - 3 != &dword_28898C0 )
      v32 = v22 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v22 - 3);
    v28 = off_26D3F84;
    v38 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)v27) = off_26D3F80[0];
    v40 = v28;
    v29 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v50 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    sub_21C802C(v15);
    *(int *)((char *)v27 + *((_DWORD *)off_26D3F68 - 3)) = (int)off_26D3F6C;
    sub_21B6560(v12);
  return *(_BYTE *)(v2 + 8);
}


void __fastcall mce::Degree::Degree(int a1, int _R1)
{
  __asm { VMOV            S0, R1 }
  _R2 = &mce::Math::RADDEG;
  __asm
  {
    VLDR            S2, [R2]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0]
  }
}


int __fastcall mce::GlobalConstantBufferManager::setHolographic(int result, bool a2)
{
  *(_BYTE *)(result + 13) = a2;
  return result;
}


int __fastcall mce::TextureContainer::isValid(mce::TextureContainer *this)
{
  int result; // r0@2

  if ( (unsigned int)*(_QWORD *)this == *(_QWORD *)this >> 32 )
    result = 0;
  else
    result = *((_DWORD *)this + 6) != 0;
  return result;
}


int __fastcall mce::ImageDescription::getSubimageSize(mce::ImageDescription *this)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1 OVERLAPPED
  int v4; // r1@3
  signed int v5; // r0@3
  bool v6; // zf@10
  bool v7; // zf@20

  *(_QWORD *)&v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return 0;
  v4 = v1 * v2;
  v5 = *((_DWORD *)this + 2);
  if ( v5 <= 76 )
  {
    if ( v5 > 34 )
    {
      if ( (unsigned int)(v5 - 61) < 2 )
        return v4;
      if ( v5 != 35 )
        return 0;
    }
    else if ( (unsigned int)(v5 - 28) >= 2 )
      if ( v5 == 11 )
        return 8 * v4;
      return 0;
    return 4 * v4;
  }
  if ( v5 > 90 )
    v6 = v5 == 91;
    if ( v5 != 91 )
      v6 = v5 == 98;
    if ( !v6 )
      if ( v5 == 116 )
        return 3 * v4;
  v7 = v5 == 77;
  if ( v5 != 77 )
    v7 = v5 == 87;
  if ( v7 )
  return 0;
}


void __fastcall mce::RenderChunkConstants::~RenderChunkConstants(mce::RenderChunkConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


mce::RenderMaterial *__fastcall mce::RenderMaterial::RenderMaterial(mce::RenderMaterial *this, const mce::RenderMaterial *a2)
{
  const mce::RenderMaterial *v2; // r8@1
  mce::RenderMaterial *v3; // r4@1
  void *v4; // r6@1
  int v5; // r2@1
  int v6; // r1@1
  _DWORD *v7; // r0@2
  _DWORD *v8; // r2@2
  _DWORD *v9; // r1@3
  _DWORD *v10; // r1@5
  int v11; // r1@7
  int v12; // r2@7
  int v13; // r3@7
  int v14; // r0@7
  __int64 v15; // r0@7
  signed int v16; // r0@7
  unsigned int v17; // r5@7
  int v18; // r5@10
  int v19; // r7@10
  char v20; // r0@11
  __int64 v21; // r0@13
  char *v22; // r6@13
  int v23; // r7@13
  __int64 v24; // kr08_8@15
  int v25; // r1@17
  int v26; // r3@17
  int v27; // r6@17
  int v28; // r7@17
  int v29; // r1@17
  int v30; // r3@17
  int v31; // r6@17
  int v32; // r7@17
  int v33; // r1@17
  int v34; // r3@17
  int v35; // r5@17
  int v36; // r6@17
  int v37; // r7@17
  int v38; // r1@17
  mce::RenderMaterial *result; // r0@17

  v2 = a2;
  v3 = this;
  sub_21E8AF4((int *)this, (int *)a2);
  sub_21E8AF4((int *)v3 + 1, (int *)v2 + 1);
  v4 = 0;
  *((_DWORD *)v3 + 3) = 0;
  v5 = (int)v3 + 12;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 8) = v5;
  *(_DWORD *)(v5 + 12) = v5;
  v6 = *((_DWORD *)v2 + 4);
  if ( v6 )
  {
    v7 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
           (int)v3 + 8,
           v6,
           v5);
    v8 = v7;
    *((_DWORD *)v3 + 4) = v7;
    do
    {
      v9 = v8;
      v8 = (_DWORD *)v8[2];
    }
    while ( v8 );
    *((_DWORD *)v3 + 5) = v9;
      v10 = v7;
      v7 = (_DWORD *)v7[3];
    while ( v7 );
    *((_DWORD *)v3 + 6) = v10;
    *((_DWORD *)v3 + 7) = *((_DWORD *)v2 + 7);
  }
  *((_DWORD *)v3 + 8) = *((_DWORD *)v2 + 8);
  sub_21E8AF4((int *)v3 + 9, (int *)v2 + 9);
  sub_21E8AF4((int *)v3 + 10, (int *)v2 + 10);
  sub_21E8AF4((int *)v3 + 11, (int *)v2 + 11);
  sub_21E8AF4((int *)v3 + 12, (int *)v2 + 12);
  v11 = *((_DWORD *)v2 + 13);
  v12 = *((_DWORD *)v2 + 14);
  v13 = *((_DWORD *)v2 + 15);
  *((_BYTE *)v3 + 64) = *((_BYTE *)v2 + 64);
  v14 = (int)v3 + 52;
  *(_DWORD *)v14 = v11;
  *(_DWORD *)(v14 + 4) = v12;
  *(_DWORD *)(v14 + 8) = v13;
  v15 = *(_QWORD *)((char *)v2 + 68);
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 18) = 0;
  v16 = HIDWORD(v15) - v15;
  *((_DWORD *)v3 + 19) = 0;
  v17 = 954437177 * (v16 >> 2);
  if ( v16 )
    if ( v17 >= 0x71C71C8 )
      sub_21E57F4();
    v4 = operator new(v16);
  *((_DWORD *)v3 + 17) = v4;
  *((_DWORD *)v3 + 18) = v4;
  *((_DWORD *)v3 + 19) = (char *)v4 + 36 * v17;
  v18 = *(_QWORD *)((char *)v2 + 68) >> 32;
  v19 = *(_QWORD *)((char *)v2 + 68);
  while ( v19 != v18 )
    sub_21E8AF4((int *)v4, (int *)v19);
    *((_DWORD *)v4 + 1) = *(_DWORD *)(v19 + 4);
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)((char *)v4 + 8), (const mce::TexturePtr *)(v19 + 8));
    v20 = *(_BYTE *)(v19 + 32);
    v19 += 36;
    *((_BYTE *)v4 + 32) = v20;
    v4 = (char *)v4 + 36;
  _aeabi_memcpy4((char *)v3 + 80, (char *)v2 + 80, 362);
  v21 = *(_QWORD *)((char *)v2 + 444);
  v22 = 0;
  *((_DWORD *)v3 + 111) = 0;
  *((_DWORD *)v3 + 112) = 0;
  v23 = HIDWORD(v21) - v21;
  *((_DWORD *)v3 + 113) = 0;
  if ( HIDWORD(v21) != (_DWORD)v21 )
    v22 = (char *)operator new(HIDWORD(v21) - v21);
  *((_DWORD *)v3 + 111) = v22;
  *((_DWORD *)v3 + 112) = v22;
  *((_DWORD *)v3 + 113) = &v22[v23];
  v24 = *(_QWORD *)((char *)v2 + 444);
  if ( HIDWORD(v24) != (_DWORD)v24 )
    _aeabi_memmove(v22, v24);
  *((_DWORD *)v3 + 112) = &v22[HIDWORD(v24) - v24];
  v25 = (int)v3 + 456;
  v26 = *((_DWORD *)v2 + 115);
  v27 = *((_DWORD *)v2 + 116);
  v28 = *((_DWORD *)v2 + 117);
  *(_DWORD *)v25 = *((_DWORD *)v2 + 114);
  *(_DWORD *)(v25 + 4) = v26;
  *(_DWORD *)(v25 + 8) = v27;
  *(_DWORD *)(v25 + 12) = v28;
  v29 = (int)v3 + 472;
  v30 = *((_DWORD *)v2 + 119);
  v31 = *((_DWORD *)v2 + 120);
  v32 = *((_DWORD *)v2 + 121);
  *(_DWORD *)v29 = *((_DWORD *)v2 + 118);
  *(_DWORD *)(v29 + 4) = v30;
  *(_DWORD *)(v29 + 8) = v31;
  *(_DWORD *)(v29 + 12) = v32;
  v33 = (int)v3 + 488;
  v34 = *((_DWORD *)v2 + 123);
  v35 = *((_DWORD *)v2 + 124);
  v36 = *((_DWORD *)v2 + 125);
  v37 = *((_DWORD *)v2 + 126);
  *(_DWORD *)v33 = *((_DWORD *)v2 + 122);
  *(_DWORD *)(v33 + 4) = v34;
  *(_DWORD *)(v33 + 8) = v35;
  *(_DWORD *)(v33 + 12) = v36;
  *(_DWORD *)(v33 + 16) = v37;
  *((_WORD *)v3 + 254) = *((_WORD *)v2 + 254);
  sub_21E8AF4((int *)v3 + 128, (int *)v2 + 128);
  v38 = *((_DWORD *)v2 + 129);
  *((_WORD *)v3 + 260) = *((_WORD *)v2 + 260);
  result = v3;
  *((_DWORD *)v3 + 129) = v38;
  return result;
}


int __fastcall mce::SamplerGroupCache::clear(mce::SamplerGroupCache *this)
{
  mce::SamplerGroupCache *v1; // r8@1
  int v2; // r7@1
  void *v3; // r5@2
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int result; // r0@17

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  while ( v2 )
  {
    v3 = (void *)v2;
    v4 = *(_DWORD *)(v2 + 12);
    v2 = *(_DWORD *)v2;
    if ( v4 )
    {
      v5 = (unsigned int *)(v4 + 4);
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
        v7 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    }
    operator delete(v3);
  }
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  result = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


int __fastcall mce::ShaderOGL::ShaderOGL(int a1, int a2, mce::ShaderProgram *a3, mce::ShaderProgram *a4, mce::ShaderProgram *a5)
{
  mce::ShaderProgram *v5; // r5@1
  mce::ShaderProgram *v6; // r6@1
  void ***v7; // r9@1
  int v8; // r4@1
  int v9; // r0@1
  bool v10; // zf@1
  signed int v11; // r1@1
  signed int v12; // r0@3
  __int64 v13; // r1@5
  int result; // r0@5
  __int16 v15; // [sp+5h] [bp-2Bh]@0
  char v16; // [sp+7h] [bp-29h]@0
  __int16 v17; // [sp+8h] [bp-28h]@0
  char v18; // [sp+Ah] [bp-26h]@0
  __int16 v19; // [sp+Bh] [bp-25h]@0
  char v20; // [sp+Dh] [bp-23h]@0
  __int16 v21; // [sp+Eh] [bp-22h]@0
  char v22; // [sp+10h] [bp-20h]@0
  __int16 v23; // [sp+11h] [bp-1Fh]@0
  char v24; // [sp+13h] [bp-1Dh]@0

  v5 = a4;
  v6 = a3;
  v7 = (void ***)a2;
  v8 = a1;
  mce::ShaderBase::ShaderBase((mce::ShaderBase *)a1, a3, __PAIR__((unsigned int)a5, (unsigned int)a4));
  *(_DWORD *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 36) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)(v8 + 44) = 0;
  *(_DWORD *)(v8 + 48) = 0;
  mce::ShaderOGL::createShader(v8, v7, (int)v6, (int)v5, (int)a5);
  mce::ShaderOGL::reflectShaderUniforms((mce::ShaderOGL *)v8);
  mce::ShaderOGL::refelectShaderAttributes((mce::ShaderOGL *)v8);
  v9 = mce::RenderDevice::checkFeatureSupport();
  v10 = v9 == 0;
  v11 = 5126;
  if ( v9 )
    v11 = 5131;
  v12 = 3;
  *(_DWORD *)(v8 + 52) = v11;
  if ( !v10 )
    v12 = 4;
  *(_DWORD *)(v8 + 56) = v12;
  *(_BYTE *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 64) = 5121;
  *(_DWORD *)(v8 + 68) = 4;
  *(_BYTE *)(v8 + 72) = 1;
  *(_BYTE *)(v8 + 75) = v24;
  *(_WORD *)(v8 + 73) = v23;
  *(_DWORD *)(v8 + 76) = 5120;
  *(_DWORD *)(v8 + 80) = 4;
  *(_BYTE *)(v8 + 84) = 0;
  *(_BYTE *)(v8 + 87) = v22;
  LODWORD(v13) = 5123;
  *(_WORD *)(v8 + 85) = v21;
  HIDWORD(v13) = 2;
  *(_DWORD *)(v8 + 88) = 5123;
  *(_DWORD *)(v8 + 92) = 2;
  *(_BYTE *)(v8 + 96) = 1;
  *(_BYTE *)(v8 + 99) = v20;
  *(_WORD *)(v8 + 97) = v19;
  *(_QWORD *)(v8 + 100) = v13;
  *(_BYTE *)(v8 + 108) = 1;
  *(_BYTE *)(v8 + 111) = v18;
  *(_WORD *)(v8 + 109) = v17;
  *(_QWORD *)(v8 + 112) = v13;
  *(_BYTE *)(v8 + 120) = 1;
  *(_BYTE *)(v8 + 123) = v16;
  result = v8;
  *(_WORD *)(v8 + 121) = v15;
  return result;
}


int __fastcall mce::TexturePtr::_deref(mce::TexturePtr *this)
{
  mce::TexturePtr *v1; // r4@1
  mce::TextureGroup *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = (mce::TextureGroup *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    mce::TextureGroup::_removeRef(v2, v1);
    *((_DWORD *)v1 + 1) = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 2) = 0;
  return result;
}


int __fastcall mce::TextureOGL::createTexture(mce::TextureOGL *this, mce::RenderContext *a2, const mce::TextureDescription *a3)
{
  const mce::TextureDescription *v3; // r6@1
  mce::RenderContext *v4; // r5@1
  mce::TextureOGL *v5; // r4@1
  gl *v6; // r0@1
  signed int v7; // r1@1
  signed int v8; // r0@1
  signed int v9; // r0@2
  const mce::TextureDescription *v10; // r1@4
  unsigned int v11; // r3@4

  v3 = a3;
  v4 = a2;
  v5 = this;
  mce::TextureBase::createTexture(this, a2, a3);
  v6 = (gl *)glad_glGenTextures(1, (char *)v5 + 44);
  v7 = gl::isOpenGLES3(v6);
  v8 = *((_DWORD *)v3 + 2);
  if ( v7 == 1 )
    v9 = mce::TextureHelperOGL::getOpenGLSizedInternalFormatFromTextureFormat(v8);
  else
    v9 = mce::TextureHelperOGL::getOpenGLInternalTextureFormat(v8);
  *((_DWORD *)v5 + 13) = v9;
  *((_DWORD *)v5 + 14) = mce::TextureHelperOGL::getOpenGLTextureFormatFromTextureFormat(*((_DWORD *)v3 + 2));
  *((_DWORD *)v5 + 15) = mce::TextureHelperOGL::getOpenGLTextureTypeFromTextureFormat(*((_DWORD *)v3 + 2));
  *((_DWORD *)v5 + 12) = mce::TextureHelperOGL::getOpenGLTextureTargetFromTextureDescription(v3, v10);
  mce::TextureOGL::bindTexture(v5, v4, 0, v11);
  mce::TextureOGL::createMipStorage(v5, v4, 0, *(_QWORD *)v3, *(_QWORD *)v3 >> 32, 0);
  if ( *((_DWORD *)v3 + 6) == 1 )
    mce::TextureOGL::setFilteringMode(v5, v4, 0);
  glad_glTexParameteri(*((_DWORD *)v5 + 12), 10242, 33071);
  return glad_glTexParameteri(*((_DWORD *)v5 + 12), 10243, 33071);
}


signed int __fastcall mce::LRUCache::trim(mce::LRUCache *this)
{
  mce::LRUCache *v1; // r4@1
  __int64 v2; // r0@1
  mce::LRUCache *v3; // r2@1
  __int64 v4; // kr00_8@4
  mce::LRUCache *v5; // r8@5
  int v6; // r7@5
  bool v7; // zf@6
  signed int result; // r0@13

  v1 = this;
  LODWORD(v2) = 0;
  v3 = (mce::LRUCache *)*((_DWORD *)v1 + 3);
  while ( v3 != (mce::LRUCache *)((char *)v1 + 12) )
  {
    v3 = *(mce::LRUCache **)v3;
    LODWORD(v2) = v2 + 1;
  }
  v4 = *(_QWORD *)v1;
  if ( HIDWORD(v4) <= (unsigned int)v4 )
    v5 = (mce::LRUCache *)((char *)v1 + 8);
  else
    v6 = ~(_DWORD)v2;
    do
    {
      v7 = ++v6 == 0;
      if ( v6 )
      {
        LODWORD(v2) = *((_DWORD *)v1 + 4);
        v7 = *(_DWORD *)(v2 + 20) == *((_DWORD *)v1 + 2);
      }
      if ( v7 )
        break;
      if ( !*((_DWORD *)v1 + 14) )
        sub_21E5F48();
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 15))((char *)v1 + 48, v2 + 8);
      v2 = *(_QWORD *)v1;
    }
    while ( HIDWORD(v2) > (unsigned int)v2 );
  ++*(_DWORD *)v5;
  result = 0;
  if ( HIDWORD(v4) != (_DWORD)v4 )
    result = 1;
  return result;
}


void __fastcall mce::ShaderConstantFloat1::~ShaderConstantFloat1(mce::ShaderConstantFloat1 *this)
{
  mce::ShaderConstantFloat1::~ShaderConstantFloat1(this);
}


void __fastcall mce::ShaderConstantFloat2::~ShaderConstantFloat2(mce::ShaderConstantFloat2 *this)
{
  mce::ShaderConstantFloat2::~ShaderConstantFloat2(this);
}


int __fastcall mce::Clock::setTimeScale(int result, float a2)
{
  *(float *)(result + 16) = a2;
  return result;
}


void __fastcall mce::PerFrameConstants::~PerFrameConstants(mce::PerFrameConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


signed int __fastcall mce::TextureHelper::frameBufferAttachmentTypeFromTextureFormat(signed int a1)
{
  signed int v1; // r1@1
  signed int result; // r0@1
  bool v3; // zf@4

  v1 = a1;
  result = 1;
  if ( v1 <= 60 )
  {
    if ( v1 > 34 )
    {
      if ( v1 == 35 )
        return result;
      if ( v1 != 45 )
      {
        if ( v1 == 55 )
          return 2;
        return 0;
      }
      result = 4;
    }
    else if ( (unsigned int)(v1 - 10) >= 2 && (unsigned int)(v1 - 28) >= 2 )
      return 0;
  }
  else if ( (unsigned int)(v1 - 61) > 0x1E || !((1 << (v1 - 61)) & 0x47010003) )
    v3 = v1 == 98;
    if ( v1 != 98 )
      v3 = v1 == 115;
    if ( !v3 )
  return result;
}


signed int __fastcall mce::RenderMaterialGroup::loadList(mce::RenderMaterialGroup *this, mce::ShaderGroup *a2, const ResourceLocation *a3, ResourcePackManager *a4, ResourceLoadManager *a5, int a6)
{
  mce::RenderMaterialGroup *v6; // r5@1
  pthread_mutex_t *v7; // r8@1 OVERLAPPED
  ResourcePackManager *v8; // r7@1
  const ResourceLocation *v9; // r11@1
  mce::ShaderGroup *v10; // r4@1
  int v11; // r0@2
  signed int v12; // r6@3
  int v13; // r7@3 OVERLAPPED
  int v14; // r9@4
  unsigned int *v15; // r2@6
  signed int v16; // r1@8
  int v17; // r7@14
  mce::RenderMaterial *v18; // r0@14
  mce::RenderMaterial *v19; // r0@15
  int v20; // r1@16
  void *v21; // r0@16
  signed int v22; // r4@19
  int i; // r5@21
  __int64 v25; // [sp+0h] [bp-30h]@4

  v6 = this;
  v7 = (pthread_mutex_t *)((char *)this + 96);
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( &pthread_create )
  {
    v11 = pthread_mutex_lock(v7);
    if ( v11 )
      sub_119CCFC(v11);
  }
  v12 = a6;
  __dmb();
  *((_BYTE *)v6 + 100) = 1;
  *((_DWORD *)v6 + 34) = v8;
  *((_DWORD *)v6 + 35) = a5;
  *((_DWORD *)v6 + 36) = v10;
  v13 = *(_DWORD *)(*((_DWORD *)v6 + 22) - 12);
  if ( a6 == 1 )
    v25 = *(_QWORD *)(&(&v7)[-1] + 5);
    v14 = *((_DWORD *)v6 + 4);
    while ( v14 )
    {
      v17 = v14;
      v18 = *(mce::RenderMaterial **)(v14 + 8);
      v14 = *(_DWORD *)v14;
      if ( v18 )
      {
        v19 = mce::RenderMaterial::~RenderMaterial(v18);
        operator delete((void *)v19);
      }
      *(_DWORD *)(v17 + 8) = 0;
      v20 = *(_DWORD *)(v17 + 4);
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v20 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v21);
      operator delete((void *)v17);
    }
    _aeabi_memclr4(*((_QWORD *)v6 + 1), 4 * (*((_QWORD *)v6 + 1) >> 32));
    v12 = 1;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *(_QWORD *)(&(&v7)[-1] + 5) = v25;
  mce::SamplerGroupCache::clear((mce::RenderMaterialGroup *)((char *)v6 + 108));
  EntityInteraction::setInteractText((int *)v6 + 22, (int *)v9);
  *((_DWORD *)v6 + 23) = *((_DWORD *)v9 + 1);
  v22 = mce::RenderMaterialGroup::_loadList(
          v6,
          *((mce::ShaderGroup **)v6 + 36),
          *((ResourcePackManager **)v6 + 34),
          v12);
  if ( v13 && v22 == 1 )
    for ( i = *((_DWORD *)v6 + 17); i; i = *(_DWORD *)i )
      mce::MaterialPtr::onGroupReloaded(*(mce::MaterialPtr **)(i + 4));
    pthread_mutex_unlock(v7);
  return v22;
}


int __fastcall mce::BufferOGL::BufferOGL(mce::BufferOGL *this)
{
  int result; // r0@1

  result = mce::BufferBase::BufferBase(this);
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 35044;
  return result;
}


char *__fastcall mce::DeviceInformationBase::getChipsetVendorName(mce::DeviceInformationBase *this)
{
  return (char *)this + 48;
}


signed int __fastcall mce::VertexFormat::getFieldSize(int a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@2
  char v4; // r0@3
  bool v5; // zf@6

  v2 = a1;
  if ( a2 )
  {
    result = mce::VertexFormat::FieldSize[a2];
  }
  else
    v4 = byte_27E8CA8;
    __dmb();
    if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E8CA8) )
    {
      byte_27E8CA4 = mce::RenderDevice::checkFeatureSupport();
      j___cxa_guard_release((unsigned int *)&byte_27E8CA8);
    }
    v5 = byte_27E8CA4 == 0;
    if ( byte_27E8CA4 )
      v5 = *(_BYTE *)(v2 + 8) == 0;
    if ( v5 )
      result = 16;
    else
      result = 8;
  return result;
}


signed int __fastcall mce::ImageBuffer::isEmpty(mce::ImageBuffer *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall mce::FrameBufferAttachmentOGL::setAttachmentIndexAndClearMask(mce::FrameBufferAttachmentOGL *this)
{
  int v1; // r2@2
  int v2; // r3@2
  int v3; // r12@2
  signed int v4; // r1@2
  signed int v5; // r2@4
  int result; // r0@8

  switch ( *((_DWORD *)this + 17) )
  {
    case 1:
      v1 = *((_DWORD *)this + 2);
      v2 = *(_DWORD *)(v1 + 68);
      v3 = *(_DWORD *)(v2 - 4) + 36064;
      v4 = 0x4000;
      *((_DWORD *)this + 21) = 0x4000;
      *((_DWORD *)this + 22) = v3;
      *(_DWORD *)(v1 + 68) = v2 - 4;
      break;
    case 2:
      v5 = 36096;
      v4 = 256;
      goto LABEL_7;
    case 3:
      v5 = 36128;
      v4 = 1024;
    case 4:
      v5 = 33306;
      v4 = 1280;
LABEL_7:
      *((_DWORD *)this + 21) = v4;
      *((_DWORD *)this + 22) = v5;
    default:
      v4 = *((_DWORD *)this + 21);
  }
  result = *((_DWORD *)this + 2);
  *(_DWORD *)(result + 48) |= v4;
  return result;
}


int __fastcall mce::RenderContextBase::getStencilReferenceFromRenderContext(mce::RenderContextBase *this)
{
  int v1; // r1@1

  LOBYTE(v1) = *((_BYTE *)this + 268);
  if ( *((_BYTE *)this + 229) )
    v1 = v1 & 0xF | 16 * *((_BYTE *)this + 228);
  return (unsigned __int8)v1;
}


signed int __fastcall mce::FrameBufferAttachmentOGL::setBackingTexture(mce::FrameBufferAttachmentOGL *this, const mce::Texture *a2)
{
  mce::FrameBufferAttachmentOGL *v2; // r4@1
  int v3; // r3@1
  int v4; // r1@3
  int v5; // ST00_4@5
  signed int result; // r0@6
  int v7; // [sp+8h] [bp-8h]@0

  v2 = this;
  v3 = mce::Texture::getInternalTexture(a2);
  if ( *((_BYTE *)v2 + 72) )
  {
    mce::glFramebufferTexture2DMultisampleMCE(
      (mce *)0x8D40,
      *((_DWORD *)v2 + 22),
      0xDE1u,
      v3,
      0,
      *((_DWORD *)v2 + 9),
      v7);
  }
  else
    v4 = *((_DWORD *)v2 + 22);
    if ( *((_DWORD *)v2 + 9) < 2 )
    {
      v5 = *((_BYTE *)v2 + 4);
      glad_glFramebufferTexture2D(36160, v4, 3553, v3);
    }
    else
      glad_glFramebufferTexture2D(36160, v4, 37120, v3);
  result = 1;
  *((_BYTE *)v2 + 76) = 1;
  return result;
}


int __fastcall mce::TextureContainer::clear(mce::TextureContainer *this)
{
  mce::TextureContainer *v1; // r4@1
  void **v2; // r5@1 OVERLAPPED
  void **v3; // r6@1 OVERLAPPED
  void **v4; // r7@2
  int result; // r0@6

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)this;
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      if ( *v4 )
        j_operator delete(*v4);
      v4 += 10;
    }
    while ( v3 != v4 );
  }
  result = 0;
  *((_DWORD *)v1 + 1) = v2;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_QWORD *)v1 + 3) = 0x100000000LL;
  *((_QWORD *)v1 + 4) = 0x100000000LL;
  *((_DWORD *)v1 + 10) = 1;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 8;
  *((_BYTE *)v1 + 52) = 0;
  return result;
}


void __fastcall mce::TextConstants::init(mce::TextConstants *this)
{
  mce::TextConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  int v12; // r5@12
  mce::ShaderConstantBase *v13; // r0@12
  mce::ShaderConstantBase *v14; // r5@12
  void *v15; // r0@16
  int v16; // r5@17
  mce::ShaderConstantBase *v17; // r0@17
  mce::ShaderConstantBase *v18; // r5@17
  void *v19; // r0@21
  int v20; // r5@22
  mce::ShaderConstantBase *v21; // r0@22
  mce::ShaderConstantBase *v22; // r5@22
  void *v23; // r0@26
  int v24; // r5@27
  mce::ShaderConstantBase *v25; // r0@27
  mce::ShaderConstantBase *v26; // r5@27
  void *v27; // r0@31
  int v28; // r5@32
  mce::ShaderConstantBase *v29; // r0@32
  mce::ShaderConstantBase *v30; // r5@32
  void *v31; // r0@36
  unsigned int *v32; // r2@38
  signed int v33; // r1@40
  unsigned int *v34; // r2@42
  signed int v35; // r1@44
  unsigned int *v36; // r2@46
  signed int v37; // r1@48
  unsigned int *v38; // r2@50
  signed int v39; // r1@52
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  unsigned int *v42; // r2@58
  signed int v43; // r1@60
  unsigned int *v44; // r2@62
  signed int v45; // r1@64
  unsigned int *v46; // r2@66
  signed int v47; // r1@68
  int v48; // [sp+8h] [bp-50h]@32
  int v49; // [sp+10h] [bp-48h]@27
  int v50; // [sp+18h] [bp-40h]@22
  int v51; // [sp+20h] [bp-38h]@17
  int v52; // [sp+28h] [bp-30h]@12
  int v53; // [sp+30h] [bp-28h]@7
  int v54; // [sp+38h] [bp-20h]@2
  int v55; // [sp+40h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v55, "TextConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v55);
  v3 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v54, "GLYPH_SMOOTH_RADIUS");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v54);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 1 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v54 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v53, "GLYPH_CUTOFF");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v53);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 1 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v53 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v52, "OUTLINE_CUTOFF");
  v13 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v12, (const void **)&v52);
  v14 = v13;
  if ( v13 )
    if ( mce::ShaderConstantBase::getType(v13) != 1 )
      v14 = 0;
    *((_DWORD *)v1 + 4) = v14;
  v15 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v52 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v51, "OUTLINE_COLOR");
  v17 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v16, (const void **)&v51);
  v18 = v17;
  if ( v17 )
    if ( mce::ShaderConstantBase::getType(v17) != 4 )
      v18 = 0;
    *((_DWORD *)v1 + 5) = v18;
  v19 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v51 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v50, "SHADOW_SMOOTH_RADIUS");
  v21 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v20, (const void **)&v50);
  v22 = v21;
  if ( v21 )
    if ( mce::ShaderConstantBase::getType(v21) != 1 )
      v22 = 0;
    *((_DWORD *)v1 + 6) = v22;
  v23 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v50 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v49, "SHADOW_COLOR");
  v25 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v24, (const void **)&v49);
  v26 = v25;
  if ( v25 )
    if ( mce::ShaderConstantBase::getType(v25) != 4 )
      v26 = 0;
    *((_DWORD *)v1 + 7) = v26;
  v27 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v49 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v48, "SHADOW_OFFSET");
  v29 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v28, (const void **)&v48);
  v30 = v29;
  if ( v29 )
    if ( mce::ShaderConstantBase::getType(v29) != 2 )
      v30 = 0;
    *((_DWORD *)v1 + 8) = v30;
  v31 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v48 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


int __fastcall mce::FrameBufferObjectBase::finalizeFrameBuffer(int result)
{
  *(_BYTE *)(result + 40) = 1;
  return result;
}


int __fastcall mce::TextureOGL::setFilteringMode(mce::TextureBase *this, mce::RenderContext *a2, signed int a3)
{
  signed int v3; // r5@1
  mce::RenderContext *v4; // r6@1
  mce::TextureBase *v5; // r4@1
  int result; // r0@5
  int (__fastcall *v7)(int, signed int, signed int); // r3@6
  int v8; // r0@6
  signed int v9; // r6@7
  int v10; // r5@7
  void (__fastcall *v11)(int, signed int, signed int); // r7@7
  signed int v12; // r2@11
  signed int v13; // r6@12
  int v14; // r5@12
  void (__fastcall *v15)(int, signed int, signed int); // r7@12

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( a3 == 3 && !*(_BYTE *)(mce::Singleton<mce::RendererSettings>::mInstance + 49) )
  {
    v3 = 0;
    if ( *(_DWORD *)(mce::TextureBase::getDescription(this) + 20) > 1u )
      v3 = 2;
  }
  mce::RenderContext::getDevice(v4);
  result = mce::RenderDevice::checkFeatureSupport();
  switch ( v3 )
    case 0:
      glad_glTexParameteri(*((_DWORD *)v5 + 12), 10241, 9728);
      v7 = glad_glTexParameteri;
      v8 = *((_DWORD *)v5 + 12);
      goto LABEL_11;
    case 2:
      v9 = 9728;
      v10 = *((_DWORD *)v5 + 12);
      v11 = (void (__fastcall *)(int, signed int, signed int))glad_glTexParameteri;
      if ( result == 1 && *(_DWORD *)(mce::TextureBase::getDescription(v5) + 20) > 1u )
        v9 = 9986;
      v11(v10, 10241, v9);
LABEL_11:
      v12 = 9728;
      goto LABEL_19;
    case 3:
      v13 = 9729;
      v14 = *((_DWORD *)v5 + 12);
      v15 = (void (__fastcall *)(int, signed int, signed int))glad_glTexParameteri;
        v13 = 9987;
      v15(v14, 10241, v13);
      goto LABEL_18;
    case 1:
      glad_glTexParameteri(*((_DWORD *)v5 + 12), 10241, 9729);
LABEL_18:
      v12 = 9729;
LABEL_19:
      result = v7(v8, 10240, v12);
      break;
    default:
      return result;
  return result;
}


mce::Shader *__fastcall mce::RenderMaterial::compileShader(mce::RenderMaterial *this)
{
  mce::Shader *result; // r0@1

  result = (mce::Shader *)*((_DWORD *)this + 15);
  if ( result )
    result = (mce::Shader *)j_j_j__ZN3mce6Shader20compileAndLinkShaderEv(result);
  else
    JUMPOUT(0, mce::RenderMaterial::invalidateTextures);
  return result;
}


void *__fastcall mce::Platform::OGL::GetProcAddress(mce::Platform::OGL *this, const char *a2)
{
  mce::Platform::OGL *v2; // r4@1
  void *result; // r0@1

  v2 = this;
  result = dlsym((void *)0xFFFFFFFF, (const char *)this);
  if ( !result )
    result = (void *)eglGetProcAddress(v2);
  return result;
}


void __fastcall mce::ShaderConstantBase::~ShaderConstantBase(mce::ShaderConstantBase *this)
{
  mce::ShaderConstantBase *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E8D30;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


int __fastcall mce::FrameBufferObjectOGL::FrameBufferObjectOGL(mce::FrameBufferObjectOGL *this)
{
  int result; // r0@1

  result = mce::FrameBufferObjectBase::FrameBufferObjectBase(this);
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  return result;
}


char *__fastcall mce::DeviceInformationBase::getChipsetName(mce::DeviceInformationBase *this)
{
  return (char *)this + 8;
}


signed int __fastcall mce::FrameBufferAttachmentOGL::allocateRenderBuffer(mce::FrameBufferAttachmentOGL *this)
{
  mce::FrameBufferAttachmentOGL *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r1@1
  __int64 v4; // kr00_8@3
  signed int result; // r0@6
  int v6; // [sp+4h] [bp-Ch]@0

  v1 = this;
  glad_glGenRenderbuffers(1, (char *)this + 80);
  glad_glBindRenderbuffer(36161, *((_DWORD *)v1 + 20));
  v2 = mce::TextureHelperOGL::getOpenGLSizedInternalFormatFromTextureFormat(*((_DWORD *)v1 + 5));
  v3 = *((_DWORD *)v1 + 9);
  if ( *((_BYTE *)v1 + 72) )
  {
    mce::glRenderbufferStorageMultisampleMCE(
      (mce *)0x8D41,
      v3,
      v2,
      *(_QWORD *)((char *)v1 + 12),
      *(_QWORD *)((char *)v1 + 12) >> 32,
      v6);
  }
  else
    v4 = *(_QWORD *)((char *)v1 + 12);
    if ( v3 < 2 )
      glad_glRenderbufferStorage(36161, v2, v4, HIDWORD(v4));
    else
      ((void (__fastcall *)(signed int))glad_glRenderbufferStorageMultisample)(36161);
  glad_glFramebufferRenderbuffer(36160, *((_DWORD *)v1 + 22), 36161, *((_DWORD *)v1 + 20));
  result = 1;
  *((_BYTE *)v1 + 76) = 1;
  return result;
}


mce::TexturePtr *__fastcall mce::TexturePtr::_move(mce::TexturePtr *a1, mce::TexturePtr *a2)
{
  mce::TexturePtr *v2; // r5@1
  mce::TexturePtr *v3; // r4@1
  mce::TextureGroup *v4; // r0@2
  mce::TextureGroup *v5; // r0@4
  mce::TextureGroup *v6; // r0@6

  v2 = a2;
  v3 = a1;
  if ( a1 != a2 )
  {
    v4 = (mce::TextureGroup *)*((_DWORD *)a1 + 1);
    if ( v4 )
    {
      mce::TextureGroup::_removeRef(v4, v3);
      *((_DWORD *)v3 + 1) = 0;
    }
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 1) = *((_DWORD *)v2 + 1);
    *((_DWORD *)v3 + 2) = *((_DWORD *)v2 + 2);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 3,
      (int *)v2 + 3);
    *((_DWORD *)v3 + 4) = *((_DWORD *)v2 + 4);
    *((_DWORD *)v3 + 5) = *((_DWORD *)v2 + 5);
    v5 = (mce::TextureGroup *)*((_DWORD *)v2 + 1);
    if ( v5 )
      mce::TextureGroup::_removeRef(v5, v2);
      *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
    v6 = (mce::TextureGroup *)*((_DWORD *)v3 + 1);
    if ( v6 )
      mce::TextureGroup::_addRef(v6, v3);
  }
  return v3;
}


int __fastcall mce::DebugConstants::DebugConstants(mce::DebugConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8B60;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


_DWORD *__fastcall mce::DeviceInformationBase::getChipsetInfo(mce::DeviceInformationBase *this)
{
  _DWORD *result; // r0@1

  result = *(_DWORD **)this;
  if ( !result )
    result = &mce::defaultChipset;
  return result;
}


int __fastcall mce::RenderMaterial::RenderMaterial(int a1, int a2, mce::RenderMaterial *a3, int a4, mce::TextureGroup *a5, int a6, int a7, int a8)
{
  const char *v8; // r6@1
  int *v9; // r4@1
  int v10; // r10@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  int v15; // r4@19
  int *v16; // r0@19
  int v17; // r11@19
  void *v18; // r0@19
  void *v19; // r0@20
  void *v20; // r0@24
  void *v21; // r0@25
  _BYTE *v22; // r11@26
  void *v23; // r0@26
  _BYTE *v24; // r4@27
  signed int v25; // r8@27
  void *v26; // r0@27
  int v27; // r9@28
  _BYTE *v28; // r7@28
  _BYTE *v29; // r2@28
  char *v30; // r10@28
  signed int v31; // r6@28
  void *v32; // r0@28
  int v33; // r6@33
  int v34; // r10@34
  void *v35; // r0@34
  unsigned int v36; // r6@35
  int v37; // r5@35
  void *v38; // r9@35
  int v39; // r4@35
  size_t v40; // r7@35
  char *v41; // r8@35
  _DWORD *v42; // r0@35
  _DWORD *v43; // r1@38
  void *v44; // r0@41
  Json::ValueIteratorBase *v45; // r5@45
  Json::Value *v46; // r7@45
  const Json::ValueIteratorBase *v47; // r10@45
  const Json::Value *v48; // r8@45 OVERLAPPED
  unsigned int *v49; // r2@46
  signed int v50; // r1@48
  unsigned int *v51; // r2@50
  signed int v52; // r1@52
  unsigned int *v53; // r2@54
  signed int v54; // r1@56
  unsigned int *v55; // r1@58
  signed int v56; // r0@60
  unsigned int *v57; // r2@62
  signed int v58; // r1@64
  unsigned int *v59; // r1@66
  signed int v60; // r0@68
  const char *v61; // r11@92
  unsigned int v62; // r4@93
  int v63; // r7@94 OVERLAPPED
  int v64; // r6@94
  char *v65; // r0@95
  unsigned int v66; // r5@96
  int v67; // r8@96
  void *v68; // r10@96
  int v69; // r6@96
  char *v70; // r4@96
  size_t v71; // r7@96
  _DWORD *v72; // r0@96
  _DWORD *v73; // r1@99
  void *v74; // r0@103
  _BYTE *v75; // r10@105
  char *v76; // r0@105
  unsigned int v77; // r5@106
  int v78; // r7@106
  void *v79; // r8@106
  int v80; // r4@106
  size_t v81; // r6@106
  char *v82; // r11@106
  _DWORD *v83; // r0@106
  _DWORD *v84; // r1@109
  void *v85; // r0@113
  const char *v86; // r10@116
  int v87; // r9@116
  int v88; // r5@117
  Json::ValueIteratorBase *v89; // r9@118
  Json::Value *v90; // r4@118
  void **v91; // r7@118
  char *v92; // r6@118
  const Json::Value *v93; // r11@118
  unsigned int *v94; // r2@119
  signed int v95; // r1@121
  unsigned int *v96; // r2@123
  int v97; // r1@125
  unsigned int *v98; // r2@127
  signed int v99; // r1@129
  unsigned int *v100; // r2@131
  signed int v101; // r1@133
  unsigned int *v102; // r2@135
  signed int v103; // r1@137
  unsigned int *v104; // r1@139
  signed int v105; // r0@141
  const char *v106; // r10@166
  unsigned int v107; // r0@167
  int v108; // r7@167
  int v109; // r3@167 OVERLAPPED
  int v110; // r4@167 OVERLAPPED
  unsigned int v111; // r2@167
  int v112; // r1@167
  Json::Value *v113; // r5@168
  int v114; // r1@170
  int v115; // r5@170
  int v116; // r6@170
  unsigned int *v117; // r2@172
  signed int v118; // r1@174
  int *v119; // r0@180
  Json::Value *v120; // r6@183
  void *v121; // r0@183
  void *v122; // r0@185
  unsigned int v123; // r7@186
  int v124; // r11@186
  void *v125; // r4@186
  int v126; // r5@186
  size_t v127; // r6@186
  char *v128; // r10@186
  _DWORD *v129; // r0@186
  _DWORD *v130; // r1@189
  void *v131; // r0@193
  int v132; // r4@194
  int v133; // r4@194
  void *v134; // r0@194
  char *v135; // r0@195
  int v136; // r0@200
  int v137; // r1@200
  void *v138; // r5@201
  int v139; // r4@201
  int v140; // r2@205
  int v141; // r0@205
  Json::ValueIteratorBase *v142; // r4@206
  Json::Value *v143; // r6@206
  int v144; // r8@206
  const Json::Value *v145; // r7@206
  int *v146; // r11@206
  unsigned int *v147; // r2@207
  signed int v148; // r1@209
  unsigned int *v149; // r2@211
  signed int v150; // r1@213
  unsigned int *v151; // r1@215
  signed int v152; // r0@217
  const char *v153; // r10@230
  __int64 v154; // r0@230
  const Json::Value *v155; // r8@232
  int v156; // r7@232
  Json::Value *v157; // r11@232
  void *v158; // r9@232
  int v159; // r1@232
  unsigned int v160; // r2@233
  unsigned int v161; // r4@235
  char *v162; // r5@238 OVERLAPPED
  char *v163; // r6@240
  int v164; // r6@242 OVERLAPPED
  int v165; // r0@244
  void *v166; // r0@246
  unsigned int v167; // r5@247
  int v168; // r8@247
  void *v169; // r6@247
  int v170; // r4@247
  size_t v171; // r7@247
  char *v172; // r10@247
  _DWORD *v173; // r0@247
  _DWORD *v174; // r1@250
  int v175; // r0@252
  void *v176; // r0@254
  char v177; // r0@261
  const char *v178; // r11@275
  int v179; // r10@275
  void *v180; // r0@275
  unsigned int v181; // r6@276
  int v182; // r5@276
  void *v183; // r9@276
  int v184; // r4@276
  size_t v185; // r7@276
  char *v186; // r8@276
  _DWORD *v187; // r0@276
  _DWORD *v188; // r1@279
  int v189; // r4@281
  void *v190; // r0@283
  void *v191; // r0@289
  void *v192; // r0@290
  void *v193; // r0@292
  void *v194; // r0@293
  void *v195; // r0@296
  void *v196; // r0@297
  unsigned int *v197; // r2@298
  const char *v198; // r5@299
  signed int v199; // r1@300
  void *v200; // r0@303
  _BYTE *v201; // r0@307
  _BYTE *v202; // r0@308
  _BYTE *v203; // r0@311
  _BYTE *v204; // r0@312
  _BYTE *v205; // r0@315
  _BYTE *v206; // r0@316
  void *v207; // r0@317
  unsigned int v208; // r1@318
  unsigned int v209; // r0@318
  char v210; // r0@321
  char v211; // r0@323
  mce::RenderContextImmediate *v212; // r0@327
  mce::RenderContext *v213; // r0@327
  mce::RenderContextImmediate *v214; // r0@327
  mce::RenderContext *v215; // r0@327
  mce::RenderContextImmediate *v216; // r0@327
  mce::RenderContext *v217; // r0@327
  mce::RenderContextImmediate *v218; // r0@327
  mce::RenderContext *v219; // r0@329
  unsigned int *v221; // r2@330
  signed int v222; // r1@332
  unsigned int *v223; // r2@334
  signed int v224; // r1@336
  unsigned int *v225; // r2@338
  signed int v226; // r1@340
  unsigned int *v227; // r2@342
  signed int v228; // r1@344
  unsigned int *v229; // r2@346
  signed int v230; // r1@348
  unsigned int *v231; // r2@350
  signed int v232; // r1@352
  unsigned int *v233; // r2@354
  signed int v234; // r1@356
  unsigned int *v235; // r2@358
  signed int v236; // r1@360
  unsigned int *v237; // r2@362
  signed int v238; // r1@364
  unsigned int *v239; // r2@366
  signed int v240; // r1@368
  unsigned int *v241; // r2@370
  signed int v242; // r1@372
  unsigned int *v243; // r2@374
  signed int v244; // r1@376
  unsigned int *v245; // r1@378
  signed int v246; // r0@380
  unsigned int *v247; // r2@382
  signed int v248; // r1@384
  unsigned int *v249; // r1@386
  signed int v250; // r0@388
  unsigned int *v251; // r2@390
  signed int v252; // r1@392
  unsigned int *v253; // r2@394
  signed int v254; // r1@396
  unsigned int *v255; // r2@398
  signed int v256; // r1@400
  unsigned int *v257; // r2@402
  signed int v258; // r1@404
  unsigned int *v259; // r2@450
  signed int v260; // r1@452
  unsigned int *v261; // r2@462
  signed int v262; // r1@464
  void *ptr; // [sp+18h] [bp-1B8h]@205
  int v264; // [sp+1Ch] [bp-1B4h]@118
  mce::BlendStateDescription *v265; // [sp+20h] [bp-1B0h]@25
  _BYTE *v266; // [sp+24h] [bp-1ACh]@95
  int v267; // [sp+28h] [bp-1A8h]@95
  char *v268; // [sp+2Ch] [bp-1A4h]@1
  char *v269; // [sp+2Ch] [bp-1A4h]@42
  __int64 v270; // [sp+30h] [bp-1A0h]@33
  signed int v271; // [sp+34h] [bp-19Ch]@26
  int (**v272)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+34h] [bp-19Ch]@118
  signed int v273; // [sp+38h] [bp-198h]@25
  unsigned int v274; // [sp+38h] [bp-198h]@167
  int v275; // [sp+38h] [bp-198h]@232
  int v276; // [sp+38h] [bp-198h]@246
  int v277; // [sp+3Ch] [bp-194h]@317
  _BYTE *v278; // [sp+44h] [bp-18Ch]@313
  _BYTE *v279; // [sp+4Ch] [bp-184h]@309
  _BYTE *v280; // [sp+54h] [bp-17Ch]@305
  int v281; // [sp+5Ch] [bp-174h]@303
  int v282; // [sp+60h] [bp-170h]@303
  int v283; // [sp+68h] [bp-168h]@296
  int v284; // [sp+6Ch] [bp-164h]@296
  int v285; // [sp+74h] [bp-15Ch]@292
  int v286; // [sp+78h] [bp-158h]@292
  int v287; // [sp+80h] [bp-150h]@289
  int v288; // [sp+84h] [bp-14Ch]@289
  int v289; // [sp+8Ch] [bp-144h]@274
  int v290; // [sp+90h] [bp-140h]@135
  void *v291; // [sp+A0h] [bp-130h]@54
  void *v292; // [sp+B0h] [bp-120h]@95
  char v293; // [sp+C0h] [bp-110h]@44
  int v294; // [sp+D4h] [bp-FCh]@207
  int v295; // [sp+DCh] [bp-F4h]@123
  int v296; // [sp+E4h] [bp-ECh]@119
  char v297; // [sp+E8h] [bp-E8h]@118
  char v298; // [sp+F8h] [bp-D8h]@44
  int v299; // [sp+10Ch] [bp-C4h]@50
  int v300; // [sp+114h] [bp-BCh]@46
  int v301; // [sp+118h] [bp-B8h]@34
  void *s1; // [sp+128h] [bp-A8h]@1
  int v303; // [sp+140h] [bp-90h]@33
  int v304; // [sp+148h] [bp-88h]@28
  int v305; // [sp+150h] [bp-80h]@27
  int v306; // [sp+158h] [bp-78h]@26
  int v307; // [sp+160h] [bp-70h]@25
  int v308; // [sp+168h] [bp-68h]@24
  int v309; // [sp+170h] [bp-60h]@7
  int v310; // [sp+174h] [bp-5Ch]@3
  char v311; // [sp+178h] [bp-58h]@1
  int v312; // [sp+190h] [bp-40h]@275
  void *v313; // [sp+194h] [bp-3Ch]@131
  int v314; // [sp+198h] [bp-38h]@1
  int v315; // [sp+19Ch] [bp-34h]@194

  v8 = (const char *)a2;
  v9 = (int *)a4;
  v268 = (char *)a2;
  v10 = a1;
  mce::RenderMaterial::RenderMaterial((mce::RenderMaterial *)a1, a3);
  EntityInteraction::setInteractText((int *)v10, (int *)a7);
  EntityInteraction::setInteractText((int *)(v10 + 4), v9);
  EntityInteraction::setInteractText((int *)(v10 + 512), (int *)a8);
  Json::Value::get((Json::Value *)&v311, v8, (const Json::Value *)"states", (const Json::Value *)&Json::Value::null);
  Json::Value::begin((Json::Value *)&v314, (int)&v311);
  Json::Value::end((Json::Value *)&s1, (int)&v311);
  while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v314, (const Json::ValueIteratorBase *)&s1) )
  {
    v15 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v314);
    sub_21E94B4((void **)&v309, (const char *)&unk_257BC67);
    v16 = Json::Value::asString(&v310, v15, &v309);
    v17 = mce::RenderMaterial::_parseStateName((int)v16, (int **)&v310);
    v18 = (void *)(v310 - 12);
    if ( (int *)(v310 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v310 - 4);
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
        j_j_j_j__ZdlPv_9(v18);
    }
    v19 = (void *)(v309 - 12);
    if ( (int *)(v309 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v309 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    if ( v17 )
      *(_DWORD *)(v10 + 32) |= 1 << (v17 & 0x1F);
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v314);
  }
  sub_21E94B4((void **)&v308, "depthFunc");
  sub_1447988(v268, (const Json::Value **)&v308, (_BYTE *)(v10 + 190));
  v20 = (void *)(v308 - 12);
  if ( (int *)(v308 - 12) != &dword_28898C0 )
    v221 = (unsigned int *)(v308 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v222 = __ldrex(v221);
      while ( __strex(v222 - 1, v221) );
    else
      v222 = (*v221)--;
    if ( v222 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v307, "blendSrc");
  v265 = (mce::BlendStateDescription *)(v10 + 108);
  v273 = sub_1447ADC(v268, (const Json::Value **)&v307, (_BYTE *)(v10 + 108));
  v21 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v223 = (unsigned int *)(v307 - 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v306, "blendDst");
  v22 = (_BYTE *)(v10 + 109);
  v271 = sub_1447ADC(v268, (const Json::Value **)&v306, (_BYTE *)(v10 + 109));
  v23 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v225 = (unsigned int *)(v306 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      v226 = (*v225)--;
    if ( v226 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v305, "alphaSrc");
  v24 = (_BYTE *)(v10 + 110);
  v25 = sub_1447ADC(v268, (const Json::Value **)&v305, (_BYTE *)(v10 + 110));
  v26 = (void *)(v305 - 12);
  if ( (int *)(v305 - 12) != &dword_28898C0 )
    v227 = (unsigned int *)(v305 - 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 - 1, v227) );
      v228 = (*v227)--;
    if ( v228 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v304, "alphaDst");
  v27 = v10;
  v28 = (_BYTE *)(v10 + 111);
  v29 = (_BYTE *)(v10 + 111);
  v30 = v268;
  v31 = sub_1447ADC(v268, (const Json::Value **)&v304, v29);
  v32 = (void *)(v304 - 12);
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v229 = (unsigned int *)(v304 - 4);
        v230 = __ldrex(v229);
      while ( __strex(v230 - 1, v229) );
      v230 = (*v229)--;
    if ( v230 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  if ( !(v273 ^ 1 | v25) )
    *v24 = *(_BYTE *)v265;
  if ( !(v271 ^ 1 | v31) )
    *v28 = *v22;
  sub_21E94B4((void **)&v303, "primitiveMode");
  Json::Value::get((Json::Value *)&v314, v268, (const Json::Value **)&v303, (const Json::Value *)&Json::Value::null);
  v33 = v27;
  LODWORD(v270) = v27;
  if ( !Json::Value::isNull((Json::Value *)&v314) )
    v34 = v27;
    sub_21E94B4((void **)&v301, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&s1, (int)&v314, &v301);
    v35 = (void *)(v301 - 12);
    if ( (int *)(v301 - 12) != &dword_28898C0 )
      v243 = (unsigned int *)(v301 - 4);
          v244 = __ldrex(v243);
        while ( __strex(v244 - 1, v243) );
        v244 = (*v243)--;
      if ( v244 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v37 = *(_DWORD *)(dword_27E8BC0 + 4 * *(_DWORD *)algn_27E8BC4);
    v38 = s1;
    v39 = *(_DWORD *)v37;
    v41 = (char *)s1 - 12;
    v40 = *((_DWORD *)s1 - 3);
    v42 = (_DWORD *)(*(_DWORD *)v37 + 12);
    while ( 1 )
      if ( *v42 == v36 )
        v43 = *(_DWORD **)(v39 + 4);
        if ( v40 == *(v43 - 3) && !memcmp(v38, v43, v40) )
          break;
      v37 = v39;
      v42 = (_DWORD *)(*(_DWORD *)v39 + 12);
      v39 = *(_DWORD *)v39;
    v33 = v34;
    v30 = v268;
    *(_BYTE *)(v33 + 509) = *(_BYTE *)(*(_DWORD *)v37 + 8);
    if ( (int *)v41 != &dword_28898C0 )
      v245 = (unsigned int *)((char *)v38 - 4);
          v246 = __ldrex(v245);
        while ( __strex(v246 - 1, v245) );
        v246 = (*v245)--;
      if ( v246 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
  Json::Value::~Value((Json::Value *)&v314);
  v44 = (void *)(v303 - 12);
  if ( (int *)(v303 - 12) != &dword_28898C0 )
    v231 = (unsigned int *)(v303 - 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v269 = v30;
  sub_1447C34(v30, (Json::Value *)"frontFace", v33 + 191);
  sub_1447C34(v30, (Json::Value *)"backFace", v33 + 195);
  Json::Value::get(
    (Json::Value *)&s1,
    v30,
    (const Json::Value *)"samplerStates",
    (const Json::Value *)&Json::Value::null);
  if ( !Json::Value::isNull((Json::Value *)&s1) )
    *(_WORD *)(v33 + 440) = 0;
  Json::Value::begin((Json::Value *)&v298, (int)&s1);
  Json::Value::end((Json::Value *)&v293, (int)&s1);
  if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v298, (const Json::ValueIteratorBase *)&v293) )
    v45 = (Json::ValueIteratorBase *)&v298;
    v46 = (Json::Value *)&v301;
    v47 = (const Json::ValueIteratorBase *)&v293;
    v48 = (const Json::Value *)&Json::Value::null;
    HIDWORD(v270) = &Json::Value::null;
    do
      v61 = (const char *)Json::ValueIteratorBase::deref(v45);
      Json::Value::get(v46, v61, (const Json::Value *)"samplerIndex", v48);
      if ( !Json::Value::isNull(v46) )
        v62 = Json::Value::asUInt(v46, 0);
        if ( v62 <= 7 )
        {
          v63 = v33;
          ++*(_WORD *)(v33 + 440);
          sub_21E94B4((void **)&v300, "textureFilter");
          Json::Value::get((Json::Value *)&v314, v61, (const Json::Value **)&v300, v48);
          v64 = v33 + 8 * v62;
          if ( !Json::Value::isNull((Json::Value *)&v314) )
          {
            v266 = (_BYTE *)(v64 + 212);
            v267 = v64;
            sub_21E94B4(&v291, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&v292, (int)&v314, (int *)&v291);
            v65 = (char *)v291 - 12;
            if ( (int *)((char *)v291 - 12) != &dword_28898C0 )
            {
              v53 = (unsigned int *)((char *)v291 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
              }
              else
                v54 = (*v53)--;
              if ( v54 <= 0 )
                j_j_j_j__ZdlPv_9(v65);
            }
            v66 = sub_21B417C((int *)v292, *((_DWORD *)v292 - 3), -955291385);
            v67 = *(_DWORD *)(dword_27E8AA8 + 4 * unk_27E8AAC);
            v68 = v292;
            v69 = *(_DWORD *)v67;
            v70 = (char *)v292 - 12;
            v71 = *((_DWORD *)v292 - 3);
            v72 = (_DWORD *)(*(_DWORD *)v67 + 12);
            while ( 1 )
              if ( *v72 == v66 )
                v73 = *(_DWORD **)(v69 + 4);
                if ( v71 == *(v73 - 3) && !memcmp(v68, v73, v71) )
                  break;
              v67 = v69;
              v72 = (_DWORD *)(*(_DWORD *)v69 + 12);
              v69 = *(_DWORD *)v69;
            v45 = (Json::ValueIteratorBase *)&v298;
            v63 = v270;
            *v266 = *(_BYTE *)(*(_DWORD *)v67 + 8);
            if ( (int *)v70 != &dword_28898C0 )
              v55 = (unsigned int *)((char *)v68 - 4);
                  v56 = __ldrex(v55);
                while ( __strex(v56 - 1, v55) );
                v56 = (*v55)--;
              if ( v56 <= 0 )
                j_j_j_j__ZdlPv_9(v70);
            v48 = (const Json::Value *)&Json::Value::null;
            v47 = (const Json::ValueIteratorBase *)&v293;
            v64 = v267;
          }
          Json::Value::~Value((Json::Value *)&v314);
          v74 = (void *)(v300 - 12);
          if ( (int *)(v300 - 12) != &dword_28898C0 )
            v49 = (unsigned int *)(v300 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
            else
              v50 = (*v49)--;
            if ( v50 <= 0 )
              j_j_j_j__ZdlPv_9(v74);
          sub_21E94B4((void **)&v299, "textureWrap");
          Json::Value::get((Json::Value *)&v314, v61, (const Json::Value **)&v299, v48);
            v75 = (_BYTE *)(v64 + 213);
            v76 = (char *)v291 - 12;
              v57 = (unsigned int *)((char *)v291 - 4);
                  v58 = __ldrex(v57);
                while ( __strex(v58 - 1, v57) );
                v58 = (*v57)--;
              if ( v58 <= 0 )
                j_j_j_j__ZdlPv_9(v76);
            v77 = sub_21B417C((int *)v292, *((_DWORD *)v292 - 3), -955291385);
            v78 = *(_DWORD *)(dword_27E8AC4 + 4 * unk_27E8AC8);
            v79 = v292;
            v80 = *(_DWORD *)v78;
            v82 = (char *)v292 - 12;
            v81 = *((_DWORD *)v292 - 3);
            v83 = (_DWORD *)(*(_DWORD *)v78 + 12);
              if ( *v83 == v77 )
                v84 = *(_DWORD **)(v80 + 4);
                if ( v81 == *(v84 - 3) && !memcmp(v79, v84, v81) )
              v78 = v80;
              v83 = (_DWORD *)(*(_DWORD *)v80 + 12);
              v80 = *(_DWORD *)v80;
            *v75 = *(_BYTE *)(*(_DWORD *)v78 + 8);
            if ( (int *)v82 != &dword_28898C0 )
              v59 = (unsigned int *)((char *)v79 - 4);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 <= 0 )
                j_j_j_j__ZdlPv_9(v82);
            *(_QWORD *)(&v48 - 1) = v270;
          v85 = (void *)(v299 - 12);
          if ( (int *)(v299 - 12) != &dword_28898C0 )
            v51 = (unsigned int *)(v299 - 4);
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
              v52 = (*v51)--;
            if ( v52 <= 0 )
              j_j_j_j__ZdlPv_9(v85);
          v33 = v63;
          v46 = (Json::Value *)&v301;
        }
      Json::Value::~Value(v46);
      Json::ValueIteratorBase::increment(v45);
    while ( !Json::ValueIteratorBase::isEqual(v45, v47) );
  v86 = v269;
  Json::Value::get((Json::Value *)&v301, v269, (const Json::Value *)"textures", (const Json::Value *)&Json::Value::null);
  v87 = v33;
  if ( Json::Value::operator!=((int)&v301, (int)&Json::Value::null) )
    v88 = v33;
    *(_BYTE *)(v33 + 64) = 1;
    Json::Value::begin((Json::Value *)&v293, (int)&v301);
    Json::Value::end((Json::Value *)&v292, (int)&v301);
    if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v293, (const Json::ValueIteratorBase *)&v292) )
      v264 = v33 + 68;
      v89 = (Json::ValueIteratorBase *)&v293;
      v90 = (Json::Value *)&v298;
      v91 = &v292;
      v92 = &v297;
      v93 = (const Json::Value *)&Json::Value::null;
      v272 = &pthread_create;
        v106 = (const char *)Json::ValueIteratorBase::deref(v89);
        Json::Value::get(v90, v106, (const Json::Value *)"textureIndex", v93);
        if ( !Json::Value::isNull(v90) )
          v107 = Json::Value::asUInt(v90, 0);
          v108 = v88;
          v274 = v107;
          *(_QWORD *)&v109 = *(_QWORD *)(v88 + 68);
          v111 = 954437177 * ((v110 - v109) >> 2);
          v112 = v107 + 1;
          if ( v107 + 1 <= v111 )
            v113 = (Json::Value *)v92;
            if ( v107 + 1 < v111 )
              v114 = 9 * v112;
              v115 = v109 + 4 * v114;
              v116 = v109 + 4 * v114;
              if ( v110 != v115 )
                {
                  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v116 + 8));
                  v119 = (int *)(*(_DWORD *)v116 - 12);
                  if ( v119 != &dword_28898C0 )
                  {
                    v117 = (unsigned int *)(*(_DWORD *)v116 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v118 = __ldrex(v117);
                      while ( __strex(v118 - 1, v117) );
                    }
                    else
                      v118 = (*v117)--;
                    if ( v118 <= 0 )
                      j_j_j_j__ZdlPv_9(v119);
                  }
                  v116 += 36;
                }
                while ( v116 != v110 );
              v93 = (const Json::Value *)&Json::Value::null;
              *(_DWORD *)(v108 + 72) = v115;
              v113 = (Json::Value *)&v297;
          else
            std::vector<mce::RenderMaterial::TextureState,std::allocator<mce::RenderMaterial::TextureState>>::_M_default_append(
              v264,
              v112 - v111);
          Json::Value::get(v113, v106, (const Json::Value *)"textureName", v93);
          sub_21E94B4((void **)&v296, (const char *)&unk_257BC67);
          Json::Value::asString((int *)&v313, (int)v113, &v296);
          v120 = (Json::Value *)&v314;
          v121 = (void *)(v296 - 12);
          if ( (int *)(v296 - 12) != &dword_28898C0 )
            v94 = (unsigned int *)(v296 - 4);
                v95 = __ldrex(v94);
              while ( __strex(v95 - 1, v94) );
              v95 = (*v94)--;
            if ( v95 <= 0 )
              j_j_j_j__ZdlPv_9(v121);
          Json::Value::~Value(v113);
          sub_21E94B4((void **)&v295, "textureLocation");
          Json::Value::get((Json::Value *)&v314, v106, (const Json::Value **)&v295, v93);
            sub_21E94B4((void **)&v290, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&v291, (int)&v314, &v290);
            v122 = (void *)(v290 - 12);
            if ( (int *)(v290 - 12) != &dword_28898C0 )
              v102 = (unsigned int *)(v290 - 4);
                  v103 = __ldrex(v102);
                while ( __strex(v103 - 1, v102) );
                v103 = (*v102)--;
              if ( v103 <= 0 )
                j_j_j_j__ZdlPv_9(v122);
            v123 = sub_21B417C((int *)v291, *((_DWORD *)v291 - 3), -955291385);
            v124 = *(_DWORD *)(dword_27E8B50 + 4 * *(_DWORD *)algn_27E8B54);
            v125 = v291;
            v126 = *(_DWORD *)v124;
            v128 = (char *)v291 - 12;
            v127 = *((_DWORD *)v291 - 3);
            v129 = (_DWORD *)(*(_DWORD *)v124 + 12);
              if ( *v129 == v123 )
                v130 = *(_DWORD **)(v126 + 4);
                if ( v127 == *(v130 - 3) && !memcmp(v125, v130, v127) )
              v124 = v126;
              v129 = (_DWORD *)(*(_DWORD *)v126 + 12);
              v126 = *(_DWORD *)v126;
            v89 = (Json::ValueIteratorBase *)&v293;
            v108 = v270;
            v272 = *(int (***)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))(*(_DWORD *)v124 + 8);
            if ( (int *)v128 != &dword_28898C0 )
              v104 = (unsigned int *)((char *)v125 - 4);
                  v105 = __ldrex(v104);
                while ( __strex(v105 - 1, v104) );
                v105 = (*v104)--;
              if ( v105 <= 0 )
                j_j_j_j__ZdlPv_9(v128);
            v93 = (const Json::Value *)&Json::Value::null;
            v120 = (Json::Value *)&v314;
          Json::Value::~Value(v120);
          v97 = v295;
          v131 = (void *)(v295 - 12);
          if ( (int *)(v295 - 12) != &dword_28898C0 )
            v96 = (unsigned int *)(v295 - 4);
                v97 = __ldrex(v96);
              while ( __strex(v97 - 1, v96) );
              v97 = (*v96)--;
            if ( v97 <= 0 )
              j_j_j_j__ZdlPv_9(v131);
          v132 = *(_DWORD *)(v108 + 68);
          mce::RenderMaterial::textureLocationToResourceLocation((int)v120, v97, (int)v272, (int *)&v313);
          v133 = v132 + 36 * v274;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v133,
            (int *)v120);
          *(_DWORD *)(v133 + 4) = v315;
          v134 = (void *)(v314 - 12);
          if ( (int *)(v314 - 12) != &dword_28898C0 )
            v98 = (unsigned int *)(v314 - 4);
                v99 = __ldrex(v98);
              while ( __strex(v99 - 1, v98) );
              v99 = (*v98)--;
            if ( v99 <= 0 )
              j_j_j_j__ZdlPv_9(v134);
          *(_BYTE *)(v133 + 32) = 0;
          v92 = &v297;
          mce::RenderMaterial::_resolveTexture((mce::RenderMaterial *)v108, v274, a5);
          v135 = (char *)v313 - 12;
          if ( (int *)((char *)v313 - 12) != &dword_28898C0 )
            v100 = (unsigned int *)((char *)v313 - 4);
                v101 = __ldrex(v100);
              while ( __strex(v101 - 1, v100) );
              v101 = (*v100)--;
            if ( v101 <= 0 )
              j_j_j_j__ZdlPv_9(v135);
          v88 = v108;
          v90 = (Json::Value *)&v298;
          v91 = &v292;
        Json::Value::~Value(v90);
        Json::ValueIteratorBase::increment(v89);
      while ( !Json::ValueIteratorBase::isEqual(v89, (const Json::ValueIteratorBase *)v91) );
    v86 = v269;
    v87 = v88;
    (Json::Value *)&v298,
    v86,
    (const Json::Value *)"vertexFields",
  if ( !Json::Value::isNull((Json::Value *)&v298) )
    v136 = *(_QWORD *)(v87 + 444) >> 32;
    v137 = *(_QWORD *)(v87 + 444);
    if ( v136 == v137 )
      v138 = 0;
      v139 = *(_QWORD *)(v87 + 444) >> 32;
      v138 = operator new(v136 - v137);
      v136 = *(_QWORD *)(v87 + 444) >> 32;
      v139 = *(_QWORD *)(v87 + 444);
    if ( v136 != v139 )
      _aeabi_memmove(v138, v139);
    ptr = v138;
    *(_DWORD *)(v87 + 448) = v139;
    v140 = mce::VertexFormat::EMPTY;
    v141 = unk_27E8CB0;
    *(_BYTE *)(v87 + 464) = unk_27E8CB4;
    *(_DWORD *)(v87 + 460) = v141;
    *(_DWORD *)(v87 + 456) = v140;
    Json::Value::begin((Json::Value *)&v293, (int)&v298);
    Json::Value::end((Json::Value *)&v292, (int)&v298);
      v142 = (Json::ValueIteratorBase *)&v293;
      v143 = (Json::Value *)&v314;
      v144 = 0;
      v145 = (const Json::Value *)&Json::Value::null;
      v146 = &dword_28898C0;
        v153 = (const char *)Json::ValueIteratorBase::deref(v142);
        v154 = *(_QWORD *)(v87 + 448);
        if ( (_DWORD)v154 == HIDWORD(v154) )
          v275 = v144;
          v155 = v145;
          v156 = v87;
          v157 = v143;
          v158 = *(void **)(v87 + 444);
          HIDWORD(v154) = v154 - (_DWORD)v158;
          if ( (_DWORD)v154 - (_DWORD)v158 == -1 )
            sub_21E5A04("vector::_M_emplace_back_aux");
          v160 = v154 - (_DWORD)v158;
          if ( (void *)v154 == v158 )
            v160 = 1;
          v161 = v160 + v159;
          if ( v160 + v159 < v160 )
            v161 = -1;
          if ( v161 )
            v162 = (char *)operator new(v161);
            LODWORD(v154) = *(_QWORD *)(v156 + 444) >> 32;
            v158 = (void *)*(_QWORD *)(v156 + 444);
            v162 = 0;
          v163 = &v162[v154 - (_DWORD)v158];
          *v163 = 0;
          if ( (void *)v154 != v158 )
            _aeabi_memmove(v162, v158);
          v164 = (int)(v163 + 1);
          if ( v158 )
            operator delete(v158);
          v87 = v156;
          v145 = v155;
          *(_QWORD *)(v87 + 444) = *(_QWORD *)&v162;
          v143 = v157;
          v146 = &dword_28898C0;
          v165 = (int)&v162[v161];
          v144 = v275;
          v142 = (Json::ValueIteratorBase *)&v293;
          *(_DWORD *)(v87 + 452) = v165;
        else
          *(_BYTE *)v154 = 0;
          *(_DWORD *)(v87 + 448) = v154 + 1;
        sub_21E94B4((void **)&v294, "field");
        HIDWORD(v270) = *(_DWORD *)(v87 + 444);
        Json::Value::get(v143, v153, (const Json::Value **)&v294, v145);
        if ( !Json::Value::isNull(v143) )
          v276 = v144;
          sub_21E94B4((void **)&v290, (const char *)&unk_257BC67);
          Json::Value::asString((int *)&v291, (int)v143, &v290);
          v166 = (void *)(v290 - 12);
          if ( (int *)(v290 - 12) != v146 )
            v149 = (unsigned int *)(v290 - 4);
                v150 = __ldrex(v149);
              while ( __strex(v150 - 1, v149) );
              v150 = (*v149)--;
            if ( v150 <= 0 )
              j_j_j_j__ZdlPv_9(v166);
          v167 = sub_21B417C((int *)v291, *((_DWORD *)v291 - 3), -955291385);
          v168 = *(_DWORD *)(dword_27E8B88 + 4 * unk_27E8B8C);
          v169 = v291;
          v170 = *(_DWORD *)v168;
          v172 = (char *)v291 - 12;
          v171 = *((_DWORD *)v291 - 3);
          v173 = (_DWORD *)(*(_DWORD *)v168 + 12);
          while ( 1 )
            if ( *v173 == v167 )
              v174 = *(_DWORD **)(v170 + 4);
              if ( v171 == *(v174 - 3) && !memcmp(v169, v174, v171) )
                break;
            v168 = v170;
            v173 = (_DWORD *)(*(_DWORD *)v170 + 12);
            v170 = *(_DWORD *)v170;
          v175 = *(_BYTE *)(*(_DWORD *)v168 + 8);
          v144 = v276;
          v87 = v270;
          v145 = (const Json::Value *)&Json::Value::null;
          *(_BYTE *)(HIDWORD(v270) + v276) = v175;
          if ( (int *)v172 != v146 )
            v151 = (unsigned int *)((char *)v169 - 4);
                v152 = __ldrex(v151);
              while ( __strex(v152 - 1, v151) );
              v152 = (*v151)--;
            if ( v152 <= 0 )
              j_j_j_j__ZdlPv_9(v172);
          v143 = (Json::Value *)&v314;
        ++v144;
        Json::Value::~Value(v143);
        v176 = (void *)(v294 - 12);
        if ( (int *)(v294 - 12) != v146 )
          v147 = (unsigned int *)(v294 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v148 = __ldrex(v147);
            while ( __strex(v148 - 1, v147) );
            v148 = (*v147)--;
          if ( v148 <= 0 )
            j_j_j_j__ZdlPv_9(v176);
        Json::ValueIteratorBase::increment(v142);
      while ( !Json::ValueIteratorBase::isEqual(v142, (const Json::ValueIteratorBase *)&v292) );
    if ( ptr )
      operator delete(ptr);
    (Json::Value *)&v293,
    (const Json::Value *)"stencilRefOverride",
  if ( !Json::Value::isNull((Json::Value *)&v293) )
    *(_BYTE *)(v87 + 210) = Json::Value::asBool((Json::Value *)&v293, 0);
    (Json::Value *)&v292,
    (const Json::Value *)"stencilRef",
  if ( !Json::Value::isNull((Json::Value *)&v292) )
    v177 = Json::Value::asUInt((Json::Value *)&v292, 0);
    *(_BYTE *)(v87 + 208) = v177;
    *(_BYTE *)(v87 + 209) = v177;
    *(_BYTE *)(v87 + 210) = 1;
    (Json::Value *)&v291,
    (const Json::Value *)"stencilReadMask",
  if ( !Json::Value::isNull((Json::Value *)&v291) )
    *(_DWORD *)(v87 + 200) = Json::Value::asUInt((Json::Value *)&v291, 0);
    (Json::Value *)&v290,
    (const Json::Value *)"stencilWriteMask",
  if ( !Json::Value::isNull((Json::Value *)&v290) )
    *(_DWORD *)(v87 + 204) = Json::Value::asUInt((Json::Value *)&v290, 0);
  Json::Value::get((Json::Value *)&v314, v86, (const Json::Value *)"depthBias", (const Json::Value *)&Json::Value::null);
    *(_DWORD *)(v87 + 52) = Json::Value::asFloat((Json::Value *)&v314, 0.0) ^ 0x80000000;
    (Json::Value *)&v314,
    (const Json::Value *)"slopeScaledDepthBias",
    *(_DWORD *)(v87 + 56) = Json::Value::asFloat((Json::Value *)&v314, 0.0) ^ 0x80000000;
    (const Json::Value *)"depthBiasOGL",
    (const Json::Value *)"slopeScaledDepthBiasOGL",
  sub_21E94B4((void **)&v289, "msaaSupport");
  Json::Value::get((Json::Value *)&v314, v86, (const Json::Value **)&v289, (const Json::Value *)&Json::Value::null);
    v178 = v86;
    v179 = v87;
    sub_21E94B4((void **)&v312, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v313, (int)&v314, &v312);
    v180 = (void *)(v312 - 12);
    if ( (int *)(v312 - 12) != &dword_28898C0 )
      v247 = (unsigned int *)(v312 - 4);
          v248 = __ldrex(v247);
        while ( __strex(v248 - 1, v247) );
        v248 = (*v247)--;
      if ( v248 <= 0 )
        j_j_j_j__ZdlPv_9(v180);
    v181 = sub_21B417C((int *)v313, *((_DWORD *)v313 - 3), -955291385);
    v182 = *(_DWORD *)(dword_27E8BA4 + 4 * unk_27E8BA8);
    v183 = v313;
    v184 = *(_DWORD *)v182;
    v186 = (char *)v313 - 12;
    v185 = *((_DWORD *)v313 - 3);
    v187 = (_DWORD *)(*(_DWORD *)v182 + 12);
      if ( *v187 == v181 )
        v188 = *(_DWORD **)(v184 + 4);
        if ( v185 == *(v188 - 3) && !memcmp(v183, v188, v185) )
      v182 = v184;
      v187 = (_DWORD *)(*(_DWORD *)v184 + 12);
      v184 = *(_DWORD *)v184;
    v189 = v179;
    *(_DWORD *)(v179 + 516) = *(_DWORD *)(*(_DWORD *)v182 + 8);
    v86 = v178;
    if ( (int *)v186 != &dword_28898C0 )
      v249 = (unsigned int *)((char *)v183 - 4);
          v250 = __ldrex(v249);
        while ( __strex(v250 - 1, v249) );
        v250 = (*v249)--;
      if ( v250 <= 0 )
        j_j_j_j__ZdlPv_9(v186);
    v87 = v189;
  v190 = (void *)(v289 - 12);
  if ( (int *)(v289 - 12) != &dword_28898C0 )
    v233 = (unsigned int *)(v289 - 4);
        v234 = __ldrex(v233);
      while ( __strex(v234 - 1, v233) );
      v234 = (*v233)--;
    if ( v234 <= 0 )
      j_j_j_j__ZdlPv_9(v190);
  if ( *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 12) == 1 )
    *(_DWORD *)(v87 + 516) = 1;
    (const Json::Value *)"isAnimatedTexture",
    *(_BYTE *)(v87 + 508) = 1;
  Json::Value::~Value((Json::Value *)&v290);
  Json::Value::~Value((Json::Value *)&v291);
  Json::Value::~Value((Json::Value *)&v292);
  Json::Value::~Value((Json::Value *)&v293);
  Json::Value::~Value((Json::Value *)&v298);
  Json::Value::~Value((Json::Value *)&v301);
  Json::Value::~Value((Json::Value *)&s1);
  Json::Value::~Value((Json::Value *)&v311);
    (const Json::Value *)"vertexShader",
    sub_21E94B4((void **)&v287, (const char *)&unk_257BC67);
    Json::Value::asString(&v288, (int)&v314, &v287);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v87 + 40),
      &v288);
    v191 = (void *)(v288 - 12);
    if ( (int *)(v288 - 12) != &dword_28898C0 )
      v251 = (unsigned int *)(v288 - 4);
          v252 = __ldrex(v251);
        while ( __strex(v252 - 1, v251) );
        v252 = (*v251)--;
      if ( v252 <= 0 )
        j_j_j_j__ZdlPv_9(v191);
    v192 = (void *)(v287 - 12);
    if ( (int *)(v287 - 12) != &dword_28898C0 )
      v253 = (unsigned int *)(v287 - 4);
          v254 = __ldrex(v253);
        while ( __strex(v254 - 1, v253) );
        v254 = (*v253)--;
      if ( v254 <= 0 )
        j_j_j_j__ZdlPv_9(v192);
    (const Json::Value *)"fragmentShader",
    sub_21E94B4((void **)&v285, (const char *)&unk_257BC67);
    Json::Value::asString(&v286, (int)&v314, &v285);
      (int *)(v87 + 44),
      &v286);
    v193 = (void *)(v286 - 12);
    if ( (int *)(v286 - 12) != &dword_28898C0 )
      v255 = (unsigned int *)(v286 - 4);
          v256 = __ldrex(v255);
        while ( __strex(v256 - 1, v255) );
        v256 = (*v255)--;
      if ( v256 <= 0 )
        j_j_j_j__ZdlPv_9(v193);
    v194 = (void *)(v285 - 12);
    if ( (int *)(v285 - 12) != &dword_28898C0 )
      v257 = (unsigned int *)(v285 - 4);
          v258 = __ldrex(v257);
        while ( __strex(v258 - 1, v257) );
        v258 = (*v257)--;
      if ( v258 <= 0 )
        j_j_j_j__ZdlPv_9(v194);
    (const Json::Value *)"geometryShader",
    (Json::Value *)&v311,
    (const Json::Value *)"vrGeometryShader",
  if ( Json::Value::isNull((Json::Value *)&v311)
    || mce::GlobalConstantBufferManager::isHolographic(mce::Singleton<mce::GlobalConstantBufferManager>::mInstance) != 1 )
    if ( !Json::Value::isNull((Json::Value *)&v314) )
      sub_21E94B4((void **)&v281, (const char *)&unk_257BC67);
      Json::Value::asString(&v282, (int)&v314, &v281);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v87 + 48),
        &v282);
      v200 = (void *)(v282 - 12);
      if ( (int *)(v282 - 12) != &dword_28898C0 )
        v259 = (unsigned int *)(v282 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v260 = __ldrex(v259);
          while ( __strex(v260 - 1, v259) );
          v260 = (*v259)--;
        if ( v260 <= 0 )
          j_j_j_j__ZdlPv_9(v200);
      v196 = (void *)(v281 - 12);
      if ( (int *)(v281 - 12) != &dword_28898C0 )
        v197 = (unsigned int *)(v281 - 4);
          v198 = v86;
            v199 = __ldrex(v197);
          while ( __strex(v199 - 1, v197) );
          goto LABEL_457;
LABEL_458:
        v199 = (*v197)--;
LABEL_459:
        if ( v199 <= 0 )
          j_j_j_j__ZdlPv_9(v196);
        goto LABEL_305;
  else
    sub_21E94B4((void **)&v283, (const char *)&unk_257BC67);
    Json::Value::asString(&v284, (int)&v311, &v283);
      (int *)(v87 + 48),
      &v284);
    v195 = (void *)(v284 - 12);
    if ( (int *)(v284 - 12) != &dword_28898C0 )
      v261 = (unsigned int *)(v284 - 4);
          v262 = __ldrex(v261);
        while ( __strex(v262 - 1, v261) );
        v262 = (*v261)--;
      if ( v262 <= 0 )
        j_j_j_j__ZdlPv_9(v195);
    v196 = (void *)(v283 - 12);
    if ( (int *)(v283 - 12) != &dword_28898C0 )
      v197 = (unsigned int *)(v283 - 4);
        v198 = v86;
          v199 = __ldrex(v197);
        while ( __strex(v199 - 1, v197) );
LABEL_457:
        v86 = v198;
        goto LABEL_459;
      goto LABEL_458;
LABEL_305:
  sub_21E94B4((void **)&v280, "/glsl");
  if ( *(_DWORD *)(*(_DWORD *)(v87 + 40) - 12) >= 2u
    && sub_21E76A0((int *)(v87 + 40), v280, 0, *((_DWORD *)v280 - 3)) == -1 )
    v201 = sub_21E78D0((int *)(v87 + 40), 47, 0xFFFFFFFF);
    sub_21E82D8((const void **)(v87 + 40), (size_t)v201, (unsigned int)v280, *((_BYTE **)v280 - 3));
  v202 = v280 - 12;
  if ( (int *)(v280 - 12) != &dword_28898C0 )
    v235 = (unsigned int *)(v280 - 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 <= 0 )
      j_j_j_j__ZdlPv_9(v202);
  sub_21E94B4((void **)&v279, "/glsl");
  if ( *(_DWORD *)(*(_DWORD *)(v87 + 44) - 12) >= 2u
    && sub_21E76A0((int *)(v87 + 44), v279, 0, *((_DWORD *)v279 - 3)) == -1 )
    v203 = sub_21E78D0((int *)(v87 + 44), 47, 0xFFFFFFFF);
    sub_21E82D8((const void **)(v87 + 44), (size_t)v203, (unsigned int)v279, *((_BYTE **)v279 - 3));
  v204 = v279 - 12;
  if ( (int *)(v279 - 12) != &dword_28898C0 )
    v237 = (unsigned int *)(v279 - 4);
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 <= 0 )
      j_j_j_j__ZdlPv_9(v204);
  sub_21E94B4((void **)&v278, "/glsl");
  if ( *(_DWORD *)(*(_DWORD *)(v87 + 48) - 12) >= 2u
    && sub_21E76A0((int *)(v87 + 48), v278, 0, *((_DWORD *)v278 - 3)) == -1 )
    v205 = sub_21E78D0((int *)(v87 + 48), 47, 0xFFFFFFFF);
    sub_21E82D8((const void **)(v87 + 48), (size_t)v205, (unsigned int)v278, *((_BYTE **)v278 - 3));
  v206 = v278 - 12;
  if ( (int *)(v278 - 12) != &dword_28898C0 )
    v239 = (unsigned int *)(v278 - 4);
        v240 = __ldrex(v239);
      while ( __strex(v240 - 1, v239) );
      v240 = (*v239)--;
    if ( v240 <= 0 )
      j_j_j_j__ZdlPv_9(v206);
  mce::RenderMaterial::_buildHeader((mce::RenderMaterial *)&v277, (const Json::Value *)v87, v86);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v87 + 36),
    &v277);
  v207 = (void *)(v277 - 12);
  if ( (int *)(v277 - 12) != &dword_28898C0 )
    v241 = (unsigned int *)(v277 - 4);
        v242 = __ldrex(v241);
      while ( __strex(v242 - 1, v241) );
      v242 = (*v241)--;
    if ( v242 <= 0 )
      j_j_j_j__ZdlPv_9(v207);
  v208 = *(_DWORD *)(v87 + 32);
  *(_BYTE *)(v87 + 188) = ~(v208 >> 1) & 1;
  *(_BYTE *)(v87 + 199) = ~(v208 >> 6) & 1;
  *(_BYTE *)(v87 + 189) = (v208 >> 9) & 1;
  v209 = ((v208 & 0x20) >> 2) ^ 0xF;
  if ( v208 & 0x10 )
    LOBYTE(v209) = 0;
  *(_BYTE *)(v87 + 112) = v209;
  *(_BYTE *)(v87 + 113) = (v208 >> 2) & 1;
  if ( v208 & 0x400 )
    v210 = mce::RenderDevice::checkFeatureSupport();
    v208 = *(_DWORD *)(v87 + 32);
    v210 = 0;
  *(_BYTE *)(v87 + 114) = v210;
  v211 = 2;
  if ( v208 & 0x100 )
    v211 = 1;
  if ( v208 & 8 )
    v211 = 0;
  *(_BYTE *)(v87 + 504) = v211;
  *(_DWORD *)(v87 + 496) = *(_DWORD *)(v87 + 52);
  v212 = *(mce::RenderContextImmediate **)(v87 + 56);
  *(_DWORD *)(v87 + 500) = v212;
  v213 = (mce::RenderContext *)mce::RenderContextImmediate::get(v212);
  v214 = (mce::RenderContextImmediate *)mce::BlendState::createBlendState((mce::BlendState *)(v87 + 80), v213, v265);
  v215 = (mce::RenderContext *)mce::RenderContextImmediate::get(v214);
  v216 = (mce::RenderContextImmediate *)mce::DepthStencilState::createDepthState(
                                          (mce::DepthStencilState *)(v87 + 116),
                                          v215,
                                          (const mce::DepthStencilStateDescription *)(v87 + 188));
  v217 = (mce::RenderContext *)mce::RenderContextImmediate::get(v216);
  mce::RasterizerState::createRasterizerStateDescription(
    (mce::RasterizerState *)(v87 + 468),
    v217,
    (const mce::RasterizerStateDescription *)(v87 + 496));
  v218 = (mce::RenderContextImmediate *)*(_BYTE *)(v87 + 114);
  if ( *(_BYTE *)(v87 + 114) )
    v218 = (mce::RenderContextImmediate *)std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_emplace_unique<char const(&)[18]>(
                                            (int)&v314,
                                            v87 + 8,
                                            "ALPHA_TO_COVERAGE");
  v219 = (mce::RenderContext *)mce::RenderContextImmediate::get(v218);
  mce::SamplerStateGroupBase::createSamplerStateGroup(
    (mce::SamplerStateGroupBase *)(v87 + 276),
    v219,
    (const mce::SamplerStateDescription *)(v87 + 212),
    *(_WORD *)(v87 + 440),
    (mce::SamplerGroupCache *)a6);
  return v87;
}


void __fastcall mce::PipelineStateObject::createPipelineState(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int64 *a7, int a8, char a9)
{
  mce::PipelineStateObject::createPipelineState(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


unsigned int __fastcall mce::TextureContainer::allocateStorage(mce::TextureContainer *this, const mce::TextureDescription *a2)
{
  mce::TextureContainer *v2; // r11@1
  char *v3; // r10@1
  char *v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r6@1
  int v8; // r7@1
  char *v9; // r12@1
  char *v10; // r12@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r6@1
  int v14; // r7@1
  __int64 v15; // kr00_8@1
  unsigned int v16; // r1@1
  unsigned int v17; // r2@1
  int v18; // r1@4
  int v19; // r9@4
  void **v20; // r7@5
  unsigned int result; // r0@10
  int v22; // r8@11
  unsigned int v23; // r6@11
  int v24; // r3@12
  int v25; // r4@12
  int v26; // r5@12
  int v27; // r7@12
  int v28; // r3@12
  __int64 v29; // r0@12
  unsigned int v30; // r2@12
  int v31; // [sp+0h] [bp-38h]@12
  int v32; // [sp+4h] [bp-34h]@12
  int v33; // [sp+8h] [bp-30h]@12
  int v34; // [sp+Ch] [bp-2Ch]@12
  int v35; // [sp+10h] [bp-28h]@12

  v2 = this;
  v3 = (char *)this + 16;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 1);
  v7 = *((_DWORD *)a2 + 2);
  v8 = *((_DWORD *)a2 + 3);
  v4 = (char *)a2 + 16;
  v9 = (char *)this + 16;
  *(_DWORD *)v9 = v5;
  *((_DWORD *)v9 + 1) = v6;
  *((_DWORD *)v9 + 2) = v7;
  *((_DWORD *)v9 + 3) = v8;
  v10 = (char *)this + 32;
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 2);
  v13 = *((_DWORD *)v4 + 3);
  v14 = *((_DWORD *)v4 + 4);
  *(_DWORD *)v10 = *(_DWORD *)v4;
  *((_DWORD *)v10 + 1) = v11;
  *((_DWORD *)v10 + 2) = v12;
  *((_DWORD *)v10 + 3) = v13;
  *((_DWORD *)v10 + 4) = v14;
  *((_BYTE *)this + 52) = v4[20];
  v15 = *(_QWORD *)this;
  v16 = *((_DWORD *)this + 9);
  v17 = -858993459 * ((HIDWORD(v15) - (signed int)v15) >> 3);
  if ( v16 <= v17 )
  {
    if ( v16 < v17 )
    {
      v18 = 5 * v16;
      v19 = v15 + 8 * v18;
      if ( HIDWORD(v15) != v19 )
      {
        v20 = (void **)(v15 + 8 * v18);
        do
        {
          if ( *v20 )
            j_operator delete(*v20);
          v20 += 10;
        }
        while ( (void **)HIDWORD(v15) != v20 );
      }
      *((_DWORD *)v2 + 1) = v19;
    }
  }
  else
    j_std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::_M_default_append((int)this, v16 - v17);
  result = *((_DWORD *)v2 + 9);
  if ( result )
    v22 = 0;
    v23 = 0;
    do
      v24 = *((_DWORD *)v3 + 1);
      v25 = *((_DWORD *)v3 + 2);
      v26 = *((_DWORD *)v3 + 3);
      v27 = *((_DWORD *)v3 + 4);
      v31 = *(_DWORD *)v3;
      v32 = v24;
      v33 = v25;
      v34 = v26;
      v35 = v27;
      v31 = j_mce::TextureDescription::getMipWidth((mce::TextureDescription *)v3, v23);
      v32 = j_mce::TextureDescription::getMipHeight((mce::TextureDescription *)v3, v23);
      v29 = *(_QWORD *)v2;
      v30 = -858993459 * ((HIDWORD(v29) - (signed int)v29) >> 3);
      if ( v30 <= v23 )
        sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v23, v30, v28);
      j_mce::ImageBuffer::allocateStorage((mce::ImageBuffer *)(v29 + v22), (const mce::ImageDescription *)&v31);
      v22 += 40;
      ++v23;
      result = *((_DWORD *)v2 + 9);
    while ( v23 < result );
  return result;
}


int __fastcall mce::TexturePtr::TexturePtr(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  mce::TextureGroup *v5; // r0@2
  mce::TextureGroup *v6; // r0@4

  v2 = a2;
  v3 = a1;
  HIDWORD(v4) = &unk_28898CC;
  LODWORD(v4) = 0;
  *(_DWORD *)v3 = &off_26E8D98;
  *(_DWORD *)(v3 + 4) = 0;
  *(_QWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  if ( v3 != v2 )
  {
    *(_DWORD *)(v3 + 4) = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(v2 + 8);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 12),
      (int *)(v2 + 12));
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v2 + 16);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v2 + 20);
    v5 = *(mce::TextureGroup **)(v2 + 4);
    if ( v5 )
    {
      mce::TextureGroup::_removeRef(v5, (mce::TexturePtr *)v2);
      *(_DWORD *)(v2 + 4) = 0;
    }
    *(_DWORD *)(v2 + 8) = 0;
    v6 = *(mce::TextureGroup **)(v3 + 4);
    if ( v6 )
      mce::TextureGroup::_addRef(v6, (mce::TexturePtr *)v3);
  }
  return v3;
}


mce::DepthStencilStateOGL *__fastcall mce::DepthStencilStateOGL::DepthStencilStateOGL(mce::DepthStencilStateOGL *this)
{
  mce::DepthStencilStateOGL *v1; // r4@1

  v1 = this;
  mce::DepthStencilStateDescription::DepthStencilStateDescription(this);
  _aeabi_memclr4((char *)v1 + 24, 44);
  *((_BYTE *)v1 + 68) = 1;
  return v1;
}


_DWORD *__fastcall mce::LRUCache::add(mce::LRUCache *this, const ResourceLocation *a2, mce::TextureContainer *a3)
{
  const ResourceLocation *v3; // r7@1
  mce::LRUCache *v4; // r5@1
  mce::ImageBuffer *v5; // r0@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r6@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  v5 = (mce::ImageBuffer *)mce::TextureContainer::getImage(a3, 0);
  v6 = (unsigned __int64 *)mce::ImageBuffer::getStorageDEPRECATED(v5);
  v7 = (*v6 >> 32) - *v6;
  *((_DWORD *)v4 + 1) += v7;
  ResourceLocation::getFullPath((ResourceLocation *)&v12, (int)v3);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  return mce::LRUCache::touch(v4, v3, v7);
}


unsigned int __fastcall mce::SamplerStateGroupBase::bindSamplerStateGroup(mce::SamplerStateGroupBase *this, mce::RenderContext *a2, int a3, int a4)
{
  mce::SamplerStateGroupBase *v4; // r5@1
  mce::RenderContext *v5; // r4@1
  unsigned int result; // r0@1
  int v7; // r6@2

  v4 = this;
  v5 = a2;
  result = *((_WORD *)this + 80);
  if ( result )
  {
    v7 = 0;
    do
    {
      mce::SamplerState::bindSamplerState(
        (mce::SamplerStateGroupBase *)((char *)v4 + 4 * (2 * (unsigned __int16)v7 + v7)),
        v5,
        a3,
        a4);
      ++v7;
      result = *((_WORD *)v4 + 80);
    }
    while ( (unsigned __int16)v7 < result );
  }
  return result;
}


int __fastcall mce::WeatherConstants::WeatherConstants(mce::WeatherConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8C14;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


void __fastcall mce::TextConstants::~TextConstants(mce::TextConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


const void **__fastcall mce::ConstantBufferMetaDataManager::findConstantBuffer(unsigned __int64 *a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r8@1
  const void **v4; // r9@1
  int v5; // r0@1
  const void *v6; // r10@2
  int v7; // r6@2
  size_t v8; // r7@2
  const void **v9; // r5@4
  _DWORD *v10; // r1@5
  _DWORD *v11; // r1@7
  _DWORD *v12; // r1@9
  int v13; // r0@13
  const void *v14; // r7@15
  size_t v15; // r6@15

  v3 = (const void **)(*a1 >> 32);
  v2 = *a1;
  v4 = a2;
  v5 = ((signed int)v3 - v2) >> 6;
  if ( v5 < 1 )
  {
LABEL_12:
    if ( 1 == ((signed int)v3 - v2) >> 4 )
    {
      v14 = *v4;
      v9 = (const void **)v2;
      v15 = *((_DWORD *)*v4 - 3);
    }
    else
      v13 = ((signed int)v3 - v2) >> 4;
      if ( v13 == 3 )
      {
        v14 = *v4;
        v15 = *((_DWORD *)*v4 - 3);
        if ( v15 == *(_DWORD *)(*(_DWORD *)v2 - 12) )
        {
          v9 = (const void **)v2;
          if ( !memcmp(*v4, *(const void **)v2, *((_DWORD *)*v4 - 3)) )
            return v9;
        }
        v9 = (const void **)(v2 + 16);
      }
      else
        if ( v13 != 2 )
          return v3;
        v9 = (const void **)v2;
      if ( v15 == *((_DWORD *)*v9 - 3) && !memcmp(v14, *v9, v15) )
        return v9;
      v9 += 4;
    if ( v15 == *((_DWORD *)*v9 - 3) )
      if ( memcmp(v14, *v9, v15) )
        v9 = v3;
      return v9;
    return v3;
  }
  v6 = *a2;
  v7 = v5 + 1;
  v8 = *((_DWORD *)*a2 - 3);
  while ( 1 )
    if ( v8 == *(_DWORD *)(*(_DWORD *)v2 - 12) )
      if ( !memcmp(v6, *(const void **)v2, v8) )
    v9 = (const void **)(v2 + 16);
    v10 = *(_DWORD **)(v2 + 16);
    if ( v8 == *(v10 - 3) && !memcmp(v6, v10, v8) )
    v9 = (const void **)(v2 + 32);
    v11 = *(_DWORD **)(v2 + 32);
    if ( v8 == *(v11 - 3) && !memcmp(v6, v11, v8) )
    v9 = (const void **)(v2 + 48);
    v12 = *(_DWORD **)(v2 + 48);
    if ( v8 == *(v12 - 3) && !memcmp(v6, v12, v8) )
    --v7;
    v2 += 64;
    if ( v7 <= 1 )
      goto LABEL_12;
}


void __fastcall mce::_appendSB(int *a1)
{
  int *v1; // r6@1
  _BYTE *v2; // r0@4
  _BYTE *v3; // r0@5
  signed int v4; // r5@6
  void *v5; // r0@6
  unsigned int v6; // r3@8
  void *v7; // r0@9
  const void **v8; // r0@10
  unsigned int v9; // r2@10
  char *v10; // r1@10
  signed int v11; // r5@11
  void *v12; // r0@11
  unsigned int v13; // r3@13
  void *v14; // r0@14
  signed int v15; // r5@16
  void *v16; // r0@16
  unsigned int v17; // r3@18
  void *v18; // r0@19
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  unsigned int *v27; // r2@47
  signed int v28; // r1@49
  unsigned int *v29; // r2@55
  signed int v30; // r1@57
  unsigned int *v31; // r2@71
  signed int v32; // r1@73
  int v33; // [sp+0h] [bp-40h]@19
  int v34; // [sp+8h] [bp-38h]@16
  int v35; // [sp+Ch] [bp-34h]@14
  int v36; // [sp+14h] [bp-2Ch]@11
  int v37; // [sp+18h] [bp-28h]@9
  int v38; // [sp+20h] [bp-20h]@6
  _BYTE *v39; // [sp+28h] [bp-18h]@2

  v1 = a1;
  if ( *(_DWORD *)(*a1 - 12) )
  {
    sub_21E94B4((void **)&v39, "/gnm");
    if ( *(_DWORD *)(*v1 - 12) >= 2u && sub_21E76A0(v1, v39, 0, *((_DWORD *)v39 - 3)) == -1 )
    {
      v2 = sub_21E78D0(v1, 47, 0xFFFFFFFF);
      sub_21E82D8((const void **)v1, (size_t)v2, (unsigned int)v39, *((_BYTE **)v39 - 3));
    }
    v3 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v39 - 4);
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
        j_j_j_j__ZdlPv_9(v3);
    sub_21E94B4((void **)&v38, ".vertex");
    v4 = Util::endsWith(v1, (const void **)&v38);
    v5 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v38 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    if ( v4 == 1 )
      v6 = sub_21E79D4(v1, ".", 0xFFFFFFFF, 1u);
      if ( v6 == -1 )
        return;
      sub_21E9040((void **)&v37, v1, 0, v6);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v1, &v37);
      v7 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v37 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      v8 = (const void **)v1;
      v9 = 6;
      v10 = "_vv.sb";
      goto LABEL_21;
    sub_21E94B4((void **)&v36, ".fragment");
    v11 = Util::endsWith(v1, (const void **)&v36);
    v12 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v36 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( v11 == 1 )
      v13 = sub_21E79D4(v1, ".", 0xFFFFFFFF, 1u);
      if ( v13 == -1 )
      sub_21E9040((void **)&v35, v1, 0, v13);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v1, &v35);
      v14 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v35 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v9 = 5;
      v10 = "_p.sb";
    sub_21E94B4((void **)&v34, ".geometry");
    v15 = Util::endsWith(v1, (const void **)&v34);
    v16 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v34 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    if ( v15 == 1 )
      v17 = sub_21E79D4(v1, ".", 0xFFFFFFFF, 1u);
      if ( v17 != -1 )
        sub_21E9040((void **)&v33, v1, 0, v17);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v1, &v33);
        v18 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v33 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          }
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v8 = (const void **)v1;
        v9 = 3;
        v10 = ".sb";
LABEL_21:
        sub_21E7408(v8, v10, v9);
  }
}


int __fastcall mce::DepthStencilStateOGL::bindDepthStencilState(mce::DepthStencilStateOGL *this, mce::RenderContext *a2, int a3)
{
  int v3; // r8@1
  mce::RenderContext *v4; // r4@1
  mce::DepthStencilStateOGL *v5; // r5@1
  unsigned int v6; // r0@1
  unsigned int v7; // r1@1
  int v8; // r2@1
  bool v9; // zf@1
  _BYTE *v10; // r6@5
  unsigned int v11; // r2@5
  void **v12; // r0@7
  unsigned int v13; // r1@10
  bool v14; // zf@10
  unsigned int v15; // r0@14
  void **v16; // r0@16
  _BYTE *v17; // r9@20
  _BYTE *v18; // r10@20
  _BYTE *v19; // r7@28
  _BYTE *v20; // r9@28
  _BYTE *v21; // r7@35
  _BYTE *v22; // r9@35

  v3 = a3;
  v4 = a2;
  v5 = this;
  mce::DepthStencilStateBase::setStencilRef(this, a2);
  v6 = *(_DWORD *)v5;
  v7 = *((_WORD *)v4 + 4);
  v8 = (unsigned __int8)*(_DWORD *)v5;
  v9 = (unsigned __int8)v7 == v8;
  if ( (unsigned __int8)v7 == v8 )
    v9 = v3 == 0;
  if ( v9 )
  {
    v10 = (char *)v4 + 9;
    v11 = v7 >> 8;
  }
  else
    if ( (_BYTE)v6 )
      v12 = &glad_glEnable_ptr;
    else
      v12 = &glad_glDisable_ptr;
    (*(void (__fastcall **)(signed int))*v12)(2929);
    v6 = *(_DWORD *)v5;
    *((_BYTE *)v4 + 8) = *(_DWORD *)v5;
    v11 = *((_BYTE *)v4 + 9);
  v13 = (v6 & 0xFF00) >> 8;
  v14 = v11 == v13;
  if ( v11 == v13 )
    v14 = v3 == 0;
  if ( v14 )
    v15 = v6 >> 24;
    if ( v13 )
      v16 = &glad_glEnable_ptr;
      v16 = &glad_glDisable_ptr;
    (*(void (__fastcall **)(signed int))*v16)(2960);
    *v10 = *((_BYTE *)v5 + 1);
    v15 = *((_BYTE *)v5 + 3);
  if ( *((_BYTE *)v4 + 11) != v15 )
    v18 = (char *)v4 + 15;
    v17 = (char *)v5 + 7;
LABEL_26:
    glad_glStencilFuncSeparate(1028, *((_DWORD *)v5 + 7), *((_BYTE *)v5 + 20), *((_DWORD *)v5 + 15));
    glad_glStencilFuncSeparate(1029, *((_DWORD *)v5 + 11), *((_BYTE *)v5 + 20), *((_DWORD *)v5 + 15));
    *((_BYTE *)v4 + 11) = *((_BYTE *)v5 + 3);
    *v18 = *v17;
    *((_DWORD *)v4 + 5) = *((_DWORD *)v5 + 3);
    *((_BYTE *)v4 + 28) = *((_BYTE *)v5 + 20);
    goto LABEL_27;
  v17 = (char *)v5 + 7;
  v18 = (char *)v4 + 15;
  if ( *((_BYTE *)v4 + 15) != *((_BYTE *)v5 + 7)
    || *((_DWORD *)v4 + 5) != *((_DWORD *)v5 + 3)
    || *((_BYTE *)v4 + 28) != *((_BYTE *)v5 + 20)
    || v3 == 1 )
    goto LABEL_26;
LABEL_27:
  if ( *((_BYTE *)v4 + 14) != *((_BYTE *)v5 + 6) )
    v20 = (char *)v4 + 12;
    v19 = (char *)v5 + 4;
LABEL_33:
    glad_glStencilOpSeparate(1028, *((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), *((_DWORD *)v5 + 10));
    *((_BYTE *)v4 + 14) = *((_BYTE *)v5 + 6);
    *v20 = *v19;
    *((_BYTE *)v4 + 13) = *((_BYTE *)v5 + 5);
    goto LABEL_34;
  v19 = (char *)v5 + 4;
  v20 = (char *)v4 + 12;
  if ( *((_BYTE *)v4 + 12) != *((_BYTE *)v5 + 4) || *((_BYTE *)v4 + 13) != *((_BYTE *)v5 + 5) || v3 == 1 )
    goto LABEL_33;
LABEL_34:
  if ( *((_BYTE *)v4 + 18) != *((_BYTE *)v5 + 10) )
    v22 = (char *)v4 + 16;
    v21 = (char *)v5 + 8;
LABEL_40:
    glad_glStencilOpSeparate(1029, *((_DWORD *)v5 + 12), *((_DWORD *)v5 + 13), *((_DWORD *)v5 + 14));
    *((_BYTE *)v4 + 18) = *((_BYTE *)v5 + 10);
    *v22 = *v21;
    *((_BYTE *)v4 + 17) = *((_BYTE *)v5 + 9);
    goto LABEL_41;
  v21 = (char *)v5 + 8;
  v22 = (char *)v4 + 16;
  if ( *((_BYTE *)v4 + 16) != *((_BYTE *)v5 + 8) || *((_BYTE *)v4 + 17) != *((_BYTE *)v5 + 9) || v3 == 1 )
    goto LABEL_40;
LABEL_41:
  if ( *((_DWORD *)v4 + 6) != *((_DWORD *)v5 + 4) || v3 == 1 )
    glad_glStencilMask(*((_DWORD *)v5 + 16));
    *((_DWORD *)v4 + 6) = *((_DWORD *)v5 + 4);
  if ( *((_BYTE *)v4 + 10) != *((_BYTE *)v5 + 2) || v3 == 1 )
    glad_glDepthFunc(*((_DWORD *)v5 + 6));
    *((_BYTE *)v4 + 10) = *((_BYTE *)v5 + 2);
  if ( *((_BYTE *)v4 + 19) != *((_BYTE *)v5 + 11) || v3 == 1 )
    glad_glDepthMask(*((_BYTE *)v5 + 68));
    *((_BYTE *)v4 + 19) = *((_BYTE *)v5 + 11);
  *((_BYTE *)v4 + 30) = *((_BYTE *)v5 + 22);
  return j_j_j__ZNK3mce21DepthStencilStateBase21bindDepthStencilStateERNS_13RenderContextE(v5, v4);
}


int __fastcall mce::BufferOGL::bindBuffer(mce::BufferOGL *this, mce::RenderContext *a2, int a3, int a4)
{
  mce::BufferOGL *v4; // r5@1
  mce::RenderContext *v5; // r4@1
  unsigned int v6; // r2@1
  int v7; // r1@2
  int result; // r0@2
  int v9; // r3@3
  unsigned int v10; // r1@3

  v4 = this;
  v5 = a2;
  v6 = *(_BYTE *)this;
  if ( v6 >= 2 )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", *(_BYTE *)this, 2, a4);
  v7 = *((_DWORD *)this + 5);
  result = *((_DWORD *)v5 + v6 + 70);
  if ( result != v7 )
  {
    glad_glBindBuffer(*((_DWORD *)v4 + 6), v7);
    v10 = *(_BYTE *)v4;
    if ( v10 >= 2 )
      sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v10, 2, v9);
    result = *((_DWORD *)v4 + 5);
    *((_DWORD *)v5 + v10 + 70) = result;
    if ( v10 == 1 )
    {
      result = *((_DWORD *)v4 + 1);
      *((_DWORD *)v5 + 89) = result;
    }
  }
  return result;
}


void __fastcall mce::WeatherConstants::~WeatherConstants(mce::WeatherConstants *this)
{
  mce::WeatherConstants::~WeatherConstants(this);
}


int __fastcall mce::ShaderGroup::_getShaderFromBuiltInList(int a1, int *a2)
{
  const void **v2; // r6@1
  int *v3; // r5@1
  int v4; // r7@1
  char *v5; // r0@1
  char *v6; // r0@2
  int v7; // r4@4
  char *v8; // r0@5
  char *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  char *v19; // [sp+4h] [bp-34h]@5
  char *v20; // [sp+8h] [bp-30h]@5
  int v21; // [sp+Ch] [bp-2Ch]@5
  char *v22; // [sp+10h] [bp-28h]@1
  char *v23; // [sp+14h] [bp-24h]@1
  int v24; // [sp+18h] [bp-20h]@1

  v2 = (const void **)(a1 + 8);
  v3 = a2;
  mce::getPathWithPack((const void **)&v22, a2, (const void **)(a1 + 8));
  v23 = v22;
  v22 = (char *)&unk_28898CC;
  v24 = 1;
  v4 = Resource::load((int)&v23);
  v5 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v23 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  if ( v4 )
    v7 = 1;
  else
    mce::getPathWithPack((const void **)&v19, v3, v2);
    v20 = v19;
    v19 = (char *)&unk_28898CC;
    v21 = 7;
    v7 = Resource::load((int)&v20);
    v8 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = v19 - 12;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
  return v7;
}


int __fastcall mce::ConstantBufferMetaData::getUniformMetaDataByName(int a1, const void **a2)
{
  int v2; // r4@1
  int v3; // r10@1
  const void **v4; // r8@1
  int v5; // r0@1
  const void *v6; // r6@2
  int v7; // r5@2
  size_t v8; // r7@2
  _DWORD *v9; // r1@3
  _DWORD *v10; // r1@5
  _DWORD *v11; // r1@7
  _DWORD *v12; // r1@9
  int v13; // r0@12
  const void *v14; // r7@15
  size_t v15; // r6@15
  _DWORD *v16; // r1@17
  _DWORD *v17; // r1@20
  const void *v18; // r1@23

  v3 = *(_QWORD *)(a1 + 4) >> 32;
  v2 = *(_QWORD *)(a1 + 4);
  v4 = a2;
  v5 = -858993459 * ((v3 - v2) >> 2) >> 2;
  if ( v5 < 1 )
  {
LABEL_12:
    v13 = -858993459 * ((v3 - v2) >> 2);
    if ( v13 == 1 )
    {
      v14 = *v4;
      v15 = *((_DWORD *)*v4 - 3);
    }
    else
      if ( v13 == 3 )
      {
        v14 = *v4;
        v16 = *(_DWORD **)(v2 + 16);
        v15 = *((_DWORD *)*v4 - 3);
        if ( v15 == *(v16 - 3) && !memcmp(*v4, v16, *((_DWORD *)*v4 - 3)) )
          goto LABEL_31;
        v2 += 20;
      }
      else
        if ( v13 != 2 )
          goto LABEL_27;
      v17 = *(_DWORD **)(v2 + 16);
      if ( v15 == *(v17 - 3) && !memcmp(v14, v17, v15) )
        goto LABEL_31;
      v2 += 20;
    v18 = *(const void **)(v2 + 16);
    if ( v15 == *((_DWORD *)v18 - 3) )
      if ( memcmp(v14, v18, v15) )
        v2 = v3;
      goto LABEL_31;
LABEL_27:
    v2 = v3;
    goto LABEL_31;
  }
  v6 = *a2;
  v7 = v5 + 1;
  v8 = *((_DWORD *)*a2 - 3);
  while ( 1 )
    v9 = *(_DWORD **)(v2 + 16);
    if ( v8 == *(v9 - 3) && !memcmp(v6, v9, v8) )
      break;
    v10 = *(_DWORD **)(v2 + 36);
    if ( v8 == *(v10 - 3) && !memcmp(v6, v10, v8) )
    v11 = *(_DWORD **)(v2 + 56);
    if ( v8 == *(v11 - 3) && !memcmp(v6, v11, v8) )
      v2 += 40;
    v12 = *(_DWORD **)(v2 + 76);
    if ( v8 == *(v12 - 3) && !memcmp(v6, v12, v8) )
      v2 += 60;
    --v7;
    v2 += 80;
    if ( v7 <= 1 )
      goto LABEL_12;
LABEL_31:
  if ( v2 == v3 )
    v2 = 0;
  return v2;
}


char *__fastcall mce::Camera::getForwardVector(mce::Camera *this)
{
  return (char *)this + 136;
}


int __fastcall mce::FrameBufferAttachmentOGL::FrameBufferAttachmentOGL(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@3
  int v5; // r0@3

  v2 = a2;
  v3 = a1;
  mce::FrameBufferAttachmentBase::FrameBufferAttachmentBase(a1, a2);
  if ( *(_DWORD *)(v3 + 80) )
  {
    glad_glDeleteRenderbuffers(1, v3 + 80);
    *(_DWORD *)(v3 + 80) = 0;
  }
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 80) = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(v2 + 80) = 0;
  v4 = *(_DWORD *)(v3 + 84);
  *(_DWORD *)(v3 + 84) = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(v2 + 84) = v4;
  v5 = *(_DWORD *)(v3 + 88);
  *(_DWORD *)(v3 + 88) = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(v2 + 88) = v5;
  return v3;
}


signed int __fastcall mce::ShaderConstants::init(mce::ShaderConstants *this)
{
  mce::ShaderConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  int v12; // r5@12
  mce::ShaderConstantBase *v13; // r0@12
  mce::ShaderConstantBase *v14; // r5@12
  void *v15; // r0@16
  int v16; // r5@17
  mce::ShaderConstantBase *v17; // r0@17
  mce::ShaderConstantBase *v18; // r5@17
  void *v19; // r0@21
  int v20; // r5@22
  mce::ShaderConstantBase *v21; // r0@22
  mce::ShaderConstantBase *v22; // r5@22
  void *v23; // r0@26
  mce::RenderContext *v24; // r1@27
  signed int v25; // r0@27
  mce::RenderContext *v31; // r0@33
  mce::RenderContextImmediate *v32; // r0@33
  mce::RenderContext *v33; // r1@33
  signed int result; // r0@33
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  signed int v48; // [sp+0h] [bp-60h]@33
  int v49; // [sp+4h] [bp-5Ch]@33
  int v50; // [sp+8h] [bp-58h]@33
  int v51; // [sp+Ch] [bp-54h]@33
  signed int v52; // [sp+10h] [bp-50h]@33
  int v53; // [sp+14h] [bp-4Ch]@33
  int v54; // [sp+20h] [bp-40h]@22
  int v55; // [sp+28h] [bp-38h]@17
  int v56; // [sp+30h] [bp-30h]@12
  int v57; // [sp+38h] [bp-28h]@7
  int v58; // [sp+40h] [bp-20h]@2
  int v59; // [sp+48h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v59, "ShaderConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v59);
  v3 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v59 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v58, "CURRENT_COLOR");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v58);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 4 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v58 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v57, "DARKEN");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v57);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 4 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v57 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v56, "TEXTURE_DIMENSIONS");
  v13 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v12, (const void **)&v56);
  v14 = v13;
  if ( v13 )
    if ( mce::ShaderConstantBase::getType(v13) != 3 )
      v14 = 0;
    *((_DWORD *)v1 + 4) = v14;
  v15 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v56 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v55, "HUD_OPACITY");
  v17 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v16, (const void **)&v55);
  v18 = v17;
  if ( v17 )
    if ( mce::ShaderConstantBase::getType(v17) != 1 )
      v18 = 0;
    *((_DWORD *)v1 + 5) = v18;
  v19 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v55 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v54, "UV_TRANSFORM");
  v21 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v20, (const void **)&v54);
  v22 = v21;
  if ( v21 )
    if ( mce::ShaderConstantBase::getType(v21) != 11 )
      v22 = 0;
    *((_DWORD *)v1 + 6) = v22;
  v23 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v54 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)v23);
  v25 = *((_DWORD *)v1 + 4);
  __asm { VLDR            S0, =32.0 }
  _R2 = *(_DWORD *)(v25 + 20);
  __asm
    VLDR            S2, [R2]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_86;
    VLDR            S2, [R2,#4]
    VMOV.F32        S0, #1.0
    VLDR            S2, [R2,#8]
LABEL_86:
    *(_DWORD *)_R2 = 1107296256;
    *(_DWORD *)(_R2 + 4) = 1107296256;
    *(_DWORD *)(_R2 + 8) = 1065353216;
    *(_BYTE *)(v25 + 17) = 1;
    v25 = mce::ConstantBufferContainer::sync(*((mce::ConstantBufferContainer **)v1 + 1), v24);
  v31 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)v25);
  v48 = 1065353216;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 1065353216;
  v53 = 0;
  v32 = (mce::RenderContextImmediate *)mce::ShaderConstants::setUVTransform((signed int)v1, v31, (int)&v48);
  v33 = (mce::RenderContext *)mce::RenderContextImmediate::get(v32);
  result = *((_DWORD *)v1 + 5);
  __asm { VMOV.F32        S0, #1.0 }
  _R2 = *(_DWORD **)(result + 20);
    *_R2 = 1065353216;
    *(_BYTE *)(result + 17) = 1;
    result = mce::ConstantBufferContainer::sync(*((mce::ConstantBufferContainer **)v1 + 1), v33);
  return result;
}


int __fastcall mce::VertexFormat::enableField(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int result; // r0@1
  char v6; // r0@3
  char v7; // r0@4
  bool v8; // zf@7
  char v9; // r0@12

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  result = 1;
  if ( !(v4 & (1 << v3)) )
  {
    if ( v3 )
    {
      v6 = mce::VertexFormat::FieldSize[v3];
    }
    else
      v7 = byte_27E8CA8;
      __dmb();
      if ( !(v7 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E8CA8) )
      {
        byte_27E8CA4 = mce::RenderDevice::checkFeatureSupport();
        j___cxa_guard_release((unsigned int *)&byte_27E8CA8);
      }
      v8 = byte_27E8CA4 == 0;
      if ( byte_27E8CA4 )
        v8 = v2[8] == 0;
      if ( v8 )
        v6 = 16;
      else
        v6 = 8;
    v2[v3 + 1] = v2[7];
    v9 = v6 + v2[7];
    if ( v9 & 3 )
      v9 += 4 - (v9 & 3);
    v2[7] = v9;
    result = *v2 | (1 << v3);
    *v2 = result;
  }
  return result;
}


void __fastcall mce::_loadShaderInclude(int *a1)
{
  int *v1; // r5@1
  int v2; // r6@1
  char *v3; // r0@1
  char *v4; // r0@2
  int v5; // r6@4
  char *v6; // r0@4
  char *v7; // r0@5
  char *v8; // r0@7
  char *v9; // r0@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@34
  signed int v19; // r1@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  char *v22; // [sp+4h] [bp-3Ch]@7
  char *v23; // [sp+8h] [bp-38h]@7
  int v24; // [sp+Ch] [bp-34h]@7
  char *v25; // [sp+10h] [bp-30h]@4
  char *v26; // [sp+14h] [bp-2Ch]@4
  int v27; // [sp+18h] [bp-28h]@4
  char *v28; // [sp+1Ch] [bp-24h]@1
  char *v29; // [sp+20h] [bp-20h]@1
  int v30; // [sp+24h] [bp-1Ch]@1

  v1 = a1;
  sub_21E8AF4((int *)&v28, a1);
  v29 = v28;
  v28 = (char *)&unk_28898CC;
  v30 = 0;
  v2 = Resource::load((int)&v29);
  v3 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v29 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v28 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  if ( !v2 )
    sub_21E8AF4((int *)&v25, v1);
    v26 = v25;
    v25 = (char *)&unk_28898CC;
    v27 = 7;
    v5 = Resource::load((int)&v26);
    v6 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    v7 = v25 - 12;
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v25 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    if ( !v5 )
      sub_21E8AF4((int *)&v22, v1);
      v23 = v22;
      v22 = (char *)&unk_28898CC;
      v24 = 1;
      Resource::load((int)&v23);
      v8 = v23 - 12;
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v23 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      v9 = v22 - 12;
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v22 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
}


void __fastcall mce::InterFrameConstants::init(mce::InterFrameConstants *this)
{
  mce::InterFrameConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+8h] [bp-28h]@7
  int v19; // [sp+10h] [bp-20h]@2
  int v20; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v20, "InterFrameConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v20);
  v3 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v19, "TOTAL_REAL_WORLD_TIME");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v19);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 1 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v18, "CUBE_MAP_ROTATION");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v18);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 11 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall mce::ShaderConstantFloat2::~ShaderConstantFloat2(mce::ShaderConstantFloat2 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


mce::ShaderConstantBase *__fastcall mce::ShaderConstantBase::~ShaderConstantBase(mce::ShaderConstantBase *this)
{
  mce::ShaderConstantBase *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E8D30;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


void __fastcall mce::FlipbookTextureConstants::~FlipbookTextureConstants(mce::FlipbookTextureConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


mce::MaterialPtr *__fastcall mce::MaterialPtr::~MaterialPtr(mce::MaterialPtr *this)
{
  mce::MaterialPtr *v1; // r4@1
  mce::RenderMaterialGroup *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  v2 = *(mce::RenderMaterialGroup **)this;
  if ( v2 )
  {
    mce::RenderMaterialGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  *((_DWORD *)v1 + 1) = 0;
  v3 = *((_DWORD *)v1 + 2);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  return v1;
}


int __fastcall mce::BufferBase::BufferBase(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_BYTE *)result = 3;
  return result;
}


void __fastcall mce::TextureContainer::clearImageBuffers(mce::TextureContainer *this)
{
  mce::TextureContainer::clearImageBuffers(this);
}


signed int __fastcall mce::RenderMaterial::isAbstract(mce::RenderMaterial *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 15);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall mce::GlobalConstantBuffers::init(mce::GlobalConstantBuffers *this, int a2)
{
  mce::GlobalConstantBuffers::init(this, a2);
}


void __fastcall mce::_getParent(int a1, int *a2, const void **a3)
{
  int *v3; // r6@1
  const void **v4; // r4@1
  int v5; // r5@1
  unsigned int v6; // r0@1
  unsigned int v7; // r7@1
  void **v8; // r0@1
  const void **v9; // r0@1
  const void *v10; // r8@1
  int v11; // r2@2
  unsigned int v12; // r3@2
  const void **v13; // r0@3
  signed int v14; // r6@3
  char *v15; // r0@5
  void *v16; // r0@7
  void *v17; // r0@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  int v24; // [sp+0h] [bp-28h]@3
  char *v25; // [sp+4h] [bp-24h]@3
  int v26; // [sp+8h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = sub_119D2FC(a2, ":", 0xFFFFFFFF, 1u);
  v7 = v6;
  v8 = sub_119C8C4((void **)&v26, v3, 0, v6);
  v9 = sub_119C8A4((const void **)v8, v4);
  v10 = *v9;
  *v9 = &unk_28898CC;
  if ( v7 == -1 )
  {
    sub_119C854((int *)&v25, (int *)&Util::EMPTY_STRING);
    v14 = 0;
  }
  else
    v11 = v7 + 1;
    v12 = *(_DWORD *)(*v3 - 12);
    if ( v12 < v7 + 1 )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v11, v12);
    sub_119C8C4((void **)&v24, v3, v11, 0xFFFFFFFF);
    v13 = sub_119C8A4((const void **)&v24, v4);
    v14 = 1;
    v25 = (char *)*v13;
    *v13 = &unk_28898CC;
  *(_DWORD *)v5 = v10;
  sub_119C854((int *)(v5 + 4), (int *)&v25);
  v15 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v15);
  if ( v14 == 1 )
    v16 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


int __fastcall mce::QuadIndexBuffer::getInstance(mce::QuadIndexBuffer *this, mce::RenderContext *a2, unsigned int a3)
{
  mce::RenderContext *v3; // r5@1
  mce::RenderContext *v4; // r4@1
  _QWORD *v5; // r6@1
  int v6; // r0@2

  v3 = this;
  v4 = a2;
  v5 = (_QWORD *)mce::QuadIndexBuffer::instance;
  if ( !mce::QuadIndexBuffer::instance )
  {
    v5 = operator new(0x30u);
    _aeabi_memclr4(v5, 48);
    AppPlatformListener::AppPlatformListener(v5);
    *(_DWORD *)v5 = &off_26E8D40;
    mce::Buffer::Buffer((mce::Buffer *)(v5 + 1));
    *((_DWORD *)v5 + 10) = 1;
    v6 = mce::QuadIndexBuffer::instance;
    mce::QuadIndexBuffer::instance = v5;
    if ( v6 )
    {
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      v5 = (_QWORD *)mce::QuadIndexBuffer::instance;
    }
  }
  return mce::QuadIndexBuffer::getGlobalQuadBuffer((mce::QuadIndexBuffer *)v5, v3, (unsigned int)v4);
}


int __fastcall mce::BufferOGL::releaseBuffer(mce::BufferOGL *this)
{
  mce::BufferOGL *v1; // r4@1

  v1 = this;
  if ( *((_DWORD *)this + 5) )
    glad_glDeleteBuffers(1, (char *)this + 20);
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN3mce10BufferBase13releaseBufferEv(v1);
}


int __fastcall mce::Math::cos(int a1)
{
  int v8; // [sp+4h] [bp-Ch]@1

  v8 = a1;
  _R0 = j_mce::Radian::asFloat((mce::Radian *)&v8);
  __asm
  {
    VLDR            S2, [R0]
    VLDR            S0, =10430.0
    VMUL.F32        S0, S2, S0
    VLDR            S2, =16384.0
    VADD.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  return mce::Math::mSin[(unsigned __int16)_R1];
}


void __fastcall mce::WorldConstantsHolographic::init(mce::WorldConstantsHolographic *this, int a2)
{
  mce::WorldConstantsHolographic::init(this, a2);
}


int __fastcall mce::Camera::updateViewMatrixDependencies(mce::Camera *this)
{
  mce::Camera *v1; // r4@1
  int v2; // r0@1
  int v3; // r12@1
  int v4; // lr@1
  int v5; // r8@1
  int v6; // r9@1
  int v7; // r10@1
  int v8; // r11@1
  int v9; // r0@1
  int v10; // r1@1
  int v11; // r7@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r6@1
  int v15; // r12@1
  int v16; // r1@1
  int v17; // r5@1
  int v18; // r0@1
  int v19; // r0@1
  int result; // r0@1
  char v21; // [sp+4h] [bp-1A4h]@1
  int v22; // [sp+44h] [bp-164h]@1
  int v23; // [sp+48h] [bp-160h]@1
  int v24; // [sp+4Ch] [bp-15Ch]@1
  int v25; // [sp+50h] [bp-158h]@1
  int v26; // [sp+54h] [bp-154h]@1
  int v27; // [sp+58h] [bp-150h]@1
  int v28; // [sp+5Ch] [bp-14Ch]@1
  int v29; // [sp+60h] [bp-148h]@1
  int v30; // [sp+64h] [bp-144h]@1
  int v31; // [sp+68h] [bp-140h]@1
  int v32; // [sp+6Ch] [bp-13Ch]@1
  int v33; // [sp+70h] [bp-138h]@1
  int v34; // [sp+74h] [bp-134h]@1
  int v35; // [sp+78h] [bp-130h]@1
  int v36; // [sp+7Ch] [bp-12Ch]@1
  int v37; // [sp+80h] [bp-128h]@1
  int v38; // [sp+84h] [bp-124h]@1
  int v39; // [sp+88h] [bp-120h]@1
  int v40; // [sp+8Ch] [bp-11Ch]@1
  int v41; // [sp+90h] [bp-118h]@1
  int v42; // [sp+94h] [bp-114h]@1
  int v43; // [sp+98h] [bp-110h]@1
  int v44; // [sp+9Ch] [bp-10Ch]@1
  int v45; // [sp+A0h] [bp-108h]@1
  int v46; // [sp+A4h] [bp-104h]@1
  int v47; // [sp+A8h] [bp-100h]@1
  int v48; // [sp+ACh] [bp-FCh]@1
  int v49; // [sp+B0h] [bp-F8h]@1
  int v50; // [sp+B4h] [bp-F4h]@1
  int v51; // [sp+B8h] [bp-F0h]@1
  int v52; // [sp+BCh] [bp-ECh]@1
  int v53; // [sp+C0h] [bp-E8h]@1
  int v54; // [sp+C4h] [bp-E4h]@1
  int v55; // [sp+C8h] [bp-E0h]@1
  int v56; // [sp+CCh] [bp-DCh]@1
  int v57; // [sp+D0h] [bp-D8h]@1
  int v58; // [sp+D4h] [bp-D4h]@1
  int v59; // [sp+D8h] [bp-D0h]@1
  int v60; // [sp+DCh] [bp-CCh]@1
  int v61; // [sp+E0h] [bp-C8h]@1
  int v62; // [sp+E4h] [bp-C4h]@1
  int v63; // [sp+E8h] [bp-C0h]@1
  int v64; // [sp+ECh] [bp-BCh]@1
  int v65; // [sp+F0h] [bp-B8h]@1
  int v66; // [sp+F4h] [bp-B4h]@1
  int v67; // [sp+F8h] [bp-B0h]@1
  int v68; // [sp+FCh] [bp-ACh]@1
  int v69; // [sp+100h] [bp-A8h]@1
  int v70; // [sp+104h] [bp-A4h]@1
  int v71; // [sp+108h] [bp-A0h]@1
  int v72; // [sp+10Ch] [bp-9Ch]@1
  int v73; // [sp+110h] [bp-98h]@1
  int v74; // [sp+114h] [bp-94h]@1
  int v75; // [sp+118h] [bp-90h]@1
  int v76; // [sp+11Ch] [bp-8Ch]@1
  int v77; // [sp+120h] [bp-88h]@1
  int v78; // [sp+124h] [bp-84h]@1
  int v79; // [sp+128h] [bp-80h]@1
  int v80; // [sp+12Ch] [bp-7Ch]@1
  int v81; // [sp+130h] [bp-78h]@1
  int v82; // [sp+134h] [bp-74h]@1
  int v83; // [sp+138h] [bp-70h]@1
  int v84; // [sp+13Ch] [bp-6Ch]@1
  int v85; // [sp+140h] [bp-68h]@1
  char v86; // [sp+144h] [bp-64h]@1

  v1 = this;
  v2 = MatrixStack::top(this);
  glm::inverse<float>((int)&v70, v2);
  v3 = v70;
  *((_DWORD *)v1 + 12) = v70;
  v4 = v71;
  *((_DWORD *)v1 + 13) = v71;
  v5 = v72;
  *((_DWORD *)v1 + 14) = v72;
  *((_DWORD *)v1 + 15) = v73;
  v6 = v74;
  *((_DWORD *)v1 + 16) = v74;
  v7 = v75;
  *((_DWORD *)v1 + 17) = v75;
  v8 = v76;
  *((_DWORD *)v1 + 18) = v76;
  *((_DWORD *)v1 + 19) = v77;
  v9 = v78;
  *((_DWORD *)v1 + 20) = v78;
  v10 = v79;
  *((_DWORD *)v1 + 21) = v79;
  v11 = v80;
  *((_DWORD *)v1 + 22) = v80;
  *((_DWORD *)v1 + 23) = v81;
  v12 = v82;
  *((_DWORD *)v1 + 24) = v82;
  v13 = v83;
  *((_DWORD *)v1 + 25) = v83;
  v14 = v84;
  *((_DWORD *)v1 + 26) = v84;
  *((_DWORD *)v1 + 27) = v85;
  *((_DWORD *)v1 + 28) = v3;
  v15 = (int)v1 + 120;
  *((_DWORD *)v1 + 29) = v4;
  *(_DWORD *)v15 = v5;
  *(_DWORD *)(v15 + 4) = v6;
  *(_DWORD *)(v15 + 8) = v7;
  *(_DWORD *)(v15 + 12) = v8;
  *((_DWORD *)v1 + 34) = v9 ^ 0x80000000;
  *((_DWORD *)v1 + 35) = v10 ^ 0x80000000;
  v16 = (int)v1 + 144;
  *(_DWORD *)v16 = v11 ^ 0x80000000;
  *(_DWORD *)(v16 + 4) = v12;
  *(_DWORD *)(v16 + 8) = v13;
  *(_DWORD *)(v16 + 12) = v14;
  v17 = MatrixStack::top((mce::Camera *)((char *)v1 + 32));
  v18 = MatrixStack::top(v1);
  glm::detail::operator*<float>((int)&v86, v17, v18);
  v19 = MatrixStack::top((mce::Camera *)((char *)v1 + 16));
  glm::detail::operator*<float>((int)&v21, (int)&v86, v19);
  Frustum::getFrustum((int)&v22, (int)&v21);
  *((_DWORD *)v1 + 44) = v22;
  *((_DWORD *)v1 + 45) = v23;
  *((_DWORD *)v1 + 46) = v24;
  *((_DWORD *)v1 + 47) = v25;
  *((_DWORD *)v1 + 48) = v26;
  *((_DWORD *)v1 + 49) = v27;
  *((_DWORD *)v1 + 50) = v28;
  *((_DWORD *)v1 + 51) = v29;
  *((_DWORD *)v1 + 52) = v30;
  *((_DWORD *)v1 + 53) = v31;
  *((_DWORD *)v1 + 54) = v32;
  *((_DWORD *)v1 + 55) = v33;
  *((_DWORD *)v1 + 56) = v34;
  *((_DWORD *)v1 + 57) = v35;
  *((_DWORD *)v1 + 58) = v36;
  *((_DWORD *)v1 + 59) = v37;
  *((_DWORD *)v1 + 60) = v38;
  *((_DWORD *)v1 + 61) = v39;
  *((_DWORD *)v1 + 62) = v40;
  *((_DWORD *)v1 + 63) = v41;
  *((_DWORD *)v1 + 64) = v42;
  *((_DWORD *)v1 + 65) = v43;
  *((_DWORD *)v1 + 66) = v44;
  *((_DWORD *)v1 + 67) = v45;
  *((_DWORD *)v1 + 68) = v46;
  *((_DWORD *)v1 + 69) = v47;
  *((_DWORD *)v1 + 70) = v48;
  *((_DWORD *)v1 + 71) = v49;
  *((_DWORD *)v1 + 72) = v50;
  *((_DWORD *)v1 + 73) = v51;
  *((_DWORD *)v1 + 74) = v52;
  *((_DWORD *)v1 + 75) = v53;
  *((_DWORD *)v1 + 76) = v54;
  *((_DWORD *)v1 + 77) = v55;
  *((_DWORD *)v1 + 78) = v56;
  *((_DWORD *)v1 + 79) = v57;
  *((_DWORD *)v1 + 80) = v58;
  *((_DWORD *)v1 + 81) = v59;
  *((_DWORD *)v1 + 82) = v60;
  *((_DWORD *)v1 + 83) = v61;
  *((_DWORD *)v1 + 84) = v62;
  *((_DWORD *)v1 + 85) = v63;
  *((_DWORD *)v1 + 86) = v64;
  *((_DWORD *)v1 + 87) = v65;
  *((_DWORD *)v1 + 88) = v66;
  *((_DWORD *)v1 + 89) = v67;
  *((_DWORD *)v1 + 90) = v68;
  result = v69;
  *((_DWORD *)v1 + 91) = v69;
  return result;
}


int __fastcall mce::RenderMaterialGroup::invalidateMaterialTextures(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 16); i; i = *(_DWORD *)i )
    result = mce::RenderMaterial::invalidateTextures(*(mce::RenderMaterial **)(i + 8));
  return result;
}


void __fastcall mce::InterFrameConstants::~InterFrameConstants(mce::InterFrameConstants *this)
{
  mce::InterFrameConstants::~InterFrameConstants(this);
}


_DWORD *__fastcall mce::RenderMaterialGroup::_addRef(mce::RenderMaterialGroup *this, mce::MaterialPtr *a2)
{
  mce::MaterialPtr *v2; // r4@1
  char *v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a2;
  v3 = (char *)this + 60;
  v4 = *((_DWORD *)this + 16);
  v5 = (unsigned int)a2 % *((_DWORD *)this + 16);
  result = *(_DWORD **)(*((_DWORD *)this + 15) + 4 * v5);
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( (mce::MaterialPtr *)v7[1] != a2 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v8 + 4) % v4 == v5 )
        continue;
    }
  }
  v9 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v9 = result == 0;
  if ( v9 )
LABEL_11:
    v10 = operator new(8u);
    *v10 = 0;
    v10[1] = v2;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIPN3mce11MaterialPtrES2_SaIS2_ENSt8__detail9_IdentityESt8equal_toIS2_ESt4hashIS2_ENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS4_10_Hash_nodeIS2_Lb0EEE(
                         (int)v3,
                         v5,
                         (unsigned int)v2,
                         (int)v10);
  return result;
}


mce::LRUCache *__fastcall mce::TextureGroup::unloadAll(mce::TextureGroup *this, int a2)
{
  mce::TextureGroup *v2; // r4@1
  char *v3; // r7@1
  int v4; // r6@1 OVERLAPPED
  TexturePair **v5; // r5@1 OVERLAPPED
  bool v6; // zf@4
  TexturePair *v7; // t1@7
  int *v8; // r5@8 OVERLAPPED
  int *v9; // r6@8 OVERLAPPED
  int v10; // t1@9
  ResourceLocationPair *v11; // r5@10 OVERLAPPED
  ResourceLocationPair *v12; // r6@10 OVERLAPPED
  ResourceLocationPair *v13; // r0@11
  mce::LRUCache *result; // r0@13

  v2 = this;
  v3 = (char *)this + 4;
  v4 = *((_DWORD *)this + 3);
  v5 = (TexturePair **)a2;
  while ( (char *)v4 != v3 )
  {
    TexturePair::unload((TexturePair *)(v4 + 24));
    v4 = sub_21D47E8(v4);
  }
  v6 = v5 == 0;
  if ( v5 )
    *(_QWORD *)&v5 = *((_QWORD *)v2 + 10);
    v6 = v5 == (TexturePair **)v4;
  if ( !v6 )
    do
    {
      v7 = *v5;
      ++v5;
      TexturePair::unload(v7);
    }
    while ( (TexturePair **)v4 != v5 );
  *(_QWORD *)&v8 = *(_QWORD *)((char *)v2 + 68);
  while ( v9 != v8 )
    v10 = *v8;
    ++v8;
    (*(void (**)(void))(*(_DWORD *)v10 + 20))();
  *(_QWORD *)&v11 = *((_QWORD *)v2 + 3);
  if ( v12 != v11 )
    v13 = v11;
      v13 = (ResourceLocationPair *)((char *)ResourceLocationPair::~ResourceLocationPair(v13) + 64);
    while ( v12 != v13 );
  *((_DWORD *)v2 + 7) = v11;
  result = (mce::LRUCache *)*((_DWORD *)v2 + 16);
  if ( result )
    result = (mce::LRUCache *)j_j_j__ZN3mce8LRUCache5clearEv(result);
  return result;
}


int __fastcall mce::TextureGroup::loadTexture(mce::TextureGroup *this, const ResourceLocation *a2, bool a3)
{
  mce::TextureGroup *v3; // r4@1
  const ResourceLocation *v4; // r5@1
  int v5; // r7@1
  int v6; // r0@2
  int v7; // r4@4
  void *v8; // r0@4
  void **v9; // r5@5 OVERLAPPED
  void **v10; // r6@5 OVERLAPPED
  void *v11; // r0@12
  void **v12; // r5@13 OVERLAPPED
  void **v13; // r6@13 OVERLAPPED
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  int v19; // [sp+0h] [bp-C8h]@1
  __int64 v20; // [sp+40h] [bp-88h]@5
  int v21; // [sp+4Ch] [bp-7Ch]@4
  void **v22; // [sp+78h] [bp-50h]@1
  void **v23; // [sp+7Ch] [bp-4Ch]@13
  int v24; // [sp+84h] [bp-44h]@12

  v3 = this;
  v4 = a2;
  Resource::loadRawTexture((Resource *)&v22, a2);
  v5 = *(_DWORD *)(*(_DWORD *)mce::TextureContainer::getRawImage((mce::TextureContainer *)&v22) - 12);
  TexturePair::TexturePair((mce::Texture *)&v19, (int)&v22);
  if ( v5 )
    v6 = mce::TextureGroup::uploadTexture((int)v3, v4, (int)&v19, 1);
  else
    v6 = mce::TextureGroup::getMissingTexture(v3);
  v7 = v6;
  v8 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v21 - 4);
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
  *(_QWORD *)&v9 = v20;
  if ( (_DWORD)v20 != HIDWORD(v20) )
    do
      if ( *v9 )
        operator delete(*v9);
      v9 += 10;
    while ( v10 != v9 );
    v9 = (void **)v20;
  if ( v9 )
    operator delete(v9);
  mce::Texture::~Texture((mce::Texture *)&v19);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  *(_QWORD *)&v12 = *(_QWORD *)&v22;
  if ( v22 != v23 )
      if ( *v12 )
        operator delete(*v12);
      v12 += 10;
    while ( v13 != v12 );
    v12 = v22;
  if ( v12 )
    operator delete(v12);
  return v7;
}


int __fastcall mce::TextureOGL::setWrappingMode(int result, int a2)
{
  int v2; // r4@1

  v2 = result;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      glad_glTexParameteri(*(_DWORD *)(result + 48), 10242, 10497);
      result = glad_glTexParameteri(*(_DWORD *)(v2 + 48), 10243, 10497);
    }
  }
  else
    glad_glTexParameteri(*(_DWORD *)(result + 48), 10242, 33071);
    result = glad_glTexParameteri(*(_DWORD *)(v2 + 48), 10243, 33071);
  return result;
}


int __fastcall mce::BlendStateBase::createBlendState(int result, mce::RenderContext *a2, const mce::BlendStateDescription *a3)
{
  __int16 v3; // r1@1
  int v4; // r3@1

  v3 = *((_WORD *)a3 + 2);
  v4 = *(_DWORD *)a3;
  *(_BYTE *)(result + 6) = *((_BYTE *)a3 + 6);
  *(_WORD *)(result + 4) = v3;
  *(_DWORD *)result = v4;
  return result;
}


void __fastcall mce::ShaderConstantFloat4::~ShaderConstantFloat4(mce::ShaderConstantFloat4 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int *__fastcall mce::ShaderProgramOGL::ShaderProgramOGL(int *a1, unsigned int a2, int *a3, int *a4, int *a5)
{
  int *v5; // r9@1
  unsigned int v6; // r4@1
  int *result; // r0@1
  int v8; // r1@1
  int *v9; // r10@5
  unsigned int v10; // r7@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int v23; // r4@55
  unsigned int v24; // r6@55
  unsigned int v25; // r3@55
  unsigned int v26; // r0@56
  unsigned int v27; // r3@56
  _BYTE *v28; // r2@57
  unsigned int v29; // r0@57
  int v30; // r7@59
  int *v31; // r6@59
  void *v32; // r4@60
  int v33; // r0@60
  int *v34; // r11@60
  size_t v35; // r5@60
  int *v36; // r9@61
  _DWORD *v37; // r0@62
  size_t v38; // r10@62
  size_t v39; // r2@62
  int v40; // r0@64
  _DWORD *v41; // r1@71
  unsigned int v42; // r4@71
  unsigned int v43; // r5@71
  size_t v44; // r2@71
  int v45; // r0@73
  int v46; // r6@78
  void *v47; // r4@79
  size_t v48; // r5@79
  size_t v49; // r2@80
  _DWORD *v50; // r1@80
  size_t v51; // r7@80
  int v52; // r0@82
  int *v53; // r1@82
  bool v54; // zf@87
  bool v55; // nf@87
  unsigned __int8 v56; // vf@87
  int v57; // r0@87
  _DWORD *v58; // r0@91
  size_t v59; // r7@91
  size_t v60; // r2@91
  int v61; // r0@93
  _DWORD *v62; // r1@98
  unsigned int v63; // r4@98
  unsigned int v64; // r5@98
  size_t v65; // r2@98
  unsigned int v66; // r0@100
  int v67; // r4@102
  void *v68; // r7@104
  _BYTE *v69; // r0@105
  void **v70; // r0@105
  const void **v71; // r0@105
  _BYTE *v72; // r2@105
  unsigned int v73; // r3@105
  __int64 v74; // kr00_8@106
  unsigned int v75; // r1@106
  const void **v76; // r0@108
  char *v77; // r0@110
  void *v78; // r0@111
  void *v79; // r0@112
  void *v80; // r0@113
  char *v81; // r0@114
  char *v82; // r0@116
  int *v83; // [sp+8h] [bp-78h]@5
  int *v84; // [sp+Ch] [bp-74h]@5
  const void **v85; // [sp+18h] [bp-68h]@1
  size_t v86; // [sp+20h] [bp-60h]@59
  unsigned int v87; // [sp+24h] [bp-5Ch]@6
  int v88; // [sp+28h] [bp-58h]@15
  int v89; // [sp+2Ch] [bp-54h]@23
  unsigned int v90; // [sp+30h] [bp-50h]@19
  char *v91; // [sp+34h] [bp-4Ch]@11
  _BYTE **v92; // [sp+38h] [bp-48h]@27
  void *s2; // [sp+3Ch] [bp-44h]@7
  char v94; // [sp+40h] [bp-40h]@118
  int v95; // [sp+44h] [bp-3Ch]@5
  int v96; // [sp+48h] [bp-38h]@5
  int *v97; // [sp+4Ch] [bp-34h]@5
  int *v98; // [sp+50h] [bp-30h]@5
  int v99; // [sp+54h] [bp-2Ch]@5

  v5 = a3;
  v6 = a2;
  v85 = (const void **)a3;
  result = mce::ShaderProgramBase::ShaderProgramBase(a1, a4, a5, a2);
  result[3] = 0;
  result[4] = (int)&unk_28898CC;
  result[6] = 0;
  v8 = (int)(result + 6);
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 8) = v8;
  *(_DWORD *)(v8 + 12) = v8;
  if ( *(_DWORD *)(*v5 - 12) )
  {
    if ( v6 >= 2 )
    {
      *((_BYTE *)result + 9) = 0;
      return result;
    }
    v83 = result + 4;
    v84 = result;
    v99 = 0;
    v95 = 0;
    v96 = 0;
    v9 = &v95;
    v97 = &v95;
    v98 = &v95;
    v10 = sub_21E76A0(v5, "#include", 0, 8u);
    if ( v10 != -1 )
      v87 = 0;
      while ( 1 )
      {
        v23 = sub_21E76A0(v5, "\"", v10 + 7, 1u) + 1;
        v24 = sub_21E76A0(v5, "\"", v23, 1u);
        v25 = *(_DWORD *)(*v5 - 12);
        if ( v25 < v23 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v23, v25);
        sub_21E9040(&s2, v5, v23, v24 - v23);
        v26 = sub_21E76A0(v5, "\n", v24, 1u);
        v27 = *(_DWORD *)(*v5 - 12);
        if ( v27 < v10 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v10, v27);
        v28 = (_BYTE *)(v27 - v10);
        v29 = v26 - v10;
        if ( v27 - v10 > v29 )
          v28 = (_BYTE *)v29;
        v86 = v10;
        sub_21E7EE0((const void **)v5, v10, v28, 0);
        v30 = v96;
        v31 = v9;
        if ( v96 )
        {
          v32 = s2;
          v33 = v96;
          v34 = v9;
          v35 = *((_DWORD *)s2 - 3);
          do
          {
            v36 = v9;
            v31 = (int *)v33;
            while ( 1 )
            {
              v37 = (_DWORD *)v31[4];
              v38 = *(v37 - 3);
              v39 = *(v37 - 3);
              if ( v38 > v35 )
                v39 = v35;
              v40 = memcmp(v37, v32, v39);
              if ( !v40 )
                v40 = v38 - v35;
              if ( v40 >= 0 )
                break;
              v31 = (int *)v31[3];
              if ( !v31 )
              {
                v31 = v34;
                v9 = v36;
                goto LABEL_70;
              }
            }
            v33 = v31[2];
            v34 = v31;
            v9 = v36;
          }
          while ( v33 );
        }
LABEL_70:
        v5 = (int *)v85;
        if ( v31 != v9 )
          v41 = (_DWORD *)v31[4];
          v42 = *((_DWORD *)s2 - 3);
          v43 = *(v41 - 3);
          v44 = *((_DWORD *)s2 - 3);
          if ( v42 > v43 )
            v44 = *(v41 - 3);
          v45 = memcmp(s2, v41, v44);
          if ( !v45 )
            v45 = v42 - v43;
          if ( v45 < 0 )
            v31 = v9;
          if ( v31 != v9 )
            goto LABEL_116;
        v46 = (int)v9;
        if ( v30 )
          v47 = s2;
          v48 = *((_DWORD *)s2 - 3);
            v46 = v30;
            v49 = v48;
            v50 = *(_DWORD **)(v30 + 16);
            v51 = *(v50 - 3);
            if ( v48 > v51 )
              v49 = *(v50 - 3);
            v52 = memcmp(v47, v50, v49);
            v53 = (int *)(v46 + 12);
            if ( !v52 )
              v52 = v48 - v51;
            if ( v52 < 0 )
              v53 = (int *)(v46 + 8);
            v30 = *v53;
          while ( *v53 );
          v56 = __OFSUB__(v52, -1);
          v54 = v52 == -1;
          v55 = v52 + 1 < 0;
          v57 = v46;
          if ( !((unsigned __int8)(v55 ^ v56) | v54) )
            goto LABEL_91;
        if ( (int *)v46 != v97 )
          break;
LABEL_96:
        if ( v46 )
          if ( v9 == (int *)v46 )
            v67 = 1;
          else
            v62 = *(_DWORD **)(v46 + 16);
            v63 = *((_DWORD *)s2 - 3);
            v64 = *(v62 - 3);
            v65 = *((_DWORD *)s2 - 3);
            if ( v63 > v64 )
              v65 = *(v62 - 3);
            v66 = memcmp(s2, v62, v65);
            if ( !v66 )
              v66 = v63 - v64;
            v67 = v66 >> 31;
          v68 = operator new(0x14u);
          sub_21E8AF4((int *)v68 + 4, (int *)&s2);
          sub_21D4928(v67, (int)v68, v46, (int)v9);
          ++v99;
LABEL_105:
        v92 = (_BYTE **)&unk_28898CC;
        v69 = sub_21E78D0((int *)&s2, 47, 0xFFFFFFFF);
        v70 = sub_21E9040((void **)&v89, (int *)&s2, 0, (unsigned int)v69);
        v71 = sub_21E7408((const void **)v70, "/glsl", 5u);
        v90 = (unsigned int)*v71;
        *v71 = &unk_28898CC;
        v72 = sub_21E78D0((int *)&s2, 47, 0xFFFFFFFF);
        v73 = *((_DWORD *)s2 - 3);
        if ( v73 < (unsigned int)v72 )
          sub_21E5B04(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            (int)"basic_string::substr",
            (int)v72,
            v73);
        sub_21E9040((void **)&v88, (int *)&s2, (unsigned int)v72, 0xFFFFFFFF);
        v74 = *(_QWORD *)(v90 - 12);
        v75 = *(_DWORD *)(v88 - 12) + v74;
        if ( v75 > HIDWORD(v74) && v75 <= *(_DWORD *)(v88 - 8) )
          v76 = sub_21E82D8((const void **)&v88, 0, v90, (_BYTE *)v74);
        else
          v76 = sub_21E72F0((const void **)&v90, (const void **)&v88);
        v91 = (char *)*v76;
        *v76 = &unk_28898CC;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&s2,
          (int *)&v91);
        v77 = v91 - 12;
        if ( (int *)(v91 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v91 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v77);
        v78 = (void *)(v88 - 12);
        if ( (int *)(v88 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v88 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v78);
        v79 = (void *)(v90 - 12);
        if ( (int *)(v90 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v90 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v79);
        v80 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v89 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v80);
        mce::_loadShaderInclude((int *)&s2);
        sub_21E7408((const void **)&v92, "\n", 1u);
        sub_21E82D8(v85, v86, (unsigned int)v92, *(v92 - 3));
        v81 = (char *)(v92 - 3);
        if ( (int *)(v92 - 3) != &dword_28898C0 )
          v21 = (unsigned int *)(v92 - 1);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v81);
        v87 = v86;
LABEL_116:
        v82 = (char *)s2 - 12;
        if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)((char *)s2 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v82);
        v10 = sub_21E76A0((int *)v85, "#include", v87, 8u);
        if ( v10 == -1 )
          goto LABEL_118;
      }
      v57 = sub_21D4858(v46);
      v47 = s2;
      v48 = *((_DWORD *)s2 - 3);
LABEL_91:
      v58 = *(_DWORD **)(v57 + 16);
      v59 = *(v58 - 3);
      v60 = *(v58 - 3);
      if ( v59 > v48 )
        v60 = v48;
      v61 = memcmp(v58, v47, v60);
      if ( !v61 )
        v61 = v59 - v48;
      if ( v61 > -1 )
        goto LABEL_105;
      goto LABEL_96;
LABEL_118:
    EntityInteraction::setInteractText(v83, v5);
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
      (int)&v94,
      v96);
    result = v84;
  }
  else
    *((_BYTE *)result + 9) = 0;
  return result;
}


mce::FrameBufferObjectBase *__fastcall mce::FrameBufferObject::~FrameBufferObject(mce::FrameBufferObject *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1
  mce::RenderContextImmediate *v2; // r0@1

  v1 = this;
  v2 = *(mce::RenderContextImmediate **)(mce::RenderContextImmediate::get(this) + 232);
  if ( v2 == v1 )
    *(_DWORD *)(mce::RenderContextImmediate::get(v2) + 232) = 0;
  return j_j_j__ZN3mce20FrameBufferObjectOGLD2Ev(v1);
}


int __fastcall mce::ShaderConstantBase::getConstantSize(mce::ShaderConstantBase *this)
{
  mce::ShaderConstantBase *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = this;
  v2 = mce::ShaderPrimitiveTypeHelper::sizeInBytesFromShaderPrimitiveType(*((_BYTE *)this + 16));
  v3 = *((_DWORD *)v1 + 2);
  if ( !v3 )
    v3 = 1;
  return v2 * v3;
}


void __fastcall mce::WorldConstantsHolographic::~WorldConstantsHolographic(mce::WorldConstantsHolographic *this)
{
  mce::WorldConstantsHolographic::~WorldConstantsHolographic(this);
}


void __fastcall mce::RenderStage::~RenderStage(mce::RenderStage *this)
{
  mce::RenderStage::~RenderStage(this);
}


void __fastcall mce::RenderMaterialGroup::~RenderMaterialGroup(mce::RenderMaterialGroup *this)
{
  mce::RenderMaterialGroup::~RenderMaterialGroup(this);
}


int __fastcall mce::ShaderConstantInt3::syncUniform(mce::ShaderConstantInt3 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform3iv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


int __fastcall mce::WorldConstantsHolographic::_setConstantsForHolographicDrawing(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // ST20_4@1
  int v5; // ST14_4@1
  int v6; // r9@1
  __int64 v7; // r10@1
  __int64 v8; // ST18_8@1
  __int64 v9; // ST0C_8@1
  int v10; // ST08_4@1
  int v11; // ST04_4@1
  __int64 v12; // r6@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r12@1
  int v16; // lr@1
  int v17; // r0@1
  int v18; // r8@1
  int v19; // ST14_4@1
  int v20; // r9@1
  __int64 v21; // r10@1
  __int64 v22; // ST18_8@1 OVERLAPPED
  __int64 v23; // ST0C_8@1
  int v24; // ST08_4@1
  int v25; // ST04_4@1
  __int64 v26; // r6@1
  int v27; // r2@1
  int v28; // r3@1
  int v29; // r12@1
  int v30; // lr@1
  int v31; // r0@1
  int v32; // r8@1
  int v33; // r0@1
  int v34; // r1@1
  __int64 v35; // kr00_8@1
  int v36; // r5@1
  __int64 v37; // kr08_8@1
  int v38; // r1@1
  int v39; // r2@1
  int v40; // r3@1
  int v41; // r12@1
  int v42; // r0@1
  int v43; // lr@1
  int v44; // r1@1
  __int64 v45; // kr10_8@1
  __int64 v46; // ST20_8@1
  __int64 v47; // ST18_8@1 OVERLAPPED
  int v48; // ST14_4@1
  int v49; // r5@1
  __int64 v50; // kr18_8@1
  int v51; // r1@1
  int v52; // r2@1
  int v53; // r3@1
  int v54; // r12@1
  int v55; // r0@1
  int v56; // lr@1
  int v57; // r1@1
  int result; // r0@1
  int v59; // r1@1
  __int64 v60; // [sp+28h] [bp-128h]@1
  __int64 v61; // [sp+30h] [bp-120h]@1
  int v62; // [sp+38h] [bp-118h]@1
  int v63; // [sp+3Ch] [bp-114h]@1
  int v64; // [sp+40h] [bp-110h]@1
  int v65; // [sp+44h] [bp-10Ch]@1
  int v66; // [sp+48h] [bp-108h]@1
  __int64 v67; // [sp+4Ch] [bp-104h]@1
  int v68; // [sp+54h] [bp-FCh]@1
  __int64 v69; // [sp+58h] [bp-F8h]@1
  __int64 v70; // [sp+60h] [bp-F0h]@1
  __int64 v71; // [sp+68h] [bp-E8h]@1
  __int64 v72; // [sp+70h] [bp-E0h]@1
  int v73; // [sp+78h] [bp-D8h]@1
  int v74; // [sp+7Ch] [bp-D4h]@1
  int v75; // [sp+80h] [bp-D0h]@1
  int v76; // [sp+84h] [bp-CCh]@1
  int v77; // [sp+88h] [bp-C8h]@1
  __int64 v78; // [sp+8Ch] [bp-C4h]@1
  int v79; // [sp+94h] [bp-BCh]@1
  __int64 v80; // [sp+98h] [bp-B8h]@1
  __int64 v81; // [sp+A0h] [bp-B0h]@1
  __int64 v82; // [sp+A8h] [bp-A8h]@1
  __int64 v83; // [sp+B0h] [bp-A0h]@1
  int v84; // [sp+B8h] [bp-98h]@1
  int v85; // [sp+BCh] [bp-94h]@1
  int v86; // [sp+C0h] [bp-90h]@1
  int v87; // [sp+C4h] [bp-8Ch]@1
  int v88; // [sp+C8h] [bp-88h]@1
  __int64 v89; // [sp+CCh] [bp-84h]@1
  int v90; // [sp+D4h] [bp-7Ch]@1
  _DWORD v91[5]; // [sp+D8h] [bp-78h]@1
  __int64 v92; // [sp+ECh] [bp-64h]@1
  __int64 v93; // [sp+F4h] [bp-5Ch]@1
  int v94; // [sp+FCh] [bp-54h]@1
  int v95; // [sp+100h] [bp-50h]@1
  int v96; // [sp+104h] [bp-4Ch]@1
  int v97; // [sp+108h] [bp-48h]@1
  int v98; // [sp+10Ch] [bp-44h]@1
  __int64 v99; // [sp+110h] [bp-40h]@1
  int v100; // [sp+118h] [bp-38h]@1
  __int64 v101; // [sp+11Ch] [bp-34h]@1
  __int64 v102; // [sp+124h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = a1 + 28;
  glm::detail::operator*<float>((int)&v92, a1 + 156, a1 + 28);
  v82 = v92;
  v83 = v93;
  v84 = v94;
  v85 = v95;
  v86 = v96;
  v87 = v97;
  v88 = v98;
  v89 = v99;
  v90 = v100;
  *(_QWORD *)v91 = v101;
  *(_QWORD *)&v91[2] = v102;
  glm::detail::operator*<float>((int)&v92, v2 + 220, v2 + 92);
  v71 = v92;
  v72 = v93;
  v73 = v94;
  v74 = v95;
  v75 = v96;
  v76 = v97;
  v77 = v98;
  v78 = v99;
  v79 = v100;
  v80 = v101;
  v81 = v102;
  glm::detail::operator*<float>((int)&v92, v2 + 412, v3);
  _aeabi_memclr8(&v60, 56);
  v60 = v92;
  v61 = v93;
  v62 = v94;
  v63 = v95;
  v64 = v96;
  v65 = v97;
  v66 = v98;
  v67 = v99;
  v68 = v100;
  v69 = v101;
  v70 = v102;
  v5 = *(_DWORD *)(v2 + 8);
  glm::detail::operator*<float>((int)&v92, (int)&v82, (int)&v60);
  v6 = HIDWORD(v92);
  v7 = v93;
  v8 = v102;
  v9 = v101;
  v10 = v100;
  v11 = HIDWORD(v99);
  v12 = *(_QWORD *)&v98;
  v13 = v94;
  v14 = v95;
  v15 = v96;
  v16 = v97;
  v17 = *(_DWORD *)(v5 + 20);
  *(_DWORD *)v17 = v92;
  *(_DWORD *)(v17 + 4) = v6;
  *(_QWORD *)(v17 + 8) = v7;
  v18 = v17 + 16;
  *(_DWORD *)v18 = v13;
  *(_DWORD *)(v18 + 4) = v14;
  *(_DWORD *)(v18 + 8) = v15;
  *(_DWORD *)(v18 + 12) = v16;
  *(_QWORD *)(v17 + 32) = v12;
  *(_DWORD *)(v17 + 40) = v11;
  *(_DWORD *)(v17 + 44) = v10;
  *(_QWORD *)(v17 + 48) = v9;
  *(_QWORD *)(v17 + 56) = v8;
  *(_BYTE *)(v5 + 17) = 1;
  v19 = *(_DWORD *)(v2 + 8);
  glm::detail::operator*<float>((int)&v92, (int)&v71, (int)&v60);
  v20 = HIDWORD(v92);
  v21 = v93;
  v22 = v102;
  v23 = v101;
  v24 = v100;
  v25 = HIDWORD(v99);
  v26 = *(_QWORD *)&v98;
  v27 = v94;
  v28 = v95;
  v29 = v96;
  v30 = v97;
  v31 = *(_DWORD *)(v19 + 20);
  *(_DWORD *)(v31 + 64) = v92;
  v32 = v31 + 80;
  *(_DWORD *)(v31 + 68) = v20;
  *(_QWORD *)(v31 + 72) = v21;
  *(_DWORD *)v32 = v27;
  *(_DWORD *)(v32 + 4) = v28;
  *(_DWORD *)(v32 + 8) = v29;
  *(_DWORD *)(v32 + 12) = v30;
  *(_QWORD *)(v31 + 96) = v26;
  *(_DWORD *)(v31 + 104) = v25;
  *(_DWORD *)(v31 + 108) = v24;
  *(_QWORD *)(v31 + 112) = v23;
  *(_QWORD *)(v31 + 120) = v22;
  *(_BYTE *)(v19 + 17) = 1;
  v33 = *(_DWORD *)(v2 + 12);
  v34 = *(_DWORD *)(v33 + 20);
  *(_DWORD *)v34 = *(_DWORD *)v3;
  *(_DWORD *)(v34 + 4) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v34 + 8) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v34 + 12) = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v34 + 16) = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v34 + 20) = *(_DWORD *)(v3 + 20);
  *(_DWORD *)(v34 + 24) = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v34 + 28) = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v34 + 32) = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v34 + 36) = *(_DWORD *)(v3 + 36);
  *(_DWORD *)(v34 + 40) = *(_DWORD *)(v3 + 40);
  *(_DWORD *)(v34 + 44) = *(_DWORD *)(v3 + 44);
  *(_DWORD *)(v34 + 48) = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v34 + 52) = *(_DWORD *)(v3 + 52);
  *(_DWORD *)(v34 + 56) = *(_DWORD *)(v3 + 56);
  *(_DWORD *)(v34 + 60) = *(_DWORD *)(v3 + 60);
  *(_BYTE *)(v33 + 17) = 1;
  HIDWORD(v21) = *(_DWORD *)(v2 + 16);
  glm::detail::operator*<float>((int)&v92, v4, (int)&v60);
  v35 = v93;
  *(__int64 *)((char *)&v22 + 4) = v102;
  *(__int64 *)((char *)&v22 - 4) = v101;
  HIDWORD(v23) = v100;
  v36 = v98;
  v37 = v99;
  v38 = v94;
  v39 = v95;
  v40 = v96;
  v41 = v97;
  v42 = *(_DWORD *)(HIDWORD(v21) + 20);
  *(_QWORD *)v42 = v92;
  v43 = v42 + 16;
  *(_QWORD *)(v42 + 8) = v35;
  *(_DWORD *)v43 = v38;
  *(_DWORD *)(v43 + 4) = v39;
  *(_DWORD *)(v43 + 8) = v40;
  *(_DWORD *)(v43 + 12) = v41;
  v44 = v42 + 32;
  *(_DWORD *)v44 = v36;
  *(_QWORD *)(v44 + 4) = v37;
  *(_DWORD *)(v42 + 44) = HIDWORD(v23);
  *(_QWORD *)(v42 + 48) = *(__int64 *)((char *)&v22 - 4);
  *(_QWORD *)(v42 + 56) = *(__int64 *)((char *)&v22 + 4);
  *(_BYTE *)(HIDWORD(v21) + 17) = 1;
  glm::detail::operator*<float>((int)&v92, v2 + 92, (int)&v60);
  v45 = v93;
  v46 = v102;
  v47 = v101;
  v48 = v100;
  v49 = v98;
  v50 = v99;
  v51 = v94;
  v52 = v95;
  v53 = v96;
  v54 = v97;
  v55 = *(_DWORD *)(HIDWORD(v21) + 20);
  *(_QWORD *)(v55 + 64) = v92;
  v56 = v55 + 80;
  *(_QWORD *)(v55 + 72) = v45;
  *(_DWORD *)v56 = v51;
  *(_DWORD *)(v56 + 4) = v52;
  *(_DWORD *)(v56 + 8) = v53;
  *(_DWORD *)(v56 + 12) = v54;
  v57 = v55 + 96;
  *(_DWORD *)v57 = v49;
  *(_QWORD *)(v57 + 4) = v50;
  *(_QWORD *)(v55 + 108) = *(__int64 *)((char *)&v47 - 4);
  *(_DWORD *)(v55 + 116) = HIDWORD(v47);
  *(_QWORD *)(v55 + 120) = v46;
  result = *(_DWORD *)(v2 + 20);
  v59 = *(_DWORD *)(result + 20);
  *(_DWORD *)v59 = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v59 + 4) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v59 + 8) = *(_DWORD *)(v2 + 164);
  *(_DWORD *)(v59 + 12) = *(_DWORD *)(v2 + 168);
  *(_DWORD *)(v59 + 16) = *(_DWORD *)(v2 + 172);
  *(_DWORD *)(v59 + 20) = *(_DWORD *)(v2 + 176);
  *(_DWORD *)(v59 + 24) = *(_DWORD *)(v2 + 180);
  *(_DWORD *)(v59 + 28) = *(_DWORD *)(v2 + 184);
  *(_DWORD *)(v59 + 32) = *(_DWORD *)(v2 + 188);
  *(_DWORD *)(v59 + 36) = *(_DWORD *)(v2 + 192);
  *(_DWORD *)(v59 + 40) = *(_DWORD *)(v2 + 196);
  *(_DWORD *)(v59 + 44) = *(_DWORD *)(v2 + 200);
  *(_DWORD *)(v59 + 48) = *(_DWORD *)(v2 + 204);
  *(_DWORD *)(v59 + 52) = *(_DWORD *)(v2 + 208);
  *(_DWORD *)(v59 + 56) = *(_DWORD *)(v2 + 212);
  *(_DWORD *)(v59 + 60) = *(_DWORD *)(v2 + 216);
  *(_DWORD *)(v59 + 64) = *(_DWORD *)(v2 + 220);
  *(_DWORD *)(v59 + 68) = *(_DWORD *)(v2 + 224);
  *(_DWORD *)(v59 + 72) = *(_DWORD *)(v2 + 228);
  *(_DWORD *)(v59 + 76) = *(_DWORD *)(v2 + 232);
  *(_DWORD *)(v59 + 80) = *(_DWORD *)(v2 + 236);
  *(_DWORD *)(v59 + 84) = *(_DWORD *)(v2 + 240);
  *(_DWORD *)(v59 + 88) = *(_DWORD *)(v2 + 244);
  *(_DWORD *)(v59 + 92) = *(_DWORD *)(v2 + 248);
  *(_DWORD *)(v59 + 96) = *(_DWORD *)(v2 + 252);
  *(_DWORD *)(v59 + 100) = *(_DWORD *)(v2 + 256);
  *(_DWORD *)(v59 + 104) = *(_DWORD *)(v2 + 260);
  *(_DWORD *)(v59 + 108) = *(_DWORD *)(v2 + 264);
  *(_DWORD *)(v59 + 112) = *(_DWORD *)(v2 + 268);
  *(_DWORD *)(v59 + 116) = *(_DWORD *)(v2 + 272);
  *(_DWORD *)(v59 + 120) = *(_DWORD *)(v2 + 276);
  *(_DWORD *)(v59 + 124) = *(_DWORD *)(v2 + 280);
  *(_BYTE *)(result + 17) = 1;
  return result;
}


_DWORD *__fastcall mce::LRUCache::touch(mce::LRUCache *this, const ResourceLocation *a2, unsigned int a3)
{
  const ResourceLocation *v3; // r5@1
  mce::LRUCache *v4; // r4@1
  unsigned int v5; // r0@1
  int v6; // t1@1
  unsigned int v7; // r6@1
  unsigned int v8; // r4@1
  int v9; // r10@1
  int v10; // r11@2
  int v11; // r8@2
  _DWORD *v12; // r5@2
  _DWORD *v13; // r1@4
  size_t v14; // r2@4
  int v15; // r0@6
  int v16; // r9@7
  int v17; // r8@9
  void *v18; // r0@9
  int v19; // r5@9
  int v20; // r6@9
  _DWORD *result; // r0@9
  bool v22; // zf@11
  int v23; // r2@14
  int v24; // r1@14
  bool v25; // zf@14
  int v26; // [sp+0h] [bp-38h]@1
  unsigned __int64 *v27; // [sp+4h] [bp-34h]@1
  unsigned int v28; // [sp+8h] [bp-30h]@1
  mce::LRUCache *v29; // [sp+Ch] [bp-2Ch]@1
  const ResourceLocation *v30; // [sp+10h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  v28 = a3;
  v30 = a2;
  v29 = this;
  v5 = sub_21B417C(*(int **)a2, *(_DWORD *)(*(_DWORD *)a2 - 12), -955291385);
  v26 = *((_DWORD *)v3 + 1);
  v6 = *((_DWORD *)v4 + 5);
  v4 = (mce::LRUCache *)((char *)v4 + 20);
  v27 = (unsigned __int64 *)v4;
  v7 = *((_DWORD *)v4 + 1);
  v8 = (unsigned __int8)v26 ^ v5;
  v9 = *(_DWORD *)(v6 + 4 * (v8 % v7));
  if ( !v9 )
    goto LABEL_9;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 16);
  v12 = *(_DWORD **)v30;
  while ( 1 )
  {
    if ( v11 == v8 )
    {
      v13 = *(_DWORD **)(v10 + 4);
      v14 = *(v12 - 3);
      if ( v14 == *(v13 - 3) && !memcmp(v12, v13, v14) )
      {
        v15 = *(_DWORD *)(v10 + 8);
        if ( v26 == v15 )
          break;
      }
    }
    v16 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
      v11 = *(_DWORD *)(v16 + 16);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v16 + 16) % v7 == v8 % v7 )
        continue;
  }
  v22 = v9 == 0;
  if ( v9 )
    v15 = *(_DWORD *)v9;
    v22 = *(_DWORD *)v9 == 0;
  if ( v22 )
LABEL_9:
    v17 = *((_DWORD *)v29 + 3);
    v18 = operator new(0x18u);
    v19 = (int)v18;
    *(_DWORD *)v18 = 0;
    *((_DWORD *)v18 + 1) = 0;
    v20 = *((_DWORD *)v29 + 2);
    sub_21E8AF4((int *)v18 + 2, (int *)v30);
    *(_DWORD *)(v19 + 12) = *((_DWORD *)v30 + 1);
    *(_DWORD *)(v19 + 16) = v28;
    *(_DWORD *)(v19 + 20) = v20;
    sub_21BC334(v19, v17);
    result = (_DWORD *)std::__detail::_Map_base<ResourceLocation,std::pair<ResourceLocation const,std::_List_iterator<mce::LRUCache::CacheEntry>>,std::allocator<std::pair<ResourceLocation const,std::_List_iterator<mce::LRUCache::CacheEntry>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         v27,
                         (int **)v30);
    *result = *((_DWORD *)v29 + 3);
  else
    v23 = (int)v29;
    v24 = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v24 + 20) = *((_DWORD *)v29 + 2);
    result = (_DWORD *)*((_DWORD *)v29 + 3);
    v25 = result == (_DWORD *)v24;
    if ( result != (_DWORD *)v24 )
      v23 = *(_DWORD *)v24;
      v25 = result == *(_DWORD **)v24;
    if ( !v25 )
      result = (_DWORD *)sub_21BC300((int)result, v24, v23);
  return result;
}


Crypto::Hash::Hash *__fastcall mce::UUID::seedFromString(Crypto::Hash::Hash *a1, const void **a2)
{
  const void **v2; // r4@1
  Crypto::Hash::Hash *v3; // r5@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  j_Crypto::Hash::Hash::Hash((int)&v5, 0);
  j_Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v5, *v2, *((_DWORD *)*v2 - 3));
  j_Crypto::Hash::Hash::getUUID(v3, (int)&v5);
  return j_Crypto::Hash::Hash::~Hash((Crypto::Hash::Hash *)&v5);
}


unsigned int __fastcall mce::Math::fastRandom(mce::Math *this)
{
  int v1; // r0@1
  unsigned int result; // r0@1

  v1 = dword_27B5D50;
  dword_27B5D50 = dword_27B5D54;
  dword_27B5D54 = dword_27B5D58;
  dword_27B5D58 = dword_27B5D5C;
  result = v1 ^ (v1 << 11) ^ ((v1 ^ (unsigned int)(v1 << 11)) >> 8) ^ dword_27B5D5C ^ ((unsigned int)dword_27B5D5C >> 19);
  dword_27B5D5C = result;
  return result;
}


void __fastcall mce::RenderMaterialGroup::_loadMaterialSet(double a1, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1
  int v6; // r9@1
  int v7; // r8@1
  int v8; // r6@1
  unsigned int v9; // r0@1
  int v10; // r6@3
  int *v11; // r5@3
  int v12; // r8@4
  int *v13; // r6@4 OVERLAPPED
  __int64 v14; // r10@4
  Json::Value *v15; // r5@5
  const Json::Value *v16; // r0@6
  int v17; // r7@6
  int v18; // r9@6
  int v19; // r10@6
  __int64 v20; // r0@6
  void *v21; // r5@8
  char *v22; // r11@8
  unsigned int v23; // r2@8
  unsigned int v24; // r1@10
  unsigned int v25; // r8@10
  char *v26; // r10@18
  int v27; // r10@20
  void *v28; // r0@23
  void *v29; // r0@24
  void *v30; // r0@25
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  int *v37; // r5@53 OVERLAPPED
  unsigned int *v38; // r2@55
  signed int v39; // r1@57
  int *v40; // r0@63
  _DWORD *v41; // r0@68
  void *v42; // r5@70
  void *v43; // r6@71
  int v44; // [sp+0h] [bp-A8h]@0
  int (**v45)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+4h] [bp-A4h]@0
  __int64 v46; // [sp+8h] [bp-A0h]@0
  int v47; // [sp+10h] [bp-98h]@3
  int v48; // [sp+14h] [bp-94h]@3
  int v49; // [sp+18h] [bp-90h]@4
  Json::Value *v50; // [sp+1Ch] [bp-8Ch]@0
  int *v51; // [sp+20h] [bp-88h]@0
  int v52; // [sp+24h] [bp-84h]@0
  int v53; // [sp+28h] [bp-80h]@68
  void (*v54)(void); // [sp+30h] [bp-78h]@68
  void (__fastcall *v55)(int **, int **, int **); // [sp+34h] [bp-74h]@68
  int v56; // [sp+38h] [bp-70h]@6
  int v57; // [sp+40h] [bp-68h]@5
  int v58; // [sp+50h] [bp-58h]@6
  int v59; // [sp+54h] [bp-54h]@6
  int *v60; // [sp+58h] [bp-50h]@4
  int *v61; // [sp+5Ch] [bp-4Ch]@4
  void *ptr; // [sp+64h] [bp-44h]@4
  unsigned int v63; // [sp+68h] [bp-40h]@1
  void *v64; // [sp+6Ch] [bp-3Ch]@1
  int v65; // [sp+70h] [bp-38h]@1
  signed int v66; // [sp+74h] [bp-34h]@1
  int v67; // [sp+78h] [bp-30h]@1
  int v68; // [sp+7Ch] [bp-2Ch]@73

  v5 = LODWORD(a1);
  v64 = 0;
  v65 = 0;
  v6 = HIDWORD(a1);
  v66 = 1065353216;
  v67 = 0;
  LODWORD(a1) = &v66;
  v7 = a3;
  v8 = a2;
  v9 = sub_119C844(a1);
  v63 = v9;
  if ( v9 == 1 )
  {
    v47 = v5;
    v48 = v8;
    v11 = &v68;
    v68 = 0;
  }
  else
    if ( v9 >= 0x40000000 )
      sub_119C874();
    v10 = 4 * v9;
    v11 = (int *)operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  LODWORD(v14) = v7;
  ptr = v11;
  v12 = v6;
  v49 = v6;
  Json::Value::getMemberNames((Json::Value *)&v60, v6);
  HIDWORD(v14) = v61;
  v13 = v60;
  if ( v60 != v61 )
    v15 = (Json::Value *)&v57;
    v50 = (Json::Value *)&v57;
    v51 = &dword_28898C0;
    v45 = &pthread_create;
    do
    {
      mce::_getParent((int)&v58, v13, (const void **)v14);
      sub_119C854(&v56, &v59);
      v16 = (const Json::Value *)Json::Value::operator[](v12, (const char **)v13);
      Json::Value::Value(v15, v16);
      v17 = v14;
      v18 = InheritanceTree<mce::MaterialParent>::_node((unsigned __int64 *)&ptr, (int **)&v59);
      v19 = InheritanceTree<mce::MaterialParent>::_node((unsigned __int64 *)&ptr, (int **)&v58);
      EntityInteraction::setInteractText((int *)(v19 + 8), &v56);
      Json::Value::operator=(v19 + 16, v15);
      v20 = *(_QWORD *)(v18 + 36);
      if ( (_DWORD)v20 == HIDWORD(v20) )
      {
        v21 = *(void **)(v18 + 32);
        HIDWORD(v46) = HIDWORD(v14);
        v22 = 0;
        v23 = ((signed int)v20 - (signed int)v21) >> 2;
        if ( !v23 )
          v23 = 1;
        HIDWORD(v20) = v23 + (((signed int)v20 - (signed int)v21) >> 2);
        v25 = v23 + (((signed int)v20 - (signed int)v21) >> 2);
        if ( 0 != HIDWORD(v20) >> 30 )
          v25 = 0x3FFFFFFF;
        if ( v24 < v23 )
        if ( v25 )
        {
          if ( v25 >= 0x40000000 )
            sub_119C874();
          v22 = (char *)operator new(4 * v25);
          LODWORD(v46) = v17;
          LODWORD(v20) = *(_QWORD *)(v18 + 32) >> 32;
          v21 = (void *)*(_QWORD *)(v18 + 32);
        }
        else
        *(_DWORD *)&v22[v20 - (_DWORD)v21] = v19;
        v26 = &v22[v20 - (_DWORD)v21];
        if ( ((signed int)v20 - (signed int)v21) >> 2 )
          _aeabi_memmove4(v22, v21);
        v52 = (int)v13;
        v27 = (int)(v26 + 4);
        if ( v21 )
          operator delete(v21);
        *(_DWORD *)(v18 + 32) = v22;
        *(_DWORD *)(v18 + 36) = v27;
        *(_DWORD *)(v18 + 40) = &v22[4 * v25];
        v15 = (Json::Value *)&v57;
        v12 = v49;
        v14 = v46;
      }
      else
        *(_DWORD *)v20 = v14;
        LODWORD(v14) = v17;
        *(_DWORD *)(v18 + 36) += 4;
      Json::Value::~Value(v15);
      v28 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v56 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v29 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v59 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      v30 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v58 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v13 = (int *)(v52 + 4);
    }
    while ( v52 + 4 != HIDWORD(v14) );
    *(_QWORD *)(&v13 - 1) = *(_QWORD *)&v60;
    if ( v60 != v61 )
      do
        v40 = (int *)(*v37 - 12);
        if ( v40 != &dword_28898C0 )
          v38 = (unsigned int *)(*v37 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
          }
          else
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v40);
        ++v37;
      while ( v37 != v13 );
      v13 = v60;
  if ( v13 )
    operator delete(v13);
  v41 = operator new(0x10u);
  *v41 = v47;
  v41[1] = v48;
  v41[2] = a4;
  v41[3] = a5;
  v54 = (void (*)(void))sub_F35A94;
  v55 = sub_F359F6;
  InheritanceTree<mce::MaterialParent>::visitBFS(
    (int)&ptr,
    (int)&v53,
    a4,
    (int)sub_F35A94,
    v44,
    v45,
    v46,
    SHIDWORD(v46),
    v47,
    v48,
    v49,
    (int)v50,
    (int)v51,
    v52,
    (int)v41);
  if ( v54 )
    v54();
  v42 = v64;
  if ( v64 )
      v43 = *(void **)v42;
      std::pair<std::string const,InheritanceTree<mce::MaterialParent>::Node>::~pair((int)v42 + 8);
      operator delete(v42);
      v42 = v43;
    while ( v43 );
  _aeabi_memclr4(ptr, 4 * v63);
  if ( ptr )
    if ( &v68 != ptr )
      operator delete(ptr);
}


int __fastcall mce::RenderContext::lostContext(mce::RenderContext *this)
{
  mce::RenderContext *v1; // r4@1

  v1 = this;
  mce::RenderContext::clearContextState(this);
  return j_j_j__ZN3mce16RenderContextOGL11lostContextEv(v1);
}


int __fastcall mce::EnableScissorTest::EnableScissorTest(int result, float a2, float a3, float a4, float a5, bool a6)
{
  __asm { VLDR            S0, [SP,#8+arg_0] }
  *(_BYTE *)result = 1;
  *(_BYTE *)(result + 1) = a6;
  LOBYTE(mce::EnableScissorTest::mScissorTestEnabled) = 1;
  __asm { VSTR            S0, [R12,#0x10] }
  mce::EnableScissorTest::mActiveScissorBox = LODWORD(a2);
  unk_27E8758 = LODWORD(a3);
  unk_27E875C = LODWORD(a4);
  return result;
}


int __fastcall mce::EffectConstants::EffectConstants(mce::EffectConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8B74;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall mce::RenderMaterialGroup::setMaterialMap(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  int i; // r4@1

  v2 = a1;
  result = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_move_assign(
             a1 + 8,
             a2);
  for ( i = *(_DWORD *)(v2 + 68); i; i = *(_DWORD *)i )
    result = mce::MaterialPtr::onGroupReloaded(*(mce::MaterialPtr **)(i + 4));
  return result;
}


int __fastcall mce::LRUCache::clear(mce::LRUCache *this)
{
  mce::LRUCache *v1; // r9@1
  int v2; // r5@1
  char *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r6@11
  int v7; // r1@11
  void *v8; // r0@11
  unsigned __int64 *v9; // r7@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  unsigned __int64 *v12; // r6@23
  int v13; // r1@23
  void *v14; // r0@23
  int result; // r0@25

  v1 = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = (char *)this + 12;
  v2 = *((_DWORD *)this + 3);
  if ( (mce::LRUCache *)v2 != (mce::LRUCache *)((char *)this + 12) )
  {
    do
    {
      v6 = (void *)v2;
      v7 = *(_DWORD *)(v2 + 8);
      v2 = *(_DWORD *)v2;
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v7 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      operator delete(v6);
    }
    while ( (char *)v2 != v3 );
  }
  *((_DWORD *)v1 + 3) = v3;
  *((_DWORD *)v1 + 4) = v3;
  v9 = (unsigned __int64 *)*((_DWORD *)v1 + 7);
  while ( v9 )
    v12 = v9;
    v13 = *v9 >> 32;
    v9 = (unsigned __int64 *)*v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    operator delete(v12);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 20), 4 * (*(_QWORD *)((char *)v1 + 20) >> 32));
  result = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  return result;
}


int __fastcall mce::ShaderConstantInt2::syncUniform(mce::ShaderConstantInt2 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform2iv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


mce::RenderStageWithFrameBufferObject *__fastcall mce::RenderStageWithFrameBufferObject::~RenderStageWithFrameBufferObject(mce::RenderStageWithFrameBufferObject *this)
{
  mce::RenderStageWithFrameBufferObject *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCD00;
  mce::Texture::~Texture((mce::RenderStageWithFrameBufferObject *)((char *)this + 172));
  mce::Texture::~Texture((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 108));
  mce::FrameBufferObject::~FrameBufferObject((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 28));
  *(_DWORD *)v1 = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


int __fastcall mce::ShaderConstants::ShaderConstants(mce::ShaderConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8BEC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


void __fastcall mce::ShaderConstantFloat1::~ShaderConstantFloat1(mce::ShaderConstantFloat1 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall mce::UUID::fromString(int a1, int *a2)
{
  mce::UUID::fromString(a1, a2);
}


int __fastcall mce::WorldConstantsHolographic::setViewProjOverrides(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 28) = *(_DWORD *)a2;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 64) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 68) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 80) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 84) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 88) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(result + 92) = *(_DWORD *)a4;
  *(_DWORD *)(result + 96) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 100) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 104) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 108) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 112) = *(_DWORD *)(a4 + 20);
  *(_DWORD *)(result + 116) = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(result + 120) = *(_DWORD *)(a4 + 28);
  *(_DWORD *)(result + 124) = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(result + 128) = *(_DWORD *)(a4 + 36);
  *(_DWORD *)(result + 132) = *(_DWORD *)(a4 + 40);
  *(_DWORD *)(result + 136) = *(_DWORD *)(a4 + 44);
  *(_DWORD *)(result + 140) = *(_DWORD *)(a4 + 48);
  *(_DWORD *)(result + 144) = *(_DWORD *)(a4 + 52);
  *(_DWORD *)(result + 148) = *(_DWORD *)(a4 + 56);
  *(_DWORD *)(result + 152) = *(_DWORD *)(a4 + 60);
  *(_DWORD *)(result + 156) = *(_DWORD *)a3;
  *(_DWORD *)(result + 160) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 164) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 168) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(result + 172) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(result + 176) = *(_DWORD *)(a3 + 20);
  *(_DWORD *)(result + 180) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(result + 184) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(result + 188) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(result + 192) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(result + 196) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(result + 200) = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(result + 204) = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(result + 208) = *(_DWORD *)(a3 + 52);
  *(_DWORD *)(result + 212) = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(result + 216) = *(_DWORD *)(a3 + 60);
  *(_DWORD *)(result + 220) = *(_DWORD *)a5;
  *(_DWORD *)(result + 224) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 228) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(result + 232) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(result + 236) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(result + 240) = *(_DWORD *)(a5 + 20);
  *(_DWORD *)(result + 244) = *(_DWORD *)(a5 + 24);
  *(_DWORD *)(result + 248) = *(_DWORD *)(a5 + 28);
  *(_DWORD *)(result + 252) = *(_DWORD *)(a5 + 32);
  *(_DWORD *)(result + 256) = *(_DWORD *)(a5 + 36);
  *(_DWORD *)(result + 260) = *(_DWORD *)(a5 + 40);
  *(_DWORD *)(result + 264) = *(_DWORD *)(a5 + 44);
  *(_DWORD *)(result + 268) = *(_DWORD *)(a5 + 48);
  *(_DWORD *)(result + 272) = *(_DWORD *)(a5 + 52);
  *(_DWORD *)(result + 276) = *(_DWORD *)(a5 + 56);
  *(_DWORD *)(result + 280) = *(_DWORD *)(a5 + 60);
  *(_BYTE *)(result + 25) = 1;
  return result;
}


mce::RenderStageWithFrameBufferObject *__fastcall mce::RenderStageWithFrameBufferObject::RenderStageWithFrameBufferObject(mce::RenderStageWithFrameBufferObject *this)
{
  mce::RenderStageWithFrameBufferObject *v1; // r4@1

  v1 = this;
  mce::RenderStage::RenderStage(this);
  *(_DWORD *)v1 = &off_26DCD00;
  mce::FrameBufferObject::FrameBufferObject((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 28));
  *((_DWORD *)v1 + 26) = (char *)v1 + 108;
  mce::Texture::Texture((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 108));
  mce::Texture::Texture((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 172));
  return v1;
}


int __fastcall mce::TextureGroup::loadListAsync(int a1, int a2, unsigned __int64 *a3, char a4)
{
  int v4; // r11@1
  int result; // r0@1
  int v6; // r7@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // r8@19
  unsigned int *v12; // r0@20
  unsigned int v13; // r1@22
  void *v14; // r4@25
  unsigned int *v15; // r0@26
  unsigned int v16; // r1@28
  void *v17; // r4@31
  void *v18; // r0@33
  void *v25; // r0@50
  int v26; // r4@51
  unsigned int *v27; // r1@52
  unsigned int v28; // r0@54
  unsigned int *v29; // r5@58
  unsigned int v30; // r0@60
  int v31; // r4@65
  unsigned int *v32; // r1@66
  unsigned int v33; // r0@68
  unsigned int *v34; // r5@72
  unsigned int v35; // r0@74
  int i; // [sp+14h] [bp-8Ch]@1
  int v37; // [sp+18h] [bp-88h]@1
  char v38; // [sp+1Ch] [bp-84h]@1
  int v39; // [sp+28h] [bp-78h]@25
  int v40; // [sp+2Ch] [bp-74h]@25
  int v41; // [sp+30h] [bp-70h]@3
  int v42; // [sp+34h] [bp-6Ch]@31
  char v43; // [sp+38h] [bp-68h]@31
  void *v44; // [sp+3Ch] [bp-64h]@31
  int (__fastcall *v45)(int *, int *, int); // [sp+44h] [bp-5Ch]@31
  int (__fastcall *v46)(int); // [sp+48h] [bp-58h]@31
  int v47; // [sp+4Ch] [bp-54h]@19
  int v48; // [sp+50h] [bp-50h]@19
  int v49; // [sp+54h] [bp-4Ch]@7
  int v50; // [sp+58h] [bp-48h]@25
  int v51; // [sp+5Ch] [bp-44h]@25
  void *v52; // [sp+60h] [bp-40h]@25
  void (*v53)(void); // [sp+68h] [bp-38h]@25
  int (__fastcall *v54)(int **); // [sp+6Ch] [bp-34h]@25
  int v55; // [sp+70h] [bp-30h]@19
  int v56; // [sp+74h] [bp-2Ch]@19

  v37 = a2;
  v38 = a4;
  v4 = a1;
  result = *a3 >> 32;
  v6 = *a3;
  for ( i = result; v6 != i; result = i )
  {
    j__ZNSt12__shared_ptrI11TexturePairLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v55);
    v11 = *(_DWORD *)(v4 + 92);
    v47 = v55;
    v48 = v56;
    if ( v56 )
    {
      v12 = (unsigned int *)(v56 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
      }
      else
        ++*v12;
    }
    sub_21E8AF4(&v49, (int *)v6);
    v50 = *(_DWORD *)(v6 + 4);
    v51 = v4;
    v53 = 0;
    v14 = operator new(0x14u);
    *(_DWORD *)v14 = v47;
    *((_DWORD *)v14 + 1) = v48;
    v48 = 0;
    v47 = 0;
    sub_21E8AF4((int *)v14 + 2, &v49);
    *((_DWORD *)v14 + 3) = v50;
    *((_DWORD *)v14 + 4) = v51;
    v52 = v14;
    v54 = sub_1452074;
    v53 = (void (*)(void))sub_145214C;
    v39 = v55;
    v40 = v56;
      v15 = (unsigned int *)(v56 + 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    sub_21E8AF4(&v41, (int *)v6);
    v42 = *(_DWORD *)(v6 + 4);
    v43 = v38;
    v45 = 0;
    v17 = operator new(0x18u);
    *(_DWORD *)v17 = v4;
    *((_DWORD *)v17 + 1) = v39;
    *((_DWORD *)v17 + 2) = v40;
    sub_21E8AF4((int *)v17 + 3, &v41);
    *((_DWORD *)v17 + 4) = v42;
    *((_BYTE *)v17 + 20) = v43;
    v44 = v17;
    v46 = sub_1452298;
    v45 = sub_14522A8;
    ResourceLoadManager::loadResource(v11, v37, 0, (int)&v52, (int)&v44);
    if ( v45 )
      v45((int *)&v44, (int *)&v44, 3);
    v18 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v41 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    if ( v53 )
      v53();
    v25 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v49 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = v48;
    if ( v48 )
      v27 = (unsigned int *)(v48 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v31 = v56;
      v32 = (unsigned int *)(v56 + 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        v34 = (unsigned int *)(v31 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
    v6 += 8;
  }
  return result;
}


mce::GlobalConstantBufferManager *__fastcall mce::GlobalConstantBufferManager::~GlobalConstantBufferManager(mce::GlobalConstantBufferManager *this)
{
  mce::GlobalConstantBufferManager *v1; // r4@1
  mce::ConstantBufferContainer *v2; // r0@1
  mce::ConstantBufferContainer *v3; // r5@1

  v1 = this;
  v3 = (mce::ConstantBufferContainer *)(*(_QWORD *)this >> 32);
  v2 = (mce::ConstantBufferContainer *)*(_QWORD *)this;
  if ( v2 != v3 )
  {
    do
      v2 = (mce::ConstantBufferContainer *)(mce::ConstantBufferContainer::~ConstantBufferContainer(v2) + 44);
    while ( v3 != v2 );
    v2 = *(mce::ConstantBufferContainer **)v1;
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


mce::TextureGroup *__fastcall mce::TextureGroup::~TextureGroup(mce::TextureGroup *this)
{
  mce::TextureGroup *v1; // r4@1
  int i; // r5@1
  char *v3; // r0@4
  void *v4; // r0@7
  char *v5; // r5@9 OVERLAPPED
  char *v6; // r6@9 OVERLAPPED
  mce::LRUCache *v7; // r0@16
  mce::LRUCache *v8; // r0@17
  void *v9; // r0@18
  void *v10; // r6@19
  char *v11; // r0@20
  ResourceLocationPair *v12; // r0@23
  ResourceLocationPair *v13; // r5@23

  v1 = this;
  for ( i = *((_DWORD *)this + 11); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(i + 4) + 12))();
  std::_Hashtable<ResourceLocation,std::pair<ResourceLocation const,BackwardsCompatTextureInfo>,std::allocator<std::pair<ResourceLocation const,BackwardsCompatTextureInfo>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 96);
  v3 = (char *)*((_DWORD *)v1 + 24);
  if ( v3 && (char *)v1 + 120 != v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 20);
  if ( v4 )
    operator delete(v4);
  *(_QWORD *)&v5 = *(_QWORD *)((char *)v1 + 68);
  if ( v5 != v6 )
  {
    do
    {
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 4))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    }
    while ( v6 != v5 );
    v5 = (char *)*((_DWORD *)v1 + 17);
  }
  if ( v5 )
    operator delete(v5);
  v7 = (mce::LRUCache *)*((_DWORD *)v1 + 16);
  if ( v7 )
    v8 = mce::LRUCache::~LRUCache(v7);
    operator delete((void *)v8);
  *((_DWORD *)v1 + 16) = 0;
  v9 = (void *)*((_DWORD *)v1 + 11);
  if ( v9 )
      v10 = *(void **)v9;
      operator delete(v9);
      v9 = v10;
    while ( v10 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 36), 4 * (*(_QWORD *)((char *)v1 + 36) >> 32));
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  v11 = (char *)*((_DWORD *)v1 + 9);
  if ( v11 && (char *)v1 + 60 != v11 )
    operator delete(v11);
  v13 = (ResourceLocationPair *)(*((_QWORD *)v1 + 3) >> 32);
  v12 = (ResourceLocationPair *)*((_QWORD *)v1 + 3);
  if ( v12 != v13 )
      v12 = (ResourceLocationPair *)((char *)ResourceLocationPair::~ResourceLocationPair(v12) + 64);
    while ( v13 != v12 );
    v12 = (ResourceLocationPair *)*((_DWORD *)v1 + 6);
  if ( v12 )
    operator delete((void *)v12);
  std::_Rb_tree<ResourceLocation,std::pair<ResourceLocation const,TexturePair>,std::_Select1st<std::pair<ResourceLocation const,TexturePair>>,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,TexturePair>>>::_M_erase(
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}


int __fastcall mce::ShaderConstantFloat4::syncUniform(mce::ShaderConstantFloat4 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform4fv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


void __fastcall mce::RenderMaterial::loadShader(mce::RenderMaterial *this, mce::ShaderGroup *a2)
{
  mce::RenderMaterial::loadShader(this, a2);
}


unsigned int __fastcall mce::VertexFormat::operator<(const void *a1, const void *a2)
{
  return (unsigned int)memcmp(a1, a2, 9u) >> 31;
}


mce::TexturePtr *__fastcall mce::TexturePtr::TexturePtr(mce::TexturePtr *this, const mce::TexturePtr *a2)
{
  mce::TexturePtr *v2; // r4@1
  const mce::TexturePtr *v3; // r5@1
  mce::TextureGroup *v4; // r0@1

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = &off_26E8D98;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  sub_21E8AF4((int *)this + 3, (int *)a2 + 3);
  *((_DWORD *)v2 + 4) = *((_DWORD *)v3 + 4);
  *((_DWORD *)v2 + 5) = *((_DWORD *)v3 + 5);
  v4 = (mce::TextureGroup *)*((_DWORD *)v2 + 1);
  if ( v4 )
    mce::TextureGroup::_addRef(v4, v2);
  return v2;
}


int __fastcall mce::RasterizerStateOGL::bindRasterizerState(mce::RasterizerStateOGL *this, mce::RenderContext *a2, int a3)
{
  unsigned int v5; // r1@1
  int v6; // r6@1
  unsigned int v7; // r0@1
  _BYTE *v9; // r7@5
  unsigned int v10; // r1@5
  signed int v11; // r0@7
  void (__fastcall *v12)(signed int); // r1@7
  void **v13; // r0@13
  int v17; // r1@21
  bool v18; // zf@21
  void **v19; // r0@24

  _R4 = a2;
  _R5 = this;
  v5 = *((_DWORD *)a2 + 10);
  v6 = a3;
  v7 = *((_DWORD *)this + 2);
  _ZF = (unsigned __int8)v5 == (unsigned __int8)v7;
  if ( (unsigned __int8)v5 == (unsigned __int8)v7 )
    _ZF = a3 == 0;
  if ( _ZF )
  {
    v9 = (char *)_R4 + 42;
    v10 = v5 >> 16;
  }
  else
    if ( *((_BYTE *)_R5 + 17) )
    {
      glad_glEnable(2884);
      v11 = *((_DWORD *)_R5 + 3);
      v12 = (void (__fastcall *)(signed int))glad_glCullFace;
    }
    else
      v12 = (void (__fastcall *)(signed int))glad_glDisable;
      v11 = 2884;
    v12(v11);
    v7 = *((_DWORD *)_R5 + 2);
    *((_BYTE *)_R4 + 40) = v7;
    LOBYTE(v10) = *((_BYTE *)_R4 + 42);
  if ( (unsigned __int8)v10 != ((v7 >> 16) & 0xFF) || v6 == 1 )
    if ( *((_BYTE *)_R5 + 16) )
      v13 = &glad_glEnable_ptr;
      v13 = &glad_glDisable_ptr;
    (*(void (__fastcall **)(signed int))*v13)(3089);
    *v9 = *((_BYTE *)_R5 + 10);
  __asm
    VLDR            S0, [R5]
    VLDR            S2, [R4,#0x20]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_30;
    VLDR            S0, [R5,#4]
    VLDR            S2, [R4,#0x24]
  if ( !_ZF || v6 == 1 )
LABEL_30:
    v17 = *((_DWORD *)_R5 + 5);
    v18 = (v17 & 0x7FFFFFFF) == 0;
    if ( !(v17 & 0x7FFFFFFF) )
      v18 = (*((_DWORD *)_R5 + 6) & 0x7FFFFFFF) == 0;
    if ( v18 )
      v19 = &glad_glDisable_ptr;
      v19 = &glad_glEnable_ptr;
    (*(void (__fastcall **)(signed int))*v19)(32823);
    glad_glPolygonOffset(*(_QWORD *)((char *)_R5 + 20) >> 32, *(_QWORD *)((char *)_R5 + 20));
    *((_DWORD *)_R4 + 8) = *(_DWORD *)_R5;
    *((_DWORD *)_R4 + 9) = *((_DWORD *)_R5 + 1);
  return j_j_j__ZNK3mce19RasterizerStateBase19bindRasterizerStateERNS_13RenderContextE(_R5, _R4);
}


int __fastcall mce::ShaderBase::SetAttributeListIndex(int result, unsigned int a2)
{
  *(_DWORD *)result = a2;
  return result;
}


int __fastcall mce::Mesh::reset(mce::Mesh *this)
{
  mce::Mesh *v1; // r4@1
  int v2; // r3@1
  int result; // r0@1

  v1 = this;
  mce::Buffer::releaseBuffer(this);
  mce::Buffer::releaseBuffer((mce::Mesh *)((char *)v1 + 32));
  *((_BYTE *)v1 + 92) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  v2 = mce::VertexFormat::EMPTY;
  result = unk_27E8CB0;
  *((_BYTE *)v1 + 72) = unk_27E8CB4;
  *((_DWORD *)v1 + 17) = result;
  *((_DWORD *)v1 + 16) = v2;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 24) = 0;
  return result;
}


int __fastcall mce::GlobalConstantBufferManager::GlobalConstantBufferManager(int result)
{
  *(_WORD *)(result + 12) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 14) = 1;
  return result;
}


signed int __fastcall mce::TextureHelperOGL::getOpenGLSizedInternalFormatFromTextureFormat(signed int a1)
{
  signed int result; // r0@4

  if ( a1 > 54 )
  {
    result = 36194;
    switch ( 36194 )
    {
      case 86:
        return 32855;
      case 87:
        goto LABEL_10;
      case 88:
      case 89:
      case 90:
        goto LABEL_11;
      case 85:
        return result;
      case 91:
        result = 35907;
        break;
    }
  }
  else if ( (unsigned int)(a1 - 28) < 2 )
LABEL_10:
    result = 32856;
  else if ( a1 == 11 )
    result = 34842;
  else if ( a1 == 45 )
    result = 35056;
  else
LABEL_11:
    result = 0;
  return result;
}


Json::Value *__fastcall mce::ConstantBufferMetaDataManager::loadJsonFile(mce::ConstantBufferMetaDataManager *a1, mce::GlobalConstantBufferManager *a2, int *a3)
{
  mce::ConstantBufferMetaDataManager *v3; // r5@1
  int *v4; // r6@1
  Json::Reader *v5; // r0@1
  int v6; // r0@1
  Json::ValueIteratorBase *v7; // r5@2
  Json::Value *v8; // r6@2
  Json::Value *v9; // r7@2
  Json::Value *v10; // r8@2
  Json::Value *v11; // r10@2
  char *v12; // r9@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  int v15; // r4@11
  const char *v16; // r0@11
  __int64 v17; // r0@11
  int v18; // r11@12
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  const char *v23; // r4@32
  unsigned int v24; // r8@33
  mce::ConstantBufferMetaDataManager *v25; // r10@33
  const char *v26; // r4@33
  void *v27; // r0@35
  char *v28; // r7@36
  void *v29; // r0@36
  int v30; // r1@37
  int v31; // r9@37
  void *v32; // r4@38
  size_t v33; // r5@38
  size_t v34; // r2@39
  _DWORD *v35; // r1@39
  size_t v36; // r6@39
  int v37; // r0@41
  int *v38; // r1@41
  bool v39; // zf@46
  bool v40; // nf@46
  unsigned __int8 v41; // vf@46
  int v42; // r0@46
  _DWORD *v43; // r0@50
  size_t v44; // r6@50
  size_t v45; // r2@50
  int v46; // r0@52
  mce::ConstantBufferMetaDataManager *v47; // r6@56
  _DWORD *v48; // r1@57
  unsigned int v49; // r4@57
  unsigned int v50; // r5@57
  size_t v51; // r2@57
  unsigned int v52; // r0@59
  int v53; // r4@61
  void *v54; // r10@63
  char *v55; // r4@64
  int v56; // r0@64
  char **v57; // r1@64
  int v58; // r0@78
  unsigned int *v59; // r2@84
  signed int v60; // r1@86
  unsigned int *v61; // r2@88
  signed int v62; // r1@90
  mce::UniformMetaData *v63; // r0@110
  mce::UniformMetaData *v64; // r2@110
  unsigned int v65; // r5@110
  int v66; // r6@111
  int v67; // r4@111
  signed int v68; // r7@111
  int v69; // r0@113
  unsigned int v70; // r2@113
  mce::AlignmentHelper *v71; // r4@113
  int v72; // r6@116
  char *v73; // r0@118
  char *v74; // r0@119
  void *v75; // r0@121
  mce::GlobalConstantBufferManager *v77; // [sp+1Ch] [bp-134h]@1
  mce::ConstantBufferMetaDataManager *v78; // [sp+30h] [bp-120h]@1
  int v79; // [sp+34h] [bp-11Ch]@2
  int v80; // [sp+3Ch] [bp-114h]@36
  char *v81; // [sp+40h] [bp-110h]@16
  int v82; // [sp+48h] [bp-108h]@35
  void *s1; // [sp+4Ch] [bp-104h]@20
  char v84; // [sp+50h] [bp-100h]@2
  char v85; // [sp+60h] [bp-F0h]@2
  char v86; // [sp+70h] [bp-E0h]@2
  char v87; // [sp+80h] [bp-D0h]@14
  char v88; // [sp+88h] [bp-C8h]@2
  int v89; // [sp+94h] [bp-BCh]@3
  char v90; // [sp+98h] [bp-B8h]@1
  char v91; // [sp+A0h] [bp-B0h]@1
  char v92; // [sp+A8h] [bp-A8h]@1
  char v93; // [sp+118h] [bp-38h]@1

  v3 = a1;
  v77 = a2;
  v4 = a3;
  v78 = a1;
  Json::Value::Value(&v93, 0);
  v5 = Json::Reader::Reader((Json::Reader *)&v92);
  Json::Reader::parse((int)v5, v4, (int)&v93, 1);
  v6 = Json::Value::size((Json::Value *)&v93);
  std::vector<mce::ConstantBufferMetaData,std::allocator<mce::ConstantBufferMetaData>>::reserve((int)v3, v6);
  Json::Value::begin((Json::Value *)&v91, (int)&v93);
  Json::Value::end((Json::Value *)&v90, (int)&v93);
  if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v91, (const Json::ValueIteratorBase *)&v90) )
  {
    v7 = (Json::ValueIteratorBase *)&v91;
    v8 = (Json::Value *)&v88;
    v9 = (Json::Value *)&v86;
    v79 = (int)v78 + 16;
    v10 = (Json::Value *)&v85;
    v11 = (Json::Value *)&v84;
    v12 = (char *)&dword_28898C0;
    while ( 1 )
    {
      v15 = Json::ValueIteratorBase::deref(v7);
      v16 = (const char *)Json::ValueIteratorBase::memberName(v7);
      sub_21E94B4((void **)&v89, v16);
      v17 = *(_QWORD *)((char *)v78 + 4);
      if ( (_DWORD)v17 == HIDWORD(v17) )
      {
        j__ZNSt6vectorIN3mce22ConstantBufferMetaDataESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v78);
        v18 = *((_DWORD *)v78 + 1);
      }
      else
        mce::ConstantBufferMetaData::ConstantBufferMetaData((mce::ConstantBufferMetaData *)v17);
        v18 = *((_DWORD *)v78 + 1) + 16;
        *((_DWORD *)v78 + 1) = v18;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v18 - 16),
        &v89);
      Json::Value::begin(v8, v15);
      Json::Value::end((Json::Value *)&v87, v15);
      if ( !Json::ValueIteratorBase::isEqual(v8, (const Json::ValueIteratorBase *)&v87) )
        break;
LABEL_121:
      v7 = (Json::ValueIteratorBase *)&v91;
      v75 = (void *)(v89 - 12);
      if ( (char *)(v89 - 12) != v12 )
        v13 = (unsigned int *)(v89 - 4);
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
          j_j_j_j__ZdlPv_9(v75);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v91);
      Json::Value::end((Json::Value *)&v90, (int)&v93);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v91, (const Json::ValueIteratorBase *)&v90) )
        goto LABEL_123;
    }
      v23 = (const char *)Json::ValueIteratorBase::deref(v8);
      Json::Value::get(v9, v23, (const Json::Value *)"Name", (const Json::Value *)&Json::Value::null);
      Json::Value::get(v10, v23, (const Json::Value *)"Type", (const Json::Value *)&Json::Value::null);
      Json::Value::get(v11, v23, (const Json::Value *)"Elements", (const Json::Value *)&Json::Value::null);
      if ( Json::Value::isNull(v11) )
        v24 = 0;
        v25 = v78;
        v26 = (const char *)&unk_257BC67;
        v24 = Json::Value::asUInt(v11, 0);
      sub_21E94B4((void **)&v82, v26);
      Json::Value::asString((int *)&s1, (int)v9, &v82);
      v27 = (void *)(v82 - 12);
      if ( (char *)(v82 - 12) != v12 )
        v59 = (unsigned int *)(v82 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      sub_21E94B4((void **)&v80, v26);
      Json::Value::asString((int *)&v81, (int)&v85, &v80);
      v28 = v12;
      v29 = (void *)(v80 - 12);
      if ( (char *)(v80 - 12) != v12 )
        v61 = (unsigned int *)(v80 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v30 = *((_DWORD *)v25 + 5);
      v31 = (int)v78 + 16;
      if ( v30 )
        v32 = s1;
        v33 = *((_DWORD *)s1 - 3);
        do
          v31 = v30;
          v34 = v33;
          v35 = *(_DWORD **)(v30 + 16);
          v36 = *(v35 - 3);
          if ( v33 > v36 )
            v34 = *(v35 - 3);
          v37 = memcmp(v32, v35, v34);
          v38 = (int *)(v31 + 12);
          if ( !v37 )
            v37 = v33 - v36;
          if ( v37 < 0 )
            v38 = (int *)(v31 + 8);
          v30 = *v38;
        while ( v30 );
        v41 = __OFSUB__(v37, -1);
        v39 = v37 == -1;
        v40 = v37 + 1 < 0;
        v42 = v31;
        if ( !((unsigned __int8)(v40 ^ v41) | v39) )
          goto LABEL_50;
      if ( v31 != *((_DWORD *)v25 + 6) )
LABEL_55:
      if ( v31 )
        v47 = v25;
        if ( v79 == v31 )
          v53 = 1;
          v48 = *(_DWORD **)(v31 + 16);
          v49 = *((_DWORD *)s1 - 3);
          v50 = *(v48 - 3);
          v51 = *((_DWORD *)s1 - 3);
          if ( v49 > v50 )
            v51 = *(v48 - 3);
          v52 = memcmp(s1, v48, v51);
          if ( !v52 )
            v52 = v49 - v50;
          v53 = v52 >> 31;
        v54 = operator new(0x14u);
        sub_21E8AF4((int *)v54 + 4, (int *)&s1);
        sub_21D4928(v53, (int)v54, v31, v79);
        ++*((_DWORD *)v47 + 8);
LABEL_64:
      v55 = v81;
      v56 = strcmp(v81, "UnknownPrimitiveType");
      v12 = v28;
      v57 = off_26E8B08;
      if ( v56 )
        if ( !strcmp(v55, "Float1") )
          v57 = off_26E8B0C;
        else if ( !strcmp(v55, "Float2") )
          v57 = off_26E8B10;
        else if ( !strcmp(v55, "Float3") )
          v57 = off_26E8B14;
        else if ( !strcmp(v55, "Float4") )
          v57 = off_26E8B18;
        else if ( !strcmp(v55, "Int1") )
          v57 = off_26E8B1C;
        else if ( !strcmp(v55, "Int2") )
          v57 = off_26E8B20;
        else if ( !strcmp(v55, "Int3") )
          v57 = off_26E8B24;
        else if ( !strcmp(v55, "Int4") )
          v57 = off_26E8B28;
        else if ( !strcmp(v55, "Matrix2x2") )
          v57 = off_26E8B2C;
        else if ( !strcmp(v55, "Matrix3x3") )
          v57 = off_26E8B30;
        else if ( !strcmp(v55, "Matrix4x4") )
          v57 = off_26E8B34;
        else if ( !strcmp(v55, "Sampler1d") )
          v57 = off_26E8B38;
        else if ( !strcmp(v55, "Sampler2d") )
          v57 = off_26E8B3C;
          v58 = strcmp(v55, "Sampler3d");
          v57 = (char **)&`vtable for'mce::ConstantBufferConstantsBase;
          if ( !v58 )
            v57 = &off_26E8B40;
      v64 = (mce::UniformMetaData *)(*(_QWORD *)(v18 - 12) >> 32);
      v63 = (mce::UniformMetaData *)*(_QWORD *)(v18 - 12);
      v65 = (unsigned int)((char *)v57 - (char *)off_26E8B08) >> 2;
      if ( v63 == v64 )
        v71 = 0;
        v66 = *((_DWORD *)v64 - 4);
        v67 = mce::UniformMetaData::getUniformSize((mce::UniformMetaData *)((char *)v64 - 20));
        v68 = v24;
        if ( !v24 )
          v68 = 1;
        v69 = mce::ShaderPrimitiveTypeHelper::sizeInBytesFromShaderPrimitiveType(v65);
        v71 = mce::AlignmentHelper::getAlignedOffset((mce::AlignmentHelper *)(v67 + v66), v69 * v68, v70);
        v63 = *(mce::UniformMetaData **)(v18 - 8);
      v9 = (Json::Value *)&v86;
      if ( v63 == *(mce::UniformMetaData **)(v18 - 4) )
        j__ZNSt6vectorIN3mce15UniformMetaDataESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)(v18 - 12));
        v72 = *(_DWORD *)(v18 - 8);
        mce::UniformMetaData::UniformMetaData(v63);
        v72 = *(_DWORD *)(v18 - 8) + 20;
        *(_DWORD *)(v18 - 8) = v72;
      *(_DWORD *)(v72 - 20) = v24;
      *(_BYTE *)(v72 - 12) = v65;
      *(_DWORD *)(v72 - 8) = v18 - 16;
      EntityInteraction::setInteractText((int *)(v72 - 4), (int *)&s1);
      *(_DWORD *)(v72 - 16) = v71;
      v73 = v81 - 12;
      if ( v81 - 12 != v12 )
        v19 = (unsigned int *)(v81 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v9 = (Json::Value *)&v86;
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v73);
      v8 = (Json::Value *)&v88;
      v10 = (Json::Value *)&v85;
      v74 = (char *)s1 - 12;
      if ( (char *)s1 - 12 != v12 )
        v21 = (unsigned int *)((char *)s1 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      v11 = (Json::Value *)&v84;
      Json::Value::~Value((Json::Value *)&v84);
      Json::Value::~Value((Json::Value *)&v85);
      Json::Value::~Value(v9);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v88);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v88, (const Json::ValueIteratorBase *)&v87) )
        goto LABEL_121;
    v42 = sub_21D4858(v31);
    v32 = s1;
    v33 = *((_DWORD *)s1 - 3);
LABEL_50:
    v43 = *(_DWORD **)(v42 + 16);
    v44 = *(v43 - 3);
    v45 = *(v43 - 3);
    if ( v44 > v33 )
      v45 = v33;
    v46 = memcmp(v43, v32, v45);
    if ( !v46 )
      v46 = v44 - v33;
    if ( v46 > -1 )
      goto LABEL_64;
    goto LABEL_55;
  }
LABEL_123:
  mce::ConstantBufferMetaDataManager::allocateConstantBufferContainers(v78, v77);
  Json::Reader::~Reader((Json::Reader *)&v92);
  return Json::Value::~Value((Json::Value *)&v93);
}


int __fastcall mce::RenderContextOGL::clearStencilBuffer(int a1)
{
  int v1; // r4@1
  int result; // r0@2

  v1 = a1;
  if ( *(_DWORD *)(a1 + 232) )
  {
    result = j_j_j__ZNK3mce17FrameBufferObject22clearStencilAttachmentEPKNS_12ViewportInfoE();
  }
  else
    glad_glStencilMask(-1);
    *(_DWORD *)(v1 + 24) = -1;
    result = glad_glClear(1024);
  return result;
}


int __fastcall mce::FrameBufferObjectBase::destroyFrameBuffer(mce::FrameBufferObjectBase *this)
{
  mce::FrameBufferObjectBase *v1; // r4@1
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  __int64 v5; // kr00_8@1
  mce::FrameBufferAttachment **v6; // r5@2
  void *v7; // r0@4
  int result; // r0@6
  int v9; // [sp+0h] [bp-28h]@1
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  mce::FrameBufferDescription::FrameBufferDescription((mce::FrameBufferDescription *)&v9);
  v2 = v10;
  v3 = v11;
  v4 = v12;
  *(_DWORD *)v1 = v9;
  *((_DWORD *)v1 + 1) = v2;
  *((_DWORD *)v1 + 2) = v3;
  *((_DWORD *)v1 + 3) = v4;
  v5 = *((_QWORD *)v1 + 2);
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v6 = (mce::FrameBufferAttachment **)v5;
    do
    {
      if ( *v6 )
      {
        v7 = (void *)mce::FrameBufferAttachment::~FrameBufferAttachment(*v6);
        operator delete(v7);
      }
      *v6 = 0;
      ++v6;
    }
    while ( (mce::FrameBufferAttachment **)HIDWORD(v5) != v6 );
  }
  result = 0;
  *((_DWORD *)v1 + 5) = v5;
  *((_WORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  return result;
}


int __fastcall mce::RenderContextBase::setRenderTarget(int result)
{
  *(_DWORD *)(result + 232) = 0;
  *(_DWORD *)(result + 116) = *(_DWORD *)(result + 248);
  return result;
}


void __fastcall mce::ShaderConstantInt2::~ShaderConstantInt2(mce::ShaderConstantInt2 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall mce::operator<(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VMOV            S2, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


char *__fastcall mce::DeviceInformationBase::getAdapterDescription(mce::DeviceInformationBase *this)
{
  return (char *)this + 8;
}


int __fastcall mce::Math::hermiteBlend(mce::Math *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #-2.0
    VMOV            S2, R0
    VMOV.F32        S4, #3.0
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


int __fastcall mce::TextureHelperOGL::getOpenGLCubemapTargetFromArrayIndex(mce::TextureHelperOGL *this, unsigned int a2)
{
  return dword_262D39C[(signed int)this];
}


int __fastcall mce::RenderMaterial::invalidateTextures(int result)
{
  __int64 v1; // r4@0
  bool v2; // zf@1

  v2 = *(_BYTE *)(result + 64) == 0;
  if ( *(_BYTE *)(result + 64) )
  {
    v1 = *(_QWORD *)(result + 68);
    v2 = (_DWORD)v1 == HIDWORD(v1);
  }
  if ( !v2 )
    do
    {
      result = *(_BYTE *)(v1 + 32);
      if ( *(_BYTE *)(v1 + 32) )
      {
        result = mce::TexturePtr::invalidate((mce::TexturePtr *)(v1 + 8));
        *(_BYTE *)(v1 + 32) = 0;
      }
      LODWORD(v1) = v1 + 36;
    }
    while ( HIDWORD(v1) != (_DWORD)v1 );
  return result;
}


void __fastcall mce::ShaderConstantMatrix3x3::~ShaderConstantMatrix3x3(mce::ShaderConstantMatrix3x3 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall mce::RenderContextBase::lostContext(mce::RenderContextBase *this)
{
  mce::RenderContextBase *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+0h] [bp-30h]@1

  v1 = this;
  mce::ImmediateBuffer::ImmediateBuffer((mce::ImmediateBuffer *)&v3);
  mce::BufferOGL::operator=((int)v1 + 196, (int)&v3);
  mce::BufferOGL::~BufferOGL((mce::BufferOGL *)&v3);
  result = 0;
  *((_DWORD *)v1 + 46) = 0;
  *((_DWORD *)v1 + 47) = 0;
  *((_DWORD *)v1 + 48) = 0;
  return result;
}


int __fastcall mce::RenderStage::RenderStage(int result)
{
  *(_DWORD *)result = &off_26DCCDC;
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 22) = 1;
  *(_DWORD *)(result + 24) = 1;
  return result;
}


int __fastcall mce::TextureContainer::setImage(__int64 this, unsigned int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r3@1
  int v7; // r5@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r5@1

  v2 = HIDWORD(this);
  LODWORD(this) = *(_DWORD *)this + 40 * a2;
  v3 = this;
  j_std::vector<unsigned char,std::allocator<unsigned char>>::operator=(this);
  v4 = v3 + 12;
  v6 = *(_DWORD *)(v2 + 16);
  v7 = *(_DWORD *)(v2 + 20);
  v5 = v2 + 24;
  *(_DWORD *)v4 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = v7;
  v4 += 12;
  v8 = *(_DWORD *)(v2 + 24);
  v9 = *(_DWORD *)(v2 + 28);
  v10 = *(_DWORD *)(v2 + 32);
  v11 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = v9;
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v11;
  return v4 + 16;
}


void __fastcall mce::ShaderConstantBase::~ShaderConstantBase(mce::ShaderConstantBase *this)
{
  mce::ShaderConstantBase::~ShaderConstantBase(this);
}


signed int __fastcall mce::TextureGroup::loadTextures(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r9@1 OVERLAPPED
  int v3; // r8@1
  unsigned __int64 v4; // r4@1
  int v5; // r6@3
  int v6; // r7@4
  bool v7; // zf@5
  int v8; // r4@9
  int v9; // r10@39
  const void **v10; // r5@9
  int v11; // r6@11
  int v12; // r7@12
  __int64 v13; // r0@17
  int v14; // r5@17
  const void **v15; // r6@18
  int v16; // r10@20
  _DWORD *v17; // r4@21
  const void *v18; // r9@21
  size_t v19; // r7@21
  size_t v20; // r11@21
  size_t v21; // r2@21
  int v22; // r0@23
  int *v23; // r4@26
  int v24; // r12@27
  int v25; // r1@27
  int v26; // r2@27
  int v27; // r3@27
  int v28; // r1@27
  __int16 v29; // r1@27
  int v30; // r1@29
  size_t v31; // r2@31
  int v32; // r0@33
  __int64 v33; // r4@40
  int v34; // r1@41
  int i; // r4@44
  __int64 v36; // r4@47
  ResourceLocationPair *v37; // r0@48
  __int64 v38; // r4@50
  int v39; // r6@52
  __int64 v40; // r4@58
  int v41; // r6@60
  int j; // r9@66
  _DWORD *v43; // r4@67
  int v44; // r11@67
  int v45; // r10@67
  int v46; // r6@67
  int v47; // r0@74
  signed int v48; // r7@68
  unsigned int v49; // r8@69
  _DWORD *v50; // r0@69
  unsigned int v51; // r5@69
  size_t v52; // r2@69
  int v53; // r0@71
  int v54; // r11@76
  int v55; // r2@76
  signed int v56; // r6@77
  _DWORD *v57; // r8@78
  _DWORD *v58; // r0@78
  unsigned int v59; // r5@78
  unsigned int v60; // r9@78
  size_t v61; // r2@78
  int v62; // r4@80
  char *v63; // r0@83
  unsigned int *v64; // r1@86
  signed int v65; // r0@88
  unsigned int *v66; // r2@90
  signed int v67; // r1@92
  BackwardsCompatTextureInfo *v68; // r0@103
  bool v69; // r1@103
  int *v70; // r4@107
  signed int v71; // r5@108
  ResourceLocationPair *v72; // r0@108
  mce::TextureGroup *v74; // [sp+8h] [bp-60h]@18
  BackwardsCompatTextureInfo *v75; // [sp+10h] [bp-58h]@76
  int v76; // [sp+14h] [bp-54h]@76
  const void **v77; // [sp+1Ch] [bp-4Ch]@18
  int v78; // [sp+1Ch] [bp-4Ch]@67
  __int64 v79; // [sp+20h] [bp-48h]@18
  __int64 v80; // [sp+28h] [bp-40h]@18
  int *v81; // [sp+28h] [bp-40h]@76
  int v82; // [sp+2Ch] [bp-3Ch]@67
  signed int v83; // [sp+2Ch] [bp-3Ch]@78
  int *v84; // [sp+30h] [bp-38h]@17
  int *v85; // [sp+34h] [bp-34h]@17
  int *v86; // [sp+38h] [bp-30h]@17
  void *s2; // [sp+3Ch] [bp-2Ch]@78

  v2 = a2;
  v3 = a1;
  mce::TextureGroup::unloadFileSystem(a1, 2);
  v4 = *v2;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    sub_144F49C(v4, SHIDWORD(v4), 2 * (31 - __clz((HIDWORD(v4) - (signed int)v4) >> 6)), 0);
    if ( HIDWORD(v4) - (signed int)v4 <= 1024 )
    {
      sub_144FDAC((const void **)v4, (const void **)HIDWORD(v4));
    }
    else
      v5 = v4 + 1024;
      sub_144FDAC((const void **)v4, (const void **)(v4 + 1024));
      if ( (_DWORD)v4 + 1024 != HIDWORD(v4) )
      {
        v6 = HIDWORD(v4) - 1024;
        do
        {
          HIDWORD(v4) &= 0xFFFFFF00;
          sub_144FFC8(v5);
          v5 = v4 + 1088;
          v7 = v6 == (_DWORD)v4 + 64;
          LODWORD(v4) = v4 + 64;
        }
        while ( !v7 );
      }
  }
  v8 = *(_DWORD *)(v3 + 24);
  v10 = *(const void ***)(v3 + 28);
  if ( (const void **)v8 != v10 )
    sub_144F49C(*(_DWORD *)(v3 + 24), *(_DWORD *)(v3 + 28), 2 * (31 - __clz(((signed int)v10 - v8) >> 6)), 0);
    if ( (signed int)v10 - v8 <= 1024 )
      sub_144FDAC((const void **)v8, v10);
      v11 = v8 + 1024;
      sub_144FDAC((const void **)v8, (const void **)(v8 + 1024));
      if ( (const void **)(v8 + 1024) != v10 )
        v12 = (int)(v10 - 256);
          v10 = (const void **)((unsigned int)v10 & 0xFFFFFF00);
          sub_144FFC8(v11);
          v11 = v8 + 1088;
          v7 = v12 == v8 + 64;
          v8 += 64;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  LODWORD(v13) = *(_QWORD *)(v3 + 24) >> 32;
  v14 = *(_QWORD *)(v3 + 24);
  if ( v14 == (_DWORD)v13 )
    LODWORD(v80) = *(_QWORD *)(v3 + 24) >> 32;
    v9 = v3 + 24;
    v79 = *(_QWORD *)&v2;
    v74 = (mce::TextureGroup *)v3;
  else
    HIDWORD(v79) = v3 + 24;
    v15 = (const void **)*v2;
    v77 = (const void **)(*v2 >> 32);
    LODWORD(v79) = v2;
    HIDWORD(v13) = -(signed int)v13;
    v80 = v13;
    do
      if ( v15 == v77 )
        break;
      v16 = v14 + 64;
      while ( 1 )
        v17 = *(_DWORD **)(v16 - 64);
        v18 = *v15;
        v19 = *(v17 - 3);
        v20 = *((_DWORD *)*v15 - 3);
        v21 = *(v17 - 3);
        if ( v19 > v20 )
          v21 = *((_DWORD *)*v15 - 3);
        v22 = memcmp(*(const void **)(v16 - 64), *v15, v21);
        if ( !v22 )
          v22 = v19 - v20;
        if ( v22 > -1 )
          break;
        v23 = v85;
        if ( v85 == v86 )
          std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>::_M_emplace_back_aux<ResourceLocationPair const&>(
            (unsigned __int64 *)&v84,
            v16 - 64);
        else
          sub_21E8AF4(v85, (int *)(v16 - 64));
          v23[1] = *(_DWORD *)(v16 - 60);
          v24 = (int)(v23 + 2);
          v25 = *(_DWORD *)(v16 - 52);
          v26 = *(_DWORD *)(v16 - 48);
          v27 = *(_DWORD *)(v16 - 44);
          *(_DWORD *)v24 = *(_DWORD *)(v16 - 56);
          *(_DWORD *)(v24 + 4) = v25;
          *(_DWORD *)(v24 + 8) = v26;
          *(_DWORD *)(v24 + 12) = v27;
          v28 = *(_DWORD *)(v16 - 40);
          *((_WORD *)v23 + 14) = *(_WORD *)(v16 - 36);
          v23[6] = v28;
          sub_21E8AF4(v23 + 8, (int *)(v16 - 32));
          sub_21E8AF4(v23 + 9, (int *)(v16 - 28));
          sub_21E8AF4(v23 + 10, (int *)(v16 - 24));
          v29 = *(_WORD *)(v16 - 20);
          *((_BYTE *)v23 + 46) = *(_BYTE *)(v16 - 18);
          *((_WORD *)v23 + 22) = v29;
          *((_BYTE *)v23 + 48) = *(_BYTE *)(v16 - 16);
          v23[14] = *(_DWORD *)(v16 - 8);
          v85 += 16;
        v14 = v16;
        v30 = HIDWORD(v80) + v16 + 64;
        v16 += 64;
        if ( v30 == 64 )
          goto LABEL_40;
      v31 = v20;
      if ( v20 > v19 )
        v31 = v19;
      v32 = memcmp(v18, v17, v31);
      v15 += 16;
      if ( !v32 )
        v32 = v20 - v19;
      if ( v32 >= 0 )
    while ( v14 != (_DWORD)v80 );
LABEL_40:
  std::copy<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,std::back_insert_iterator<std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>>(
    v14,
    v80,
    (int)&v84);
  v33 = *(_QWORD *)&v84;
  if ( v84 != v85 )
      mce::TextureGroup::unloadTexture(v74, (const ResourceLocation *)v33);
      v34 = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocationPair const>>(
              *((_QWORD *)v74 + 3),
              *((_QWORD *)v74 + 3) >> 32,
              v33);
      if ( v34 != *((_DWORD *)v74 + 7) )
        std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>::_M_erase(SHIDWORD(v79), v34);
      LODWORD(v33) = v33 + 64;
    while ( HIDWORD(v33) != (_DWORD)v33 );
  for ( i = *((_DWORD *)v74 + 11); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(i + 4) + 8))();
  v36 = *(_QWORD *)&v84;
  if ( v85 != v84 )
    v37 = (ResourceLocationPair *)v84;
      v37 = (ResourceLocationPair *)((char *)ResourceLocationPair::~ResourceLocationPair(v37) + 64);
    while ( (ResourceLocationPair *)HIDWORD(v36) != v37 );
  v85 = (int *)v36;
  v38 = *(_QWORD *)v79;
  if ( (_DWORD)v38 != HIDWORD(v38) )
    std::__introsort_loop<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
      v38,
      (const void **)HIDWORD(v38),
      2 * (31 - __clz((HIDWORD(v38) - (signed int)v38) >> 6)));
    if ( HIDWORD(v38) - (signed int)v38 <= 1024 )
      std::__insertion_sort<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__ops::_Iter_less_iter>(
        (const void **)v38,
        (const void **)HIDWORD(v38));
      v39 = v38 + 1024;
        (const void **)(v38 + 1024));
      if ( (_DWORD)v38 + 1024 != HIDWORD(v38) )
        HIDWORD(v38) -= 1024;
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__ops::_Val_less_iter>(v39);
          v39 = v38 + 1088;
          v7 = HIDWORD(v38) == (_DWORD)v38 + 64;
          LODWORD(v38) = v38 + 64;
  v40 = *((_QWORD *)v74 + 3);
  if ( (_DWORD)v40 != HIDWORD(v40) )
      v40,
      (const void **)HIDWORD(v40),
      2 * (31 - __clz((HIDWORD(v40) - (signed int)v40) >> 6)));
    if ( HIDWORD(v40) - (signed int)v40 <= 1024 )
        (const void **)v40,
        (const void **)HIDWORD(v40));
      v41 = v40 + 1024;
        (const void **)(v40 + 1024));
      if ( (_DWORD)v40 + 1024 != HIDWORD(v40) )
        HIDWORD(v40) -= 1024;
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__ops::_Val_less_iter>(v41);
          v41 = v40 + 1088;
          v7 = HIDWORD(v40) == (_DWORD)v40 + 64;
          LODWORD(v40) = v40 + 64;
  std::__set_difference<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,std::back_insert_iterator<std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__ops::_Iter_less_iter>(
    *(_QWORD *)v79,
    *(_QWORD *)v79 >> 32,
    (const void **)*((_QWORD *)v74 + 3),
    (const void **)(*((_QWORD *)v74 + 3) >> 32),
  for ( j = *((_DWORD *)v74 + 26); j; j = *(_DWORD *)j )
    v43 = *(_DWORD **)(j + 4);
    v44 = *(_DWORD *)(v79 + 4);
    v78 = *(_DWORD *)v79;
    v45 = *(_DWORD *)v79;
    v46 = (v44 - *(_DWORD *)v79) >> 6;
    v82 = (v44 - *(_DWORD *)v79) >> 6;
    while ( 1 )
      v48 = v46;
      if ( v46 < 1 )
      v46 >>= 1;
      v49 = *(v43 - 3);
      v50 = *(_DWORD **)(v45 + (v48 >> 1 << 6));
      v51 = *(v50 - 3);
      v52 = *(v50 - 3);
      if ( v51 > v49 )
        v52 = *(v43 - 3);
      v53 = memcmp(v50, v43, v52);
      if ( !v53 )
        v53 = v51 - v49;
      if ( v53 <= -1 )
        v47 = v45 + (v46 << 6);
        v46 = v48 - 1 - v46;
        v45 = v47 + 64;
    if ( v45 != v44 )
      v75 = (BackwardsCompatTextureInfo *)(j + 12);
      v76 = j;
      v81 = (int *)BackwardsCompatTextureInfo::getTexturePath((BackwardsCompatTextureInfo *)(j + 12));
      v54 = v78;
      v55 = v82;
        v56 = v55;
        if ( v55 < 1 )
        sub_21E8AF4((int *)&s2, v81);
        v57 = s2;
        s2 = &unk_28898CC;
        v83 = v56 >> 1;
        v58 = *(_DWORD **)(v54 + (v56 >> 1 << 6));
        v59 = *(v58 - 3);
        v60 = *(v57 - 3);
        v61 = *(v58 - 3);
        if ( v59 > v60 )
          v61 = *(v57 - 3);
        v62 = memcmp(v58, v57, v61);
        if ( !v62 )
          v62 = v59 - v60;
        if ( v57 - 3 != &dword_28898C0 )
          v64 = v57 - 1;
          if ( &pthread_create )
          {
            __dmb();
            do
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
          }
          else
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v57 - 3);
        v63 = (char *)s2 - 12;
        if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
          v66 = (unsigned int *)((char *)s2 - 4);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j__ZdlPv_9(v63);
        v55 = v56 >> 1;
        if ( v62 <= -1 )
          v55 = v56 - 1 - v83;
          v54 += (v83 << 6) + 64;
      if ( v54 == *(_DWORD *)(v79 + 4) || *(_DWORD *)(v54 + 56) >= *(_DWORD *)(v45 + 56) )
        v68 = v75;
        v69 = 0;
      else
        v69 = 1;
      BackwardsCompatTextureInfo::_setCanUse(v68, v69);
      j = v76;
  v70 = v84;
  if ( v84 == v85 )
    v71 = 0;
    v71 = 1;
    mce::TextureGroup::loadListAsync((int)v74, 1, (unsigned __int64 *)&v84, 1);
    v70 = v85;
    v72 = (ResourceLocationPair *)v84;
    if ( v84 != v85 )
      do
        v72 = (ResourceLocationPair *)((char *)ResourceLocationPair::~ResourceLocationPair(v72) + 64);
      while ( (ResourceLocationPair *)v70 != v72 );
      v70 = v84;
      v71 = 1;
  if ( v70 )
    operator delete(v70);
  return v71;
}


signed int __fastcall mce::RenderMaterial::hasDefine(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r8@1
  int v4; // r1@1
  int v5; // r9@1
  int v6; // r7@1
  const void *v7; // r5@2
  int v8; // r10@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r6@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  signed int result; // r0@20

  v2 = a1 + 12;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = a1 + 12;
  v6 = a1 + 12;
  if ( v4 )
  {
    v7 = *v3;
    v8 = a1 + 12;
    v9 = *((_DWORD *)*v3 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 != v2 )
    v14 = *(_DWORD **)(v6 + 16);
    v15 = *((_DWORD *)*v3 - 3);
    v16 = *(v14 - 3);
    v17 = *((_DWORD *)*v3 - 3);
    if ( v15 > v16 )
      v17 = *(v14 - 3);
    v18 = memcmp(*v3, v14, v17);
    if ( !v18 )
      v18 = v15 - v16;
    if ( v18 < 0 )
      v6 = v2;
    v5 = v6;
  result = 0;
  if ( v5 != v2 )
    result = 1;
  return result;
}


mce::FrameBufferAttachmentBase *__fastcall mce::RenderContextOGL::clearDepthStencilBuffer(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  mce::FrameBufferAttachmentBase *result; // r0@2

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 232);
  if ( v3 )
  {
    result = j_j_j__ZNK3mce17FrameBufferObject27clearDepthStencilAttachmentEPKNS_12ViewportInfoE_0(v3, a2);
  }
  else
    glad_glClearDepthf(1065353216);
    glad_glDepthMask(1);
    glad_glStencilMask(-1);
    *(_BYTE *)(v2 + 19) = 1;
    *(_DWORD *)(v2 + 24) = -1;
    result = (mce::FrameBufferAttachmentBase *)glad_glClear(1280);
  return result;
}


signed int __fastcall mce::Mesh::isValid(mce::Mesh *this)
{
  mce::Mesh *v1; // r4@1
  signed int result; // r0@4

  v1 = this;
  if ( mce::Buffer::isValid(this) == 1 && *((_DWORD *)v1 + 21) || *((_DWORD *)v1 + 19) )
    result = mce::VertexFormat::isValid((mce::Mesh *)((char *)v1 + 64));
  else
    result = 0;
  return result;
}


int __fastcall mce::ShaderOGL::bindShader(mce::ShaderOGL *this, mce::RenderContext *a2, const mce::VertexFormat *a3, void *a4, unsigned int a5)
{
  mce::RenderContext *v5; // r11@1
  mce::ShaderOGL *v6; // r5@1
  int v7; // r10@1
  void *v8; // r8@1
  int v9; // r9@1
  const mce::VertexFormat *v10; // r7@1
  __int64 v11; // r0@3
  unsigned int v12; // r2@4
  int v13; // r6@5
  unsigned int v14; // r7@5
  int **v15; // r3@5
  int v16; // r4@9
  int v17; // r6@12
  int v18; // r8@16
  mce::ShaderUniformOGL *v19; // r5@19
  mce::ShaderUniformOGL *i; // r6@19
  __int64 v21; // kr00_8@19
  int v22; // r1@20
  const char *v23; // r0@25

  v5 = a2;
  v6 = this;
  v7 = *((_DWORD *)this + 5);
  v8 = a4;
  v9 = *((_DWORD *)a2 + 69);
  v10 = a3;
  if ( v9 != v7 )
  {
    glad_glUseProgram(*((_DWORD *)this + 5));
    *((_DWORD *)v5 + 69) = *((_DWORD *)v6 + 5);
  }
  mce::ShaderOGL::bindVertexPointers(v6, v10, v8);
  v11 = *(_QWORD *)((char *)v6 + 36);
  if ( (HIDWORD(v11) - (signed int)v11) >> 4 )
    v12 = (HIDWORD(v11) - (signed int)v11) >> 4;
    if ( v9 != v7 )
    {
      v13 = 0;
      v14 = 0;
      v15 = glad_glUniform1i_ptr;
      while ( 1 )
      {
        if ( v12 <= v14 )
          goto LABEL_24;
        if ( *(_BYTE *)(v11 + v13 + 9) )
        {
          if ( v14 > 7 )
          {
            v23 = "array::at: __n (which is %zu) >= _Nm (which is %zu)";
            goto LABEL_27;
          }
          v16 = (int)v5 + 8 * v14;
          glad_glUniform1i(*(_DWORD *)(v11 + v13), *(_DWORD *)(v16 + 288));
          *(_BYTE *)(v16 + 292) = 0;
          v11 = *(_QWORD *)((char *)v6 + 36);
        }
        v15 = (int **)(HIDWORD(v11) - v11);
        ++v14;
        v13 += 16;
        v12 = (HIDWORD(v11) - (signed int)v11) >> 4;
        if ( v14 == v12 )
          goto LABEL_19;
      }
    }
    v17 = 0;
    v14 = 0;
    v15 = glad_glUniform1i_ptr;
    do
      if ( v12 <= v14 )
LABEL_24:
        sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v14, v12, (int)v15);
      if ( *(_BYTE *)(v11 + v17 + 9) )
        if ( v14 >= 8 )
          v23 = "array::at: __n (which is %zu) >= _Nm (which is %zu)";
LABEL_27:
          sub_21E5B04(v23, v14, 8, (int)v15);
        v18 = (int)v5 + 8 * v14;
        if ( *(_BYTE *)(v18 + 292) )
          glad_glUniform1i(*(_DWORD *)(v11 + v17), *(_DWORD *)(v18 + 288));
          *(_BYTE *)(v18 + 292) = 0;
      v15 = (int **)(HIDWORD(v11) - v11);
      ++v14;
      v17 += 16;
      v12 = (HIDWORD(v11) - (signed int)v11) >> 4;
    while ( v14 != v12 );
LABEL_19:
  v21 = *((_QWORD *)v6 + 3);
  v19 = (mce::ShaderUniformOGL *)(*((_QWORD *)v6 + 3) >> 32);
  for ( i = (mce::ShaderUniformOGL *)v21; v19 != i; i = (mce::ShaderUniformOGL *)((char *)i + 24) )
    v22 = 0;
      v22 = 1;
    LODWORD(v11) = mce::ShaderUniformOGL::bind(i, v22);
  return v11;
}


mce::DeviceInformationBase *__fastcall mce::RenderDeviceBase::~RenderDeviceBase(mce::RenderDeviceBase *this)
{
  mce::RenderDeviceBase *v1; // r4@1
  mce::RenderContext *v2; // r0@1
  void *v3; // r0@2
  void **v4; // r5@3 OVERLAPPED
  void **v5; // r6@3 OVERLAPPED

  v1 = this;
  v2 = (mce::RenderContext *)*((_DWORD *)this + 21);
  if ( v2 )
  {
    v3 = (void *)mce::RenderContext::~RenderContext(v2);
    operator delete(v3);
  }
  *((_DWORD *)v1 + 21) = 0;
  *(_QWORD *)&v4 = *((_QWORD *)v1 + 9);
  if ( v4 != v5 )
    do
    {
      if ( *v4 )
        operator delete(*v4);
      v4 += 3;
    }
    while ( v5 != v4 );
    v4 = (void **)*((_DWORD *)v1 + 18);
  if ( v4 )
    operator delete(v4);
  return j_j_j__ZN3mce21DeviceInformationBaseD2Ev(v1);
}


int __fastcall mce::ShaderOGL::bindVertexPointers(mce::ShaderOGL *this, const mce::VertexFormat *a2, void *a3)
{
  int result; // r0@1
  __int64 v4; // kr00_8@1
  int i; // r7@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // r11@11
  int v9; // r0@11
  int v10; // r9@11
  char v11; // r6@11
  int v12; // ST24_4@11
  int v13; // r10@11
  void (__fastcall *v14)(int, int, int, int); // r5@11
  void *v15; // r0@11
  mce::ShaderOGL *v16; // [sp+18h] [bp-40h]@1
  mce::VertexFormat *v17; // [sp+1Ch] [bp-3Ch]@1
  void *v18; // [sp+20h] [bp-38h]@1
  int v19; // [sp+2Ch] [bp-2Ch]@3

  v16 = this;
  v17 = a2;
  v18 = a3;
  v4 = *(_QWORD *)mce::RenderDeviceBase::getAttributeList(mce::Singleton<mce::RenderDevice>::mInstance, *(_DWORD *)this);
  result = HIDWORD(v4);
  for ( i = v4; i != HIDWORD(v4); result = HIDWORD(v4) )
  {
    v8 = mce::Attribute::getVertexField(i);
    sub_21E94B4(
      (void **)&v19,
      "Attempted to render a mesh missing an attribute requested from its shader. Specified vertex format is missing field: \"");
    v9 = (int)v16 + 12 * v8;
    v10 = *(_DWORD *)(v9 + 56);
    v11 = *(_BYTE *)(v9 + 60);
    v12 = *(_DWORD *)(v9 + 52);
    v13 = mce::Attribute::getLocation(i);
    v14 = (void (__fastcall *)(int, int, int, int))glad_glVertexAttribPointer;
    mce::VertexFormat::getVertexSize(v17);
    mce::VertexFormat::getFieldOffset((int)v17, v8, (int)v18);
    v14(v13, v10, v12, v11 & 1);
    v15 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v15);
    }
    i += 12;
  }
  return result;
}


unsigned int __fastcall mce::TextureContainer::getImage(mce::TextureContainer *this, unsigned int a2)
{
  return *(_DWORD *)this + 40 * a2;
}


char *__fastcall mce::Mesh::getVertexFormat(mce::Mesh *this)
{
  return (char *)this + 64;
}


int __fastcall mce::QuadIndexBuffer::getGlobalQuadBuffer(mce::QuadIndexBuffer *this, mce::RenderContext *a2, unsigned int a3)
{
  mce::QuadIndexBuffer *v3; // r10@1
  mce::RenderContext *v4; // r9@1
  unsigned int v5; // r0@1
  char v6; // r1@3
  int v7; // r0@5
  unsigned int v8; // r6@5
  int v9; // r8@5
  int v10; // r5@5
  int v11; // r4@5
  unsigned int v12; // r1@5
  unsigned int v13; // r0@5
  int v14; // r4@7
  void *v15; // r7@7
  int v16; // r6@8
  int v17; // r4@10
  void *v18; // r7@10
  unsigned int v19; // r0@13
  __int16 v20; // r1@13
  unsigned int v21; // r0@20
  int v22; // r1@21
  int v23; // r2@21
  int v24; // r3@21
  int v25; // r4@21
  __int64 v26; // r1@23 OVERLAPPED
  int v27; // r3@23
  unsigned int v28; // r5@24
  const void *v30; // [sp+4h] [bp-24h]@5

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 10);
  if ( v5 >= a3 )
  {
    v16 = (int)v3 + 8;
  }
  else
    do
      v5 *= 2;
    while ( v5 < a3 );
    v6 = 4;
    *((_DWORD *)v3 + 10) = v5;
    if ( v5 < 0x10000 )
      v6 = 2;
    *((_BYTE *)v3 + 44) = v6;
    mce::RenderContext::getDevice(v4);
    v7 = mce::RenderDevice::checkFeatureSupport();
    v8 = *((_DWORD *)v3 + 10);
    v9 = v7;
    v10 = 0;
    v11 = *((_BYTE *)v3 + 44);
    v30 = 0;
    v13 = mce::PolygonHelper::calculateIndexCountForQuads(*((mce::PolygonHelper **)v3 + 10), v12);
    if ( v11 == 2 )
    {
      if ( 0 == 2 * v13 )
      {
        v15 = 0;
      }
      else
        v14 = 2 * v13;
        v15 = operator new(2 * v13);
        _aeabi_memclr(v15, v14);
        v10 = (int)v15 + v14;
        v30 = v15;
      if ( v8 )
        LOWORD(v19) = 0;
        v20 = 0;
        if ( v9 == 1 )
        {
          do
          {
            *(_WORD *)v15 = v20;
            *((_WORD *)v15 + 1) = v19 + 1;
            *((_WORD *)v15 + 2) = v19 + 2;
            *((_WORD *)v15 + 3) = v19 + 3;
            v20 = v19 + 4;
            v15 = (char *)v15 + 8;
            v19 = (unsigned __int16)(v19 + 4);
          }
          while ( v19 < v8 );
        }
        else
            *(_WORD *)v15 = v19 + 1;
            *((_WORD *)v15 + 1) = v19 + 2;
            *((_WORD *)v15 + 2) = v20;
            *((_WORD *)v15 + 3) = v20;
            *((_WORD *)v15 + 4) = v19 + 2;
            *((_WORD *)v15 + 5) = v19 + 3;
            v15 = (char *)v15 + 12;
    }
    else
      if ( 0 == 4 * v13 )
        v18 = 0;
        v17 = 4 * v13;
        v18 = operator new(4 * v13);
        _aeabi_memclr(v18, v17);
        v10 = (int)v18 + v17;
        v30 = v18;
        v21 = 0;
            v22 = (int)v18 + 4 * v21;
            *((_DWORD *)v18 + v21) = v21;
            v23 = v21 + 1;
            v24 = v21 + 2;
            v25 = v21 + 3;
            v21 += 4;
            v22 += 4;
            *(_DWORD *)v22 = v23;
            *(_DWORD *)(v22 + 4) = v24;
            *(_DWORD *)(v22 + 8) = v25;
          while ( v21 < v8 );
            HIDWORD(v26) = v21 + 2;
            v27 = v21 + 3;
            LODWORD(v26) = v21 + 1;
            *(_QWORD *)v18 = v26;
            *((_DWORD *)v18 + 2) = v21;
            *((_DWORD *)v18 + 3) = v21;
            *((_QWORD *)v18 + 2) = *(__int64 *)((char *)&v26 + 4);
            v18 = (char *)v18 + 24;
    v28 = (v10 - (signed int)v30) / (unsigned int)*((_BYTE *)v3 + 44);
    mce::Buffer::createDynamicIndexBuffer((mce::QuadIndexBuffer *)((char *)v3 + 8), v4, *((_BYTE *)v3 + 44), v28);
    mce::Buffer::updateBuffer((mce::QuadIndexBuffer *)((char *)v3 + 8), v4, *((_BYTE *)v3 + 44), v30, v28);
    if ( v30 )
      operator delete((void *)v30);
  return v16;
}


signed int __fastcall mce::ConstantBufferConstantsBase::sync(mce::ConstantBufferConstantsBase *this, mce::RenderContext *a2)
{
  return j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(
           *((mce::ConstantBufferContainer **)this + 1),
           a2);
}


signed int __fastcall mce::ImageDescription::getStrideFromFormat(signed int a1)
{
  if ( a1 <= 76 )
  {
    if ( a1 > 34 )
    {
      if ( (unsigned int)(a1 - 61) < 2 )
        return 1;
      if ( a1 != 35 )
        return 0;
    }
    else if ( (unsigned int)(a1 - 28) >= 2 )
      if ( a1 == 11 )
        return 8;
      return 0;
    return 4;
  }
  if ( a1 <= 90 )
    if ( a1 != 77 )
      if ( a1 != 87 )
      return 4;
  else
    if ( a1 == 91 )
    if ( a1 != 98 )
      if ( a1 == 116 )
        return 3;
  return 4;
}


int __fastcall mce::Clock::update(int result, float _R1, float _R2)
{
  __asm { VMOV            S0, R2 }
  if ( *(_BYTE *)(result + 20) )
  {
    __asm { VLDR            S2, =0.0 }
  }
  else
    __asm
    {
      VMOV            S2, R1
      VLDR            S4, [R0,#0x10]
      VMUL.F32        S2, S4, S2
    }
  __asm
    VMUL.F32        S4, S2, S2
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VLDR            S4, [R0]
    VADD.F32        S2, S4, S2
    VSTR            S2, [R0]
    VSTR            S0, [R0,#0xC]
  return result;
}


int __fastcall mce::GlobalConstantBuffers::~GlobalConstantBuffers(mce::GlobalConstantBuffers *this)
{
  mce::GlobalConstantBuffers *v1; // r4@1

  v1 = this;
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)this + 736));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 720));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 684));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 668));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 628));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 616));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 588));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 548));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 516));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 36));
  mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::GlobalConstantBuffers *)((char *)v1 + 12));
  return j_j_j__ZN3mce27ConstantBufferConstantsBaseD2Ev(v1);
}


unsigned int __fastcall mce::ConstantBufferMetaData::getUniformMetaDataByIndex(mce::ConstantBufferMetaData *this, unsigned int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@1
  unsigned int result; // r0@1

  v2 = *(_QWORD *)((char *)this + 4);
  v3 = -858993459 * ((signed int)((*(_QWORD *)((char *)this + 4) >> 32) - v2) >> 2);
  result = 0;
  if ( v3 > a2 )
    result = v2 + 20 * a2;
  return result;
}


void __fastcall mce::RenderMaterial::loadShader(mce::RenderMaterial *this, mce::ShaderGroup *a2)
{
  mce::ShaderGroup *v2; // r5@1
  mce::RenderMaterial *v3; // r4@1
  int v4; // r0@3
  __int64 v5; // r6@7
  int v6; // t1@8

  v2 = a2;
  v3 = this;
  EntityInteraction::setInteractText((int *)a2 + 2, (int *)this);
  if ( *(_DWORD *)(*((_DWORD *)v3 + 10) - 12) )
  {
    if ( *(_DWORD *)(*((_DWORD *)v3 + 11) - 12) )
      v4 = mce::ShaderGroup::loadShader((int)v2, (int *)v3 + 9, (int *)v3 + 10, (int *)v3 + 11, (int *)v3 + 12);
    else
      v4 = 0;
  }
  else
    v4 = 0;
  if ( v4 != *((_DWORD *)v3 + 15) )
    *((_DWORD *)v3 + 15) = v4;
    v5 = *(_QWORD *)((char *)v3 + 444);
    while ( HIDWORD(v5) != (_DWORD)v5 )
    {
      v6 = *(_BYTE *)v5;
      LODWORD(v5) = v5 + 1;
      mce::VertexFormat::enableField((_BYTE *)v3 + 456, v6);
    }
    j_j_j__ZNK3mce14RenderMaterial10createPSOsEv(v3);
}


mce::BufferOGL *__fastcall mce::BufferOGL::~BufferOGL(mce::BufferOGL *this)
{
  mce::BufferOGL *v1; // r4@1

  v1 = this;
  if ( *((_DWORD *)this + 5) )
  {
    glad_glDeleteBuffers(1, (char *)this + 20);
    *((_DWORD *)v1 + 5) = 0;
    *((_DWORD *)v1 + 6) = 0;
    mce::BufferBase::releaseBuffer(v1);
  }
  mce::BufferBase::~BufferBase(v1);
  return v1;
}


mce::ConstantBufferContainer *__fastcall mce::GlobalConstantBufferManager::findConstantBufferContainer(unsigned __int64 *a1, const void **a2)
{
  int v2; // r5@1
  mce::ConstantBufferContainer *v3; // r9@1
  const void **v4; // r4@1
  int v5; // r0@1
  int v6; // r7@2
  const void *v7; // r1@3
  size_t v8; // r2@3
  mce::ConstantBufferContainer *v9; // r6@4
  _DWORD *v10; // r1@5
  size_t v11; // r2@5
  _DWORD *v12; // r1@7
  size_t v13; // r2@7
  _DWORD *v14; // r1@9
  size_t v15; // r2@9
  int v16; // r0@12
  const void *v17; // r1@17
  size_t v18; // r2@17
  const void *v19; // r1@20
  size_t v20; // r2@20
  const void *v21; // r1@23
  size_t v22; // r2@23

  v3 = (mce::ConstantBufferContainer *)(*a1 >> 32);
  v2 = *a1;
  v4 = a2;
  v5 = -1171354717 * (((signed int)v3 - v2) >> 2) >> 2;
  if ( v5 < 1 )
  {
LABEL_12:
    v16 = -1171354717 * (((signed int)v3 - v2) >> 2);
    if ( v16 == 1 )
    {
      v9 = (mce::ConstantBufferContainer *)v2;
    }
    else
      if ( v16 == 3 )
      {
        v17 = *(const void **)mce::ConstantBufferContainer::getConstantBufferName((mce::ConstantBufferContainer *)v2);
        v18 = *((_DWORD *)*v4 - 3);
        if ( v18 == *((_DWORD *)v17 - 3) )
        {
          v9 = (mce::ConstantBufferContainer *)v2;
          if ( !memcmp(*v4, v17, v18) )
            return v9;
        }
        v2 += 44;
      }
      else if ( v16 != 2 )
        return v3;
      v19 = *(const void **)mce::ConstantBufferContainer::getConstantBufferName((mce::ConstantBufferContainer *)v2);
      v20 = *((_DWORD *)*v4 - 3);
      if ( v20 == *((_DWORD *)v19 - 3) )
        v9 = (mce::ConstantBufferContainer *)v2;
        if ( !memcmp(*v4, v19, v20) )
          return v9;
      v9 = (mce::ConstantBufferContainer *)(v2 + 44);
    v21 = *(const void **)mce::ConstantBufferContainer::getConstantBufferName(v9);
    v22 = *((_DWORD *)*v4 - 3);
    if ( v22 == *((_DWORD *)v21 - 3) )
      if ( memcmp(*v4, v21, v22) )
        v9 = v3;
      return v9;
    return v3;
  }
  v6 = v5 + 1;
  while ( 1 )
    v7 = *(const void **)mce::ConstantBufferContainer::getConstantBufferName((mce::ConstantBufferContainer *)v2);
    v8 = *((_DWORD *)*v4 - 3);
    if ( v8 == *((_DWORD *)v7 - 3) )
      if ( !memcmp(*v4, v7, v8) )
        return v9;
    v9 = (mce::ConstantBufferContainer *)(v2 + 44);
    v10 = *(_DWORD **)mce::ConstantBufferContainer::getConstantBufferName((mce::ConstantBufferContainer *)(v2 + 44));
    v11 = *((_DWORD *)*v4 - 3);
    if ( v11 == *(v10 - 3) && !memcmp(*v4, v10, v11) )
    v9 = (mce::ConstantBufferContainer *)(v2 + 88);
    v12 = *(_DWORD **)mce::ConstantBufferContainer::getConstantBufferName((mce::ConstantBufferContainer *)(v2 + 88));
    v13 = *((_DWORD *)*v4 - 3);
    if ( v13 == *(v12 - 3) && !memcmp(*v4, v12, v13) )
    v9 = (mce::ConstantBufferContainer *)(v2 + 132);
    v14 = *(_DWORD **)mce::ConstantBufferContainer::getConstantBufferName((mce::ConstantBufferContainer *)(v2 + 132));
    v15 = *((_DWORD *)*v4 - 3);
    if ( v15 == *(v14 - 3) && !memcmp(*v4, v14, v15) )
    --v6;
    v2 += 176;
    if ( v6 <= 1 )
      goto LABEL_12;
}


char *__fastcall mce::RenderMaterial::getDefines(mce::RenderMaterial *this)
{
  return (char *)this + 8;
}


int __fastcall mce::ShaderConstantMatrix4x4::syncUniform(mce::ShaderConstantMatrix4x4 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniformMatrix4fv(a2, a3, 0, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


char *__fastcall mce::ShaderOGL::reflectShader(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r4@1

  v1 = this;
  mce::ShaderOGL::reflectShaderUniforms(this);
  return j_j_j__ZN3mce9ShaderOGL24refelectShaderAttributesEv(v1);
}


signed int __fastcall mce::TextureContainer::isEmpty(mce::TextureContainer *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall mce::ShaderGroup::onAppSuspended(mce::ShaderGroup *this)
{
  mce::ShaderGroup *v1; // r9@1
  __int64 v2; // r4@1
  mce::Shader **v3; // r7@2
  void *v4; // r0@4
  int v5; // r7@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // r6@16
  mce::ShaderProgram *v9; // r0@16
  void *v10; // r0@17
  int v11; // r1@18
  void *v12; // r0@18

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 12);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (mce::Shader **)v2;
    do
    {
      if ( *v3 )
      {
        v4 = (void *)mce::Shader::~Shader(*v3);
        operator delete(v4);
      }
      *v3 = 0;
      ++v3;
    }
    while ( (mce::Shader **)HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 4) = v2;
  v5 = *((_DWORD *)v1 + 8);
  while ( v5 )
    v8 = v5;
    v9 = *(mce::ShaderProgram **)(v5 + 8);
    v5 = *(_DWORD *)v5;
    if ( v9 )
      v10 = (void *)mce::ShaderProgram::~ShaderProgram(v9);
      operator delete(v10);
    *(_DWORD *)(v8 + 8) = 0;
    v11 = *(_DWORD *)(v8 + 4);
    v12 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    operator delete((void *)v8);
  _aeabi_memclr4(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  return mce::Shader::resetLastProgram(0);
}


mce::ConstantBufferContainerBase *__fastcall mce::ConstantBufferContainerBase::ConstantBufferContainerBase(mce::ConstantBufferContainerBase *this)
{
  mce::ConstantBufferContainerBase *v1; // r4@1

  v1 = this;
  _aeabi_memclr4(this, 36);
  *((_DWORD *)v1 + 9) = &unk_28898CC;
  *((_BYTE *)v1 + 40) = 0;
  return v1;
}


char *__fastcall mce::TextureContainer::getRawImage(mce::TextureContainer *this)
{
  return (char *)this + 12;
}


int __fastcall mce::RenderStageWithDefaultBackBuffer::preRender(int a1, int a2)
{
  int v2; // r4@1

  v2 = a2;
  mce::RenderStage::preRender(a1);
  return j_j_j__ZN3mce13RenderContext15setRenderTargetEv(*(mce::RenderContext **)(v2 + 12));
}


void __fastcall mce::_loadShaderInclude(int *a1)
{
  mce::_loadShaderInclude(a1);
}


unsigned int __fastcall mce::TextureOGL::subBuffer(mce::TextureOGL *this, mce::RenderContext *a2, const void *a3, unsigned int a4, mce::TextureHelperOGL *a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
  unsigned int v9; // r4@1
  mce::TextureOGL *v10; // r5@1
  int v11; // r1@1
  unsigned int result; // r0@2
  int (__fastcall *v13)(int, unsigned int, unsigned int, mce::TextureHelperOGL *); // r11@4
  int v14; // r0@4
  __int64 v15; // ST08_8@4
  __int64 v16; // r1@5
  int (__fastcall *v17)(signed int, unsigned int, unsigned int, mce::TextureHelperOGL *); // r5@5
  signed int v18; // r0@5
  __int64 v19; // r2@6

  v9 = a4;
  v10 = this;
  mce::TextureOGL::bindTexture(this, a2, 0, a4);
  v11 = *((_DWORD *)v10 + 12);
  if ( v11 == 3553 )
  {
    v16 = *((_QWORD *)v10 + 7);
    v17 = (int (__fastcall *)(signed int, unsigned int, unsigned int, mce::TextureHelperOGL *))glad_glTexSubImage2D;
    v18 = 3553;
    return v17(v18, a8, v9, a5);
  }
  result = a9;
  if ( v11 == 35866 )
    v19 = *((_QWORD *)v10 + 7);
    v17 = (int (__fastcall *)(signed int, unsigned int, unsigned int, mce::TextureHelperOGL *))glad_glTexSubImage3D;
    v18 = 35866;
  if ( v11 == 34067 )
    v13 = (int (__fastcall *)(int, unsigned int, unsigned int, mce::TextureHelperOGL *))glad_glTexSubImage2D;
    v14 = mce::TextureHelperOGL::getOpenGLCubemapTargetFromArrayIndex(
            (mce::TextureHelperOGL *)a9,
            (unsigned int)&glad_glTexSubImage2D);
    v15 = *((_QWORD *)v10 + 7);
    result = v13(v14, a8, v9, a5);
  return result;
}


int __fastcall mce::RenderStage::postRenderUpdate(int result)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  int v3; // t1@2

  for ( *(_QWORD *)&v1 = *(_QWORD *)(result + 4); v2 != v1; result = (*(int (**)(void))(*(_DWORD *)v3 + 72))() )
  {
    v3 = *v1;
    v1 += 2;
  }
  return result;
}


int __fastcall mce::InterFrameConstants::InterFrameConstants(mce::InterFrameConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8BB0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


mce::TextureOGL *__fastcall mce::TextureOGL::TextureOGL(mce::TextureOGL *this, unsigned int a2, const mce::TextureDescription *a3)
{
  const mce::TextureDescription *v3; // r7@1
  unsigned int v4; // r6@1
  mce::TextureOGL *v5; // r4@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r6@1
  int v10; // r0@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r5@1
  int v14; // r6@1
  int v16; // [sp+0h] [bp-20h]@1
  char v17; // [sp+4h] [bp-1Ch]@1
  char v18; // [sp+8h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  mce::TextureBase::TextureBase(this);
  *((_DWORD *)v5 + 11) = v4;
  *((_BYTE *)v5 + 41) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *((_DWORD *)v5 + 15) = 0;
  *((_DWORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 13) = 0;
  glad_glGetTexParameteriv(3553, 10241, &v18);
  glad_glGetTexParameteriv(3553, 10240, &v17);
  glad_glGetTexParameteriv(3553, 10242, &v16);
  v6 = *(_DWORD *)v3;
  v7 = *((_DWORD *)v3 + 1);
  v8 = *((_DWORD *)v3 + 2);
  v9 = *((_DWORD *)v3 + 3);
  v3 = (const mce::TextureDescription *)((char *)v3 + 16);
  *(_DWORD *)v5 = v6;
  *((_DWORD *)v5 + 1) = v7;
  *((_DWORD *)v5 + 2) = v8;
  *((_DWORD *)v5 + 3) = v9;
  v10 = (int)v5 + 16;
  v11 = *((_DWORD *)v3 + 1);
  v12 = *((_DWORD *)v3 + 2);
  v13 = *((_DWORD *)v3 + 3);
  v14 = *((_DWORD *)v3 + 4);
  *(_DWORD *)v10 = *(_DWORD *)v3;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  *((_BYTE *)v5 + 36) = *((_BYTE *)v3 + 20);
  return v5;
}


int __fastcall mce::RenderStage::preRender(int a1)
{
  int result; // r0@1

  result = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 52) = result;
  return result;
}


int __fastcall mce::Mesh::render(mce::Buffer *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r5@1
  mce::Buffer *v8; // r9@1
  int v9; // r8@1
  mce::RenderContext *v10; // r7@1
  int v11; // r6@1
  mce::Texture *v12; // r0@1
  mce::Texture *v18; // r0@1
  float v20; // [sp+8h] [bp-28h]@1

  v6 = a4;
  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = *(mce::RenderContext **)(a2 + 12);
  v11 = *(_DWORD *)(a2 + 32);
  v12 = (mce::Texture *)mce::TexturePtr::operator->(a4);
  _R0 = mce::Texture::getDescription(v12);
  __asm
  {
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S4, [R0,#0x14]
    VCVT.F32.U32    S2, S2
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S4, S4
    VSTR            S2, [SP,#0x30+var_28]
    VSTR            S0, [SP,#0x30+var_24]
    VSTR            S4, [SP,#0x30+var_20]
  }
  mce::ShaderConstants::setTextureDimensions(v11 + 588, v10, (int)&v20);
  v18 = (mce::Texture *)mce::TexturePtr::operator->(v6);
  mce::Texture::bindTexture(v18, v10, 0, 2u);
  return mce::Mesh::render(v8, v7, v9, a5, a6);
}


void __fastcall mce::getPathWithPack(const void **a1, int *a2, const void **a3)
{
  mce::getPathWithPack(a1, a2, a3);
}


mce::RenderMaterial *__fastcall mce::RenderMaterial::~RenderMaterial(mce::RenderMaterial *this)
{
  mce::RenderMaterial *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  int v5; // r5@4
  int v6; // r7@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int *v9; // r0@14
  int v10; // r1@19
  void *v11; // r0@19
  int v12; // r1@20
  void *v13; // r0@20
  int v14; // r1@21
  void *v15; // r0@21
  int v16; // r1@22
  void *v17; // r0@22
  int v18; // r1@23
  void *v19; // r0@23
  int *v20; // r0@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52

  v1 = this;
  mce::PipelineStateObject::deletePipelineState((mce::RenderMaterial *)((char *)this + 520));
  mce::PipelineStateObject::deletePipelineState((mce::RenderMaterial *)((char *)v1 + 521));
  v2 = *((_DWORD *)v1 + 128);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  mce::RasterizerStateDescription::~RasterizerStateDescription((mce::RenderMaterial *)((char *)v1 + 496));
  mce::RasterizerState::~RasterizerState((mce::RenderMaterial *)((char *)v1 + 468));
  v4 = (void *)*((_DWORD *)v1 + 111);
  if ( v4 )
    operator delete(v4);
  v6 = *(_QWORD *)((char *)v1 + 68) >> 32;
  v5 = *(_QWORD *)((char *)v1 + 68);
  if ( v5 != v6 )
    do
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v5 + 8));
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v5 += 36;
    while ( v5 != v6 );
    v5 = *((_DWORD *)v1 + 17);
  if ( v5 )
    operator delete((void *)v5);
  v10 = *((_DWORD *)v1 + 12);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v10 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 11);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v12 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 10);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v14 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 9);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v16 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 8,
    *((_DWORD *)v1 + 4));
  v18 = *((_DWORD *)v1 + 1);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v18 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (int *)(*(_DWORD *)v1 - 12);
  if ( v20 != &dword_28898C0 )
    v34 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  return v1;
}


void __fastcall mce::ShaderConstantInt1::~ShaderConstantInt1(mce::ShaderConstantInt1 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall mce::BufferOGL::createBuffer(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // r5@1
  int v7; // r9@1
  int v8; // r8@1
  int v9; // r7@1
  signed int v10; // r1@1
  int v11; // r3@5

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  mce::BufferBase::createBuffer(a1, a2, a3, a4, a5, a6);
  v10 = 0;
  if ( a6 == 1 )
    v10 = 34963;
  if ( !a6 )
    v10 = 34962;
  *(_DWORD *)(v6 + 24) = v10;
  glad_glGenBuffers(1, v6 + 20);
  glad_glBindBuffer(*(_QWORD *)(v6 + 20) >> 32, *(_QWORD *)(v6 + 20));
  if ( a6 >= 2 )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", a6, 2, v11);
  *(_DWORD *)(v9 + 4 * a6 + 280) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(v9 + 356) = v8;
  *(_DWORD *)(v6 + 28) = 35044;
  return glad_glBufferData(*(_DWORD *)(v6 + 24), *(_DWORD *)(v6 + 12), v7, 35044);
}


void __fastcall mce::EffectConstants::init(mce::EffectConstants *this)
{
  mce::EffectConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v13, "EffectsConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v13);
  v3 = (void *)(v13 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v12, "EFFECT_UV_OFFSET");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v12);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 2 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall mce::RenderDevice::getClosestSupportedSampleDescription(int a1)
{
  mce::RenderDevice::getClosestSupportedSampleDescription(a1);
}


int *__fastcall mce::TextureContainer::setRawImage(int a1, int *a2)
{
  return xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
           (int *)(a1 + 12),
           a2);
}


mce::TextureBase *__fastcall mce::TextureOGL::~TextureOGL(mce::TextureOGL *this)
{
  mce::TextureOGL *v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@1
  bool v4; // zf@1
  mce::RenderContextStateBase *v5; // r0@5

  v1 = this;
  v3 = (char *)this + 44;
  v2 = *((_DWORD *)this + 11);
  v4 = v2 == 0;
  if ( v2 )
    v4 = *((_BYTE *)v1 + 41) == 0;
  if ( !v4 )
  {
    glad_glDeleteTextures(1, v3);
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = 0;
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 4) = 0;
    if ( mce::RenderContextImmediate::exists(0) == (mce::RenderDeviceBase *)1 )
    {
      v5 = (mce::RenderContextStateBase *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)1);
      mce::RenderContextStateBase::removeIfBound(v5, v1);
      mce::TextureBase::deleteTexture(v1);
    }
  }
  return j_j_j__ZN3mce11TextureBaseD2Ev(v1);
}


int __fastcall mce::FrameBufferDescription::FrameBufferDescription(int result)
{
  *(_QWORD *)result = 1LL;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall mce::BufferBase::BufferBase(int result, int a2)
{
  int v2; // r2@1
  int v3; // r2@1
  int v4; // r2@1
  int v5; // r2@1

  v2 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v2;
  *(_BYTE *)result = *(_BYTE *)a2;
  v3 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v3;
  v4 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v4;
  v5 = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = v5;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 3;
  *(_DWORD *)(a2 + 12) = 0;
  return result;
}


void **__fastcall mce::TextureGroup::getLocationFor(void **result, int a2)
{
  unsigned __int8 v2; // cf@0
  char v3; // zf@0
  __int64 v4; // r2@1
  char *v5; // r1@5

  HIDWORD(v4) = 1;
  LODWORD(v4) = &unk_28898CC;
  *(_QWORD *)result = v4;
  if ( !(!v3 & v2) )
  {
    switch ( a2 )
    {
      case 0:
        return (void **)sub_21E8190(result, "DYNAMIC_BRIGHTNESS", (_BYTE *)0x12);
      case 1:
        return (void **)sub_21E8190(result, "DYNAMIC_SEASON_FOLIAGE", (_BYTE *)0x16);
      case 2:
        v5 = "DYNAMIC_WEATHER0";
        break;
      case 3:
        v5 = "DYNAMIC_WEATHER1";
      case 4:
        v5 = "DYNAMIC_WEATHER2";
      case 5:
        v5 = "DYNAMIC_WEATHER3";
    }
    result = (void **)sub_21E8190(result, v5, (_BYTE *)0x10);
  }
  return result;
}


void __fastcall mce::ShaderConstantInt3::~ShaderConstantInt3(mce::ShaderConstantInt3 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall mce::SamplerStateBase::createSamplerState(int result, mce::RenderContext *a2, const mce::SamplerStateDescription *a3, unsigned __int16 a4)
{
  *(_QWORD *)result = *(_QWORD *)a3;
  *(_WORD *)(result + 8) = a4;
  return result;
}


char *__fastcall mce::ConstantBufferContainerBase::getConstantBufferName(mce::ConstantBufferContainerBase *this)
{
  return (char *)this + 36;
}


int __fastcall mce::RenderGraph::clearRenderGraph(mce::RenderGraph *this)
{
  mce::RenderGraph *v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  void *v4; // r0@6
  void *v5; // r5@7
  int result; // r0@8

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 1) = v2;
  v4 = (void *)*((_DWORD *)v1 + 5);
  if ( v4 )
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    while ( v5 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 12), 4 * (*(_QWORD *)((char *)v1 + 12) >> 32));
  result = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  return result;
}


mce::TextureContainer *__fastcall mce::TextureContainer::TextureContainer(int a1, mce::ImageBuffer *a2)
{
  mce::TextureContainer *v2; // r4@1
  mce::ImageBuffer *v3; // r5@1
  char *v4; // r0@1
  char *v5; // r0@1
  int v6; // r6@1
  __int64 v7; // r0@1
  int v8; // r1@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r6@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r5@1
  int v15; // r6@1
  mce::TextureContainer *result; // r0@1
  int v17; // [sp+0h] [bp-38h]@1

  v2 = (mce::TextureContainer *)a1;
  v3 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  v4 = j_mce::ImageBuffer::getImageDescription(a2);
  j_mce::TextureDescription::TextureDescription((int)v2 + 16, (int)v4, 8);
  v5 = j_mce::ImageBuffer::getImageDescription(v3);
  j_mce::TextureDescription::TextureDescription((int)&v17, (int)v5, 8);
  j_mce::TextureContainer::allocateStorage(v2, (const mce::TextureDescription *)&v17);
  v6 = *(_DWORD *)v2;
  HIDWORD(v7) = v3;
  LODWORD(v7) = *(_DWORD *)v2;
  j_std::vector<unsigned char,std::allocator<unsigned char>>::operator=(v7);
  v8 = v6 + 12;
  v10 = *((_DWORD *)v3 + 4);
  v11 = *((_DWORD *)v3 + 5);
  v9 = (int)v3 + 24;
  *(_DWORD *)v8 = *((_DWORD *)v3 + 3);
  *(_DWORD *)(v8 + 4) = v10;
  *(_DWORD *)(v8 + 8) = v11;
  v8 += 12;
  v12 = *((_DWORD *)v3 + 6);
  v13 = *((_DWORD *)v3 + 7);
  v14 = *((_DWORD *)v3 + 8);
  v15 = *(_DWORD *)(v9 + 12);
  result = v2;
  *(_DWORD *)v8 = v12;
  *(_DWORD *)(v8 + 4) = v13;
  *(_DWORD *)(v8 + 8) = v14;
  *(_DWORD *)(v8 + 12) = v15;
  return result;
}


int __fastcall mce::StencilFaceDescription::StencilFaceDescription(int result)
{
  *(_DWORD *)result = 16843010;
  return result;
}


signed int __fastcall mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType(int a1, signed int a2)
{
  int v2; // r4@1
  signed int result; // r0@1

  v2 = a1;
  *(_DWORD *)(a1 + 8) = a2;
  result = mce::TextureHelper::frameBufferAttachmentTypeFromTextureFormat(a2);
  *(_DWORD *)(v2 + 56) = result;
  return result;
}


void __fastcall mce::Radian::Radian(int a1, int _R1)
{
  mce::Radian::Radian(a1, _R1);
}


char *__fastcall mce::ShaderOGL::createShader(int a1, void ***a2, int a3, int a4, int a5)
{
  int v5; // r10@1
  void ***v6; // r8@1
  int v7; // r5@1
  const void **v8; // r0@1
  int v9; // r4@1
  void *v10; // r0@1
  int v11; // r6@2
  void **v12; // r7@2
  int v13; // r4@2
  __int64 v14; // r0@2
  void *v15; // r0@2
  int *v16; // r7@4
  int **v17; // r11@4
  int v18; // r5@4
  char *v19; // r0@7
  char *v20; // r0@8
  int v21; // r1@10
  int *v22; // r9@10
  int v23; // r2@10
  int v24; // r0@10
  int v25; // r0@11
  bool v26; // zf@12
  int *v27; // r3@12
  int v28; // r7@15
  bool v29; // zf@15
  int v30; // r0@20
  int v31; // r0@25
  unsigned int v32; // r7@28
  void *v33; // r8@28
  int v34; // r5@28
  int v35; // r4@28
  unsigned __int64 v36; // r2@28
  Core::FileStdStreamBuf *v37; // r7@29
  int v38; // r1@31
  unsigned __int64 v39; // r2@31
  int *v40; // r4@32
  int *v41; // r5@32
  unsigned int *v42; // r2@33
  signed int v43; // r1@35
  unsigned int *v44; // r2@37
  signed int v45; // r1@39
  int v46; // r3@55
  int *v47; // r0@59
  void *v48; // r0@60
  void *v49; // r0@61
  char *result; // r0@63
  unsigned int *v51; // r2@65
  signed int v52; // r1@67
  unsigned int *v53; // r2@69
  signed int v54; // r1@71
  unsigned int *v55; // r2@73
  signed int v56; // r1@75
  unsigned int *v57; // r1@77
  signed int v58; // r0@79
  unsigned int *v59; // r2@96
  signed int v60; // r1@98
  unsigned int *v61; // r2@100
  signed int v62; // r1@102
  int v63; // [sp+Ch] [bp-8h]@2
  RakNet *v64; // [sp+14h] [bp+0h]@1
  unsigned int v65; // [sp+18h] [bp+4h]@28
  int v66; // [sp+1Ch] [bp+8h]@28
  char *v67; // [sp+20h] [bp+Ch]@7
  char *v68; // [sp+24h] [bp+10h]@7
  int v69; // [sp+28h] [bp+14h]@7
  int *v70; // [sp+2Ch] [bp+18h]@4
  int *v71; // [sp+30h] [bp+1Ch]@4
  int v72; // [sp+34h] [bp+20h]@4
  int v73; // [sp+38h] [bp+24h]@3
  int *v74; // [sp+3Ch] [bp+28h]@3
  int v75; // [sp+40h] [bp+2Ch]@2
  int v76; // [sp+44h] [bp+30h]@2
  int v77; // [sp+48h] [bp+34h]@2
  int v78; // [sp+4Ch] [bp+38h]@1
  __int64 v79; // [sp+50h] [bp+3Ch]@28
  int v80; // [sp+54h] [bp+40h]@28
  void **v81; // [sp+58h] [bp+44h]@2
  int v82; // [sp+5Ch] [bp+48h]@2
  __int64 v83; // [sp+60h] [bp+4Ch]@2
  void **v84; // [sp+1094h] [bp+1080h]@28
  char v85; // [sp+10A8h] [bp+1094h]@28
  int v86; // [sp+1104h] [bp+10F0h]@28
  __int16 v87; // [sp+1108h] [bp+10F4h]@28
  int v88; // [sp+110Ch] [bp+10F8h]@28
  int v89; // [sp+1110h] [bp+10FCh]@28
  int v90; // [sp+1114h] [bp+1100h]@28
  int v91; // [sp+1118h] [bp+1104h]@28
  int v92; // [sp+111Ch] [bp+1108h]@2
  int v93; // [sp+1120h] [bp+110Ch]@2

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v64 = _stack_chk_guard;
  sub_21E8AF4(&v78, (int *)(a3 + 16));
  sub_21E72F0((const void **)&v78, (const void **)(v7 + 16));
  v8 = sub_21E72F0((const void **)&v78, (const void **)(a5 + 16));
  v9 = (int)*v8;
  *v8 = &unk_28898CC;
  v10 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
  {
    v42 = (unsigned int *)(v78 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = v9 - 12;
  v63 = v9;
  Crypto::Hash::hash((Crypto *)&v77, 1, v9, *(_DWORD *)(v9 - 12));
  v12 = *v6;
  v13 = (int)*(*v6 - 3);
  Util::toHex((const void **)&v75, &v77);
  LODWORD(v14) = v75;
  HIDWORD(v14) = *(_DWORD *)(v75 - 12);
  v81 = v12;
  v82 = v13;
  v83 = v14;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v92, (int)&v81, 2);
  sub_21E94B4((void **)&v76, (const char *)&v93);
  v15 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v75 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v74 = (int *)&unk_28898CC;
  v73 = -1;
  if ( mce::RenderDevice::checkFeatureSupport() != 1 )
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v17 = &v71;
    goto LABEL_25;
  glad_glGetIntegerv(34814, &v81);
  v16 = 0;
  v70 = 0;
  v71 = 0;
  v17 = &v71;
  v18 = 0;
  v72 = 0;
  if ( v81 )
    std::vector<int,std::allocator<int>>::_M_default_append((int)&v70, (unsigned int)v81);
    v16 = v71;
    v18 = (int)v70;
  glad_glGetIntegerv(34815, v18);
  if ( (int *)v18 != v16 )
    sub_21E8AF4((int *)&v67, &v76);
    v68 = v67;
    v67 = (char *)&unk_28898CC;
    v69 = 2;
    Resource::load((int)&v68);
    v19 = v68 - 12;
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
      }
      else
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = v67 - 12;
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v67 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    if ( *(v74 - 3) )
      v21 = *v74;
      v73 = *v74;
      v22 = v70;
      v23 = (int)v70;
      v24 = ((char *)v71 - (char *)v70) >> 4;
      if ( v24 >= 1 )
        v25 = v24 + 1;
        v23 = (int)v70;
        {
          v26 = *(_DWORD *)v23 == v21;
          v27 = (int *)v23;
          if ( *(_DWORD *)v23 != v21 )
          {
            v27 = (int *)(v23 + 4);
            v26 = *(_DWORD *)(v23 + 4) == v21;
          }
          if ( v26 )
            goto LABEL_54;
          v27 = (int *)(v23 + 8);
          v28 = *(_DWORD *)(v23 + 8);
          v29 = v28 == v21;
          if ( v28 != v21 )
            v27 = (int *)(v23 + 12);
            v29 = *(_DWORD *)(v23 + 12) == v21;
          if ( v29 )
          --v25;
          v23 += 16;
        }
        while ( v25 > 1 );
      if ( 1 == ((signed int)v71 - v23) >> 2 )
        v27 = (int *)v23;
        v30 = ((signed int)v71 - v23) >> 2;
        if ( v30 == 2 )
        else
          if ( v30 != 3 )
            goto LABEL_25;
          if ( *(_DWORD *)v23 == v21 )
          v27 = (int *)(v23 + 4);
        if ( *v27 == v21 )
LABEL_54:
          if ( v27 != v71 )
            v73 = *v27;
            *(_DWORD *)(v5 + 20) = glad_glCreateProgram();
            v46 = *(v74 - 3);
            glad_glProgramBinary();
            goto LABEL_56;
          goto LABEL_25;
        ++v27;
      if ( *v27 != v21 )
        goto LABEL_25;
      goto LABEL_54;
LABEL_25:
  mce::ShaderProgramOGL::compileShaderProgram(*(_DWORD *)(v5 + 4));
  mce::ShaderProgramOGL::compileShaderProgram(*(_DWORD *)(v5 + 8));
  mce::ShaderProgramOGL::compileShaderProgram(*(_DWORD *)(v5 + 12));
  v31 = glad_glCreateProgram();
  *(_DWORD *)(v5 + 20) = v31;
  glad_glAttachShader(v31, *(_DWORD *)(*(_DWORD *)(v5 + 4) + 12));
  glad_glAttachShader(*(_DWORD *)(v5 + 20), *(_DWORD *)(*(_DWORD *)(v5 + 8) + 12));
  if ( mce::ShaderProgram::isValid(*(mce::ShaderProgram **)(v5 + 12)) == 1 )
    glad_glAttachShader(*(_DWORD *)(v5 + 20), *(_DWORD *)(*(_DWORD *)(v5 + 12) + 12));
  v22 = v70;
  if ( v70 == *v17 )
    mce::ShaderOGL::linkShader((mce::ShaderOGL *)v5);
LABEL_56:
    v40 = (int *)&v64;
    v41 = (int *)v11;
    goto LABEL_57;
  glad_glProgramParameteri(*(_DWORD *)(v5 + 20), 33367, 1);
  mce::ShaderOGL::linkShader((mce::ShaderOGL *)v5);
  v65 = 0;
  glad_glGetProgramiv(*(_DWORD *)(v5 + 20), 34625, &v65);
  v32 = v65;
  v33 = operator new[](v65);
  _aeabi_memclr(v33, v32);
  ((void (__fastcall *)(_DWORD, unsigned int, int *, int *))glad_glGetProgramBinary)(
    *(_DWORD *)(v5 + 20),
    v32,
    &v66,
    &v73);
  v34 = v76;
  v35 = *(_DWORD *)(v76 - 12);
  sub_21B6308((int)&v84);
  v84 = &off_26D3AF0;
  v86 = 0;
  v87 = 0;
  v91 = 0;
  v90 = 0;
  v89 = 0;
  v88 = 0;
  LODWORD(v79) = v34;
  v80 = v35;
  Core::FileStream::FileStream((int)&v81, (int)off_26D81A4, &v79, 20);
  v81 = &off_26D8170;
  v84 = &off_26D8198;
  LODWORD(v83) = &off_26D8184;
  if ( v85 & 5 )
    v37 = (Core::FileStdStreamBuf *)((char *)&v83 + 4);
  else
    sub_21CBD44((char *)&v83, (int)&v73, 4);
    sub_21CBD44((char *)&v83, (int)v33, v66);
    Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)((char *)&v83 + 4), v38, v39);
  v40 = (int *)&v64;
  v41 = (int *)v11;
  v81 = &off_26D679C;
  v84 = &off_26D67C4;
  LODWORD(v83) = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf(v37, (int)&off_26D67C4, v36);
  v81 = &off_26D67DC;
  v84 = &off_26D67F0;
  v82 = 0;
  sub_21B6560(&v84);
  operator delete[](v33);
LABEL_57:
  if ( v22 )
    operator delete(v22);
  v47 = v74 - 3;
  if ( v74 - 3 != &dword_28898C0 )
    v51 = (unsigned int *)(v74 - 1);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v76 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v77 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  if ( v41 != &dword_28898C0 )
    v57 = (unsigned int *)(v63 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  result = (char *)_stack_chk_guard - *v40;
  if ( _stack_chk_guard != (RakNet *)*v40 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall mce::DebugConstants::init(mce::DebugConstants *this)
{
  mce::DebugConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v13, "DebugConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v13);
  v3 = (void *)(v13 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v12, "TEXTURE_ARRAY_INDEX_0");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v12);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 1 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall mce::PerFrameConstants::init(mce::PerFrameConstants *this)
{
  mce::PerFrameConstants::init(this);
}


int __fastcall mce::RenderStage::render(int result)
{
  int v1; // r5@1
  __int64 i; // r6@1
  int v3; // t1@2

  v1 = result;
  for ( i = *(_QWORD *)(result + 4); HIDWORD(i) != (_DWORD)i; *(_BYTE *)(v1 + 20) = 1 )
  {
    v3 = *(_DWORD *)i;
    LODWORD(i) = i + 8;
    result = (*(int (**)(void))(*(_DWORD *)v3 + 68))();
  }
  return result;
}


int __fastcall mce::ImmediateBufferOGL::updateBuffer(mce::ImmediateBufferOGL *this, mce::RenderContext *a2, unsigned int a3, void **a4, unsigned int a5)
{
  void **v5; // r10@1
  unsigned int v6; // r7@1
  mce::RenderContext *v7; // r5@1
  mce::ImmediateBufferOGL *v8; // r4@1
  int v9; // r3@2
  unsigned int v10; // r1@2
  int result; // r0@3
  unsigned int v12; // r6@5
  void *v13; // r3@6
  void *v14; // r0@8

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  if ( gl::supportsImmediateMode(this) == 1 )
  {
    glad_glBindBuffer(*((_DWORD *)v8 + 6), 0);
    v10 = *(_BYTE *)v8;
    if ( v10 >= 2 )
      sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v10, 2, v9);
    result = (int)v7 + 4 * v10;
    *(_DWORD *)(result + 280) = 0;
    if ( v10 == 1 )
    {
      result = 0;
      *((_DWORD *)v7 + 89) = 0;
    }
  }
  else
    v12 = *((_DWORD *)v8 + 4) + a5 * v6;
    if ( v12 <= mce::BufferBase::getInternalBufferSize(v8) )
      v13 = *v5;
    else
      *((_DWORD *)v8 + 4) = 0;
    mce::BufferOGL::updateBuffer(v8, v7, v6, v13, a5);
    v14 = (void *)*((_DWORD *)v8 + 4);
    *v5 = v14;
    result = (int)v14 + a5 * v6;
    *((_DWORD *)v8 + 4) = result;
  return result;
}


int __fastcall mce::ConstantBufferMetaDataManager::findUniformMetaData(_QWORD *a1, const void **a2)
{
  int v2; // r7@1 OVERLAPPED
  int v3; // r8@1 OVERLAPPED
  _DWORD *v4; // r5@2
  int v5; // r10@2
  int v6; // r4@3
  int v7; // r11@3
  int v8; // r0@3
  size_t v9; // r6@4
  int v10; // r9@4
  _DWORD *v11; // r0@5
  _DWORD *v12; // r0@7
  _DWORD *v13; // r0@9
  _DWORD *v14; // r0@11
  int v15; // r0@14
  size_t v16; // r6@17
  _DWORD *v17; // r0@19
  size_t v18; // r2@19
  _DWORD *v19; // r0@22
  const void *v20; // r0@25

  *(_QWORD *)&v2 = *a1;
  if ( v2 != v3 )
  {
    v4 = *a2;
    v5 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 4) >> 32;
      v6 = *(_QWORD *)(v2 + 4);
      v8 = -858993459 * ((v7 - v6) >> 2) >> 2;
      if ( v8 >= 1 )
      {
        v9 = *(v4 - 3);
        v10 = v8 + 1;
        do
        {
          v11 = *(_DWORD **)(v6 + 16);
          if ( *(v11 - 3) == v9 && !memcmp(v11, v4, v9) )
            goto LABEL_33;
          v12 = *(_DWORD **)(v6 + 36);
          if ( *(v12 - 3) == v9 && !memcmp(v12, v4, v9) )
          {
            v6 += 20;
          }
          v13 = *(_DWORD **)(v6 + 56);
          if ( *(v13 - 3) == v9 && !memcmp(v13, v4, v9) )
            v6 += 40;
          v14 = *(_DWORD **)(v6 + 76);
          if ( *(v14 - 3) == v9 && !memcmp(v14, v4, v9) )
            v6 += 60;
          --v10;
          v6 += 80;
        }
        while ( v10 > 1 );
      }
      v15 = -858993459 * ((v7 - v6) >> 2);
      if ( v15 == 1 )
        break;
      if ( v15 == 3 )
        v17 = *(_DWORD **)(v6 + 16);
        v16 = *(v4 - 3);
        v18 = *(v17 - 3);
        if ( v18 == v16 && !memcmp(v17, v4, v18) )
          goto LABEL_33;
        v6 += 20;
LABEL_22:
        v19 = *(_DWORD **)(v6 + 16);
        if ( *(v19 - 3) == v16 && !memcmp(v19, v4, v16) )
LABEL_25:
        v20 = *(const void **)(v6 + 16);
        if ( *((_DWORD *)v20 - 3) == v16 )
          if ( memcmp(v20, v4, v16) )
            v6 = v7;
        goto LABEL_29;
      if ( v15 == 2 )
        goto LABEL_22;
LABEL_29:
      v6 = v7;
LABEL_33:
      v2 += 16;
      if ( v6 != v7 )
        v5 = v6;
      if ( v2 == v3 )
        return v5;
    }
    v16 = *(v4 - 3);
    goto LABEL_25;
  }
  return 0;
}


void __fastcall mce::RenderChunkConstants::~RenderChunkConstants(mce::RenderChunkConstants *this)
{
  mce::RenderChunkConstants::~RenderChunkConstants(this);
}


void __fastcall mce::ShaderConstantMatrix2x2::~ShaderConstantMatrix2x2(mce::ShaderConstantMatrix2x2 *this)
{
  mce::ShaderConstantMatrix2x2::~ShaderConstantMatrix2x2(this);
}


int __fastcall mce::ShaderPrimitiveTypeHelper::sizeInBytesFromShaderPrimitiveType(char a1)
{
  unsigned __int8 v1; // r0@1
  int result; // r0@2

  v1 = a1 - 1;
  if ( v1 <= 0xAu )
    result = dword_262D320[(char)v1];
  else
    result = 0;
  return result;
}


int __fastcall mce::Math::wrapDegrees(int a1)
{
  signed int v7; // r1@1
  int v8; // r0@1
  float v10; // [sp+4h] [bp-Ch]@1

  v10 = *(float *)&a1;
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v10);
  __asm
  {
    VLDR            S0, =180.0
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v10 = j_fmodf(_R0, 360.0);
  v7 = j_mce::operator<(SLODWORD(v10), 0);
  v8 = LODWORD(v10);
  if ( v7 == 1 )
    v8 = j_mce::operator+(SLODWORD(v10), 1135869952);
    v10 = *(float *)&v8;
  return j_mce::operator-(v8, 1127481344);
}


void __fastcall mce::RenderMaterialGroup::getMaterial(mce::MaterialPtr *a1, mce::RenderMaterialGroup *a2, int *a3)
{
  mce::RenderMaterialGroup::getMaterial(a1, a2, a3);
}


int __fastcall mce::ShaderConstantFloat1::syncUniform(mce::ShaderConstantFloat1 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform1fv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


void __fastcall mce::ShaderConstantFloat4::~ShaderConstantFloat4(mce::ShaderConstantFloat4 *this)
{
  mce::ShaderConstantFloat4::~ShaderConstantFloat4(this);
}


signed int __fastcall mce::Mesh::loadRawData(mce::Mesh *this, mce::RenderContext *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r6@1
  mce::RenderContext *v4; // r4@1
  mce::Mesh *v5; // r5@1
  int v6; // r9@5
  int v7; // r8@5
  int v8; // r0@5
  signed int result; // r0@7

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( a3
    && *((_DWORD *)this + 21) >= 3u
    && *((_BYTE *)this + 92)
    && mce::VertexFormat::isValid((mce::Mesh *)((char *)this + 64)) == 1 )
  {
    v6 = *((_DWORD *)v5 + 21);
    v7 = mce::VertexFormat::getVertexSize((mce::Mesh *)((char *)v5 + 64));
    v8 = mce::VertexFormat::getVertexSize((mce::Mesh *)((char *)v5 + 64));
    mce::Buffer::createVertexBuffer(v5, v4, v8, v3, *((_DWORD *)v5 + 21));
    if ( *((_DWORD *)v5 + 20) )
      mce::Buffer::createIndexBuffer(
        (mce::Mesh *)((char *)v5 + 32),
        v4,
        *((_DWORD *)v5 + 22),
        &v3[v7 * v6],
        *((_DWORD *)v5 + 20));
    result = 1;
  }
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall mce::SamplerGroupCache::contains(mce::SamplerGroupCache *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r7@1
  int *v4; // r0@1
  int v5; // r4@2
  int v6; // r5@3
  int v7; // r6@3

  v2 = *(_QWORD *)this;
  v3 = a2 % (unsigned int)(*(_QWORD *)this >> 32);
  v4 = *(int **)(*(_QWORD *)this + 4 * v3);
  if ( v4 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      v6 = *(_DWORD *)(v5 + 4);
      v7 = 0;
      do
      {
        if ( v6 == a2 )
        {
          ++v7;
        }
        else
          if ( v7 )
            return v7 != 0;
          v7 = 0;
        v5 = *(_DWORD *)v5;
        if ( !v5 )
          break;
        v6 = *(_DWORD *)(v2 + 4);
      }
      while ( *(_DWORD *)(v2 + 4) % HIDWORD(v2) == v3 );
    }
    else
  }
  else
    v7 = 0;
  return v7 != 0;
}


void __fastcall mce::ShaderConstantInt2::~ShaderConstantInt2(mce::ShaderConstantInt2 *this)
{
  mce::ShaderConstantInt2::~ShaderConstantInt2(this);
}


signed int __fastcall mce::FeatureSupportOGL::getMaxVertexCount(mce::FeatureSupportOGL *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_WORD *)this + 4);
  result = -1;
  if ( !v1 )
    result = 0xFFFF;
  return result;
}


int __fastcall mce::Math::clampedLerp(mce::Math *this, float _R1, float _R2, float a4)
{
  int result; // r0@3

  __asm
  {
    VMOV            S2, R2
    VMOV            S0, R0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S6, #1.0
      VMOV            S4, R1
      VCMPE.F32       S2, S6
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VMOVGT.F32      S0, S4
        VMOVGT          R0, S0
      }
      return result;
      VSUB.F32        S4, S4, S0
      VMUL.F32        S2, S4, S2
      VADD.F32        S0, S2, S0
  __asm { VMOV            R0, S0 }
  return result;
}


mce::RenderContextBase *__fastcall mce::RenderContextBase::~RenderContextBase(mce::RenderContextBase *this)
{
  mce::RenderContextBase *v1; // r4@1

  v1 = this;
  mce::BufferOGL::~BufferOGL((mce::RenderContextBase *)((char *)this + 196));
  mce::RasterizerStateDescription::~RasterizerStateDescription((mce::RenderContextBase *)((char *)v1 + 32));
  return v1;
}


int __fastcall mce::Mesh::render(mce::Buffer *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r5@1
  mce::Buffer *v9; // r9@1
  int v10; // r8@1
  mce::RenderContext *v11; // r7@1
  int v12; // r6@1
  mce::Texture *v13; // r0@1
  mce::Texture *v19; // r0@1
  mce::Texture *v20; // r0@1
  float v22; // [sp+8h] [bp-28h]@1

  v7 = a4;
  v8 = a2;
  v9 = a1;
  v10 = a3;
  v11 = *(mce::RenderContext **)(a2 + 12);
  v12 = *(_DWORD *)(a2 + 32);
  v13 = (mce::Texture *)mce::TexturePtr::operator->(a4);
  _R0 = mce::Texture::getDescription(v13);
  __asm
  {
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S4, [R0,#0x14]
    VCVT.F32.U32    S2, S2
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S4, S4
    VSTR            S2, [SP,#0x30+var_28]
    VSTR            S0, [SP,#0x30+var_24]
    VSTR            S4, [SP,#0x30+var_20]
  }
  mce::ShaderConstants::setTextureDimensions(v12 + 588, v11, (int)&v22);
  v19 = (mce::Texture *)mce::TexturePtr::operator->(v7);
  mce::Texture::bindTexture(v19, v11, 0, 2u);
  v20 = (mce::Texture *)mce::TexturePtr::operator->(a5);
  mce::Texture::bindTexture(v20, v11, 1u, 2u);
  return mce::Mesh::render(v9, v8, v10, a6, a7);
}


void __fastcall mce::TextureGroup::loadList(mce::TextureGroup *this, const ResourceLocation *a2, int a3)
{
  mce::TextureGroup *v3; // r7@1 OVERLAPPED
  signed int v4; // r8@1 OVERLAPPED
  Json::Reader *v5; // r0@1
  const Json::Value *v6; // r0@2
  int v7; // r0@2
  const char **v8; // r6@2 OVERLAPPED
  const char **v9; // r10@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // r7@20
  signed int v15; // r9@20
  _BYTE *v16; // r0@20
  void *v17; // r0@21
  int v18; // r7@23
  const char **v19; // r5@27 OVERLAPPED
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  int *v22; // r0@37
  void *v23; // r4@43
  int v24; // r6@43
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  int *v27; // r0@53
  char *v28; // r0@58
  unsigned int *v29; // r2@60
  signed int v30; // r1@62
  __int64 v31; // [sp+0h] [bp-F8h]@3
  int v32; // [sp+10h] [bp-E8h]@8
  _BYTE *v33; // [sp+14h] [bp-E4h]@4
  int v34; // [sp+18h] [bp-E0h]@22
  const char **v35; // [sp+1Ch] [bp-DCh]@2
  const char **v36; // [sp+20h] [bp-D8h]@2
  char v37; // [sp+28h] [bp-D0h]@2
  void *v38; // [sp+3Ch] [bp-BCh]@2
  void *v39; // [sp+40h] [bp-B8h]@2
  void *v40; // [sp+44h] [bp-B4h]@2
  char v41; // [sp+48h] [bp-B0h]@1
  char v42; // [sp+B8h] [bp-40h]@1
  char *v43; // [sp+CCh] [bp-2Ch]@1
  int v44; // [sp+D0h] [bp-28h]@24

  v3 = this;
  v4 = a3;
  v43 = (char *)&unk_28898CC;
  Resource::load((int)a2);
  Json::Value::Value(&v42, 0);
  v5 = Json::Reader::Reader((Json::Reader *)&v41);
  if ( Json::Reader::parse((int)v5, (int *)&v43, (int)&v42, 1) == 1 )
  {
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v6 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v42, "textures");
    Json::Value::Value((Json::Value *)&v37, v6);
    v7 = Json::Value::operator[]((Json::Value *)&v42, "textures");
    Json::Value::getMemberNames((Json::Value *)&v35, v7);
    v9 = v36;
    v8 = v35;
    if ( v35 != v36 )
    {
      v31 = *(_QWORD *)&v3;
      do
      {
        v14 = Json::Value::operator[]((Json::Value *)&v37, v8);
        sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
        Json::Value::asString((int *)&v33, v14, &v32);
        v15 = ResourceUtil::pathFromString(*((_DWORD *)v33 - 3), v33);
        v16 = v33 - 12;
        if ( (int *)(v33 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v33 - 4);
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
            j_j_j_j__ZdlPv_9(v16);
        }
        v17 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v32 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        v34 = v15;
        if ( v15 != 11 )
          v18 = (int)v39;
          if ( v39 == v40 )
            std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_emplace_back_aux<std::string &,ResourceFileSystem &>(
              (unsigned __int64 *)&v38,
              (int *)v8,
              &v34);
            sub_21E8AF4(&v44, (int *)v8);
            *(_DWORD *)v18 = v44;
            *(_DWORD *)(v18 + 4) = v15;
            v39 = (void *)(v18 + 8);
        ++v8;
      }
      while ( v8 != v9 );
      *(_QWORD *)(&v8 - 1) = *(_QWORD *)&v35;
      if ( v35 != v36 )
        do
          v22 = (int *)(*v19 - 12);
          if ( v22 != &dword_28898C0 )
            v20 = (unsigned int *)(*v19 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
            }
            else
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          ++v19;
        while ( v19 != v8 );
        v8 = v35;
      *(_QWORD *)&v3 = v31;
    }
    if ( v8 )
      operator delete(v8);
    mce::TextureGroup::loadList((int)v3, (unsigned __int64 *)&v38, v4);
    Json::Value::~Value((Json::Value *)&v37);
    v24 = (int)v39;
    v23 = v38;
    if ( v38 != v39 )
        v27 = (int *)(*(_DWORD *)v23 - 12);
        if ( v27 != &dword_28898C0 )
          v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v23 = (char *)v23 + 8;
      while ( v23 != (void *)v24 );
      v23 = v38;
    if ( v23 )
      operator delete(v23);
  }
  Json::Reader::~Reader((Json::Reader *)&v41);
  Json::Value::~Value((Json::Value *)&v42);
  v28 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
}


unsigned int __fastcall mce::PolygonHelper::calculateIndexCountForQuads(mce::PolygonHelper *this, unsigned int a2)
{
  unsigned int v2; // r4@1
  char v3; // r0@1

  v2 = (unsigned int)this;
  v3 = byte_27E8A34;
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E8A34) )
  {
    byte_27E8A30 = mce::RenderDevice::checkFeatureSupport();
    j___cxa_guard_release((unsigned int *)&byte_27E8A34);
  }
  if ( !byte_27E8A30 )
    v2 = 6 * (v2 >> 2);
  return v2;
}


int __fastcall mce::VertexFormat::disableHalfFloats(int result)
{
  *(_BYTE *)(result + 8) = 0;
  return result;
}


signed int __fastcall mce::FrameBufferAttachmentBase::createAttachmentAndTexture(mce::FrameBufferAttachmentBase *this, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, mce::Texture *a4)
{
  mce::FrameBufferAttachmentBase *v4; // r6@1
  mce::Texture *v5; // r4@1
  mce::RenderContext *v6; // r5@1
  signed int result; // r0@1
  int v8; // [sp+4h] [bp+0h]@1

  v4 = this;
  v5 = a4;
  v6 = a2;
  mce::Texture::Texture((mce::Texture *)&v8);
  mce::Texture::operator=((int)v5, (int)&v8);
  mce::Texture::~Texture((mce::Texture *)&v8);
  mce::Texture::createTexture(v5, v6, (mce::FrameBufferAttachmentBase *)((char *)v4 + 12));
  *(_DWORD *)v4 = v5;
  *((_WORD *)v4 + 3) = 0;
  *((_BYTE *)v4 + 4) = 0;
  result = 1;
  *((_BYTE *)v4 + 76) = 1;
  return result;
}


void __fastcall mce::EntityConstants::~EntityConstants(mce::EntityConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


signed int __fastcall mce::RenderMaterialGroup::_loadList(mce::RenderMaterialGroup *this, mce::ShaderGroup *a2, ResourcePackManager *a3, int a4)
{
  mce::RenderMaterialGroup *v4; // r11@1
  mce::ShaderGroup *v5; // r6@1
  ResourcePackManager *v6; // r4@1
  mce::Shader *v7; // r0@1
  int v8; // r3@1
  mce::RenderMaterialGroup *v9; // r4@2
  char *v10; // r2@2
  mce::RenderMaterial *v11; // r9@2
  int *v12; // r8@2
  int v13; // r0@3
  mce::RenderMaterialGroup *v14; // r5@3
  _DWORD *v15; // r4@3
  int v16; // r1@3
  void *v17; // r0@3
  int *v18; // r0@4
  Json::Value *v19; // r7@7
  int v20; // r5@7
  int *v21; // r11@7
  void *v22; // r0@7
  int v23; // r5@8
  int v24; // r5@9
  void *v25; // r0@9
  void *v26; // r0@10
  unsigned int *v27; // r2@12
  signed int v28; // r1@14
  unsigned int *v29; // r2@16
  signed int v30; // r1@18
  int v31; // r5@29
  void *v32; // r0@29
  const void **v33; // r0@30
  const void **v34; // r0@30
  void **v35; // r0@30
  char *v36; // r0@30
  char *v37; // r0@31
  void *v38; // r0@32
  int v39; // r4@33
  int v40; // r0@33
  void *v41; // r5@34
  int v42; // r8@34
  size_t v43; // r6@34
  _DWORD *v44; // r0@36
  size_t v45; // r9@36
  size_t v46; // r2@36
  int v47; // r0@38
  _DWORD *v48; // r1@45
  unsigned int v49; // r5@45
  unsigned int v50; // r6@45
  size_t v51; // r2@45
  int v52; // r0@47
  int v53; // r5@52
  int v54; // r4@52
  int v55; // r6@52
  __int64 v56; // kr00_8@52
  signed int v57; // r7@56
  int v58; // r5@57
  _DWORD *v59; // r0@58
  size_t v60; // r2@58
  int v61; // r1@61
  _DWORD *v62; // r0@61
  _DWORD *v63; // r2@62
  signed int v64; // r5@73
  mce::RenderMaterial **v65; // r5@74
  int v66; // r1@74
  mce::RenderMaterial *v67; // r0@74
  mce::RenderMaterial *v68; // r0@75
  void *v69; // r0@76
  unsigned int *v70; // r2@78
  signed int v71; // r1@80
  char *v72; // r0@87
  signed int v73; // r0@87
  int v74; // r5@88 OVERLAPPED
  int v75; // r6@88 OVERLAPPED
  unsigned int *v76; // r2@90
  signed int v77; // r1@92
  unsigned int *v78; // r2@94
  signed int v79; // r1@96
  int v80; // r1@104
  void *v81; // r0@104
  int *v82; // r0@105
  char *v83; // r0@111
  char *v84; // r0@112
  void *v85; // r0@113
  void *v86; // r0@114
  bool v87; // zf@115
  unsigned int *v88; // r2@120
  signed int v89; // r1@122
  unsigned int *v90; // r2@124
  signed int v91; // r1@126
  unsigned int *v92; // r2@128
  signed int v93; // r1@130
  unsigned int *v94; // r2@132
  signed int v95; // r1@134
  unsigned int *v96; // r2@153
  signed int v97; // r1@155
  unsigned int *v98; // r2@157
  signed int v99; // r1@159
  unsigned int *v100; // r2@161
  signed int v101; // r1@163
  unsigned int *v102; // r2@165
  signed int v103; // r1@167
  unsigned int *v104; // r2@185
  signed int v105; // r1@187
  unsigned int *v106; // r2@194
  signed int v107; // r1@196
  unsigned int *v108; // r2@198
  signed int v109; // r1@200
  int v110; // r5@215
  mce::Shader *v111; // r0@219
  mce::Shader *v112; // r0@223
  int v113; // r5@227
  int v114; // r7@227
  unsigned int *v115; // r2@229
  signed int v116; // r1@231
  unsigned int *v117; // r2@233
  signed int v118; // r1@235
  int v119; // r1@245
  void *v120; // r0@245
  int *v121; // r0@246
  signed int v123; // r9@118
  signed int v124; // [sp+34h] [bp-BF4h]@88
  unsigned __int64 v125; // [sp+3Ch] [bp-BECh]@7
  mce::TextureGroup **v126; // [sp+44h] [bp-BE4h]@2
  int v127; // [sp+48h] [bp-BE0h]@2
  int v128; // [sp+50h] [bp-BD8h]@2
  int *v129; // [sp+58h] [bp-BD0h]@2
  int v130; // [sp+5Ch] [bp-BCCh]@2
  ResourceLocation *v131; // [sp+60h] [bp-BC8h]@2
  int v132; // [sp+64h] [bp-BC4h]@2
  mce::ShaderGroup *v133; // [sp+6Ch] [bp-BBCh]@33
  int v134; // [sp+70h] [bp-BB8h]@1
  int v135; // [sp+74h] [bp-BB4h]@74
  int v136; // [sp+78h] [bp-BB0h]@74
  int v137; // [sp+7Ch] [bp-BACh]@74
  int v138; // [sp+80h] [bp-BA8h]@74
  int v139; // [sp+84h] [bp-BA4h]@74
  int v140; // [sp+88h] [bp-BA0h]@74
  int v141; // [sp+8Ch] [bp-B9Ch]@74
  char v142; // [sp+90h] [bp-B98h]@68
  char v143; // [sp+A0h] [bp-B88h]@67
  int v144; // [sp+B4h] [bp-B74h]@65
  int v145; // [sp+B8h] [bp-B70h]@65
  char v146; // [sp+C0h] [bp-B68h]@65
  int v147; // [sp+D4h] [bp-B54h]@30
  char *v148; // [sp+D8h] [bp-B50h]@30
  char *v149; // [sp+DCh] [bp-B4Ch]@30
  void *s2; // [sp+E0h] [bp-B48h]@30
  unsigned __int64 v151; // [sp+E4h] [bp-B44h]@30
  char *v152; // [sp+F0h] [bp-B38h]@30
  char *v153; // [sp+F4h] [bp-B34h]@30
  int v154; // [sp+F8h] [bp-B30h]@30
  int v155; // [sp+100h] [bp-B28h]@29
  int v156; // [sp+104h] [bp-B24h]@29
  int v157; // [sp+10Ch] [bp-B1Ch]@9
  int v158; // [sp+110h] [bp-B18h]@2
  char v159; // [sp+114h] [bp-B14h]@8
  char v160; // [sp+11Ch] [bp-B0Ch]@8
  char v161; // [sp+124h] [bp-B04h]@2
  int v162; // [sp+334h] [bp-8F4h]@7
  int v163; // [sp+338h] [bp-8F0h]@7
  char v164; // [sp+33Ch] [bp-8ECh]@192
  char v165; // [sp+344h] [bp-8E4h]@7
  int v166; // [sp+34Ch] [bp-8DCh]@1
  int v167; // [sp+350h] [bp-8D8h]@1
  char v168; // [sp+358h] [bp-8D0h]@1
  char v169; // [sp+3C8h] [bp-860h]@1
  char v170; // [sp+3D8h] [bp-850h]@73
  char v171; // [sp+3F0h] [bp-838h]@74
  char v172; // [sp+7F8h] [bp-430h]@74
  int v173; // [sp+7FCh] [bp-42Ch]@74
  RakNet *v174; // [sp+C00h] [bp-28h]@1

  v4 = this;
  v134 = a4;
  v5 = a2;
  v6 = a3;
  v174 = _stack_chk_guard;
  Json::Value::Value(&v169, 0);
  Json::Reader::Reader((Json::Reader *)&v168);
  v7 = (mce::Shader *)(*(int (__fastcall **)(int *, ResourcePackManager *, char *))(*(_DWORD *)v6 + 16))(
                        &v166,
                        v6,
                        (char *)v4 + 88);
  v8 = v167;
  if ( v166 != v167 )
  {
    v127 = (int)v4 + 108;
    v126 = (mce::TextureGroup **)((char *)v4 + 104);
    v131 = v6;
    v130 = (int)v4 + 8;
    v132 = (int)v4 + 40;
    v128 = (int)v4 + 36;
    v9 = (mce::RenderMaterialGroup *)((char *)v4 + 16);
    v7 = (mce::Shader *)&v168;
    v10 = &v169;
    v11 = (mce::RenderMaterial *)&v161;
    v12 = &v158;
    v129 = (int *)((char *)v4 + 88);
    while ( Json::Reader::parse((int)v7, (int *)(v8 - 4), (int)v10, 1) != 1 )
    {
      if ( v134 )
      {
        v123 = 0;
        goto LABEL_227;
      }
LABEL_3:
      v13 = v167;
      v14 = v9;
      v15 = (_DWORD *)(v167 - 8);
      v167 -= 8;
      v16 = *(_DWORD *)(v13 - 4);
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
        }
        else
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      v18 = (int *)(*v15 - 12);
      if ( v18 != &dword_28898C0 )
        v108 = (unsigned int *)(*v15 - 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v8 = v167;
      v7 = (mce::Shader *)&v168;
      v10 = &v169;
      v9 = v14;
      if ( v166 == v167 )
        goto LABEL_215;
    }
    Json::Value::begin((Json::Value *)&v165, (int)&v169);
    Json::Value::end((Json::Value *)&v164, (int)&v169);
    while ( 1 )
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v165, (const Json::ValueIteratorBase *)&v164) == 1 )
        goto LABEL_3;
      v19 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v165);
      v20 = Json::Value::operator[](v19, "path");
      v125 = __PAIR__((unsigned int)v4, (unsigned int)v9);
      v21 = v12;
      sub_119C884((void **)&v162, (const char *)&unk_257BC67);
      Json::Value::asString(&v163, v20, &v162);
      v22 = (void *)(v162 - 12);
      if ( (int *)(v162 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v162 - 4);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      mce::RenderMaterial::RenderMaterial(v11);
      v23 = Json::Value::operator[](v19, "defines");
      Json::Value::begin((Json::Value *)&v160, v23);
      Json::Value::end((Json::Value *)&v159, v23);
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v160, (const Json::ValueIteratorBase *)&v159) != 1 )
        v24 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v160);
        sub_119C884((void **)&v157, (const char *)&unk_257BC67);
        Json::Value::asString(v12, v24, &v157);
        mce::RenderMaterial::addDefine((int)v11, (const void **)v12);
        v25 = (void *)(v158 - 12);
        if ( (int *)(v158 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v158 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          }
          else
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v25);
        v26 = (void *)(v157 - 12);
        if ( (int *)(v157 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v157 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v26);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v160);
      v31 = Json::Value::operator[](v19, "tag");
      sub_119C884((void **)&v155, (const char *)&unk_257BC67);
      Json::Value::asString(&v156, v31, &v155);
      v32 = (void *)(v155 - 12);
      if ( (int *)(v155 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v155 - 4);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      sub_119C854((int *)&v152, &v163);
      v153 = v152;
      v152 = (char *)&unk_28898CC;
      v154 = 0;
      ResourcePackManager::findInPacks((ResourcePackManager *)&v151, v131, (int)&v153);
      sub_119C854(&v147, v129);
      sub_119C894((const void **)&v147, "|", 1u);
      v33 = sub_119C8A4((const void **)&v147, (const void **)&v153);
      v148 = (char *)*v33;
      *v33 = &unk_28898CC;
      v34 = sub_119C894((const void **)&v148, "|", 1u);
      v149 = (char *)*v34;
      *v34 = &unk_28898CC;
      v35 = (void **)sub_119C8A4((const void **)&v149, (const void **)&v156);
      s2 = *v35;
      *v35 = &unk_28898CC;
      v36 = v149 - 12;
      if ( (int *)(v149 - 12) != &dword_28898C0 )
        v90 = (unsigned int *)(v149 - 4);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v36);
      v37 = v148 - 12;
      if ( (int *)(v148 - 12) != &dword_28898C0 )
        v92 = (unsigned int *)(v148 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v37);
      v38 = (void *)(v147 - 12);
      if ( (int *)(v147 - 12) != &dword_28898C0 )
        v94 = (unsigned int *)(v147 - 4);
            v95 = __ldrex(v94);
          while ( __strex(v95 - 1, v94) );
          v95 = (*v94)--;
        if ( v95 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      v39 = v132;
      v40 = *(_DWORD *)(HIDWORD(v125) + 44);
      v133 = v5;
      if ( v40 )
        v41 = s2;
        v42 = v132;
        v43 = *((_DWORD *)s2 - 3);
        do
          v39 = v40;
          while ( 1 )
            v44 = *(_DWORD **)(v39 + 16);
            v45 = *(v44 - 3);
            v46 = *(v44 - 3);
            if ( v45 > v43 )
              v46 = v43;
            v47 = memcmp(v44, v41, v46);
            if ( !v47 )
              v47 = v45 - v43;
            if ( v47 >= 0 )
              break;
            v39 = *(_DWORD *)(v39 + 12);
            if ( !v39 )
            {
              v39 = v42;
              goto LABEL_44;
            }
          v40 = *(_DWORD *)(v39 + 8);
          v42 = v39;
        while ( v40 );
LABEL_44:
      v11 = (mce::RenderMaterial *)&v161;
      v12 = v21;
      if ( v39 != v132 )
        v48 = *(_DWORD **)(v39 + 16);
        v49 = *((_DWORD *)s2 - 3);
        v50 = *(v48 - 3);
        v51 = *((_DWORD *)s2 - 3);
        if ( v49 > v50 )
          v51 = *(v48 - 3);
        v52 = memcmp(s2, v48, v51);
        if ( !v52 )
          v52 = v49 - v50;
        if ( v52 < 0 )
          v39 = v132;
        if ( v39 != v132 )
          v53 = v151;
          v56 = *(_QWORD *)(v39 + 20);
          v54 = *(_QWORD *)(v39 + 20) >> 32;
          v55 = v56;
          if ( v54 - (_DWORD)v56 == HIDWORD(v151) - (_DWORD)v151 )
            if ( (_DWORD)v56 == v54 )
LABEL_56:
              v5 = v133;
              v57 = 9;
              v4 = (mce::RenderMaterialGroup *)HIDWORD(v125);
              v9 = (mce::RenderMaterialGroup *)v125;
              goto LABEL_111;
            while ( PackIdVersion::operator==(v55, v53) == 1 )
              v55 += 48;
              v53 += 48;
              if ( v54 == v55 )
                goto LABEL_56;
      v4 = (mce::RenderMaterialGroup *)HIDWORD(v125);
      v58 = *(_DWORD *)v125;
      while ( v58 )
        v59 = *(_DWORD **)mce::RenderMaterial::getMaterialIdentifier(*(mce::RenderMaterial **)(v58 + 8));
        v60 = *(v59 - 3);
        if ( v60 == *((_DWORD *)s2 - 3) && !memcmp(v59, s2, v60) )
          v61 = *(_DWORD *)(v58 + 12) % (unsigned int)(*(_QWORD *)(HIDWORD(v125) + 8) >> 32);
          v62 = *(_DWORD **)(*(_QWORD *)(HIDWORD(v125) + 8) + 4 * v61);
            v63 = v62;
            v62 = (_DWORD *)*v62;
          while ( v62 != (_DWORD *)v58 );
          v58 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
                  v130,
                  v61,
                  v63,
                  v58);
          v58 = *(_DWORD *)v58;
      Json::Value::Value(&v146, 0);
      (*(void (__fastcall **)(int *))(*(_DWORD *)v131 + 16))(&v144);
      if ( v144 != v145 )
        if ( v134 == 1 )
            Json::Value::Value(&v143, 0);
            if ( Json::Reader::parse((int)&v168, (int *)(v144 + 4), (int)&v143, 1) != 1 )
            JsonUtil::patchJson((JsonUtil *)&v142, (const Json::Value *)&v146, (const Json::Value *)&v143, 58);
            Json::Value::operator=((int)&v146, (const Json::Value *)&v142);
            Json::Value::~Value((Json::Value *)&v142);
            std::vector<ResourcePath,std::allocator<ResourcePath>>::_M_erase((int)&v144, v144);
            Json::Value::~Value((Json::Value *)&v143);
            if ( v144 == v145 )
              goto LABEL_73;
          Json::Value::~Value((Json::Value *)&v143);
          v73 = 1;
          goto LABEL_88;
          Json::Value::Value(&v143, 0);
          if ( Json::Reader::parse((int)&v168, (int *)(v144 + 4), (int)&v143, 1) == 1 )
          std::vector<ResourcePath,std::allocator<ResourcePath>>::_M_erase((int)&v144, v144);
        while ( v144 != v145 );
LABEL_73:
      Json::Value::get(
        (Json::Value *)&v170,
        &v146,
        (const Json::Value *)"vertexShader",
        (const Json::Value *)&Json::Value::null);
      v64 = Json::Value::isString((Json::Value *)&v170);
      Json::Value::~Value((Json::Value *)&v170);
      if ( v64 )
        v139 = v163;
        v140 = *(_DWORD *)(v163 - 12);
        Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v172, (__int64 *)&v139);
        sub_119C884((void **)&v141, (const char *)&v173);
        v65 = (mce::RenderMaterial **)mce::RenderMaterialGroup::_material(SHIDWORD(v125), &v141, (const void **)&v156);
        v136 = v163;
        v137 = *(_DWORD *)(v163 - 12);
        Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v171, (__int64 *)&v136);
        v135 = v127;
        std::make_unique<mce::RenderMaterial,Json::Value &,mce::RenderMaterial&,Core::PathBuffer<Core::StackString<char,1024u>>,mce::TextureGroup *&,mce::SamplerGroupCache *,std::string &,std::string &>(
          &v138,
          (int)&v146,
          (mce::RenderMaterial *)&v161,
          (int)&v171,
          v126,
          &v135,
          v166,
          (int)&s2);
        v66 = v138;
        v138 = 0;
        v67 = *v65;
        *v65 = (mce::RenderMaterial *)v66;
        if ( v67 )
          v68 = mce::RenderMaterial::~RenderMaterial(v67);
          operator delete((void *)v68);
        v69 = (void *)(v141 - 12);
        if ( (int *)(v141 - 12) != &dword_28898C0 )
          v104 = (unsigned int *)(v141 - 4);
              v105 = __ldrex(v104);
            while ( __strex(v105 - 1, v104) );
            v105 = (*v104)--;
          if ( v105 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v69);
      else
        mce::RenderMaterialGroup::_loadMaterialSet(
          COERCE_DOUBLE(__PAIR__(&v146, HIDWORD(v125))),
          (int)&v161,
          (int)&v156,
      v72 = std::map<std::string,std::vector<PackIdVersion,std::allocator<PackIdVersion>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>>>::operator[](
              v128,
              (const void **)&s2);
      std::vector<PackIdVersion,std::allocator<PackIdVersion>>::operator=((int)v72, &v151);
      v73 = 0;
LABEL_88:
      v124 = v73;
      *(_QWORD *)&v74 = *(_QWORD *)&v144;
      v9 = (mce::RenderMaterialGroup *)v125;
          v80 = *(_DWORD *)(v74 + 4);
          v81 = (void *)(v80 - 12);
          if ( (int *)(v80 - 12) != &dword_28898C0 )
            v76 = (unsigned int *)(v80 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v77 = __ldrex(v76);
              while ( __strex(v77 - 1, v76) );
            else
              v77 = (*v76)--;
            if ( v77 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v81);
          v82 = (int *)(*(_DWORD *)v74 - 12);
          if ( v82 != &dword_28898C0 )
            v78 = (unsigned int *)(*(_DWORD *)v74 - 4);
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v82);
          v74 += 8;
        while ( v74 != v75 );
        v74 = v144;
      if ( v74 )
        operator delete((void *)v74);
      Json::Value::~Value((Json::Value *)&v146);
      v5 = v133;
      v57 = v124;
LABEL_111:
      v83 = (char *)s2 - 12;
      if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
        v96 = (unsigned int *)((char *)s2 - 4);
            v97 = __ldrex(v96);
          while ( __strex(v97 - 1, v96) );
          v97 = (*v96)--;
        if ( v97 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v83);
      std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector(&v151);
      v84 = v153 - 12;
      if ( (int *)(v153 - 12) != &dword_28898C0 )
        v98 = (unsigned int *)(v153 - 4);
            v99 = __ldrex(v98);
          while ( __strex(v99 - 1, v98) );
          v99 = (*v98)--;
        if ( v99 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v84);
      v85 = (void *)(v156 - 12);
      if ( (int *)(v156 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v156 - 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v85);
      mce::RenderMaterial::~RenderMaterial((mce::RenderMaterial *)&v161);
      v86 = (void *)(v163 - 12);
      if ( (int *)(v163 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v163 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v86);
      v87 = v57 == 0;
      if ( v57 )
        v87 = v57 == 9;
      if ( !v87 )
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v165);
  }
  v9 = (mce::RenderMaterialGroup *)((char *)v4 + 16);
LABEL_215:
  v110 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 )
    if ( v134 == 1 )
      while ( 1 )
        v7 = (mce::Shader *)mce::RenderMaterial::compileShaderPrograms(*(mce::RenderMaterial **)(v110 + 8), v5);
        if ( v7 != (mce::Shader *)1 )
          break;
        mce::RenderMaterial::loadShader(*(mce::RenderMaterial **)(v110 + 8), v5);
        v7 = (mce::Shader *)mce::RenderMaterial::isAbstract(*(mce::RenderMaterial **)(v110 + 8));
        if ( !v7 )
          v111 = (mce::Shader *)mce::RenderMaterial::getShader(*(mce::RenderMaterial **)(v110 + 8));
          v7 = (mce::Shader *)mce::Shader::finalizeShaderUniforms(v111);
        v110 = *(_DWORD *)v110;
        if ( !v110 )
          goto LABEL_225;
      v123 = 0;
      goto LABEL_226;
    do
      mce::RenderMaterial::loadShader(*(mce::RenderMaterial **)(v110 + 8), v5);
      v7 = (mce::Shader *)mce::RenderMaterial::isAbstract(*(mce::RenderMaterial **)(v110 + 8));
      if ( !v7 )
        v112 = (mce::Shader *)mce::RenderMaterial::getShader(*(mce::RenderMaterial **)(v110 + 8));
        v7 = (mce::Shader *)mce::Shader::finalizeShaderUniforms(v112);
      v110 = *(_DWORD *)v110;
    while ( v110 );
LABEL_225:
  v123 = 1;
LABEL_226:
  mce::Shader::freeCompilerResources(v7);
LABEL_227:
  v114 = v167;
  v113 = v166;
      v119 = *(_DWORD *)(v113 + 4);
      v120 = (void *)(v119 - 12);
      if ( (int *)(v119 - 12) != &dword_28898C0 )
        v115 = (unsigned int *)(v119 - 4);
            v116 = __ldrex(v115);
          while ( __strex(v116 - 1, v115) );
          v116 = (*v115)--;
        if ( v116 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v120);
      v121 = (int *)(*(_DWORD *)v113 - 12);
      if ( v121 != &dword_28898C0 )
        v117 = (unsigned int *)(*(_DWORD *)v113 - 4);
            v118 = __ldrex(v117);
          while ( __strex(v118 - 1, v117) );
          v118 = (*v117)--;
        if ( v118 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v121);
      v113 += 8;
    while ( v113 != v114 );
    v113 = v166;
  if ( v113 )
    operator delete((void *)v113);
  Json::Reader::~Reader((Json::Reader *)&v168);
  Json::Value::~Value((Json::Value *)&v169);
  if ( _stack_chk_guard != v174 )
    _stack_chk_fail(_stack_chk_guard - v174);
  return v123;
}


mce::DeviceInformationBase *__fastcall mce::DeviceInformationBase::~DeviceInformationBase(mce::DeviceInformationBase *this)
{
  mce::DeviceInformationBase *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 13);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 12);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 2);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v1;
}


mce::DeviceInformationBase *__fastcall mce::DeviceInformationBase::DeviceInformationBase(mce::DeviceInformationBase *this)
{
  mce::DeviceInformationBase *v1; // r4@1
  mce::DeviceInformationBase *result; // r0@1

  v1 = this;
  *(_DWORD *)this = 0;
  mce::AdapterDescription::AdapterDescription((mce::DeviceInformationBase *)((char *)this + 8));
  *((_DWORD *)v1 + 12) = &unk_28898CC;
  *((_DWORD *)v1 + 13) = &unk_28898CC;
  *((_DWORD *)v1 + 14) = &unk_28898CC;
  result = v1;
  *((_BYTE *)v1 + 60) = 0;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  return result;
}


int __fastcall mce::glInvalidateFramebufferMCE(int result, unsigned int a2, int a3, const unsigned int *a4)
{
  int (__fastcall *v4)(int, unsigned int, int); // r3@2

  if ( GLAD_GL_ES_VERSION_3_0 )
  {
    v4 = (int (__fastcall *)(int, unsigned int, int))glad_glInvalidateFramebuffer;
    return v4(result, a2, a3);
  }
  if ( GLAD_GL_EXT_discard_framebuffer )
    v4 = (int (__fastcall *)(int, unsigned int, int))glad_glDiscardFramebufferEXT;
    if ( glad_glDiscardFramebufferEXT )
      return v4(result, a2, a3);
  return result;
}


int __fastcall mce::RenderContext::endFrame(mce::RenderContext *this)
{
  *((_BYTE *)this + 372) = 0;
  return j_j_j__ZN3mce17RenderContextBase8endFrameEv(this);
}


void __fastcall mce::ShaderConstantFloat3::~ShaderConstantFloat3(mce::ShaderConstantFloat3 *this)
{
  mce::ShaderConstantFloat3::~ShaderConstantFloat3(this);
}


int __fastcall mce::Mesh::clearGlobalBuffers(mce::Mesh *this)
{
  int v1; // r0@1

  v1 = mce::RenderContextImmediate::get(this);
  return j_j_j__ZN3mce15ImmediateBuffer13releaseBufferEv((mce::ImmediateBuffer *)(v1 + 196));
}


void __fastcall mce::ShaderConstantFloat3::~ShaderConstantFloat3(mce::ShaderConstantFloat3 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall mce::ConstantBufferMetaData::ConstantBufferMetaData(int result)
{
  *(_QWORD *)result = (unsigned int)&unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall mce::FrameBufferObjectOGL::resolveFrameBuffer(mce::FrameBufferObjectOGL *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1
  __int64 v2; // ST08_8@1

  v1 = this;
  mce::FrameBufferObjectBase::resolveFrameBuffer(this);
  glad_glBindFramebuffer(36008, *((_DWORD *)v1 + 11));
  glad_glBindFramebuffer(36009, 0);
  v2 = *((_QWORD *)v1 + 1);
  return glad_glBlitFramebuffer(0, 0);
}


char *__fastcall mce::TextureGroup::addManualTexture(mce::TextureGroup *this, TexturePair *a2)
{
  mce::TextureGroup *v2; // r4@1
  TexturePair *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 84);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 20);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *((_QWORD *)v2 + 10) >> 32;
      v6 = (void *)*((_QWORD *)v2 + 10);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *((_QWORD *)v2 + 10) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 22) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 21) + 4);
    *((_DWORD *)v2 + 21) = result;
  return result;
}


signed int __fastcall mce::operator>(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VMOV            S2, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


void __fastcall mce::UUID::asString(mce::UUID *this)
{
  JUMPOUT(mce::UUID::asString);
}


int __fastcall mce::TextureDescription::getMipWidth(mce::TextureDescription *this, unsigned int a2)
{
  return *(_DWORD *)this >> a2;
}


void __fastcall mce::DebugConstants::init(mce::DebugConstants *this)
{
  mce::DebugConstants::init(this);
}


void __fastcall mce::ShaderOGL::linkShader(mce::ShaderOGL *this)
{
  JUMPOUT(mce::ShaderOGL::linkShader);
}


int __fastcall mce::RenderMaterial::useWith(mce::RenderMaterial *this, mce::RenderContext *a2, const mce::VertexFormat *a3, void *a4)
{
  mce::RenderMaterial *v4; // r5@1
  void *v5; // r10@1
  const mce::VertexFormat *v6; // r8@1
  mce::RenderContext *v7; // r9@1
  int v8; // r1@2
  int v9; // r2@2
  int v14; // r2@4
  int v15; // r3@4
  __int64 v16; // r0@4
  unsigned int v18; // r6@7
  signed int v19; // r7@7
  mce::Texture *v20; // r0@9
  int v21; // r0@12
  int v22; // r1@12
  mce::RenderContextImmediate *v23; // r0@13
  int v24; // r0@13
  int v25; // r1@13
  mce::RenderContextImmediate *v26; // r0@13
  mce::PipelineStateObject *v27; // r11@14
  void *v28; // r6@15
  int v29; // r0@15
  int v30; // r1@15
  unsigned int v31; // r10@15
  int v32; // r1@15
  int v33; // r7@17
  int v34; // ST18_4@19
  int v35; // r0@21
  void *v36; // r6@23
  int v37; // r0@23
  int v38; // r1@23
  unsigned int v39; // r10@23
  int v40; // r1@23
  int v41; // r7@25
  int v42; // ST18_4@27
  float v44; // [sp+0h] [bp-98h]@0
  float v45; // [sp+4h] [bp-94h]@0
  int v46; // [sp+20h] [bp-78h]@15
  int v47; // [sp+20h] [bp-78h]@23
  int v48; // [sp+24h] [bp-74h]@15
  int v49; // [sp+24h] [bp-74h]@23
  int v50; // [sp+28h] [bp-70h]@4
  char *v51; // [sp+2Ch] [bp-6Ch]@1
  void *v52; // [sp+30h] [bp-68h]@23
  char *v53; // [sp+34h] [bp-64h]@23
  char *v54; // [sp+38h] [bp-60h]@23
  void *ptr; // [sp+3Ch] [bp-5Ch]@15
  char *v56; // [sp+40h] [bp-58h]@15
  char *v57; // [sp+44h] [bp-54h]@15
  int v58; // [sp+48h] [bp-50h]@2
  int v59; // [sp+4Ch] [bp-4Ch]@2
  int v60; // [sp+50h] [bp-48h]@2
  char v61; // [sp+58h] [bp-40h]@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v51 = (char *)this + 80;
  mce::BlendState::bindBlendState((mce::RenderMaterial *)((char *)this + 80), a2);
  if ( (_BYTE)mce::EnableScissorTest::mScissorTestEnabled )
  {
    mce::RasterizerState::RasterizerState((mce::RasterizerState *)&v61);
    v8 = *((_DWORD *)v4 + 125);
    v9 = *((_DWORD *)v4 + 126);
    v58 = *((_DWORD *)v4 + 124);
    v59 = v8;
    v60 = v9;
    BYTE2(v60) = 1;
    mce::RasterizerState::createRasterizerStateDescription(
      (mce::RasterizerState *)&v61,
      v7,
      (const mce::RasterizerStateDescription *)&v58);
    mce::RasterizerState::bindRasterizerState((mce::RasterizerState *)&v61, v7);
    _R0 = &mce::EnableScissorTest::mActiveScissorBox;
    __asm
    {
      VLDR            S0, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S0, [SP,#0x98+var_98]
      VSTR            S2, [SP,#0x98+var_94]
    }
    mce::RasterizerState::setScissorRect(
      *(float *)&mce::EnableScissorTest::mActiveScissorBox,
      unk_27E8758,
      v44,
      v45);
    mce::RasterizerStateDescription::~RasterizerStateDescription((mce::RasterizerStateDescription *)&v58);
    mce::RasterizerState::~RasterizerState((mce::RasterizerState *)&v61);
  }
  else
    mce::RasterizerState::bindRasterizerState((mce::RenderMaterial *)((char *)v4 + 468), v7);
  v50 = (int)v4 + 116;
  mce::DepthStencilState::bindDepthStencilState((mce::RenderMaterial *)((char *)v4 + 116), v7);
  mce::SamplerStateGroupBase::bindSamplerStateGroup((mce::RenderMaterial *)((char *)v4 + 276), v7, v14, v15);
  LODWORD(v16) = *((_BYTE *)v4 + 64);
  _ZF = (_DWORD)v16 == 0;
  if ( *((_BYTE *)v4 + 64) )
    v16 = *(_QWORD *)((char *)v4 + 68);
    _ZF = HIDWORD(v16) == (_DWORD)v16;
  if ( !_ZF )
    v18 = 0;
    v19 = 32;
    do
      if ( *(_BYTE *)(v16 + v19) )
      {
        v20 = (mce::Texture *)mce::TexturePtr::operator->(v16 + v19 - 24);
        mce::Texture::bindTexture(v20, v7, v18, 2u);
        v16 = *(_QWORD *)((char *)v4 + 68);
      }
      v19 += 36;
      ++v18;
    while ( v18 < 954437177 * ((HIDWORD(v16) - (signed int)v16) >> 2) );
  dword_27E8A50 = (int)v4;
  if ( mce::VertexFormat::operator!=((int)v6, (int)v4 + 456) == 1 )
    v21 = *(_DWORD *)v6;
    v22 = *((_DWORD *)v6 + 1);
    *((_BYTE *)v4 + 464) = *((_BYTE *)v6 + 8);
    *((_DWORD *)v4 + 115) = v22;
    *((_DWORD *)v4 + 114) = v21;
    mce::RenderMaterial::createPSOs(v4);
  v23 = (mce::RenderContextImmediate *)mce::Shader::bindShader(
                                         *((mce::Shader **)v4 + 15),
                                         v7,
                                         (mce::RenderMaterial *)((char *)v4 + 456),
                                         v5,
                                         7u);
  v24 = mce::RenderContextImmediate::get(v23);
  v25 = *((_DWORD *)v4 + 129);
  v26 = *(mce::RenderContextImmediate **)(v24 + 116);
  if ( (unsigned int)v26 < 2 )
    v27 = (mce::RenderMaterial *)((char *)v4 + 520);
    if ( !(v25 & 1) )
      v49 = mce::RenderContextImmediate::get(v26);
      v36 = 0;
      v47 = *((_DWORD *)v4 + 15);
      v37 = *(_QWORD *)((char *)v4 + 444) >> 32;
      v38 = *(_QWORD *)((char *)v4 + 444);
      v52 = 0;
      v53 = 0;
      v39 = v37 - v38;
      _ZF = v37 == v38;
      v40 = v37;
      v54 = 0;
      if ( !_ZF )
        v36 = operator new(v39);
        v37 = *(_QWORD *)((char *)v4 + 444) >> 32;
        v40 = *(_QWORD *)((char *)v4 + 444);
      v41 = v37 - v40;
      v52 = v36;
      v53 = (char *)v36;
      v54 = (char *)v36 + v39;
      if ( v37 != v40 )
        _aeabi_memmove(v36, v40);
      v53 = (char *)v36 + v41;
      v42 = *((_BYTE *)v4 + 508);
      mce::PipelineStateObject::createPipelineState(
        (int)v4 + 520,
        v49,
        (int)v51,
        v50,
        (int)v4 + 468,
        v47,
        (unsigned __int64 *)&v52,
        (int)v6,
        *((_BYTE *)v4 + 509));
      if ( v52 )
        operator delete(v52);
      v35 = *((_DWORD *)v4 + 129) | 1;
      goto LABEL_30;
    v27 = (mce::RenderMaterial *)((char *)v4 + 521);
    if ( !(v25 & 2) )
      v48 = mce::RenderContextImmediate::get(v26);
      v28 = 0;
      v46 = *((_DWORD *)v4 + 15);
      v29 = *(_QWORD *)((char *)v4 + 444) >> 32;
      v30 = *(_QWORD *)((char *)v4 + 444);
      ptr = 0;
      v56 = 0;
      v31 = v29 - v30;
      _ZF = v29 == v30;
      v32 = v29;
      v57 = 0;
        v28 = operator new(v31);
        v29 = *(_QWORD *)((char *)v4 + 444) >> 32;
        v32 = *(_QWORD *)((char *)v4 + 444);
      v33 = v29 - v32;
      ptr = v28;
      v56 = (char *)v28;
      v57 = (char *)v28 + v31;
      if ( v29 != v32 )
        _aeabi_memmove(v28, v32);
      v56 = (char *)v28 + v33;
      v34 = *((_BYTE *)v4 + 508);
        (int)v4 + 521,
        v48,
        v46,
        (unsigned __int64 *)&ptr,
      if ( ptr )
        operator delete(ptr);
      v35 = *((_DWORD *)v4 + 129) | 2;
LABEL_30:
      *((_DWORD *)v4 + 129) = v35;
      return mce::PipelineStateObject::bindPipelineState(v27, v7);
  return mce::PipelineStateObject::bindPipelineState(v27, v7);
}


void __fastcall mce::ShaderConstantInt3::~ShaderConstantInt3(mce::ShaderConstantInt3 *this)
{
  mce::ShaderConstantInt3::~ShaderConstantInt3(this);
}


int __fastcall mce::TextureOGL::TextureOGL(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  mce::RenderContextStateBase *v4; // r0@4

  v2 = a2;
  v3 = a1;
  mce::TextureBase::TextureBase(a1, a2);
  if ( v2 != v3 )
  {
    if ( *(_DWORD *)(v3 + 44) )
    {
      glad_glDeleteTextures(1, v3 + 44);
      *(_DWORD *)(v3 + 44) = 0;
      *(_DWORD *)(v3 + 48) = 0;
      *(_DWORD *)(v3 + 52) = 0;
      *(_DWORD *)(v3 + 56) = 0;
      *(_DWORD *)(v3 + 60) = 0;
      if ( mce::RenderContextImmediate::exists(0) == (mce::RenderDeviceBase *)1 )
      {
        v4 = (mce::RenderContextStateBase *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)1);
        mce::RenderContextStateBase::removeIfBound(v4, (const mce::TextureBase *)v3);
        mce::TextureBase::deleteTexture((mce::TextureBase *)v3);
      }
    }
    *(_DWORD *)(v3 + 44) = *(_DWORD *)(v2 + 44);
    *(_DWORD *)(v3 + 48) = *(_DWORD *)(v2 + 48);
    *(_DWORD *)(v3 + 52) = *(_DWORD *)(v2 + 52);
    *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 56);
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(v2 + 60);
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_DWORD *)(v2 + 60) = 0;
  }
  mce::TextureBase::operator=(v3, v2);
  return v3;
}


int __fastcall mce::RenderContextOGL::unbindAllTextures(mce::RenderContextOGL *this)
{
  mce::RenderContextOGL *v1; // r4@1

  v1 = this;
  if ( *((_DWORD *)this + 68) != 33984 )
  {
    glad_glActiveTexture(33984);
    *((_DWORD *)v1 + 68) = 33984;
  }
  glad_glBindTexture(3553, 0);
  *((_DWORD *)v1 + 33) = 0;
  if ( *((_DWORD *)v1 + 68) != 33985 )
    glad_glActiveTexture(33985);
    *((_DWORD *)v1 + 68) = 33985;
  *((_DWORD *)v1 + 34) = 0;
  if ( *((_DWORD *)v1 + 68) != 33986 )
    glad_glActiveTexture(33986);
    *((_DWORD *)v1 + 68) = 33986;
  *((_DWORD *)v1 + 35) = 0;
  if ( *((_DWORD *)v1 + 68) != 33987 )
    glad_glActiveTexture(33987);
    *((_DWORD *)v1 + 68) = 33987;
  *((_DWORD *)v1 + 36) = 0;
  if ( *((_DWORD *)v1 + 68) != 33988 )
    glad_glActiveTexture(33988);
    *((_DWORD *)v1 + 68) = 33988;
  *((_DWORD *)v1 + 37) = 0;
  if ( *((_DWORD *)v1 + 68) != 33989 )
    glad_glActiveTexture(33989);
    *((_DWORD *)v1 + 68) = 33989;
  *((_DWORD *)v1 + 38) = 0;
  if ( *((_DWORD *)v1 + 68) != 33990 )
    glad_glActiveTexture(33990);
    *((_DWORD *)v1 + 68) = 33990;
  *((_DWORD *)v1 + 39) = 0;
  if ( *((_DWORD *)v1 + 68) != 33991 )
    glad_glActiveTexture(33991);
    *((_DWORD *)v1 + 68) = 33991;
  *((_DWORD *)v1 + 40) = 0;
  return j_j_j__ZN3mce17RenderContextBase17unbindAllTexturesEv(v1);
}


int __fastcall mce::BlendStateOGL::createBlendState(mce::BlendStateOGL *this, mce::RenderContext *a2, const mce::BlendStateDescription *a3)
{
  const mce::BlendStateDescription *v3; // r5@1
  mce::RenderContext *v4; // r4@1
  mce::BlendStateOGL *v5; // r6@1
  unsigned int v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r0@2
  unsigned int v9; // r0@4
  int v10; // r0@5
  unsigned int v11; // r0@7
  int v12; // r0@8
  unsigned int v13; // r0@10
  int v14; // r0@11
  int result; // r0@13
  __int16 v16; // r1@14
  int v17; // r2@14

  v3 = a3;
  v4 = a2;
  v5 = this;
  mce::BlendStateBase::createBlendState(this, a2, a3);
  *((_BYTE *)v5 + 7) = *((_BYTE *)v3 + 5);
  v6 = *((_BYTE *)v3 + 4);
  *((_BYTE *)v5 + 8) = v6 & 1;
  *((_BYTE *)v5 + 9) = (v6 >> 1) & 1;
  *((_BYTE *)v5 + 10) = (v6 >> 2) & 1;
  *((_BYTE *)v5 + 11) = (v6 >> 3) & 1;
  v7 = *(_BYTE *)v3;
  if ( v7 > 8 )
    v8 = 0;
  else
    v8 = dword_262D3F0[v7];
  *((_DWORD *)v5 + 3) = v8;
  v9 = *((_BYTE *)v3 + 1);
  if ( v9 > 8 )
    v10 = 0;
    v10 = dword_262D3F0[v9];
  *((_DWORD *)v5 + 4) = v10;
  v11 = *((_BYTE *)v3 + 2);
  if ( v11 > 8 )
    v12 = 0;
    v12 = dword_262D3F0[v11];
  *((_DWORD *)v5 + 5) = v12;
  v13 = *((_BYTE *)v3 + 3);
  if ( v13 > 8 )
    v14 = 0;
    v14 = dword_262D3F0[v13];
  *((_DWORD *)v5 + 6) = v14;
  result = *((_BYTE *)v4 + 120);
  if ( !*((_BYTE *)v4 + 120) )
  {
    mce::BlendStateOGL::bindBlendState(v5, v4, 1);
    result = *((_BYTE *)v3 + 6);
    v16 = *((_WORD *)v3 + 2);
    v17 = *(_DWORD *)v3;
    *((_BYTE *)v4 + 6) = result;
    *((_WORD *)v4 + 2) = v16;
    *(_DWORD *)v4 = v17;
    *((_BYTE *)v4 + 120) = 1;
  }
  return result;
}


mce::AlignmentHelper *__fastcall mce::AlignmentHelper::getAlignedOffset(mce::AlignmentHelper *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3@1
  bool v4; // cf@1
  mce::AlignmentHelper *v5; // r1@1

  v3 = 16 - ((unsigned __int8)this & 0xF);
  v4 = v3 >= a2;
  v5 = this;
  if ( !v4 )
    v5 = (mce::AlignmentHelper *)((char *)this + v3);
  if ( !((unsigned __int8)this & 0xF) )
    v5 = this;
  return v5;
}


int __fastcall mce::glFramebufferTexture2DMultisampleMCE(int result, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6, int a7)
{
  int (__fastcall *v7)(int, unsigned int, unsigned int, unsigned int); // r12@1

  v7 = (int (__fastcall *)(int, unsigned int, unsigned int, unsigned int))glad_glFramebufferTexture2DMultisampleEXT;
  if ( glad_glFramebufferTexture2DMultisampleEXT
    || (v7 = (int (__fastcall *)(int, unsigned int, unsigned int, unsigned int))glad_glFramebufferTexture2DMultisampleIMG) != 0 )
  {
    result = v7(result, a2, a3, a4);
  }
  return result;
}


mce::Buffer *__fastcall mce::Mesh::Mesh(mce::Buffer *a1, int a2)
{
  int v2; // r5@1
  mce::Buffer *v3; // r4@1
  __int64 v4; // r2@1
  int v5; // r1@1

  v2 = a2;
  v3 = a1;
  mce::Buffer::Buffer(a1);
  mce::Buffer::Buffer((mce::Buffer *)((char *)v3 + 32));
  mce::VertexFormat::VertexFormat((mce::Buffer *)((char *)v3 + 64));
  mce::Buffer::operator=((int)v3, v2);
  mce::Buffer::operator=((int)v3 + 32, v2 + 32);
  *((_DWORD *)v3 + 21) = *(_DWORD *)(v2 + 84);
  *((_DWORD *)v3 + 20) = *(_DWORD *)(v2 + 80);
  *((_BYTE *)v3 + 92) = *(_BYTE *)(v2 + 92);
  *((_DWORD *)v3 + 22) = *(_DWORD *)(v2 + 88);
  v4 = *(_QWORD *)(v2 + 64);
  *((_BYTE *)v3 + 72) = *(_BYTE *)(v2 + 72);
  *((_QWORD *)v3 + 8) = v4;
  *((_DWORD *)v3 + 19) = *(_DWORD *)(v2 + 76);
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 0;
  LODWORD(v4) = mce::VertexFormat::EMPTY;
  v5 = unk_27E8CB0;
  *(_BYTE *)(v2 + 72) = unk_27E8CB4;
  *(_DWORD *)(v2 + 68) = v5;
  *(_DWORD *)(v2 + 64) = v4;
  *((_DWORD *)v3 + 24) = *(_DWORD *)(v2 + 96);
  return v3;
}


int __fastcall mce::RenderStage::preRenderUpdate(int result)
{
  int *v1; // r5@1 OVERLAPPED
  int *v2; // r6@1 OVERLAPPED
  int v3; // t1@2

  for ( *(_QWORD *)&v1 = *(_QWORD *)(result + 4); v2 != v1; result = (*(int (**)(void))(*(_DWORD *)v3 + 64))() )
  {
    v3 = *v1;
    v1 += 2;
  }
  return result;
}


signed int __fastcall mce::SamplerGroupCache::add(int a1, int a2, int a3)
{
  char v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+Ch] [bp-Ch]@1

  v5 = a2;
  return std::_Hashtable<unsigned int,std::pair<unsigned int const,std::shared_ptr<mce::SamplerStateHeapEntry>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<mce::SamplerStateHeapEntry>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<unsigned int const&,std::shared_ptr<mce::SamplerStateHeapEntry> const&>(
           &v4,
           a1,
           &v5,
           a3);
}


int __fastcall mce::QuadIndexBuffer::onAppSuspended(mce::QuadIndexBuffer *this)
{
  mce::Buffer *v1; // r4@1
  int result; // r0@1

  v1 = (mce::QuadIndexBuffer *)((char *)this + 8);
  *((_DWORD *)this + 10) = 1;
  result = mce::Buffer::isValid((mce::QuadIndexBuffer *)((char *)this + 8));
  if ( result == 1 )
    result = j_j_j__ZN3mce6Buffer13releaseBufferEv(v1);
  return result;
}


int __fastcall mce::LRUCache::LRUCache(int a1, unsigned int a2, int a3)
{
  int v3; // r4@1
  double v4; // r0@3
  _DWORD *v5; // r0@3
  int v6; // r5@3
  unsigned int v7; // r0@3
  int v8; // r7@5
  void *v9; // r6@5
  void (__fastcall *v10)(int *, int, signed int); // r3@6
  int v11; // r6@7 OVERLAPPED
  int v12; // r5@7 OVERLAPPED
  _QWORD *v13; // r0@8
  __int64 v14; // r1@8
  int v16; // [sp+0h] [bp-28h]@7
  int v17; // [sp+8h] [bp-20h]@6
  int v18; // [sp+Ch] [bp-1Ch]@7

  v3 = a1;
  if ( a2 <= 0xA00000 )
    a2 = 10485760;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  HIDWORD(v4) = 10;
  *(_DWORD *)(a1 + 12) = 0;
  v5 = (_DWORD *)(a1 + 12);
  v6 = a3;
  *v5 = v5;
  *(_DWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 1065353216;
  LODWORD(v4) = v3 + 36;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v7 = sub_21E6254(v4);
  *(_DWORD *)(v3 + 24) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v3 + 44) = 0;
    v9 = (void *)(v3 + 44);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 20) = v9;
  v17 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v10 )
    v10(&v16, v6, 2);
    v11 = *(_DWORD *)(v6 + 12);
    v18 = *(_DWORD *)(v6 + 12);
    v12 = *(_DWORD *)(v6 + 8);
    v17 = v12;
    *(_DWORD *)(v3 + 56) = 0;
    if ( v12 )
    {
      v13 = operator new(0x10u);
      *v13 = *(_QWORD *)&v16;
      v17 = 0;
      HIDWORD(v14) = std::_Function_handler<void ()(ResourceLocation const&),std::function<void ()(ResourceLocation)>>::_M_invoke;
      LODWORD(v14) = std::_Function_base::_Base_manager<std::function<void ()(ResourceLocation)>>::_M_manager;
      v13[1] = *(_QWORD *)&v12;
      *(_DWORD *)(v3 + 48) = v13;
      *(_QWORD *)(v3 + 56) = v14;
    }
  return v3;
}


int __fastcall mce::ShaderConstantMatrix3x3::syncUniform(mce::ShaderConstantMatrix3x3 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniformMatrix3fv(a2, a3, 0, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


mce::ConstantBufferContainerBase *__fastcall mce::ConstantBufferContainerBase::reserveMemoryForShaderConstants(mce::ConstantBufferContainerBase *this, unsigned int a2, unsigned int a3)
{
  mce::ConstantBufferContainerBase *v3; // r10@1
  unsigned int v4; // r9@1
  unsigned int v5; // r8@1
  char *v6; // r7@1
  int v7; // r11@1
  int v8; // r4@1
  int v9; // r6@2
  mce::ConstantBufferContainerBase *result; // r0@7
  int v11; // r1@7
  unsigned int v12; // r2@7

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (char *)this + 12;
  v7 = *((_DWORD *)this + 3);
  v8 = *((_DWORD *)this + 4);
  if ( v7 != v8 )
  {
    v9 = *((_DWORD *)this + 3);
    do
    {
      if ( *(_DWORD *)v9 )
        (*(void (**)(void))(**(_DWORD **)v9 + 4))();
      *(_DWORD *)v9 = 0;
      v9 += 4;
    }
    while ( v8 != v9 );
    *((_DWORD *)v3 + 4) = v7;
  }
  std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::reserve(
    (int)v6,
    v5);
  result = (mce::ConstantBufferContainerBase *)((char *)v3 + 24);
  v11 = *((_DWORD *)v3 + 6);
  v12 = *((_DWORD *)v3 + 7) - v11;
  if ( v12 >= v4 )
    if ( v12 > v4 )
      result = (mce::ConstantBufferContainerBase *)(v11 + v4);
      *((_DWORD *)v3 + 7) = v11 + v4;
  else
    result = (mce::ConstantBufferContainerBase *)j_j_j__ZNSt6vectorIhN3mce15AlignmentHelper18AlignmentAllocatorIhLj16EEEE17_M_default_appendEj(
                                                   (int)result,
                                                   v4 - v12);
  return result;
}


mce::RenderContext *__fastcall mce::Mesh::loadIndexBuffer(mce::Mesh *this, unsigned int a2, const void *a3, unsigned int a4)
{
  unsigned int v4; // r4@1
  const void *v5; // r8@1
  unsigned int v6; // r5@1
  mce::Mesh *v7; // r6@1
  mce::RenderContext *result; // r0@1
  mce::RenderContext *v9; // r9@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  result = (mce::RenderContext *)mce::RenderContextImmediate::get(this);
  v9 = result;
  if ( v4 )
  {
    if ( mce::Buffer::isValid((mce::Mesh *)((char *)v7 + 32)) == 1 )
    {
      result = (mce::RenderContext *)mce::Buffer::recreateBuffer((mce::Mesh *)((char *)v7 + 32), v9, v6, v5, v4);
    }
    else
      mce::Buffer::createDynamicIndexBuffer((mce::Mesh *)((char *)v7 + 32), v9, v6, v4);
      result = (mce::RenderContext *)mce::Buffer::updateBuffer((mce::Mesh *)((char *)v7 + 32), v9, v6, v5, v4);
  }
  *((_DWORD *)v7 + 20) = v4;
  *((_DWORD *)v7 + 22) = v6;
  return result;
}


mce::GlobalConstantBuffers *__fastcall mce::GlobalConstantBuffers::GlobalConstantBuffers(mce::GlobalConstantBuffers *this)
{
  mce::GlobalConstantBuffers *v1; // r4@1

  v1 = this;
  mce::RenderChunkConstants::RenderChunkConstants(this);
  mce::WorldConstants::WorldConstants((mce::GlobalConstantBuffers *)((char *)v1 + 12));
  mce::WorldConstantsHolographic::WorldConstantsHolographic((mce::GlobalConstantBuffers *)((char *)v1 + 36));
  mce::PerFrameConstants::PerFrameConstants((mce::GlobalConstantBuffers *)((char *)v1 + 516));
  mce::EntityConstants::EntityConstants((mce::GlobalConstantBuffers *)((char *)v1 + 548));
  mce::ShaderConstants::ShaderConstants((mce::GlobalConstantBuffers *)((char *)v1 + 588));
  mce::EffectConstants::EffectConstants((mce::GlobalConstantBuffers *)((char *)v1 + 616));
  mce::WeatherConstants::WeatherConstants((mce::GlobalConstantBuffers *)((char *)v1 + 628));
  mce::FlipbookTextureConstants::FlipbookTextureConstants((mce::GlobalConstantBuffers *)((char *)v1 + 668));
  mce::TextConstants::TextConstants((mce::GlobalConstantBuffers *)((char *)v1 + 684));
  mce::InterFrameConstants::InterFrameConstants((mce::GlobalConstantBuffers *)((char *)v1 + 720));
  mce::DebugConstants::DebugConstants((mce::GlobalConstantBuffers *)((char *)v1 + 736));
  mce::BannerConstants::BannerConstants((mce::GlobalConstantBuffers *)((char *)v1 + 748));
  return v1;
}


void __fastcall mce::WorldConstants::~WorldConstants(mce::WorldConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall mce::FrameBufferObjectBase::createFrameBufferAttachmentAndTexture(mce::FrameBufferObjectBase *this, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, mce::Texture *a4)
{
  mce::FrameBufferObjectBase *v4; // r11@1
  mce::Texture *v5; // r8@1
  const mce::FrameBufferAttachmentDescription *v6; // r10@1
  mce::RenderContext *v7; // r9@1
  void *v8; // r5@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r6@1
  int v13; // r7@1
  int v14; // r0@1
  int v15; // r3@1
  int v16; // r4@1
  int v17; // r6@1
  int v18; // r7@1
  int v19; // r0@1
  int v20; // r3@1
  int v21; // r4@1
  int v22; // r6@1
  int v23; // r7@1
  int v24; // r0@1
  __int64 v25; // r0@5
  int v26; // r4@6
  void *v27; // r0@8
  mce::FrameBufferAttachment *v29; // [sp+0h] [bp-28h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = operator new(0x5Cu);
  mce::FrameBufferAttachment::FrameBufferAttachment((mce::FrameBufferAttachment *)v8);
  v29 = (mce::FrameBufferAttachment *)v8;
  *((_DWORD *)v8 + 2) = v4;
  v9 = (int)v8 + 12;
  v10 = *((_DWORD *)v6 + 1);
  v11 = *((_DWORD *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  *(_DWORD *)v9 = *(_DWORD *)v6;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  v14 = (int)v8 + 32;
  v15 = *((_DWORD *)v6 + 6);
  v16 = *((_DWORD *)v6 + 7);
  v17 = *((_DWORD *)v6 + 8);
  v18 = *((_DWORD *)v6 + 9);
  *(_DWORD *)v14 = *((_DWORD *)v6 + 5);
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 12) = v17;
  *(_DWORD *)(v14 + 16) = v18;
  v19 = (int)v8 + 52;
  v20 = *((_DWORD *)v6 + 11);
  v21 = *((_DWORD *)v6 + 12);
  v22 = *((_DWORD *)v6 + 13);
  v23 = *((_DWORD *)v6 + 14);
  *(_DWORD *)v19 = *((_DWORD *)v6 + 10);
  *(_DWORD *)(v19 + 4) = v20;
  *(_DWORD *)(v19 + 8) = v21;
  *(_DWORD *)(v19 + 12) = v22;
  *(_DWORD *)(v19 + 16) = v23;
  *((_BYTE *)v8 + 72) = *((_BYTE *)v6 + 60);
  v24 = *((_DWORD *)v8 + 17);
  if ( (unsigned int)(v24 - 2) >= 3 )
  {
    if ( v24 == 1 )
    {
      *((_DWORD *)v4 + 7) = v8;
      ++*((_DWORD *)v4 + 9);
    }
  }
  else
    *((_DWORD *)v4 + 8) = v8;
  *(_QWORD *)((char *)v8 + 36) = *(_QWORD *)v4;
  *((_DWORD *)v8 + 3) = *((_DWORD *)v4 + 2);
  *((_DWORD *)v8 + 4) = *((_DWORD *)v4 + 3);
  mce::FrameBufferAttachment::createFrameBufferAttachmentAndTexture((mce::FrameBufferAttachment *)v8, v7, v6, v5);
  v25 = *(_QWORD *)((char *)v4 + 20);
  if ( (_DWORD)v25 == HIDWORD(v25) )
    std::vector<std::unique_ptr<mce::FrameBufferAttachment,std::default_delete<mce::FrameBufferAttachment>>,std::allocator<std::unique_ptr<mce::FrameBufferAttachment,std::default_delete<mce::FrameBufferAttachment>>>>::_M_emplace_back_aux<std::unique_ptr<mce::FrameBufferAttachment,std::default_delete<mce::FrameBufferAttachment>>>(
      (_QWORD *)v4 + 2,
      (int *)&v29);
    v26 = *(_DWORD *)(*((_DWORD *)v4 + 5) - 4);
    if ( v29 )
      v27 = (void *)mce::FrameBufferAttachment::~FrameBufferAttachment(v29);
      operator delete(v27);
    v29 = 0;
    *(_DWORD *)v25 = v8;
    *((_DWORD *)v4 + 5) = v25 + 4;
    v26 = *(_DWORD *)v25;
  return v26;
}


int __fastcall mce::FrameBufferObjectOGL::finalizeFrameBuffer(mce::FrameBufferObjectOGL *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1
  int v2; // r7@1 OVERLAPPED
  int v3; // r8@1 OVERLAPPED
  int v4; // r6@2
  __int64 v5; // r0@3
  void *v6; // r10@5
  char *v7; // r5@5 OVERLAPPED
  unsigned int v8; // r2@5
  unsigned int v9; // r1@7
  unsigned int v10; // r11@7
  signed int v11; // r2@14
  int v12; // r0@14
  int v13; // r6@14
  int v14; // r6@16 OVERLAPPED

  v1 = this;
  mce::FrameBufferObjectBase::finalizeFrameBuffer(this);
  for ( *(_QWORD *)&v2 = *((_QWORD *)v1 + 2); v3 != v2; v2 += 4 )
  {
    v4 = *(_DWORD *)v2;
    if ( *(_DWORD *)(*(_DWORD *)v2 + 68) == 1 )
    {
      v5 = *((_QWORD *)v1 + 7);
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        v6 = (void *)*((_DWORD *)v1 + 13);
        v7 = 0;
        v8 = ((signed int)v5 - (signed int)v6) >> 2;
        if ( !v8 )
          v8 = 1;
        HIDWORD(v5) = v8 + (((signed int)v5 - (signed int)v6) >> 2);
        v10 = v8 + (((signed int)v5 - (signed int)v6) >> 2);
        if ( 0 != HIDWORD(v5) >> 30 )
          v10 = 0x3FFFFFFF;
        if ( v9 < v8 )
        if ( v10 )
        {
          if ( v10 >= 0x40000000 )
            sub_21E57F4();
          v7 = (char *)operator new(4 * v10);
          LODWORD(v5) = *(_QWORD *)((char *)v1 + 52) >> 32;
          v6 = (void *)*(_QWORD *)((char *)v1 + 52);
        }
        v11 = v5 - (_DWORD)v6;
        v12 = *(_DWORD *)(v4 + 88);
        v13 = (int)&v7[v11];
        *(_DWORD *)&v7[v11] = v12;
        if ( 0 != v11 >> 2 )
          _aeabi_memmove4(v7, v6);
        v14 = v13 + 4;
        if ( v6 )
          operator delete(v6);
        *(_QWORD *)((char *)v1 + 52) = *(_QWORD *)&v7;
        *((_DWORD *)v1 + 15) = &v7[4 * v10];
      }
      else
        *(_DWORD *)v5 = *(_DWORD *)(v4 + 88);
        *((_DWORD *)v1 + 14) = v5 + 4;
    }
  }
  return glad_glCheckFramebufferStatus(36160);
}


mce::FrameBufferAttachmentBase *__fastcall mce::FrameBufferObject::clearDepthStencilAttachment(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  mce::FrameBufferAttachmentBase *result; // r0@1
  __int64 v5; // r1@2

  v2 = a1;
  v3 = a2;
  result = *(mce::FrameBufferAttachmentBase **)(a1 + 32);
  if ( result )
  {
    v5 = *((_QWORD *)mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription(result) + 5);
    result = (mce::FrameBufferAttachmentBase *)j_j_j__ZNK3mce20FrameBufferObjectOGL27clearDepthStencilAttachmentEffPKNS_12ViewportInfoE(
                                                 v2,
                                                 v5,
                                                 SHIDWORD(v5),
                                                 v3);
  }
  return result;
}


mce::RenderStage *__fastcall mce::RenderStage::~RenderStage(mce::RenderStage *this)
{
  mce::RenderStage *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)this + 4) >> 32;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


char *__fastcall mce::RenderGraph::addRenderStage(unsigned __int64 *a1, int a2, int *a3)
{
  unsigned __int64 *v3; // r4@1
  int *v4; // r5@1
  mce::RenderStage **v5; // r6@1
  mce::RenderStage **v6; // r7@1
  int v7; // r8@1
  mce::RenderStage *v8; // t1@2
  int v9; // r0@4
  char *result; // r0@5

  v3 = a1;
  v4 = a3;
  v5 = (mce::RenderStage **)(*a1 >> 32);
  v6 = (mce::RenderStage **)*a1;
  v7 = a2;
  if ( v6 != v5 )
  {
    do
    {
      v8 = *v6;
      ++v6;
      mce::RenderStage::getEyeRenderingModeBits(v8);
    }
    while ( v5 != v6 );
    v6 = (mce::RenderStage **)*((_DWORD *)v3 + 1);
  }
  v9 = *v4;
  *(_DWORD *)(v9 + 16) = v7;
  *(_BYTE *)(v9 + 21) = 1;
  if ( v6 == *((mce::RenderStage ***)v3 + 2) )
    result = j_j_j__ZNSt6vectorISt10unique_ptrIN3mce11RenderStageESt14default_deleteIS2_EESaIS5_EE19_M_emplace_back_auxIJS5_EEEvDpOT_(
               v3,
               v4);
  else
    *v4 = 0;
    *v6 = (mce::RenderStage *)v9;
    result = (char *)(*((_DWORD *)v3 + 1) + 4);
    *((_DWORD *)v3 + 1) = result;
  return result;
}


signed int __fastcall mce::glTargetFromBufferType(int a1)
{
  signed int v1; // r1@1

  v1 = 0;
  if ( a1 == 1 )
    v1 = 34963;
  if ( !a1 )
    v1 = 34962;
  return v1;
}


int __fastcall mce::TextureDescription::TextureDescription(int result, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r12@1
  int v6; // lr@1

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  *(_DWORD *)(result + 16) = v6;
  *(_DWORD *)(result + 20) = 1;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = a3;
  *(_BYTE *)(result + 36) = 0;
  return result;
}


mce::FrameBufferAttachmentBase *__fastcall mce::FrameBufferAttachmentOGL::FrameBufferAttachmentOGL(mce::FrameBufferAttachmentOGL *this)
{
  mce::FrameBufferAttachmentBase *result; // r0@1

  result = mce::FrameBufferAttachmentBase::FrameBufferAttachmentBase(this);
  *((_DWORD *)result + 20) = 0;
  *((_DWORD *)result + 21) = 0;
  *((_DWORD *)result + 22) = 0;
  return result;
}


int __fastcall mce::RenderContextOGL::clearColorBuffer(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v5; // r4@1
  int result; // r0@2
  void (__fastcall *v15)(int, int, int, int); // r7@4
  float v22; // [sp+4h] [bp-3Ch]@3
  char v24; // [sp+Ch] [bp-34h]@3
  int v25; // [sp+10h] [bp-30h]@8
  int v26; // [sp+14h] [bp-2Ch]@8
  int v27; // [sp+18h] [bp-28h]@8
  char v28; // [sp+1Ch] [bp-24h]@3
  int v29; // [sp+20h] [bp-20h]@8
  int v30; // [sp+24h] [bp-1Ch]@8
  int v31; // [sp+28h] [bp-18h]@8

  v3 = a1;
  _R6 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 232) )
  {
    result = j_j_j__ZNK3mce17FrameBufferObject20clearColorAttachmentERK5ColorPKNS_12ViewportInfoE();
  }
  else
    glad_glGetIntegerv(3088, &v28);
    glad_glGetIntegerv(2978, &v24);
    mce::RenderContextBase::getRenderTargetSize((mce::RenderContextBase *)&v22, v3);
    if ( _R6 )
    {
      __asm
      {
        VLDR            S0, [R6]
        VLDR            S2, [R6,#4]
        VLDR            S4, [R6,#8]
        VLDR            S6, [R6,#0xC]
        VCVTR.S32.F32   S4, S4
        VCVTR.S32.F32   S6, S6
        VCVTR.S32.F32   S0, S0
        VCVTR.S32.F32   S2, S2
        VMOV            R0, S4
        VMOV            R1, S6
        VMOV            R2, S0
        VMOV            R3, S2
      }
      glad_glScissor(_R0, _R1, _R2, _R3);
      v15 = (void (__fastcall *)(int, int, int, int))glad_glViewport;
    }
    else
        VLDR            S0, [SP,#0x40+var_3C]
        VLDR            S2, [SP,#0x40+var_38]
      glad_glScissor(0, 0, _R2, _R3);
      __asm { VLDR            S0, [SP,#0x40+var_3C] }
      _R1 = 0;
      __asm { VMOV            R3, S2 }
      _R0 = 0;
    v15(_R0, _R1, _R2, _R3);
    if ( *(_BYTE *)(v3 + 42) )
      glad_glDisable(3089);
      *(_BYTE *)(v3 + 42) = 0;
    glad_glColorMask(1, 1, 1, 1);
    *(_BYTE *)(v3 + 4) = 15;
    glad_glClearColor(*(_DWORD *)v5, *(_DWORD *)(v5 + 4), *(_DWORD *)(v5 + 8), *(_DWORD *)(v5 + 12));
    glad_glClear(0x4000);
    glad_glScissor(*(_DWORD *)&v28, v29, v30, v31);
    result = glad_glViewport(*(_DWORD *)&v24, v25, v26, v27);
  return result;
}


char *__fastcall mce::TextureGroup::addTickingTexture(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  char *result; // r0@2

  v2 = a2;
  v3 = a1;
  (*(void (**)(void))(*(_DWORD *)*a2 + 16))();
  v4 = *(_QWORD *)(v3 + 72);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI14TickingTextureSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               (_QWORD *)(v3 + 68),
               v2);
  }
  else
    HIDWORD(v4) = *v2;
    *v2 = 0;
    *(_DWORD *)v4 = HIDWORD(v4);
    result = (char *)(*(_DWORD *)(v3 + 72) + 4);
    *(_DWORD *)(v3 + 72) = result;
  return result;
}


void __fastcall mce::PipelineStateObject::createPipelineState(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int64 *a7, int a8, char a9)
{
  int v9; // r0@1
  int v10; // r1@1
  char *v11; // r4@1
  bool v12; // zf@1
  unsigned int v13; // r5@1
  int v14; // r1@1
  int v15; // r2@3
  int v16; // r5@3
  void *ptr; // [sp+24h] [bp-34h]@1
  char *v18; // [sp+28h] [bp-30h]@1
  int v19; // [sp+2Ch] [bp-2Ch]@1
  char v20; // [sp+33h] [bp-25h]@1

  v20 = a9;
  v9 = *a7 >> 32;
  v10 = *a7;
  v11 = 0;
  ptr = 0;
  v18 = 0;
  v13 = v9 - v10;
  v12 = v9 == v10;
  v14 = v9;
  v19 = 0;
  if ( !v12 )
  {
    v11 = (char *)operator new(v13);
    v9 = *a7 >> 32;
    v14 = *a7;
  }
  v15 = (int)&v11[v13];
  v16 = v9 - v14;
  ptr = v11;
  v18 = v11;
  v19 = v15;
  if ( v9 != v14 )
    _aeabi_memmove(v11, v14);
  v18 = &v11[v16];
  mce::PipelineStateObjectOGL::createPipelineState();
  if ( ptr )
    operator delete(ptr);
}


int __fastcall mce::RenderContext::clearContextState(mce::RenderContext *this)
{
  mce::RenderContext *v1; // r4@1
  char v3; // [sp+4h] [bp-BCh]@1
  char v4; // [sp+10h] [bp-B0h]@1
  char v5; // [sp+2Ch] [bp-94h]@1
  char v6; // [sp+44h] [bp-7Ch]@1
  char v7; // [sp+8Ch] [bp-34h]@1
  char v8; // [sp+94h] [bp-2Ch]@1
  char v9; // [sp+9Bh] [bp-25h]@1
  signed int v10; // [sp+9Ch] [bp-24h]@1
  int v11; // [sp+A0h] [bp-20h]@1
  int v12; // [sp+A4h] [bp-1Ch]@1
  int v13; // [sp+A8h] [bp-18h]@1
  int v14; // [sp+ACh] [bp-14h]@1

  v1 = this;
  *((_WORD *)this + 60) = 0;
  *((_BYTE *)this + 122) = 0;
  mce::BlendStateDescription::BlendStateDescription((mce::BlendStateDescription *)&v8);
  v9 = 0;
  v14 = 0;
  v12 = 0;
  v13 = 0;
  v10 = 16843009;
  v11 = 0;
  mce::BlendStateDescription::BlendStateDescription((mce::BlendStateDescription *)&v7);
  mce::BlendState::createBlendState((mce::BlendState *)&v8, v1, (const mce::BlendStateDescription *)&v7);
  mce::DepthStencilStateOGL::DepthStencilStateOGL((mce::DepthStencilStateOGL *)&v6);
  mce::DepthStencilStateDescription::DepthStencilStateDescription((mce::DepthStencilStateDescription *)&v5);
  mce::DepthStencilState::createDepthState(
    (mce::DepthStencilState *)&v6,
    v1,
    (const mce::DepthStencilStateDescription *)&v5);
  mce::RasterizerState::RasterizerState((mce::RasterizerState *)&v4);
  mce::RasterizerStateDescription::RasterizerStateDescription((mce::RasterizerStateDescription *)&v3);
  mce::RasterizerState::createRasterizerStateDescription(
    (mce::RasterizerState *)&v4,
    (const mce::RasterizerStateDescription *)&v3);
  mce::RasterizerStateDescription::~RasterizerStateDescription((mce::RasterizerStateDescription *)&v3);
  return mce::RasterizerState::~RasterizerState((mce::RasterizerState *)&v4);
}


int __fastcall mce::TextureGroup::loadList(int result, unsigned __int64 *a2, signed int a3)
{
  const ResourceLocation *i; // r6@1
  const ResourceLocation *v4; // r9@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // r4@11
  int v8; // r0@11
  int v9; // r3@11
  int v10; // r4@11
  int v11; // r5@11
  int v12; // r3@11
  int v13; // r4@11
  int v14; // r5@11
  int v15; // r7@11
  void *v16; // r0@11
  void **v17; // r5@12
  void **v18; // r10@12
  int v19; // r4@19
  unsigned int *v20; // r1@20
  unsigned int *v21; // r5@26
  int v22; // [sp+10h] [bp-70h]@1
  signed int v23; // [sp+14h] [bp-6Ch]@1
  void **v24; // [sp+18h] [bp-68h]@11
  void **v25; // [sp+1Ch] [bp-64h]@12
  int v26; // [sp+24h] [bp-5Ch]@3
  int v27; // [sp+28h] [bp-58h]@11
  int v28; // [sp+2Ch] [bp-54h]@11
  int v29; // [sp+30h] [bp-50h]@11
  int v30; // [sp+34h] [bp-4Ch]@11
  int v31; // [sp+38h] [bp-48h]@11
  int v32; // [sp+3Ch] [bp-44h]@11
  int v33; // [sp+40h] [bp-40h]@11
  int v34; // [sp+44h] [bp-3Ch]@11
  int v35; // [sp+48h] [bp-38h]@11
  char v36; // [sp+4Ch] [bp-34h]@11
  int v37; // [sp+50h] [bp-30h]@11
  int v38; // [sp+54h] [bp-2Ch]@19

  v22 = result;
  v23 = a3;
  v4 = (const ResourceLocation *)(*a2 >> 32);
  for ( i = (const ResourceLocation *)*a2; i != v4; i = (const ResourceLocation *)((char *)i + 8) )
  {
    j__ZNSt12__shared_ptrI11TexturePairLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v37);
    v7 = v37;
    Resource::loadRawTexture((Resource *)&v24, i);
    std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=(v7 + 64, (unsigned __int64 *)&v24);
    EntityInteraction::setInteractText((int *)(v7 + 76), &v26);
    v8 = v7 + 80;
    v9 = v28;
    v10 = v29;
    v11 = v30;
    *(_DWORD *)v8 = v27;
    *(_DWORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 12) = v11;
    v8 += 16;
    v12 = v32;
    v13 = v33;
    v14 = v34;
    v15 = v35;
    *(_DWORD *)v8 = v31;
    *(_DWORD *)(v8 + 4) = v12;
    *(_DWORD *)(v8 + 8) = v13;
    *(_DWORD *)(v8 + 12) = v14;
    *(_DWORD *)(v8 + 16) = v15;
    *(_BYTE *)(v8 + 20) = v36;
    v16 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v16);
    }
    v18 = v25;
    v17 = v24;
    if ( v24 != v25 )
      do
        if ( *v17 )
          operator delete(*v17);
        v17 += 10;
      while ( v18 != v17 );
      v17 = v24;
    if ( v17 )
      operator delete(v17);
    result = mce::TextureGroup::uploadTexture(v22, i, v37, v23);
    v19 = v38;
    if ( v38 )
      v20 = (unsigned int *)(v38 + 4);
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
      if ( result == 1 )
        v21 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v21);
          while ( __strex(result - 1, v21) );
        }
        else
          result = (*v21)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  }
  return result;
}


int __fastcall mce::BufferBase::createBuffer(int result, int a2, int a3, int a4, int a5, char a6)
{
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a5;
  *(_DWORD *)(result + 12) = a5 * a3;
  *(_BYTE *)result = a6;
  return result;
}


unsigned int *__fastcall mce::SamplerGroupCache::getHandle(mce::SamplerGroupCache *this, unsigned int a2, int a3)
{
  mce::SamplerGroupCache *v3; // r4@1
  int v4; // r0@1
  unsigned int *result; // r0@1
  unsigned int v6; // r1@4
  int v7; // [sp+4h] [bp-Ch]@1

  v7 = a3;
  v3 = this;
  v4 = std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,std::shared_ptr<mce::SamplerStateHeapEntry>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<mce::SamplerStateHeapEntry>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
         (unsigned __int64 *)a2,
         (unsigned int *)&v7);
  *(_DWORD *)v3 = *(_DWORD *)v4;
  result = *(unsigned int **)(v4 + 4);
  *((_DWORD *)v3 + 1) = result;
  if ( result )
  {
    ++result;
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(result);
      while ( __strex(v6 + 1, result) );
    }
    else
      ++*result;
  }
  return result;
}


int __fastcall mce::Math::clampRotate(int _R0, int _R1, int a3)
{
  signed int v10; // r1@1
  float v11; // r0@1
  int result; // r0@7
  int v14; // [sp+4h] [bp-14h]@1

  __asm
  {
    VMOV            S16, R0
    VMOV            S0, R1
  }
  _R4 = a3;
    VSUB.F32        S0, S0, S16
    VSTR            S0, [SP,#0x18+var_14]
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v14);
    VLDR            S0, =180.0
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  *(float *)&v14 = j_fmodf(_R0, 360.0);
  v10 = j_mce::operator<(v14, 0);
  v11 = *(float *)&v14;
  if ( v10 == 1 )
    v11 = COERCE_FLOAT(j_mce::operator+(v14, 1135869952));
    *(float *)&v14 = v11;
  _R0 = j_mce::operator-(SLODWORD(v11), 1127481344);
    VMOV            S0, R4
    VMOV            S4, R0
    VNEG.F32        S2, S0
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R0 = _R4;
    VMOV            S0, R0
    VCMPE.F32       S0, S2
  if ( _NF ^ _VF )
    __asm { VMOVLT          R0, S2 }
    VADD.F32        S0, S0, S16
  return result;
}


void __fastcall mce::TexturePtr::onGroupReloaded(mce::TexturePtr *this, bool a2, bool a3)
{
  mce::TexturePtr *v3; // r4@1
  bool v4; // r5@1
  BackwardsCompatTextureInfo *v5; // r0@1
  bool v6; // r6@1
  int v7; // r0@2
  mce::TextureGroup *v8; // r7@2
  int *v9; // r0@3
  int v10; // r0@3
  int v11; // r0@3
  char *v12; // r0@3
  char *v13; // r0@4
  int v14; // r0@7
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  char *v19; // [sp+4h] [bp-2Ch]@3
  char *v20; // [sp+8h] [bp-28h]@3
  int v21; // [sp+Ch] [bp-24h]@3

  v3 = this;
  v4 = a3;
  v5 = (BackwardsCompatTextureInfo *)*((_DWORD *)this + 5);
  v6 = a2;
  if ( !v5 )
  {
    v8 = (mce::TextureGroup *)*((_DWORD *)v3 + 1);
    goto LABEL_7;
  }
  v7 = BackwardsCompatTextureInfo::canUse(v5);
  v8 = (mce::TextureGroup *)*((_DWORD *)v3 + 1);
  if ( v7 != 1 )
LABEL_7:
    mce::TextureGroup::_getTexture(v8, (mce::TexturePtr *)((char *)v3 + 12), v6, v4);
    *((_DWORD *)v3 + 2) = v14;
    return;
  v9 = (int *)BackwardsCompatTextureInfo::getTexturePath(*((BackwardsCompatTextureInfo **)v3 + 5));
  sub_21E8AF4((int *)&v19, v9);
  v10 = *((_DWORD *)v3 + 4);
  v20 = v19;
  v19 = (char *)&unk_28898CC;
  v21 = v10;
  mce::TextureGroup::_getTexture(v8, (const ResourceLocation *)&v20, v6, v4);
  *((_DWORD *)v3 + 2) = v11;
  v12 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  v13 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


int __fastcall mce::Math::floor(mce::Math *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S2, S0
    VMOV            R0, S2
    VCVT.F32.S32    S2, S2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    --result;
  return result;
}


void __fastcall mce::TextConstants::~TextConstants(mce::TextConstants *this)
{
  mce::TextConstants::~TextConstants(this);
}


signed int __fastcall mce::VertexFormat::halfFloatsDisabled(mce::VertexFormat *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 8);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall mce::EntityConstants::init(mce::EntityConstants *this)
{
  mce::EntityConstants::init(this);
}


int __fastcall mce::TextureGroup::getTexturePair(mce::TextureGroup *this, const mce::TextureBase *a2)
{
  char *v2; // r5@1
  int v3; // r0@1
  const mce::TextureBase *v4; // r4@1
  int v5; // r6@4
  mce::TextureContainer *v6; // r4@5
  bool v7; // r2@6

  v2 = (char *)this + 4;
  v3 = *((_DWORD *)this + 3);
  v4 = a2;
  while ( (char *)v3 != v2 )
  {
    v5 = v3 + 24;
    if ( (const mce::TextureBase *)(v3 + 24) == v4 )
    {
      v6 = (mce::TextureContainer *)(v3 + 88);
      if ( mce::TextureContainer::isValid((mce::TextureContainer *)(v3 + 88))
        || *(_DWORD *)(*(_DWORD *)mce::TextureContainer::getRawImage(v6) - 12)
        || ImageUtils::uncompress(v6, 0, v7) == 1 )
      {
        return v5;
      }
      return 0;
    }
    v3 = sub_21D47E8(v3);
  }
  return 0;
}


int __fastcall mce::EnableScissorTest::~EnableScissorTest(int result)
{
  bool v1; // zf@1

  v1 = *(_BYTE *)result == 0;
  if ( *(_BYTE *)result )
    v1 = *(_BYTE *)(result + 1) == 0;
  if ( !v1 )
    LOBYTE(mce::EnableScissorTest::mScissorTestEnabled) = 0;
  return result;
}


int __fastcall mce::ShaderConstantInt1::syncUniform(mce::ShaderConstantInt1 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform1iv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


signed int __fastcall mce::Math::isNan(mce::Math *this, float a2)
{
  mce::Math *v2; // ST00_4@1
  signed int result; // r0@1

  v2 = this;
  result = 0;
  __asm
  {
    VLDR            S0, [SP,#4+var_4]
    VLDR            S2, [SP,#4+var_4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    result = 1;
  return result;
}


int __fastcall mce::RenderContextBase::setStencilReference(int result, unsigned __int8 a2)
{
  *(_BYTE *)(result + 268) = a2;
  return result;
}


int __fastcall mce::ShaderConstantMatrix2x2::syncUniform(mce::ShaderConstantMatrix2x2 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniformMatrix2fv(a2, a3, 0, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


int __fastcall mce::ShaderOGL::resetLastProgram(mce::ShaderOGL *this)
{
  int result; // r0@1

  result = mce::RenderContextImmediate::get(this);
  *(_DWORD *)(result + 276) = 0;
  return result;
}


int __fastcall mce::FrameBufferObjectOGL::destroyFrameBuffer(mce::FrameBufferObjectOGL *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1

  v1 = this;
  glad_glDeleteFramebuffers(1, (char *)this + 44);
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 13);
  *((_DWORD *)v1 + 17) = *((_DWORD *)v1 + 16);
  return j_j_j__ZN3mce21FrameBufferObjectBase18destroyFrameBufferEv(v1);
}


int __fastcall mce::ConstantBufferContainerBase::finalizeConstantBufferLayout(int result)
{
  mce::ConstantBufferContainerBase *v1; // r4@1
  const mce::ShaderConstantBase *v2; // r5@1 OVERLAPPED
  const mce::ShaderConstantBase *v3; // r6@1 OVERLAPPED

  v1 = (mce::ConstantBufferContainerBase *)result;
  for ( *(_QWORD *)&v2 = *(_QWORD *)result; v3 != v2; v2 = (const mce::ShaderConstantBase *)((char *)v2 + 20) )
    result = mce::ConstantBufferContainerBase::registerShaderParameter(v1, v2);
  return result;
}


int __fastcall mce::ShaderConstantFloat3::syncUniform(mce::ShaderConstantFloat3 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform3fv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


signed int __fastcall mce::GlobalConstantBufferManager::refreshWorldConstants(mce::GlobalConstantBufferManager *this, mce::RenderContext *a2, mce::Camera *a3, ShaderColor *a4, ShaderColor *a5)
{
  mce::RenderContext *v5; // r5@1
  unsigned int v6; // r4@1
  ShaderColor *v7; // r8@1
  int v8; // r7@1
  unsigned int v9; // r1@2
  unsigned int v10; // r0@3

  v5 = a2;
  v6 = *((_BYTE *)this + 13);
  v7 = a4;
  v8 = mce::Singleton<mce::GlobalConstantBuffers>::mInstance;
  if ( *((_BYTE *)this + 13) )
  {
    LOBYTE(v9) = *((_BYTE *)this + 14);
  }
  else
    v10 = *((_DWORD *)this + 3);
    if ( !(_BYTE)v10 )
    {
      mce::WorldConstants::refreshWorldConstants(
        (mce::WorldConstants *)(mce::Singleton<mce::GlobalConstantBuffers>::mInstance + 12),
        a2,
        a3);
      return j_j_j__ZN3mce15ShaderConstants15setShaderColorsERNS_13RenderContextER11ShaderColorS4_(
               (mce::ShaderConstants *)(v8 + 588),
               v5,
               v7,
               a5);
    }
    v9 = v10 >> 16;
    v6 = (v10 & 0xFF00) >> 8;
  mce::WorldConstantsHolographic::refreshWorldConstants(
    (mce::WorldConstantsHolographic *)(mce::Singleton<mce::GlobalConstantBuffers>::mInstance + 36),
    a3,
    v6 != 0,
    (unsigned __int8)v9 != 0);
  return j_j_j__ZN3mce15ShaderConstants15setShaderColorsERNS_13RenderContextER11ShaderColorS4_(
           (mce::ShaderConstants *)(v8 + 588),
           v5,
           v7,
           a5);
}


char *__fastcall mce::Camera::getPosition(mce::Camera *this)
{
  return (char *)this + 148;
}


int __fastcall mce::RendererSettings::RendererSettings(int result)
{
  *(_DWORD *)result = 3;
  *(_DWORD *)(result + 4) = 87;
  *(_BYTE *)(result + 8) = 1;
  *(_DWORD *)(result + 12) = 1;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 36) = 1065353216;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = -1082130432;
  *(_BYTE *)(result + 48) = 1;
  *(_BYTE *)(result + 49) = 0;
  *(_DWORD *)(result + 52) = 1;
  return result;
}


int __fastcall mce::RenderMaterialGroup::_getMaterialOrDefault(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@2

  v3 = a3;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 8),
         a2);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 8);
  else
    v5 = 0;
  if ( v5 )
    v3 = v5;
  return v3;
}


mce::AlignmentHelper *__fastcall mce::ConstantBufferMetaData::getRequiredSpaceForUniforms(mce::ConstantBufferMetaData *this)
{
  __int64 v1; // kr00_8@1
  mce::AlignmentHelper *result; // r0@2
  int v3; // r4@3
  mce::AlignmentHelper *v4; // r0@3
  unsigned int v5; // r2@3

  v1 = *(_QWORD *)((char *)this + 4);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    result = 0;
  }
  else
    v3 = *(_DWORD *)(HIDWORD(v1) - 16);
    v4 = (mce::AlignmentHelper *)(mce::UniformMetaData::getUniformSize((mce::UniformMetaData *)(HIDWORD(v1) - 20)) + v3);
    result = j_j_j__ZN3mce15AlignmentHelper16getAlignedOffsetEjj(v4, 0x10u, v5);
  return result;
}


int __fastcall mce::FrameBufferObjectOGL::discardFrameBuffer(int a1, int a2, int a3)
{
  unsigned int v3; // r3@2
  unsigned int v4; // r0@3
  int v5; // r0@4
  int v7; // [sp+0h] [bp-38h]@7

  if ( a2 )
  {
    v3 = 0;
    do
    {
      v4 = *(_DWORD *)(a3 + 4 * v3) - 1;
      if ( v4 > 0xA )
        v5 = 0;
      else
        v5 = dword_262D370[v4];
      if ( v3 >= 0xC )
        sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v3, 12, v3);
      *(&v7 + v3++) = v5;
    }
    while ( a2 != v3 );
  }
  return glad_glInvalidateFramebuffer(36160);
}


int __fastcall mce::RenderContextOGL::clearContextState(mce::RenderContextOGL *this)
{
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  return j_j_j__ZN3mce17RenderContextBase17clearContextStateEv(this);
}


int __fastcall mce::WorldConstantsHolographic::_setConstantsForNormalDrawing(int a1, int a2, int a3)
{
  int v3; // r9@1
  MatrixStack *v4; // r7@1
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r12@1
  int v10; // lr@1
  int v11; // r10@1
  __int64 v12; // kr00_8@1
  int v13; // ST20_4@1
  int v14; // r3@1 OVERLAPPED
  int v15; // r7@1
  int v16; // ST24_4@1
  int v17; // r0@1
  int v18; // r9@1
  int v19; // r11@1
  signed __int64 v20; // r4@1 OVERLAPPED
  int v21; // r1@1
  int v22; // r3@2
  int v23; // r1@2
  int v24; // r2@2
  int v25; // r1@2
  int v26; // r2@2
  int v27; // r0@3
  int v28; // r1@3
  int v29; // r0@3
  int v30; // r1@3
  int result; // r0@4
  int v32; // r1@4
  unsigned int v33; // [sp+0h] [bp-E8h]@1
  unsigned int v34; // [sp+4h] [bp-E4h]@1
  int v35; // [sp+8h] [bp-E0h]@1
  int v36; // [sp+Ch] [bp-DCh]@1
  int v37; // [sp+10h] [bp-D8h]@1
  int v38; // [sp+14h] [bp-D4h]@1
  int v39; // [sp+18h] [bp-D0h]@1
  int v40; // [sp+1Ch] [bp-CCh]@1
  int v41; // [sp+28h] [bp-C0h]@1
  int v42; // [sp+2Ch] [bp-BCh]@1
  int v43; // [sp+30h] [bp-B8h]@1
  int v44; // [sp+34h] [bp-B4h]@1
  int v45; // [sp+38h] [bp-B0h]@1
  int v46; // [sp+3Ch] [bp-ACh]@1
  int v47; // [sp+40h] [bp-A8h]@1
  int v48; // [sp+44h] [bp-A4h]@1
  unsigned int v49; // [sp+48h] [bp-A0h]@1
  int v50; // [sp+4Ch] [bp-9Ch]@1
  int v51; // [sp+50h] [bp-98h]@1
  int v52; // [sp+54h] [bp-94h]@1
  int v53; // [sp+58h] [bp-90h]@1
  unsigned int v54; // [sp+5Ch] [bp-8Ch]@1
  int v55; // [sp+60h] [bp-88h]@1
  int v56; // [sp+64h] [bp-84h]@1
  int v57; // [sp+68h] [bp-80h]@1
  int v58; // [sp+6Ch] [bp-7Ch]@1
  int v59; // [sp+70h] [bp-78h]@1
  int v60; // [sp+74h] [bp-74h]@1
  int v61; // [sp+78h] [bp-70h]@1
  int v62; // [sp+7Ch] [bp-6Ch]@1
  int v63; // [sp+84h] [bp-64h]@1
  int v64; // [sp+88h] [bp-60h]@1
  unsigned int v65; // [sp+8Ch] [bp-5Ch]@1
  int v66; // [sp+90h] [bp-58h]@1
  int v67; // [sp+94h] [bp-54h]@1
  int v68; // [sp+98h] [bp-50h]@1
  int v69; // [sp+9Ch] [bp-4Ch]@1
  unsigned int v70; // [sp+A0h] [bp-48h]@1
  int v71; // [sp+A4h] [bp-44h]@1
  int v72; // [sp+A8h] [bp-40h]@1
  int v73; // [sp+ACh] [bp-3Ch]@1
  int v74; // [sp+B0h] [bp-38h]@1
  int v75; // [sp+B4h] [bp-34h]@1
  int v76; // [sp+B8h] [bp-30h]@1
  int v77; // [sp+BCh] [bp-2Ch]@1
  int v78; // [sp+C0h] [bp-28h]@1

  v3 = a1;
  v4 = (MatrixStack *)a2;
  v5 = a3;
  v41 = a3;
  v42 = a1;
  v6 = MatrixStack::top((MatrixStack *)(a2 + 32));
  v7 = MatrixStack::top(v4);
  glm::detail::operator*<float>((int)&v63, v7, v5);
  _aeabi_memclr8(&v47, 56);
  v47 = v63;
  v48 = v64;
  v49 = v65;
  v50 = v66;
  v51 = v67;
  v52 = v68;
  v53 = v69;
  v54 = v70;
  v55 = v71;
  v56 = v72;
  v57 = v73;
  v58 = v74;
  v59 = v75;
  v60 = v76;
  v61 = v77;
  v62 = v78;
  glm::detail::operator*<float>((int)&v63, v6, (int)&v47);
  v43 = v64;
  v46 = v78;
  v20 = __PAIR__(v70, v65);
  v8 = v66;
  v45 = v77;
  v9 = v75;
  v10 = v74;
  v11 = v73;
  v37 = v63;
  v33 = v65;
  v35 = v66;
  v44 = v76;
  v40 = v75;
  v39 = v74;
  v38 = v73;
  v12 = *(_QWORD *)&v71;
  v36 = v71;
  v34 = v70;
  v13 = v69;
  v14 = v68;
  v15 = v67;
  v16 = *(_BYTE *)(v3 + 24);
  v17 = *(_DWORD *)(v3 + 8);
  v18 = *(_DWORD *)(v17 + 20);
  *(_DWORD *)v18 = v63;
  v19 = v20;
  *(_DWORD *)(v18 + 4) = v43;
  LODWORD(v20) = v13;
  *(_DWORD *)(v18 + 8) = v19;
  *(_DWORD *)(v18 + 12) = v8;
  v21 = v18 + 32;
  *(_DWORD *)(v18 + 16) = v15;
  *(_DWORD *)(v18 + 20) = v14;
  *(_QWORD *)(v18 + 24) = v20;
  *(_QWORD *)v21 = v12;
  *(_DWORD *)(v21 + 8) = v11;
  *(_DWORD *)(v21 + 12) = v10;
  *(_DWORD *)(v18 + 48) = v9;
  *(_DWORD *)(v18 + 52) = v44;
  *(_DWORD *)(v18 + 56) = v45;
  *(_DWORD *)(v18 + 60) = v46;
  *(_BYTE *)(v17 + 17) = 1;
  if ( v16 )
  {
    *(_DWORD *)(v18 + 64) = v37;
    *(_DWORD *)(v18 + 68) = v43;
    *(_DWORD *)(v18 + 72) = v33;
    *(_DWORD *)(v18 + 76) = v35;
    *(_DWORD *)(v18 + 80) = v15;
    *(_QWORD *)(v18 + 84) = *(_QWORD *)&v14;
    *(_DWORD *)(v18 + 92) = v34;
    *(_DWORD *)(v18 + 96) = v36;
    *(_DWORD *)(v18 + 100) = HIDWORD(v12);
    *(_DWORD *)(v18 + 104) = v38;
    *(_DWORD *)(v18 + 108) = v39;
    *(_DWORD *)(v18 + 112) = v40;
    *(_DWORD *)(v18 + 116) = v44;
    v22 = v42;
    *(_DWORD *)(v18 + 120) = v45;
    *(_DWORD *)(v18 + 124) = v46;
    *(_BYTE *)(v17 + 17) = 1;
    v23 = *(_DWORD *)(v42 + 16);
    v24 = *(_DWORD *)(v23 + 20);
    *(_DWORD *)v24 = v47;
    *(_DWORD *)(v24 + 4) = v48;
    *(_DWORD *)(v24 + 8) = v49;
    *(_DWORD *)(v24 + 12) = v50;
    *(_DWORD *)(v24 + 16) = v51;
    *(_DWORD *)(v24 + 20) = v52;
    *(_DWORD *)(v24 + 24) = v53;
    *(_DWORD *)(v24 + 28) = v54;
    *(_DWORD *)(v24 + 32) = v55;
    *(_DWORD *)(v24 + 36) = v56;
    *(_DWORD *)(v24 + 40) = v57;
    *(_DWORD *)(v24 + 44) = v58;
    *(_DWORD *)(v24 + 48) = v59;
    *(_DWORD *)(v24 + 52) = v60;
    *(_DWORD *)(v24 + 56) = v61;
    *(_DWORD *)(v24 + 60) = v62;
    *(_DWORD *)(v24 + 64) = v47;
    *(_DWORD *)(v24 + 68) = v48;
    *(_DWORD *)(v24 + 72) = v49;
    *(_DWORD *)(v24 + 76) = v50;
    *(_DWORD *)(v24 + 80) = v51;
    *(_DWORD *)(v24 + 84) = v52;
    *(_DWORD *)(v24 + 88) = v53;
    *(_DWORD *)(v24 + 92) = v54;
    *(_DWORD *)(v24 + 96) = v55;
    *(_DWORD *)(v24 + 100) = v56;
    *(_DWORD *)(v24 + 104) = v57;
    *(_DWORD *)(v24 + 108) = v58;
    *(_DWORD *)(v24 + 112) = v59;
    *(_DWORD *)(v24 + 116) = v60;
    *(_DWORD *)(v24 + 120) = v61;
    *(_DWORD *)(v24 + 124) = v62;
    *(_BYTE *)(v23 + 17) = 1;
    v25 = *(_DWORD *)(v42 + 20);
    v26 = *(_DWORD *)(v25 + 20);
    *(_DWORD *)v26 = *(_DWORD *)v6;
    *(_DWORD *)(v26 + 4) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v26 + 8) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v26 + 12) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v26 + 16) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(v26 + 20) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(v26 + 24) = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v26 + 28) = *(_DWORD *)(v6 + 28);
    *(_DWORD *)(v26 + 32) = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v26 + 36) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v26 + 40) = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v26 + 44) = *(_DWORD *)(v6 + 44);
    *(_DWORD *)(v26 + 48) = *(_DWORD *)(v6 + 48);
    *(_DWORD *)(v26 + 52) = *(_DWORD *)(v6 + 52);
    *(_DWORD *)(v26 + 56) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v26 + 60) = *(_DWORD *)(v6 + 60);
    *(_DWORD *)(v26 + 64) = *(_DWORD *)v6;
    *(_DWORD *)(v26 + 68) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v26 + 72) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v26 + 76) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v26 + 80) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(v26 + 84) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(v26 + 88) = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v26 + 92) = *(_DWORD *)(v6 + 28);
    *(_DWORD *)(v26 + 96) = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v26 + 100) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v26 + 104) = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v26 + 108) = *(_DWORD *)(v6 + 44);
    *(_DWORD *)(v26 + 112) = *(_DWORD *)(v6 + 48);
    *(_DWORD *)(v26 + 116) = *(_DWORD *)(v6 + 52);
    *(_DWORD *)(v26 + 120) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v26 + 124) = *(_DWORD *)(v6 + 60);
    *(_BYTE *)(v25 + 17) = 1;
  }
  else
    v27 = *(_DWORD *)(v42 + 16);
    v28 = *(_DWORD *)(v27 + 20);
    *(_DWORD *)v28 = v47;
    *(_DWORD *)(v28 + 4) = v48;
    *(_DWORD *)(v28 + 8) = v49;
    *(_DWORD *)(v28 + 12) = v50;
    *(_DWORD *)(v28 + 16) = v51;
    *(_DWORD *)(v28 + 20) = v52;
    *(_DWORD *)(v28 + 24) = v53;
    *(_DWORD *)(v28 + 28) = v54;
    *(_DWORD *)(v28 + 32) = v55;
    *(_DWORD *)(v28 + 36) = v56;
    *(_DWORD *)(v28 + 40) = v57;
    *(_DWORD *)(v28 + 44) = v58;
    *(_DWORD *)(v28 + 48) = v59;
    *(_DWORD *)(v28 + 52) = v60;
    *(_DWORD *)(v28 + 56) = v61;
    *(_DWORD *)(v28 + 60) = v62;
    *(_BYTE *)(v27 + 17) = 1;
    v29 = *(_DWORD *)(v42 + 20);
    v30 = *(_DWORD *)(v29 + 20);
    *(_DWORD *)v30 = *(_DWORD *)v6;
    *(_DWORD *)(v30 + 4) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v30 + 8) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v30 + 12) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v30 + 16) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(v30 + 20) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(v30 + 24) = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v30 + 28) = *(_DWORD *)(v6 + 28);
    *(_DWORD *)(v30 + 32) = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v30 + 36) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v30 + 40) = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v30 + 44) = *(_DWORD *)(v6 + 44);
    *(_DWORD *)(v30 + 48) = *(_DWORD *)(v6 + 48);
    *(_DWORD *)(v30 + 52) = *(_DWORD *)(v6 + 52);
    *(_DWORD *)(v30 + 56) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v30 + 60) = *(_DWORD *)(v6 + 60);
    *(_BYTE *)(v29 + 17) = 1;
  result = *(_DWORD *)(v22 + 12);
  v32 = *(_DWORD *)(result + 20);
  *(_DWORD *)v32 = *(_DWORD *)v41;
  *(_DWORD *)(v32 + 4) = *(_DWORD *)(v41 + 4);
  *(_DWORD *)(v32 + 8) = *(_DWORD *)(v41 + 8);
  *(_DWORD *)(v32 + 12) = *(_DWORD *)(v41 + 12);
  *(_DWORD *)(v32 + 16) = *(_DWORD *)(v41 + 16);
  *(_DWORD *)(v32 + 20) = *(_DWORD *)(v41 + 20);
  *(_DWORD *)(v32 + 24) = *(_DWORD *)(v41 + 24);
  *(_DWORD *)(v32 + 28) = *(_DWORD *)(v41 + 28);
  *(_DWORD *)(v32 + 32) = *(_DWORD *)(v41 + 32);
  *(_DWORD *)(v32 + 36) = *(_DWORD *)(v41 + 36);
  *(_DWORD *)(v32 + 40) = *(_DWORD *)(v41 + 40);
  *(_DWORD *)(v32 + 44) = *(_DWORD *)(v41 + 44);
  *(_DWORD *)(v32 + 48) = *(_DWORD *)(v41 + 48);
  *(_DWORD *)(v32 + 52) = *(_DWORD *)(v41 + 52);
  *(_DWORD *)(v32 + 56) = *(_DWORD *)(v41 + 56);
  *(_DWORD *)(v32 + 60) = *(_DWORD *)(v41 + 60);
  *(_BYTE *)(result + 17) = 1;
  return result;
}


void __fastcall mce::TextureGroup::_getTexture(mce::TextureGroup *this, const ResourceLocation *a2, bool a3, bool a4)
{
  JUMPOUT(mce::TextureGroup::_getTexture);
}


void __fastcall mce::FlipbookTextureConstants::~FlipbookTextureConstants(mce::FlipbookTextureConstants *this)
{
  mce::FlipbookTextureConstants::~FlipbookTextureConstants(this);
}


mce::UniformMetaData *__fastcall mce::UniformMetaData::~UniformMetaData(mce::UniformMetaData *this)
{
  mce::UniformMetaData *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


void __fastcall mce::GlobalConstantBuffers::init(mce::GlobalConstantBuffers *this, int a2)
{
  mce::GlobalConstantBuffers *v2; // r4@1
  int v3; // r5@1

  v2 = this;
  v3 = a2;
  mce::WorldConstants::init((mce::GlobalConstantBuffers *)((char *)this + 12));
  mce::WorldConstantsHolographic::init((mce::GlobalConstantBuffers *)((char *)v2 + 36), v3);
  mce::RenderChunkConstants::init(v2);
  mce::InterFrameConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 720));
  mce::PerFrameConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 516));
  mce::EntityConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 548));
  mce::ShaderConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 588));
  mce::EffectConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 616));
  mce::WeatherConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 628));
  mce::FlipbookTextureConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 668));
  mce::TextConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 684));
  mce::DebugConstants::init((mce::GlobalConstantBuffers *)((char *)v2 + 736));
  j_j_j__ZN3mce15BannerConstants4initEv((mce::GlobalConstantBuffers *)((char *)v2 + 748));
}


signed int __fastcall mce::RenderDeviceBase::lostDevice(mce::RenderDeviceBase *this)
{
  mce::RenderDeviceBase *v1; // r4@1
  int v2; // r1@1
  int v3; // r3@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r1@1
  int v7; // r3@1
  int v8; // r5@1
  int v9; // r7@1
  int v10; // r3@1
  int v11; // r1@1
  int v12; // r2@1
  void **v13; // r5@1 OVERLAPPED
  void **v14; // r6@1 OVERLAPPED
  void **v15; // r7@2
  signed int result; // r0@6
  int v17; // [sp+0h] [bp-60h]@1
  int v18; // [sp+8h] [bp-58h]@1
  int v19; // [sp+Ch] [bp-54h]@1
  int v20; // [sp+10h] [bp-50h]@1
  int v21; // [sp+14h] [bp-4Ch]@1
  int v22; // [sp+18h] [bp-48h]@1
  int v23; // [sp+1Ch] [bp-44h]@1
  int v24; // [sp+20h] [bp-40h]@1
  int v25; // [sp+24h] [bp-3Ch]@1
  void **v26; // [sp+28h] [bp-38h]@1
  int v27; // [sp+2Ch] [bp-34h]@1
  int v28; // [sp+30h] [bp-30h]@1
  int v29; // [sp+34h] [bp-2Ch]@1
  int v30; // [sp+38h] [bp-28h]@1
  int v31; // [sp+3Ch] [bp-24h]@1
  int v32; // [sp+40h] [bp-20h]@1
  int v33; // [sp+44h] [bp-1Ch]@1

  v1 = this;
  mce::DeviceInformation::DeviceInformation((mce::DeviceInformation *)&v17);
  *(_DWORD *)v1 = v17;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 2,
    &v18);
  v2 = (int)v1 + 12;
  v3 = v20;
  v4 = v21;
  v5 = v22;
  *(_DWORD *)v2 = v19;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v5;
  v6 = (int)v1 + 28;
  v7 = v24;
  v8 = v25;
  v14 = v26;
  v9 = v27;
  *(_DWORD *)v6 = v23;
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  *(_DWORD *)(v6 + 12) = v14;
  *(_DWORD *)(v6 + 16) = v9;
    (int *)v1 + 12,
    &v28);
    (int *)v1 + 13,
    &v29);
    (int *)v1 + 14,
    &v30);
  v10 = (int)v1 + 60;
  v11 = v32;
  v12 = v33;
  *(_DWORD *)v10 = v31;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  mce::DeviceInformationBase::~DeviceInformationBase((mce::DeviceInformationBase *)&v17);
  *(_QWORD *)&v13 = *((_QWORD *)v1 + 9);
  if ( v14 != v13 )
  {
    v15 = v13;
    do
    {
      if ( *v15 )
        operator delete(*v15);
      v15 += 3;
    }
    while ( v14 != v15 );
  }
  result = 1;
  *((_DWORD *)v1 + 19) = v13;
  *((_BYTE *)v1 + 88) = 1;
  return result;
}


int __fastcall mce::MultisampledRenderStageWithFrameBufferObject::postRender(int a1)
{
  int v1; // r5@1
  int v2; // r0@1

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 236);
  if ( v2 )
  {
    mce::FrameBufferObject::resolveFrameBuffer(
      (mce::FrameBufferObject *)(v2 + 28),
      (const mce::FrameBufferObject *)(v1 + 28));
LABEL_5:
    *(_BYTE *)(v1 + 20) = 1;
    return j_j_j__ZN3mce32RenderStageWithFrameBufferObject10postRenderER13ScreenContext();
  }
  if ( *(_DWORD *)mce::FrameBufferObjectBase::getFrameBufferDescription((mce::FrameBufferObjectBase *)(v1 + 28)) >= 2 )
    mce::FrameBufferObject::resolveFrameBuffer((mce::FrameBufferObject *)(v1 + 28));
    goto LABEL_5;
  return j_j_j__ZN3mce32RenderStageWithFrameBufferObject10postRenderER13ScreenContext();
}


mce::FeatureSupportOGL *__fastcall mce::FeatureSupportOGL::FeatureSupportOGL(mce::FeatureSupportOGL *this)
{
  mce::FeatureSupportOGL *v1; // r4@1
  int *v2; // r5@1
  int *v3; // r10@1
  int *v4; // r9@1
  int *v5; // r8@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  __int16 v10; // r0@5
  __int64 v11; // r1@5
  char v12; // r1@5
  int v13; // r0@5
  bool v14; // zf@5
  const char *v15; // r6@8
  const char *v16; // r7@8
  int v17; // r5@9
  int v18; // r0@12
  int v19; // r5@14
  int v20; // r0@15
  int v21; // r7@17
  char *v22; // r5@17
  char *v23; // r0@17
  bool v24; // zf@18
  __int16 v25; // r2@24
  char v26; // r0@24
  unsigned int v27; // r0@28
  char v28; // r1@28
  __int16 v29; // r0@30
  mce::FeatureSupportOGL *result; // r0@32
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  unsigned int *v35; // r2@41
  signed int v36; // r1@43
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  int v39; // [sp+0h] [bp-40h]@5
  __int16 v40; // [sp+8h] [bp-38h]@5
  char v41; // [sp+Ah] [bp-36h]@5
  int v42; // [sp+Ch] [bp-34h]@4
  int v43; // [sp+10h] [bp-30h]@3
  int v44; // [sp+14h] [bp-2Ch]@2
  int v45; // [sp+18h] [bp-28h]@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 10) = 0;
  *((_DWORD *)this + 3) = &unk_28898CC;
  v2 = (int *)((char *)this + 12);
  *((_DWORD *)this + 4) = &unk_28898CC;
  v3 = (int *)((char *)this + 16);
  *((_DWORD *)this + 5) = &unk_28898CC;
  v4 = (int *)((char *)this + 20);
  *((_DWORD *)this + 6) = &unk_28898CC;
  v5 = (int *)((char *)this + 24);
  gl::getOpenGLVendor((gl *)&v45);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v45);
  v6 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  gl::getOpenGLRenderer((gl *)&v44);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v44);
  v7 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  gl::getOpenGLVersion((gl *)&v43);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v43);
  v8 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v43 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  gl::getOpenGLExtensions((gl *)&v42);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v42);
  v9 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v42 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  gl::Version::parse((gl::Version *)&v39);
  v10 = v40;
  v11 = *(_QWORD *)&v39;
  *((_BYTE *)v1 + 10) = v41;
  *((_WORD *)v1 + 4) = v10;
  *(_QWORD *)v1 = v11;
  v12 = 0;
  v13 = *((_WORD *)v1 + 4);
  v14 = v13 == 0;
  if ( *((_WORD *)v1 + 4) )
    LOBYTE(v13) = 1;
  *((_BYTE *)v1 + 28) = v13;
  if ( !v14 )
    v15 = (const char *)glad_glGetString(7937);
    v16 = (const char *)glad_glGetString(7938);
    v17 = strstr(v15, "Adreno (TM) 420") ? (unsigned __int8)(strstr(v16, "OpenGL ES 3.0") != 0) : 0;
    v18 = strstr(v15, "Adreno (TM) 320") ? (unsigned __int8)(strstr(v16, "OpenGL ES 3.0") != 0) : 0;
    v19 = v17 | v18;
    v20 = strstr(v15, "Adreno (TM) 305") ? (unsigned __int8)(strstr(v16, "OpenGL ES 3.0") != 0) : 0;
    v21 = v19 | v20;
    v22 = strstr(v15, "PowerVR Rogue G6200");
    v23 = strstr(v15, "PowerVR Rogue GX6250");
    v12 = 0;
    if ( !v21 )
      v24 = v22 == 0;
      if ( !v22 )
        v24 = v23 == 0;
      if ( v24 )
      {
        v12 = glad_glRenderbufferStorageMultisample;
        if ( glad_glRenderbufferStorageMultisample )
          v12 = 1;
      }
  *((_BYTE *)v1 + 29) = v12;
  v25 = *((_WORD *)v1 + 4);
  v26 = glad_glGetProgramBinary;
    LOBYTE(v25) = 1;
  if ( glad_glGetProgramBinary )
    v26 = 1;
  *((_BYTE *)v1 + 38) = v26 & v25;
  *((_BYTE *)v1 + 30) = 0;
  *((_BYTE *)v1 + 31) = v25;
  v27 = sub_21E76A0(v5, "GL_APPLE_texture_max_level", 0, 0x1Au);
  v28 = *((_BYTE *)v1 + 31);
  if ( v27 != -1 )
    v28 |= 1u;
  *((_BYTE *)v1 + 31) = v28;
  v29 = *((_WORD *)v1 + 4);
    LOBYTE(v29) = 1;
  *((_BYTE *)v1 + 32) = v29;
  *((_BYTE *)v1 + 33) = v29;
  *((_BYTE *)v1 + 35) = 0;
  *((_BYTE *)v1 + 36) = v29;
  result = v1;
  *((_BYTE *)v1 + 37) = 0;
  return result;
}


int __fastcall mce::ShaderGroup::_getShaderFromVanillaPack(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r6@1
  char *v4; // r0@1
  char *v5; // r0@2
  int v6; // r4@4
  char *v7; // r0@5
  char *v8; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@24
  signed int v15; // r1@26
  unsigned int *v16; // r2@28
  signed int v17; // r1@30
  char *v18; // [sp+0h] [bp-30h]@5
  char *v19; // [sp+4h] [bp-2Ch]@5
  int v20; // [sp+8h] [bp-28h]@5
  char *v21; // [sp+Ch] [bp-24h]@1
  char *v22; // [sp+10h] [bp-20h]@1
  int v23; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  sub_119C854((int *)&v21, a2);
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 1;
  v3 = Resource::load((int)&v22);
  v4 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v21 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  if ( v3 )
    v6 = 1;
  else
    sub_119C854((int *)&v18, v2);
    v19 = v18;
    v18 = (char *)&unk_28898CC;
    v20 = 7;
    v6 = Resource::load((int)&v19);
    v7 = v19 - 12;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v19 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    v8 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v18 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
  return v6;
}


int __fastcall mce::TextureGroup::_getBackCompatInfo(mce::TextureGroup *this, const ResourceLocation *a2)
{
  const ResourceLocation *v2; // r7@1
  mce::TextureGroup *v3; // r4@1
  unsigned int v4; // r0@1
  unsigned int v5; // r10@1
  unsigned int v6; // r11@1
  int v7; // r6@1
  int v8; // r5@1
  int v9; // r9@2
  _DWORD *v10; // r8@2
  int v11; // r7@2
  _DWORD *v12; // r1@4
  size_t v13; // r2@4
  int v14; // r4@7
  int result; // r0@9
  int v16; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = sub_21B417C(*(int **)a2, *(_DWORD *)(*(_DWORD *)a2 - 12), -955291385);
  v16 = *((_DWORD *)v2 + 1);
  v5 = *((_QWORD *)v3 + 12) >> 32;
  v6 = (unsigned __int8)v16 ^ v4;
  v7 = v6 % v5;
  v8 = *(_DWORD *)(*((_QWORD *)v3 + 12) + 4 * v7);
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD **)v2;
    v11 = *(_DWORD *)(*(_DWORD *)v8 + 44);
    while ( 1 )
    {
      if ( v11 == v6 )
      {
        v12 = *(_DWORD **)(v9 + 4);
        v13 = *(v10 - 3);
        if ( v13 == *(v12 - 3) && !memcmp(v10, v12, v13) && v16 == *(_DWORD *)(v9 + 8) )
          break;
      }
      v14 = *(_DWORD *)v9;
      if ( !*(_DWORD *)v9 )
        result = 0;
        goto LABEL_12;
      v11 = *(_DWORD *)(v14 + 44);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v14 + 44) % v5 != v7 )
    }
    if ( v8 )
      result = *(_DWORD *)v8;
    else
      result = 0;
  }
  else
    result = 0;
LABEL_12:
  if ( result )
    result += 12;
  return result;
}


void __fastcall mce::BannerConstants::init(mce::BannerConstants *this)
{
  mce::BannerConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+8h] [bp-28h]@7
  int v19; // [sp+10h] [bp-20h]@2
  int v20; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v20, "BannerConstants");
  *((_DWORD *)v1 + 2) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v20);
  v3 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  sub_21E94B4((void **)&v19, "BANNER_COLORS");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v19);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 4 )
      v6 = 0;
    *(_DWORD *)v1 = v6;
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 2);
  sub_21E94B4((void **)&v18, "BANNER_UV_OFFSETS");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v18);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 4 )
      v10 = 0;
    *((_DWORD *)v1 + 1) = v10;
  v11 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


int __fastcall mce::MaterialPtr::MaterialPtr(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}


int __fastcall mce::RenderContextOGL::flush(mce::RenderContextOGL *this)
{
  return glad_glFlush();
}


int __fastcall mce::RenderMaterialGroup::_material(int a1, int *a2, const void **a3)
{
  int v3; // r4@1
  const void **v4; // r5@1
  int *v5; // r0@1
  int v6; // r4@1
  void *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = sub_119C854(&v11, a2);
  sub_119C8A4((const void **)v5, v4);
  v6 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         v3 + 8,
         (int **)&v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  return v6;
}


mce::ShaderOGL *__fastcall mce::ShaderOGL::~ShaderOGL(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11
  int v8; // r5@16
  int v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  int v12; // r1@26
  void *v13; // r0@26

  v1 = this;
  glad_glDeleteProgram(*((_DWORD *)this + 5));
  *((_DWORD *)v1 + 5) = 0;
  v3 = *(_QWORD *)((char *)v1 + 36) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 36);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 12);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v2 += 16;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 9);
  }
  if ( v2 )
    operator delete((void *)v2);
  v9 = *((_QWORD *)v1 + 3) >> 32;
  v8 = *((_QWORD *)v1 + 3);
  if ( v8 != v9 )
      v12 = *(_DWORD *)(v8 + 12);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v12 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v8 += 24;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 6);
  if ( v8 )
    operator delete((void *)v8);
  mce::ShaderBase::~ShaderBase(v1);
  return v1;
}


void __fastcall mce::WorldConstants::~WorldConstants(mce::WorldConstants *this)
{
  mce::WorldConstants::~WorldConstants(this);
}


int __fastcall mce::MathUtility::interpolateTransforms(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int result; // r0@6
  float v13; // [sp+0h] [bp-78h]@1
  float v17; // [sp+10h] [bp-68h]@1

  v4 = a1;
  _R6 = a4;
  _R5 = a3;
  _R7 = a2;
  sub_1BA6032((int)&v17, a2);
  __asm
  {
    VLDR            S22, [R7,#0x30]
    VLDR            S20, [R7,#0x34]
    VLDR            S18, [R7,#0x38]
    VLDR            S16, [R7,#0x3C]
  }
  sub_1BA6032((int)&v13, _R5);
    VLDR            S5, [SP,#0x78+var_68]
    VLDR            S13, [SP,#0x78+var_78]
    VLDR            S3, [SP,#0x78+var_64]
    VLDR            S11, [SP,#0x78+var_74]
    VMUL.F32        S0, S13, S5
    VLDR            S1, [SP,#0x78+var_60]
    VMUL.F32        S2, S11, S3
    VLDR            S9, [SP,#0x78+var_70]
    VLDR            S14, [SP,#0x78+var_5C]
    VMUL.F32        S4, S9, S1
    VLDR            S7, [SP,#0x78+var_6C]
    VLDR            S8, [R5,#0x30]
    VLDR            S6, [R5,#0x34]
    VADD.F32        S0, S2, S0
    VMUL.F32        S2, S7, S14
    VADD.F32        S0, S0, S4
    VLDR            S4, [R5,#0x38]
    VADD.F32        S10, S0, S2
    VLDR            S2, [R5,#0x3C]
    VMOV            S0, R6
    VCMPE.F32       S10, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm
    {
      VNEG.F32        S13, S13
      VNEG.F32        S11, S11
      VNEG.F32        S9, S9
      VNEG.F32        S7, S7
      VSTR            S13, [SP,#0x78+var_78]
      VSTR            S11, [SP,#0x78+var_74]
      VSTR            S9, [SP,#0x78+var_70]
      VSTR            S7, [SP,#0x78+var_6C]
    }
    VMOV.F32        S10, #1.0
    VMUL.F32        S13, S13, S0
    VMUL.F32        S11, S11, S0
    VMUL.F32        S9, S9, S0
    VSUB.F32        S12, S10, S0
    VMUL.F32        S3, S3, S12
    VMUL.F32        S5, S5, S12
    VMUL.F32        S15, S1, S12
    VADD.F32        S3, S11, S3
    VADD.F32        S1, S13, S5
    VMUL.F32        S5, S7, S0
    VMUL.F32        S7, S14, S12
    VADD.F32        S14, S9, S15
    VMUL.F32        S11, S3, S3
    VMUL.F32        S9, S1, S1
    VADD.F32        S5, S5, S7
    VMUL.F32        S7, S14, S14
    VADD.F32        S9, S11, S9
    VMUL.F32        S11, S5, S5
    VADD.F32        S7, S9, S7
    VADD.F32        S7, S7, S11
    VCMPE.F32       S7, #0.0
  if ( !_ZF )
      VDIV.F32        S7, S10, S7
      VMUL.F32        S5, S7, S5
      VMUL.F32        S14, S7, S14
      VMUL.F32        S3, S7, S3
      VMUL.F32        S1, S7, S1
  __asm { VMUL.F32        S7, S3, S3 }
  result = 0;
    VMUL.F32        S9, S14, S14
    VMUL.F32        S11, S1, S1
    VMOV.F32        S13, #-2.0
    VMUL.F32        S24, S5, S14
    VMUL.F32        S28, S14, S1
    VMUL.F32        S26, S3, S1
    VMUL.F32        S30, S5, S3
    VADD.F32        S15, S9, S7
    VADD.F32        S9, S9, S11
    VMUL.F32        S1, S5, S1
    VMUL.F32        S14, S14, S3
    VADD.F32        S3, S7, S11
    VSUB.F32        S7, S26, S24
    VADD.F32        S11, S30, S28
    VMUL.F32        S5, S15, S13
    VADD.F32        S13, S24, S26
    VADD.F32        S9, S9, S9
    VSUB.F32        S15, S14, S1
    VADD.F32        S14, S1, S14
    VMUL.F32        S1, S22, S12
    VMUL.F32        S8, S8, S0
    VMUL.F32        S20, S20, S12
    VMUL.F32        S6, S6, S0
    VMUL.F32        S18, S18, S12
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S2, S0
    VSUB.F32        S2, S28, S30
    VMUL.F32        S12, S16, S12
    VADD.F32        S3, S3, S3
    VADD.F32        S5, S5, S10
    VSUB.F32        S9, S10, S9
    VADD.F32        S7, S7, S7
    VADD.F32        S11, S11, S11
    VADD.F32        S13, S13, S13
    VADD.F32        S15, S15, S15
    VADD.F32        S14, S14, S14
    VADD.F32        S8, S8, S1
    VSTR            S5, [R4]
    VADD.F32        S6, S6, S20
    VADD.F32        S4, S4, S18
    VSTR            S7, [R4,#0x10]
    VADD.F32        S0, S0, S12
    VSTR            S11, [R4,#0x20]
    VADD.F32        S2, S2, S2
    VSTR            S13, [R4,#4]
    VSUB.F32        S10, S10, S3
    VSTR            S9, [R4,#0x14]
    VSTR            S15, [R4,#0x24]
    VSTR            S2, [R4,#8]
    VSTR            S14, [R4,#0x18]
    VSTR            S10, [R4,#0x28]
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 44) = 0;
    VSTR            S8, [R4,#0x30]
    VSTR            S6, [R4,#0x34]
    VSTR            S4, [R4,#0x38]
    VSTR            S0, [R4,#0x3C]
  return result;
}


int __fastcall mce::WorldConstantsHolographic::setRenderTextureStereo(int result, bool a2)
{
  *(_BYTE *)(result + 476) = a2;
  return result;
}


int __fastcall mce::Math::sin(mce::Math *this, float a2)
{
  mce::Math *v9; // [sp+4h] [bp-Ch]@1

  v9 = this;
  _R0 = j_mce::Radian::asFloat((mce::Radian *)&v9);
  __asm
  {
    VLDR            S2, [R0]
    VLDR            S0, =10430.0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  return mce::Math::mSin[(unsigned __int16)_R1];
}


mce::RenderDeviceBase *__fastcall mce::RenderContextImmediate::exists(mce::RenderContextImmediate *this)
{
  mce::RenderDeviceBase *result; // r0@1

  result = mce::Singleton<mce::RenderDevice>::mInstance;
  if ( mce::Singleton<mce::RenderDevice>::mInstance )
    result = (mce::RenderDeviceBase *)1;
  return result;
}


int __fastcall mce::TextureBase::TextureBase(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 1;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 8;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_BYTE *)(result + 41) = 1;
  return result;
}


_BYTE *__fastcall mce::TextureBase::createTexture(mce::TextureBase *this, mce::RenderContext *a2, const mce::TextureDescription *a3)
{
  int v3; // r1@1
  char *v4; // r2@1
  int v5; // r3@1
  int v6; // r12@1
  int v7; // lr@1
  char *v8; // r0@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r12@1
  int v12; // lr@1
  _BYTE *result; // r0@1

  v3 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 3);
  v4 = (char *)a3 + 16;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v5;
  *((_DWORD *)this + 2) = v6;
  *((_DWORD *)this + 3) = v7;
  v8 = (char *)this + 16;
  v9 = *((_DWORD *)v4 + 1);
  v10 = *((_DWORD *)v4 + 2);
  v11 = *((_DWORD *)v4 + 3);
  v12 = *((_DWORD *)v4 + 4);
  *(_DWORD *)v8 = *(_DWORD *)v4;
  *((_DWORD *)v8 + 1) = v9;
  *((_DWORD *)v8 + 2) = v10;
  *((_DWORD *)v8 + 3) = v11;
  *((_DWORD *)v8 + 4) = v12;
  result = v8 + 20;
  *result = v4[20];
  return result;
}


void __fastcall mce::EntityConstants::~EntityConstants(mce::EntityConstants *this)
{
  mce::EntityConstants::~EntityConstants(this);
}


int __fastcall mce::Math::atan2(__int64 this, __int64 _R2)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R1
    VCVT.F64.F32    D0, S0
    VCVT.F64.F32    D1, S2
    VMOV            R0, R1, D0
    VMOV            R2, R3, D1
  }
  _R0 = COERCE_UNSIGNED_INT64(j_atan2(*(double *)&this, *(double *)&_R2));
    VMOV            D0, R0, R1
    VCVT.F32.F64    S0, D0
    VMOV            R0, S0
  return result;
}


int __fastcall mce::ShaderOGL::deleteShader(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r4@1
  int result; // r0@1

  v1 = this;
  glad_glDeleteProgram(*((_DWORD *)this + 5));
  result = 0;
  *((_DWORD *)v1 + 5) = 0;
  return result;
}


signed int __fastcall mce::FrameBufferObjectOGL::isBound(mce::FrameBufferObjectOGL *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1
  signed int result; // r0@1
  int v3; // [sp+4h] [bp-Ch]@1

  v1 = this;
  glad_glGetIntegerv(36006, &v3);
  result = 0;
  if ( v3 == *((_DWORD *)v1 + 11) )
    result = 1;
  return result;
}


mce::MaterialPtr *__fastcall mce::MaterialPtr::MaterialPtr(mce::MaterialPtr *a1, mce::RenderMaterialGroup *this, _DWORD *a3)
{
  mce::MaterialPtr *v3; // r4@1

  v3 = a1;
  *(_DWORD *)a1 = this;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = *a3;
  *a3 = &unk_28898CC;
  mce::RenderMaterialGroup::_addRef(this, a1);
  *((_DWORD *)v3 + 1) = mce::RenderMaterialGroup::_getMaterial(*(_DWORD *)v3, (int **)v3 + 2);
  return v3;
}


int __fastcall mce::RasterizerStateOGL::setScissorRect(mce::RasterizerStateOGL *this, mce::RenderContext *a2, float _R2, float _R3, float a5, float a6)
{
  int result; // r0@1
  float v15; // [sp+0h] [bp-30h]@2

  result = *((_BYTE *)this + 16);
  if ( result )
  {
    __asm
    {
      VLDR            S16, [SP,#0x30+arg_4]
      VLDR            S18, [SP,#0x30+arg_0]
      VMOV            S20, R3
      VMOV            S22, R2
    }
    mce::RenderContextBase::getRenderTargetSize((mce::RenderContextBase *)&v15, (int)a2);
      VLDR            S0, [SP,#0x30+var_30]
      VLDR            S2, [SP,#0x30+var_2C]
      VMUL.F32        S4, S0, S22
      VMUL.F32        S6, S2, S20
      VMUL.F32        S0, S0, S18
      VMUL.F32        S2, S2, S16
      VCVTR.S32.F32   S4, S4
      VCVTR.S32.F32   S6, S6
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S2
      VMOV            R0, S4
      VMOV            R1, S6
      VMOV            R2, S0
      VMOV            R3, S2
    result = glad_glScissor(_R0, _R1, _R2, _R3);
  }
  return result;
}


mce::RenderStageWithFrameBufferObject *__fastcall mce::MultisampledRenderStageWithFrameBufferObject::MultisampledRenderStageWithFrameBufferObject(mce::MultisampledRenderStageWithFrameBufferObject *this)
{
  mce::RenderStageWithFrameBufferObject *result; // r0@1

  result = mce::RenderStageWithFrameBufferObject::RenderStageWithFrameBufferObject(this);
  *(_DWORD *)result = &off_26DCC78;
  *((_DWORD *)result + 59) = 0;
  return result;
}


mce::FrameBufferObjectBase *__fastcall mce::FrameBufferObjectOGL::~FrameBufferObjectOGL(mce::FrameBufferObjectOGL *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1
  void *v2; // r0@3
  void *v3; // r0@5

  v1 = this;
  if ( *((_DWORD *)this + 11) )
  {
    glad_glDeleteFramebuffers(1, (char *)this + 44);
    *((_DWORD *)v1 + 11) = 0;
    *((_DWORD *)v1 + 12) = 0;
    *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 13);
    *((_DWORD *)v1 + 17) = *((_DWORD *)v1 + 16);
    mce::FrameBufferObjectBase::destroyFrameBuffer(v1);
  }
  v2 = (void *)*((_DWORD *)v1 + 16);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 13);
  if ( v3 )
    operator delete(v3);
  return j_j_j__ZN3mce21FrameBufferObjectBaseD2Ev(v1);
}


mce::Camera *__fastcall mce::Camera::~Camera(mce::Camera *this)
{
  mce::Camera *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 4);
  if ( v3 )
    operator delete(v3);
  if ( *(_DWORD *)v1 )
    operator delete(*(void **)v1);
  return v1;
}


signed int __fastcall mce::TextureHelperOGL::getOpenGLInternalTextureFormat(int a1)
{
  signed int v1; // r1@1

  v1 = 0;
  if ( a1 == 45 )
    v1 = 35056;
  if ( a1 == 28 )
    v1 = 6408;
  return v1;
}


signed int __fastcall mce::ShaderConstants::setUVTransform(signed int result, mce::RenderContext *a2, int a3)
{
  int v3; // r3@1
  _DWORD *v13; // r4@2
  int v14; // r5@15
  int v16; // r5@18
  int v17; // r5@19
  bool v18; // zf@19
  int v19; // r5@23
  bool v20; // zf@23

  v3 = *(_DWORD *)(result + 24);
  _R6 = *(_DWORD *)a3;
  _R7 = *(_DWORD *)(a3 + 4);
  _R10 = *(_DWORD *)(a3 + 8);
  _LR = *(_DWORD *)(a3 + 12);
  _KR00_8 = *(_QWORD *)(a3 + 16);
  _R2 = *(_DWORD *)(v3 + 20);
  __asm
  {
    VMOV            S0, R6
    VLDR            S2, [R2]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v13 = (_DWORD *)(_R2 + 4);
LABEL_18:
    *(_DWORD *)_R2 = _R6;
    v16 = _R2 + 8;
    *v13 = _R7;
    *(_DWORD *)v16 = 0;
    *(_DWORD *)(v16 + 4) = _R10;
    *(_DWORD *)(v16 + 8) = _LR;
    *(_DWORD *)(_R2 + 20) = _KR00_8;
    *(_DWORD *)(_R2 + 24) = 0;
    *(_DWORD *)(_R2 + 52) = 0;
    *(_DWORD *)(_R2 + 56) = 0;
    *(_DWORD *)(_R2 + 44) = 0;
    *(_DWORD *)(_R2 + 48) = 0;
    *(_DWORD *)(_R2 + 36) = 0;
    *(_DWORD *)(_R2 + 40) = 0;
    *(_DWORD *)(_R2 + 28) = HIDWORD(_KR00_8);
    *(_DWORD *)(_R2 + 32) = 0;
    *(_DWORD *)(_R2 + 60) = 1065353216;
    *(_BYTE *)(v3 + 17) = 1;
    return j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(
             *(mce::ConstantBufferContainer **)(result + 4),
             a2);
    VLDR            S0, [R2,#4]
    VMOV            S2, R7
  v13 = (_DWORD *)(_R2 + 4);
    VCMPE.F32       S2, S0
    goto LABEL_18;
  if ( *(_DWORD *)(_R2 + 8) & 0x7FFFFFFF )
    VLDR            S0, [R2,#0xC]
    VMOV            S2, R10
    VLDR            S0, [R2,#0x10]
    VMOV            S2, LR
    VLDR            S0, [R2,#0x14]
    VMOV            S2, R8
  if ( *(_DWORD *)(_R2 + 24) & 0x7FFFFFFF )
    VLDR            S0, [R2,#0x1C]
    VMOV            S2, R12
  v14 = *(_DWORD *)(_R2 + 32);
  _ZF = (v14 & 0x7FFFFFFF) == 0;
  if ( !(v14 & 0x7FFFFFFF) )
    _ZF = (*(_DWORD *)(_R2 + 36) & 0x7FFFFFFF) == 0;
  v17 = *(_DWORD *)(_R2 + 40);
  v18 = (v17 & 0x7FFFFFFF) == 0;
  if ( !(v17 & 0x7FFFFFFF) )
    v18 = (*(_DWORD *)(_R2 + 44) & 0x7FFFFFFF) == 0;
  if ( !v18 )
  v19 = *(_DWORD *)(_R2 + 48);
  v20 = (v19 & 0x7FFFFFFF) == 0;
  if ( !(v19 & 0x7FFFFFFF) )
    v20 = (*(_DWORD *)(_R2 + 52) & 0x7FFFFFFF) == 0;
  if ( !v20 )
  if ( *(_DWORD *)(_R2 + 56) & 0x7FFFFFFF )
    VMOV.F32        S0, #1.0
    VLDR            S2, [R2,#0x3C]
  return result;
}


_QWORD *__fastcall mce::ShaderGroup::ShaderGroup(_QWORD *a1, int *a2)
{
  int *v2; // r9@1
  _QWORD *v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3
  int v9; // [sp+0h] [bp-40h]@4
  int v10; // [sp+4h] [bp-3Ch]@4
  char v11; // [sp+8h] [bp-38h]@4
  void (*v12)(void); // [sp+10h] [bp-30h]@4

  v2 = a2;
  v3 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v3 = &off_26DCD28;
  sub_119C884((void **)v3 + 2, (const char *)&unk_257BC67);
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 9) = 0;
  *((_DWORD *)v3 + 10) = 1065353216;
  *((_DWORD *)v3 + 11) = 0;
  LODWORD(v4) = v3 + 5;
  v5 = sub_119C844(v4);
  *((_DWORD *)v3 + 7) = v5;
  if ( v5 == 1 )
  {
    *((_DWORD *)v3 + 12) = 0;
    v7 = v3 + 6;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *((_DWORD *)v3 + 6) = v7;
  sub_119C854((int *)v3 + 13, v2);
  v9 = *((_DWORD *)v3 + 13);
  v10 = *(_DWORD *)(v9 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v11, (__int64 *)&v9);
  if ( v12 )
    v12();
  return v3;
}


int __fastcall mce::TextureOGL::TextureOGL(mce::TextureOGL *this)
{
  int result; // r0@1

  result = mce::TextureBase::TextureBase(this);
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  return result;
}


int __fastcall mce::ShaderGroup::compileShaderProgram(int a1, int a2, int *a3, int *a4)
{
  int *v4; // r6@1
  int v5; // r4@1
  int *v6; // r9@1
  int v7; // r7@1
  char *v8; // r0@2
  char *v9; // r0@3
  mce::ShaderProgram *v10; // r5@4
  int v11; // r4@4
  void *v12; // r0@4
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  char *v20; // [sp+8h] [bp-30h]@2
  char *v21; // [sp+Ch] [bp-2Ch]@2
  int v22; // [sp+10h] [bp-28h]@2
  int v23; // [sp+14h] [bp-24h]@2

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  if ( *(_DWORD *)(*a4 - 12) )
  {
    sub_119C854((int *)&v20, a4);
    v21 = v20;
    v20 = (char *)&unk_28898CC;
    v22 = 0;
    Resource::getPath((Resource *)&v23, (const ResourceLocation *)&v21);
    v8 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v21 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
    v9 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = mce::ShaderGroup::getShaderProgram(v5, v7, v4, v6, (const void **)&v23);
    mce::ShaderProgramOGL::compileShaderProgram((int)v10);
    v11 = mce::ShaderProgram::isValid(v10);
    v12 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v23 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
  }
  else
    v11 = 1;
  return v11;
}


mce::ShaderProgramOGL *__fastcall mce::ShaderProgramOGL::~ShaderProgramOGL(mce::ShaderProgramOGL *this)
{
  mce::ShaderProgramOGL *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int *v6; // r0@3
  unsigned int *v8; // r12@5
  signed int v9; // r1@7
  unsigned int *v10; // r12@9
  signed int v11; // r1@11
  unsigned int *v12; // r12@13
  signed int v13; // r1@15

  v1 = this;
  glad_glDeleteShader(*((_DWORD *)this + 3));
  *((_DWORD *)v1 + 3) = 0;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 20,
    *((_DWORD *)v1 + 7));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (int *)(*(_DWORD *)v1 - 12);
  if ( v6 != &dword_28898C0 )
    v12 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return v1;
}


int __fastcall mce::RenderStageWithFrameBufferObject::preRender(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  mce::RenderStage::preRender(a1);
  return (*(int (__fastcall **)(int, int, signed int))(*(_DWORD *)v3 + 28))(v3, v2, 1);
}


void __fastcall mce::FlipbookTextureConstants::init(mce::FlipbookTextureConstants *this)
{
  mce::FlipbookTextureConstants::init(this);
}


int __fastcall mce::Math::absMax(mce::Math *this, float a2, float a3)
{
  int result; // r0@3

  _R0 = (unsigned int)this & 0x7FFFFFFF;
  __asm { VMOV            S0, R0 }
  _R0 = LODWORD(a2) & 0x7FFFFFFF;
  __asm
  {
    VMOV            S2, R0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}


mce::FrameBufferAttachmentBase *__fastcall mce::FrameBufferAttachmentBase::FrameBufferAttachmentBase(mce::FrameBufferAttachmentBase *this)
{
  mce::FrameBufferAttachmentBase *v1; // r4@1
  mce::FrameBufferAttachmentBase *result; // r0@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 4) = 0;
  *((_WORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentBase *)((char *)this + 12));
  result = v1;
  *((_BYTE *)v1 + 76) = 0;
  return result;
}


int __fastcall mce::SamplerStateOGL::createSamplerState(mce::SamplerStateOGL *this, mce::RenderContext *a2, const mce::SamplerStateDescription *a3, unsigned __int16 a4)
{
  mce::SamplerStateOGL *v4; // r7@1
  unsigned __int16 v5; // r4@1
  const mce::SamplerStateDescription *v6; // r5@1
  mce::RenderContext *v7; // r6@1
  __int64 v8; // r0@1
  int v10; // [sp+0h] [bp-20h]@1
  __int16 v11; // [sp+8h] [bp-18h]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  mce::SamplerStateDescription::SamplerStateDescription((mce::SamplerStateDescription *)&v10);
  v8 = *(_QWORD *)&v10;
  *((_WORD *)v4 + 4) = v11;
  *(_QWORD *)v4 = v8;
  return mce::SamplerStateBase::createSamplerState(v4, v7, v6, v5);
}


int __fastcall mce::TextureGroup::loadTexture(mce::TextureGroup *a1, const ResourceLocation *a2, mce::ImageBuffer **a3)
{
  mce::TextureGroup *v3; // r5@1
  mce::ImageBuffer **v4; // r6@1
  const ResourceLocation *v5; // r4@1
  int *v6; // r0@2
  signed int v7; // r6@4
  int v8; // r0@5
  void *v9; // r0@6
  __int64 v10; // r4@7
  int v11; // r4@15
  void *v12; // r0@17
  void **v13; // r5@18 OVERLAPPED
  void **v14; // r6@18 OVERLAPPED
  void *v15; // r0@25
  void **v16; // r5@26 OVERLAPPED
  void **v17; // r6@26 OVERLAPPED
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  unsigned int *v21; // r2@38
  signed int v22; // r1@40
  unsigned int *v23; // r2@50
  signed int v24; // r1@52
  int v25; // [sp+0h] [bp-140h]@6
  __int64 v26; // [sp+40h] [bp-100h]@7
  int v27; // [sp+4Ch] [bp-F4h]@6
  char v28; // [sp+78h] [bp-C8h]@4
  __int64 v29; // [sp+B8h] [bp-88h]@18
  int v30; // [sp+C4h] [bp-7Ch]@17
  void **v31; // [sp+F0h] [bp-50h]@4
  void **v32; // [sp+F4h] [bp-4Ch]@26
  int v33; // [sp+FCh] [bp-44h]@25

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  AppPlatform::loadTextureFromStream((int)&v31, *v6, v4);
  v7 = mce::TextureContainer::isEmpty((mce::TextureContainer *)&v31);
  TexturePair::TexturePair((mce::Texture *)&v28, (int)&v31);
  if ( v7 )
  {
    v8 = mce::TextureGroup::getMissingTexture(v3);
    if ( v8 )
    {
      TexturePair::TexturePair((mce::Texture *)&v25, v8 + 64);
      mce::TextureGroup::uploadTexture((int)v3, v5, (int)&v25, 1);
      v9 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v23 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        }
        else
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = v26;
      if ( (_DWORD)v26 != HIDWORD(v26) )
        do
          if ( *(_DWORD *)v10 )
            operator delete(*(void **)v10);
          LODWORD(v10) = v10 + 40;
        while ( HIDWORD(v10) != (_DWORD)v10 );
        LODWORD(v10) = v26;
      if ( (_DWORD)v10 )
        operator delete((void *)v10);
      mce::Texture::~Texture((mce::Texture *)&v25);
    }
    v11 = 0;
  }
    v11 = mce::TextureGroup::uploadTexture((int)v3, v5, (int)&v28, 1);
  v12 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  *(_QWORD *)&v13 = v29;
  if ( (_DWORD)v29 != HIDWORD(v29) )
    do
      if ( *v13 )
        operator delete(*v13);
      v13 += 10;
    while ( v14 != v13 );
    v13 = (void **)v29;
  if ( v13 )
    operator delete(v13);
  mce::Texture::~Texture((mce::Texture *)&v28);
  v15 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v33 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  *(_QWORD *)&v16 = *(_QWORD *)&v31;
  if ( v31 != v32 )
      if ( *v16 )
        operator delete(*v16);
      v16 += 10;
    while ( v17 != v16 );
    v16 = v31;
  if ( v16 )
    operator delete(v16);
  return v11;
}


void __fastcall mce::WeatherConstants::~WeatherConstants(mce::WeatherConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall mce::Mesh::_move(mce::Mesh *this, mce::Mesh *a2)
{
  mce::Mesh *v2; // r5@1
  mce::Mesh *v3; // r4@1
  __int64 v4; // r2@1
  int v5; // r1@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  mce::Buffer::operator=((int)this, (int)a2);
  mce::Buffer::operator=((int)v3 + 32, (int)v2 + 32);
  *((_DWORD *)v3 + 21) = *((_DWORD *)v2 + 21);
  *((_DWORD *)v3 + 20) = *((_DWORD *)v2 + 20);
  *((_BYTE *)v3 + 92) = *((_BYTE *)v2 + 92);
  *((_DWORD *)v3 + 22) = *((_DWORD *)v2 + 22);
  v4 = *((_QWORD *)v2 + 8);
  *((_BYTE *)v3 + 72) = *((_BYTE *)v2 + 72);
  *((_QWORD *)v3 + 8) = v4;
  *((_DWORD *)v3 + 19) = *((_DWORD *)v2 + 19);
  *((_DWORD *)v2 + 20) = 0;
  *((_DWORD *)v2 + 21) = 0;
  LODWORD(v4) = mce::VertexFormat::EMPTY;
  v5 = unk_27E8CB0;
  *((_BYTE *)v2 + 72) = unk_27E8CB4;
  *((_DWORD *)v2 + 17) = v5;
  *((_DWORD *)v2 + 16) = v4;
  result = *((_DWORD *)v2 + 24);
  *((_DWORD *)v3 + 24) = result;
  return result;
}


int __fastcall mce::Math::sqrt(mce::Math *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VSQRT.F32       S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall mce::Math::ceil(mce::Math *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S2, S0
    VMOV            R0, S2
    VCVT.F32.S32    S2, S2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    ++result;
  return result;
}


int __fastcall mce::RenderMaterialGroup::_getMaterial(int a1, int **a2)
{
  int *v2; // r5@1
  int result; // r0@1
  bool v4; // zf@1
  char *v5; // r6@5
  int v6; // r7@5
  char v7; // r1@7
  char *v8; // r0@9
  char *v9; // r6@9
  char *v10; // r6@9
  int v11; // r7@9
  char v12; // r1@11
  char *v13; // r0@13
  void *v14; // r0@13
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  void **v17; // [sp+4h] [bp-CCh]@5
  void **v18; // [sp+8h] [bp-C8h]@13
  int v19; // [sp+24h] [bp-ACh]@14
  int v20; // [sp+2Ch] [bp-A4h]@13
  int v21; // [sp+30h] [bp-A0h]@14

  v2 = (int *)a2;
  result = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(a1 + 8),
             a2);
  v4 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)(result + 8);
    v4 = result == 0;
  }
  if ( v4 )
    sub_119C8F4((int)&v17, 16);
    sub_119C904((char *)&v17, (int)"Material: ", 10);
    v5 = sub_119C904((char *)&v17, *v2, *(_DWORD *)(*v2 - 12));
    sub_119C904(v5, (int)" not found", 10);
    v6 = *(_DWORD *)&v5[*(_DWORD *)(*(_DWORD *)v5 - 12) + 124];
    if ( !v6 )
      sub_119C994();
    if ( *(_BYTE *)(v6 + 28) )
    {
      v7 = *(_BYTE *)(v6 + 39);
    }
    else
      sub_119C924(v6);
      v7 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 10);
    v8 = sub_119C934(v5, v7);
    v9 = sub_119C944(v8);
    sub_119C904(v9, (int)" @ ", 3);
    sub_119C904(v9, (int)"_getMaterial", 12);
    sub_119C904(v9, (int)" (", 2);
    sub_119C904(
      v9,
      (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\Minecraft\\Minecraft.Client\\..\\..\\..\\..\\src-client\\co"
           "mmon\\client\\renderer\\renderer\\RenderMaterialGroup.cpp",
      148);
    sub_119C904(v9, (int)":", 1);
    v10 = (char *)sub_119C914((int)v9, 294);
    sub_119C904(v10, (int)")", 1);
    v11 = *(_DWORD *)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12) + 124];
    if ( !v11 )
    if ( *(_BYTE *)(v11 + 28) )
      v12 = *(_BYTE *)(v11 + 39);
      sub_119C924(v11);
      v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v11 + 24))(v11, 10);
    v13 = sub_119C934(v10, v12);
    sub_119C944(v13);
    v17 = off_26D3F28;
    *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v17) = off_26D3F34;
    v18 = &off_27734E8;
    v14 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v14);
    v18 = &off_26D40A8;
    sub_119C954((unsigned int **)&v19);
    sub_119C964(&v21);
    result = 0;
  return result;
}


void __fastcall mce::PerFrameConstants::init(mce::PerFrameConstants *this)
{
  mce::PerFrameConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  int v12; // r5@12
  mce::ShaderConstantBase *v13; // r0@12
  mce::ShaderConstantBase *v14; // r5@12
  void *v15; // r0@16
  int v16; // r5@17
  mce::ShaderConstantBase *v17; // r0@17
  mce::ShaderConstantBase *v18; // r5@17
  void *v19; // r0@21
  int v20; // r5@22
  mce::ShaderConstantBase *v21; // r0@22
  mce::ShaderConstantBase *v22; // r5@22
  void *v23; // r0@26
  int v24; // r5@27
  mce::ShaderConstantBase *v25; // r0@27
  mce::ShaderConstantBase *v26; // r5@27
  void *v27; // r0@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  unsigned int *v32; // r2@41
  signed int v33; // r1@43
  unsigned int *v34; // r2@45
  signed int v35; // r1@47
  unsigned int *v36; // r2@49
  signed int v37; // r1@51
  unsigned int *v38; // r2@53
  signed int v39; // r1@55
  unsigned int *v40; // r2@57
  signed int v41; // r1@59
  int v42; // [sp+8h] [bp-48h]@27
  int v43; // [sp+10h] [bp-40h]@22
  int v44; // [sp+18h] [bp-38h]@17
  int v45; // [sp+20h] [bp-30h]@12
  int v46; // [sp+28h] [bp-28h]@7
  int v47; // [sp+30h] [bp-20h]@2
  int v48; // [sp+38h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v48, "PerFrameConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v48);
  v3 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v47, "VIEW_POS");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v47);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 3 )
      v6 = 0;
    *((_DWORD *)v1 + 3) = v6;
  v7 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v47 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v46, "TIME");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v46);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 1 )
      v10 = 0;
    *((_DWORD *)v1 + 2) = v10;
  v11 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v46 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v45, "FOG_COLOR");
  v13 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v12, (const void **)&v45);
  v14 = v13;
  if ( v13 )
    if ( mce::ShaderConstantBase::getType(v13) != 4 )
      v14 = 0;
    *((_DWORD *)v1 + 4) = v14;
  v15 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v45 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v44, "FOG_CONTROL");
  v17 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v16, (const void **)&v44);
  v18 = v17;
  if ( v17 )
    if ( mce::ShaderConstantBase::getType(v17) != 2 )
      v18 = 0;
    *((_DWORD *)v1 + 5) = v18;
  v19 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v44 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v43, "RENDER_DISTANCE");
  v21 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v20, (const void **)&v43);
  v22 = v21;
  if ( v21 )
    if ( mce::ShaderConstantBase::getType(v21) != 1 )
      v22 = 0;
    *((_DWORD *)v1 + 6) = v22;
  v23 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v43 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v42, "FAR_CHUNKS_DISTANCE");
  v25 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v24, (const void **)&v42);
  v26 = v25;
  if ( v25 )
    if ( mce::ShaderConstantBase::getType(v25) != 1 )
      v26 = 0;
    *((_DWORD *)v1 + 7) = v26;
  v27 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v42 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
}


void __fastcall mce::WorldConstants::init(mce::WorldConstants *this)
{
  mce::WorldConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  int v12; // r5@12
  mce::ShaderConstantBase *v13; // r0@12
  mce::ShaderConstantBase *v14; // r5@12
  void *v15; // r0@16
  int v16; // r5@17
  mce::ShaderConstantBase *v17; // r0@17
  mce::ShaderConstantBase *v18; // r5@17
  void *v19; // r0@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  int v30; // [sp+8h] [bp-38h]@17
  int v31; // [sp+10h] [bp-30h]@12
  int v32; // [sp+18h] [bp-28h]@7
  int v33; // [sp+20h] [bp-20h]@2
  int v34; // [sp+28h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v34, "WorldConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v34);
  v3 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v33, "WORLDVIEWPROJ");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v33);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 11 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v33 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v32, "WORLD");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v32);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 11 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v32 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v31, "WORLDVIEW");
  v13 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v12, (const void **)&v31);
  v14 = v13;
  if ( v13 )
    if ( mce::ShaderConstantBase::getType(v13) != 11 )
      v14 = 0;
    *((_DWORD *)v1 + 4) = v14;
  v15 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v30, "PROJ");
  v17 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v16, (const void **)&v30);
  v18 = v17;
  if ( v17 )
    if ( mce::ShaderConstantBase::getType(v17) != 11 )
      v18 = 0;
    *((_DWORD *)v1 + 5) = v18;
  v19 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v30 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


void __fastcall mce::LRUCache::remove(__int64 this)
{
  __int64 v1; // r8@1
  unsigned int v2; // r0@1
  unsigned int v3; // r5@1
  unsigned int v4; // r7@1
  int v5; // r4@1
  int v6; // r10@1
  int v7; // r8@2
  _DWORD *v8; // r11@2
  int v9; // r6@2
  _DWORD *v10; // r1@4
  size_t v11; // r2@4
  int v12; // r9@7
  int v13; // r5@9
  void *v14; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // r7@22
  int v18; // r4@23
  int v19; // r1@23
  void *v20; // r0@23
  int v21; // r1@24
  _DWORD *v22; // r0@24
  _DWORD *v23; // r2@25
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  int v26; // [sp+0h] [bp-40h]@2
  __int64 v27; // [sp+4h] [bp-3Ch]@2
  int v28; // [sp+Ch] [bp-34h]@1
  int v29; // [sp+10h] [bp-30h]@11

  v1 = this;
  v2 = sub_21B417C(*(int **)HIDWORD(this), *(_DWORD *)(*(_DWORD *)HIDWORD(this) - 12), -955291385);
  v28 = *(_DWORD *)(HIDWORD(v1) + 4);
  v3 = (unsigned __int8)v28 ^ v2;
  v4 = *(_DWORD *)(v1 + 24);
  v5 = v3 % *(_DWORD *)(v1 + 24);
  v6 = *(_DWORD *)(*(_DWORD *)(v1 + 20) + 4 * v5);
  if ( v6 )
  {
    v26 = v1 + 20;
    v27 = v1;
    LODWORD(v1) = *(_DWORD *)v6;
    v8 = (_DWORD *)*(_DWORD *)HIDWORD(v1);
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 16);
    while ( 1 )
    {
      if ( v9 == v3 )
      {
        v10 = *(_DWORD **)(v7 + 4);
        v11 = *(v8 - 3);
        if ( v11 == *(v10 - 3) && !memcmp(v8, v10, v11) && v28 == *(_DWORD *)(v7 + 8) )
          break;
      }
      v12 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
        v9 = *(_DWORD *)(v12 + 16);
        v6 = v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v12 + 16) % v4 == v5 )
          continue;
      v13 = 0;
      v1 = v27;
      goto LABEL_11;
    }
    LODWORD(v1) = v27;
    if ( v6 )
      v17 = *(_DWORD *)v6;
      HIDWORD(v1) = HIDWORD(v27);
      if ( *(_DWORD *)v6 )
        v18 = *(_DWORD *)(v17 + 12);
        v13 = *(_DWORD *)(v18 + 16);
        sub_21BC344(v18);
        v19 = *(_DWORD *)(v18 + 8);
        v20 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
        {
          v24 = (unsigned int *)(v19 - 4);
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
            j_j_j_j__ZdlPv_9(v20);
        }
        operator delete((void *)v18);
        v21 = *(_DWORD *)(v17 + 16) % (unsigned int)(*(_QWORD *)(v27 + 20) >> 32);
        v22 = *(_DWORD **)(*(_QWORD *)(v27 + 20) + 4 * v21);
        do
          v23 = v22;
          v22 = (_DWORD *)*v22;
        while ( v22 != (_DWORD *)v17 );
        std::_Hashtable<ResourceLocation,std::pair<ResourceLocation const,std::_List_iterator<mce::LRUCache::CacheEntry>>,std::allocator<std::pair<ResourceLocation const,std::_List_iterator<mce::LRUCache::CacheEntry>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
          v26,
          v21,
          v23,
          (void *)v17);
      else
        v13 = 0;
    else
  }
  else
    v13 = 0;
LABEL_11:
  *(_DWORD *)(v1 + 4) -= v13;
  ResourceLocation::getFullPath((ResourceLocation *)&v29, SHIDWORD(v1));
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


signed int __fastcall mce::ImageDescription::getArraySize(mce::ImageDescription *this)
{
  signed int result; // r0@2

  if ( *((_BYTE *)this + 16) )
    result = 6;
  else
    result = *((_DWORD *)this + 3);
  return result;
}


int __fastcall mce::Math::snapRotationToCardinal(mce::Math *this, float a2)
{
  int result; // r0@5

  __asm
  {
    VMOV            S2, R0
    VLDR            S6, =0.0
    VMOV.F32        S4, #-0.5
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S0, #0.5
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S4 }
    VLDR            S4, =0.011111
    VMUL.F32        S4, S2, S4
  if ( _ZF )
    __asm { VMOVEQ.F32      S0, S6 }
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  _R0 = 90 * (_R0 % 4);
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  return result;
}


int __fastcall mce::TextureGroup::tick(mce::TextureGroup *this)
{
  mce::TextureGroup *v1; // r4@1
  __int64 v2; // r0@1
  unsigned int v3; // r5@2

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 68);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v2 + 4 * v3) + 8))();
      v2 = *(_QWORD *)((char *)v1 + 68);
      ++v3;
    }
    while ( v3 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  return v2;
}


int __fastcall mce::RenderContextBase::getRenderTargetSize(mce::RenderContextBase *this, int a2)
{
  int v2; // r5@1
  mce::RenderContextBase *v3; // r4@1
  mce::FrameBufferObjectBase *v4; // r0@1
  int result; // r0@2
  int v11; // r0@3

  v2 = a2;
  v3 = this;
  v4 = *(mce::FrameBufferObjectBase **)(a2 + 232);
  if ( v4 )
  {
    _R0 = mce::FrameBufferObjectBase::getFrameBufferDescription(v4);
    __asm
    {
      VLDR            S0, [R0,#8]
      VCVT.F32.U32    S0, S0
      VSTR            S0, [R4]
    }
    result = mce::FrameBufferObjectBase::getFrameBufferDescription(*(mce::FrameBufferObjectBase **)(v2 + 232));
      VLDR            S0, [R0,#0xC]
      VSTR            S0, [R4,#4]
  }
  else
    v11 = mce::Singleton<mce::RendererSettings>::mInstance;
    *(_DWORD *)v3 = *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 20);
    result = *(_DWORD *)(v11 + 24);
    *((_DWORD *)v3 + 1) = result;
  return result;
}


mce::RenderDevice *__fastcall mce::RenderDevice::RenderDevice(mce::RenderDevice *this)
{
  mce::RenderDevice *v1; // r4@1

  v1 = this;
  mce::RenderDeviceBase::RenderDeviceBase(this);
  mce::FeatureSupportOGL::FeatureSupportOGL((mce::RenderDevice *)((char *)v1 + 92));
  return v1;
}


int __fastcall mce::InterFrameConstants::getCurrentOffsetCpuPointer(mce::InterFrameConstants *this)
{
  return 0;
}


mce::Buffer *__fastcall mce::Mesh::Mesh(mce::Buffer *a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, unsigned __int8 *a7, int a8)
{
  int v8; // r7@1
  int v9; // r6@1
  int v10; // r5@1
  mce::Buffer *v11; // r4@1
  int v12; // r1@1
  int v13; // r2@1
  int v14; // r5@1
  mce::RenderContext *v15; // r0@3
  int v16; // r2@4
  int v17; // r3@4

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  mce::Buffer::Buffer(a1);
  mce::Buffer::Buffer((mce::Buffer *)((char *)v11 + 32));
  v12 = *(_DWORD *)v10;
  v13 = *(_DWORD *)(v10 + 4);
  *((_BYTE *)v11 + 72) = *(_BYTE *)(v10 + 8);
  *((_DWORD *)v11 + 17) = v13;
  *((_DWORD *)v11 + 16) = v12;
  *((_DWORD *)v11 + 20) = v8;
  v14 = (int)v11 + 80;
  *(_DWORD *)(v14 + 4) = v9;
  *(_DWORD *)(v14 + 8) = a5;
  *(_WORD *)(v14 + 12) = a6;
  if ( a8 )
  {
    *((_DWORD *)v11 + 19) = a7;
  }
  else
    *((_DWORD *)v11 + 19) = 0;
    v15 = (mce::RenderContext *)mce::RenderContextImmediate::get(0);
    if ( !mce::Mesh::loadRawData(v11, v15, a7) )
    {
      mce::Buffer::releaseBuffer(v11);
      mce::Buffer::releaseBuffer((mce::Buffer *)((char *)v11 + 32));
      *((_BYTE *)v11 + 92) = 0;
      *(_DWORD *)v14 = 0;
      *((_DWORD *)v11 + 21) = 0;
      *((_DWORD *)v11 + 22) = 0;
      v16 = mce::VertexFormat::EMPTY;
      v17 = unk_27E8CB0;
      *((_BYTE *)v11 + 72) = unk_27E8CB4;
      *((_DWORD *)v11 + 17) = v17;
      *((_DWORD *)v11 + 16) = v16;
      *((_DWORD *)v11 + 19) = 0;
      *((_DWORD *)v11 + 24) = 0;
    }
  return v11;
}


int __fastcall mce::WorldConstantsHolographic::refreshWorldConstants(mce::WorldConstantsHolographic *this, mce::Camera *a2, int a3, int a4)
{
  mce::Camera *v4; // r6@1
  MatrixStack *v5; // r7@1
  mce::WorldConstantsHolographic *v6; // r4@1
  int v7; // r8@1
  int v8; // r5@1
  MatrixStack *v9; // r9@1
  int result; // r0@3
  bool v11; // zf@3
  int v12; // r2@6
  mce::ConstantBufferContainer *v13; // r4@15
  mce::RenderContext *v14; // r1@15

  v4 = a2;
  v5 = (mce::Camera *)((char *)a2 + 32);
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (mce::Camera *)((char *)a2 + 16);
  if ( MatrixStack::isDirty((mce::Camera *)((char *)a2 + 32)) || MatrixStack::isDirty(v4) )
    goto LABEL_18;
  result = MatrixStack::isDirty(v9);
  v11 = result == 0;
  if ( !result )
  {
    result = *((_BYTE *)v6 + 477);
    v11 = result == 0;
  }
  if ( !v11 )
LABEL_18:
    v12 = MatrixStack::top(v9);
    if ( v8 == 1 )
    {
      if ( *((_BYTE *)v6 + 25) )
      {
        if ( *((_BYTE *)v6 + 24) )
          mce::WorldConstantsHolographic::_setConstantsForHolographicDrawing((int)v6, v12);
        else
          mce::WorldConstantsHolographic::_setConstantsForHolographicDrawing_DualPass((int)v6, v12, v7);
      }
      else if ( *((_BYTE *)v6 + 24) )
        mce::WorldConstantsHolographic::_setConstantsForTextureDrawing((int)v6, (int)v4, v12);
      else
        mce::WorldConstantsHolographic::_setConstantsForTextureDrawing_DualPass((int)v6, (int)v4, v12, v7);
    }
    else
      mce::WorldConstantsHolographic::_setConstantsForNormalDrawing((int)v6, (int)v4, v12);
    MatrixStack::makeClean(v5);
    MatrixStack::makeClean(v4);
    MatrixStack::makeClean(v9);
    *((_BYTE *)v6 + 477) = 0;
    v13 = (mce::ConstantBufferContainer *)*((_DWORD *)v6 + 1);
    v14 = (mce::RenderContext *)mce::RenderContextImmediate::get(0);
    result = j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(v13, v14);
  return result;
}


int __fastcall mce::Attribute::getVertexField(int a1)
{
  return *(_BYTE *)a1;
}


void __fastcall mce::RenderMaterialGroup::~RenderMaterialGroup(mce::RenderMaterialGroup *this)
{
  mce::RenderMaterialGroup *v1; // r0@1

  v1 = mce::RenderMaterialGroup::~RenderMaterialGroup(this);
  j_j_j__ZdlPv_4((void *)v1);
}


BackgroundTask *__fastcall mce::RenderMaterialGroup::startLoadAsync(mce::RenderMaterialGroup *this)
{
  mce::RenderMaterialGroup *v1; // r5@1
  BackgroundTask *result; // r0@1
  int v3; // r4@2
  _DWORD *v4; // r0@2
  __int64 v5; // r1@2
  _DWORD *v6; // [sp+8h] [bp-30h]@2
  __int64 v7; // [sp+10h] [bp-28h]@2
  char v8; // [sp+18h] [bp-20h]@2
  int (*v9)(void); // [sp+20h] [bp-18h]@2

  v1 = this;
  result = (BackgroundTask *)*((_DWORD *)this + 35);
  if ( result )
  {
    __dmb();
    *((_BYTE *)v1 + 100) = 0;
    v3 = *((_DWORD *)v1 + 35);
    v9 = 0;
    v4 = operator new(4u);
    LODWORD(v5) = sub_F35BF4;
    *v4 = v1;
    HIDWORD(v5) = sub_F35B54;
    v6 = v4;
    v7 = v5;
    result = ResourceLoadManager::loadResource(v3, 512, 0, (int)&v8, (int)&v6);
    if ( (_DWORD)v7 )
      result = (BackgroundTask *)((int (*)(void))v7)();
    if ( v9 )
      result = (BackgroundTask *)v9();
  }
  return result;
}


int __fastcall mce::TexturePtr::TexturePtr(int result)
{
  *(_DWORD *)result = &off_26E8D98;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


signed int __fastcall mce::Camera::isOrthographic(mce::Camera *this)
{
  signed int result; // r0@1

  _R0 = MatrixStack::top((mce::Camera *)((char *)this + 32));
  __asm
  {
    VMOV.F32        S0, #-1.0
    VLDR            S2, [R0,#0x3C]
  }
  result = 0;
    VADD.F32        S0, S2, S0
    VLDR            S2, =1.1921e-7
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int *__fastcall mce::ShaderProgramBase::ShaderProgramBase(int *a1, int *a2, int *a3, char a4)
{
  char v4; // r4@1
  int *v5; // r5@1
  int *v6; // r6@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v6 + 1, v5);
  *((_BYTE *)v6 + 8) = v4;
  *((_BYTE *)v6 + 9) = 0;
  return v6;
}


signed int __fastcall mce::FrameBufferAttachmentBase::allocateTexture(mce::FrameBufferAttachmentBase *this, mce::RenderContext *a2, mce::Texture *a3)
{
  mce::FrameBufferAttachmentBase *v3; // r6@1
  mce::Texture *v4; // r4@1
  mce::RenderContext *v5; // r5@1
  signed int result; // r0@1
  int v7; // [sp+4h] [bp+0h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  mce::Texture::Texture((mce::Texture *)&v7);
  mce::Texture::operator=((int)v4, (int)&v7);
  mce::Texture::~Texture((mce::Texture *)&v7);
  mce::Texture::createTexture(v4, v5, (mce::FrameBufferAttachmentBase *)((char *)v3 + 12));
  result = 1;
  *((_BYTE *)v3 + 76) = 1;
  return result;
}


unsigned int __fastcall mce::ImageBuffer::allocateStorage(mce::ImageBuffer *this, const mce::ImageDescription *a2)
{
  mce::ImageBuffer *v2; // r7@1
  const mce::ImageDescription *v3; // r5@1
  char *v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r6@1
  unsigned int result; // r0@1
  bool v9; // zf@1
  int v10; // r1@4 OVERLAPPED
  int v11; // r2@4
  unsigned int v12; // r2@4

  v2 = this;
  v3 = a2;
  v4 = (char *)this + 20;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 2);
  v7 = *((_DWORD *)a2 + 3);
  *(_DWORD *)v4 = *(_DWORD *)a2;
  *((_DWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  v4[16] = *((_BYTE *)a2 + 16);
  *((_DWORD *)v2 + 4) = j_mce::ImageDescription::getArraySize(a2);
  result = *(_DWORD *)v3;
  v9 = *(_DWORD *)v3 == 0;
  if ( !*(_DWORD *)v3 )
  {
    result = *((_DWORD *)v3 + 1);
    v9 = result == 0;
  }
  if ( !v9 )
    *((_DWORD *)v2 + 3) = j_mce::ImageDescription::getSubimageSize(v3);
    result = j_mce::ImageDescription::getStorageSize(v3);
    *(_QWORD *)&v10 = *(_QWORD *)v2;
    v12 = v11 - v10;
    if ( result <= v12 )
    {
      if ( result < v12 )
      {
        result += v10;
        *((_DWORD *)v2 + 1) = result;
      }
    }
    else
      result = j_j_j__ZNSt6vectorIhSaIhEE17_M_default_appendEj_1((int)v2, result - v12);
  return result;
}


_BOOL4 __fastcall mce::BufferOGL::isValid(mce::BufferOGL *this)
{
  return *((_DWORD *)this + 5) != 0;
}


void __fastcall mce::LRUCache::remove(__int64 this)
{
  mce::LRUCache::remove(this);
}


int __fastcall mce::ShaderUniformOGL::ShaderUniformOGL(int a1, int *a2, __int64 a3, char a4)
{
  int v4; // r4@1

  v4 = a1;
  *(_WORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 12), a2);
  *(_BYTE *)(v4 + 8) = a4;
  return v4;
}


signed int __fastcall mce::MathUtility::floatEqualsEpsilon(mce::MathUtility *this, float _R1, float _R2, float a4)
{
  signed int result; // r0@1

  __asm { VMOV            S2, R0 }
  result = 0;
  __asm
  {
    VMOV            S0, R1
    VSUB.F32        S4, S2, S0
    VSUB.F32        S0, S0, S2
    VMOV            S2, R2
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm { VMOVGE.F32      S0, S4 }
    VCMPE.F32       S0, S2
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


mce::RenderContextBase *__fastcall mce::RenderDeviceBase::createRenderContext(mce::RenderDeviceBase *this)
{
  mce::RenderDeviceBase *v1; // r4@1
  mce::RenderContext *v2; // r0@1
  mce::RenderContextBase *result; // r0@1
  mce::RenderContext *v4; // r5@1

  v1 = this;
  v2 = (mce::RenderContext *)operator new(0x178u);
  result = mce::RenderContext::RenderContext(v2);
  v4 = (mce::RenderContext *)*((_DWORD *)v1 + 21);
  *((_DWORD *)v1 + 21) = result;
  if ( v4 )
  {
    mce::RenderContext::~RenderContext(v4);
    operator delete((void *)v4);
    result = (mce::RenderContextBase *)*((_DWORD *)v1 + 21);
  }
  *((_DWORD *)result + 66) = v1;
  return result;
}


signed int __fastcall mce::ConstantBufferContainerBase::isDirty(mce::ConstantBufferContainerBase *this)
{
  __int64 v1; // r4@1
  mce::ShaderConstantBase *v2; // t1@2
  signed int result; // r0@4

  v1 = *(_QWORD *)((char *)this + 12);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v2 = *(mce::ShaderConstantBase **)v1;
      LODWORD(v1) = v1 + 4;
      if ( mce::ShaderConstantBase::isDirty(v2) == 1 )
        break;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall mce::UniformMetaData::UniformMetaData(int result)
{
  *(_DWORD *)result = 1;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  return result;
}


int __fastcall mce::WorldConstantsHolographic::setMatrixPatch(int result, int a2)
{
  *(_DWORD *)(result + 412) = *(_DWORD *)a2;
  *(_DWORD *)(result + 416) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 420) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 424) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 428) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 432) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 436) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(result + 440) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 444) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 448) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 452) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 456) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 460) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 464) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 468) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 472) = *(_DWORD *)(a2 + 60);
  *(_BYTE *)(result + 477) = 1;
  return result;
}


int __fastcall mce::ShaderConstantOGL::syncUniform(int result, int a2, int a3)
{
  *(_BYTE *)(result + 17) = 0;
  return result;
}


mce::RenderMaterial *__fastcall mce::RenderMaterial::RenderMaterial(mce::RenderMaterial *this)
{
  mce::RenderMaterial *v1; // r4@1
  char *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &unk_28898CC;
  *((_DWORD *)this + 1) = &unk_28898CC;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 3) = 0;
  v2 = (char *)this + 12;
  *((_DWORD *)v1 + 5) = v2;
  *((_DWORD *)v1 + 6) = v2;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = &unk_28898CC;
  *((_DWORD *)v1 + 10) = &unk_28898CC;
  *((_DWORD *)v1 + 11) = &unk_28898CC;
  *((_DWORD *)v1 + 12) = &unk_28898CC;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_BYTE *)v1 + 64) = 0;
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  mce::BlendStateDescription::BlendStateDescription((mce::RenderMaterial *)((char *)v1 + 80));
  *((_BYTE *)v1 + 87) = 0;
  *((_DWORD *)v1 + 22) = 16843009;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  *((_DWORD *)v1 + 25) = 0;
  *((_DWORD *)v1 + 26) = 0;
  mce::BlendStateDescription::BlendStateDescription((mce::RenderMaterial *)((char *)v1 + 108));
  mce::DepthStencilStateOGL::DepthStencilStateOGL((mce::RenderMaterial *)((char *)v1 + 116));
  mce::DepthStencilStateDescription::DepthStencilStateDescription((mce::RenderMaterial *)((char *)v1 + 188));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 212));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 220));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 228));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 236));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 244));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 252));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 260));
  mce::SamplerStateDescription::SamplerStateDescription((mce::RenderMaterial *)((char *)v1 + 268));
  mce::SamplerStateGroupBase::SamplerStateGroupBase((mce::RenderMaterial *)((char *)v1 + 276));
  *((_WORD *)v1 + 220) = 0;
  *((_DWORD *)v1 + 111) = 0;
  *((_DWORD *)v1 + 112) = 0;
  *((_DWORD *)v1 + 113) = 0;
  mce::VertexFormat::VertexFormat((mce::RenderMaterial *)((char *)v1 + 456));
  mce::RasterizerState::RasterizerState((mce::RenderMaterial *)((char *)v1 + 468));
  mce::RasterizerStateDescription::RasterizerStateDescription((mce::RenderMaterial *)((char *)v1 + 496));
  *((_BYTE *)v1 + 508) = 0;
  *((_BYTE *)v1 + 509) = 2;
  *((_DWORD *)v1 + 128) = &unk_28898CC;
  *((_DWORD *)v1 + 129) = 1;
  mce::PipelineStateObjectOGL::PipelineStateObjectOGL((mce::RenderMaterial *)((char *)v1 + 520));
  mce::PipelineStateObjectOGL::PipelineStateObjectOGL((mce::RenderMaterial *)((char *)v1 + 521));
  return v1;
}


int __fastcall mce::Math::absDecrease(mce::Math *this, float _R1, float _R2, float a4)
{
  int *v8; // r1@2
  float *v9; // r0@2
  float v11; // [sp+0h] [bp-10h]@3
  float v12; // [sp+4h] [bp-Ch]@3
  float v13; // [sp+8h] [bp-8h]@2
  float v14; // [sp+Ch] [bp-4h]@1

  __asm { VMOV            S4, R0 }
  v14 = _R2;
  __asm
  {
    VMOV            S0, R2
    VMOV            S2, R1
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VADD.F32        S2, S2, S4 }
    v8 = (int *)&v12;
    __asm { VNEG.F32        S0, S0 }
    v9 = &v11;
    __asm
    {
      VSTR            S2, [SP,#0x10+var_C]
      VSTR            S0, [SP,#0x10+var_10]
    }
  else
    __asm { VSUB.F32        S2, S4, S2 }
    v8 = (int *)&v14;
    v9 = &v13;
    __asm { VSTR            S2, [SP,#0x10+var_8] }
    VCMPE.F32       S2, S0
    v9 = (float *)v8;
  return *(_DWORD *)v9;
}


char *__fastcall mce::RenderContextBase::getSwapChain(mce::RenderContextBase *this)
{
  return (char *)this + 236;
}


void __fastcall mce::EffectConstants::~EffectConstants(mce::EffectConstants *this)
{
  mce::EffectConstants::~EffectConstants(this);
}


int __fastcall mce::ShaderConstantFloat2::syncUniform(mce::ShaderConstantFloat2 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform2fv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


char *__fastcall mce::DeviceInformationBase::getGraphicsExtensions(mce::DeviceInformationBase *this)
{
  return (char *)this + 56;
}


int __fastcall mce::Mesh::render(mce::Buffer *this, int a2, int a3, int a4, int a5)
{
  mce::Buffer *v5; // r6@1
  int v6; // r7@1
  int v7; // r11@1
  int v8; // r4@1
  mce::GlobalConstantBufferManager *v9; // r10@1
  int result; // r0@3
  unsigned int v11; // r9@5
  int v12; // r2@8
  int v13; // r0@8
  mce::ShaderBase *v14; // r0@12
  unsigned int v15; // r2@12
  int v16; // r0@12
  unsigned int v17; // r4@12
  int v18; // r0@16
  bool v19; // zf@16
  mce::Buffer *v20; // r0@19
  unsigned int v21; // r1@19
  int v22; // r9@23
  int v23; // r9@26
  int v24; // r1@30
  int v25; // r9@32
  int v26; // r9@35
  void *v27; // [sp+10h] [bp-28h]@1

  v5 = this;
  v6 = a2;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = a3;
  v9 = (mce::GlobalConstantBufferManager *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  v27 = (void *)*((_DWORD *)this + 19);
  if ( mce::Buffer::isValid(this) != 1 || !*((_DWORD *)v5 + 21) )
  {
    result = *((_DWORD *)v5 + 19);
    if ( !result )
      return result;
  }
  result = mce::VertexFormat::isValid((mce::Buffer *)((char *)v5 + 64));
  if ( result != 1 )
    return result;
  v11 = a5;
  if ( *((_DWORD *)v5 + 19) )
    if ( !mce::ImmediateBuffer::isValid((mce::ImmediateBuffer *)(v7 + 196)) )
      mce::ImmediateBuffer::createDynamicBuffer((gl *)(v7 + 196), v7, 1, 0, 0x100000, 0);
    v12 = mce::VertexFormat::getVertexSize((mce::Buffer *)((char *)v5 + 64));
    v13 = a5;
    if ( !a5 )
      v13 = *((_DWORD *)v5 + 21);
    mce::ImmediateBuffer::updateBuffer((mce::ImmediateBuffer *)(v7 + 196), (mce::RenderContext *)v7, v12, &v27, v13);
  else
    mce::Buffer::bindBuffer(v5, (mce::RenderContext *)v7);
  mce::GlobalConstantBufferManager::refreshWorldConstants(
    v9,
    (mce::RenderContext *)v7,
    *(mce::Camera **)(v6 + 16),
    (ShaderColor *)*(_QWORD *)(v6 + 48),
    (ShaderColor *)(*(_QWORD *)(v6 + 48) >> 32));
  mce::RenderMaterial::useWith(
    *(mce::RenderMaterial **)(v8 + 4),
    (mce::Buffer *)((char *)v5 + 64),
    v27);
  v14 = (mce::ShaderBase *)mce::RenderMaterial::getShader(*(mce::RenderMaterial **)(v8 + 4));
  mce::ShaderBase::validateVertexFormat(v14, (mce::Buffer *)((char *)v5 + 64));
  v16 = *((_DWORD *)v5 + 20);
  v17 = *(_DWORD *)(mce::Singleton<mce::RendererSettings>::mInstance + 52);
  if ( v16 && !*((_DWORD *)v5 + 24) )
LABEL_16:
    v18 = *((_DWORD *)v5 + 24);
    v19 = v18 == 0;
    if ( !v18 )
      v19 = *((_DWORD *)v5 + 19) == 0;
    if ( v19 )
    {
      mce::Buffer::bindBuffer((mce::Buffer *)((char *)v5 + 32), (mce::RenderContext *)v7);
LABEL_30:
      v24 = *((_BYTE *)v5 + 92);
      if ( v17 < 2 )
      {
        if ( !v11 )
          v26 = *((_DWORD *)v5 + 20);
        result = mce::RenderContext::drawIndexed();
      }
      else
          v25 = *((_DWORD *)v5 + 20);
        result = mce::RenderContext::drawIndexedInstanced();
    }
LABEL_19:
    v20 = (mce::Buffer *)mce::QuadIndexBuffer::getInstance(
                           (mce::QuadIndexBuffer *)v7,
                           *((mce::RenderContext **)v5 + 21),
                           v15);
    mce::Buffer::bindBuffer(v20, (mce::RenderContext *)v7);
      v11 = mce::PolygonHelper::calculateIndexCountForQuads(*((mce::PolygonHelper **)v5 + 21), v21);
    goto LABEL_30;
  if ( *((_BYTE *)v5 + 92) == 1 )
    if ( !v16 )
      goto LABEL_19;
    goto LABEL_16;
  if ( v17 < 2 )
      v23 = *((_DWORD *)v5 + 21);
    result = mce::RenderContext::draw();
      v22 = *((_DWORD *)v5 + 21);
    result = mce::RenderContext::drawInstanced();
  return result;
}


signed int __fastcall mce::Platform::OGL::InitBindings(mce::Platform::OGL *this)
{
  signed int v1; // r0@1
  signed int v2; // r1@1

  v1 = j_gladLoadGLES2Loader((int (__fastcall *)(const char *))mce::Platform::OGL::GetProcAddress);
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


int __fastcall mce::TextureGroup::unloadTexture(mce::TextureGroup *this, const ResourceLocation *a2)
{
  mce::TextureGroup *v2; // r9@1
  char *v3; // r10@1
  int result; // r0@1
  const void **v5; // r8@1
  int v6; // r7@1
  const void *v7; // r6@2
  char *v8; // r11@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r5@4
  size_t v12; // r2@4
  _DWORD *v13; // r1@13
  unsigned int v14; // r4@13
  unsigned int v15; // r5@13
  size_t v16; // r2@13
  __int64 v17; // r0@20
  void *v18; // r5@22

  v2 = this;
  v3 = (char *)this + 4;
  result = *((_DWORD *)this + 2);
  v5 = (const void **)a2;
  v6 = (int)v3;
  if ( result )
  {
    v7 = *(const void **)a2;
    v8 = v3;
    v9 = *(_DWORD *)(*(_DWORD *)a2 - 12);
    do
    {
      v6 = result;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        result = memcmp(v10, v7, v12);
        if ( !result )
          result = v11 - v9;
        if ( result >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = (int)v8;
          goto LABEL_12;
        }
      }
      result = *(_DWORD *)(v6 + 8);
      v8 = (char *)v6;
    }
    while ( result );
  }
LABEL_12:
  if ( (char *)v6 != v3 )
    v13 = *(_DWORD **)(v6 + 16);
    v14 = *((_DWORD *)*v5 - 3);
    v15 = *(v13 - 3);
    v16 = *((_DWORD *)*v5 - 3);
    if ( v14 > v15 )
      v16 = *(v13 - 3);
    result = memcmp(*v5, v13, v16);
    if ( !result )
      result = v14 - v15;
    if ( result < 0 )
      v6 = (int)v3;
    if ( (char *)v6 != v3 )
      LODWORD(v17) = *((_DWORD *)v2 + 16);
      if ( (_DWORD)v17 )
        HIDWORD(v17) = v5;
        mce::LRUCache::remove(v17);
      TexturePair::unload((TexturePair *)(v6 + 24));
      v18 = (void *)sub_21D4A24(v6, (int)v3);
      std::pair<ResourceLocation const,TexturePair>::~pair((int)v18 + 16);
      operator delete(v18);
      result = *((_DWORD *)v2 + 5) - 1;
      *((_DWORD *)v2 + 5) = result;
  return result;
}


void __fastcall mce::ShaderConstantMatrix4x4::~ShaderConstantMatrix4x4(mce::ShaderConstantMatrix4x4 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall mce::TextureGroup::removeTickingTextures(int result)
{
  int v1; // r8@1
  __int64 v2; // r4@1
  int v3; // t1@2
  int *v4; // r6@3
  int *v5; // r5@4

  v1 = result;
  v2 = *(_QWORD *)(result + 68);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      LODWORD(v2) = v2 + 4;
      result = (*(int (**)(void))(*(_DWORD *)v3 + 20))();
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    v4 = (int *)(*(_QWORD *)(v1 + 68) >> 32);
    LODWORD(v2) = *(_QWORD *)(v1 + 68);
    if ( v4 != (int *)v2 )
      v5 = (int *)*(_QWORD *)(v1 + 68);
      do
      {
        result = *v5;
        if ( *v5 )
          result = (*(int (**)(void))(*(_DWORD *)result + 4))();
        *v5 = 0;
        ++v5;
      }
      while ( v4 != v5 );
  }
  *(_DWORD *)(v1 + 72) = v2;
  return result;
}


signed int __fastcall mce::Texture::loadMipMap(mce::Texture *this, mce::RenderContext *a2, const void *a3, unsigned int a4)
{
  unsigned int v4; // r4@1
  const void *v5; // r5@1
  mce::RenderContext *v6; // r6@1
  mce::Texture *v7; // r7@1
  unsigned __int64 *v8; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = (unsigned __int64 *)mce::TextureBase::getDescription(this);
  return mce::TextureOGL::createMipStorage(v7, v6, v5, (unsigned int)*v8 >> v4, (unsigned int)(*v8 >> 32) >> v4, v4);
}


int __fastcall mce::TexturePtr::hasBackwardsCompatInfo(mce::TexturePtr *this)
{
  BackwardsCompatTextureInfo *v1; // r0@1
  int result; // r0@2

  v1 = (BackwardsCompatTextureInfo *)*((_DWORD *)this + 5);
  if ( v1 )
    result = BackwardsCompatTextureInfo::canUse(v1);
  else
    result = 0;
  return result;
}


int __fastcall mce::TextureBase::deleteTexture(mce::TextureBase *this)
{
  mce::TextureBase *v1; // r4@1
  mce::RenderContextStateBase *v2; // r0@1

  v1 = this;
  *((_BYTE *)this + 40) = 0;
  v2 = (mce::RenderContextStateBase *)mce::RenderContextImmediate::get(0);
  return j_j_j__ZN3mce22RenderContextStateBase13removeIfBoundERKNS_11TextureBaseE(v2, v1);
}


mce::RenderDeviceBase *__fastcall mce::RenderDeviceBase::RenderDeviceBase(mce::RenderDeviceBase *this)
{
  mce::RenderDeviceBase *v1; // r4@1
  mce::RenderContext *v2; // r0@1
  mce::RenderContextBase *v3; // r0@1
  mce::RenderContext *v4; // r5@1

  v1 = this;
  mce::DeviceInformation::DeviceInformation(this);
  *((_BYTE *)v1 + 88) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  v2 = (mce::RenderContext *)operator new(0x178u);
  v3 = mce::RenderContext::RenderContext(v2);
  v4 = (mce::RenderContext *)*((_DWORD *)v1 + 21);
  *((_DWORD *)v1 + 21) = v3;
  if ( v4 )
  {
    mce::RenderContext::~RenderContext(v4);
    operator delete((void *)v4);
    v3 = (mce::RenderContextBase *)*((_DWORD *)v1 + 21);
  }
  *((_DWORD *)v3 + 66) = v1;
  return v1;
}


int __fastcall mce::TexturePtr::onGroupDestroyed(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall mce::TexturePtr::~TexturePtr(mce::TexturePtr *this)
{
  mce::TexturePtr *v1; // r4@1
  mce::TextureGroup *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E8D98;
  v2 = (mce::TextureGroup *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    mce::TextureGroup::_removeRef(v2, v1);
    *((_DWORD *)v1 + 1) = 0;
  }
  *((_DWORD *)v1 + 2) = 0;
  v3 = *((_DWORD *)v1 + 3);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  operator delete((void *)v1);
}


int __fastcall mce::Math::cos(mce::Math *this, float a2)
{
  mce::Math *v9; // [sp+4h] [bp-Ch]@1

  v9 = this;
  _R0 = j_mce::Radian::asFloat((mce::Radian *)&v9);
  __asm
  {
    VLDR            S2, [R0]
    VLDR            S0, =10430.0
    VMUL.F32        S0, S2, S0
    VLDR            S2, =16384.0
    VADD.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  }
  return mce::Math::mSin[(unsigned __int16)_R1];
}


int __fastcall mce::Math::log2(mce::Math *this, float a2)
{
  int result; // r0@1

  _R0 = j_logf(*(float *)&this);
  __asm
  {
    VLDR            S0, =1.4427
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall mce::FrameBufferAttachmentOGL::setResolveSourceAttachment(mce::FrameBufferAttachmentOGL *this, const mce::Texture *a2)
{
  mce::FrameBufferAttachmentOGL *v2; // r4@1
  int v3; // r0@1
  int v4; // ST00_4@1
  signed int v5; // r2@2

  v2 = this;
  v3 = mce::Texture::getInternalTexture(a2);
  v4 = *((_BYTE *)v2 + 4);
  if ( *((_DWORD *)v2 + 9) < 2 )
    v5 = 3553;
  else
    v5 = 37120;
  return glad_glFramebufferTexture2D(36008, *((_DWORD *)v2 + 22), v5, v3);
}


int __fastcall mce::Math::lerpRotate(int _R0, int _R1, int a3)
{
  int v7; // r4@1
  signed int v10; // r1@1
  float v11; // r0@1
  int v12; // r0@3
  int result; // r0@3
  int v15; // [sp+4h] [bp-14h]@1

  __asm
  {
    VMOV            S16, R0
    VMOV            S0, R1
  }
  v7 = a3;
    VSUB.F32        S0, S0, S16
    VSTR            S0, [SP,#0x18+var_14]
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v15);
    VLDR            S0, =180.0
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  *(float *)&v15 = j_fmodf(_R0, 360.0);
  v10 = j_mce::operator<(v15, 0);
  v11 = *(float *)&v15;
  if ( v10 == 1 )
    v11 = COERCE_FLOAT(j_mce::operator+(v15, 1135869952));
    *(float *)&v15 = v11;
  v12 = j_mce::operator-(SLODWORD(v11), 1127481344);
  _R0 = j_mce::operator*(v7, v12);
    VMOV            S0, R0
    VADD.F32        S0, S0, S16
  return result;
}


void __fastcall mce::EntityConstants::init(mce::EntityConstants *this)
{
  mce::EntityConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  int v12; // r5@12
  mce::ShaderConstantBase *v13; // r0@12
  mce::ShaderConstantBase *v14; // r5@12
  void *v15; // r0@16
  int v16; // r5@17
  mce::ShaderConstantBase *v17; // r0@17
  mce::ShaderConstantBase *v18; // r5@17
  void *v19; // r0@21
  int v20; // r5@22
  mce::ShaderConstantBase *v21; // r0@22
  mce::ShaderConstantBase *v22; // r5@22
  void *v23; // r0@26
  int v24; // r5@27
  mce::ShaderConstantBase *v25; // r0@27
  mce::ShaderConstantBase *v26; // r5@27
  void *v27; // r0@31
  int v28; // r5@32
  mce::ShaderConstantBase *v29; // r0@32
  mce::ShaderConstantBase *v30; // r5@32
  void *v31; // r0@36
  int v32; // r5@37
  mce::ShaderConstantBase *v33; // r0@37
  mce::ShaderConstantBase *v34; // r5@37
  void *v35; // r0@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  unsigned int *v52; // r2@75
  signed int v53; // r1@77
  int v54; // [sp+8h] [bp-58h]@37
  int v55; // [sp+10h] [bp-50h]@32
  int v56; // [sp+18h] [bp-48h]@27
  int v57; // [sp+20h] [bp-40h]@22
  int v58; // [sp+28h] [bp-38h]@17
  int v59; // [sp+30h] [bp-30h]@12
  int v60; // [sp+38h] [bp-28h]@7
  int v61; // [sp+40h] [bp-20h]@2
  int v62; // [sp+48h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v62, "EntityConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v62);
  v3 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v62 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v61, "OVERLAY_COLOR");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v61);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 4 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v61 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v60, "TILE_LIGHT_COLOR");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v60);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 4 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v60 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v59, "CHANGE_COLOR");
  v13 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v12, (const void **)&v59);
  v14 = v13;
  if ( v13 )
    if ( mce::ShaderConstantBase::getType(v13) != 4 )
      v14 = 0;
    *((_DWORD *)v1 + 4) = v14;
  v15 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v59 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v58, "GLINT_COLOR");
  v17 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v16, (const void **)&v58);
  v18 = v17;
  if ( v17 )
    if ( mce::ShaderConstantBase::getType(v17) != 4 )
      v18 = 0;
    *((_DWORD *)v1 + 5) = v18;
  v19 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v58 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v57, "UV_ANIM");
  v21 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v20, (const void **)&v57);
  v22 = v21;
  if ( v21 )
    if ( mce::ShaderConstantBase::getType(v21) != 4 )
      v22 = 0;
    *((_DWORD *)v1 + 6) = v22;
  v23 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v57 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v56, "UV_OFFSET");
  v25 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v24, (const void **)&v56);
  v26 = v25;
  if ( v25 )
    if ( mce::ShaderConstantBase::getType(v25) != 2 )
      v26 = 0;
    *((_DWORD *)v1 + 7) = v26;
  v27 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v56 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v55, "UV_ROTATION");
  v29 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v28, (const void **)&v55);
  v30 = v29;
  if ( v29 )
    if ( mce::ShaderConstantBase::getType(v29) != 2 )
      v30 = 0;
    *((_DWORD *)v1 + 8) = v30;
  v31 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v55 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v54, "GLINT_UV_SCALE");
  v33 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v32, (const void **)&v54);
  v34 = v33;
  if ( v33 )
    if ( mce::ShaderConstantBase::getType(v33) != 2 )
      v34 = 0;
    *((_DWORD *)v1 + 9) = v34;
  v35 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v54 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
}


int __fastcall mce::FrameBufferObjectOGL::clearStencilAttachment(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  mce::FrameBufferAttachmentBase *v4; // r0@1
  char *v5; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *(mce::FrameBufferAttachmentBase **)(a1 + 32);
  if ( v4 )
  {
    v5 = mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription(v4);
    mce::FrameBufferObjectOGL::clearFrameBufferInternal(v2, (_DWORD *)v5 + 10, 1024, v3);
  }
  return j_j_j__ZNK3mce21FrameBufferObjectBase22clearStencilAttachmentEPKNS_12ViewportInfoE();
}


int __fastcall mce::TextureGroup::getMissingTexture(mce::TextureGroup *this)
{
  mce::TextureGroup *v1; // r8@1
  char *v2; // r9@1
  char *v3; // r0@1
  char *v4; // r7@1
  char *v5; // r10@2
  const void *v6; // r5@2
  size_t v7; // r4@2
  _DWORD *v8; // r0@4
  size_t v9; // r6@4
  size_t v10; // r2@4
  int v11; // r0@6
  _DWORD *v12; // r1@13
  unsigned int v13; // r5@13
  unsigned int v14; // r4@13
  size_t v15; // r2@13
  int v16; // r0@15
  int v17; // r4@20
  bool v18; // r2@20
  int result; // r0@22

  v1 = this;
  v2 = (char *)this + 4;
  v3 = (char *)*((_DWORD *)this + 2);
  v4 = v2;
  if ( v3 )
  {
    v5 = v2;
    v6 = mce::TextureGroup::MISSING_TEXTURE_LOCATION[0];
    v7 = *((_DWORD *)mce::TextureGroup::MISSING_TEXTURE_LOCATION[0] - 3);
    do
    {
      v4 = v3;
      while ( 1 )
      {
        v8 = (_DWORD *)*((_DWORD *)v4 + 4);
        v9 = *(v8 - 3);
        v10 = *(v8 - 3);
        if ( v9 > v7 )
          v10 = v7;
        v11 = memcmp(v8, v6, v10);
        if ( !v11 )
          v11 = v9 - v7;
        if ( v11 >= 0 )
          break;
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v5;
          goto LABEL_12;
        }
      }
      v3 = (char *)*((_DWORD *)v4 + 2);
      v5 = v4;
    }
    while ( v3 );
  }
LABEL_12:
  if ( v4 == v2 )
    goto LABEL_26;
  v12 = (_DWORD *)*((_DWORD *)v4 + 4);
  v13 = *(v12 - 3);
  v14 = *((_DWORD *)mce::TextureGroup::MISSING_TEXTURE_LOCATION[0] - 3);
  v15 = *((_DWORD *)mce::TextureGroup::MISSING_TEXTURE_LOCATION[0] - 3);
  if ( v14 > v13 )
    v15 = *(v12 - 3);
  v16 = memcmp(mce::TextureGroup::MISSING_TEXTURE_LOCATION[0], v12, v15);
  if ( !v16 )
    v16 = v14 - v13;
  if ( v16 < 0 )
    v4 = v2;
LABEL_26:
    result = 0;
  else
    v17 = std::map<ResourceLocation,TexturePair,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,TexturePair>>>::operator[](
            (int)v1,
            mce::TextureGroup::MISSING_TEXTURE_LOCATION);
    if ( !mce::TextureContainer::isValid((mce::TextureContainer *)(v17 + 64)) )
      ImageUtils::uncompress((ImageUtils *)(v17 + 64), (mce::TextureContainer *)1, v18);
    result = v17;
  return result;
}


_WORD *__fastcall mce::SwapChainBase::createSwapChain(int a1, int a2, int a3)
{
  int v3; // r3@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r12@1
  int v7; // lr@1
  _WORD *result; // r0@1

  v3 = *(_DWORD *)(a3 + 4);
  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a3 + 12);
  v6 = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a3 + 20);
  *(_DWORD *)a1 = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 20) = v7;
  result = (_WORD *)(a1 + 24);
  *result = *(_WORD *)(a3 + 24);
  return result;
}


int __fastcall mce::UniformMetaData::getUniformSize(mce::UniformMetaData *this)
{
  mce::UniformMetaData *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = this;
  v2 = mce::ShaderPrimitiveTypeHelper::sizeInBytesFromShaderPrimitiveType(*((_BYTE *)this + 8));
  v3 = *(_DWORD *)v1;
  if ( !*(_DWORD *)v1 )
    v3 = 1;
  return v2 * v3;
}


char *__fastcall mce::TextureContainer::getTextureDescription(mce::TextureContainer *this)
{
  return (char *)this + 16;
}


int __fastcall mce::Clock::accumulatedTime(mce::Clock *this)
{
  return *(_DWORD *)this;
}


int __fastcall mce::Math::intFloorDiv(mce::Math *this, int a2, int a3)
{
  if ( (signed int)this <= -1 && a2 >= 1 )
  {
    this = (mce::Math *)~(unsigned int)this;
    return ~((signed int)this / a2);
  }
  if ( (signed int)this >= 1 && a2 <= -1 )
    a2 = 1 - a2;
  return (signed int)this / a2;
}


int __fastcall mce::Attribute::Attribute(int result, __int64 a2, char a3)
{
  *(_BYTE *)result = a3;
  *(_QWORD *)(result + 4) = a2;
  return result;
}


int __fastcall mce::TextureOGL::unbindTexture(mce::TextureOGL *this, mce::RenderContext *a2, unsigned int a3)
{
  mce::TextureOGL *v3; // r6@1
  mce::RenderContext *v4; // r5@1
  int v5; // r8@1
  int v6; // r9@2
  unsigned int v8; // [sp+0h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = 0;
  v8 = a3;
  do
  {
    v6 = (int)v4 + 4 * v5;
    if ( *(mce::TextureOGL **)(v6 + 132) == v3 )
    {
      if ( v5 + 33984 != *((_DWORD *)v4 + 68) )
      {
        glad_glActiveTexture(v5 + 33984);
        *((_DWORD *)v4 + 68) = v5 + 33984;
      }
      glad_glBindTexture(*((_DWORD *)v3 + 12), 0);
      *(_DWORD *)(v6 + 132) = 0;
    }
    ++v5;
  }
  while ( v5 != 8 );
  return j_j_j__ZNK3mce11TextureBase13unbindTextureERNS_13RenderContextEj(v3, v4, v8);
}


int __fastcall mce::GlobalConstantBufferManager::allocateAndSetupConstantBuffersFromMetadata(int result, mce::RenderContext *a2)
{
  mce::ConstantBufferContainer *v2; // r5@1 OVERLAPPED
  mce::ConstantBufferContainer *v3; // r6@1 OVERLAPPED
  mce::RenderContext *i; // r4@1

  *(_QWORD *)&v2 = *(_QWORD *)result;
  for ( i = a2; v3 != v2; v2 = (mce::ConstantBufferContainer *)((char *)v2 + 44) )
    result = mce::ConstantBufferContainer::allocateRenderContextBuffer(v2, i);
  return result;
}


int __fastcall mce::FrameBufferObjectBase::createFrameBuffer(int result, mce::RenderContext *a2, const mce::FrameBufferDescription *a3)
{
  int v3; // r1@1
  int v4; // r3@1
  int v5; // r12@1
  int v6; // r2@1

  v3 = *(_DWORD *)a3;
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v5;
  *(_DWORD *)(result + 12) = v6;
  *(_BYTE *)(result + 41) = 1;
  return result;
}


int __fastcall mce::RenderMaterial::_resolveTexture(mce::RenderMaterial *this, unsigned int a2, mce::TextureGroup *a3)
{
  unsigned int v3; // r1@1
  mce::TextureGroup *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  int result; // r0@1
  _BYTE *v8; // r6@1
  int v9; // t1@1
  void *v10; // r0@3
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  int v13; // [sp+4h] [bp-3Ch]@3
  int v14; // [sp+8h] [bp-38h]@3
  char v15; // [sp+Ch] [bp-34h]@3

  v3 = 9 * a2;
  v4 = a3;
  v5 = *((_DWORD *)this + 17) + 4 * v3;
  v6 = *((_DWORD *)this + 17) + 4 * v3;
  v9 = *(_BYTE *)(v6 + 32);
  v8 = (_BYTE *)(v6 + 32);
  result = v9;
  if ( !v9 )
  {
    result = mce::TextureGroup::isLoaded(a3, (const ResourceLocation *)v5, 0);
    if ( result == 1 )
    {
      sub_21E8AF4(&v13, (int *)v5);
      v14 = *(_DWORD *)(v5 + 4);
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v15, v4, (int)&v13, 0);
      mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 8), (mce::TexturePtr *)&v15);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v15);
      v10 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v13 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      result = 1;
      *v8 = 1;
    }
  }
  return result;
}


int *__fastcall mce::ConstantBufferContainerBase::sync(mce::ConstantBufferContainerBase *this, mce::RenderContext *a2)
{
  int *result; // r0@1
  int *i; // r1@1
  __int64 v4; // kr00_8@1
  int v5; // t1@2

  v4 = *(_QWORD *)((char *)this + 12);
  result = (int *)(*(_QWORD *)((char *)this + 12) >> 32);
  for ( i = (int *)v4; result != i; *(_BYTE *)(v5 + 17) = 0 )
  {
    v5 = *i;
    ++i;
  }
  return result;
}


int __fastcall mce::ConstantBufferMetaDataManager::ConstantBufferMetaDataManager(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = result + 16;
  *(_DWORD *)(result + 28) = result + 16;
  return result;
}


void __fastcall mce::TextureGroup::createEmptyTexture(mce::TextureGroup *this, const ResourceLocation *a2, const mce::TextureDescription *a3, const mce::TextureDescription *a4)
{
  mce::TextureGroup::createEmptyTexture(this, a2, a3, a4);
}


signed int __fastcall mce::VertexFormat::isValid(mce::VertexFormat *this)
{
  signed int result; // r0@3

  if ( *(_BYTE *)this != mce::VertexFormat::EMPTY || *((_BYTE *)this + 7) != unk_27E8CB3 )
    result = 1;
  else
    result = memcmp((char *)this + 1, &unk_27E8CAD, 6u) != 0;
  return result;
}


_BOOL4 __fastcall mce::Mesh::hasIndices(mce::Mesh *this)
{
  return *((_DWORD *)this + 20) != 0;
}


int __fastcall mce::TextureGroup::clearLoadedResourcesRecord(int result)
{
  int v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED

  v1 = result;
  *(_QWORD *)&v2 = *(_QWORD *)(result + 24);
  if ( v3 != v2 )
  {
    result = v2;
    do
      result = (int)ResourceLocationPair::~ResourceLocationPair((ResourceLocationPair *)result) + 64;
    while ( v3 != result );
  }
  *(_DWORD *)(v1 + 28) = v2;
  return result;
}


int __fastcall mce::TexturePtr::makeTemporaryWrapper(int result, mce::Texture *a2)
{
  int v2; // r2@1

  *(_DWORD *)result = &off_26E8D98;
  *(_DWORD *)(result + 4) = 0;
  v2 = result + 8;
  *(_DWORD *)v2 = a2;
  *(_DWORD *)(v2 + 4) = &unk_28898CC;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


void __fastcall mce::TextConstants::init(mce::TextConstants *this)
{
  mce::TextConstants::init(this);
}


void __fastcall mce::RenderStageWithFrameBufferObject::~RenderStageWithFrameBufferObject(mce::RenderStageWithFrameBufferObject *this)
{
  mce::RenderStageWithFrameBufferObject::~RenderStageWithFrameBufferObject(this);
}


int __fastcall mce::RasterizerStateBase::createRasterizerStateDescription(int result, mce::RenderContext *a2, const mce::RasterizerStateDescription *a3)
{
  __int16 v3; // r1@1
  __int64 v4; // kr00_8@1

  v3 = *((_WORD *)a3 + 4);
  v4 = *(_QWORD *)a3;
  *(_BYTE *)(result + 10) = *((_BYTE *)a3 + 10);
  *(_WORD *)(result + 8) = v3;
  *(_QWORD *)result = v4;
  return result;
}


int __fastcall mce::MaterialPtr::onGroupReloaded(mce::MaterialPtr *this)
{
  mce::MaterialPtr *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = mce::RenderMaterialGroup::_getMaterial(*(_DWORD *)this, (int **)this + 2);
  *((_DWORD *)v1 + 1) = result;
  return result;
}


char *__fastcall mce::ShaderOGL::reflectShaderUniforms(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r4@1
  int *v2; // r5@2
  int v3; // r8@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int v6; // r2@11
  int v7; // r1@11
  int v8; // r3@12
  int v9; // r12@12
  int v10; // r6@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  int v13; // r5@22
  int v14; // r1@23
  void *v15; // r0@23
  int v16; // r0@27
  unsigned int v17; // r2@27
  int v18; // r6@28
  _BYTE *v19; // r0@28
  char *v20; // r0@30
  char v21; // r0@33
  unsigned int v22; // r10@48
  __int64 v23; // kr00_8@48
  int *v24; // r10@51
  int v25; // r5@51
  _QWORD *v26; // r6@51
  int v27; // r11@51
  void *v28; // r0@51
  const void **v29; // r0@52
  mce::ConstantBufferContainer *v30; // r6@52
  char *result; // r0@54
  mce::ShaderOGL *v32; // [sp+14h] [bp-46Ch]@2
  unsigned __int64 *v33; // [sp+24h] [bp-45Ch]@1
  int v34; // [sp+38h] [bp-448h]@3
  char v35; // [sp+3Fh] [bp-441h]@28
  int v36; // [sp+40h] [bp-440h]@28
  int v37; // [sp+44h] [bp-43Ch]@2
  int v38; // [sp+48h] [bp-438h]@32
  char v39; // [sp+4Ch] [bp-434h]@29
  int v40; // [sp+50h] [bp-430h]@1
  char v41; // [sp+58h] [bp-428h]@28
  int v42; // [sp+60h] [bp-420h]@48
  RakNet *v43; // [sp+458h] [bp-28h]@1

  v1 = this;
  v43 = _stack_chk_guard;
  v33 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  glad_glGetProgramiv(*((_DWORD *)this + 5), 35718, &v40);
  if ( v40 )
  {
    v32 = (mce::ShaderOGL *)((char *)v1 + 36);
    v2 = &v37;
    v3 = 0;
    do
    {
      glad_glGetActiveUniform(*((_DWORD *)v1 + 5), v3, 1024, &v39);
      v36 = glad_glGetUniformLocation(*((_DWORD *)v1 + 5), &v41);
      if ( v36 >= 0 )
      {
        v20 = strchr(&v41, 91);
        if ( v20 )
          *v20 = 0;
        switch ( v38 )
        {
          case 35664:
            v21 = 2;
            goto LABEL_51;
          case 35670:
          case 35671:
          case 35672:
          case 35673:
          case 35677:
            goto LABEL_37;
          case 35665:
            v21 = 3;
          case 35666:
            v21 = 4;
          case 35667:
            v21 = 6;
          case 35668:
            v21 = 7;
          case 35669:
            v21 = 8;
          case 35674:
            v21 = 9;
          case 35675:
            v21 = 10;
          case 35676:
            v21 = 11;
          case 35678:
            v35 = 13;
            if ( strlen(&v41) >= 9 && strstr(&v41, "TEXTURE_") )
            {
              v22 = atoi((const char *)&v42);
              v23 = *(_QWORD *)((char *)v1 + 36);
              if ( v22 >= (HIDWORD(v23) - (signed int)v23) >> 4 )
              {
                v6 = (HIDWORD(v23) - (signed int)v23) >> 4;
                v7 = v22 + 1;
                if ( v22 + 1 <= v6 )
                {
                  if ( v22 + 1 >= v6 )
                  {
                    v9 = HIDWORD(v23);
                  }
                  else
                    v9 = v23 + 16 * v7;
                    v10 = v23 + 16 * v7;
                    if ( HIDWORD(v23) != v9 )
                    {
                      do
                      {
                        v14 = *(_DWORD *)(v10 + 12);
                        v15 = (void *)(v14 - 12);
                        if ( (int *)(v14 - 12) != &dword_28898C0 )
                        {
                          v11 = (unsigned int *)(v14 - 4);
                          if ( &pthread_create )
                          {
                            __dmb();
                            do
                            {
                              v12 = __ldrex(v11);
                              v8 = v12 - 1;
                            }
                            while ( __strex(v12 - 1, v11) );
                          }
                          else
                            v12 = *v11;
                            v8 = *v11 - 1;
                            *v11 = v8;
                          if ( v12 <= 0 )
                            v13 = v9;
                            j_j_j_j__ZdlPv_9(v15);
                            v9 = v13;
                        }
                        v10 += 16;
                      }
                      while ( v10 != HIDWORD(v23) );
                    }
                    *((_DWORD *)v1 + 10) = v9;
                }
                else
                  std::vector<mce::ShaderResourceOGL,std::allocator<mce::ShaderResourceOGL>>::_M_default_append(
                    (int)v32,
                    v7 - v6);
                  v9 = *((_DWORD *)v1 + 10);
              }
              else
                v9 = HIDWORD(v23);
              v2 = &v37;
              v16 = *(_DWORD *)v32;
              v17 = (v9 - *(_DWORD *)v32) >> 4;
              if ( v17 <= v22 )
                sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v22, v17, v8);
              v18 = v16 + 16 * v22;
              *(_DWORD *)(v18 + 4) = v37;
              *(_DWORD *)(v16 + 16 * v22) = v36;
              v19 = (_BYTE *)strlen(&v41);
              sub_21E8190((void **)(v18 + 12), &v41, v19);
              *(_BYTE *)(v18 + 8) = v35;
              *(_BYTE *)(v18 + 9) = 1;
            }
            break;
          default:
            if ( v38 == 5124 )
              v21 = 5;
            else if ( v38 == 5126 )
              v21 = 1;
            else
LABEL_37:
              v21 = 0;
LABEL_51:
            v35 = v21;
            v24 = v2;
            std::vector<mce::ShaderUniformOGL,std::allocator<mce::ShaderUniformOGL>>::emplace_back<char (&)[1024],int const&,int &,mce::ShaderPrimitiveTypes const&>(
              (int)v1 + 24,
              &v41,
              &v36,
              v2,
              &v35);
            v25 = *((_DWORD *)v1 + 7);
            v26 = (_QWORD *)mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance;
            sub_21E94B4((void **)&v34, &v41);
            v27 = mce::ConstantBufferMetaDataManager::findUniformMetaData(v26, (const void **)&v34);
            v28 = (void *)(v34 - 12);
            if ( (int *)(v34 - 12) != &dword_28898C0 )
              v4 = (unsigned int *)(v34 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v5 = __ldrex(v4);
                while ( __strex(v5 - 1, v4) );
                v5 = (*v4)--;
              if ( v5 <= 0 )
                j_j_j_j__ZdlPv_9(v28);
            v29 = (const void **)mce::ConstantBufferMetaData::getConstantBufferName(*(mce::ConstantBufferMetaData **)(v27 + 12));
            v30 = mce::GlobalConstantBufferManager::findConstantBufferContainer(v33, v29);
            mce::ConstantBufferContainer::registerReflectedShaderParameter(v30, (const mce::UniformMetaData *)v27);
            *(_DWORD *)(v25 - 4) = v30;
            v2 = v24;
        }
      }
      ++v3;
    }
    while ( v3 != v40 );
  }
  result = (char *)(_stack_chk_guard - v43);
  if ( _stack_chk_guard != v43 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall mce::Math::signum(mce::Math *this, float a2)
{
  int result; // r0@5

  __asm
  {
    VMOV            S2, R0
    VMOV.F32        S4, #-1.0
    VCMPE.F32       S2, #0.0
    VLDR            S2, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S0, #1.0
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S4 }
  if ( _ZF )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


mce::FrameBufferObjectBase *__fastcall mce::FrameBufferObjectOGL::FrameBufferObjectOGL(mce::FrameBufferObjectBase *a1, int a2)
{
  int v2; // r5@1
  mce::FrameBufferObjectBase *v3; // r4@1
  void *v4; // r0@3
  int v5; // r1@5
  int v6; // r1@5
  void *v7; // r0@7
  int v8; // r1@7
  int v9; // r1@7

  v2 = a2;
  v3 = a1;
  mce::FrameBufferObjectBase::FrameBufferObjectBase(a1);
  *((_DWORD *)v3 + 13) = 0;
  *((_DWORD *)v3 + 14) = 0;
  *((_DWORD *)v3 + 15) = 0;
  *((_DWORD *)v3 + 16) = 0;
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 18) = 0;
  if ( v3 != (mce::FrameBufferObjectBase *)v2 )
  {
    if ( *((_DWORD *)v3 + 11) )
    {
      glad_glDeleteFramebuffers(1, (char *)v3 + 44);
      *((_DWORD *)v3 + 11) = 0;
      *((_DWORD *)v3 + 12) = 0;
      *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 13);
      *((_DWORD *)v3 + 17) = *((_DWORD *)v3 + 16);
      mce::FrameBufferObjectBase::destroyFrameBuffer(v3);
      v4 = (void *)*((_DWORD *)v3 + 13);
    }
    else
      v4 = 0;
    *((_DWORD *)v3 + 11) = *(_DWORD *)(v2 + 44);
    *((_DWORD *)v3 + 12) = *(_DWORD *)(v2 + 48);
    *((_DWORD *)v3 + 13) = 0;
    *((_DWORD *)v3 + 14) = 0;
    *((_DWORD *)v3 + 15) = 0;
    *((_DWORD *)v3 + 13) = *(_DWORD *)(v2 + 52);
    *(_DWORD *)(v2 + 52) = 0;
    v5 = *((_DWORD *)v3 + 14);
    *((_DWORD *)v3 + 14) = *(_DWORD *)(v2 + 56);
    *(_DWORD *)(v2 + 56) = v5;
    v6 = *((_DWORD *)v3 + 15);
    *((_DWORD *)v3 + 15) = *(_DWORD *)(v2 + 60);
    *(_DWORD *)(v2 + 60) = v6;
    if ( v4 )
      operator delete(v4);
    v7 = (void *)*((_DWORD *)v3 + 16);
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 0;
    *((_DWORD *)v3 + 18) = 0;
    *((_DWORD *)v3 + 16) = *(_DWORD *)(v2 + 64);
    *(_DWORD *)(v2 + 64) = 0;
    v8 = *((_DWORD *)v3 + 17);
    *((_DWORD *)v3 + 17) = *(_DWORD *)(v2 + 68);
    *(_DWORD *)(v2 + 68) = v8;
    v9 = *((_DWORD *)v3 + 18);
    *((_DWORD *)v3 + 18) = *(_DWORD *)(v2 + 72);
    *(_DWORD *)(v2 + 72) = v9;
    if ( v7 )
      operator delete(v7);
  }
  return v3;
}


int __fastcall mce::Clock::pause(int result)
{
  *(_BYTE *)(result + 20) = 1;
  return result;
}


_DWORD *__fastcall mce::splitString(int a1, unsigned int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int *v5; // r4@1
  char *v6; // r0@1
  int v7; // r0@1
  int *i; // r0@3
  char *v9; // r0@8
  int v10; // r0@8
  char *v11; // r0@10
  void **v12; // r0@11
  void *v13; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  char *v19; // [sp+0h] [bp-E0h]@1
  void **v20; // [sp+4h] [bp-DCh]@1
  int v21; // [sp+8h] [bp-D8h]@12
  void **v22; // [sp+Ch] [bp-D4h]@11
  void **v23; // [sp+10h] [bp-D0h]@11
  int v24; // [sp+2Ch] [bp-B4h]@12
  int v25; // [sp+34h] [bp-ACh]@11
  int v26; // [sp+38h] [bp-A8h]@12

  v3 = a3;
  v4 = a1;
  v5 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_21D12A4((int)&v20, a2, 24);
  v19 = (char *)&unk_28898CC;
  v6 = sub_21BBAF0((char *)&v20, (const void **)&v19, v3);
  v7 = (int)&v6[*(_DWORD *)(*(_DWORD *)v6 - 12)];
  if ( v7 && !(*(_DWORD *)(v7 + 20) & 5) )
  {
    for ( i = 0; ; i = (int *)*(_QWORD *)(v4 + 4) )
    {
      if ( i == v5 )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v4,
          (int *)&v19);
      else
        *(_DWORD *)(v4 + 4) = sub_21E8AF4(i, (int *)&v19) + 1;
      v9 = sub_21BBAF0((char *)&v20, (const void **)&v19, v3);
      v10 = (int)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12)];
      if ( !v10 || *(_DWORD *)(v10 + 20) & 5 )
        break;
      v5 = (int *)(*(_QWORD *)(v4 + 4) >> 32);
    }
  }
  v11 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = off_26D3F84;
  v20 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v20) = off_26D3F80[0];
  v22 = v12;
  v23 = &off_27734E8;
  v13 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v23 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v24);
  v20 = (void **)off_26D3F68;
  *(void ***)((char *)&v20 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v21 = 0;
  return sub_21B6560(&v26);
}


int __fastcall mce::RenderMaterialGroup::_getMaterialPtr(int a1, int **a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::RenderMaterial,std::default_delete<mce::RenderMaterial>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 8),
         a2);
  if ( v2 )
    result = *(_DWORD *)(v2 + 8);
  else
    result = 0;
  return result;
}


void __fastcall mce::RenderMaterial::createPSOs(mce::RenderMaterial *this)
{
  mce::RenderMaterial::createPSOs(this);
}


int __fastcall mce::ShaderOGL::getSupportedShaderBinaryFormats(mce::ShaderOGL *this)
{
  mce::ShaderOGL *v1; // r4@1
  int v2; // r1@2
  unsigned int v3; // r2@2
  int result; // r0@4
  unsigned int v5; // [sp+4h] [bp-Ch]@2

  v1 = this;
  if ( mce::RenderDevice::checkFeatureSupport() == 1 )
  {
    glad_glGetIntegerv(34814, &v5);
    v2 = 0;
    *(_DWORD *)v1 = 0;
    *((_DWORD *)v1 + 1) = 0;
    v3 = v5;
    *((_DWORD *)v1 + 2) = 0;
    if ( v3 )
    {
      std::vector<int,std::allocator<int>>::_M_default_append((int)v1, v3);
      v2 = *(_DWORD *)v1;
    }
    result = glad_glGetIntegerv(34815, v2);
  }
  else
    result = 0;
  return result;
}


int __fastcall mce::BufferBase::~BufferBase(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)result = 3;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall mce::BlendStateOGL::bindBlendState(mce::BlendStateOGL *this, mce::RenderContext *a2, int a3)
{
  mce::RenderContext *v3; // r4@1
  mce::BlendStateOGL *v4; // r5@1
  int v5; // r8@1
  void **v6; // r0@4
  unsigned int v7; // r0@7
  unsigned int v8; // r6@10
  int v9; // lr@10
  int v10; // r3@10
  int v11; // r7@10
  int v12; // r2@11
  bool v13; // zf@11
  bool v14; // zf@15
  unsigned int v15; // r0@19
  _BYTE *v16; // r7@19
  bool v17; // zf@20
  void **v18; // r0@29

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( *((_BYTE *)a2 + 5) != *((_BYTE *)this + 5) || a3 == 1 )
  {
    if ( *((_BYTE *)this + 7) )
      v6 = &glad_glEnable_ptr;
    else
      v6 = &glad_glDisable_ptr;
    (*(void (__fastcall **)(signed int))*v6)(3042);
    *((_BYTE *)v3 + 5) = *((_BYTE *)v4 + 5);
  }
  v7 = *((_DWORD *)v4 + 1);
  if ( *((_BYTE *)v3 + 4) != (unsigned __int8)v7 || v5 == 1 )
    glad_glColorMask(
      (unsigned __int8)*((_DWORD *)v4 + 2),
      (*((_DWORD *)v4 + 2) & 0xFF00u) >> 8,
      (*((_DWORD *)v4 + 2) >> 16) & 0xFF,
      *((_DWORD *)v4 + 2) >> 24);
    v7 = *((_DWORD *)v4 + 1);
    *((_BYTE *)v3 + 4) = v7;
  v8 = *(_DWORD *)v3;
  v9 = *(_DWORD *)v4 >> 24;
  v10 = *(_DWORD *)v4 >> 16;
  v11 = (unsigned __int8)*(_DWORD *)v4;
  if ( (unsigned __int8)*(_DWORD *)v3 != v11 )
    goto LABEL_35;
  v12 = (v8 >> 16) & 0xFF;
  v13 = v12 == v10;
  if ( v12 == v10 )
    v13 = (*(_DWORD *)v3 & 0xFF00u) >> 8 == (*(_DWORD *)v4 & 0xFF00u) >> 8;
  if ( !v13 )
  v14 = v8 >> 24 == v9;
  if ( v8 >> 24 == v9 )
    v14 = v5 == 0;
  if ( v14 )
    v15 = v7 >> 16;
    v16 = (char *)v4 + 6;
  else
LABEL_35:
    v17 = v11 == (unsigned __int8)v10;
    if ( v11 == (unsigned __int8)v10 )
      v17 = *((_BYTE *)v4 + 1) == v9;
    if ( v17 )
      glad_glBlendFunc(*(_QWORD *)((char *)v4 + 12), *(_QWORD *)((char *)v4 + 12) >> 32);
      glad_glBlendFuncSeparate(*((_DWORD *)v4 + 3), *((_DWORD *)v4 + 4), *((_DWORD *)v4 + 5), *((_DWORD *)v4 + 6));
    v15 = *(_DWORD *)v4;
    *(_BYTE *)v3 = *(_DWORD *)v4;
    *((_BYTE *)v3 + 1) = BYTE1(v15);
    *((_BYTE *)v3 + 2) = v15 >> 16;
    *((_BYTE *)v3 + 3) = BYTE3(v15);
    LOBYTE(v15) = *((_BYTE *)v4 + 6);
  if ( *((_BYTE *)v3 + 6) != (unsigned __int8)v15 || v5 == 1 )
    if ( (_BYTE)v15 )
      v18 = &glad_glEnable_ptr;
      v18 = &glad_glDisable_ptr;
    (*(void (__fastcall **)(signed int))*v18)(32926);
    *((_BYTE *)v3 + 6) = *v16;
  return j_j_j__ZNK3mce14BlendStateBase14bindBlendStateERNS_13RenderContextE(v4, v3);
}


signed int __fastcall mce::TextureOGL::createMipStorage(mce::TextureOGL *this, mce::RenderContext *a2, const void *a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  mce::TextureOGL *v6; // r8@1
  int v7; // r0@1
  unsigned int v8; // r11@1
  mce::RenderContext *v9; // r7@1
  unsigned int v10; // r3@3
  int v11; // r0@5
  void (__fastcall *v12)(signed int, unsigned int, int, unsigned int); // r7@7
  __int64 v13; // ST10_8@7
  signed int v14; // r0@7
  unsigned int v15; // r1@8
  int v16; // r2@8
  unsigned int v17; // r3@9
  signed int result; // r0@11
  int v19; // r7@14
  __int64 v20; // kr00_8@15
  __int64 v21; // ST08_8@19

  v6 = this;
  v7 = *((_DWORD *)this + 12);
  v8 = a4;
  v9 = a2;
  if ( v7 == 37120 )
  {
    v15 = *((_DWORD *)v6 + 6);
    v16 = *((_DWORD *)v6 + 13);
    v12 = (void (__fastcall *)(signed int, unsigned int, int, unsigned int))glad_glTexStorage2DMultisample;
    v14 = 37120;
LABEL_9:
    v17 = v8;
LABEL_10:
    v12(v14, v15, v16, v17);
    goto LABEL_11;
  }
  if ( v7 != 3553 )
  mce::RenderContext::getDevice(a2);
  if ( mce::RenderDevice::checkFeatureSupport() != 1 )
    mce::RenderContext::getDevice(v9);
    if ( mce::RenderDevice::checkFeatureSupport() == 1 )
    {
      glad_glTexParameteri(*((_DWORD *)v6 + 12), 33085, *((_DWORD *)v6 + 5) - 1);
      if ( *((_DWORD *)v6 + 5) )
      {
        v19 = 0;
        do
        {
          v20 = *((_QWORD *)v6 + 7);
          glad_glTexImage2D(*((_QWORD *)v6 + 6), v19, *((_QWORD *)v6 + 6) >> 32, v8 >> v19);
          ++v19;
        }
        while ( v19 != *((_DWORD *)v6 + 5) );
      }
    }
    else
      glad_glTexImage2D(*((_DWORD *)v6 + 12), 0, *((_DWORD *)v6 + 13), v8);
  if ( !*((_BYTE *)v6 + 40) )
    v15 = *((_DWORD *)v6 + 5);
    v16 = *((_QWORD *)v6 + 6) >> 32;
    v14 = *((_QWORD *)v6 + 6);
    v12 = (void (__fastcall *)(signed int, unsigned int, int, unsigned int))glad_glTexStorage2D;
    goto LABEL_9;
  mce::TextureOGL::bindTexture(v6, v9, 0, v10);
  v11 = *((_DWORD *)v6 + 12);
  if ( v11 == 3553 )
    v12 = (void (__fastcall *)(signed int, unsigned int, int, unsigned int))glad_glTexSubImage2D;
    v21 = *((_QWORD *)v6 + 7);
    v14 = 3553;
    goto LABEL_20;
  if ( v11 == 35866 )
    v12 = (void (__fastcall *)(signed int, unsigned int, int, unsigned int))glad_glTexSubImage3D;
    v13 = *((_QWORD *)v6 + 7);
    v14 = 35866;
LABEL_20:
    v15 = a6;
    v16 = 0;
    v17 = 0;
    goto LABEL_10;
LABEL_11:
  result = 1;
  *((_BYTE *)v6 + 40) = 1;
  return result;
}


void __fastcall mce::_getParent(int a1, int *a2, const void **a3)
{
  mce::_getParent(a1, a2, a3);
}


void __fastcall mce::TexturePtr::~TexturePtr(mce::TexturePtr *this)
{
  mce::TexturePtr::~TexturePtr(this);
}


signed int __fastcall mce::ShaderConstants::setShaderColors(mce::ShaderConstants *this, mce::RenderContext *a2, ShaderColor *a3, ShaderColor *a4)
{
  ShaderColor *v4; // r7@1
  mce::ShaderConstants *v5; // r5@1
  ShaderColor *v6; // r6@1
  mce::RenderContext *v7; // r8@1
  int v8; // r4@2
  int v9; // r0@2
  int v10; // r1@2
  int v11; // r4@4
  int v12; // r0@4
  int v13; // r1@4

  v4 = a3;
  v5 = this;
  v6 = a4;
  v7 = a2;
  if ( ShaderColor::isDirty(a3) == 1 )
  {
    v8 = *((_DWORD *)v5 + 2);
    v9 = ShaderColor::getColor(v4);
    v10 = *(_DWORD *)(v8 + 20);
    *(_DWORD *)v10 = *(_DWORD *)v9;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(v9 + 8);
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(v9 + 12);
    *(_BYTE *)(v8 + 17) = 1;
    ShaderColor::makeClean(v4);
  }
  if ( ShaderColor::isDirty(v6) == 1 )
    v11 = *((_DWORD *)v5 + 3);
    v12 = ShaderColor::getColor(v6);
    v13 = *(_DWORD *)(v11 + 20);
    *(_DWORD *)v13 = *(_DWORD *)v12;
    *(_DWORD *)(v13 + 4) = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v13 + 8) = *(_DWORD *)(v12 + 8);
    *(_DWORD *)(v13 + 12) = *(_DWORD *)(v12 + 12);
    *(_BYTE *)(v11 + 17) = 1;
    ShaderColor::makeClean(v6);
  return j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(
           *((mce::ConstantBufferContainer **)v5 + 1),
           v7);
}


mce::DepthStencilStateDescription *__fastcall mce::DepthStencilStateDescription::DepthStencilStateDescription(mce::DepthStencilStateDescription *this)
{
  mce::DepthStencilStateDescription *v1; // r4@1

  v1 = this;
  *(_WORD *)this = 1;
  *((_BYTE *)this + 2) = 3;
  mce::StencilFaceDescription::StencilFaceDescription((mce::DepthStencilStateDescription *)((char *)this + 3));
  mce::StencilFaceDescription::StencilFaceDescription((mce::DepthStencilStateDescription *)((char *)v1 + 7));
  *((_BYTE *)v1 + 11) = 1;
  *((_DWORD *)v1 + 3) = -1;
  *((_DWORD *)v1 + 4) = -1;
  *((_WORD *)v1 + 10) = 0;
  *((_BYTE *)v1 + 22) = 0;
  return v1;
}


int __fastcall mce::BufferOGL::BufferOGL(mce::BufferBase *a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a2;
  v3 = (int)a1;
  mce::BufferBase::BufferBase(a1);
  if ( v3 != v2 )
  {
    if ( *(_DWORD *)(v3 + 20) )
    {
      glad_glDeleteBuffers(1, v3 + 20);
      *(_DWORD *)(v3 + 20) = 0;
      *(_DWORD *)(v3 + 24) = 0;
      mce::BufferBase::releaseBuffer((mce::BufferBase *)v3);
    }
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 20) = 0;
    *(_DWORD *)(v2 + 24) = 0;
    *(_DWORD *)(v2 + 28) = 0;
  }
  mce::BufferBase::operator=(v3, v2);
  return v3;
}


int __fastcall mce::DepthStencilStateBase::setStencilRef(mce::DepthStencilStateBase *this, mce::RenderContext *a2)
{
  mce::DepthStencilStateBase *v2; // r4@1
  int result; // r0@2

  v2 = this;
  if ( *((_BYTE *)this + 22) )
  {
    result = mce::RenderContextBase::getStencilReferenceFromParameter(a2, *((_BYTE *)this + 21));
    *((_BYTE *)v2 + 20) = result;
  }
  else
    result = mce::RenderContextBase::getStencilReferenceFromRenderContext(a2);
  return result;
}


int __fastcall mce::SamplerStateDescription::SamplerStateDescription(int result)
{
  *(_BYTE *)result = 0;
  *(_BYTE *)(result + 1) = 0;
  *(_DWORD *)(result + 4) = 2;
  return result;
}


char *__fastcall mce::Camera::getRightVector(mce::Camera *this)
{
  return (char *)this + 112;
}


void __fastcall mce::MultisampledRenderStageWithFrameBufferObject::~MultisampledRenderStageWithFrameBufferObject(mce::MultisampledRenderStageWithFrameBufferObject *this)
{
  mce::MultisampledRenderStageWithFrameBufferObject *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCD00;
  mce::Texture::~Texture((mce::MultisampledRenderStageWithFrameBufferObject *)((char *)this + 172));
  mce::Texture::~Texture((mce::MultisampledRenderStageWithFrameBufferObject *)((char *)v1 + 108));
  mce::FrameBufferObject::~FrameBufferObject((mce::MultisampledRenderStageWithFrameBufferObject *)((char *)v1 + 28));
  *(_DWORD *)v1 = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall mce::ShaderGroup::~ShaderGroup(mce::ShaderGroup *this)
{
  mce::ShaderGroup *v1; // r0@1

  v1 = mce::ShaderGroup::~ShaderGroup(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall mce::RenderMaterialGroup::_loadMaterialSet(double a1, int a2, int a3, int a4, int a5)
{
  mce::RenderMaterialGroup::_loadMaterialSet(a1, a2, a3, a4, a5);
}


int __fastcall mce::RenderDeviceBase::getMaxVertexCount(mce::RenderDeviceBase *this)
{
  return 0;
}


mce::RenderDeviceBase *__fastcall mce::TextureOGL::deleteTexture(mce::TextureOGL *this)
{
  mce::TextureOGL *v1; // r4@1
  mce::RenderDeviceBase *result; // r0@1
  mce::RenderContextStateBase *v3; // r0@2

  v1 = this;
  glad_glDeleteTextures(1, (char *)this + 44);
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 0;
  result = mce::RenderContextImmediate::exists(0);
  if ( result == (mce::RenderDeviceBase *)1 )
  {
    v3 = (mce::RenderContextStateBase *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)1);
    mce::RenderContextStateBase::removeIfBound(v3, v1);
    result = (mce::RenderDeviceBase *)j_j_j__ZN3mce11TextureBase13deleteTextureEv(v1);
  }
  return result;
}


int __fastcall mce::Camera::getModelViewMatrix(mce::Camera *this, MatrixStack *a2)
{
  MatrixStack *v2; // r4@1
  mce::Camera *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1

  v2 = a2;
  v3 = this;
  v4 = MatrixStack::top(a2);
  v5 = MatrixStack::top((MatrixStack *)((char *)v2 + 16));
  return glm::detail::operator*<float>((int)v3, v4, v5);
}


int __fastcall mce::FrameBufferAttachmentOGL::destroyFrameBufferAttachment(mce::FrameBufferAttachmentOGL *this)
{
  mce::FrameBufferAttachmentOGL *v1; // r4@1
  char *v2; // r5@1
  int result; // r0@3

  v1 = this;
  v2 = (char *)this + 80;
  if ( *((_DWORD *)this + 20) )
  {
    glad_glDeleteRenderbuffers(1, v2);
    *(_DWORD *)v2 = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  return result;
}


signed int __fastcall mce::WorldConstants::refreshWorldConstants(mce::WorldConstants *this, mce::RenderContext *a2, mce::Camera *a3)
{
  mce::Camera *v3; // r8@1
  MatrixStack *v4; // r7@1
  mce::WorldConstants *v5; // r6@1
  mce::RenderContext *v6; // r4@1
  MatrixStack *v7; // r9@1
  signed int result; // r0@3
  int v9; // r5@4
  int v10; // r0@4
  int v11; // r0@4
  mce::Camera *v12; // r12@4
  __int64 v13; // r4@4
  int v14; // ST18_4@4
  int v15; // ST14_4@4
  int v16; // ST10_4@4
  int v17; // ST0C_4@4
  int v18; // ST08_4@4
  int v19; // ST04_4@4
  int v20; // r9@4
  __int64 v21; // kr00_8@4
  int v22; // r2@4
  int v23; // r3@4
  int v24; // r8@4
  int v25; // r1@4
  int v26; // r0@4
  int v27; // lr@4
  MatrixStack *v28; // r8@4
  int v29; // r0@6
  int v30; // r1@6
  int v31; // r5@8
  int v32; // r0@8
  int v33; // r1@8
  int v34; // r5@10
  int v35; // r0@10
  int v36; // r1@10
  MatrixStack *v37; // [sp+20h] [bp-B0h]@4
  mce::RenderContext *v38; // [sp+24h] [bp-ACh]@4
  __int64 v39; // [sp+28h] [bp-A8h]@4
  int v40; // [sp+30h] [bp-A0h]@4
  int v41; // [sp+34h] [bp-9Ch]@4
  int v42; // [sp+38h] [bp-98h]@4
  int v43; // [sp+3Ch] [bp-94h]@4
  int v44; // [sp+40h] [bp-90h]@4
  int v45; // [sp+44h] [bp-8Ch]@4
  int v46; // [sp+48h] [bp-88h]@4
  int v47; // [sp+4Ch] [bp-84h]@4
  int v48; // [sp+50h] [bp-80h]@4
  int v49; // [sp+54h] [bp-7Ch]@4
  int v50; // [sp+58h] [bp-78h]@4
  int v51; // [sp+5Ch] [bp-74h]@4
  int v52; // [sp+60h] [bp-70h]@4
  int v53; // [sp+64h] [bp-6Ch]@4
  __int64 v54; // [sp+6Ch] [bp-64h]@4
  int v55; // [sp+74h] [bp-5Ch]@4
  int v56; // [sp+78h] [bp-58h]@4
  int v57; // [sp+7Ch] [bp-54h]@4
  int v58; // [sp+80h] [bp-50h]@4
  int v59; // [sp+84h] [bp-4Ch]@4
  int v60; // [sp+88h] [bp-48h]@4
  int v61; // [sp+8Ch] [bp-44h]@4
  int v62; // [sp+90h] [bp-40h]@4
  int v63; // [sp+94h] [bp-3Ch]@4
  int v64; // [sp+98h] [bp-38h]@4
  int v65; // [sp+9Ch] [bp-34h]@4
  int v66; // [sp+A0h] [bp-30h]@4
  int v67; // [sp+A4h] [bp-2Ch]@4
  int v68; // [sp+A8h] [bp-28h]@4

  v3 = a3;
  v4 = (mce::Camera *)((char *)a3 + 32);
  v5 = this;
  v6 = a2;
  v7 = (mce::Camera *)((char *)a3 + 16);
  if ( MatrixStack::isDirty((mce::Camera *)((char *)a3 + 32))
    || MatrixStack::isDirty(v3)
    || (result = MatrixStack::isDirty(v7), result == 1) )
  {
    v38 = v6;
    v9 = MatrixStack::top(v7);
    v10 = MatrixStack::top(v3);
    glm::detail::operator*<float>((int)&v54, v10, v9);
    _aeabi_memclr8(&v39, 56);
    v39 = v54;
    v40 = v55;
    v41 = v56;
    v42 = v57;
    v43 = v58;
    v44 = v59;
    v45 = v60;
    v46 = v61;
    v47 = v62;
    v48 = v63;
    v49 = v64;
    v50 = v65;
    v51 = v66;
    v52 = v67;
    v53 = v68;
    v11 = MatrixStack::top(v4);
    glm::detail::operator*<float>((int)&v54, v11, (int)&v39);
    v12 = v3;
    v13 = *(_QWORD *)&v55;
    v14 = v68;
    v15 = v67;
    v16 = v66;
    v17 = v65;
    v18 = v64;
    v37 = v7;
    v19 = v63;
    v20 = v62;
    v21 = *(_QWORD *)&v60;
    v22 = v57;
    v23 = v58;
    v24 = v59;
    v25 = *((_DWORD *)v5 + 2);
    v26 = *(_DWORD *)(v25 + 20);
    *(_QWORD *)v26 = v54;
    v27 = v26 + 16;
    *(_QWORD *)(v26 + 8) = v13;
    *(_DWORD *)v27 = v22;
    *(_DWORD *)(v27 + 4) = v23;
    *(_DWORD *)(v27 + 8) = v24;
    v28 = v12;
    *(_QWORD *)(v26 + 28) = v21;
    *(_DWORD *)(v26 + 36) = v20;
    *(_DWORD *)(v26 + 40) = v19;
    *(_DWORD *)(v26 + 44) = v18;
    *(_DWORD *)(v26 + 48) = v17;
    *(_DWORD *)(v26 + 52) = v16;
    *(_DWORD *)(v26 + 56) = v15;
    *(_DWORD *)(v26 + 60) = v14;
    *(_BYTE *)(v25 + 17) = 1;
    if ( MatrixStack::isDirty(v37) || MatrixStack::isDirty(v28) == 1 )
    {
      v29 = *((_DWORD *)v5 + 4);
      v30 = *(_DWORD *)(v29 + 20);
      *(_QWORD *)v30 = v39;
      *(_DWORD *)(v30 + 8) = v40;
      *(_DWORD *)(v30 + 12) = v41;
      *(_DWORD *)(v30 + 16) = v42;
      *(_DWORD *)(v30 + 20) = v43;
      *(_DWORD *)(v30 + 24) = v44;
      *(_DWORD *)(v30 + 28) = v45;
      *(_DWORD *)(v30 + 32) = v46;
      *(_DWORD *)(v30 + 36) = v47;
      *(_DWORD *)(v30 + 40) = v48;
      *(_DWORD *)(v30 + 44) = v49;
      *(_DWORD *)(v30 + 48) = v50;
      *(_DWORD *)(v30 + 52) = v51;
      *(_DWORD *)(v30 + 56) = v52;
      *(_DWORD *)(v30 + 60) = v53;
      *(_BYTE *)(v29 + 17) = 1;
    }
    if ( MatrixStack::isDirty(v37) == 1 )
      v31 = *((_DWORD *)v5 + 3);
      v32 = MatrixStack::top(v37);
      v33 = *(_DWORD *)(v31 + 20);
      *(_DWORD *)v33 = *(_DWORD *)v32;
      *(_DWORD *)(v33 + 4) = *(_DWORD *)(v32 + 4);
      *(_DWORD *)(v33 + 8) = *(_DWORD *)(v32 + 8);
      *(_DWORD *)(v33 + 12) = *(_DWORD *)(v32 + 12);
      *(_DWORD *)(v33 + 16) = *(_DWORD *)(v32 + 16);
      *(_DWORD *)(v33 + 20) = *(_DWORD *)(v32 + 20);
      *(_DWORD *)(v33 + 24) = *(_DWORD *)(v32 + 24);
      *(_DWORD *)(v33 + 28) = *(_DWORD *)(v32 + 28);
      *(_DWORD *)(v33 + 32) = *(_DWORD *)(v32 + 32);
      *(_DWORD *)(v33 + 36) = *(_DWORD *)(v32 + 36);
      *(_DWORD *)(v33 + 40) = *(_DWORD *)(v32 + 40);
      *(_DWORD *)(v33 + 44) = *(_DWORD *)(v32 + 44);
      *(_DWORD *)(v33 + 48) = *(_DWORD *)(v32 + 48);
      *(_DWORD *)(v33 + 52) = *(_DWORD *)(v32 + 52);
      *(_DWORD *)(v33 + 56) = *(_DWORD *)(v32 + 56);
      *(_DWORD *)(v33 + 60) = *(_DWORD *)(v32 + 60);
      *(_BYTE *)(v31 + 17) = 1;
    if ( MatrixStack::isDirty(v4) == 1 )
      v34 = *((_DWORD *)v5 + 5);
      v35 = MatrixStack::top(v4);
      v36 = *(_DWORD *)(v34 + 20);
      *(_DWORD *)v36 = *(_DWORD *)v35;
      *(_DWORD *)(v36 + 4) = *(_DWORD *)(v35 + 4);
      *(_DWORD *)(v36 + 8) = *(_DWORD *)(v35 + 8);
      *(_DWORD *)(v36 + 12) = *(_DWORD *)(v35 + 12);
      *(_DWORD *)(v36 + 16) = *(_DWORD *)(v35 + 16);
      *(_DWORD *)(v36 + 20) = *(_DWORD *)(v35 + 20);
      *(_DWORD *)(v36 + 24) = *(_DWORD *)(v35 + 24);
      *(_DWORD *)(v36 + 28) = *(_DWORD *)(v35 + 28);
      *(_DWORD *)(v36 + 32) = *(_DWORD *)(v35 + 32);
      *(_DWORD *)(v36 + 36) = *(_DWORD *)(v35 + 36);
      *(_DWORD *)(v36 + 40) = *(_DWORD *)(v35 + 40);
      *(_DWORD *)(v36 + 44) = *(_DWORD *)(v35 + 44);
      *(_DWORD *)(v36 + 48) = *(_DWORD *)(v35 + 48);
      *(_DWORD *)(v36 + 52) = *(_DWORD *)(v35 + 52);
      *(_DWORD *)(v36 + 56) = *(_DWORD *)(v35 + 56);
      *(_DWORD *)(v36 + 60) = *(_DWORD *)(v35 + 60);
      *(_BYTE *)(v34 + 17) = 1;
    MatrixStack::makeClean(v4);
    MatrixStack::makeClean(v28);
    MatrixStack::makeClean(v37);
    result = mce::ConstantBufferConstantsBase::sync(v5, v38);
  }
  return result;
}


int __fastcall mce::EffectConstants::setUVOffset(int result, mce::RenderContext *a2, float _R2, float _R3)
{
  int v4; // r12@1

  v4 = *(_DWORD *)(result + 8);
  __asm
  {
    VMOV            S2, R2
    VMOV            S0, R3
  }
  _LR = *(_DWORD *)(v4 + 20);
    VLDR            S4, [LR]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_7;
    VLDR            S4, [LR,#4]
    VCMPE.F32       S4, S0
LABEL_7:
    __asm
    {
      VSTR            S2, [LR]
      VSTR            S0, [LR,#4]
    }
    *(_BYTE *)(v4 + 17) = 1;
    result = j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(
               *(mce::ConstantBufferContainer **)(result + 4),
               a2);
  return result;
}


void __fastcall mce::FlipbookTextureConstants::init(mce::FlipbookTextureConstants *this)
{
  mce::FlipbookTextureConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  int v8; // r5@7
  mce::ShaderConstantBase *v9; // r0@7
  mce::ShaderConstantBase *v10; // r5@7
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+8h] [bp-28h]@7
  int v19; // [sp+10h] [bp-20h]@2
  int v20; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v20, "FlipbookTextureConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v20);
  v3 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v19, "V_OFFSET");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v19);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 1 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v18, "V_BLEND_OFFSET");
  v9 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v8, (const void **)&v18);
  v10 = v9;
  if ( v9 )
    if ( mce::ShaderConstantBase::getType(v9) != 1 )
      v10 = 0;
    *((_DWORD *)v1 + 3) = v10;
  v11 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall mce::MathUtility::getRotationFromNegZToVector(int a1, int _R1)
{
  mce::MathUtility::getRotationFromNegZToVector(a1, _R1);
}


int __fastcall mce::ShaderOGL::freeCompilerResources(mce::ShaderOGL *this)
{
  glad_glReleaseShaderCompiler();
  return glad_glGetError();
}


void __fastcall mce::WeatherConstants::init(mce::WeatherConstants *this)
{
  mce::WeatherConstants::init(this);
}


int __fastcall mce::glRenderbufferStorageMultisampleMCE(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6)
{
  int (__fastcall *v6)(int, unsigned int, int, unsigned int); // r12@2

  if ( GLAD_GL_EXT_multisampled_render_to_texture
    && (v6 = (int (__fastcall *)(int, unsigned int, int, unsigned int))glad_glRenderbufferStorageMultisampleEXT) != 0
    || GLAD_GL_IMG_multisampled_render_to_texture
    && (v6 = (int (__fastcall *)(int, unsigned int, int, unsigned int))glad_glRenderbufferStorageMultisampleIMG) != 0 )
  {
    result = v6(result, a2, a3, a4);
  }
  return result;
}


int __fastcall mce::EnableScissorTest::EnableScissorTest(int result, bool a2, bool a3)
{
  *(_BYTE *)result = a2;
  *(_BYTE *)(result + 1) = a3;
  LOBYTE(mce::EnableScissorTest::mScissorTestEnabled) = a2;
  return result;
}


void __fastcall mce::RenderStageWithFrameBufferObject::~RenderStageWithFrameBufferObject(mce::RenderStageWithFrameBufferObject *this)
{
  mce::RenderStageWithFrameBufferObject *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCD00;
  mce::Texture::~Texture((mce::RenderStageWithFrameBufferObject *)((char *)this + 172));
  mce::Texture::~Texture((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 108));
  mce::FrameBufferObject::~FrameBufferObject((mce::RenderStageWithFrameBufferObject *)((char *)v1 + 28));
  *(_DWORD *)v1 = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall mce::Math::invSqrt(mce::Math *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S4, R0
  }
  _R1 = 1597463007 - ((signed int)this >> 1);
    VMOV            S2, R1
    VMUL.F32        S6, S2, S2
    VMUL.F32        S0, S4, S0
    VMOV.F32        S4, #1.5
    VMUL.F32        S0, S6, S0
    VADD.F32        S0, S0, S4
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


mce::FrameBufferAttachmentBase *__fastcall mce::FrameBufferObject::clearColorAttachment(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  mce::FrameBufferAttachmentBase *result; // r0@1
  char *v5; // r1@2

  v2 = a1;
  v3 = a2;
  result = *(mce::FrameBufferAttachmentBase **)(a1 + 28);
  if ( result )
  {
    v5 = mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription(result) + 40;
    result = (mce::FrameBufferAttachmentBase *)j_j_j__ZNK3mce20FrameBufferObjectOGL20clearColorAttachmentERK5ColorPKNS_12ViewportInfoE(
                                                 v2,
                                                 v5,
                                                 v3);
  }
  return result;
}


int __fastcall mce::RenderMaterialGroup::_fireGroupReloaded(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 68); i; i = *(_DWORD *)i )
    result = mce::MaterialPtr::onGroupReloaded(*(mce::MaterialPtr **)(i + 4));
  return result;
}


int __fastcall mce::ShaderConstants::setHUDOpacity(int result, mce::RenderContext *a2, float _R2)
{
  int v3; // r12@1

  v3 = *(_DWORD *)(result + 20);
  __asm { VMOV            S0, R2 }
  _R3 = *(_DWORD *)(v3 + 20);
  __asm
  {
    VLDR            S2, [R3]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VSTR            S0, [R3] }
    *(_BYTE *)(v3 + 17) = 1;
    result = j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(
               *(mce::ConstantBufferContainer **)(result + 4),
               a2);
  return result;
}


int __fastcall mce::RenderMaterial::_initAndResolveTexture(mce::TextureGroup *a1, int a2, int a3, int *a4, mce::TextureGroup *a5)
{
  mce::TextureGroup *v5; // r5@1
  unsigned int v6; // r4@1
  int v7; // r6@1
  int v8; // r6@1
  void *v9; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+4h] [bp+0h]@1
  int v14; // [sp+8h] [bp+4h]@1

  v5 = a1;
  v6 = a2;
  v7 = *((_DWORD *)a1 + 17);
  mce::RenderMaterial::textureLocationToResourceLocation((int)&v13, a2, a3, a4);
  v8 = v7 + 36 * v6;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v8, &v13);
  *(_DWORD *)(v8 + 4) = v14;
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v12 = __ldrex(v11);
        __strex(v12 - 1, v11);
      }
      while ( &v13 );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  *(_BYTE *)(v8 + 32) = 0;
  return mce::RenderMaterial::_resolveTexture(v5, v6, a5);
}


void __fastcall mce::RenderMaterial::createPSOs(mce::RenderMaterial *this)
{
  mce::RenderMaterial *v1; // r5@1
  char *v2; // r6@1
  mce::RenderContextImmediate *v3; // r0@1
  int v4; // r8@2
  int v5; // r0@2
  int v6; // r1@2
  char *v7; // r7@2
  bool v8; // zf@2
  unsigned int v9; // r4@2
  int v10; // r1@2
  int v11; // r2@4
  int v12; // r4@4
  int v13; // ST18_4@6
  mce::RenderContextImmediate *v14; // r0@8
  int v15; // r10@9
  int v16; // r0@9
  int v17; // r1@9
  char *v18; // r7@9
  unsigned int v19; // r4@9
  int v20; // r1@9
  int v21; // r2@11
  int v22; // r4@11
  int v23; // ST18_4@13
  int v24; // [sp+28h] [bp-40h]@2
  int v25; // [sp+28h] [bp-40h]@9
  void *v26; // [sp+2Ch] [bp-3Ch]@9
  char *v27; // [sp+30h] [bp-38h]@9
  int v28; // [sp+34h] [bp-34h]@9
  void *ptr; // [sp+38h] [bp-30h]@2
  char *v30; // [sp+3Ch] [bp-2Ch]@2
  int v31; // [sp+40h] [bp-28h]@2

  v1 = this;
  v2 = (char *)this + 520;
  mce::PipelineStateObject::deletePipelineState((mce::RenderMaterial *)((char *)this + 520));
  mce::PipelineStateObject::deletePipelineState((mce::RenderMaterial *)((char *)v1 + 521));
  v3 = (mce::RenderContextImmediate *)*((_BYTE *)v1 + 516);
  if ( (unsigned __int8)v3 & 1 )
  {
    v24 = mce::RenderContextImmediate::get(v3);
    v4 = *((_DWORD *)v1 + 15);
    v5 = *(_QWORD *)((char *)v1 + 444) >> 32;
    v6 = *(_QWORD *)((char *)v1 + 444);
    v7 = 0;
    ptr = 0;
    v30 = 0;
    v9 = v5 - v6;
    v8 = v5 == v6;
    v10 = v5;
    v31 = 0;
    if ( !v8 )
    {
      v7 = (char *)operator new(v9);
      v5 = *(_QWORD *)((char *)v1 + 444) >> 32;
      v10 = *(_QWORD *)((char *)v1 + 444);
    }
    v11 = (int)&v7[v9];
    v12 = v5 - v10;
    ptr = v7;
    v30 = v7;
    v31 = v11;
    if ( v5 != v10 )
      _aeabi_memmove(v7, v10);
    v30 = &v7[v12];
    v13 = *((_BYTE *)v1 + 508);
    mce::PipelineStateObject::createPipelineState(
      (int)v2,
      v24,
      (int)v1 + 80,
      (int)v1 + 116,
      (int)v1 + 468,
      v4,
      (unsigned __int64 *)&ptr,
      (int)v1 + 456,
      *((_BYTE *)v1 + 509));
    if ( ptr )
      operator delete(ptr);
  }
  v14 = (mce::RenderContextImmediate *)*((_BYTE *)v1 + 516);
  if ( (unsigned __int8)v14 & 2 )
    v25 = mce::RenderContextImmediate::get(v14);
    v15 = *((_DWORD *)v1 + 15);
    v16 = *(_QWORD *)((char *)v1 + 444) >> 32;
    v17 = *(_QWORD *)((char *)v1 + 444);
    v18 = 0;
    v19 = v16 - v17;
    v8 = v16 == v17;
    v20 = *(_QWORD *)((char *)v1 + 444) >> 32;
    v26 = 0;
    v27 = 0;
    v28 = 0;
      v18 = (char *)operator new(v19);
      v16 = *(_QWORD *)((char *)v1 + 444) >> 32;
      v20 = *(_QWORD *)((char *)v1 + 444);
    v21 = (int)&v18[v19];
    v22 = v16 - v20;
    v26 = v18;
    v27 = v18;
    v28 = v21;
    if ( v16 != v20 )
      _aeabi_memmove(v18, v20);
    v27 = &v18[v22];
    v23 = *((_BYTE *)v1 + 508);
      (int)v1 + 521,
      v25,
      v15,
      (unsigned __int64 *)&v26,
    if ( v26 )
      operator delete(v26);
}


mce::ConstantBufferMetaDataManager *__fastcall mce::ConstantBufferMetaDataManager::~ConstantBufferMetaDataManager(mce::ConstantBufferMetaDataManager *this)
{
  mce::ConstantBufferMetaDataManager *v1; // r4@1
  mce::ConstantBufferMetaData *v2; // r0@1
  mce::ConstantBufferMetaData *v3; // r5@1

  v1 = this;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)this + 12,
    *((_DWORD *)this + 5));
  v3 = (mce::ConstantBufferMetaData *)(*(_QWORD *)v1 >> 32);
  v2 = (mce::ConstantBufferMetaData *)*(_QWORD *)v1;
  if ( v2 != v3 )
  {
    do
      v2 = (mce::ConstantBufferMetaData *)((char *)mce::ConstantBufferMetaData::~ConstantBufferMetaData(v2) + 16);
    while ( v3 != v2 );
    v2 = *(mce::ConstantBufferMetaData **)v1;
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


int __fastcall mce::BufferBase::updateBuffer(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a5;
  return result;
}


void __fastcall mce::WorldConstantsHolographic::~WorldConstantsHolographic(mce::WorldConstantsHolographic *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


void __fastcall mce::RenderChunkConstants::init(mce::RenderChunkConstants *this)
{
  mce::RenderChunkConstants *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v4; // r5@2
  mce::ShaderConstantBase *v5; // r0@2
  mce::ShaderConstantBase *v6; // r5@2
  void *v7; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (unsigned __int64 *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  sub_21E94B4((void **)&v13, "RenderChunkConstants");
  *((_DWORD *)v1 + 1) = mce::GlobalConstantBufferManager::findConstantBufferContainer(v2, (const void **)&v13);
  v3 = (void *)(v13 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v12, "CHUNK_ORIGIN_AND_SCALE");
  v5 = mce::ConstantBufferContainer::getUnspecializedShaderConstant(v4, (const void **)&v12);
  v6 = v5;
  if ( v5 )
    if ( mce::ShaderConstantBase::getType(v5) != 4 )
      v6 = 0;
    *((_DWORD *)v1 + 2) = v6;
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


unsigned int __fastcall mce::RenderMaterial::getTexturePtr(mce::RenderMaterial *this, unsigned int a2)
{
  return *((_DWORD *)this + 17) + 36 * a2 + 8;
}


char *__fastcall mce::RenderMaterial::getMaterialIdentifier(mce::RenderMaterial *this)
{
  return (char *)this + 512;
}


int __fastcall mce::WorldConstantsHolographic::_adjustViewMatsForStereo(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // ST14_4@1
  int v6; // r4@1
  int v7; // ST18_4@1
  __int64 v8; // r5@1
  int v9; // ST10_4@1
  int v10; // ST0C_4@1
  int v11; // ST08_4@1
  int v12; // ST04_4@1
  __int64 v13; // r10@1
  int v14; // r0@1
  int v15; // r1@1
  int v16; // r2@1
  int v17; // r3@1
  int v18; // r12@1
  int v19; // lr@1
  __int64 v20; // kr00_8@1
  int v21; // ST18_4@1
  int v22; // ST14_4@1
  int v23; // ST10_4@1
  __int64 v24; // kr08_8@1
  int v25; // r0@1
  int v26; // r1@1
  int v27; // r2@1
  int v28; // r7@1
  int v29; // r3@1
  int result; // r0@1
  __int64 v31; // [sp+1Ch] [bp-64h]@1
  __int64 v32; // [sp+24h] [bp-5Ch]@1
  int v33; // [sp+2Ch] [bp-54h]@1
  int v34; // [sp+30h] [bp-50h]@1
  int v35; // [sp+34h] [bp-4Ch]@1
  int v36; // [sp+38h] [bp-48h]@1
  int v37; // [sp+3Ch] [bp-44h]@1
  int v38; // [sp+40h] [bp-40h]@1
  __int64 v39; // [sp+44h] [bp-3Ch]@1
  int v40; // [sp+4Ch] [bp-34h]@1
  int v41; // [sp+50h] [bp-30h]@1
  int v42; // [sp+54h] [bp-2Ch]@1
  int v43; // [sp+58h] [bp-28h]@1

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  glm::detail::operator*<float>((int)&v31, a1 + 284, a4);
  v8 = v32;
  v9 = v43;
  v10 = v42;
  v11 = v41;
  v12 = v40;
  v13 = v39;
  v14 = v33;
  v15 = v34;
  v16 = v35;
  v17 = v36;
  v18 = v37;
  v19 = v38;
  *(_QWORD *)v4 = v31;
  *(_QWORD *)(v4 + 8) = v8;
  LODWORD(v8) = v4 + 16;
  *(_DWORD *)v8 = v14;
  *(_DWORD *)(v8 + 4) = v15;
  *(_DWORD *)(v8 + 8) = v16;
  *(_DWORD *)(v8 + 12) = v17;
  *(_DWORD *)(v8 + 16) = v18;
  *(_DWORD *)(v8 + 20) = v19;
  *(_QWORD *)(v4 + 40) = v13;
  *(_DWORD *)(v4 + 48) = v12;
  *(_DWORD *)(v4 + 52) = v11;
  *(_DWORD *)(v4 + 56) = v10;
  *(_DWORD *)(v4 + 60) = v9;
  glm::detail::operator*<float>((int)&v31, v5 + 348, v7);
  v20 = v32;
  v21 = v43;
  v22 = v42;
  v23 = v41;
  v24 = *(__int64 *)((char *)&v39 + 4);
  v25 = v33;
  v26 = v34;
  v27 = v35;
  LODWORD(v8) = v36;
  HIDWORD(v8) = v37;
  v28 = v38;
  HIDWORD(v13) = v39;
  *(_QWORD *)v6 = v31;
  *(_QWORD *)(v6 + 8) = v20;
  v29 = v6 + 16;
  *(_DWORD *)v29 = v25;
  *(_DWORD *)(v29 + 4) = v26;
  *(_DWORD *)(v29 + 8) = v27;
  *(_DWORD *)(v29 + 12) = v8;
  *(_DWORD *)(v29 + 16) = HIDWORD(v8);
  *(_DWORD *)(v29 + 20) = v28;
  *(_DWORD *)(v29 + 24) = HIDWORD(v13);
  *(_QWORD *)(v6 + 44) = v24;
  *(_DWORD *)(v6 + 52) = v23;
  *(_DWORD *)(v6 + 56) = v22;
  result = v21;
  *(_DWORD *)(v6 + 60) = v21;
  return result;
}


signed int __fastcall mce::RenderMaterialGroup::onAppResumed(mce::RenderMaterialGroup *this)
{
  mce::RenderMaterialGroup *v1; // r4@1
  int v2; // r0@2
  signed int result; // r0@6
  int i; // r4@6

  v1 = this;
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock((pthread_mutex_t *)this + 4);
    if ( v2 )
      sub_119CCFC(v2);
    __dmb();
    *((_BYTE *)v1 + 100) = 1;
    if ( &pthread_create )
      pthread_mutex_unlock((pthread_mutex_t *)v1 + 4);
  }
  else
    *((_BYTE *)this + 100) = 1;
  result = mce::RenderMaterialGroup::_loadList(
             v1,
             *((mce::ShaderGroup **)v1 + 36),
             *((ResourcePackManager **)v1 + 34),
             0);
  for ( i = *((_DWORD *)v1 + 17); i; i = *(_DWORD *)i )
    result = mce::MaterialPtr::onGroupReloaded(*(mce::MaterialPtr **)(i + 4));
  return result;
}


int __fastcall mce::MaterialPtr::_deref(mce::MaterialPtr *this)
{
  mce::MaterialPtr *v1; // r4@1
  mce::RenderMaterialGroup *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = *(mce::RenderMaterialGroup **)this;
  if ( v2 )
  {
    mce::RenderMaterialGroup::_removeRef(v2, v1);
    *(_DWORD *)v1 = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


signed int __fastcall mce::TextureHelperOGL::getOpenGLTextureTypeFromTextureFormat(signed int a1)
{
  if ( a1 > 84 )
  {
    if ( a1 == 85 )
      return 33635;
    if ( a1 != 87 )
      return 0;
    return 5121;
  }
  if ( a1 == 28 )
  if ( a1 == 45 )
    return 34042;
  return 0;
}


void __fastcall mce::TextureContainer::clearImageBuffers(mce::TextureContainer *this)
{
  mce::TextureContainer *v1; // r4@1
  void **v2; // r5@1 OVERLAPPED
  void **v3; // r6@1 OVERLAPPED
  void **v4; // r7@2

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)this;
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      if ( *v4 )
        j_operator delete(*v4);
      v4 += 10;
    }
    while ( v3 != v4 );
  }
  *((_DWORD *)v1 + 1) = v2;
}


int __fastcall mce::RenderMaterial::compileShaderPrograms(mce::RenderMaterial *this, mce::ShaderGroup *a2)
{
  mce::RenderMaterial *v2; // r5@1
  int *v3; // r6@1
  mce::ShaderGroup *v4; // r4@1
  int v5; // r7@1
  int v6; // r7@1

  v2 = this;
  v3 = (int *)((char *)this + 36);
  v4 = a2;
  v5 = mce::ShaderGroup::compileShaderProgram((int)a2, 0, (int *)this + 9, (int *)this + 10);
  v6 = v5 & mce::ShaderGroup::compileShaderProgram((int)v4, 1, v3, (int *)v2 + 11);
  return mce::ShaderGroup::compileShaderProgram((int)v4, 2, v3, (int *)v2 + 12) & v6;
}


signed int __fastcall mce::operator<(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VMOV            S2, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


signed int __fastcall mce::TextureHelperOGL::getOpenGLTextureTargetFromTextureDescription(mce::TextureHelperOGL *this, const mce::TextureDescription *a2)
{
  signed int result; // r0@2
  unsigned int v3; // r1@5

  if ( *((_DWORD *)this + 6) <= 1 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      result = 34067;
    }
    else
      v3 = mce::ImageDescription::getArraySize(this);
      result = 3553;
      if ( v3 > 1 )
        result = 35866;
  }
  else
    result = 37120;
  return result;
}


int __fastcall mce::FrameBufferAttachmentOGL::destroyRenderBuffer(mce::FrameBufferAttachmentOGL *this)
{
  mce::FrameBufferAttachmentOGL *v1; // r4@1
  int result; // r0@1

  v1 = this;
  glad_glDeleteRenderbuffers(1, (char *)this + 80);
  result = 0;
  *((_DWORD *)v1 + 20) = 0;
  return result;
}


int __fastcall mce::Attribute::Attribute(int result)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


      if ( mce::RenderContextImmediate::exists(0) == (mce::RenderDeviceBase *)1 )
{
        v5 = (mce::RenderContextStateBase *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)1);
        mce::RenderContextStateBase::removeIfBound(v5, (const mce::TextureBase *)v3);
        mce::TextureBase::deleteTexture((mce::TextureBase *)v3);
      }
    }
    *(_DWORD *)(v3 + 44) = *(_DWORD *)(v2 + 44);
    *(_DWORD *)(v3 + 48) = *(_DWORD *)(v2 + 48);
    *(_DWORD *)(v3 + 52) = *(_DWORD *)(v2 + 52);
    *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 56);
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(v2 + 60);
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_DWORD *)(v2 + 60) = 0;
  }
  mce::TextureBase::operator=(v3, v2);
  return v3;
}


mce::MaterialPtr *__fastcall mce::MaterialPtr::MaterialPtr(mce::MaterialPtr *a1, mce::MaterialPtr *a2)
{
  mce::MaterialPtr *v2; // r4@1
  mce::MaterialPtr *v3; // r5@1

  v2 = a1;
  v3 = a2;
  *((_DWORD *)a1 + 2) = &unk_28898CC;
  if ( a1 != a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      mce::RenderMaterialGroup::_removeRef(*(mce::RenderMaterialGroup **)a1, a1);
      *(_DWORD *)v2 = 0;
    }
    *((_DWORD *)v2 + 1) = 0;
    *(_DWORD *)v2 = *(_DWORD *)v3;
    *((_DWORD *)v2 + 1) = *((_DWORD *)v3 + 1);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2 + 2,
      (int *)v3 + 2);
    if ( *(_DWORD *)v3 )
      mce::RenderMaterialGroup::_removeRef(*(mce::RenderMaterialGroup **)v3, v3);
      *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = 0;
    if ( *(_DWORD *)v2 )
      mce::RenderMaterialGroup::_addRef(*(mce::RenderMaterialGroup **)v2, v2);
  }
  return v2;
}


void __fastcall mce::ShaderConstantMatrix2x2::~ShaderConstantMatrix2x2(mce::ShaderConstantMatrix2x2 *this)
{
  mce::ShaderConstantBase *v1; // r0@1

  v1 = mce::ShaderConstantBase::~ShaderConstantBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall mce::FrameBufferAttachmentOGL::createAttachmentWithTexture(mce::FrameBufferAttachmentOGL *this, mce::RenderContext *a2, const mce::FrameBufferAttachmentDescription *a3, const mce::Texture *a4, int a5, unsigned __int16 a6)
{
  mce::Texture *v6; // r5@1
  mce::FrameBufferAttachmentOGL *v7; // r4@1
  int v8; // r1@2
  int v9; // r2@2
  int v10; // r3@2
  signed int v11; // r0@2
  signed int v12; // r1@4
  int v13; // r3@8
  int v14; // r1@10
  int v15; // ST00_4@12
  signed int result; // r0@13
  int v17; // [sp+8h] [bp-10h]@0

  v6 = a4;
  v7 = this;
  mce::FrameBufferAttachmentBase::createAttachmentWithTexture(this, a2, a3, a4, a5, a6);
  switch ( *((_DWORD *)v7 + 17) )
  {
    case 1:
      v8 = *((_DWORD *)v7 + 2);
      v9 = *(_DWORD *)(v8 + 68);
      v10 = *(_DWORD *)(v9 - 4) + 36064;
      v11 = 0x4000;
      *((_DWORD *)v7 + 21) = 0x4000;
      *((_DWORD *)v7 + 22) = v10;
      *(_DWORD *)(v8 + 68) = v9 - 4;
      break;
    case 2:
      v12 = 36096;
      v11 = 256;
      goto LABEL_7;
    case 3:
      v12 = 36128;
      v11 = 1024;
    case 4:
      v12 = 33306;
      v11 = 1280;
LABEL_7:
      *((_DWORD *)v7 + 21) = v11;
      *((_DWORD *)v7 + 22) = v12;
    default:
      v11 = *((_DWORD *)v7 + 21);
  }
  *(_DWORD *)(*((_DWORD *)v7 + 2) + 48) |= v11;
  v13 = mce::Texture::getInternalTexture(v6);
  if ( *((_BYTE *)v7 + 72) )
    mce::glFramebufferTexture2DMultisampleMCE(
      (mce *)0x8D40,
      *((_DWORD *)v7 + 22),
      0xDE1u,
      v13,
      0,
      *((_DWORD *)v7 + 9),
      v17);
  else
    v14 = *((_DWORD *)v7 + 22);
    if ( *((_DWORD *)v7 + 9) < 2 )
    {
      v15 = *((_BYTE *)v7 + 4);
      glad_glFramebufferTexture2D(36160, v14, 3553, v13);
    }
    else
      glad_glFramebufferTexture2D(36160, v14, 37120, v13);
  result = 1;
  *((_BYTE *)v7 + 76) = 1;
  return result;
}


mce::ConstantBufferMetaData *__fastcall mce::ConstantBufferMetaData::~ConstantBufferMetaData(mce::ConstantBufferMetaData *this)
{
  mce::ConstantBufferMetaData *v1; // r4@1
  mce::UniformMetaData *v2; // r0@1
  mce::UniformMetaData *v3; // r5@1
  int *v4; // r0@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10

  v1 = this;
  v3 = (mce::UniformMetaData *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (mce::UniformMetaData *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (mce::UniformMetaData *)((char *)mce::UniformMetaData::~UniformMetaData(v2) + 20);
    while ( v3 != v2 );
    v2 = (mce::UniformMetaData *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  v4 = (int *)(*(_DWORD *)v1 - 12);
  if ( v4 != &dword_28898C0 )
    v6 = (unsigned int *)(*(_DWORD *)v1 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  return v1;
}


int __fastcall mce::ConstantBufferContainerBase::registerShaderParameter(mce::ConstantBufferContainerBase *this, const mce::ShaderConstantBase *a2)
{
  const mce::ShaderConstantBase *v2; // r5@1
  mce::ConstantBufferContainerBase *v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  int result; // r0@1
  int v7; // r8@1
  void *v8; // r0@2
  int v9; // r6@2
  int *v10; // r7@2
  __int64 v11; // r0@2
  void *v12; // r0@4
  int *v13; // r7@4
  void *v14; // r0@6
  int *v15; // r7@6
  void *v16; // r0@8
  int *v17; // r7@8
  void *v18; // r0@10
  int *v19; // r7@10
  void *v20; // r0@12
  int *v21; // r7@12
  void *v22; // r0@14
  int *v23; // r7@14
  void *v24; // r0@16
  int *v25; // r7@16
  void *v26; // r0@18
  int *v27; // r7@18
  void *v28; // r0@20
  int *v29; // r7@20
  void *v30; // r0@22
  int *v31; // r7@22
  int v32; // [sp+0h] [bp-20h]@2

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)a2 + 3);
  v5 = *((_DWORD *)this + 6);
  mce::ShaderConstantBase::getConstantSize(a2);
  result = *((_BYTE *)v2 + 16);
  v7 = v5 + v4;
  switch ( result )
  {
    case 1:
      v8 = operator new(0x18u);
      v9 = (int)v8;
      *((_DWORD *)v8 + 2) = 0;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 4) = 0;
      *((_DWORD *)v8 + 5) = 0;
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 1) = 0;
      v10 = (int *)((char *)v8 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v8);
      *(_BYTE *)(v9 + 16) = 1;
      v32 = v9;
      *(_DWORD *)v9 = &off_26E8C54;
      *(_DWORD *)(v9 + 20) = v7;
      EntityInteraction::setInteractText(v10, (int *)v2 + 1);
      *(_DWORD *)(v9 + 8) = *((_DWORD *)v2 + 2);
      *(_DWORD *)(v9 + 12) = *((_DWORD *)v2 + 3);
      v11 = *((_QWORD *)v3 + 2);
      if ( (_DWORD)v11 != HIDWORD(v11) )
        goto LABEL_23;
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantFloat1,std::default_delete<mce::ShaderConstantFloat1>>>(
        (mce::ConstantBufferContainerBase *)((char *)v3 + 12),
        &v32);
      goto LABEL_25;
    case 2:
      v12 = operator new(0x18u);
      v9 = (int)v12;
      *((_DWORD *)v12 + 2) = 0;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 0;
      *((_DWORD *)v12 + 5) = 0;
      *(_DWORD *)v12 = 0;
      *((_DWORD *)v12 + 1) = 0;
      v13 = (int *)((char *)v12 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v12);
      *(_BYTE *)(v9 + 16) = 2;
      *(_DWORD *)v9 = &off_26E8C68;
      EntityInteraction::setInteractText(v13, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantFloat2,std::default_delete<mce::ShaderConstantFloat2>>>(
    case 3:
      v14 = operator new(0x18u);
      v9 = (int)v14;
      *((_DWORD *)v14 + 2) = 0;
      *((_DWORD *)v14 + 3) = 0;
      *((_DWORD *)v14 + 4) = 0;
      *((_DWORD *)v14 + 5) = 0;
      *(_DWORD *)v14 = 0;
      *((_DWORD *)v14 + 1) = 0;
      v15 = (int *)((char *)v14 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v14);
      *(_BYTE *)(v9 + 16) = 3;
      *(_DWORD *)v9 = &off_26E8C7C;
      EntityInteraction::setInteractText(v15, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantFloat3,std::default_delete<mce::ShaderConstantFloat3>>>(
    case 4:
      v16 = operator new(0x18u);
      v9 = (int)v16;
      *((_DWORD *)v16 + 2) = 0;
      *((_DWORD *)v16 + 3) = 0;
      *((_DWORD *)v16 + 4) = 0;
      *((_DWORD *)v16 + 5) = 0;
      *(_DWORD *)v16 = 0;
      *((_DWORD *)v16 + 1) = 0;
      v17 = (int *)((char *)v16 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v16);
      *(_BYTE *)(v9 + 16) = 4;
      *(_DWORD *)v9 = &off_26E8C90;
      EntityInteraction::setInteractText(v17, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantFloat4,std::default_delete<mce::ShaderConstantFloat4>>>(
    case 5:
      v18 = operator new(0x18u);
      v9 = (int)v18;
      *((_DWORD *)v18 + 2) = 0;
      *((_DWORD *)v18 + 3) = 0;
      *((_DWORD *)v18 + 4) = 0;
      *((_DWORD *)v18 + 5) = 0;
      *(_DWORD *)v18 = 0;
      *((_DWORD *)v18 + 1) = 0;
      v19 = (int *)((char *)v18 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v18);
      *(_BYTE *)(v9 + 16) = 5;
      *(_DWORD *)v9 = &off_26E8CA4;
      EntityInteraction::setInteractText(v19, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantInt1,std::default_delete<mce::ShaderConstantInt1>>>(
    case 6:
      v20 = operator new(0x18u);
      v9 = (int)v20;
      *((_DWORD *)v20 + 2) = 0;
      *((_DWORD *)v20 + 3) = 0;
      *((_DWORD *)v20 + 4) = 0;
      *((_DWORD *)v20 + 5) = 0;
      *(_DWORD *)v20 = 0;
      *((_DWORD *)v20 + 1) = 0;
      v21 = (int *)((char *)v20 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v20);
      *(_BYTE *)(v9 + 16) = 6;
      *(_DWORD *)v9 = &off_26E8CB8;
      EntityInteraction::setInteractText(v21, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantInt2,std::default_delete<mce::ShaderConstantInt2>>>(
    case 7:
      v22 = operator new(0x18u);
      v9 = (int)v22;
      *((_DWORD *)v22 + 2) = 0;
      *((_DWORD *)v22 + 3) = 0;
      *((_DWORD *)v22 + 4) = 0;
      *((_DWORD *)v22 + 5) = 0;
      *(_DWORD *)v22 = 0;
      *((_DWORD *)v22 + 1) = 0;
      v23 = (int *)((char *)v22 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v22);
      *(_BYTE *)(v9 + 16) = 7;
      *(_DWORD *)v9 = &off_26E8CCC;
      EntityInteraction::setInteractText(v23, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantInt3,std::default_delete<mce::ShaderConstantInt3>>>(
    case 8:
      v24 = operator new(0x18u);
      v9 = (int)v24;
      *((_DWORD *)v24 + 2) = 0;
      *((_DWORD *)v24 + 3) = 0;
      *((_DWORD *)v24 + 4) = 0;
      *((_DWORD *)v24 + 5) = 0;
      *(_DWORD *)v24 = 0;
      *((_DWORD *)v24 + 1) = 0;
      v25 = (int *)((char *)v24 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v24);
      *(_BYTE *)(v9 + 16) = 8;
      *(_DWORD *)v9 = &off_26E8CE0;
      EntityInteraction::setInteractText(v25, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantInt4,std::default_delete<mce::ShaderConstantInt4>>>(
    case 9:
      v26 = operator new(0x18u);
      v9 = (int)v26;
      *((_DWORD *)v26 + 2) = 0;
      *((_DWORD *)v26 + 3) = 0;
      *((_DWORD *)v26 + 4) = 0;
      *((_DWORD *)v26 + 5) = 0;
      *(_DWORD *)v26 = 0;
      *((_DWORD *)v26 + 1) = 0;
      v27 = (int *)((char *)v26 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v26);
      *(_BYTE *)(v9 + 16) = 9;
      *(_DWORD *)v9 = &off_26E8CF4;
      EntityInteraction::setInteractText(v27, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantMatrix2x2,std::default_delete<mce::ShaderConstantMatrix2x2>>>(
    case 10:
      v28 = operator new(0x18u);
      v9 = (int)v28;
      *((_DWORD *)v28 + 2) = 0;
      *((_DWORD *)v28 + 3) = 0;
      *((_DWORD *)v28 + 4) = 0;
      *((_DWORD *)v28 + 5) = 0;
      *(_DWORD *)v28 = 0;
      *((_DWORD *)v28 + 1) = 0;
      v29 = (int *)((char *)v28 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v28);
      *(_BYTE *)(v9 + 16) = 10;
      *(_DWORD *)v9 = &off_26E8D08;
      EntityInteraction::setInteractText(v29, (int *)v2 + 1);
      std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantMatrix3x3,std::default_delete<mce::ShaderConstantMatrix3x3>>>(
    case 11:
      v30 = operator new(0x18u);
      v9 = (int)v30;
      *((_DWORD *)v30 + 2) = 0;
      *((_DWORD *)v30 + 3) = 0;
      *((_DWORD *)v30 + 4) = 0;
      *((_DWORD *)v30 + 5) = 0;
      *(_DWORD *)v30 = 0;
      *((_DWORD *)v30 + 1) = 0;
      v31 = (int *)((char *)v30 + 4);
      mce::ShaderConstantBase::ShaderConstantBase((mce::ShaderConstantBase *)v30);
      *(_BYTE *)(v9 + 16) = 11;
      *(_DWORD *)v9 = &off_26E8D1C;
      EntityInteraction::setInteractText(v31, (int *)v2 + 1);
      if ( (_DWORD)v11 == HIDWORD(v11) )
      {
        std::vector<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>,std::allocator<std::unique_ptr<mce::ShaderConstant,std::default_delete<mce::ShaderConstant>>>>::_M_emplace_back_aux<std::unique_ptr<mce::ShaderConstantMatrix4x4,std::default_delete<mce::ShaderConstantMatrix4x4>>>(
          (mce::ConstantBufferContainerBase *)((char *)v3 + 12),
          &v32);
LABEL_25:
        result = v32;
        if ( v32 )
          result = (*(int (**)(void))(*(_DWORD *)v32 + 4))();
      }
      else
LABEL_23:
        v32 = 0;
        *(_DWORD *)v11 = v9;
        result = v11 + 4;
        *((_DWORD *)v3 + 4) = result;
      break;
    default:
      return result;
  }
  return result;
}


int __fastcall mce::Math::remainder(mce::Math *this, float _R1, float a3)
{
  int result; // r0@1

  __asm
  {
    VMOV            S16, R1
    VMOV            S18, R0
    VDIV.F32        S0, S18, S16
    VMOV            R0, S0
  }
  _R0 = j_truncf(_R0);
    VMOV            S0, R0
    VCVT.F64.F32    D1, S16
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F64.F32    D1, S18
    VSUB.F64        D0, D1, D0
    VCVT.F32.F64    S0, D0
  return result;
}


void __fastcall mce::ShaderConstantInt1::~ShaderConstantInt1(mce::ShaderConstantInt1 *this)
{
  mce::ShaderConstantInt1::~ShaderConstantInt1(this);
}


int __fastcall mce::WorldConstantsHolographic::getMatrixPatch(int a1, int a2)
{
  int result; // r0@1

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 412);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 416);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 420);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 424);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 428);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 432);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 440);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 444);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 448);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 452);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 456);
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(a1 + 460);
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 464);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 468);
  result = *(_DWORD *)(a1 + 472);
  *(_DWORD *)(a2 + 60) = result;
  return result;
}


char *__fastcall mce::DeviceInformationOGL::findChipsetInfo(mce::DeviceInformationOGL *this)
{
  mce::DeviceInformationOGL *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  void *v5; // r0@4
  const char *v6; // r5@5
  char **v7; // r6@5
  char *result; // r0@5
  unsigned int *v9; // r2@21
  signed int v10; // r1@23
  unsigned int *v11; // r2@25
  signed int v12; // r1@27
  unsigned int *v13; // r2@29
  signed int v14; // r1@31
  unsigned int *v15; // r2@33
  signed int v16; // r1@35
  int v17; // [sp+4h] [bp-24h]@4
  int v18; // [sp+8h] [bp-20h]@3
  int v19; // [sp+Ch] [bp-1Ch]@2
  int v20; // [sp+10h] [bp-18h]@1

  v1 = this;
  gl::getOpenGLExtensions((gl *)&v20);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 14,
    &v20);
  v2 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  gl::getOpenGLVendor((gl *)&v19);
    (int *)v1 + 12,
    &v19);
  v3 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  gl::getOpenGLVersion((gl *)&v18);
    (int *)v1 + 13,
    &v18);
  v4 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  *((_BYTE *)v1 + 60) = 0;
  gl::getOpenGLRenderer((gl *)&v17);
    (int *)v1 + 2,
    &v17);
  v5 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (const char *)*((_DWORD *)v1 + 2);
  v7 = (char **)&mce::chipsets;
  result = strstr(*((const char **)v1 + 2), (const char *)mce::chipsets);
  if ( result
    || (v7 = &off_27B5510, (result = strstr(v6, off_27B5510)) != 0)
    || (v7 = &off_27B5518, (result = strstr(v6, off_27B5518)) != 0)
    || (v7 = &off_27B5520, (result = strstr(v6, off_27B5520)) != 0)
    || (v7 = &off_27B5528, (result = strstr(v6, off_27B5528)) != 0)
    || (v7 = &off_27B5530, (result = strstr(v6, off_27B5530)) != 0)
    || (v7 = &off_27B5538, (result = strstr(v6, off_27B5538)) != 0)
    || (v7 = &off_27B5540, (result = strstr(v6, off_27B5540)) != 0)
    || (v7 = &off_27B5548, (result = strstr(v6, off_27B5548)) != 0)
    || (v7 = &off_27B5550, (result = strstr(v6, off_27B5550)) != 0)
    || (v7 = &off_27B5558, (result = strstr(v6, off_27B5558)) != 0)
    || (v7 = &off_27B5560, (result = strstr(v6, off_27B5560)) != 0)
    || (v7 = &off_27B5568, (result = strstr(v6, off_27B5568)) != 0)
    || (v7 = &off_27B5570, (result = strstr(v6, off_27B5570)) != 0) )
    *(_DWORD *)v1 = v7;
  else
    result = strstr(v6, off_27B5578);
    if ( result )
      *(_DWORD *)v1 = &off_27B5578;
  return result;
}


mce::Camera *__fastcall mce::Camera::Camera(mce::Camera *this)
{
  mce::Camera *v1; // r4@1

  v1 = this;
  MatrixStack::MatrixStack(this);
  MatrixStack::MatrixStack((mce::Camera *)((char *)v1 + 16));
  MatrixStack::MatrixStack((mce::Camera *)((char *)v1 + 32));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 12) = 1065353216;
  *((_QWORD *)v1 + 8) = 4575657221408423936LL;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 24) = 0;
  *((_DWORD *)v1 + 25) = 0;
  *((_DWORD *)v1 + 22) = 1065353216;
  *((_DWORD *)v1 + 23) = 0;
  *((_QWORD *)v1 + 13) = 4575657221408423936LL;
  _aeabi_memclr4((char *)v1 + 112, 64);
  Frustum::Frustum((mce::Camera *)((char *)v1 + 176));
  return v1;
}


int __fastcall mce::Mesh::render(mce::TexturePtr *a1, mce::TexturePtr *a2, int a3, int a4, mce::TexturePtr *a5, mce::TexturePtr *a6, int a7, int a8)
{
  mce::TexturePtr *v8; // r4@1
  mce::TexturePtr *v9; // r5@1
  mce::TexturePtr *v10; // r10@1
  int v11; // r8@1
  mce::RenderContext *v12; // r7@1
  int v13; // r6@1
  mce::Texture *v14; // r0@1
  int v20; // r6@1
  int v21; // r6@2
  mce::Texture *v22; // r0@3
  float v24; // [sp+8h] [bp-30h]@1

  v8 = (mce::TexturePtr *)a4;
  v9 = a2;
  v10 = a1;
  v11 = a3;
  v12 = (mce::RenderContext *)*((_DWORD *)a2 + 3);
  v13 = *((_DWORD *)a2 + 8);
  v14 = (mce::Texture *)mce::TexturePtr::operator->(a4);
  _R0 = mce::Texture::getDescription(v14);
  __asm
  {
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S4, [R0,#0x14]
    VCVT.F32.U32    S2, S2
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S4, S4
    VSTR            S2, [SP,#0x38+var_30]
    VSTR            S0, [SP,#0x38+var_2C]
    VSTR            S4, [SP,#0x38+var_28]
  }
  mce::ShaderConstants::setTextureDimensions(v13 + 588, v12, (int)&v24);
  v20 = mce::TexturePtr::get(v8);
  if ( v20 == mce::TexturePtr::get(a5) )
    v21 = mce::TexturePtr::get(v8);
    if ( v21 == mce::TexturePtr::get(a6) )
    {
      v22 = (mce::Texture *)mce::TexturePtr::operator->((int)v8);
      mce::Texture::bindTexture(v22, v12, 0, 2u);
    }
  return mce::Mesh::render(v10, (int)v9, v11, a7, a8);
}


int __fastcall mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription(int result, __int64 a2)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 1;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 8;
  *(_BYTE *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 1065353216;
  *(_DWORD *)(result + 52) = 1065353216;
  *(_DWORD *)(result + 56) = 0;
  *(_BYTE *)(result + 60) = 0;
  *(_QWORD *)result = a2;
  return result;
}


int __fastcall mce::GlobalConstantBufferManager::setLeftPass(int result, bool a2)
{
  *(_BYTE *)(result + 14) = a2;
  return result;
}


mce::LRUCache *__fastcall mce::LRUCache::~LRUCache(mce::LRUCache *this)
{
  mce::LRUCache *v1; // r9@1
  void (*v2)(void); // r3@1
  unsigned __int64 *v3; // r7@3
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  unsigned __int64 *v6; // r6@13
  int v7; // r1@13
  void *v8; // r0@13
  char *v9; // r0@15
  int v10; // r5@18
  unsigned int *v11; // r2@20
  signed int v12; // r1@22
  void *v13; // r6@28
  int v14; // r1@28
  void *v15; // r0@28

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 14);
  if ( v2 )
    v2();
  v3 = (unsigned __int64 *)*((_DWORD *)v1 + 7);
  while ( v3 )
  {
    v6 = v3;
    v7 = *v3 >> 32;
    v3 = (unsigned __int64 *)*v3;
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v7 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    operator delete(v6);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 20), 4 * (*(_QWORD *)((char *)v1 + 20) >> 32));
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  v9 = (char *)*((_DWORD *)v1 + 5);
  if ( v9 && (char *)v1 + 44 != v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 3);
  while ( (mce::LRUCache *)v10 != (mce::LRUCache *)((char *)v1 + 12) )
    v13 = (void *)v10;
    v14 = *(_DWORD *)(v10 + 8);
    v10 = *(_DWORD *)v10;
    v15 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    operator delete(v13);
  return v1;
}


int __fastcall mce::Mesh::releaseIndexBuffer(mce::Mesh *this)
{
  mce::Mesh *v1; // r4@1
  int result; // r0@1

  v1 = this;
  mce::Buffer::releaseBuffer((mce::Mesh *)((char *)this + 32));
  result = 0;
  *((_DWORD *)v1 + 20) = 0;
  return result;
}


int __fastcall mce::FrameBufferObjectOGL::createFrameBuffer(mce::FrameBufferObjectOGL *this, mce::RenderContext *a2, const mce::FrameBufferDescription *a3)
{
  mce::RenderContext *v3; // r6@1
  mce::FrameBufferObjectOGL *v4; // r4@1
  char *v5; // r0@1
  _DWORD *v6; // r1@1 OVERLAPPED
  _DWORD *v7; // t1@1
  const mce::FrameBufferDescription *v8; // r7@1
  int v9; // r2@1 OVERLAPPED
  signed int v10; // r3@1
  _DWORD *i; // r1@6
  int result; // r0@8
  char *v13; // r0@9
  int v14; // r4@9
  int v15; // [sp+0h] [bp-18h]@6

  v3 = a2;
  v4 = this;
  v7 = (_DWORD *)*((_DWORD *)this + 16);
  v5 = (char *)this + 64;
  v6 = v7;
  v8 = a3;
  v9 = *((_DWORD *)v5 + 1);
  v10 = v9 - (_DWORD)v7;
  if ( !((v9 - (signed int)v7) >> 2) )
  {
    std::vector<unsigned int,std::allocator<unsigned int>>::_M_default_append((int)v5, 1u);
    *(_QWORD *)&v6 = *((_QWORD *)v4 + 8);
LABEL_5:
    if ( v6 == (_DWORD *)v9 )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( (unsigned int)(v10 >> 2) < 2 )
    goto LABEL_5;
  v9 = (int)(v6 + 1);
  *((_DWORD *)v4 + 17) = v6 + 1;
LABEL_6:
  v15 = 0;
  *v6 = 0;
  for ( i = v6 + 1; (_DWORD *)v9 != i; ++i )
    *i = --v15;
LABEL_8:
  mce::FrameBufferObjectBase::createFrameBuffer(v4, v3, v8);
  glad_glGenFramebuffers(1, (char *)v4 + 44);
  mce::FrameBufferObjectBase::bindFrameBuffer(v4);
  glad_glBindFramebuffer(36160, *((_DWORD *)v4 + 11));
  result = *((_DWORD *)v4 + 7);
  if ( result )
    v13 = mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription((mce::FrameBufferAttachmentBase *)result);
    v14 = *((_DWORD *)v13 + 6);
    result = mce::RenderContextImmediate::get((mce::RenderContextImmediate *)v13);
    *(_DWORD *)(result + 116) = v14;
  return result;
}


int __fastcall mce::TextureContainer::setImageData(mce::TextureContainer *this, const void *a2, unsigned int a3, unsigned int a4)
{
  mce::TextureContainer *v4; // r5@1
  unsigned int v5; // r7@1
  const void *v6; // r4@1
  int v7; // r6@1
  char *v8; // r0@1
  int v9; // r2@1

  v4 = this;
  v5 = 5 * a3;
  v6 = a2;
  v7 = j_mce::ImageBuffer::get((mce::ImageBuffer *)(*(_DWORD *)this + 40 * a3), a4);
  v8 = j_mce::ImageBuffer::getImageDescription((mce::ImageBuffer *)(*(_DWORD *)v4 + 8 * v5));
  v9 = j_mce::ImageDescription::getSubimageSize((mce::ImageDescription *)v8);
  return j_j___aeabi_memcpy_4(v7, (int)v6, v9);
}


char *__fastcall mce::ImageBuffer::getImageDescription(mce::ImageBuffer *this)
{
  return (char *)this + 20;
}


int __fastcall mce::RenderChunkConstants::RenderChunkConstants(mce::RenderChunkConstants *this)
{
  int result; // r0@1

  result = mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)result = &off_26E8BD8;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


signed int __fastcall mce::ImmediateBufferOGL::createDynamicBuffer(gl *a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r7@1
  gl *v9; // r4@1
  signed int result; // r0@2

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( gl::supportsImmediateMode(a1) )
  {
    mce::BufferBase::createDynamicBuffer((int)v9, v8, v7, v6, a5, a6);
    result = mce::glTargetFromBufferType(a6);
    *((_DWORD *)v9 + 6) = result;
  }
  else
    result = mce::BufferOGL::createDynamicBuffer((int)v9, v8, v7, v6, a5, a6);
  return result;
}


int __fastcall mce::SamplerStateGroupBase::createSamplerStateGroup(int result, mce::RenderContext *a2, const mce::SamplerStateDescription *a3, int a4, mce::SamplerGroupCache *a5)
{
  int v5; // r6@1
  const mce::SamplerStateDescription *v6; // r4@1
  mce::RenderContext *v7; // r5@1
  unsigned __int16 v8; // r7@2

  v5 = result;
  v6 = a3;
  v7 = a2;
  *(_WORD *)(result + 160) = a4;
  if ( a4 )
  {
    result = 0;
    v8 = 0;
    do
    {
      mce::SamplerState::createSamplerState(
        (mce::SamplerState *)(v5 + 12 * result),
        v7,
        (const mce::SamplerStateDescription *)((char *)v6 + 8 * result),
        v8++);
      result = v8;
    }
    while ( v8 < (unsigned int)*(_WORD *)(v5 + 160) );
  }
  return result;
}


unsigned int __fastcall mce::_appendFolder(int *a1, unsigned int *a2)
{
  int *v2; // r4@1
  unsigned int *v3; // r5@1
  unsigned int result; // r0@1
  _BYTE *v5; // r0@3

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(*a1 - 12);
  if ( result >= 2 )
  {
    result = sub_21E76A0(v2, (_BYTE *)*a2, 0, *(_DWORD *)(*a2 - 12));
    if ( result == -1 )
    {
      v5 = sub_21E78D0(v2, 47, 0xFFFFFFFF);
      result = (unsigned int)sub_21E82D8((const void **)v2, (size_t)v5, *v3, *(_BYTE **)(*v3 - 12));
    }
  }
  return result;
}


int __fastcall mce::GlobalConstantBufferManager::setStereoEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


void __fastcall mce::RenderDevice::getClosestSupportedSampleDescription(int a1)
{
  mce::RenderDeviceBase::getClosestSupportedSampleDescription(a1);
}


mce::TextureOGL *__fastcall mce::TextureOGL::TextureOGL(mce::TextureOGL *this, unsigned int a2)
{
  unsigned int v2; // r5@1
  mce::TextureOGL *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1
  char v6; // [sp+8h] [bp-18h]@1
  char v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  mce::TextureBase::TextureBase(this);
  *((_DWORD *)v3 + 11) = v2;
  *((_BYTE *)v3 + 41) = 0;
  *((_DWORD *)v3 + 14) = 0;
  *((_DWORD *)v3 + 15) = 0;
  *((_DWORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 13) = 0;
  glad_glGetTexParameteriv(3553, 10241, &v7);
  glad_glGetTexParameteriv(3553, 10240, &v6);
  glad_glGetTexParameteriv(3553, 10242, &v5);
  return v3;
}


int __fastcall mce::Math::wrapRadians(mce::Math *this, float _R1, float a3)
{
  int result; // r0@3

  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R1
    VADD.F32        S4, S2, S0
    VADD.F32        S2, S2, S2
    VDIV.F32        S4, S4, S2
    VCVTR.S32.F32   S6, S4
    VMOV            R0, S6
    VCVT.F32.S32    S6, S6
    VCMPE.F32       S6, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    --_R0;
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VMUL.F32        S2, S4, S2
    VSUB.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


mce::AdapterDescription *__fastcall mce::AdapterDescription::AdapterDescription(mce::AdapterDescription *this)
{
  mce::AdapterDescription *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &unk_28898CC;
  _aeabi_memclr4((char *)this + 4, 36);
  return v1;
}


int __fastcall mce::RenderContextBase::isThreadedSubmitMode(mce::RenderContextBase *this)
{
  return 0;
}


int __fastcall mce::ImageDescription::getStorageSize(mce::ImageDescription *this)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1 OVERLAPPED
  int v3; // r1@2
  signed int v4; // r2@2
  signed int v5; // r2@6
  int v6; // r1@7
  signed int v7; // r0@24

  *(_QWORD *)&v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
  {
    v6 = 0;
    goto LABEL_23;
  }
  v3 = v1 * v2;
  v4 = *((_DWORD *)this + 2);
  if ( v4 > 76 )
    if ( v4 <= 90 )
    {
      if ( v4 != 77 )
      {
        if ( v4 != 87 )
          goto LABEL_21;
LABEL_20:
        v5 = 4;
        goto LABEL_22;
      }
    }
    else
      if ( v4 == 91 )
        goto LABEL_20;
      if ( v4 != 98 )
        if ( v4 == 116 )
        {
          v5 = 3;
          goto LABEL_22;
        }
        goto LABEL_21;
    v5 = 4;
    goto LABEL_22;
  if ( v4 > 34 )
    if ( (unsigned int)(v4 - 61) < 2 )
      v5 = 1;
      goto LABEL_22;
    if ( v4 == 35 )
      goto LABEL_20;
LABEL_21:
    v5 = 0;
  if ( (unsigned int)(v4 - 28) < 2 )
    goto LABEL_20;
  if ( v4 != 11 )
    goto LABEL_21;
  v5 = 8;
LABEL_22:
  v6 = v3 * v5;
LABEL_23:
  if ( *((_BYTE *)this + 16) )
    v7 = 6;
  else
    v7 = *((_DWORD *)this + 3);
  return v7 * v6;
}


void __fastcall mce::PerFrameConstants::~PerFrameConstants(mce::PerFrameConstants *this)
{
  mce::PerFrameConstants::~PerFrameConstants(this);
}


char *__fastcall mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription(mce::FrameBufferAttachmentBase *this)
{
  return (char *)this + 12;
}


void __fastcall mce::TextureGroup::getTexture(mce::TexturePtr *a1, mce::TextureGroup *a2, int a3, int a4)
{
  mce::TextureGroup::getTexture(a1, a2, a3, a4);
}


void __fastcall mce::RenderStage::~RenderStage(mce::RenderStage *this)
{
  mce::RenderStage *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)this + 4) >> 32;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall mce::TextureGroup::TextureGroup(mce::TextureGroup *this, ResourceLoadManager *a2)
{
  JUMPOUT(mce::TextureGroup::TextureGroup);
}


int __fastcall mce::RenderDeviceBase::registerOrGetAttributeListIndex(int a1, unsigned __int64 *a2)
{
  signed int v2; // r8@1
  int v3; // r10@1
  unsigned __int64 *v4; // r11@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r0@2
  int v8; // r7@2
  _BYTE *v9; // r4@2
  _BYTE *v10; // r6@2
  _BYTE *v11; // r4@8
  _BYTE *v12; // r5@8
  _BYTE *v13; // r4@14
  _BYTE *v14; // r5@14
  signed int v15; // r5@19
  _BYTE *v16; // r4@21
  _BYTE *v17; // r8@21
  unsigned __int8 v18; // vf@26
  int v19; // r0@28
  int v20; // r7@32
  _BYTE *v21; // r4@32
  _BYTE *v22; // r9@32
  int v23; // r7@39
  _BYTE *v24; // r4@39
  _BYTE *v25; // r6@39
  int v26; // r7@45
  _BYTE *v27; // r4@45
  _BYTE *v28; // r6@45
  int result; // r0@52
  int v30; // r1@53 OVERLAPPED
  int v31; // r2@53 OVERLAPPED
  unsigned int v32; // r4@53
  void *v33; // r0@54
  int v34; // r7@57
  int v35; // r3@57
  __int64 v36; // kr58_8@59
  int v37; // r4@59
  int v38; // r1@60 OVERLAPPED
  int v39; // r2@60
  int v40; // [sp+4h] [bp-3Ch]@1
  unsigned __int64 *v41; // [sp+8h] [bp-38h]@1
  int v42; // [sp+Ch] [bp-34h]@1
  void *ptr; // [sp+10h] [bp-30h]@53
  int v44; // [sp+14h] [bp-2Ch]@53
  char *v45; // [sp+18h] [bp-28h]@53

  v42 = a1;
  v2 = -1431655765;
  v3 = *(_DWORD *)(a1 + 72);
  v41 = (unsigned __int64 *)(a1 + 72);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 76);
  v40 = v5;
  v6 = -1431655765 * ((v5 - v3) >> 2) >> 2;
  if ( v6 < 1 )
  {
LABEL_28:
    v19 = ((v5 - v3) >> 2) * v2;
    if ( v19 != 1 )
    {
      if ( v19 == 3 )
      {
        v20 = *v4;
        v22 = (_BYTE *)(*(_QWORD *)v3 >> 32);
        v21 = (_BYTE *)*(_QWORD *)v3;
        if ( v22 - v21 == (*v4 >> 32) - v20 )
        {
          if ( v21 == v22 )
            goto LABEL_51;
          while ( mce::Attribute::operator==(v21, v20) == 1 )
          {
            v21 += 12;
            v20 += 12;
            if ( v22 == v21 )
              goto LABEL_51;
          }
        }
        v3 += 12;
      }
      else if ( v19 != 2 )
LABEL_50:
        v3 = v5;
        goto LABEL_51;
      v23 = *v4;
      v25 = (_BYTE *)(*(_QWORD *)v3 >> 32);
      v24 = (_BYTE *)*(_QWORD *)v3;
      if ( v25 - v24 == (*v4 >> 32) - v23 )
        if ( v24 == v25 )
          goto LABEL_51;
        while ( mce::Attribute::operator==(v24, v23) == 1 )
          v24 += 12;
          v23 += 12;
          if ( v25 == v24 )
      v3 += 12;
    }
    v26 = *v4;
    v28 = (_BYTE *)(*(_QWORD *)v3 >> 32);
    v27 = (_BYTE *)*(_QWORD *)v3;
    if ( v28 - v27 == (*v4 >> 32) - v26 )
      if ( v27 == v28 )
      while ( mce::Attribute::operator==(v27, v26) == 1 )
        v27 += 12;
        v26 += 12;
        if ( v28 == v27 )
    goto LABEL_50;
  }
  while ( 1 )
    v7 = *v4 >> 32;
    v8 = *v4;
    v10 = (_BYTE *)(*(_QWORD *)v3 >> 32);
    v9 = (_BYTE *)*(_QWORD *)v3;
    if ( v10 - v9 == v7 - v8 )
      if ( v9 == v10 )
      while ( mce::Attribute::operator==(v9, v8) == 1 )
        v9 += 12;
        v8 += 12;
        if ( v10 == v9 )
      v7 = *v4 >> 32;
      v8 = *v4;
    v11 = *(_BYTE **)(v3 + 12);
    v12 = *(_BYTE **)(v3 + 16);
    if ( v12 - v11 == v7 - v8 )
      if ( v11 == v12 )
      while ( mce::Attribute::operator==(v11, v8) == 1 )
        v11 += 12;
        if ( v12 == v11 )
          v3 += 12;
    v13 = *(_BYTE **)(v3 + 24);
    v14 = *(_BYTE **)(v3 + 28);
    if ( v14 - v13 != v7 - v8 )
      v15 = v2;
      goto LABEL_21;
    if ( v13 == v14 )
      break;
    while ( mce::Attribute::operator==(v13, v8) == 1 )
      v13 += 12;
      v8 += 12;
      if ( v14 == v13 )
        v3 += 24;
    v15 = v2;
LABEL_21:
    v16 = *(_BYTE **)(v3 + 36);
    v17 = *(_BYTE **)(v3 + 40);
    if ( v17 - v16 == v7 - v8 )
      if ( v16 == v17 )
LABEL_37:
        v3 += 36;
        v2 = v15;
      while ( mce::Attribute::operator==(v16, v8) == 1 )
        v16 += 12;
        if ( v17 == v16 )
          goto LABEL_37;
    v2 = v15;
    v5 = v40;
    v18 = __OFSUB__(v6--, 1);
    v3 += 48;
    if ( (unsigned __int8)((v6 < 0) ^ v18) | (v6 == 0) )
      goto LABEL_28;
  v3 += 24;
LABEL_51:
  if ( v3 == *(_DWORD *)(v42 + 76) )
    *(_QWORD *)&v30 = *v4;
    v32 = ((v31 - v30) >> 2) * v2;
    ptr = 0;
    v44 = 0;
    v45 = 0;
    if ( v31 == v30 )
      v33 = 0;
    else
      if ( v32 >= 0x15555556 )
        sub_21E57F4();
      v33 = operator new(v31 - v30);
      *(_QWORD *)&v30 = *v4;
    v34 = (int)v33;
    ptr = v33;
    v44 = (int)v33;
    v35 = (int)v33 + 12 * v32;
    v45 = (char *)v33 + 12 * v32;
    if ( v30 != v31 )
      v34 = (int)v33;
      do
        v36 = *(_QWORD *)v30;
        v37 = *(_DWORD *)(v30 + 8);
        v30 += 12;
        *(_QWORD *)v34 = v36;
        *(_DWORD *)(v34 + 8) = v37;
        v34 += 12;
      while ( v31 != v30 );
    v44 = v34;
    *(_QWORD *)&v38 = *(_QWORD *)(v42 + 76);
    if ( v38 == v39 )
      std::vector<mce::RenderDeviceBase::AttributeList,std::allocator<mce::RenderDeviceBase::AttributeList>>::_M_emplace_back_aux<mce::RenderDeviceBase::AttributeList>(
        v41,
        (int)&ptr);
      if ( ptr )
        operator delete(ptr);
      *(_DWORD *)v38 = v33;
      ptr = 0;
      *(_DWORD *)(v38 + 4) = v34;
      v44 = 0;
      *(_DWORD *)(v38 + 8) = v35;
      v45 = 0;
      *(_DWORD *)(v42 + 76) += 12;
    result = ((signed int)((*(_QWORD *)(v42 + 72) >> 32) - *(_QWORD *)(v42 + 72)) >> 2) * v2 - 1;
  else
    result = ((v3 - *(_DWORD *)v41) >> 2) * v2;
  return result;
}


void __fastcall mce::_getFullPath(int *a1, int *a2)
{
  mce::_getFullPath(a1, a2);
}


void __fastcall mce::RenderStageWithDefaultBackBuffer::~RenderStageWithDefaultBackBuffer(mce::RenderStageWithDefaultBackBuffer *this)
{
  mce::RenderStageWithDefaultBackBuffer::~RenderStageWithDefaultBackBuffer(this);
}


int __fastcall mce::TextureOGL::bindTexture(mce::TextureOGL *this, mce::RenderContext *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r4@1
  mce::RenderContext *v5; // r8@1
  char *v6; // r5@1
  mce::TextureOGL *v7; // r6@1
  mce::TextureOGL *v8; // r0@1
  mce::TextureOGL **v9; // r5@1
  mce::TextureOGL *v10; // t1@1
  unsigned int v11; // r7@2
  int v12; // r3@5
  int v13; // r7@6
  int v14; // r0@10
  void (__fastcall *v15)(int, signed int, signed int); // r3@10
  signed int v16; // r2@10

  v4 = a3;
  v5 = a2;
  v6 = (char *)a2 + 4 * a3;
  v7 = this;
  v10 = (mce::TextureOGL *)*((_DWORD *)v6 + 33);
  v9 = (mce::TextureOGL **)(v6 + 132);
  v8 = v10;
  if ( v10 != v7 )
  {
    v11 = a3 + 33984;
    if ( *((_DWORD *)a2 + 68) != a3 + 33984 )
    {
      glad_glActiveTexture(a3 + 33984);
      *((_DWORD *)v5 + 68) = v11;
      v8 = *v9;
    }
    if ( v8 != v7 )
      glad_glBindTexture(*(_QWORD *)((char *)v7 + 44) >> 32, *(_QWORD *)((char *)v7 + 44));
      *v9 = v7;
      if ( v4 >= 8 )
        sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", v4, 8, v12);
      v13 = (int)v5 + 8 * v4;
      *(_DWORD *)(v13 + 288) = v4;
      *(_BYTE *)(v13 + 292) = 1;
      if ( *((_DWORD *)v7 + 6) == 1 )
        mce::TextureOGL::setFilteringMode(v7, v5, *(_BYTE *)(v13 + 294));
      if ( *(_BYTE *)(v13 + 295) )
      {
        if ( *(_BYTE *)(v13 + 295) != 1 )
        {
LABEL_13:
          *(_BYTE *)(v13 + 293) = 1;
          return j_j_j__ZNK3mce11TextureBase11bindTextureERNS_13RenderContextEjj(v7, v5, v4, v4);
        }
        glad_glTexParameteri(*((_DWORD *)v7 + 12), 10242, 10497);
        v14 = *((_DWORD *)v7 + 12);
        v15 = (void (__fastcall *)(int, signed int, signed int))glad_glTexParameteri;
        v16 = 10497;
      }
      else
        glad_glTexParameteri(*((_DWORD *)v7 + 12), 10242, 33071);
        v16 = 33071;
      v15(v14, 10243, v16);
      goto LABEL_13;
  }
  return j_j_j__ZNK3mce11TextureBase11bindTextureERNS_13RenderContextEjj(v7, v5, v4, v4);
}


int __fastcall mce::Math::lerpRotate(mce::Math *this, float _R1, float a3, float a4)
{
  int v8; // r4@1
  signed int v11; // r1@1
  float v12; // r0@1
  int v13; // r0@3
  float v16; // [sp+0h] [bp-18h]@3
  int v17; // [sp+4h] [bp-14h]@1

  __asm
  {
    VMOV            S16, R0
    VMOV            S0, R1
  }
  v8 = LODWORD(a3);
    VSUB.F32        S0, S0, S16
    VSTR            S0, [SP,#0x18+var_14]
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v17);
    VLDR            S0, =180.0
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  *(float *)&v17 = j_fmodf(_R0, 360.0);
  v11 = j_mce::operator<(v17, 0);
  v12 = *(float *)&v17;
  if ( v11 == 1 )
    v12 = COERCE_FLOAT(j_mce::operator+(v17, 1135869952));
    *(float *)&v17 = v12;
  v13 = j_mce::operator-(SLODWORD(v12), 1127481344);
  _R0 = j_mce::operator*(v8, v13);
    VMOV            S0, R0
    VADD.F32        S0, S0, S16
    VSTR            S0, [SP,#0x18+var_18]
  return *(_DWORD *)j_mce::Degree::asFloat((mce::Degree *)&v16);
}


signed int __fastcall mce::TextureHelper::channelsInTextureFormat(int a1)
{
  signed int result; // r0@3

  if ( a1 == 28 )
    goto LABEL_9;
  if ( a1 == 116 )
    return 3;
  if ( a1 == 87 )
LABEL_9:
    result = 4;
  else
    result = 0;
  return result;
}


int __fastcall mce::RenderContextBase::clearContextState(mce::RenderContextBase *this)
{
  mce::RenderContextBase *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+0h] [bp-30h]@1

  v1 = this;
  mce::ImmediateBuffer::ImmediateBuffer((mce::ImmediateBuffer *)&v3);
  mce::BufferOGL::operator=((int)v1 + 196, (int)&v3);
  mce::BufferOGL::~BufferOGL((mce::BufferOGL *)&v3);
  result = 0;
  *((_DWORD *)v1 + 46) = 0;
  *((_DWORD *)v1 + 47) = 0;
  *((_DWORD *)v1 + 48) = 0;
  return result;
}


signed int __fastcall mce::ShaderConstants::setTextureDimensions(signed int result, mce::RenderContext *a2, int _R2)
{
  int v3; // r12@1
  _DWORD *v10; // r4@2

  v3 = *(_DWORD *)(result + 16);
  __asm { VLDR            S0, [R2] }
  _R3 = *(_DWORD *)(v3 + 20);
  __asm
  {
    VLDR            S2, [R3]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    _LR = *(_DWORD *)(_R2 + 4);
    v10 = (_DWORD *)(_R3 + 4);
LABEL_6:
    __asm { VSTR            S0, [R3] }
    *v10 = _LR;
    *(_DWORD *)(_R3 + 8) = *(_DWORD *)(_R2 + 8);
    *(_BYTE *)(v3 + 17) = 1;
    return j_j_j__ZN3mce23ConstantBufferContainer4syncERNS_13RenderContextE(
             *(mce::ConstantBufferContainer **)(result + 4),
             a2);
  __asm { VLDR            S2, [R2,#4] }
  v10 = (_DWORD *)(_R3 + 4);
    VLDR            S4, [R3,#4]
    VMOV            LR, S2
    VCMPE.F32       S2, S4
    goto LABEL_6;
    VLDR            S2, [R3,#8]
    VLDR            S4, [R2,#8]
    VCMPE.F32       S4, S2
  return result;
}


int __fastcall mce::BufferBase::releaseBuffer(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)result = 3;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall mce::FrameBufferObjectOGL::clearColorAttachment(int a1, _DWORD *a2, int a3)
{
  int v3; // r6@1
  int v4; // r0@1

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
    mce::FrameBufferObjectOGL::clearFrameBufferInternal(v3, a2, *(_DWORD *)(v4 + 84), a3);
  return j_j_j__ZNK3mce21FrameBufferObjectBase20clearColorAttachmentERK5ColorPKNS_12ViewportInfoE();
}


int __fastcall mce::FrameBufferObjectOGL::bindFrameBuffer(mce::FrameBufferObjectOGL *this)
{
  mce::FrameBufferObjectOGL *v1; // r4@1
  int result; // r0@1
  char *v3; // r0@2
  int v4; // r4@2

  v1 = this;
  mce::FrameBufferObjectBase::bindFrameBuffer(this);
  glad_glBindFramebuffer(36160, *((_DWORD *)v1 + 11));
  result = *((_DWORD *)v1 + 7);
  if ( result )
  {
    v3 = mce::FrameBufferAttachmentBase::getFrameBufferAttachmentDescription((mce::FrameBufferAttachmentBase *)result);
    v4 = *((_DWORD *)v3 + 6);
    result = mce::RenderContextImmediate::get((mce::RenderContextImmediate *)v3);
    *(_DWORD *)(result + 116) = v4;
  }
  return result;
}


int __fastcall mce::ShaderConstantBase::ShaderConstantBase(int result)
{
  *(_DWORD *)result = &off_26E8D30;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_WORD *)(result + 16) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


unsigned int __fastcall mce::TextureContainer::getImage(mce::TextureContainer *this, unsigned int a2)
{
  return *(_DWORD *)this + 40 * a2;
}


int __fastcall mce::RenderContextStateBase::removeIfBound(int result, const mce::TextureBase *a2)
{
  if ( *(const mce::TextureBase **)(result + 132) == a2 )
    *(_DWORD *)(result + 132) = 0;
  if ( *(const mce::TextureBase **)(result + 136) == a2 )
    *(_DWORD *)(result + 136) = 0;
  if ( *(const mce::TextureBase **)(result + 140) == a2 )
    *(_DWORD *)(result + 140) = 0;
  if ( *(const mce::TextureBase **)(result + 144) == a2 )
    *(_DWORD *)(result + 144) = 0;
  if ( *(const mce::TextureBase **)(result + 148) == a2 )
    *(_DWORD *)(result + 148) = 0;
  if ( *(const mce::TextureBase **)(result + 152) == a2 )
    *(_DWORD *)(result + 152) = 0;
  if ( *(const mce::TextureBase **)(result + 156) == a2 )
    *(_DWORD *)(result + 156) = 0;
  if ( *(const mce::TextureBase **)(result + 160) == a2 )
    *(_DWORD *)(result + 160) = 0;
  return result;
}


int __fastcall mce::WorldConstantsHolographic::resetViewProjOverride(int result)
{
  *(_BYTE *)(result + 25) = 0;
  return result;
}


int __fastcall mce::Math::wrap(mce::Math *this, float a2, float a3)
{
  int result; // r0@3

  _R4 = a2;
  _R0 = j_fmodf(*(float *)&this, a2);
  __asm
  {
    VMOV            S2, R0
    VMOV            S0, R4
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VADD.F32        S0, S2, S0
  }
  if ( !(_NF ^ _VF) )
    __asm { VMOVGE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall mce::TextureGroup::getTexture(mce::TexturePtr *a1, mce::TextureGroup *a2, int a3)
{
  mce::TextureGroup::getTexture(a1, a2, a3);
}


int __fastcall mce::RenderMaterial::addState(int result, char a2)
{
  *(_DWORD *)(result + 32) |= 1 << (a2 & 0x1F);
  return result;
}


int __fastcall mce::FrameBufferObjectBase::FrameBufferObjectBase(mce::FrameBufferDescription *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1
  int v6; // r1@1

  v2 = a2;
  result = mce::FrameBufferDescription::FrameBufferDescription(a1);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  v4 = *(_QWORD *)v2;
  *(_QWORD *)(result + 8) = *(_QWORD *)(v2 + 8);
  *(_QWORD *)result = v4;
  *(_DWORD *)(result + 16) = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 16) = 0;
  v5 = *(_DWORD *)(result + 20);
  *(_DWORD *)(result + 20) = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 20) = v5;
  v6 = *(_DWORD *)(result + 24);
  *(_DWORD *)(result + 24) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v6;
  *(_BYTE *)(result + 40) = *(_BYTE *)(v2 + 40);
  return result;
}


char *__fastcall mce::TextureGroup::getTexturePair(mce::TextureGroup *this, const ResourceLocation *a2)
{
  mce::TextureGroup *v2; // r9@1
  char *v3; // r10@1
  char *v4; // r0@1
  const void **v5; // r8@1
  char *v6; // r4@1
  const void *v7; // r6@2
  char *v8; // r11@2
  size_t v9; // r5@2
  _DWORD *v10; // r0@4
  size_t v11; // r7@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r5@13
  unsigned int v16; // r6@13
  size_t v17; // r2@13
  int v18; // r0@15
  char *result; // r0@20

  v2 = this;
  v3 = (char *)this + 4;
  v4 = (char *)*((_DWORD *)this + 2);
  v5 = (const void **)a2;
  v6 = v3;
  if ( v4 )
  {
    v7 = *(const void **)a2;
    v8 = v3;
    v9 = *(_DWORD *)(*(_DWORD *)a2 - 12);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = (_DWORD *)*((_DWORD *)v6 + 4);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = (char *)*((_DWORD *)v6 + 2);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 == v3 )
    goto LABEL_24;
  v14 = (_DWORD *)*((_DWORD *)v6 + 4);
  v15 = *((_DWORD *)*v5 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v5 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v5, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v3;
LABEL_24:
    result = (char *)mce::TextureGroup::loadTexture(v2, (const ResourceLocation *)v5, 0);
  else
    result = v6 + 24;
  return result;
}


int __fastcall mce::RenderContextOGL::setViewport(int a1, int a2)
{
  _R4 = a2;
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
    VLDR            S4, [R4,#8]
    VLDR            S6, [R4,#0xC]
    VCVTR.S32.F32   S4, S4
    VCVTR.S32.F32   S6, S6
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S4
    VMOV            R1, S6
    VMOV            R2, S0
    VMOV            R3, S2
  }
  glad_glViewport(_R0, _R1, _R2, _R3);
  return glad_glDepthRangef(*(_QWORD *)(_R4 + 16), *(_QWORD *)(_R4 + 16) >> 32);
}


int __fastcall mce::FrameBufferObjectBase::FrameBufferObjectBase(mce::FrameBufferObjectBase *this)
{
  int result; // r0@1

  result = mce::FrameBufferDescription::FrameBufferDescription(this);
  *(_WORD *)(result + 40) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


mce::ImageBuffer *__fastcall mce::ImageBuffer::ImageBuffer(mce::ImageBuffer *this, const mce::ImageDescription *a2)
{
  mce::ImageBuffer *v2; // r4@1
  const mce::ImageDescription *v3; // r7@1
  char *v4; // r1@1
  int v5; // r3@1
  int v6; // r5@1
  int v7; // r6@1
  bool v8; // zf@1
  unsigned int v9; // r0@4
  int v10; // r1@4 OVERLAPPED
  int v11; // r2@4
  unsigned int v12; // r2@4

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 5) = 0;
  v4 = (char *)this + 20;
  *((_DWORD *)this + 8) = 1;
  *((_BYTE *)this + 36) = 0;
  v5 = *((_DWORD *)v3 + 1);
  v6 = *((_DWORD *)v3 + 2);
  v7 = *((_DWORD *)v3 + 3);
  *(_DWORD *)v4 = *(_DWORD *)v3;
  *((_DWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  *((_BYTE *)this + 36) = *((_BYTE *)v3 + 16);
  *((_DWORD *)this + 4) = j_mce::ImageDescription::getArraySize(v3);
  v8 = *(_DWORD *)v3 == 0;
  if ( !*(_DWORD *)v3 )
    v8 = *((_DWORD *)v3 + 1) == 0;
  if ( !v8 )
  {
    *((_DWORD *)v2 + 3) = j_mce::ImageDescription::getSubimageSize(v3);
    v9 = j_mce::ImageDescription::getStorageSize(v3);
    *(_QWORD *)&v10 = *(_QWORD *)v2;
    v12 = v11 - v10;
    if ( v9 <= v12 )
    {
      if ( v9 < v12 )
        *((_DWORD *)v2 + 1) = v9 + v10;
    }
    else
      j_std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v2, v9 - v12);
  }
  return v2;
}


void __fastcall mce::ShaderConstants::~ShaderConstants(mce::ShaderConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


void __fastcall mce::WorldConstants::init(mce::WorldConstants *this)
{
  mce::WorldConstants::init(this);
}


int __fastcall mce::TextureGroup::isLoaded(mce::TextureGroup *this, const ResourceLocation *a2, int a3)
{
  char *v3; // r10@1
  char *v4; // r0@1
  int v5; // r8@1
  const void **v6; // r9@1
  char *v7; // r4@1
  const void *v8; // r6@2
  char *v9; // r11@2
  size_t v10; // r5@2
  _DWORD *v11; // r0@4
  size_t v12; // r7@4
  size_t v13; // r2@4
  int v14; // r0@6
  int v15; // r6@12
  _DWORD *v16; // r1@13
  unsigned int v17; // r5@13
  unsigned int v18; // r7@13
  size_t v19; // r2@13
  int v20; // r0@15

  v3 = (char *)this + 4;
  v4 = (char *)*((_DWORD *)this + 2);
  v5 = a3;
  v6 = (const void **)a2;
  v7 = v3;
  if ( v4 )
  {
    v8 = *(const void **)a2;
    v9 = v3;
    v10 = *(_DWORD *)(*(_DWORD *)a2 - 12);
    do
    {
      v7 = v4;
      while ( 1 )
      {
        v11 = (_DWORD *)*((_DWORD *)v7 + 4);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = (char *)*((_DWORD *)v7 + 3);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v4 = (char *)*((_DWORD *)v7 + 2);
      v9 = v7;
    }
    while ( v4 );
  }
LABEL_12:
  v15 = 0;
  if ( v7 != v3 )
    v16 = (_DWORD *)*((_DWORD *)v7 + 4);
    v17 = *((_DWORD *)*v6 - 3);
    v18 = *(v16 - 3);
    v19 = *((_DWORD *)*v6 - 3);
    if ( v17 > v18 )
      v19 = *(v16 - 3);
    v20 = memcmp(*v6, v16, v19);
    if ( !v20 )
      v20 = v17 - v18;
    if ( v20 < 0 )
      v7 = v3;
    if ( v7 != v3 )
      v15 = 1;
      if ( !v5 )
        v15 = mce::Texture::isCreated((mce::Texture *)(v7 + 24));
  return v15;
}


int __fastcall mce::TextureContainer::TextureContainer(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 1;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 8;
  *(_BYTE *)(a1 + 52) = 0;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(a1 + 12),
    a2);
  return v2;
}


void __fastcall mce::MathUtility::getRotationFromNegZToVector(int a1, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S4, [R1,#8]
    VABS.F32        S6, S0
    VLDR            S10, =0.0001
    VABS.F32        S8, S4
    VLDR            S2, [R1,#4]
    VMUL.F32        S14, S4, S4
    VMUL.F32        S1, S2, S2
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S6, S10
    VCMPE.F32       S8, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VMUL.F32        S8, S6, S6
    __asm { VMOVGT.F32      S10, S4 }
    VMUL.F32        S12, S10, S10
    VADD.F32        S8, S12, S8
    VMUL.F32        S12, S0, S0
    VSQRT.F32       S8, S8
    VADD.F32        S12, S14, S12
    VMOV.F32        S14, #1.0
    VADD.F32        S12, S12, S1
    VLDR            S1, =0.69813
    VDIV.F32        S8, S14, S8
    VSQRT.F32       S12, S12
    VMUL.F32        S10, S10, S8
    VMUL.F32        S6, S6, S8
    VDIV.F32        S8, S14, S12
    VMUL.F32        S4, S10, S4
    VMUL.F32        S0, S6, S0
    VMUL.F32        S2, S8, S2
    VADD.F32        S0, S0, S4
    VCMPE.F32       S2, #0.0
    VMUL.F32        S12, S12, S1
    VMUL.F32        S0, S0, S8
    VLDR            S8, =1.5708
    VMUL.F32        S4, S0, S0
    VMUL.F32        S4, S4, S1
    VLDR            S1, =-0.87266
    VSUB.F32        S12, S12, S1
    VSUB.F32        S4, S1, S4
    VMOV.F32        S1, #-1.0
    VMUL.F32        S0, S4, S0
    VMOV.F32        S2, S1
    __asm { VMOVGT.F32      S2, S14 }
    VMUL.F32        S4, S12, S10
    VADD.F32        S0, S0, S8
    VADD.F32        S4, S4, S8
    VMUL.F32        S0, S0, S2
    __asm { VMOVGT.F32      S1, S14 }
    VSTR            S0, [R0]
    VMUL.F32        S2, S4, S1
    VSTR            S2, [R0,#4]
}


void __fastcall mce::TextureGroup::enableLRUCache(mce::TextureGroup *this, unsigned int a2)
{
  mce::TextureGroup *v2; // r4@1
  unsigned int v3; // r6@1
  void *v4; // r5@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  mce::LRUCache *v7; // r0@3
  mce::LRUCache *v8; // r0@4
  _DWORD *v9; // [sp+0h] [bp-20h]@1
  __int64 v10; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x40u);
  v5 = operator new(4u);
  HIDWORD(v6) = sub_1452540;
  *v5 = v2;
  LODWORD(v6) = sub_14525B0;
  v9 = v5;
  v10 = v6;
  mce::LRUCache::LRUCache((int)v4, v3, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  v7 = (mce::LRUCache *)*((_DWORD *)v2 + 16);
  *((_DWORD *)v2 + 16) = v4;
  if ( v7 )
  {
    v8 = mce::LRUCache::~LRUCache(v7);
    operator delete((void *)v8);
  }
}


int __fastcall mce::FrameBufferAttachmentBase::FrameBufferAttachmentBase(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r7@1
  int v13; // r3@1
  int v14; // r4@1
  int v15; // r6@1
  int v16; // r7@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  v3 = a2;
  *(_BYTE *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 6) = 0;
  v4 = mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentDescription *)(a1 + 12));
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(v3 + 8);
  v5 = *(_DWORD *)(v3 + 16);
  v6 = *(_DWORD *)(v3 + 20);
  v7 = *(_DWORD *)(v3 + 24);
  v8 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  v4 += 20;
  v9 = *(_DWORD *)(v3 + 36);
  v10 = *(_DWORD *)(v3 + 40);
  v11 = *(_DWORD *)(v3 + 44);
  v12 = *(_DWORD *)(v3 + 48);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v4 + 4) = v9;
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v11;
  *(_DWORD *)(v4 + 16) = v12;
  v13 = *(_DWORD *)(v3 + 56);
  v14 = *(_DWORD *)(v3 + 60);
  v15 = *(_DWORD *)(v3 + 64);
  v16 = *(_DWORD *)(v3 + 68);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 52);
  *(_DWORD *)(v4 + 4) = v13;
  *(_DWORD *)(v4 + 8) = v14;
  *(_DWORD *)(v4 + 12) = v15;
  *(_DWORD *)(v4 + 16) = v16;
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v3 + 72);
  *(_BYTE *)(v2 + 76) = *(_BYTE *)(v3 + 76);
  return v2;
}


int __fastcall mce::RenderMaterialGroup::resolveMaterialTextures(int result)
{
  int v1; // r4@1
  int i; // r5@1
  __int64 v3; // r0@3

  v1 = result;
  for ( i = *(_DWORD *)(result + 16); i; i = *(_DWORD *)i )
  {
    HIDWORD(v3) = *(_DWORD *)(v1 + 104);
    LODWORD(v3) = *(_DWORD *)(i + 8);
    result = mce::RenderMaterial::resolveTextures(v3);
  }
  return result;
}


int __fastcall mce::ShaderConstantInt4::syncUniform(mce::ShaderConstantInt4 *this, int a2, int a3)
{
  mce::ShaderConstantOGL *v3; // r5@1
  int v4; // r4@1

  v3 = this;
  v4 = a2;
  glad_glUniform4iv(a2, a3, *((_DWORD *)this + 5));
  return j_j_j__ZN3mce17ShaderConstantOGL11syncUniformEii(v3, v4, 1);
}


int __fastcall mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 1;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 8;
  *(_BYTE *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 1065353216;
  *(_DWORD *)(result + 52) = 1065353216;
  *(_DWORD *)(result + 56) = 0;
  *(_BYTE *)(result + 60) = 0;
  return result;
}


mce::TexturePtr *__fastcall mce::TextureGroup::_removeRef(mce::TextureGroup *this, mce::TexturePtr *a2)
{
  mce::TextureGroup *v2; // r9@1
  mce::TexturePtr *v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  mce::TexturePtr *result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 10);
  v5 = (unsigned int)a2;
  v6 = *((_DWORD *)v2 + 9);
  v20 = *((_DWORD *)v2 + 9);
  v8 = (unsigned int)a2 % v4;
  result = (mce::TexturePtr *)(v5 / v4);
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (mce::TexturePtr *)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = (mce::TexturePtr *)(v13 / v4);
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          operator delete(v15);
          result = (mce::TexturePtr *)(*((_DWORD *)v2 + 12) - 1);
          *((_DWORD *)v2 + 12) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *((_DWORD *)v2 + 9);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)((char *)v2 + 44) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


mce::Mesh *__fastcall mce::Mesh::Mesh(mce::Mesh *this)
{
  mce::Mesh *v1; // r4@1

  v1 = this;
  mce::Buffer::Buffer(this);
  mce::Buffer::Buffer((mce::Mesh *)((char *)v1 + 32));
  mce::VertexFormat::VertexFormat((mce::Mesh *)((char *)v1 + 64));
  *((_DWORD *)v1 + 24) = 0;
  *((_BYTE *)v1 + 92) = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  return v1;
}


int __fastcall mce::Math::wrapDegrees(mce::Math *this, float a2)
{
  signed int v8; // r1@1
  int v9; // r0@1
  int v11; // [sp+0h] [bp-10h]@3
  float v12; // [sp+4h] [bp-Ch]@1

  v12 = *(float *)&this;
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v12);
  __asm
  {
    VLDR            S0, =180.0
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v12 = j_fmodf(_R0, 360.0);
  v8 = j_mce::operator<(SLODWORD(v12), 0);
  v9 = LODWORD(v12);
  if ( v8 == 1 )
    v9 = j_mce::operator+(SLODWORD(v12), 1135869952);
    v12 = *(float *)&v9;
  v11 = j_mce::operator-(v9, 1127481344);
  return *(_DWORD *)j_mce::Degree::asFloat((mce::Degree *)&v11);
}


signed int __fastcall mce::UniformMetaData::getElementsExtent(mce::UniformMetaData *this)
{
  signed int result; // r0@1

  result = *(_DWORD *)this;
  if ( !result )
    result = 1;
  return result;
}


int __fastcall mce::QuadIndexBuffer::destroyInstance(mce::QuadIndexBuffer *this)
{
  int result; // r0@1

  result = mce::QuadIndexBuffer::instance;
  mce::QuadIndexBuffer::instance = 0;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall mce::RenderDeviceBase::getAttributeList(mce::RenderDeviceBase *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r2@1

  v2 = *((_QWORD *)this + 9);
  v3 = -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2);
  if ( v3 <= a2 )
    sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", a2, v3, v2);
  return v2 + 12 * a2;
}


char *__fastcall mce::ShaderProgramOGL::getUniformNames(mce::ShaderProgramOGL *this)
{
  return (char *)this + 20;
}


char *__fastcall mce::Camera::getUpVector(mce::Camera *this)
{
  return (char *)this + 124;
}


int __fastcall mce::FrameBufferDescription::FrameBufferDescription(int result, const mce::TextureDescription *a2)
{
  *(_QWORD *)result = 1LL;
  *(_QWORD *)result = *((_QWORD *)a2 + 3);
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *((_DWORD *)a2 + 1);
  return result;
}


void __fastcall mce::TexturePtr::clone(mce::TexturePtr *this, int a2)
{
  mce::TexturePtr::clone(this, a2);
}


int __fastcall mce::ShaderBase::ShaderBase(int result, mce::ShaderProgram *a2, __int64 a3)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = a2;
  *(_QWORD *)(result + 8) = a3;
  *(_BYTE *)(result + 16) = 0;
  return result;
}


void __fastcall mce::Degree::Degree(int a1, int _R1)
{
  mce::Degree::Degree(a1, _R1);
}


int __fastcall mce::WorldConstantsHolographic::_setConstantsForTextureDrawing_DualPass(int a1, int a2, int a3, int a4)
{
  MatrixStack *v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r11@1
  __int64 v9; // kr00_8@4
  int v10; // ST14_4@4
  int v11; // ST10_4@4
  int v12; // ST0C_4@4
  int v13; // ST08_4@4
  __int64 v14; // ST00_8@4
  __int64 v15; // r0@4
  int v16; // r2@4
  int v17; // r7@4
  __int64 v18; // r8@4
  int v19; // r10@4
  int v20; // r11@4
  int v21; // r3@4
  int v22; // r11@4
  __int64 v23; // kr08_8@4
  int v24; // ST14_4@4
  int v25; // ST10_4@4
  int v26; // ST0C_4@4
  int v27; // ST08_4@4
  __int64 v28; // kr10_8@4
  int v29; // lr@4
  __int64 v30; // kr18_8@4
  __int64 v31; // kr20_8@4
  int v32; // r0@4
  int v33; // r4@4
  int result; // r0@4
  int v35; // r1@4
  int v36; // [sp+18h] [bp-F0h]@2
  int v37; // [sp+1Ch] [bp-ECh]@1
  __int64 v38; // [sp+20h] [bp-E8h]@4
  __int64 v39; // [sp+28h] [bp-E0h]@4
  __int64 v40; // [sp+30h] [bp-D8h]@4
  __int64 v41; // [sp+38h] [bp-D0h]@4
  int v42; // [sp+40h] [bp-C8h]@4
  int v43; // [sp+44h] [bp-C4h]@4
  __int64 v44; // [sp+48h] [bp-C0h]@4
  int v45; // [sp+50h] [bp-B8h]@4
  int v46; // [sp+54h] [bp-B4h]@4
  int v47; // [sp+58h] [bp-B0h]@4
  int v48; // [sp+5Ch] [bp-ACh]@4
  __int64 v49; // [sp+60h] [bp-A8h]@1
  __int64 v50; // [sp+68h] [bp-A0h]@1
  __int64 v51; // [sp+70h] [bp-98h]@1
  __int64 v52; // [sp+78h] [bp-90h]@1
  int v53; // [sp+80h] [bp-88h]@1
  int v54; // [sp+84h] [bp-84h]@1
  __int64 v55; // [sp+88h] [bp-80h]@1
  int v56; // [sp+90h] [bp-78h]@1
  int v57; // [sp+94h] [bp-74h]@1
  int v58; // [sp+98h] [bp-70h]@1
  int v59; // [sp+9Ch] [bp-6Ch]@1
  __int64 v60; // [sp+A4h] [bp-64h]@2
  __int64 v61; // [sp+ACh] [bp-5Ch]@2
  __int64 v62; // [sp+B4h] [bp-54h]@2
  __int64 v63; // [sp+BCh] [bp-4Ch]@2
  int v64; // [sp+C4h] [bp-44h]@2
  int v65; // [sp+C8h] [bp-40h]@2
  __int64 v66; // [sp+CCh] [bp-3Ch]@2
  int v67; // [sp+D4h] [bp-34h]@2
  int v68; // [sp+D8h] [bp-30h]@2
  int v69; // [sp+DCh] [bp-2Ch]@2
  int v70; // [sp+E0h] [bp-28h]@2

  v4 = (MatrixStack *)a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v37 = MatrixStack::top((MatrixStack *)(a2 + 32));
  v8 = MatrixStack::top(v4);
  v49 = 1065353216LL;
  LODWORD(v51) = 0;
  v50 = 0LL;
  HIDWORD(v52) = 0;
  v53 = 0;
  *(__int64 *)((char *)&v51 + 4) = 1065353216LL;
  v54 = 0;
  v55 = 1065353216LL;
  v57 = 0;
  v58 = 0;
  v56 = 0;
  v59 = 1065353216;
  if ( v6 == 1 )
  {
    v36 = v5;
    glm::detail::operator*<float>((int)&v60, v5 + 284, v8);
    v49 = v60;
    v50 = v61;
    v51 = v62;
    v52 = v63;
    v53 = v64;
    v54 = v65;
    v55 = v66;
    v56 = v67;
    v57 = v68;
    v58 = v69;
    v59 = v70;
    glm::detail::operator*<float>((int)&v60, v5 + 348, v8);
  }
  else
  glm::detail::operator*<float>((int)&v60, v37, (int)&v49);
  _aeabi_memclr8(&v38, 56);
  v38 = v60;
  v39 = v61;
  v40 = v62;
  v41 = v63;
  v42 = v64;
  v43 = v65;
  v44 = v66;
  v45 = v67;
  v46 = v68;
  v47 = v69;
  v48 = v70;
  glm::detail::operator*<float>((int)&v60, (int)&v38, v7);
  v9 = v61;
  v10 = v70;
  v11 = v69;
  v12 = v68;
  v13 = v67;
  v14 = v66;
  v15 = v63;
  v16 = v64;
  v17 = v65;
  v18 = v62;
  v19 = *(_DWORD *)(v36 + 8);
  v20 = *(_DWORD *)(v19 + 20);
  *(_QWORD *)v20 = v60;
  *(_QWORD *)(v20 + 8) = v9;
  v21 = v20 + 24;
  *(_QWORD *)(v20 + 16) = v18;
  *(_QWORD *)v21 = v15;
  *(_DWORD *)(v21 + 8) = v16;
  *(_DWORD *)(v21 + 12) = v17;
  *(_QWORD *)(v20 + 40) = v14;
  *(_DWORD *)(v20 + 48) = v13;
  *(_DWORD *)(v20 + 52) = v12;
  *(_DWORD *)(v20 + 56) = v11;
  *(_DWORD *)(v20 + 60) = v10;
  *(_BYTE *)(v19 + 17) = 1;
  LODWORD(v15) = *(_DWORD *)(v36 + 12);
  HIDWORD(v15) = *(_DWORD *)(v15 + 20);
  *(_QWORD *)HIDWORD(v15) = *(_QWORD *)v7;
  *(_QWORD *)(HIDWORD(v15) + 8) = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(HIDWORD(v15) + 16) = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(HIDWORD(v15) + 24) = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(HIDWORD(v15) + 32) = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(HIDWORD(v15) + 40) = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(HIDWORD(v15) + 48) = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(HIDWORD(v15) + 56) = *(_QWORD *)(v7 + 56);
  *(_BYTE *)(v15 + 17) = 1;
  v22 = *(_DWORD *)(v36 + 16);
  glm::detail::operator*<float>((int)&v60, (int)&v49, v7);
  v23 = v61;
  v24 = v70;
  v25 = v69;
  v26 = v68;
  v27 = v67;
  HIDWORD(v14) = HIDWORD(v66);
  v28 = *(_QWORD *)&v65;
  v30 = v62;
  v31 = v63;
  v29 = v64;
  v32 = *(_DWORD *)(v22 + 20);
  *(_QWORD *)v32 = v60;
  *(_QWORD *)(v32 + 8) = v23;
  v33 = v32 + 16;
  *(_QWORD *)v33 = v30;
  *(_QWORD *)(v33 + 8) = v31;
  *(_DWORD *)(v33 + 16) = v29;
  *(_QWORD *)(v32 + 36) = v28;
  *(_DWORD *)(v32 + 44) = HIDWORD(v14);
  *(_DWORD *)(v32 + 48) = v27;
  *(_DWORD *)(v32 + 52) = v26;
  *(_DWORD *)(v32 + 56) = v25;
  *(_DWORD *)(v32 + 60) = v24;
  *(_BYTE *)(v22 + 17) = 1;
  result = *(_DWORD *)(v36 + 20);
  v35 = *(_DWORD *)(result + 20);
  *(_DWORD *)v35 = *(_DWORD *)v37;
  *(_DWORD *)(v35 + 4) = *(_DWORD *)(v37 + 4);
  *(_DWORD *)(v35 + 8) = *(_DWORD *)(v37 + 8);
  *(_DWORD *)(v35 + 12) = *(_DWORD *)(v37 + 12);
  *(_DWORD *)(v35 + 16) = *(_DWORD *)(v37 + 16);
  *(_DWORD *)(v35 + 20) = *(_DWORD *)(v37 + 20);
  *(_DWORD *)(v35 + 24) = *(_DWORD *)(v37 + 24);
  *(_DWORD *)(v35 + 28) = *(_DWORD *)(v37 + 28);
  *(_DWORD *)(v35 + 32) = *(_DWORD *)(v37 + 32);
  *(_DWORD *)(v35 + 36) = *(_DWORD *)(v37 + 36);
  *(_DWORD *)(v35 + 40) = *(_DWORD *)(v37 + 40);
  *(_DWORD *)(v35 + 44) = *(_DWORD *)(v37 + 44);
  *(_DWORD *)(v35 + 48) = *(_DWORD *)(v37 + 48);
  *(_DWORD *)(v35 + 52) = *(_DWORD *)(v37 + 52);
  *(_DWORD *)(v35 + 56) = *(_DWORD *)(v37 + 56);
  *(_DWORD *)(v35 + 60) = *(_DWORD *)(v37 + 60);
  *(_BYTE *)(result + 17) = 1;
  return result;
}


char *__fastcall mce::ConstantBufferMetaDataManager::allocateConstantBufferContainers(mce::ConstantBufferMetaDataManager *this, mce::GlobalConstantBufferManager *a2)
{
  mce::ConstantBufferMetaDataManager *v2; // r6@1
  mce::GlobalConstantBufferManager *v3; // r10@1
  char *result; // r0@1
  int i; // r5@1
  int v6; // r8@1
  __int64 v7; // r0@2
  int v8; // r7@3
  mce::AlignmentHelper *v9; // r0@5
  mce::ConstantBufferContainer *v10; // r6@5
  const mce::UniformMetaData *v11; // r4@5
  const mce::UniformMetaData *j; // r7@5

  v2 = this;
  v3 = a2;
  result = std::vector<mce::ConstantBufferContainer,std::allocator<mce::ConstantBufferContainer>>::reserve(
             (int)a2,
             (signed int)((*(_QWORD *)this >> 32) - *(_QWORD *)this) >> 4);
  v6 = *(_QWORD *)v2 >> 32;
  for ( i = *(_QWORD *)v2; i != v6; i += 16 )
  {
    v7 = *(_QWORD *)((char *)v3 + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      j__ZNSt6vectorIN3mce23ConstantBufferContainerESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v3);
      v8 = *((_DWORD *)v3 + 1);
    }
    else
      mce::ConstantBufferContainer::ConstantBufferContainer((mce::ConstantBufferContainer *)v7);
      v8 = *((_DWORD *)v3 + 1) + 44;
      *((_DWORD *)v3 + 1) = v8;
    v9 = mce::ConstantBufferMetaData::getRequiredSpaceForUniforms((mce::ConstantBufferMetaData *)i);
    v10 = (mce::ConstantBufferContainer *)(v8 - 44);
    mce::ConstantBufferContainerBase::reserveMemoryForShaderConstants(
      (mce::ConstantBufferContainerBase *)(v8 - 44),
      -858993459 * ((signed int)((*(_QWORD *)(i + 4) >> 32) - *(_QWORD *)(i + 4)) >> 2),
      (unsigned int)v9);
    EntityInteraction::setInteractText((int *)(v8 - 8), (int *)i);
    v11 = (const mce::UniformMetaData *)(*(_QWORD *)(i + 4) >> 32);
    for ( j = (const mce::UniformMetaData *)*(_QWORD *)(i + 4); v11 != j; j = (const mce::UniformMetaData *)((char *)j + 20) )
      mce::ConstantBufferContainer::registerReflectedShaderParameter(v10, j);
    result = (char *)mce::ConstantBufferContainer::finalizeConstantBufferLayout(v10);
  }
  return result;
}


int __fastcall mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26E8B4C;
  return result;
}


mce::RenderMaterialGroup *__fastcall mce::RenderMaterialGroup::RenderMaterialGroup(mce::RenderMaterialGroup *this)
{
  mce::RenderMaterialGroup *v1; // r4@1
  double v2; // r0@1
  double v3; // r0@1
  int v4; // r7@3
  void *v5; // r6@3
  double v6; // r0@4
  int v7; // r7@6
  void *v8; // r6@6
  unsigned int v9; // r0@7
  int v10; // r7@9
  void *v11; // r6@9

  v1 = this;
  AppPlatformListener::AppPlatformListener(this);
  *(_DWORD *)v1 = &off_26DCCA0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 1065353216;
  *((_DWORD *)v1 + 7) = 0;
  LODWORD(v2) = (char *)v1 + 24;
  v3 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v2)));
  *((_DWORD *)v1 + 3) = LODWORD(v3);
  if ( LODWORD(v3) == 1 )
  {
    *((_DWORD *)v1 + 8) = 0;
    v5 = (char *)v1 + 32;
  }
  else
    if ( LODWORD(v3) >= 0x40000000 )
      sub_119C874();
    v4 = 4 * LODWORD(v3);
    v5 = operator new(4 * LODWORD(v3));
    _aeabi_memclr4(v5, v4);
  *((_DWORD *)v1 + 2) = v5;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 12) = (char *)v1 + 40;
  *((_DWORD *)v1 + 13) = (char *)v1 + 40;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 1065353216;
  LODWORD(v3) = (char *)v1 + 76;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v6 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v3)));
  *((_DWORD *)v1 + 16) = LODWORD(v6);
  if ( LODWORD(v6) == 1 )
    *((_DWORD *)v1 + 21) = 0;
    v8 = (char *)v1 + 84;
    if ( LODWORD(v6) >= 0x40000000 )
    v7 = 4 * LODWORD(v6);
    v8 = operator new(4 * LODWORD(v6));
    _aeabi_memclr4(v8, v7);
  *((_DWORD *)v1 + 15) = v8;
  *((_DWORD *)v1 + 22) = &unk_28898CC;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  *((_BYTE *)v1 + 100) = 0;
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 31) = 1065353216;
  LODWORD(v6) = (char *)v1 + 124;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v9 = sub_119C844(v6);
  *((_DWORD *)v1 + 28) = v9;
  if ( v9 == 1 )
    *((_DWORD *)v1 + 33) = 0;
    v11 = (char *)v1 + 132;
    if ( v9 >= 0x40000000 )
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *((_DWORD *)v1 + 27) = v11;
  *((_DWORD *)v1 + 34) = 0;
  *((_DWORD *)v1 + 35) = 0;
  *((_DWORD *)v1 + 36) = 0;
  return v1;
}


void __fastcall mce::ShaderConstantMatrix3x3::~ShaderConstantMatrix3x3(mce::ShaderConstantMatrix3x3 *this)
{
  mce::ShaderConstantMatrix3x3::~ShaderConstantMatrix3x3(this);
}


float __fastcall mce::Math::initMth(mce::Math *this)
{
  float *v6; // r4@1
  float result; // r0@2

  _R5 = 0;
  __asm { VLDR            S16, =0.000095874 }
  v6 = (float *)mce::Math::mSin;
  do
  {
    __asm
    {
      VMOV            S0, R5
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S16
      VMOV            R0, S0
    }
    result = j_sinf(_R0);
    ++_R5;
    *v6 = result;
    ++v6;
  }
  while ( _R5 != 0x10000 );
  return result;
}


int __fastcall mce::SamplerStateOGL::bindSamplerState(mce::SamplerStateOGL *this, mce::RenderContext *a2, bool a3, int a4)
{
  mce::SamplerStateOGL *v4; // r5@1
  mce::RenderContext *v5; // r4@1
  unsigned int v6; // r6@1
  char *v7; // r1@3
  unsigned int v8; // r0@3
  char *v9; // r8@3
  int v10; // r2@3
  bool v11; // zf@3
  unsigned int v12; // r1@9
  mce::TextureBase *v13; // r7@12
  int v14; // r0@13
  __int16 v15; // r1@13

  v4 = this;
  v5 = a2;
  v6 = *((_WORD *)this + 4);
  if ( v6 >= 8 )
    sub_21E5B04("array::at: __n (which is %zu) >= _Nm (which is %zu)", *((_WORD *)this + 4), 8, a4);
  if ( *((_DWORD *)a2 + v6 + 33) )
  {
    v7 = (char *)a2 + 8 * v6;
    v8 = *(_WORD *)this;
    v9 = v7 + 294;
    v10 = (unsigned __int8)v7[294];
    v11 = v10 == (unsigned __int8)v8;
    if ( v10 == (unsigned __int8)v8 )
      v11 = (unsigned __int8)v7[295] == v8 >> 8;
    if ( !v11 || v7[293] )
    {
      if ( *((_DWORD *)v5 + 68) == v6 + 33984 )
      {
        v12 = v6;
      }
      else
        glad_glActiveTexture(v6 + 33984);
        *((_DWORD *)v5 + 68) = v6 + 33984;
        LOBYTE(v8) = *(_BYTE *)v4;
        v12 = *((_WORD *)v4 + 4);
      v13 = (mce::TextureBase *)*((_DWORD *)v5 + v12 + 33);
      mce::TextureOGL::setFilteringMode(v13, v5, (unsigned __int8)v8);
      mce::TextureOGL::setWrappingMode((int)v13, *((_BYTE *)v4 + 1));
    }
  }
  else
    v9 = (char *)a2 + 8 * v6 + 294;
  v14 = (int)v5 + 8 * v6;
  *(_BYTE *)(v14 + 293) = 0;
  v15 = *(_WORD *)v4;
  *v9 = *(_WORD *)v4;
  *(_BYTE *)(v14 + 295) = HIBYTE(v15);
  return j_j_j__ZNK3mce16SamplerStateBase16bindSamplerStateERNS_13RenderContextE(v4, v5);
}


void __fastcall mce::MultisampledRenderStageWithFrameBufferObject::~MultisampledRenderStageWithFrameBufferObject(mce::MultisampledRenderStageWithFrameBufferObject *this)
{
  mce::MultisampledRenderStageWithFrameBufferObject::~MultisampledRenderStageWithFrameBufferObject(this);
}


int __fastcall mce::TextureGroup::reloadGroup(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 44); i; i = *(_DWORD *)i )
    result = (*(int (**)(void))(**(_DWORD **)(i + 4) + 8))();
  return result;
}


signed int __fastcall mce::operator<(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S2, R0 }
  result = 0;
  __asm
  {
    VMOV            S0, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int __fastcall mce::RenderMaterialGroup::_fireGroupDestroyed(mce::RenderMaterialGroup *this)
{
  int result; // r0@1
  int v2; // r2@2

  for ( result = *((_DWORD *)this + 17); result; result = *(_DWORD *)result )
  {
    v2 = *(_DWORD *)(result + 4);
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
  }
  return result;
}


int __fastcall mce::FrameBufferObject::discardFrameBuffer(int a1, int a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return mce::FrameBufferObjectOGL::discardFrameBuffer(a1, 1, (int)&v3);
}


void __fastcall mce::getPathWithPack(const void **a1, int *a2, const void **a3)
{
  int *v3; // r5@1
  const void **v4; // r7@1
  const void **v5; // r4@1
  _BYTE *v6; // r0@1
  int *v7; // r0@1
  _BYTE *v8; // r6@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  unsigned int v11; // r3@1
  __int64 v12; // kr00_8@2
  unsigned int v13; // r1@2
  const void **v14; // r0@4
  void *v15; // r0@6
  void *v16; // r0@7
  char *v17; // r0@8
  void *v18; // r0@9
  void *v19; // r0@10
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  unsigned int *v22; // r2@16
  signed int v23; // r1@18
  unsigned int *v24; // r2@20
  signed int v25; // r1@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  unsigned int *v28; // r2@28
  signed int v29; // r1@30
  int v30; // [sp+4h] [bp-2Ch]@2
  int v31; // [sp+8h] [bp-28h]@1
  char *v32; // [sp+Ch] [bp-24h]@1
  unsigned int v33; // [sp+10h] [bp-20h]@1
  int v34; // [sp+14h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = sub_119E224(a2, 47, 0xFFFFFFFF);
  v7 = (int *)sub_119C8C4((void **)&v34, v3, 0, (unsigned int)v6);
  v8 = sub_119E224(v7, 47, 0xFFFFFFFF);
  sub_119C8C4((void **)&v31, v3, 0, (unsigned int)v8);
  v9 = sub_119C894((const void **)&v31, "/", 1u);
  v32 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_119C8A4((const void **)&v32, v4);
  v33 = (unsigned int)*v10;
  *v10 = &unk_28898CC;
  v11 = *(_DWORD *)(*v3 - 12);
  if ( v11 < (unsigned int)v8 )
    sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", (int)v8, v11);
  sub_119C8C4((void **)&v30, v3, (unsigned int)v8, 0xFFFFFFFF);
  v12 = *(_QWORD *)(v33 - 12);
  v13 = *(_DWORD *)(v30 - 12) + v12;
  if ( v13 > HIDWORD(v12) && v13 <= *(_DWORD *)(v30 - 8) )
    v14 = sub_119C984((const void **)&v30, 0, v33, (_BYTE *)v12);
  else
    v14 = sub_119C8A4((const void **)&v33, (const void **)&v30);
  *v5 = *v14;
  *v14 = &unk_28898CC;
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  }
  v16 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v33 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v32 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
}


int __fastcall mce::TextureGroup::addEmptyTexture(mce::TextureGroup *this, const ResourceLocation *a2, int a3, int a4)
{
  int *v5; // [sp+4h] [bp-24h]@1
  int *v6; // [sp+8h] [bp-20h]@1
  const ResourceLocation *v7; // [sp+Ch] [bp-1Ch]@1
  int v8; // [sp+10h] [bp-18h]@1
  int v9; // [sp+18h] [bp-10h]@1
  int v10; // [sp+1Ch] [bp-Ch]@1

  v9 = a4;
  v10 = a3;
  v5 = &v9;
  v6 = &v10;
  v7 = a2;
  std::_Rb_tree<ResourceLocation,std::pair<ResourceLocation const,TexturePair>,std::_Select1st<std::pair<ResourceLocation const,TexturePair>>,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,TexturePair>>>::_M_emplace_unique<std::piecewise_construct_t const&,std::tuple<ResourceLocation const&>,std::tuple<int &,int &>>(
    (int)&v8,
    (int)this,
    (int)&unk_262D3E0,
    (int *)&v7,
    (__int64 *)&v5);
  return TexturePair::load((TexturePair *)(v8 + 24));
}


int __fastcall mce::_isMaterialGroup(mce *this, const Json::Value *a2)
{
  signed int v2; // r4@1
  int v4; // [sp+0h] [bp-18h]@1

  Json::Value::get(
    (Json::Value *)&v4,
    (const char *)this,
    (const Json::Value *)"vertexShader",
    (const Json::Value *)&Json::Value::null);
  v2 = Json::Value::isString((Json::Value *)&v4);
  Json::Value::~Value((Json::Value *)&v4);
  return v2 ^ 1;
}


void __fastcall mce::_appendHLSL(int *a1)
{
  int *v1; // r4@1
  _BYTE *v2; // r0@4
  _BYTE *v3; // r0@5
  signed int v4; // r6@6
  void *v5; // r0@6
  unsigned int *v6; // r2@10
  signed int v7; // r1@12
  unsigned int *v8; // r2@14
  signed int v9; // r1@16
  int v10; // [sp+4h] [bp-24h]@6
  _BYTE *v11; // [sp+Ch] [bp-1Ch]@2

  v1 = a1;
  if ( *(_DWORD *)(*a1 - 12) )
  {
    sub_21E94B4((void **)&v11, "/hlsl");
    if ( *(_DWORD *)(*v1 - 12) >= 2u && sub_21E76A0(v1, v11, 0, *((_DWORD *)v11 - 3)) == -1 )
    {
      v2 = sub_21E78D0(v1, 47, 0xFFFFFFFF);
      sub_21E82D8((const void **)v1, (size_t)v2, (unsigned int)v11, *((_BYTE **)v11 - 3));
    }
    v3 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v11 - 4);
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
        j_j_j_j__ZdlPv_9(v3);
    sub_21E94B4((void **)&v10, ".hlsl");
    v4 = Util::endsWith(v1, (const void **)&v10);
    v5 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    if ( !v4 )
      sub_21E7408((const void **)v1, ".hlsl", 5u);
  }
}


char *__fastcall mce::WorldConstantsHolographic::getLeftShiftMat(mce::WorldConstantsHolographic *this)
{
  return (char *)this + 284;
}


int __fastcall mce::WorldConstantsHolographic::_setConstantsForHolographicDrawing_DualPass(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  __int64 v5; // r1@1
  int v6; // r5@1
  __int64 v7; // kr00_8@2
  int v8; // r0@2
  int v9; // r1@2
  int v10; // r5@2
  int v11; // t1@2
  int v12; // r0@2
  int v13; // r1@2
  int v14; // r3@2
  __int64 *v15; // r2@2
  __int64 *v16; // r0@2
  int v17; // r11@2
  int v18; // lr@3
  __int64 v19; // kr08_8@3
  int v20; // r0@3
  int v21; // r1@3
  int v22; // r0@3
  int v23; // r3@3
  int v24; // r9@4
  int v25; // r6@4
  int v26; // r7@4
  int v27; // ST10_4@4
  int v28; // ST0C_4@4
  int v29; // ST08_4@4
  int v30; // ST04_4@4
  int v31; // ST00_4@4
  int v32; // r10@4
  int v33; // r5@4
  int v34; // lr@4
  int v35; // r12@4
  int v36; // r3@4
  int v37; // r2@4
  int v38; // r1@4
  int v39; // r0@4
  int result; // r0@4
  int v41; // r1@4
  int v42; // [sp+14h] [bp-ECh]@2
  __int64 v43; // [sp+18h] [bp-E8h]@1
  int v44; // [sp+20h] [bp-E0h]@1
  int v45; // [sp+24h] [bp-DCh]@1
  int v46; // [sp+28h] [bp-D8h]@1
  int v47; // [sp+2Ch] [bp-D4h]@1
  int v48; // [sp+30h] [bp-D0h]@1
  int v49; // [sp+34h] [bp-CCh]@1
  int v50; // [sp+38h] [bp-C8h]@1
  __int64 v51; // [sp+3Ch] [bp-C4h]@1
  int v52; // [sp+44h] [bp-BCh]@1
  int v53; // [sp+48h] [bp-B8h]@1
  int v54; // [sp+4Ch] [bp-B4h]@1
  int v55; // [sp+50h] [bp-B0h]@1
  int v56; // [sp+54h] [bp-ACh]@1
  __int64 v57; // [sp+58h] [bp-A8h]@1
  int v58; // [sp+60h] [bp-A0h]@1
  int v59; // [sp+64h] [bp-9Ch]@1
  int v60; // [sp+68h] [bp-98h]@1
  int v61; // [sp+6Ch] [bp-94h]@1
  int v62; // [sp+70h] [bp-90h]@1
  int v63; // [sp+74h] [bp-8Ch]@1
  int v64; // [sp+78h] [bp-88h]@1
  __int64 v65; // [sp+7Ch] [bp-84h]@1
  int v66; // [sp+84h] [bp-7Ch]@1
  int v67; // [sp+88h] [bp-78h]@1
  int v68; // [sp+8Ch] [bp-74h]@1
  int v69; // [sp+90h] [bp-70h]@1
  int v70; // [sp+94h] [bp-6Ch]@1
  __int64 v71; // [sp+9Ch] [bp-64h]@1
  int v72; // [sp+A4h] [bp-5Ch]@1
  int v73; // [sp+A8h] [bp-58h]@1
  int v74; // [sp+ACh] [bp-54h]@1
  int v75; // [sp+B0h] [bp-50h]@1
  int v76; // [sp+B4h] [bp-4Ch]@1
  int v77; // [sp+B8h] [bp-48h]@1
  int v78; // [sp+BCh] [bp-44h]@1
  __int64 v79; // [sp+C0h] [bp-40h]@1
  int v80; // [sp+C8h] [bp-38h]@1
  int v81; // [sp+CCh] [bp-34h]@1
  int v82; // [sp+D0h] [bp-30h]@1
  int v83; // [sp+D4h] [bp-2Ch]@1
  int v84; // [sp+D8h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  HIDWORD(v5) = 1065353216;
  LODWORD(v5) = 0;
  v6 = a1;
  v57 = 1065353216LL;
  v59 = 0;
  v60 = 0;
  v58 = 0;
  v63 = 0;
  v64 = 0;
  v61 = 1065353216;
  v62 = 0;
  v65 = v5;
  v68 = 0;
  v69 = 0;
  v66 = 0;
  v67 = 0;
  v70 = 1065353216;
  glm::detail::operator*<float>((int)&v71, a1 + 412, v4);
  _aeabi_memclr8(&v43, 56);
  v43 = v71;
  v44 = v72;
  v45 = v73;
  v46 = v74;
  v47 = v75;
  v48 = v76;
  v49 = v77;
  v50 = v78;
  v51 = v79;
  v52 = v80;
  v53 = v81;
  v54 = v82;
  v55 = v83;
  v56 = v84;
  if ( v3 == 1 )
  {
    v42 = v6;
    glm::detail::operator*<float>((int)&v71, v6 + 28, (int)&v43);
    v7 = *(_QWORD *)&v72;
    v57 = v71;
    v58 = v72;
    v59 = v73;
    v60 = v74;
    v61 = v75;
    v62 = v76;
    v63 = v77;
    v64 = v78;
    v65 = v79;
    v66 = v80;
    v67 = v81;
    v68 = v82;
    v69 = v83;
    v70 = v84;
    v8 = *(_DWORD *)(v6 + 16);
    v9 = *(_DWORD *)(v8 + 20);
    *(_QWORD *)v9 = v71;
    *(_QWORD *)(v9 + 8) = v7;
    *(_DWORD *)(v9 + 16) = v60;
    *(_DWORD *)(v9 + 20) = v61;
    *(_DWORD *)(v9 + 24) = v62;
    *(_DWORD *)(v9 + 28) = v63;
    *(_DWORD *)(v9 + 32) = v64;
    *(_QWORD *)(v9 + 36) = v65;
    *(_DWORD *)(v9 + 44) = v66;
    *(_DWORD *)(v9 + 48) = v67;
    *(_DWORD *)(v9 + 52) = v68;
    *(_DWORD *)(v9 + 56) = v69;
    *(_DWORD *)(v9 + 60) = v70;
    *(_BYTE *)(v8 + 17) = 1;
    v11 = *(_DWORD *)(v6 + 156);
    v10 = v6 + 156;
    v12 = *(_DWORD *)(v10 - 136);
    v13 = v10;
    v14 = *(_DWORD *)(v12 + 20);
    *(_DWORD *)v14 = v11;
    *(_DWORD *)(v14 + 4) = *(_DWORD *)(v10 + 4);
    *(_DWORD *)(v14 + 8) = *(_DWORD *)(v10 + 8);
    *(_DWORD *)(v14 + 12) = *(_DWORD *)(v10 + 12);
    *(_DWORD *)(v14 + 16) = *(_DWORD *)(v10 + 16);
    *(_DWORD *)(v14 + 20) = *(_DWORD *)(v10 + 20);
    *(_DWORD *)(v14 + 24) = *(_DWORD *)(v10 + 24);
    *(_DWORD *)(v14 + 28) = *(_DWORD *)(v10 + 28);
    *(_DWORD *)(v14 + 32) = *(_DWORD *)(v10 + 32);
    *(_DWORD *)(v14 + 36) = *(_DWORD *)(v10 + 36);
    *(_DWORD *)(v14 + 40) = *(_DWORD *)(v10 + 40);
    *(_DWORD *)(v14 + 44) = *(_DWORD *)(v10 + 44);
    *(_DWORD *)(v14 + 48) = *(_DWORD *)(v10 + 48);
    *(_DWORD *)(v14 + 52) = *(_DWORD *)(v10 + 52);
    *(_DWORD *)(v14 + 56) = *(_DWORD *)(v10 + 56);
    *(_DWORD *)(v14 + 60) = *(_DWORD *)(v10 + 60);
    v15 = &v57;
    *(_BYTE *)(v12 + 17) = 1;
    v16 = &v71;
    v17 = *(_DWORD *)(v10 - 148);
  }
  else
    glm::detail::operator*<float>((int)&v71, v6 + 92, (int)&v43);
    v18 = HIDWORD(v71);
    v19 = *(_QWORD *)&v72;
    v20 = *(_DWORD *)(v6 + 16);
    v21 = *(_DWORD *)(v20 + 20);
    *(_DWORD *)v21 = v71;
    *(_DWORD *)(v21 + 4) = v18;
    *(_QWORD *)(v21 + 8) = v19;
    *(_DWORD *)(v21 + 16) = v60;
    *(_DWORD *)(v21 + 20) = v61;
    *(_DWORD *)(v21 + 24) = v62;
    *(_DWORD *)(v21 + 28) = v63;
    *(_DWORD *)(v21 + 32) = v64;
    *(_QWORD *)(v21 + 36) = v65;
    *(_DWORD *)(v21 + 44) = v66;
    *(_DWORD *)(v21 + 48) = v67;
    *(_DWORD *)(v21 + 52) = v68;
    *(_DWORD *)(v21 + 56) = v69;
    *(_DWORD *)(v21 + 60) = v70;
    *(_BYTE *)(v20 + 17) = 1;
    v22 = *(_DWORD *)(v6 + 20);
    v13 = v6 + 220;
    v23 = *(_DWORD *)(v22 + 20);
    *(_DWORD *)v23 = *(_DWORD *)(v6 + 220);
    *(_DWORD *)(v23 + 4) = *(_DWORD *)(v6 + 224);
    *(_DWORD *)(v23 + 8) = *(_DWORD *)(v6 + 228);
    *(_DWORD *)(v23 + 12) = *(_DWORD *)(v6 + 232);
    *(_DWORD *)(v23 + 16) = *(_DWORD *)(v6 + 236);
    *(_DWORD *)(v23 + 20) = *(_DWORD *)(v6 + 240);
    *(_DWORD *)(v23 + 24) = *(_DWORD *)(v6 + 244);
    *(_DWORD *)(v23 + 28) = *(_DWORD *)(v6 + 248);
    *(_DWORD *)(v23 + 32) = *(_DWORD *)(v6 + 252);
    *(_DWORD *)(v23 + 36) = *(_DWORD *)(v6 + 256);
    *(_DWORD *)(v23 + 40) = *(_DWORD *)(v6 + 260);
    *(_DWORD *)(v23 + 44) = *(_DWORD *)(v6 + 264);
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v6 + 268);
    *(_DWORD *)(v23 + 52) = *(_DWORD *)(v6 + 272);
    *(_DWORD *)(v23 + 56) = *(_DWORD *)(v6 + 276);
    *(_DWORD *)(v23 + 60) = *(_DWORD *)(v6 + 280);
    *(_BYTE *)(v22 + 17) = 1;
    v17 = *(_DWORD *)(v6 + 8);
  glm::detail::operator*<float>((int)v16, v13, (int)v15);
  v24 = HIDWORD(v71);
  v25 = v72;
  v26 = v73;
  v27 = v84;
  v28 = v83;
  v29 = v82;
  v30 = v81;
  v31 = v80;
  v32 = HIDWORD(v79);
  v33 = v79;
  v34 = v78;
  v35 = v77;
  v36 = v76;
  v37 = v75;
  v38 = v74;
  v39 = *(_DWORD *)(v17 + 20);
  *(_DWORD *)v39 = v71;
  *(_DWORD *)(v39 + 4) = v24;
  *(_DWORD *)(v39 + 8) = v25;
  *(_DWORD *)(v39 + 12) = v26;
  *(_DWORD *)(v39 + 16) = v38;
  *(_DWORD *)(v39 + 20) = v37;
  *(_DWORD *)(v39 + 24) = v36;
  *(_DWORD *)(v39 + 28) = v35;
  *(_DWORD *)(v39 + 32) = v34;
  *(_DWORD *)(v39 + 36) = v33;
  *(_DWORD *)(v39 + 40) = v32;
  *(_DWORD *)(v39 + 44) = v31;
  *(_DWORD *)(v39 + 48) = v30;
  *(_DWORD *)(v39 + 52) = v29;
  *(_DWORD *)(v39 + 56) = v28;
  *(_DWORD *)(v39 + 60) = v27;
  *(_BYTE *)(v17 + 17) = 1;
  result = *(_DWORD *)(v42 + 12);
  v41 = *(_DWORD *)(result + 20);
  *(_DWORD *)v41 = *(_DWORD *)v4;
  *(_DWORD *)(v41 + 4) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v41 + 8) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v41 + 12) = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v41 + 16) = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v41 + 20) = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(v41 + 24) = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v41 + 28) = *(_DWORD *)(v4 + 28);
  *(_DWORD *)(v41 + 32) = *(_DWORD *)(v4 + 32);
  *(_DWORD *)(v41 + 36) = *(_DWORD *)(v4 + 36);
  *(_DWORD *)(v41 + 40) = *(_DWORD *)(v4 + 40);
  *(_DWORD *)(v41 + 44) = *(_DWORD *)(v4 + 44);
  *(_DWORD *)(v41 + 48) = *(_DWORD *)(v4 + 48);
  *(_DWORD *)(v41 + 52) = *(_DWORD *)(v4 + 52);
  *(_DWORD *)(v41 + 56) = *(_DWORD *)(v4 + 56);
  *(_DWORD *)(v41 + 60) = *(_DWORD *)(v4 + 60);
  *(_BYTE *)(result + 17) = 1;
  return result;
}


int __fastcall mce::ImageDescription::ImageDescription(int result, int a2, int a3, int a4, int a5, char a6)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a5;
  *(_BYTE *)(result + 16) = a6;
  return result;
}


float __fastcall mce::MathUtility::rotateVec2(int a1, int a2, int _R2)
{
  float result; // r0@1

  __asm
  {
    VLDR            S0, =0.017453
    VMOV            S2, R2
  }
  _R4 = a2;
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R7 = j_cosf(_R6);
  result = j_sinf(_R6);
    VLDR            S0, [R4]
    VMOV            S6, R7
    VLDR            S2, [R4,#4]
    VMOV            S4, R0
    VMUL.F32        S10, S0, S6
    VMUL.F32        S8, S2, S4
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S6
    VSUB.F32        S4, S10, S8
    VADD.F32        S0, S2, S0
    VSTR            S4, [R5]
    VSTR            S0, [R5,#4]
  return result;
}


int __fastcall mce::VertexFormat::getID(mce::VertexFormat *this)
{
  return *(_BYTE *)this;
}


int __fastcall mce::RenderMaterialGroup::setTextureGroup(int result, mce::TextureGroup *a2)
{
  *(_DWORD *)(result + 104) = a2;
  return result;
}


int __fastcall mce::Mesh::~Mesh(mce::Mesh *this)
{
  mce::Mesh *v1; // r4@1
  int v2; // r3@1
  int v3; // r0@1

  v1 = this;
  mce::Buffer::releaseBuffer(this);
  mce::Buffer::releaseBuffer((mce::Mesh *)((char *)v1 + 32));
  *((_BYTE *)v1 + 92) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  v2 = mce::VertexFormat::EMPTY;
  v3 = unk_27E8CB0;
  *((_BYTE *)v1 + 72) = unk_27E8CB4;
  *((_DWORD *)v1 + 17) = v3;
  *((_DWORD *)v1 + 16) = v2;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 24) = 0;
  mce::Buffer::~Buffer((mce::Mesh *)((char *)v1 + 32));
  return j_j_j__ZN3mce6BufferD2Ev(v1);
}


int __fastcall mce::TextureGroup::getManualTextureData(mce::TextureGroup *this, const mce::TexturePtr *a2)
{
  mce::TextureGroup *v2; // r4@1
  int v3; // r0@1
  int *v4; // r1@1
  int *v5; // r5@1
  int v6; // r2@2
  int result; // r0@7

  v2 = this;
  v3 = mce::TexturePtr::get(a2);
  v4 = (int *)(*((_QWORD *)v2 + 10) >> 32);
  v5 = (int *)*((_QWORD *)v2 + 10);
  if ( v5 == v4 )
    goto LABEL_8;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v6 == v3 )
        break;
    }
    ++v5;
    if ( v4 == v5 )
      goto LABEL_8;
  }
  if ( mce::TextureContainer::isValid((mce::TextureContainer *)(v6 + 64)) != 1 )
LABEL_8:
    result = 0;
  else
    result = *v5;
  return result;
}


int *__fastcall mce::RenderGraph::cleanupRenderStage(mce::RenderGraph *this)
{
  int *result; // r0@1
  int *i; // r1@1
  __int64 v3; // kr00_8@1
  int v4; // t1@2

  v3 = *(_QWORD *)this;
  result = (int *)(*(_QWORD *)this >> 32);
  for ( i = (int *)v3; result != i; *(_BYTE *)(v4 + 20) = 0 )
  {
    v4 = *i;
    ++i;
  }
  return result;
}


mce::TexturePtr *__fastcall mce::TexturePtr::TexturePtr(mce::TexturePtr *a1, mce::TextureGroup *a2, int a3, int a4)
{
  mce::TexturePtr *v4; // r4@1
  mce::TextureGroup *v5; // r6@1
  int v6; // r5@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  *(_DWORD *)a1 = &off_26E8D98;
  *((_DWORD *)a1 + 1) = a2;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = *(_DWORD *)a3;
  *(_DWORD *)a3 = &unk_28898CC;
  *((_DWORD *)a1 + 4) = *(_DWORD *)(a3 + 4);
  *((_DWORD *)a1 + 5) = 0;
  mce::TextureGroup::_addRef(a2, a1);
  *((_DWORD *)v4 + 5) = mce::TextureGroup::_getBackCompatInfo(v5, (mce::TexturePtr *)((char *)v4 + 12));
  (*(void (__fastcall **)(mce::TexturePtr *, int, signed int))(*(_DWORD *)v4 + 8))(v4, v6, 1);
  return v4;
}


signed int __fastcall mce::TextureHelper::textureFormatFromIndividualBits(mce::TextureHelper *this, int a2, int a3, int a4, int a5)
{
  bool v5; // zf@1
  bool v6; // zf@5
  signed int result; // r0@9
  signed int v8; // r3@10

  v5 = this == (mce::TextureHelper *)5;
  if ( this == (mce::TextureHelper *)5 )
    v5 = a2 == 6;
  if ( !v5 )
    goto LABEL_21;
  v6 = a3 == 5;
  if ( a3 == 5 )
    v6 = a4 == 0;
  if ( v6 )
  {
    result = 85;
  }
  else
LABEL_21:
    v5 = a4 == 1;
    v8 = 28;
    if ( v5 )
      v8 = 86;
    if ( a3 != 5 )
      v8 = 28;
    if ( a2 != 5 )
    if ( this != (mce::TextureHelper *)5 )
    result = v8;
  return result;
}


void __fastcall mce::RenderMaterialGroup::getMaterial(mce::MaterialPtr *a1, mce::RenderMaterialGroup *a2, int *a3)
{
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v6 = *a3;
  *a3 = (int)&unk_28898CC;
  mce::MaterialPtr::MaterialPtr(a1, a2, &v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
}


int __fastcall mce::RenderDeviceOGL::getMultisampleQualityLevels(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  __int64 v5; // r0@1
  int v6; // r0@2
  int v7; // r1@2
  signed int v8; // r6@6
  int v9; // r1@6
  __int64 v10; // r0@12
  bool v11; // zf@15
  bool v12; // nf@15
  unsigned __int8 v13; // vf@15
  __int64 v14; // r2@20
  bool v15; // cf@20
  int v17; // [sp+0h] [bp-20h]@11
  int v18; // [sp+4h] [bp-1Ch]@11
  int v19; // [sp+Ch] [bp-14h]@2

  v4 = a3;
  LODWORD(v5) = mce::FeatureSupportOGL::checkFeatureSupport(a1 + 92, 1u, a3, a4);
  if ( (_DWORD)v5 == 1 )
  {
    v19 = 0;
    glad_glGetIntegerv(36183, &v19);
    v6 = v19;
    v7 = v19;
    if ( v19 < 0 )
      v7 = -v19;
    if ( (v7 - 1) & v7 )
    {
      if ( v19 )
      {
        do
        {
          v8 = v6;
          v9 = v6 & -v6;
          v6 ^= v9;
        }
        while ( v9 != v8 );
      }
      else
        v8 = 0;
      v19 = v8;
    }
    else
      v8 = v19;
    v17 = 1;
    v18 = 0;
    if ( v8 >= 1 )
      do
        v17 = v8;
        v10 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v10 == HIDWORD(v10) )
          std::vector<mce::SampleDescription,std::allocator<mce::SampleDescription>>::_M_emplace_back_aux<mce::SampleDescription&>(__PAIR__(&v17, v4));
        else
          *(_QWORD *)v10 = *(_QWORD *)&v17;
          *(_DWORD *)(v4 + 4) += 8;
        v13 = __OFSUB__(v8, 1);
        v11 = v8 == 1;
        v12 = v8 - 1 < 0;
        v8 /= 2;
      while ( !((unsigned __int8)(v12 ^ v13) | v11) );
    v5 = *(_QWORD *)v4;
    if ( (_DWORD)v5 != HIDWORD(v5) && (unsigned int)v5 < HIDWORD(v5) - 8 )
      HIDWORD(v5) -= 16;
        v14 = *(_QWORD *)v5;
        *(_QWORD *)v5 = *(_QWORD *)(HIDWORD(v5) + 8);
        LODWORD(v5) = v5 + 8;
        *(_QWORD *)(HIDWORD(v5) + 8) = v14;
        v15 = (unsigned int)v5 >= HIDWORD(v5);
        HIDWORD(v5) -= 8;
      while ( !v15 );
  }
  return v5;
}


int __fastcall mce::SwapChainBase::resizeBuffers(mce::SwapChainBase *this, mce::RenderDevice *a2, unsigned int a3, unsigned int a4)
{
  return 0;
}


mce::ShaderGroup *__fastcall mce::ShaderGroup::~ShaderGroup(mce::ShaderGroup *this)
{
  mce::ShaderGroup *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  mce::Shader **v4; // r5@2 OVERLAPPED
  mce::Shader **v5; // r6@2 OVERLAPPED
  void *v6; // r0@4
  int v7; // r1@9
  void *v8; // r0@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17

  v1 = this;
  *(_DWORD *)this = &off_26DCD28;
  v2 = *((_DWORD *)this + 13);
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
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<mce::ShaderProgram,std::default_delete<mce::ShaderProgram>>>,std::allocator<std::pair<std::string const,std::unique_ptr<mce::ShaderProgram,std::default_delete<mce::ShaderProgram>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable((int)v1 + 24);
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 12);
  if ( v4 != v5 )
    do
      if ( *v4 )
      {
        v6 = (void *)mce::Shader::~Shader(*v4);
        operator delete(v6);
      }
      *v4 = 0;
      ++v4;
    while ( v5 != v4 );
    v4 = (mce::Shader **)*((_DWORD *)v1 + 3);
  if ( v4 )
    operator delete(v4);
  v7 = *((_DWORD *)v1 + 2);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v7 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  AppPlatformListener::~AppPlatformListener(v1);
  return v1;
}


int __fastcall mce::ImageBuffer::clear(int result)
{
  *(_DWORD *)(result + 4) = *(_DWORD *)result;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


signed int __fastcall mce::TextureGroup::getTickingTextureCount(mce::TextureGroup *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 68) >> 32) - *(_QWORD *)((char *)this + 68)) >> 2;
}


int __fastcall mce::Math::fastInvSqrt(mce::Math *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S4, R0
  }
  _R1 = 1597463007 - ((signed int)this >> 1);
    VMOV            S2, R1
    VMUL.F32        S6, S2, S2
    VMUL.F32        S0, S4, S0
    VMOV.F32        S4, #1.5
    VMUL.F32        S0, S6, S0
    VADD.F32        S0, S0, S4
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


mce::ShaderConstantBase *__fastcall mce::ConstantBufferContainer::getUnspecializedShaderConstant(int a1, const void **a2)
{
  int v2; // r9@1
  const void **v3; // r5@1
  int v4; // r6@1
  mce::ShaderConstantBase **v5; // r8@1
  int v6; // r0@1
  int v7; // r4@2
  _DWORD *v8; // r1@3
  size_t v9; // r2@3
  mce::ShaderConstantBase **v10; // r7@5
  _DWORD *v11; // r1@5
  size_t v12; // r2@5
  _DWORD *v13; // r1@7
  size_t v14; // r2@7
  _DWORD *v15; // r1@9
  size_t v16; // r2@9
  int v17; // r0@13
  _DWORD *v18; // r1@17
  size_t v19; // r2@17
  _DWORD *v20; // r1@20
  size_t v21; // r2@20
  const void *v22; // r1@23
  size_t v23; // r2@23
  mce::ShaderConstantBase *result; // r0@32

  v2 = a1;
  v3 = a2;
  v5 = (mce::ShaderConstantBase **)(*(_QWORD *)(a1 + 12) >> 32);
  v4 = *(_QWORD *)(a1 + 12);
  v6 = ((signed int)v5 - v4) >> 4;
  if ( v6 < 1 )
  {
LABEL_12:
    if ( 1 == ((signed int)v5 - v4) >> 2 )
    {
      v10 = (mce::ShaderConstantBase **)v4;
    }
    else
      v17 = ((signed int)v5 - v4) >> 2;
      if ( v17 == 3 )
      {
        v18 = *(_DWORD **)mce::ShaderConstantBase::getName(*(mce::ShaderConstantBase **)v4);
        v19 = *((_DWORD *)*v3 - 3);
        if ( v19 == *(v18 - 3) && !memcmp(*v3, v18, v19) )
        {
          v10 = (mce::ShaderConstantBase **)v4;
          goto LABEL_31;
        }
        v4 += 4;
      }
      else if ( v17 != 2 )
        goto LABEL_27;
      v20 = *(_DWORD **)mce::ShaderConstantBase::getName(*(mce::ShaderConstantBase **)v4);
      v21 = *((_DWORD *)*v3 - 3);
      if ( v21 == *(v20 - 3) && !memcmp(*v3, v20, v21) )
        v10 = (mce::ShaderConstantBase **)v4;
        goto LABEL_31;
      v10 = (mce::ShaderConstantBase **)(v4 + 4);
    v22 = *(const void **)mce::ShaderConstantBase::getName(*v10);
    v23 = *((_DWORD *)*v3 - 3);
    if ( v23 == *((_DWORD *)v22 - 3) )
      if ( memcmp(*v3, v22, v23) )
        v10 = v5;
      goto LABEL_31;
LABEL_27:
    v10 = v5;
    goto LABEL_31;
  }
  v7 = v6 + 1;
  while ( 1 )
    v8 = *(_DWORD **)mce::ShaderConstantBase::getName(*(mce::ShaderConstantBase **)v4);
    v9 = *((_DWORD *)*v3 - 3);
    if ( v9 == *(v8 - 3) && !memcmp(*v3, v8, v9) )
      break;
    v10 = (mce::ShaderConstantBase **)(v4 + 4);
    v11 = *(_DWORD **)mce::ShaderConstantBase::getName(*(mce::ShaderConstantBase **)(v4 + 4));
    v12 = *((_DWORD *)*v3 - 3);
    if ( v12 == *(v11 - 3) && !memcmp(*v3, v11, v12) )
    v10 = (mce::ShaderConstantBase **)(v4 + 8);
    v13 = *(_DWORD **)mce::ShaderConstantBase::getName(*(mce::ShaderConstantBase **)(v4 + 8));
    v14 = *((_DWORD *)*v3 - 3);
    if ( v14 == *(v13 - 3) && !memcmp(*v3, v13, v14) )
    v10 = (mce::ShaderConstantBase **)(v4 + 12);
    v15 = *(_DWORD **)mce::ShaderConstantBase::getName(*(mce::ShaderConstantBase **)(v4 + 12));
    v16 = *((_DWORD *)*v3 - 3);
    if ( v16 == *(v15 - 3) && !memcmp(*v3, v15, v16) )
    --v7;
    v4 += 16;
    if ( v7 <= 1 )
      goto LABEL_12;
  v10 = (mce::ShaderConstantBase **)v4;
LABEL_31:
  if ( v10 == *(mce::ShaderConstantBase ***)(v2 + 16) )
    result = 0;
  else
    result = *v10;
  return result;
}


signed int __fastcall mce::ConstantBufferContainer::sync(mce::ConstantBufferContainer *this, mce::RenderContext *a2)
{
  mce::RenderContext *v2; // r4@1
  mce::ConstantBufferContainer *v3; // r5@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  result = mce::ConstantBufferContainerBase::isDirty(this);
  if ( result == 1 )
    result = j_j_j__ZN3mce26ConstantBufferContainerOGL4syncERNS_13RenderContextE(v3, v2);
  return result;
}


void __fastcall mce::EffectConstants::init(mce::EffectConstants *this)
{
  mce::EffectConstants::init(this);
}


int __fastcall mce::RasterizerStateDescription::RasterizerStateDescription(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_WORD *)(result + 8) = 2;
  *(_BYTE *)(result + 10) = 0;
  return result;
}


int __fastcall mce::TextureOGL::subBuffer(mce::TextureOGL *this, mce::RenderContext *a2, const void *a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8)
{
  unsigned int v8; // r4@1
  mce::TextureOGL *v9; // r6@1
  int result; // r0@1
  int (__fastcall *v11)(signed int, unsigned int, unsigned int, unsigned int); // r7@3
  signed int v12; // r0@3
  __int64 v13; // ST10_8@3
  __int64 v14; // ST08_8@4

  v8 = a4;
  v9 = this;
  mce::TextureOGL::bindTexture(this, a2, 0, a4);
  result = *((_DWORD *)v9 + 12);
  if ( result == 3553 )
  {
    v11 = (int (__fastcall *)(signed int, unsigned int, unsigned int, unsigned int))glad_glTexSubImage2D;
    v12 = 3553;
    v14 = *((_QWORD *)v9 + 7);
  }
  else
    if ( result != 35866 )
      return result;
    v11 = (int (__fastcall *)(signed int, unsigned int, unsigned int, unsigned int))glad_glTexSubImage3D;
    v12 = 35866;
    v13 = *((_QWORD *)v9 + 7);
  return v11(v12, a8, v8, a5);
}


void __fastcall mce::ShaderConstantInt4::~ShaderConstantInt4(mce::ShaderConstantInt4 *this)
{
  mce::ShaderConstantInt4::~ShaderConstantInt4(this);
}


char *__fastcall mce::DepthStencilStateBase::createDepthState(mce::DepthStencilStateBase *this, mce::RenderContext *a2, const mce::DepthStencilStateDescription *a3)
{
  int v3; // r1@1
  char *v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r12@1
  int v8; // lr@1
  char *result; // r0@1

  v3 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 3);
  v8 = *((_DWORD *)a3 + 4);
  v4 = (char *)a3 + 20;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v5;
  *((_DWORD *)this + 2) = v6;
  *((_DWORD *)this + 3) = v7;
  *((_DWORD *)this + 4) = v8;
  result = (char *)this + 20;
  LOWORD(v3) = *(_WORD *)v4;
  result[2] = v4[2];
  *(_WORD *)result = v3;
  return result;
}


void __fastcall mce::DebugConstants::~DebugConstants(mce::DebugConstants *this)
{
  mce::DebugConstants::~DebugConstants(this);
}


void __fastcall mce::TextureGroup::getTexture(mce::TexturePtr *a1, mce::TextureGroup *a2, int a3, int a4)
{
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1

  v7 = *(_DWORD *)a3;
  *(_DWORD *)a3 = &unk_28898CC;
  v8 = *(_DWORD *)(a3 + 4);
  mce::TexturePtr::TexturePtr(a1, a2, (int)&v7, a4);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall mce::TextureContainer::TextureContainer(int result, int a2)
{
  int v2; // r2@1
  int v3; // r2@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // lr@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // lr@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v2 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v2;
  v3 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = &unk_28898CC;
  v4 = result + 16;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  v9 = result + 36;
  v10 = *(_DWORD *)(a2 + 40);
  v11 = *(_DWORD *)(a2 + 44);
  v12 = *(_DWORD *)(a2 + 48);
  v13 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)v9 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  return result;
}


void __fastcall mce::DebugConstants::~DebugConstants(mce::DebugConstants *this)
{
  void *v1; // r0@1

  v1 = (void *)mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase(this);
  j_j_j__ZdlPv_5(v1);
}


mce::WorldConstantsHolographic *__fastcall mce::WorldConstantsHolographic::WorldConstantsHolographic(mce::WorldConstantsHolographic *this)
{
  mce::WorldConstantsHolographic *v1; // r4@1
  mce::WorldConstantsHolographic *result; // r0@1

  v1 = this;
  mce::ConstantBufferConstantsBase::ConstantBufferConstantsBase(this);
  *(_DWORD *)v1 = &off_26E8C3C;
  _aeabi_memclr4((char *)v1 + 28, 64);
  *((_WORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  *(_QWORD *)((char *)v1 + 28) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 36) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 44) = qword_27E89F8;
  *((_DWORD *)v1 + 13) = unk_27E8A00;
  *((_DWORD *)v1 + 14) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 60) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 68) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 76) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 84) = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr4((char *)v1 + 92, 64);
  *(_QWORD *)((char *)v1 + 92) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 100) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 108) = qword_27E89F8;
  *((_DWORD *)v1 + 29) = unk_27E8A00;
  *((_DWORD *)v1 + 30) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 124) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 132) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 140) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 148) = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr4((char *)v1 + 156, 64);
  *(_QWORD *)((char *)v1 + 156) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 164) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 172) = qword_27E89F8;
  *((_DWORD *)v1 + 45) = unk_27E8A00;
  *((_DWORD *)v1 + 46) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 188) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 196) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 204) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 212) = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr4((char *)v1 + 220, 64);
  *(_QWORD *)((char *)v1 + 220) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 228) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 236) = qword_27E89F8;
  *((_DWORD *)v1 + 61) = unk_27E8A00;
  *((_DWORD *)v1 + 62) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 252) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 260) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 268) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 276) = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr4((char *)v1 + 284, 64);
  *(_QWORD *)((char *)v1 + 284) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 292) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 300) = qword_27E89F8;
  *((_DWORD *)v1 + 77) = unk_27E8A00;
  *((_DWORD *)v1 + 78) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 316) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 324) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 332) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 340) = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr4((char *)v1 + 348, 64);
  *(_QWORD *)((char *)v1 + 348) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 356) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 364) = qword_27E89F8;
  *((_DWORD *)v1 + 93) = unk_27E8A00;
  *((_DWORD *)v1 + 94) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 380) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 388) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 396) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 404) = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr4((char *)v1 + 412, 64);
  *(_QWORD *)((char *)v1 + 412) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)((char *)v1 + 420) = qword_27E89F0;
  *(_QWORD *)((char *)v1 + 428) = qword_27E89F8;
  *((_DWORD *)v1 + 109) = unk_27E8A00;
  *((_DWORD *)v1 + 110) = unk_27E8A04;
  *(_QWORD *)((char *)v1 + 444) = qword_27E8A08;
  *(_QWORD *)((char *)v1 + 452) = qword_27E8A10;
  *(_QWORD *)((char *)v1 + 460) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)((char *)v1 + 468) = *(_QWORD *)&qword_27E8A20;
  result = v1;
  *((_WORD *)v1 + 238) = 0;
  return result;
}


int __fastcall mce::Clock::Clock(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 1065353216;
  return result;
}


int __fastcall mce::RenderMaterial::addDefine(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r8@1
  int v4; // r1@1
  int v5; // r10@1
  int v6; // r7@1
  const void *v7; // r6@2
  size_t v8; // r5@2
  size_t v9; // r2@3
  _DWORD *v10; // r1@3
  size_t v11; // r4@3
  int v12; // r0@5
  int *v13; // r1@5
  bool v14; // zf@10
  bool v15; // nf@10
  unsigned __int8 v16; // vf@10
  int v17; // r0@10
  int result; // r0@12
  _DWORD *v19; // r0@14
  size_t v20; // r4@14
  size_t v21; // r2@14
  _DWORD *v22; // r1@21
  unsigned int v23; // r4@21
  unsigned int v24; // r5@21
  size_t v25; // r2@21
  unsigned int v26; // r0@23
  int v27; // r9@25
  void *v28; // r6@27

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = a1 + 12;
  v6 = a1 + 12;
  if ( !v4 )
    goto LABEL_30;
  v7 = *v3;
  v8 = *((_DWORD *)*v3 - 3);
  do
  {
    v6 = v4;
    v9 = v8;
    v10 = *(_DWORD **)(v4 + 16);
    v11 = *(v10 - 3);
    if ( v8 > v11 )
      v9 = *(v10 - 3);
    v12 = memcmp(v7, v10, v9);
    v13 = (int *)(v6 + 12);
    if ( !v12 )
      v12 = v8 - v11;
    if ( v12 < 0 )
      v13 = (int *)(v6 + 8);
    v4 = *v13;
  }
  while ( v4 );
  v16 = __OFSUB__(v12, -1);
  v14 = v12 == -1;
  v15 = v12 + 1 < 0;
  v17 = v6;
  if ( (unsigned __int8)(v15 ^ v16) | v14 )
LABEL_30:
    result = *(_DWORD *)(v2 + 20);
    if ( v6 == result )
    {
LABEL_19:
      if ( v6 )
      {
        if ( v5 == v6 )
        {
          v27 = 1;
        }
        else
          v22 = *(_DWORD **)(v6 + 16);
          v23 = *((_DWORD *)*v3 - 3);
          v24 = *(v22 - 3);
          v25 = *((_DWORD *)*v3 - 3);
          if ( v23 > v24 )
            v25 = *(v22 - 3);
          v26 = memcmp(*v3, v22, v25);
          if ( !v26 )
            v26 = v23 - v24;
          v27 = v26 >> 31;
        v28 = operator new(0x14u);
        sub_21E8AF4((int *)v28 + 4, (int *)v3);
        sub_21D4928(v27, (int)v28, v6, v5);
        result = *(_DWORD *)(v2 + 28) + 1;
        *(_DWORD *)(v2 + 28) = result;
      }
      return result;
    }
    v17 = sub_21D4858(v6);
    v7 = *v3;
    v8 = *((_DWORD *)*v3 - 3);
  v19 = *(_DWORD **)(v17 + 16);
  v20 = *(v19 - 3);
  v21 = *(v19 - 3);
  if ( v20 > v8 )
    v21 = v8;
  result = memcmp(v19, v7, v21);
  if ( !result )
    result = v20 - v8;
  if ( result <= -1 )
    goto LABEL_19;
  return result;
}


AppPlatformListener *__fastcall mce::QuadIndexBuffer::~QuadIndexBuffer(mce::QuadIndexBuffer *this)
{
  AppPlatformListener *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E8D40;
  mce::Buffer::~Buffer((mce::QuadIndexBuffer *)((char *)this + 8));
  return j_j_j__ZN19AppPlatformListenerD2Ev_1(v1);
}


int __fastcall mce::TextureGroup::getTexturePair(mce::TextureGroup *this, const mce::TexturePtr *a2)
{
  mce::TextureGroup *v2; // r5@1
  int v3; // r4@1
  int i; // r0@2
  mce::TextureContainer *v5; // r6@6
  bool v6; // r2@7

  v2 = this;
  v3 = mce::TexturePtr::get(a2);
  if ( v3 )
  {
    for ( i = *((_DWORD *)v2 + 3); (mce::TextureGroup *)i != (mce::TextureGroup *)((char *)v2 + 4); i = sub_21D47E8(i) )
    {
      if ( i + 24 == v3 )
      {
        v5 = (mce::TextureContainer *)(i + 88);
        if ( mce::TextureContainer::isValid((mce::TextureContainer *)(i + 88))
          || *(_DWORD *)(*(_DWORD *)mce::TextureContainer::getRawImage(v5) - 12)
          || ImageUtils::uncompress(v5, 0, v6) == 1 )
        {
          return v3;
        }
        return 0;
      }
    }
  }
  return 0;
}


void __fastcall mce::TexturePtr::onGroupReloaded(mce::TexturePtr *this, bool a2, bool a3)
{
  mce::TexturePtr::onGroupReloaded(this, a2, a3);
}


int __fastcall mce::MultisampledRenderStageWithFrameBufferObject::setResolveRenderStageSource(int result, mce::RenderStageWithFrameBufferObject *a2)
{
  *(_DWORD *)(result + 236) = a2;
  return result;
}


signed int __fastcall mce::ShaderConstantBase::getElementsExtent(mce::ShaderConstantBase *this)
{
  signed int result; // r0@1

  result = *((_DWORD *)this + 2);
  if ( !result )
    result = 1;
  return result;
}


int __fastcall mce::TextureDescription::getMipHeight(mce::TextureDescription *this, unsigned int a2)
{
  return *((_DWORD *)this + 1) >> a2;
}
