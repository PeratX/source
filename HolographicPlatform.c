

int __fastcall HolographicPlatform::getUIClipGrowPixels(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::getTransformZDir(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1
  char v7; // [sp+8h] [bp-48h]@1
  int v8; // [sp+28h] [bp-28h]@1
  int v9; // [sp+2Ch] [bp-24h]@1
  int v10; // [sp+30h] [bp-20h]@1

  v5 = a1;
  HolographicPlatform::getTransform((int)&v7, a2, a3, a4, a5);
  *(_DWORD *)v5 = v8;
  *(_DWORD *)(v5 + 4) = v9;
  result = v10;
  *(_DWORD *)(v5 + 8) = v10;
  return result;
}


signed int __fastcall HolographicPlatform::useSinglePassStereo(HolographicPlatform *this)
{
  return 1;
}


int (**__fastcall HolographicPlatform::setNewFrameOfReferenceFrameData(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r5@1
  pthread_mutex_t *v3; // r4@1
  int v4; // r6@1
  int v5; // r0@2
  void *v6; // r0@3
  void *v7; // r6@4
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@5

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 528);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_119CCFC(v5);
  }
  HolographicPlatform::HoloFrameOfReferenceSetupData::operator=(v2 + 4, v4);
  v6 = *(void **)(v2 + 540);
  if ( v6 )
    do
    {
      v7 = *(void **)v6;
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 );
  _aeabi_memclr4(*(_QWORD *)(v2 + 532), 4 * (*(_QWORD *)(v2 + 532) >> 32));
  *(_DWORD *)(v2 + 540) = 0;
  *(_DWORD *)(v2 + 544) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 336))(v2);
  HolographicPlatform::_handleSituationalTransforms((HolographicPlatform *)v2);
  *(_BYTE *)(v2 + 572) = 1;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


int __fastcall HolographicPlatform::pauseIsDesired(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::getLivingRoomLevelTextureWidthHeight(HolographicPlatform *this, unsigned int *a2, unsigned int *a3, float *a4)
{
  int result; // r0@1

  result = 0;
  *a2 = 0;
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  return result;
}


signed int __fastcall HolographicPlatform::getPreferredUIAspectRatio(HolographicPlatform *this)
{
  return 1071877689;
}


signed int __fastcall HolographicPlatform::getMinimumLivingRoomFrameDistance(HolographicPlatform *this)
{
  return 1036831949;
}


void __fastcall HolographicPlatform::~HolographicPlatform(HolographicPlatform *this)
{
  HolographicPlatform *v1; // r0@1

  v1 = HolographicPlatform::~HolographicPlatform(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HolographicPlatform::addToHMDPositionSpring(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0,#0x1F8]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0x1F8]
    VLDR            S0, [R1,#4]
    VLDR            S2, [R0,#0x1FC]
    VSTR            S0, [R0,#0x1FC]
    VLDR            S0, [R1,#8]
    VLDR            S2, [R0,#0x200]
    VSTR            S0, [R0,#0x200]
  }
  return result;
}


signed int __fastcall HolographicPlatform::allowThirdPersonView(HolographicPlatform *this)
{
  return 1;
}


signed int __fastcall HolographicPlatform::numRequiredControllers(HolographicPlatform *this)
{
  return 1;
}


HolographicPlatform *__fastcall HolographicPlatform::~HolographicPlatform(HolographicPlatform *this)
{
  HolographicPlatform *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@4
  void *v6; // r5@5
  char *v7; // r0@6
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26D9148;
  v2 = *((_DWORD *)this + 166);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void *)*((_DWORD *)v1 + 140);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 135);
  if ( v5 )
    do
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 532), 4 * (*(_QWORD *)((char *)v1 + 532) >> 32));
  *((_DWORD *)v1 + 135) = 0;
  *((_DWORD *)v1 + 136) = 0;
  v7 = (char *)*((_DWORD *)v1 + 133);
  if ( v7 && (char *)v1 + 556 != v7 )
    operator delete(v7);
  return v1;
}


int __fastcall HolographicPlatform::drawCubemapInMono(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::isARMode(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::getSRCastDistance(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::getPreferredLivingRoomLevelAspectRation(HolographicPlatform *this)
{
  return 1071877689;
}


int __fastcall HolographicPlatform::getVRHUDRenderMode(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::deviceNeedsToBeRemovedForFilePicker(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::getDefaultHalfHoloScreenWidth(HolographicPlatform *this)
{
  return 1051931443;
}


int __fastcall HolographicPlatform::startEnvironmentScanning(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::getDefaultIngameUIDistance(HolographicPlatform *this)
{
  return 1065353216;
}


int __fastcall HolographicPlatform::getTransform(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int result; // r0@2
  char v9; // [sp+4h] [bp-DCh]@2
  char v10; // [sp+44h] [bp-9Ch]@2
  int v11; // [sp+84h] [bp-5Ch]@2
  int v12; // [sp+88h] [bp-58h]@2
  int v13; // [sp+8Ch] [bp-54h]@2
  int v14; // [sp+90h] [bp-50h]@2
  int v15; // [sp+94h] [bp-4Ch]@2
  int v16; // [sp+98h] [bp-48h]@2
  int v17; // [sp+9Ch] [bp-44h]@2
  int v18; // [sp+A0h] [bp-40h]@2
  int v19; // [sp+A4h] [bp-3Ch]@2
  int v20; // [sp+A8h] [bp-38h]@2
  int v21; // [sp+ACh] [bp-34h]@2
  int v22; // [sp+B0h] [bp-30h]@2
  int v23; // [sp+B4h] [bp-2Ch]@2
  int v24; // [sp+B8h] [bp-28h]@2
  int v25; // [sp+BCh] [bp-24h]@2
  int v26; // [sp+C0h] [bp-20h]@2

  v5 = a4;
  v6 = a2;
  v7 = a1;
  if ( a5 )
  {
    HolographicPlatform::_getTransform((int)&v10, a2, a3, a5);
    HolographicPlatform::_getTransform((int)&v9, v6, a5, v5);
    glm::detail::operator*<float>((int)&v11, (int)&v9, (int)&v10);
    _aeabi_memclr4(v7, 56);
    *(_DWORD *)v7 = v11;
    *(_DWORD *)(v7 + 4) = v12;
    *(_DWORD *)(v7 + 8) = v13;
    *(_DWORD *)(v7 + 12) = v14;
    *(_DWORD *)(v7 + 16) = v15;
    *(_DWORD *)(v7 + 20) = v16;
    *(_DWORD *)(v7 + 24) = v17;
    *(_DWORD *)(v7 + 28) = v18;
    *(_DWORD *)(v7 + 32) = v19;
    *(_DWORD *)(v7 + 36) = v20;
    *(_DWORD *)(v7 + 40) = v21;
    *(_DWORD *)(v7 + 44) = v22;
    *(_DWORD *)(v7 + 48) = v23;
    *(_DWORD *)(v7 + 52) = v24;
    *(_DWORD *)(v7 + 56) = v25;
    result = v26;
    *(_DWORD *)(v7 + 60) = v26;
  }
  else
    result = HolographicPlatform::_getTransform(a1, a2, a3, a4);
  return result;
}


int __fastcall HolographicPlatform::getUIRenderMode(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::_makeTransform(int result, int a2, int a3)
{
  __int64 *v5; // r5@5
  int v6; // r1@5
  unsigned int v7; // r2@5
  int v8; // r0@5
  int v9; // r1@5
  int v10; // r2@6
  __int64 *v11; // r3@6
  bool v12; // zf@7
  bool v13; // zf@12
  __int64 *v14; // r5@16
  bool v15; // zf@18
  __int64 *v16; // r5@22
  bool v17; // zf@26
  bool v18; // zf@31
  int v22; // ST0C_4@35
  unsigned __int64 v28; // kr30_8@35
  int v29; // ST10_4@35
  __int64 v31; // ST20_8@35
  __int64 v32; // ST18_8@35
  float v33; // ST14_4@35
  float v36; // r7@35
  bool v38; // zf@36
  int v39; // ST0C_4@40
  int v45; // ST10_4@40
  __int64 v47; // ST20_8@40
  __int64 v48; // ST18_8@40
  float v49; // ST14_4@40
  float v52; // r7@40
  bool v54; // zf@41
  int v55; // r0@45
  bool v56; // zf@48
  __int64 *v57; // r5@52
  bool v60; // zf@57
  __int64 *v61; // r5@61
  bool v62; // zf@63
  bool v63; // zf@68
  bool v64; // zf@73
  bool v65; // zf@78
  bool v66; // zf@83
  bool v67; // zf@88
  bool v68; // zf@93
  bool v69; // zf@98
  bool v70; // zf@103
  bool v71; // zf@108
  bool v72; // zf@113
  bool v73; // zf@118
  __int64 *v75; // r5@122
  bool v76; // zf@124
  bool v77; // zf@129
  bool v78; // zf@134
  bool v79; // zf@139
  bool v80; // zf@144
  bool v81; // zf@149
  bool v82; // zf@154
  bool v83; // zf@159
  int v84; // r3@163
  int v85; // r1@163
  int v86; // r2@163
  bool v87; // zf@164
  bool v88; // zf@170
  int v89; // r0@174
  __int64 *v90; // r0@177
  int v91; // r1@177
  int v92; // r2@177
  __int64 v93; // [sp+28h] [bp-168h]@35
  __int64 v94; // [sp+30h] [bp-160h]@35
  __int64 v95; // [sp+38h] [bp-158h]@35
  __int64 v96; // [sp+40h] [bp-150h]@35
  __int64 v97; // [sp+48h] [bp-148h]@35
  __int64 v98; // [sp+50h] [bp-140h]@35
  __int64 v99; // [sp+58h] [bp-138h]@35
  unsigned __int64 v100; // [sp+60h] [bp-130h]@35
  int v101; // [sp+68h] [bp-128h]@35
  int v102; // [sp+6Ch] [bp-124h]@35
  __int64 v103; // [sp+70h] [bp-120h]@35
  float v104; // [sp+78h] [bp-118h]@35
  __int64 v105; // [sp+7Ch] [bp-114h]@35
  int v106; // [sp+84h] [bp-10Ch]@35
  __int64 v107; // [sp+88h] [bp-108h]@35
  __int64 v108; // [sp+90h] [bp-100h]@35
  __int64 v109; // [sp+98h] [bp-F8h]@122
  __int64 v110; // [sp+A0h] [bp-F0h]@122
  float v111; // [sp+A8h] [bp-E8h]@35
  int v112; // [sp+C8h] [bp-C8h]@35
  int v113; // [sp+CCh] [bp-C4h]@35
  int v114; // [sp+D0h] [bp-C0h]@35
  int v115; // [sp+D4h] [bp-BCh]@35
  __int64 v116; // [sp+D8h] [bp-B8h]@35
  __int64 v117; // [sp+E0h] [bp-B0h]@35
  __int64 v118; // [sp+E8h] [bp-A8h]@5
  __int64 v119; // [sp+F0h] [bp-A0h]@5
  __int64 v120; // [sp+F8h] [bp-98h]@5
  __int64 v121; // [sp+100h] [bp-90h]@5
  __int64 v122; // [sp+108h] [bp-88h]@5
  __int64 v123; // [sp+110h] [bp-80h]@5
  __int64 v124; // [sp+118h] [bp-78h]@5
  unsigned __int64 v125; // [sp+120h] [bp-70h]@5

  _ZF = a2 == 2;
  _R4 = result;
  if ( a2 == 2 )
    _ZF = a3 == 1;
  if ( _ZF )
  {
    v5 = &v118;
    _aeabi_memclr8(&v118, 56);
    v118 = *(_QWORD *)&Matrix::IDENTITY;
    v119 = qword_27E89F0;
    v120 = qword_27E89F8;
    v121 = qword_27E8A00;
    v122 = qword_27E8A08;
    v123 = qword_27E8A10;
    v6 = *(_DWORD *)(_R4 + 8);
    v7 = *(_DWORD *)(_R4 + 12);
    LODWORD(v124) = *(_DWORD *)(_R4 + 4);
    HIDWORD(v124) = v6;
    v125 = __PAIR__(*((unsigned int *)&qword_27E8A20 + 1), v7);
    v8 = _R4;
    v9 = 2;
LABEL_6:
    v10 = 1;
    v11 = v5;
    return HolographicPlatform::_insertIntoMap(v8, v9, v10, (int)v11);
  }
  v12 = a2 == 2;
    v12 = a3 == 11;
  if ( v12 )
    _aeabi_memclr8(&v118, 60);
    v10 = 11;
    v11 = &v118;
    v124 = *(_QWORD *)&qword_27E8A18;
    v125 = *(_QWORD *)&qword_27E8A20;
  v13 = a2 == 10;
  if ( a2 == 10 )
    v13 = a3 == 7;
  if ( v13 )
    v14 = &v118;
    v9 = 10;
    v118 = *(_QWORD *)(_R4 + 112);
    v119 = *(_QWORD *)(_R4 + 120);
    v120 = *(_QWORD *)(_R4 + 128);
    v121 = *(_QWORD *)(_R4 + 136);
    v122 = *(_QWORD *)(_R4 + 144);
    v123 = *(_QWORD *)(_R4 + 152);
    v124 = *(_QWORD *)(_R4 + 160);
    v125 = *(_QWORD *)(_R4 + 168);
LABEL_17:
    v10 = 7;
    v11 = v14;
  v15 = a2 == 2;
    v15 = a3 == 14;
  if ( v15 )
    v16 = &v118;
    v118 = *(_QWORD *)(_R4 + 44);
    v119 = *(_QWORD *)(_R4 + 52);
    v120 = *(_QWORD *)(_R4 + 60);
    v121 = *(_QWORD *)(_R4 + 68);
    v122 = *(_QWORD *)(_R4 + 76);
    v123 = *(_QWORD *)(_R4 + 84);
    v124 = *(_QWORD *)(_R4 + 92);
    v125 = *(_QWORD *)(_R4 + 100);
LABEL_23:
    v10 = 14;
    v11 = v16;
  v17 = a2 == 2;
    v17 = a3 == 7;
  if ( v17 )
    goto LABEL_17;
  v18 = a2 == 5;
  if ( a2 == 5 )
    v18 = a3 == 6;
  if ( v18 )
    __asm
    {
      VLDR            S16, [R4,#0x10]
      VLDR            S18, [R4,#0x14]
      VLDR            S20, [R4,#0x18]
    }
    _aeabi_memclr8(&v111, 60);
      VMOV.F32        S0, #2.0
      VMUL.F32        S2, S20, S16
      VMUL.F32        S4, S18, S20
      VDIV.F32        S2, S0, S2
    v22 = *(&Matrix::IDENTITY + 1);
    _KR00_8 = qword_27E89F0;
    _LR = HIDWORD(qword_27E89F8);
    _R2 = qword_27E89F8;
    _R12 = HIDWORD(qword_27E8A00);
    v28 = qword_27E8A00;
    v29 = v28 >> 32;
    HIDWORD(_R5) = v28;
    _R10 = Matrix::IDENTITY;
    v31 = qword_27E8A10;
    v32 = qword_27E8A08;
    v33 = qword_27E8A18;
    __asm { VDIV.F32        S0, S0, S4 }
    _R11 = *((_DWORD *)&qword_27E8A18 + 1);
    _R8 = *(_QWORD *)&qword_27E8A20;
    v116 = *(_QWORD *)&qword_27E8A18;
    v117 = *(_QWORD *)&qword_27E8A20;
    __asm { VMOV            S20, R7 }
    v36 = *(float *)&qword_27E89F8;
      VMOV            S16, R10
      VMOV            S18, R3
      VMOV            S22, R5
    LODWORD(_R5) = HIDWORD(qword_27E89F8);
      VMOV            S24, R2
      VMOV            S26, LR
      VMOV            S28, R6
      VMOV            S30, R12
      VMUL.F32        S4, S16, S2
      VMUL.F32        S6, S18, S2
      VMUL.F32        S8, S20, S2
      VMUL.F32        S2, S22, S2
      VMUL.F32        S10, S24, S0
      VMUL.F32        S12, S26, S0
      VMUL.F32        S14, S28, S0
      VMUL.F32        S0, S30, S0
      VSTR            S4, [SP,#0x190+var_E8]
      VSTR            S6, [SP,#0x190+var_E4]
      VSTR            S8, [SP,#0x190+var_E0]
      VSTR            S2, [SP,#0x190+var_DC]
      VSTR            S10, [SP,#0x190+var_D8]
      VSTR            S12, [SP,#0x190+var_D4]
      VSTR            S14, [SP,#0x190+var_D0]
      VSTR            S0, [SP,#0x190+var_CC]
    v114 = 0;
    v115 = 0;
    v112 = 0;
    v113 = 0;
    _aeabi_memclr8(&v101, 56);
    __asm { VNEG.F32        S8, S16 }
    v101 = _R10;
      VNEG.F32        S10, S22
      VNEG.F32        S12, S18
    v102 = v22;
    __asm { VNEG.F32        S14, S20 }
    v103 = _KR00_8;
      VMOV            S0, R8
      VMOV            S2, R11
    v104 = v36;
    __asm { VMOV            S4, R9 }
    v105 = _R5;
    __asm { VSUB.F32        S8, S8, S24 }
    _R0 = v33;
      VSUB.F32        S10, S10, S30
      VSUB.F32        S12, S12, S26
      VSUB.F32        S14, S14, S28
      VMOV            S6, R0
    v106 = v29;
    v107 = v32;
      VADD.F32        S6, S8, S6
      VADD.F32        S4, S10, S4
      VADD.F32        S2, S12, S2
      VADD.F32        S0, S14, S0
    v108 = v31;
      VSTR            S6, [SP,#0x190+var_F8]
      VSTR            S2, [SP,#0x190+var_F8+4]
      VSTR            S0, [SP,#0x190+var_F0]
      VSTR            S4, [SP,#0x190+var_F0+4]
    glm::detail::operator*<float>((int)&v118, (int)&v101, (int)&v111);
    _aeabi_memclr8(&v93, 56);
    v9 = 5;
    v93 = v118;
    v10 = 6;
    v11 = &v93;
    v94 = v119;
    v95 = v120;
    v96 = v121;
    v97 = v122;
    v98 = v123;
    v99 = v124;
    v100 = v125;
  v38 = a2 == 6;
  if ( a2 == 6 )
    v38 = a3 == 5;
  if ( v38 )
      VMOV.F32        S0, #0.5
      VMUL.F32        S2, S16, S0
      VMUL.F32        S0, S20, S0
    v39 = *(&Matrix::IDENTITY + 1);
    _KR18_8 = qword_27E89F0;
    HIDWORD(_R5) = qword_27E8A00;
      VMUL.F32        S2, S2, S20
      VMUL.F32        S0, S0, S18
    v45 = HIDWORD(qword_27E8A00);
    __asm { VMOV            S18, R7 }
      VMOV            S20, R3
    v47 = qword_27E8A10;
      VMUL.F32        S6, S20, S2
    v48 = qword_27E8A08;
      VMUL.F32        S8, S18, S2
    v49 = qword_27E8A18;
    __asm { VMUL.F32        S10, S24, S0 }
    __asm { VMUL.F32        S12, S26, S0 }
    v52 = *(float *)&qword_27E89F8;
      VADD.F32        S8, S24, S16
      VADD.F32        S10, S30, S22
    v102 = v39;
      VADD.F32        S12, S26, S20
      VADD.F32        S14, S28, S18
    v103 = _KR18_8;
    v104 = v52;
    _R0 = v49;
    v106 = v45;
    __asm { VADD.F32        S6, S8, S6 }
    v107 = v48;
    v108 = v47;
    glm::detail::operator*<float>((int)&v118, (int)&v111, (int)&v101);
    v9 = 6;
    v10 = 5;
  v54 = a2 == 6;
    v54 = a3 == 8;
  if ( v54 )
    v118 = 1065353216LL;
    LODWORD(v120) = 0;
    v119 = 0LL;
    HIDWORD(v121) = 0;
    v122 = 0LL;
    *(__int64 *)((char *)&v120 + 4) = 1065353216LL;
    v123 = 1065353216LL;
    v125 = 4575657221408423936LL;
    v124 = 0LL;
    v55 = *(_DWORD *)(result + 436);
    if ( v55 == 6 )
      v118 = *(_QWORD *)(_R4 + 372);
      v119 = *(_QWORD *)(_R4 + 380);
      v120 = *(_QWORD *)(_R4 + 388);
      v121 = *(_QWORD *)(_R4 + 396);
      v122 = *(_QWORD *)(_R4 + 404);
      v123 = *(_QWORD *)(_R4 + 412);
      v124 = *(_QWORD *)(_R4 + 420);
      v125 = *(_QWORD *)(_R4 + 428);
    else if ( v55 == 4 )
      __asm
      {
        VMOV.F32        S1, #0.5
        VLDR            S0, [R4,#0x244]
        VMOV.F32        S3, #-0.5
        VLDR            S2, [R4,#0x248]
        VLDR            S4, [R4,#0x24C]
        VLDR            S6, [R4,#0x250]
        VLDR            S8, [R4,#0x254]
        VLDR            S10, [R4,#0x258]
        VLDR            S12, [R4,#0x25C]
        VLDR            S14, [R4,#0x240]
      }
      v122 = *(_QWORD *)(_R4 + 608);
      v123 = *(_QWORD *)(_R4 + 616);
      v124 = *(_QWORD *)(_R4 + 624);
      v125 = *(_QWORD *)(_R4 + 632);
        VLDR            S5, [R4,#0x24]
        VLDR            S7, [R4,#0x28]
        VMUL.F32        S1, S5, S1
        VMUL.F32        S3, S7, S3
        VMUL.F32        S14, S14, S1
        VMUL.F32        S0, S0, S1
        VMUL.F32        S2, S2, S1
        VMUL.F32        S4, S4, S1
        VMUL.F32        S6, S6, S3
        VMUL.F32        S8, S8, S3
        VMUL.F32        S10, S10, S3
        VMUL.F32        S12, S12, S3
        VSTR            S14, [SP,#0x190+var_A8]
        VSTR            S0, [SP,#0x190+var_A8+4]
        VSTR            S2, [SP,#0x190+var_A0]
        VSTR            S4, [SP,#0x190+var_A0+4]
        VSTR            S6, [SP,#0x190+var_98]
        VSTR            S8, [SP,#0x190+var_98+4]
        VSTR            S10, [SP,#0x190+anonymous_0]
        VSTR            S12, [SP,#0x190+anonymous_0+4]
    else
        VMOV.F32        S0, #-0.5
        VMOV.F32        S2, #0.5
        VLDR            S4, [R4,#0x24]
        VLDR            S6, [R4,#0x28]
      _R0 = &Matrix::IDENTITY;
        VMUL.F32        S0, S6, S0
        VLDR            S1, [R0,#0x14]
        VMUL.F32        S2, S4, S2
        VLDR            S12, [R0,#0xC]
        VLDR            S5, [R0,#0x1C]
        VLDR            S10, [R0,#8]
        VLDR            S14, [R0,#0x10]
        VLDR            S3, [R0,#0x18]
        VLDMIA          R0, {S7-S8}
        VMUL.F32        S6, S1, S0
        VMUL.F32        S4, S5, S0
        VMUL.F32        S12, S12, S2
      LODWORD(v122) = *(_DWORD *)(_R0 + 32);
        VMUL.F32        S8, S8, S2
        VMUL.F32        S1, S7, S2
      HIDWORD(v122) = *(_DWORD *)(_R0 + 36);
        VMUL.F32        S2, S10, S2
        VMUL.F32        S10, S14, S0
      LODWORD(v123) = *(_DWORD *)(_R0 + 40);
      __asm { VMUL.F32        S0, S3, S0 }
      HIDWORD(v123) = *(_DWORD *)(_R0 + 44);
      v124 = *(_QWORD *)(_R0 + 48);
      v125 = *(_QWORD *)(_R0 + 56);
        VSTR            S1, [SP,#0x190+var_A8]
        VSTR            S8, [SP,#0x190+var_A8+4]
        VSTR            S12, [SP,#0x190+var_A0+4]
        VSTR            S10, [SP,#0x190+var_98]
        VSTR            S6, [SP,#0x190+var_98+4]
        VSTR            S0, [SP,#0x190+anonymous_0]
        VSTR            S4, [SP,#0x190+anonymous_0+4]
    v10 = 8;
  v56 = a2 == 5;
    v56 = a3 == 8;
  if ( v56 )
    HolographicPlatform::_getTransform((int)&v111, result, 5, 6);
    HolographicPlatform::_getTransform((int)&v101, _R4, 6, 8);
    v57 = &v93;
LABEL_53:
    v11 = v57;
  v60 = a2 == 5;
    v60 = a3 == 9;
  if ( v60 )
    HolographicPlatform::_getTransform((int)&v101, _R4, 6, 9);
    v61 = &v93;
LABEL_62:
    v10 = 9;
    v11 = v61;
  v62 = a2 == 5;
    v62 = a3 == 15;
  if ( v62 )
    HolographicPlatform::_getTransform((int)&v111, result, 5, 8);
    HolographicPlatform::_getTransform((int)&v101, _R4, 8, 15);
    v10 = 15;
  v63 = a2 == 16;
  if ( a2 == 16 )
    v63 = a3 == 14;
  if ( v63 )
    HolographicPlatform::_getTransform((int)&v111, result, 16, 15);
    HolographicPlatform::_getTransform((int)&v101, _R4, 15, 14);
    v16 = &v93;
    v9 = 16;
    goto LABEL_23;
  v64 = a2 == 19;
  if ( a2 == 19 )
    v64 = a3 == 14;
  if ( v64 )
    HolographicPlatform::_getTransform((int)&v111, result, 19, 15);
    v9 = 19;
  v65 = a2 == 14;
  if ( a2 == 14 )
    v65 = a3 == 1;
  if ( v65 )
    HolographicPlatform::_getTransform((int)&v111, result, 14, 2);
    HolographicPlatform::_getTransform((int)&v101, _R4, 2, 1);
    v5 = &v93;
    v9 = 14;
    goto LABEL_6;
  v66 = a2 == 7;
  if ( a2 == 7 )
    v66 = a3 == 1;
  if ( v66 )
    HolographicPlatform::_getTransform((int)&v111, result, 7, 2);
    v9 = 7;
  v67 = a2 == 16;
    v67 = a3 == 7;
  if ( v67 )
    HolographicPlatform::_getTransform((int)&v101, _R4, 15, 7);
    v14 = &v93;
  v68 = a2 == 19;
    v68 = a3 == 7;
  if ( v68 )
  v69 = a2 == 16;
    v69 = a3 == 8;
  if ( v69 )
    HolographicPlatform::_getTransform((int)&v101, _R4, 15, 8);
    goto LABEL_53;
  v70 = a2 == 19;
    v70 = a3 == 8;
  if ( v70 )
  v71 = a2 == 21;
  if ( a2 == 21 )
    v71 = a3 == 14;
  if ( v71 )
    HolographicPlatform::_getTransform((int)&v111, result, 21, 15);
    v9 = 21;
  v72 = a2 == 22;
  if ( a2 == 22 )
    v72 = a3 == 14;
  if ( v72 )
    HolographicPlatform::_getTransform((int)&v111, result, 22, 15);
    v9 = 22;
  v73 = a2 == 2;
    v73 = a3 == 10;
  if ( v73 )
    HolographicPlatform::_getTransform((int)&v111, result, 2, 7);
    _aeabi_memclr8(&v101, 60);
    _R0 = &Matrix::IDENTITY;
    v109 = *(_QWORD *)&qword_27E8A18;
      VLDR            S0, [R0,#4]
      VLDR            S2, [R0,#8]
      VLDR            S4, [R0,#0xC]
      VLDR            S6, [R0,#0x10]
      VLDR            S8, [R0,#0x14]
      VLDR            S10, [R0,#0x18]
      VLDR            S12, [R0,#0x1C]
      VLDR            S14, [R0]
      VLDR            S1, [R0,#0x20]
      VLDR            S3, [R0,#0x24]
      VLDR            S5, [R0,#0x28]
      VLDR            S7, [R0,#0x2C]
    v110 = *(_QWORD *)&qword_27E8A20;
      VLDR            S9, [R4,#0x6C]
      VMUL.F32        S14, S14, S9
      VMUL.F32        S0, S0, S9
      VMUL.F32        S2, S2, S9
      VMUL.F32        S4, S4, S9
      VMUL.F32        S6, S6, S9
      VMUL.F32        S8, S8, S9
      VMUL.F32        S1, S1, S9
      VMUL.F32        S3, S3, S9
      VSTR            S14, [SP,#0x190+var_128]
      VMUL.F32        S5, S5, S9
      VSTR            S0, [SP,#0x190+var_124]
      VMUL.F32        S7, S7, S9
      VSTR            S2, [SP,#0x190+var_120]
      VMUL.F32        S10, S10, S9
      VSTR            S4, [SP,#0x190+var_120+4]
      VMUL.F32        S12, S12, S9
      VSTR            S6, [SP,#0x190+var_118]
      VSTR            S8, [SP,#0x190+var_114]
      VSTR            S10, [SP,#0x190+var_114+4]
      VSTR            S12, [SP,#0x190+var_10C]
      VSTR            S1, [SP,#0x190+var_108]
      VSTR            S3, [SP,#0x190+var_108+4]
      VSTR            S5, [SP,#0x190+var_100]
      VSTR            S7, [SP,#0x190+var_100+4]
    v75 = &v93;
LABEL_123:
    v10 = 10;
    v11 = v75;
  v76 = a2 == 14;
    v76 = a3 == 7;
  if ( v76 )
    HolographicPlatform::_getTransform((int)&v111, result, 14, 15);
  v77 = a2 == 15;
  if ( a2 == 15 )
    v77 = a3 == 10;
  if ( v77 )
    HolographicPlatform::_getTransform((int)&v111, result, 15, 7);
    HolographicPlatform::_getTransform((int)&v101, _R4, 7, 10);
    v9 = 15;
    goto LABEL_123;
  v78 = a2 == 16;
    v78 = a3 == 10;
  if ( v78 )
    HolographicPlatform::_getTransform((int)&v101, _R4, 15, 10);
  v79 = a2 == 19;
    v79 = a3 == 10;
  if ( v79 )
  v80 = a2 == 10;
    v80 = a3 == 1;
  if ( v80 )
    HolographicPlatform::_getTransform((int)&v111, result, 10, 2);
  v81 = a2 == 16;
    v81 = a3 == 9;
  if ( v81 )
    HolographicPlatform::_getTransform((int)&v101, _R4, 15, 9);
    goto LABEL_62;
  v82 = a2 == 19;
    v82 = a3 == 9;
  if ( v82 )
  v83 = a2 == 3;
  if ( a2 == 3 )
    v83 = a3 == 2;
  if ( v83 )
    v84 = result + 176;
    v85 = 3;
    v86 = 2;
    return j_j_j__ZN19HolographicPlatform14_insertIntoMapE14TransformSpaceS0_R6Matrix(result, v85, v86, v84);
  v87 = a2 == 4;
  if ( a2 == 4 )
    v87 = a3 == 3;
  if ( v87 )
    v84 = result + 240;
    v85 = 4;
    v86 = 3;
  v88 = a2 == 19;
    v88 = a3 == 15;
  if ( v88 )
    v89 = *(_DWORD *)(result + 656);
    if ( v89 == 2 )
      if ( *(_BYTE *)(_R4 + 661) )
        v90 = &v118;
        v91 = _R4;
        v92 = 18;
        goto LABEL_181;
    else if ( v89 == 1 && *(_BYTE *)(_R4 + 660) )
      v90 = &v118;
      v91 = _R4;
      v92 = 17;
LABEL_181:
      HolographicPlatform::_getTransform((int)v90, v91, v92, 15);
      v11 = &v118;
      v8 = _R4;
      v9 = 19;
      v10 = 15;
      return HolographicPlatform::_insertIntoMap(v8, v9, v10, (int)v11);
    v90 = &v118;
    v91 = _R4;
    v92 = 16;
    goto LABEL_181;
  return result;
}


int __fastcall HolographicPlatform::isGestureDevicePresent(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::permitAudio(HolographicPlatform *this)
{
  return 1;
}


signed int __fastcall HolographicPlatform::_insertTransformBridgeIntoMap(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r9@1
  int v6; // r8@1
  int v7; // r7@1
  int v9; // [sp+0h] [bp-120h]@1
  int v10; // [sp+4h] [bp-11Ch]@1
  int v11; // [sp+8h] [bp-118h]@1
  int v12; // [sp+Ch] [bp-114h]@1
  int v13; // [sp+10h] [bp-110h]@1
  int v14; // [sp+14h] [bp-10Ch]@1
  int v15; // [sp+18h] [bp-108h]@1
  int v16; // [sp+1Ch] [bp-104h]@1
  int v17; // [sp+20h] [bp-100h]@1
  int v18; // [sp+24h] [bp-FCh]@1
  int v19; // [sp+28h] [bp-F8h]@1
  int v20; // [sp+2Ch] [bp-F4h]@1
  int v21; // [sp+30h] [bp-F0h]@1
  int v22; // [sp+34h] [bp-ECh]@1
  int v23; // [sp+38h] [bp-E8h]@1
  int v24; // [sp+3Ch] [bp-E4h]@1
  char v25; // [sp+44h] [bp-DCh]@1
  char v26; // [sp+84h] [bp-9Ch]@1
  int v27; // [sp+C4h] [bp-5Ch]@1
  int v28; // [sp+C8h] [bp-58h]@1
  int v29; // [sp+CCh] [bp-54h]@1
  int v30; // [sp+D0h] [bp-50h]@1
  int v31; // [sp+D4h] [bp-4Ch]@1
  int v32; // [sp+D8h] [bp-48h]@1
  int v33; // [sp+DCh] [bp-44h]@1
  int v34; // [sp+E0h] [bp-40h]@1
  int v35; // [sp+E4h] [bp-3Ch]@1
  int v36; // [sp+E8h] [bp-38h]@1
  int v37; // [sp+ECh] [bp-34h]@1
  int v38; // [sp+F0h] [bp-30h]@1
  int v39; // [sp+F4h] [bp-2Ch]@1
  int v40; // [sp+F8h] [bp-28h]@1
  int v41; // [sp+FCh] [bp-24h]@1
  int v42; // [sp+100h] [bp-20h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  HolographicPlatform::_getTransform((int)&v26, a1, a2, a4);
  HolographicPlatform::_getTransform((int)&v25, v4, v7, v6);
  glm::detail::operator*<float>((int)&v27, (int)&v25, (int)&v26);
  _aeabi_memclr8(&v9, 56);
  v9 = v27;
  v10 = v28;
  v11 = v29;
  v12 = v30;
  v13 = v31;
  v14 = v32;
  v15 = v33;
  v16 = v34;
  v17 = v35;
  v18 = v36;
  v19 = v37;
  v20 = v38;
  v21 = v39;
  v22 = v40;
  v23 = v41;
  v24 = v42;
  return HolographicPlatform::_insertIntoMap(v4, v5, v6, (int)&v9);
}


int __fastcall HolographicPlatform::getAmbientBoost(HolographicPlatform *this, float a2)
{
  return 0;
}


signed int __fastcall HolographicPlatform::processHoloUITimeout(HolographicPlatform *this)
{
  signed int v1; // r1@1
  signed int result; // r0@2
  int v3; // r2@3

  v1 = *((_DWORD *)this + 163);
  if ( v1 >= 1 )
  {
    v3 = v1 - 1;
    if ( v1 < 2 )
      v3 = 0;
    *((_DWORD *)this + 163) = v3;
    result = 0;
      result = 1;
  }
  else
  return result;
}


signed int __fastcall HolographicPlatform::_prepPlatformSpecificTransforms(HolographicPlatform *this)
{
  HolographicPlatform *v1; // r4@1
  __int64 v3; // [sp+0h] [bp-50h]@1
  __int64 v4; // [sp+8h] [bp-48h]@1
  __int64 v5; // [sp+10h] [bp-40h]@1
  int v6; // [sp+18h] [bp-38h]@1
  int v7; // [sp+1Ch] [bp-34h]@1
  __int64 v8; // [sp+20h] [bp-30h]@1
  __int64 v9; // [sp+28h] [bp-28h]@1
  __int64 v10; // [sp+30h] [bp-20h]@1
  __int64 v11; // [sp+38h] [bp-18h]@1

  v1 = this;
  _aeabi_memclr8(&v3, 60);
  v3 = *(_QWORD *)&Matrix::IDENTITY;
  v4 = qword_27E89F0;
  v5 = qword_27E89F8;
  v6 = unk_27E8A00;
  v7 = unk_27E8A04;
  v8 = qword_27E8A08;
  v9 = qword_27E8A10;
  v10 = *(_QWORD *)&qword_27E8A18;
  v11 = *(_QWORD *)&qword_27E8A20;
  HolographicPlatform::_insertIntoMap((int)v1, 11, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 14, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 7, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 7, 14, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 13, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 16, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 9, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 20, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 15, 21, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 21, 23, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 15, 22, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 22, 24, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 25, 15, (int)&v3);
  HolographicPlatform::_insertIntoMap((int)v1, 17, 15, (int)&v3);
  return HolographicPlatform::_insertIntoMap((int)v1, 18, 15, (int)&v3);
}


int __fastcall HolographicPlatform::wantsToStealMouse(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::getVRFOV(HolographicPlatform *this)
{
  return 1119092736;
}


int __fastcall HolographicPlatform::getTransformXDir(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1
  int v7; // [sp+8h] [bp-48h]@1
  int v8; // [sp+Ch] [bp-44h]@1
  int v9; // [sp+10h] [bp-40h]@1

  v5 = a1;
  HolographicPlatform::getTransform((int)&v7, a2, a3, a4, a5);
  *(_DWORD *)v5 = v7;
  *(_DWORD *)(v5 + 4) = v8;
  result = v9;
  *(_DWORD *)(v5 + 8) = v9;
  return result;
}


signed int __fastcall HolographicPlatform::drawHolographicBordersForUI(HolographicPlatform *this)
{
  return 1;
}


int __fastcall HolographicPlatform::_getAimToPoseMatrix(HolographicPlatform *this, int a2)
{
  int v2; // r2@1
  int v3; // r2@4

  v2 = *(_DWORD *)(a2 + 656);
  if ( v2 == 2 )
  {
    if ( *(_BYTE *)(a2 + 661) )
    {
      v3 = 18;
      return HolographicPlatform::_getTransform((int)this, a2, v3, 15);
    }
LABEL_7:
    v3 = 16;
    return HolographicPlatform::_getTransform((int)this, a2, v3, 15);
  }
  if ( v2 != 1 || !*(_BYTE *)(a2 + 660) )
    goto LABEL_7;
  v3 = 17;
  return HolographicPlatform::_getTransform((int)this, a2, v3, 15);
}


int __fastcall HolographicPlatform::getUIScreenWidthHeightScale(HolographicPlatform *this, unsigned int *a2, unsigned int *a3, float *a4)
{
  int result; // r0@1

  result = 0;
  *(_DWORD *)a4 = 0;
  *a2 = 0;
  *a3 = 0;
  return result;
}


int __fastcall HolographicPlatform::isPrimaryHandHeld(HolographicPlatform *this)
{
  return 0;
}


void __fastcall HolographicPlatform::~HolographicPlatform(HolographicPlatform *this)
{
  HolographicPlatform::~HolographicPlatform(this);
}


int __fastcall HolographicPlatform::_getTransform(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r11@1
  int v6; // r4@1
  int v7; // r7@1
  void **v8; // r0@3
  int v9; // r0@6
  unsigned int v10; // r10@7
  unsigned int v11; // r5@7
  unsigned int v12; // r7@7
  unsigned int *v13; // r0@7
  unsigned int *v14; // r9@8
  int v15; // r8@8
  _DWORD *v16; // r6@10
  bool v17; // zf@13
  int v18; // r0@16
  void **v19; // r1@16
  __int64 v20; // kr08_8@17
  unsigned int *v21; // r0@17
  int *v22; // r4@18
  int v23; // r6@20
  bool v24; // zf@23
  __int64 v25; // kr10_8@27
  unsigned int v26; // r7@27
  unsigned int *v27; // r0@27
  unsigned int *v28; // r6@28
  bool v29; // zf@33
  void *v30; // r1@37
  int result; // r0@37
  _DWORD *v32; // r0@42
  pthread_mutex_t *mutex; // [sp+4h] [bp-34h]@7
  int v34; // [sp+8h] [bp-30h]@7
  int v35; // [sp+Ch] [bp-2Ch]@7
  int v36; // [sp+10h] [bp-28h]@7

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( !*(_BYTE *)(a2 + 572) )
  {
    _aeabi_memclr4(a1, 60);
    v8 = &Matrix::IDENTITY;
    goto LABEL_42;
  }
  if ( a3 == a4 )
LABEL_42:
    v32 = *v8;
    *(_DWORD *)v5 = *v32;
    *(_DWORD *)(v5 + 4) = v32[1];
    *(_DWORD *)(v5 + 8) = v32[2];
    *(_DWORD *)(v5 + 12) = v32[3];
    *(_DWORD *)(v5 + 16) = v32[4];
    *(_DWORD *)(v5 + 20) = v32[5];
    *(_DWORD *)(v5 + 24) = v32[6];
    *(_DWORD *)(v5 + 28) = v32[7];
    *(_DWORD *)(v5 + 32) = v32[8];
    *(_DWORD *)(v5 + 36) = v32[9];
    *(_DWORD *)(v5 + 40) = v32[10];
    *(_DWORD *)(v5 + 44) = v32[11];
    *(_DWORD *)(v5 + 48) = v32[12];
    *(_DWORD *)(v5 + 52) = v32[13];
    *(_DWORD *)(v5 + 56) = v32[14];
    result = v32[15];
    *(_DWORD *)(v5 + 60) = result;
    return result;
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 528));
    if ( v9 )
      sub_119CCFC(v9);
  v10 = v7 + (v6 << 16);
  mutex = (pthread_mutex_t *)(v4 + 528);
  v11 = *(_QWORD *)(v4 + 532) >> 32;
  v34 = v4;
  v35 = v6;
  v36 = v7;
  v12 = (v7 + (v6 << 16)) % v11;
  v13 = *(unsigned int **)(*(_QWORD *)(v4 + 532) + 4 * v12);
  if ( !v13 )
    goto LABEL_17;
  v14 = (unsigned int *)*v13;
  v15 = *(_DWORD *)(*v13 + 4);
  while ( v10 != v15 )
    v16 = (_DWORD *)*v14;
    if ( *v14 )
    {
      v15 = v16[1];
      v13 = v14;
      v14 = (unsigned int *)*v14;
      if ( v16[1] % v11 == v12 )
        continue;
    }
  v17 = v13 == 0;
  if ( v13 )
    v11 = *v13;
    v17 = *v13 == 0;
  if ( v17 )
LABEL_17:
    HolographicPlatform::_makeTransform(v34, v36, v6);
    v20 = *(_QWORD *)(v34 + 532);
    v21 = *(unsigned int **)(v20 + 4 * (v10 % HIDWORD(v20)));
    if ( !v21 )
      goto LABEL_27;
    v22 = (int *)*v21;
    v11 = *(_DWORD *)(*v21 + 4);
    while ( v10 != v11 )
      v23 = *v22;
      if ( *v22 )
      {
        v11 = *(_DWORD *)(v23 + 4);
        v21 = (unsigned int *)v20;
        v22 = *(int **)v20;
        if ( *(_DWORD *)(v23 + 4) % HIDWORD(v20) == v10 % HIDWORD(v20) )
          continue;
      }
    v24 = v21 == 0;
    if ( v21 )
      v11 = *v21;
      v24 = *v21 == 0;
    if ( v24 )
LABEL_27:
      HolographicPlatform::_makeTransform(v34, v35, v36);
      v25 = *(_QWORD *)(v34 + 532);
      v26 = v10 % (unsigned int)(*(_QWORD *)(v34 + 532) >> 32);
      v27 = *(unsigned int **)(v25 + 4 * v26);
      if ( !v27 )
        goto LABEL_39;
      v28 = (unsigned int *)*v27;
      v11 = *(_DWORD *)(*v27 + 4);
      while ( v10 != v11 )
        if ( *v28 )
        {
          v11 = *(_DWORD *)(v25 + 4);
          v27 = v28;
          v28 = (unsigned int *)*v28;
          if ( *(_DWORD *)(v25 + 4) % HIDWORD(v25) == v26 )
            continue;
        }
      v29 = v27 == 0;
      if ( v27 )
        v11 = *v27;
        v29 = *v27 == 0;
      if ( v29 )
LABEL_39:
        if ( &pthread_create )
          pthread_mutex_unlock(mutex);
        _aeabi_memclr4(v5, 60);
        v8 = &Matrix::IDENTITY;
        goto LABEL_42;
      _aeabi_memclr4(v5, 64);
      *(_DWORD *)v5 = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v5 + 4) = *(_DWORD *)(v11 + 12);
      *(_DWORD *)(v5 + 8) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v5 + 12) = *(_DWORD *)(v11 + 20);
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v5 + 20) = *(_DWORD *)(v11 + 28);
      *(_DWORD *)(v5 + 24) = *(_DWORD *)(v11 + 32);
      *(_DWORD *)(v5 + 28) = *(_DWORD *)(v11 + 36);
      *(_DWORD *)(v5 + 32) = *(_DWORD *)(v11 + 40);
      *(_DWORD *)(v5 + 36) = *(_DWORD *)(v11 + 44);
      *(_DWORD *)(v5 + 40) = *(_DWORD *)(v11 + 48);
      *(_DWORD *)(v5 + 44) = *(_DWORD *)(v11 + 52);
      v18 = *(_DWORD *)(v11 + 56);
      v19 = &pthread_create_ptr;
    else
  else
    _aeabi_memclr4(v5, 64);
    *(_DWORD *)v5 = *(_DWORD *)(v11 + 8);
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v11 + 16);
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(v11 + 20);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v11 + 24);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(v11 + 28);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v11 + 32);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(v11 + 40);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(v11 + 44);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(v11 + 48);
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(v11 + 52);
    v18 = *(_DWORD *)(v11 + 56);
    v19 = &pthread_create_ptr;
  *(_DWORD *)(v5 + 48) = v18;
  *(_DWORD *)(v5 + 52) = *(_DWORD *)(v11 + 60);
  *(_DWORD *)(v5 + 56) = *(_DWORD *)(v11 + 64);
  v30 = *v19;
  result = *(_DWORD *)(v11 + 68);
  *(_DWORD *)(v5 + 60) = result;
  if ( v30 )
    result = pthread_mutex_unlock(mutex);
  return result;
}


int __fastcall HolographicPlatform::removeFromHMDPositionSpring(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R0,#0x1F8]
    VLDR            S2, [R0,#0x1FC]
    VMUL.F32        S6, S0, S0
    VLDR            S4, [R0,#0x200]
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VADD.F32        S10, S6, S10
    VLDR            S6, =0.001
    VCMPE.F32       S10, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S8, [R1]
      VLDR            S12, [R1,#4]
      VMUL.F32        S6, S8, S8
      VLDR            S14, [R1,#8]
      VMUL.F32        S1, S12, S12
      VMUL.F32        S3, S14, S14
      VADD.F32        S6, S1, S6
      VLDR            S1, =0.0001
      VADD.F32        S6, S6, S3
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S1
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      _R1 = &Vec3::ZERO;
      __asm
      {
        VLDR            S8, [R1]
        VLDR            S12, [R1,#4]
        VLDR            S14, [R1,#8]
      }
    else
        VDIV.F32        S14, S14, S6
        VDIV.F32        S12, S12, S6
        VDIV.F32        S8, S8, S6
      VSQRT.F32       S10, S10
      VCMPE.F32       S10, S1
        VLDR            S1, [R1]
        VLDR            S3, [R1,#4]
        VLDR            S5, [R1,#8]
        VDIV.F32        S5, S4, S10
        VDIV.F32        S3, S2, S10
        VDIV.F32        S1, S0, S10
      VMUL.F32        S14, S5, S14
      VMUL.F32        S12, S3, S12
      VMUL.F32        S8, S1, S8
      VADD.F32        S12, S12, S14
      VADD.F32        S8, S12, S8
      VCMPE.F32       S8, #0.0
        VDIV.F32        S6, S6, S10
        VABS.F32        S8, S8
        VMOV.F32        S10, #1.0
        VMUL.F32        S6, S8, S6
        VCMPE.F32       S6, S10
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S6, S10 }
        VSUB.F32        S6, S10, S6
        VMUL.F32        S0, S6, S0
        VMUL.F32        S2, S6, S2
        VMUL.F32        S4, S4, S6
        VSTR            S0, [R0,#0x1F8]
        VSTR            S2, [R0,#0x1FC]
        VSTR            S4, [R0,#0x200]
  return result;
}


int __fastcall HolographicPlatform::deviceNeedsToBeRemovedForSkinPicker(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::getVRLowFrequencyHUD(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::isVRMode(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::deviceNeedsToBeRemovedForXblSignin(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::getTransformTranslation(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1
  char v7; // [sp+8h] [bp-48h]@1
  int v8; // [sp+38h] [bp-18h]@1
  int v9; // [sp+3Ch] [bp-14h]@1
  int v10; // [sp+40h] [bp-10h]@1

  v5 = a1;
  HolographicPlatform::getTransform((int)&v7, a2, a3, a4, a5);
  *(_DWORD *)v5 = v8;
  *(_DWORD *)(v5 + 4) = v9;
  result = v10;
  *(_DWORD *)(v5 + 8) = v10;
  return result;
}


int __fastcall HolographicPlatform::HolographicPlatform(int a1)
{
  int v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3

  v1 = a1;
  *(_DWORD *)a1 = &off_26D9148;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 1065353216;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 84) = 1065353216;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 1065353216;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 112) = 1065353216;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 1065353216;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 152) = 1065353216;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 1065353216;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 176) = 1065353216;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 216) = 1065353216;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 1065353216;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 240) = 1065353216;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 1065353216;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 0;
  *(_DWORD *)(a1 + 280) = 1065353216;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 300) = 1065353216;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_DWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 1065353216;
  *(_DWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 348) = 1065353216;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_DWORD *)(a1 + 368) = 1065353216;
  *(_DWORD *)(a1 + 380) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 372) = 1065353216;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_DWORD *)(a1 + 392) = 1065353216;
  *(_DWORD *)(a1 + 404) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_DWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 420) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 412) = 1065353216;
  *(_DWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 428) = 0;
  *(_DWORD *)(a1 + 432) = 1065353216;
  *(_DWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 440) = 1065353216;
  *(_DWORD *)(a1 + 444) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 460) = 1065353216;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 480) = 1065353216;
  *(_DWORD *)(a1 + 484) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 500) = 1065353216;
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 524) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 508) = 0;
  *(_DWORD *)(a1 + 528) = 0x4000;
  HIDWORD(v2) = 10;
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 544) = 0;
  *(_DWORD *)(a1 + 548) = 1065353216;
  *(_DWORD *)(a1 + 552) = 0;
  LODWORD(v2) = a1 + 548;
  v3 = sub_119C844(v2);
  *(_DWORD *)(v1 + 536) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 556) = 0;
    v5 = (void *)(v1 + 556);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_119C874();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)(v1 + 532) = v5;
  *(_BYTE *)(v1 + 572) = 0;
  *(_DWORD *)(v1 + 560) = 0;
  *(_DWORD *)(v1 + 564) = 0;
  *(_DWORD *)(v1 + 568) = 0;
  *(_WORD *)(v1 + 573) = 1;
  *(_BYTE *)(v1 + 575) = 1;
  _aeabi_memclr4(v1 + 576, 64);
  *(_QWORD *)(v1 + 576) = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)(v1 + 584) = qword_27E89F0;
  *(_QWORD *)(v1 + 592) = qword_27E89F8;
  *(_QWORD *)(v1 + 600) = qword_27E8A00;
  *(_QWORD *)(v1 + 608) = qword_27E8A08;
  *(_DWORD *)(v1 + 616) = unk_27E8A10;
  *(_QWORD *)(v1 + 620) = qword_27E8A14;
  *(float *)(v1 + 628) = unk_27E8A1C;
  *(_QWORD *)(v1 + 632) = *(_QWORD *)&qword_27E8A20;
  *(_DWORD *)(v1 + 640) = 1065353216;
  *(_DWORD *)(v1 + 644) = 1065353216;
  *(_DWORD *)(v1 + 648) = 1065353216;
  *(_WORD *)(v1 + 660) = 0;
  *(_DWORD *)(v1 + 652) = 0;
  *(_DWORD *)(v1 + 656) = 0;
  *(_DWORD *)(v1 + 664) = &unk_28898CC;
  *(_DWORD *)(v1 + 668) = 3072;
  *(_DWORD *)(v1 + 672) = 0;
  *(_DWORD *)(v1 + 676) = 0;
  *(_DWORD *)(v1 + 680) = 0;
  *(_DWORD *)(v1 + 684) = 1065353216;
  *(_BYTE *)(v1 + 688) = 0;
  *(_DWORD *)(v1 + 692) = 0;
  *(_DWORD *)(v1 + 696) = 1065353216;
  *(_QWORD *)(v1 + 700) = -4647714814386870682LL;
  *(_DWORD *)(v1 + 708) = -1082130432;
  *(_DWORD *)(v1 + 712) = -1082130432;
  *(_DWORD *)(v1 + 716) = -1082130432;
  *(_WORD *)(v1 + 720) = 0;
  *(_BYTE *)(v1 + 722) = 0;
  *(_QWORD *)(v1 + 504) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v1 + 512) = dword_2822498;
  *(_QWORD *)(v1 + 672) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v1 + 680) = dword_2822498;
  return v1;
}


signed int __fastcall HolographicPlatform::allowSplitScreen(HolographicPlatform *this)
{
  return 1;
}


signed int __fastcall HolographicPlatform::clampToMinimumLight(HolographicPlatform *this)
{
  return 1;
}


int __fastcall HolographicPlatform::deviceHasPositionalTracking(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::_handleSituationalTransforms(HolographicPlatform *this)
{
  HolographicPlatform *v1; // r4@1
  int v2; // r0@2
  void **v3; // r0@3
  void *v4; // r0@5
  int v6; // [sp+0h] [bp-108h]@8
  int v7; // [sp+4h] [bp-104h]@8
  int v8; // [sp+8h] [bp-100h]@8
  int v9; // [sp+Ch] [bp-FCh]@8
  int v10; // [sp+10h] [bp-F8h]@8
  __int64 v11; // [sp+14h] [bp-F4h]@8
  int v12; // [sp+1Ch] [bp-ECh]@8
  int v13; // [sp+20h] [bp-E8h]@8
  int v14; // [sp+24h] [bp-E4h]@8
  __int64 v15; // [sp+28h] [bp-E0h]@8
  int v16; // [sp+30h] [bp-D8h]@8
  int v17; // [sp+34h] [bp-D4h]@8
  int v18; // [sp+38h] [bp-D0h]@8
  int v19; // [sp+3Ch] [bp-CCh]@8
  int v20; // [sp+40h] [bp-C8h]@9
  int v21; // [sp+44h] [bp-C4h]@9
  int v22; // [sp+48h] [bp-C0h]@9
  int v23; // [sp+4Ch] [bp-BCh]@9
  int v24; // [sp+50h] [bp-B8h]@9
  __int64 v25; // [sp+54h] [bp-B4h]@9
  int v26; // [sp+5Ch] [bp-ACh]@9
  int v27; // [sp+60h] [bp-A8h]@9
  int v28; // [sp+64h] [bp-A4h]@9
  __int64 v29; // [sp+68h] [bp-A0h]@9
  int v30; // [sp+70h] [bp-98h]@9
  int v31; // [sp+74h] [bp-94h]@9
  int v32; // [sp+78h] [bp-90h]@9
  int v33; // [sp+7Ch] [bp-8Ch]@9
  int v34; // [sp+80h] [bp-88h]@2
  int v35; // [sp+84h] [bp-84h]@2
  int v36; // [sp+88h] [bp-80h]@2
  int v37; // [sp+8Ch] [bp-7Ch]@2
  int v38; // [sp+90h] [bp-78h]@2
  __int64 v39; // [sp+94h] [bp-74h]@2
  int v40; // [sp+9Ch] [bp-6Ch]@2
  int v41; // [sp+A0h] [bp-68h]@2
  int v42; // [sp+A4h] [bp-64h]@2
  __int64 v43; // [sp+A8h] [bp-60h]@2
  int v44; // [sp+B0h] [bp-58h]@2
  int v45; // [sp+B4h] [bp-54h]@2
  int v46; // [sp+B8h] [bp-50h]@2
  int v47; // [sp+BCh] [bp-4Ch]@2
  int v48; // [sp+C0h] [bp-48h]@1
  int v49; // [sp+C4h] [bp-44h]@1
  int v50; // [sp+C8h] [bp-40h]@1
  int v51; // [sp+CCh] [bp-3Ch]@1
  int v52; // [sp+D0h] [bp-38h]@1
  __int64 v53; // [sp+D4h] [bp-34h]@1
  int v54; // [sp+DCh] [bp-2Ch]@1
  int v55; // [sp+E0h] [bp-28h]@1
  int v56; // [sp+E4h] [bp-24h]@1
  __int64 v57; // [sp+E8h] [bp-20h]@1
  int v58; // [sp+F0h] [bp-18h]@1
  int v59; // [sp+F4h] [bp-14h]@1
  int v60; // [sp+F8h] [bp-10h]@1
  int v61; // [sp+FCh] [bp-Ch]@1

  v1 = this;
  v48 = 1065353216;
  v51 = 0;
  v52 = 0;
  v49 = 0;
  v50 = 0;
  v54 = 0;
  v55 = 0;
  v53 = 1065353216LL;
  v56 = 0;
  v57 = 1065353216LL;
  v59 = 0;
  v60 = 0;
  v58 = 0;
  v61 = 1065353216;
  switch ( *((_DWORD *)this + 109) )
  {
    case 1:
    case 2:
      HolographicPlatform::_getTransform((int)&v34, (int)this, 7, 15);
      v48 = v34;
      v49 = v35;
      v50 = v36;
      v51 = v37;
      v52 = v38;
      v53 = v39;
      v54 = v40;
      v55 = v41;
      v56 = v42;
      v57 = v43;
      v58 = v44;
      v59 = v45;
      v60 = v46;
      v2 = v47;
      break;
    case 0:
      v3 = &Matrix::IDENTITY;
      goto LABEL_5;
    case 3:
      v48 = *((_DWORD *)this + 110);
      v49 = *((_DWORD *)this + 111);
      v50 = *((_DWORD *)this + 112);
      v51 = *((_DWORD *)this + 113);
      v52 = *((_DWORD *)this + 114);
      v53 = *(_QWORD *)((char *)this + 460);
      v54 = *((_DWORD *)this + 117);
      v55 = *((_DWORD *)this + 118);
      v56 = *((_DWORD *)this + 119);
      v57 = *((_QWORD *)this + 60);
      v58 = *((_DWORD *)this + 122);
      v59 = *((_DWORD *)this + 123);
      v60 = *((_DWORD *)this + 124);
      v2 = *((_DWORD *)this + 125);
    case 5:
      v48 = *((_DWORD *)this + 77);
      v49 = *((_DWORD *)this + 78);
      v50 = *((_DWORD *)this + 79);
      v51 = *((_DWORD *)this + 80);
      v52 = *((_DWORD *)this + 81);
      v53 = *((_QWORD *)this + 41);
      v54 = *((_DWORD *)this + 84);
      v55 = *((_DWORD *)this + 85);
      v56 = *((_DWORD *)this + 86);
      v57 = *(_QWORD *)((char *)this + 348);
      v58 = *((_DWORD *)this + 89);
      v59 = *((_DWORD *)this + 90);
      v60 = *((_DWORD *)this + 91);
      v2 = *((_DWORD *)this + 92);
    case 6:
      HolographicPlatform::_getTransform((int)&v6, (int)this, 17, 15);
      v48 = v6;
      v49 = v7;
      v50 = v8;
      v51 = v9;
      v52 = v10;
      v53 = v11;
      v54 = v12;
      v55 = v13;
      v56 = v14;
      v57 = v15;
      v58 = v16;
      v59 = v17;
      v60 = v18;
      v2 = v19;
    case 4:
      HolographicPlatform::_getTransform((int)&v20, (int)this, 9, 15);
      v48 = v20;
      v49 = v21;
      v50 = v22;
      v51 = v23;
      v52 = v24;
      v53 = v25;
      v54 = v26;
      v55 = v27;
      v56 = v28;
      v57 = v29;
      v58 = v30;
      v59 = v31;
      v60 = v32;
      v2 = v33;
    default:
LABEL_5:
      v4 = *v3;
      v48 = *(_DWORD *)v4;
      v49 = *((_DWORD *)v4 + 1);
      v50 = *((_DWORD *)v4 + 2);
      v51 = *((_DWORD *)v4 + 3);
      v52 = *((_DWORD *)v4 + 4);
      v53 = *(_QWORD *)((char *)v4 + 20);
      v54 = *((_DWORD *)v4 + 7);
      v55 = *((_DWORD *)v4 + 8);
      v56 = *((_DWORD *)v4 + 9);
      v57 = *((_QWORD *)v4 + 5);
      v58 = *((_DWORD *)v4 + 12);
      v59 = *((_DWORD *)v4 + 13);
      v60 = *((_DWORD *)v4 + 14);
      v2 = *((_DWORD *)v4 + 15);
  }
  v61 = v2;
  return HolographicPlatform::_insertIntoMap((int)v1, 8, 15, (int)&v48);
}


signed int __fastcall HolographicPlatform::_insertIntoMap(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r4@1
  unsigned __int64 *v8; // r4@1
  signed int result; // r0@1
  float v14; // ST20_4@2
  float v15; // ST1C_4@2
  float v16; // ST18_4@2
  float v17; // ST14_4@2
  float v18; // ST10_4@2
  float v19; // ST0C_4@2
  float v20; // ST08_4@2
  unsigned __int64 *v21; // ST04_4@2
  float v22; // ST00_4@2
  float v23; // r11@2
  float v24; // r10@2
  float v25; // r6@2
  float v26; // r5@2
  float v27; // r7@2
  float v28; // r9@2
  float v29; // r4@2
  float v30; // r8@2
  int v31; // [sp+24h] [bp-174h]@2
  float v32; // [sp+28h] [bp-170h]@2
  float v33; // [sp+2Ch] [bp-16Ch]@2
  float v34; // [sp+30h] [bp-168h]@2
  float v35; // [sp+34h] [bp-164h]@2
  float v36; // [sp+38h] [bp-160h]@2
  float v37; // [sp+3Ch] [bp-15Ch]@2
  float v38; // [sp+40h] [bp-158h]@2
  float v39; // [sp+44h] [bp-154h]@2
  float v40; // [sp+48h] [bp-150h]@2
  float v41; // [sp+4Ch] [bp-14Ch]@2
  float v42; // [sp+50h] [bp-148h]@2
  float v43; // [sp+54h] [bp-144h]@2
  float v44; // [sp+58h] [bp-140h]@2
  float v45; // [sp+5Ch] [bp-13Ch]@2
  float v46; // [sp+60h] [bp-138h]@2
  float v47; // [sp+64h] [bp-134h]@2
  float v48; // [sp+68h] [bp-130h]@2
  float v49; // [sp+6Ch] [bp-12Ch]@2
  float v50; // [sp+70h] [bp-128h]@2
  float v51; // [sp+74h] [bp-124h]@2
  float v52; // [sp+78h] [bp-120h]@2
  float v53; // [sp+7Ch] [bp-11Ch]@2
  float v54; // [sp+80h] [bp-118h]@2
  float v55; // [sp+84h] [bp-114h]@2
  float v56; // [sp+88h] [bp-110h]@2
  float v57; // [sp+8Ch] [bp-10Ch]@2
  float v58; // [sp+90h] [bp-108h]@2
  float v59; // [sp+94h] [bp-104h]@2
  float v60; // [sp+98h] [bp-100h]@2
  float v61; // [sp+9Ch] [bp-FCh]@2
  float v62; // [sp+A0h] [bp-F8h]@2
  float v63; // [sp+A4h] [bp-F4h]@2
  int v64; // [sp+ACh] [bp-ECh]@1
  int v65; // [sp+B0h] [bp-E8h]@1
  int v66; // [sp+B4h] [bp-E4h]@1
  int v67; // [sp+B8h] [bp-E0h]@1
  int v68; // [sp+BCh] [bp-DCh]@1
  int v69; // [sp+C0h] [bp-D8h]@1
  int v70; // [sp+C4h] [bp-D4h]@1
  int v71; // [sp+C8h] [bp-D0h]@1
  int v72; // [sp+CCh] [bp-CCh]@1
  int v73; // [sp+D0h] [bp-C8h]@1
  int v74; // [sp+D4h] [bp-C4h]@1
  int v75; // [sp+D8h] [bp-C0h]@1
  int v76; // [sp+DCh] [bp-BCh]@1
  int v77; // [sp+E0h] [bp-B8h]@1
  int v78; // [sp+E4h] [bp-B4h]@1
  int v79; // [sp+E8h] [bp-B0h]@1
  int v80; // [sp+ECh] [bp-ACh]@1
  float v81; // [sp+F0h] [bp-A8h]@1
  float v82; // [sp+F4h] [bp-A4h]@2
  float v83; // [sp+F8h] [bp-A0h]@2
  float v84; // [sp+FCh] [bp-9Ch]@2
  float v85; // [sp+100h] [bp-98h]@2
  float v86; // [sp+104h] [bp-94h]@2
  float v87; // [sp+108h] [bp-90h]@2
  float v88; // [sp+10Ch] [bp-8Ch]@2
  float v89; // [sp+110h] [bp-88h]@2
  float v90; // [sp+114h] [bp-84h]@2
  float v91; // [sp+118h] [bp-80h]@2
  float v92; // [sp+11Ch] [bp-7Ch]@2
  float v93; // [sp+120h] [bp-78h]@2
  float v94; // [sp+124h] [bp-74h]@2
  float v95; // [sp+128h] [bp-70h]@2
  float v96; // [sp+12Ch] [bp-6Ch]@2

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v64 = a2 + (a3 << 16);
  _R7 = a4;
  _aeabi_memclr4(&v65, 60);
  v8 = (unsigned __int64 *)(v6 + 532);
  v65 = *(_DWORD *)_R7;
  v66 = *(_DWORD *)(_R7 + 4);
  v67 = *(_DWORD *)(_R7 + 8);
  v68 = *(_DWORD *)(_R7 + 12);
  v69 = *(_DWORD *)(_R7 + 16);
  v70 = *(_DWORD *)(_R7 + 20);
  v71 = *(_DWORD *)(_R7 + 24);
  v72 = *(_DWORD *)(_R7 + 28);
  v73 = *(_DWORD *)(_R7 + 32);
  v74 = *(_DWORD *)(_R7 + 36);
  v75 = *(_DWORD *)(_R7 + 40);
  v76 = *(_DWORD *)(_R7 + 44);
  v77 = *(_DWORD *)(_R7 + 48);
  v78 = *(_DWORD *)(_R7 + 52);
  v79 = *(_DWORD *)(_R7 + 56);
  v80 = *(_DWORD *)(_R7 + 60);
  result = std::_Hashtable<unsigned int,std::pair<unsigned int const,Matrix>,std::allocator<std::pair<unsigned int const,Matrix>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<unsigned int,Matrix>>(
             (int *)&v81,
             v8,
             (int)&v64);
  __asm
  {
    VLDR            S28, [R7,#0x20]
    VLDR            S26, [R7,#0x34]
    VLDR            S16, [R7,#0x28]
    VLDR            S30, [R7,#0x30]
    VMUL.F32        S4, S28, S26
    VLDR            S24, [R7,#0x24]
    VMUL.F32        S1, S26, S16
    VLDR            S20, [R7,#0x38]
    VMUL.F32        S2, S30, S16
    VMUL.F32        S0, S30, S24
    VLDR            S22, [R7,#0x2C]
    VMUL.F32        S6, S28, S20
    VLDR            S18, [R7,#0x3C]
    VMUL.F32        S8, S30, S22
    VLDR            S17, [R7,#0x18]
    VMUL.F32        S10, S28, S18
    VLDR            S19, [R7,#0x14]
    VMUL.F32        S12, S26, S22
    VLDR            S21, [R7,#0x1C]
    VMUL.F32        S14, S24, S18
    VLDR            S23, [R7,#0x10]
    VMUL.F32        S3, S24, S20
    VLDR            S25, [R7]
    VSUB.F32        S0, S4, S0
    VLDR            S27, [R7,#4]
    VSUB.F32        S2, S6, S2
    VLDR            S29, [R7,#8]
    VMUL.F32        S4, S22, S20
    VLDR            S31, [R7,#0xC]
    VMUL.F32        S6, S18, S16
    VSUB.F32        S8, S10, S8
    VSUB.F32        S10, S14, S12
    VSUB.F32        S1, S3, S1
    VMUL.F32        S12, S17, S0
    VMUL.F32        S14, S2, S19
    VMUL.F32        S2, S21, S2
    VSUB.F32        S4, S6, S4
    VMUL.F32        S6, S17, S8
    VMUL.F32        S3, S17, S10
    VMUL.F32        S8, S8, S19
    VMUL.F32        S0, S21, S0
    VSUB.F32        S12, S14, S12
    VMUL.F32        S10, S23, S10
    VMUL.F32        S14, S19, S4
    VMUL.F32        S4, S23, S4
    VSUB.F32        S0, S0, S8
    VSUB.F32        S6, S14, S3
    VMUL.F32        S14, S21, S1
    VMUL.F32        S1, S23, S1
    VSUB.F32        S2, S2, S4
    VADD.F32        S0, S0, S10
    VADD.F32        S6, S6, S14
    VSUB.F32        S4, S12, S1
    VMUL.F32        S2, S2, S27
    VMUL.F32        S0, S29, S0
    VMUL.F32        S6, S25, S6
    VMUL.F32        S4, S31, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S0, S2
    VLDR            S2, =1.1921e-7
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    _aeabi_memclr8(&v48, 60);
    __asm
    {
      VSTR            S25, [SP,#0x198+var_130]
      VSTR            S27, [SP,#0x198+var_12C]
      VSTR            S29, [SP,#0x198+var_128]
      VSTR            S31, [SP,#0x198+var_124]
      VSTR            S23, [SP,#0x198+var_120]
      VSTR            S19, [SP,#0x198+var_11C]
      VSTR            S17, [SP,#0x198+var_118]
      VSTR            S21, [SP,#0x198+var_114]
      VSTR            S28, [SP,#0x198+var_110]
      VSTR            S24, [SP,#0x198+var_10C]
      VSTR            S16, [SP,#0x198+var_108]
      VSTR            S22, [SP,#0x198+var_104]
      VSTR            S30, [SP,#0x198+var_100]
      VSTR            S26, [SP,#0x198+var_FC]
      VSTR            S20, [SP,#0x198+var_F8]
      VSTR            S18, [SP,#0x198+var_F4]
    }
    glm::inverse<float>((int)&v81, (int)&v48);
    v14 = v81;
    v48 = v81;
    v15 = v82;
    v49 = v82;
    v16 = v83;
    v50 = v83;
    v17 = v84;
    v51 = v84;
    v18 = v85;
    v52 = v85;
    v19 = v86;
    v53 = v86;
    v31 = v4 + (v5 << 16);
    v20 = v87;
    v54 = v87;
    v21 = v8;
    v22 = v88;
    v55 = v88;
    v23 = v89;
    v24 = v90;
    v25 = v91;
    v26 = v92;
    v27 = v93;
    v28 = v94;
    v29 = v95;
    v30 = v96;
    v56 = v89;
    v57 = v90;
    v58 = v91;
    v59 = v92;
    v60 = v93;
    v61 = v94;
    v62 = v95;
    v63 = v96;
    _aeabi_memclr4(&v32, 60);
    v32 = v14;
    v33 = v15;
    v34 = v16;
    v35 = v17;
    v36 = v18;
    v37 = v19;
    v38 = v20;
    v39 = v22;
    v40 = v23;
    v41 = v24;
    v42 = v25;
    v43 = v26;
    v44 = v27;
    v45 = v28;
    v46 = v29;
    v47 = v30;
    result = std::_Hashtable<unsigned int,std::pair<unsigned int const,Matrix>,std::allocator<std::pair<unsigned int const,Matrix>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<unsigned int,Matrix>>(
               (int *)&v81,
               v21,
               (int)&v31);
  return result;
}


signed int __fastcall HolographicPlatform::isFeatureEnabled(HolographicPlatform *this, unsigned int a2)
{
  unsigned int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 167) & a2;
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


void __fastcall HolographicPlatform::HolographicPlatform(HolographicPlatform *this)
{
  HolographicPlatform::HolographicPlatform((int)this);
}


int __fastcall HolographicPlatform::getItemInHandOffset(HolographicPlatform *this, Vec3 *a2)
{
  int result; // r0@1

  result = 0;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  return result;
}


int __fastcall HolographicPlatform::setStereoEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 573) = a2;
  return result;
}


int __fastcall HolographicPlatform::getViewableScreenSize(HolographicPlatform *this, float a2)
{
  return 0;
}


int __fastcall HolographicPlatform::useAlternateTouchInput(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::getGazeCastResultPS(HolographicPlatform *this, Vec3 *a2, Vec3 *a3, Vec3 *a4)
{
  return 0;
}


int __fastcall HolographicPlatform::_flipZ(int a1, int a2, int a3)
{
  int result; // r0@1
  __int64 v10; // r1@1

  _R5 = a3;
  _R4 = a1;
  _aeabi_memclr4(a1, 60);
  *(_DWORD *)_R4 = *(_DWORD *)_R5;
  *(_DWORD *)(_R4 + 4) = *(_DWORD *)(_R5 + 4);
  __asm { VLDR            S0, [R5,#8] }
  result = *(_DWORD *)(_R5 + 12);
  *(_DWORD *)(_R4 + 16) = *(_DWORD *)(_R5 + 16);
  __asm { VNEG.F32        S0, S0 }
  *(_DWORD *)(_R4 + 20) = *(_DWORD *)(_R5 + 20);
  *(_DWORD *)(_R4 + 24) = *(_DWORD *)(_R5 + 24);
  *(_DWORD *)(_R4 + 28) = *(_DWORD *)(_R5 + 28);
  __asm
  {
    VLDR            S2, [R5,#0x24]
    VLDR            S4, [R5,#0x28]
    VLDR            S6, [R5,#0x20]
    VNEG.F32        S2, S2
  }
  v10 = *(_QWORD *)(_R5 + 44);
    VNEG.F32        S4, S4
    VNEG.F32        S6, S6
  *(_DWORD *)(_R4 + 48) = HIDWORD(v10);
  *(_DWORD *)(_R4 + 52) = *(_DWORD *)(_R5 + 52);
  *(_DWORD *)(_R4 + 56) = *(_DWORD *)(_R5 + 56);
  *(_DWORD *)(_R4 + 60) = *(_DWORD *)(_R5 + 60);
    VSTR            S6, [R4,#0x20]
    VSTR            S2, [R4,#0x24]
    VSTR            S4, [R4,#0x28]
  *(_DWORD *)(_R4 + 44) = v10;
    VLDR            S2, [R4]
    VLDR            S4, [R4,#4]
  *(_DWORD *)(_R4 + 12) = result;
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  return result;
}


int __fastcall HolographicPlatform::getHoloDeviceAdapterLUID(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall HolographicPlatform::neverStealMouse(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::isSecondaryHandHeld(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::forceControllerUsage(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::permitRendering(HolographicPlatform *this)
{
  return 1;
}


signed int __fastcall HolographicPlatform::separateEyePasses(HolographicPlatform *this)
{
  return 1;
}


int __fastcall HolographicPlatform::isLocated(HolographicPlatform *this)
{
  return 0;
}


signed int __fastcall HolographicPlatform::getWorkerFramerate(HolographicPlatform *this)
{
  return 60;
}


int __fastcall HolographicPlatform::getTransformYDir(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1
  char v7; // [sp+8h] [bp-48h]@1
  int v8; // [sp+18h] [bp-38h]@1
  int v9; // [sp+1Ch] [bp-34h]@1
  int v10; // [sp+20h] [bp-30h]@1

  v5 = a1;
  HolographicPlatform::getTransform((int)&v7, a2, a3, a4, a5);
  *(_DWORD *)v5 = v8;
  *(_DWORD *)(v5 + 4) = v9;
  result = v10;
  *(_DWORD *)(v5 + 8) = v10;
  return result;
}


signed __int64 __fastcall HolographicPlatform::getRotation(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  signed __int64 result; // r0@1

  v5 = a1;
  HolographicPlatform::getTransform(a1, a2, a3, a4, a5);
  result = 4575657221408423936LL;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 52) = 0;
  *(_QWORD *)(v5 + 56) = 4575657221408423936LL;
  return result;
}


int __fastcall HolographicPlatform::getSoundSystemOutputDevice(int a1, int a2)
{
  int result; // r0@1

  result = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  return result;
}


int __fastcall HolographicPlatform::isGazeDevicePresent(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::holographicMode(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::setVRLayeringActive(int result, bool a2)
{
  *(_BYTE *)(result + 574) = a2;
  return result;
}


int __fastcall HolographicPlatform::allowVRFrameExperience(HolographicPlatform *this)
{
  return 0;
}


int __fastcall HolographicPlatform::setHeadlockedUITransform(int result, int a2)
{
  *(_DWORD *)(result + 576) = *(_DWORD *)a2;
  *(_DWORD *)(result + 580) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 584) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 588) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 592) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 596) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 600) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(result + 604) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 608) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 612) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 616) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 620) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 624) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 628) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 632) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 636) = *(_DWORD *)(a2 + 60);
  return result;
}
