

int __fastcall HolosceneRenderer::renderHand(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  int result; // r0@1
  unsigned int v7; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  v5 = v4;
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
  {
    v7 = *(_WORD *)(v5 + 660);
    if ( (_BYTE)v7 )
    {
      HolosceneRenderer::_renderHand(v2, v3, 17, 1);
      result = *(_BYTE *)(v5 + 661);
    }
    else
      result = v7 >> 8;
    if ( result )
      result = j_j_j__ZN17HolosceneRenderer11_renderHandER13ScreenContext14TransformSpaceb(v2, v3, 18, 0);
  }
  return result;
}


void __fastcall HolosceneRenderer::_buildHoloScreenLivingRoomAndTable(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer::_buildHoloScreenLivingRoomAndTable(this, a2);
}


int __fastcall HolosceneRenderer::renderSurfaceIcon(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r9@1
  int v4; // r0@1
  int v5; // r7@1
  int result; // r0@1
  int v7; // r4@2
  int v8; // r11@2
  int v9; // r8@2
  unsigned int v10; // r4@2
  unsigned int v11; // r5@2
  void *v16; // r0@5
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  int v19; // [sp+8h] [bp-130h]@2
  int v20; // [sp+10h] [bp-128h]@5
  char v21; // [sp+14h] [bp-124h]@5
  char v22; // [sp+20h] [bp-118h]@5
  __int64 v23; // [sp+28h] [bp-110h]@2
  __int64 v24; // [sp+30h] [bp-108h]@2
  __int64 v25; // [sp+38h] [bp-100h]@2
  __int64 v26; // [sp+40h] [bp-F8h]@2
  __int64 v27; // [sp+48h] [bp-F0h]@2
  int v28; // [sp+50h] [bp-E8h]@2
  unsigned __int64 v29; // [sp+54h] [bp-E4h]@2
  float v30; // [sp+5Ch] [bp-DCh]@2
  unsigned __int64 v31; // [sp+60h] [bp-D8h]@2
  float v32; // [sp+6Ch] [bp-CCh]@2
  float v33; // [sp+70h] [bp-C8h]@2
  float v34; // [sp+74h] [bp-C4h]@2
  int v35; // [sp+78h] [bp-C0h]@2
  int v36; // [sp+7Ch] [bp-BCh]@2
  int v37; // [sp+80h] [bp-B8h]@2
  unsigned int v38; // [sp+84h] [bp-B4h]@2
  float v39; // [sp+88h] [bp-B0h]@2
  unsigned int v40; // [sp+8Ch] [bp-ACh]@2
  __int64 v41; // [sp+90h] [bp-A8h]@2
  __int64 v42; // [sp+98h] [bp-A0h]@2
  __int64 v43; // [sp+A0h] [bp-98h]@2
  __int64 v44; // [sp+A8h] [bp-90h]@2
  __int64 v45; // [sp+B0h] [bp-88h]@2
  int v46; // [sp+B8h] [bp-80h]@2
  __int64 v47; // [sp+BCh] [bp-7Ch]@2
  float v48; // [sp+C4h] [bp-74h]@2
  __int64 v49; // [sp+C8h] [bp-70h]@2
  int v50; // [sp+D0h] [bp-68h]@2
  int v51; // [sp+D4h] [bp-64h]@2
  int v52; // [sp+D8h] [bp-60h]@2
  int v53; // [sp+DCh] [bp-5Ch]@2
  int v54; // [sp+E0h] [bp-58h]@2
  signed int v55; // [sp+E4h] [bp-54h]@2
  int v56; // [sp+E8h] [bp-50h]@2
  int v57; // [sp+ECh] [bp-4Ch]@2
  int v58; // [sp+F0h] [bp-48h]@2
  int v59; // [sp+F4h] [bp-44h]@2
  signed int v60; // [sp+F8h] [bp-40h]@2
  int v61; // [sp+FCh] [bp-3Ch]@2
  int v62; // [sp+100h] [bp-38h]@2
  int v63; // [sp+104h] [bp-34h]@2
  int v64; // [sp+108h] [bp-30h]@2
  int v65; // [sp+10Ch] [bp-2Ch]@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  v5 = v4;
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
  {
    v50 = 1065353216;
    v53 = 0;
    v54 = 0;
    v51 = 0;
    v52 = 0;
    v57 = 0;
    v58 = 0;
    v55 = 1065353216;
    v56 = 0;
    v59 = 0;
    v60 = 1065353216;
    v63 = 0;
    v64 = 0;
    v61 = 0;
    v62 = 0;
    v65 = 1065353216;
    v7 = *(_DWORD *)(v3 + 32) + 36;
    v19 = *(_DWORD *)(v3 + 32) + 36;
    mce::WorldConstantsHolographic::getMatrixPatch(v7, (int)&v50);
    _aeabi_memclr8(&v41, 60);
    v41 = *(_QWORD *)&Matrix::IDENTITY;
    v42 = qword_27E89F0;
    v43 = qword_27E89F8;
    v44 = qword_27E8A00;
    v45 = qword_27E8A08;
    v46 = unk_27E8A10;
    v47 = qword_27E8A14;
    v48 = unk_27E8A1C;
    v49 = *(_QWORD *)&qword_27E8A20;
    mce::WorldConstantsHolographic::setMatrixPatch(v7, (int)&v41);
    v38 = 0;
    v39 = 0.0;
    v40 = 0;
    v36 = 0;
    v37 = 0;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0;
    _aeabi_memclr8(&v23, 60);
    v23 = *(_QWORD *)&Matrix::IDENTITY;
    v8 = HIDWORD(qword_27E89F0);
    v24 = qword_27E89F0;
    v25 = qword_27E89F8;
    v9 = HIDWORD(qword_27E8A00);
    v26 = qword_27E8A00;
    v27 = qword_27E8A08;
    v28 = unk_27E8A10;
    v10 = qword_27E8A14;
    v29 = qword_27E8A14;
    v30 = unk_27E8A1C;
    v11 = *((_DWORD *)&qword_27E8A20 + 1);
    v31 = *(_QWORD *)&qword_27E8A20;
    (*(void (__fastcall **)(int, unsigned int *, int *, float *))(*(_DWORD *)v5 + 224))(v5, &v38, &v35, &v32);
    __asm
    {
      VLDR            S0, [SP,#0x138+var_C8]
      VLDR            S4, =0.71
      VABS.F32        S2, S0
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S2, [SP,#0x138+var_C4]
        VMOV.F32        S8, #1.0
        VLDR            S4, [SP,#0x138+var_CC]
        VLDR            S6, =0.0
        VMOV.F32        S12, S2
        VNEG.F32        S10, S4
        VMOV.F32        S14, S6
      }
    else
        VLDR            S2, =0.0
        VMOV.F32        S6, #1.0
        VNEG.F32        S12, S0
        VMOV.F32        S8, S2
        VMOV.F32        S10, S2
        VMOV.F32        S14, S4
      VSTR            S12, [SP,#0x138+var_110]
      VSTR            S14, [SP,#0x138+var_110+4]
      VSTR            S10, [SP,#0x138+var_108]
    HIDWORD(v24) = v8;
    LODWORD(v25) = 0;
      VSTR            S8, [SP,#0x138+var_100+4]
      VSTR            S6, [SP,#0x138+var_F8]
    HIDWORD(v26) = v9;
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S0, [SP,#0x138+var_F0+4]
      VSTR            S2, [SP,#0x138+var_E8]
    v29 = __PAIR__(v38, v10);
    v30 = v39;
    v31 = __PAIR__(v11, v40);
    MatrixStack::push((MatrixStack *)&v22, *(_DWORD *)(v3 + 16) + 16);
    MatrixStack::MatrixStackRef::operator=((int)&v22, (int)&v23);
    sub_119C884((void **)&v20, "hologram");
    mce::RenderMaterialGroup::getMaterial(
      (mce::MaterialPtr *)&v21,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
      &v20);
    mce::Mesh::render((mce::Buffer *)(v2 + 12), v3, (int)&v21, v2 + 1312, 0, 0);
    mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v21);
    v16 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v22);
    result = mce::WorldConstantsHolographic::setMatrixPatch(v19, (int)&v50);
  }
  return result;
}


_QWORD *__fastcall HolosceneRenderer::HolosceneRenderer(_QWORD *a1, ClientInstance *a2)
{
  ClientInstance *v2; // r9@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  int v5; // r0@2
  mce::TextureGroup *v11; // r7@2
  char *v12; // r0@2
  char *v13; // r0@3
  mce::TextureGroup *v14; // r7@4
  char *v15; // r0@4
  char *v16; // r0@5
  mce::TextureGroup *v17; // r7@6
  char *v18; // r0@6
  char *v19; // r0@7
  mce::TextureGroup *v20; // r7@8
  char *v21; // r0@8
  char *v22; // r0@9
  mce::TextureGroup *v23; // r7@10
  char *v24; // r0@10
  char *v25; // r0@11
  void *v26; // r0@12
  void *v27; // r0@13
  void *v28; // r0@14
  void *v29; // r0@15
  void *v30; // r0@16
  void *v31; // r0@17
  unsigned int *v33; // r2@19
  signed int v34; // r1@21
  unsigned int *v35; // r2@23
  signed int v36; // r1@25
  unsigned int *v37; // r2@27
  signed int v38; // r1@29
  unsigned int *v39; // r2@31
  signed int v40; // r1@33
  unsigned int *v41; // r2@35
  signed int v42; // r1@37
  unsigned int *v43; // r2@39
  signed int v44; // r1@41
  unsigned int *v45; // r2@43
  signed int v46; // r1@45
  unsigned int *v47; // r2@47
  signed int v48; // r1@49
  unsigned int *v49; // r2@51
  signed int v50; // r1@53
  unsigned int *v51; // r2@55
  signed int v52; // r1@57
  unsigned int *v53; // r2@59
  signed int v54; // r1@61
  unsigned int *v55; // r2@63
  signed int v56; // r1@65
  unsigned int *v57; // r2@67
  signed int v58; // r1@69
  unsigned int *v59; // r2@71
  signed int v60; // r1@73
  unsigned int *v61; // r2@75
  signed int v62; // r1@77
  unsigned int *v63; // r2@79
  signed int v64; // r1@81
  unsigned int *v65; // r2@83
  signed int v66; // r1@85
  int v67; // [sp+5Ch] [bp-16Ch]@17
  char v68; // [sp+60h] [bp-168h]@17
  int v69; // [sp+70h] [bp-158h]@16
  char v70; // [sp+74h] [bp-154h]@16
  int v71; // [sp+84h] [bp-144h]@15
  char v72; // [sp+88h] [bp-140h]@15
  int v73; // [sp+98h] [bp-130h]@14
  char v74; // [sp+9Ch] [bp-12Ch]@14
  int v75; // [sp+ACh] [bp-11Ch]@13
  char v76; // [sp+B0h] [bp-118h]@13
  int v77; // [sp+C0h] [bp-108h]@12
  char v78; // [sp+C4h] [bp-104h]@12
  char *v79; // [sp+D4h] [bp-F4h]@10
  char *v80; // [sp+D8h] [bp-F0h]@10
  int v81; // [sp+DCh] [bp-ECh]@10
  char v82; // [sp+E0h] [bp-E8h]@10
  char *v83; // [sp+FCh] [bp-CCh]@8
  char *v84; // [sp+100h] [bp-C8h]@8
  int v85; // [sp+104h] [bp-C4h]@8
  char v86; // [sp+108h] [bp-C0h]@8
  char *v87; // [sp+124h] [bp-A4h]@6
  char *v88; // [sp+128h] [bp-A0h]@6
  int v89; // [sp+12Ch] [bp-9Ch]@6
  char v90; // [sp+130h] [bp-98h]@6
  char *v91; // [sp+14Ch] [bp-7Ch]@4
  char *v92; // [sp+150h] [bp-78h]@4
  int v93; // [sp+154h] [bp-74h]@4
  char v94; // [sp+158h] [bp-70h]@4
  char *v95; // [sp+174h] [bp-54h]@2
  char *v96; // [sp+178h] [bp-50h]@2
  int v97; // [sp+17Ch] [bp-4Ch]@2
  char v98; // [sp+180h] [bp-48h]@2
  int v99; // [sp+19Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v3 = &off_26DC730;
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 12));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 14));
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 212));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 39));
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 412));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 64));
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 612));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 89));
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 812));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 114));
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 1012));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 139));
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 1212));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 164));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 167));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 170));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 173));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 176));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v3 + 179));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)((char *)v3 + 1444));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v3 + 182));
  sub_119C884((void **)&v99, "sign_text");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 1468),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v99);
  v4 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
  {
    v33 = (unsigned int *)(v99 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v3 + 185));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)((char *)v3 + 1492));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v3 + 188));
  *((_DWORD *)v3 + 379) = v2;
  *((_DWORD *)v3 + 383) = 0;
  *((_DWORD *)v3 + 382) = 0;
  *((_DWORD *)v3 + 381) = 0;
  *((_DWORD *)v3 + 380) = 0;
  *((_DWORD *)v3 + 384) = &unk_28898CC;
  *((_DWORD *)v3 + 385) = 9;
  *((_DWORD *)v3 + 386) = 1065353216;
  v5 = ClientInstance::getHoloInput(v2);
  _R0 = (*(int (**)(void))(*(_DWORD *)v5 + 288))();
  __asm
    VMOV            S0, R0
    VSTR            S0, [R4,#8]
  HolosceneRenderer::_initResources((HolosceneRenderer *)v3);
  v11 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 379));
  sub_119C884((void **)&v95, "textures/hologram_icon_white");
  v96 = v95;
  v95 = (char *)&unk_28898CC;
  v97 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v98, v11, (int)&v96, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 164), (mce::TexturePtr *)&v98);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v98);
  v12 = v96 - 12;
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v96 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v95 - 12;
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v95 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 379));
  sub_119C884((void **)&v91, "textures/hologram_wall_RGBA");
  v92 = v91;
  v91 = (char *)&unk_28898CC;
  v93 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v94, v14, (int)&v92, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 167), (mce::TexturePtr *)&v94);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v94);
  v15 = v92 - 12;
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v92 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v91 - 12;
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v91 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 379));
  sub_119C884((void **)&v87, "textures/ui/cross_hair");
  v88 = v87;
  v87 = (char *)&unk_28898CC;
  v89 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v90, v17, (int)&v88, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 170), (mce::TexturePtr *)&v90);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v90);
  v18 = v88 - 12;
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v88 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v87 - 12;
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v87 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 379));
  sub_119C884((void **)&v83, "textures/hologram_VR_living_room");
  v84 = v83;
  v83 = (char *)&unk_28898CC;
  v85 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v86, v20, (int)&v84, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 173), (mce::TexturePtr *)&v86);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v86);
  v21 = v84 - 12;
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v84 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = v83 - 12;
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v83 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v3 + 379));
  sub_119C884((void **)&v79, "textures/hologram_hands");
  v80 = v79;
  v79 = (char *)&unk_28898CC;
  v81 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v82, v23, (int)&v80, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 176), (mce::TexturePtr *)&v82);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v82);
  v24 = v80 - 12;
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v80 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v79 - 12;
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v79 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v77, "hololens_UICursor_ingame_pseudoshadow");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v78,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v77);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)(v3 + 179), (mce::MaterialPtr *)&v78);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v78);
  v26 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v77 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  sub_119C884((void **)&v75, "hololens_UICursor_ingame_mainpart");
    (mce::MaterialPtr *)&v76,
    &v75);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)((char *)v3 + 1444), (mce::MaterialPtr *)&v76);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v76);
  v27 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v75 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v73, "living_room");
    (mce::MaterialPtr *)&v74,
    &v73);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)(v3 + 182), (mce::MaterialPtr *)&v74);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v74);
  v28 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v73 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  sub_119C884((void **)&v71, "holo_coord_frame");
    (mce::MaterialPtr *)&v72,
    &v71);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)(v3 + 185), (mce::MaterialPtr *)&v72);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v72);
  v29 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v71 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v69, "holo_hand_pointer");
    (mce::MaterialPtr *)&v70,
    &v69);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)((char *)v3 + 1492), (mce::MaterialPtr *)&v70);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v70);
  v30 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v69 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  sub_119C884((void **)&v67, "holo_hand");
    (mce::MaterialPtr *)&v68,
    &v67);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)(v3 + 188), (mce::MaterialPtr *)&v68);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v68);
  v31 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v67 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  return v3;
}


int __fastcall HolosceneRenderer::resetLivingRoomHintText(int a1, int *a2, int a3, signed int a4)
{
  int v4; // r6@1
  signed int v5; // r4@1
  int v6; // r5@1
  int v11; // r2@1
  int v12; // r3@1
  int result; // r0@3

  v4 = a1;
  v5 = a4;
  v6 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 1536), a2);
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, =0.0
  }
  v11 = *(_DWORD *)(v6 + 4);
  v12 = *(_DWORD *)(v6 + 8);
  if ( v5 % 2 == 1 )
    __asm { VMOVEQ.F32      S2, S0 }
  *(_DWORD *)(v4 + 1520) = *(_DWORD *)v6;
  *(_DWORD *)(v4 + 1524) = v11;
  *(_DWORD *)(v4 + 1528) = v12;
  result = v4 + 1532;
  *(_DWORD *)(v4 + 1540) = v5;
  __asm { VSTR            S2, [R0] }
  return result;
}


void __fastcall HolosceneRenderer::_buildGazeIconMesh(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer *v2; // r6@1
  char *v3; // r4@1
  Tessellator *v4; // r5@1
  int v5; // r0@1
  char *v6; // r0@2
  char *v7; // r0@3
  char *v8; // r0@14
  unsigned int *v9; // r2@16
  signed int v10; // r1@18
  unsigned int *v11; // r2@20
  signed int v12; // r1@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  char v15; // [sp+4h] [bp-12Ch]@4
  char *v16; // [sp+6Ch] [bp-C4h]@2
  char *v17; // [sp+70h] [bp-C0h]@2
  int v18; // [sp+74h] [bp-BCh]@2
  char v19; // [sp+78h] [bp-B8h]@2
  char *v20; // [sp+DCh] [bp-54h]@2
  void *v21; // [sp+E0h] [bp-50h]@2
  void *v22; // [sp+ECh] [bp-44h]@10
  void *v23; // [sp+F8h] [bp-38h]@8
  void *v24; // [sp+104h] [bp-2Ch]@6
  void *ptr; // [sp+110h] [bp-20h]@4

  v2 = this;
  v3 = (char *)this + 12;
  v4 = a2;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 12));
  v5 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 379));
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 44))() == 1 )
  {
    v20 = (char *)&unk_28898CC;
    _aeabi_memclr4(&v21, 60);
    mce::Mesh::Mesh((mce::Mesh *)&v19);
    mce::Mesh::operator=((int)v3, (int)&v19);
    mce::Mesh::~Mesh((mce::Mesh *)&v19);
    sub_119C884((void **)&v16, "holograms/hologram_icon_crosshair_white.obj");
    v17 = v16;
    v16 = (char *)&unk_28898CC;
    v18 = 0;
    LoadObjModel((ObjModel *)&v20, (const ResourceLocation *)&v17);
    v6 = v17 - 12;
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
    v7 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    ObjModel::buildMesh((ObjModel *)&v15, (Tessellator *)&v20, *(float *)&v4, 947628162);
    mce::Mesh::operator=((int)v3, (int)&v15);
    mce::Mesh::~Mesh((mce::Mesh *)&v15);
    if ( ptr )
      operator delete(ptr);
    if ( v24 )
      operator delete(v24);
    if ( v23 )
      operator delete(v23);
    if ( v22 )
      operator delete(v22);
    if ( v21 )
      operator delete(v21);
    v8 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v20 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
  }
}


void __fastcall HolosceneRenderer::_buildHandMesh(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer::_buildHandMesh(this, a2);
}


int __fastcall HolosceneRenderer::renderFrame_Iconograph(int a1, int a2)
{
  int v3; // r4@1
  char v4; // r0@1
  int v5; // r0@4
  int v6; // r6@4
  int result; // r0@4
  char *v8; // r0@7
  char *v9; // r0@8
  char *v10; // r0@19
  int v16; // r8@20
  void *v17; // r0@20
  int v18; // r4@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  int v27; // [sp+14h] [bp-204h]@6
  __int64 v28; // [sp+18h] [bp-200h]@21
  __int64 v29; // [sp+20h] [bp-1F8h]@21
  __int64 v30; // [sp+28h] [bp-1F0h]@21
  __int64 v31; // [sp+30h] [bp-1E8h]@21
  __int64 v32; // [sp+38h] [bp-1E0h]@21
  int v33; // [sp+40h] [bp-1D8h]@21
  __int64 v34; // [sp+44h] [bp-1D4h]@21
  float v35; // [sp+4Ch] [bp-1CCh]@21
  __int64 v36; // [sp+50h] [bp-1C8h]@21
  int v37; // [sp+60h] [bp-1B8h]@20
  char v38; // [sp+64h] [bp-1B4h]@20
  char v39; // [sp+70h] [bp-1A8h]@20
  float v40; // [sp+78h] [bp-1A0h]@20
  int v41; // [sp+A8h] [bp-170h]@20
  float v42; // [sp+ACh] [bp-16Ch]@20
  __int64 v43; // [sp+B0h] [bp-168h]@20
  char v44; // [sp+BCh] [bp-15Ch]@20
  int v45; // [sp+ECh] [bp-12Ch]@20
  int v46; // [sp+F0h] [bp-128h]@20
  int v47; // [sp+F4h] [bp-124h]@20
  char v48; // [sp+FCh] [bp-11Ch]@9
  char *v49; // [sp+164h] [bp-B4h]@7
  char *v50; // [sp+168h] [bp-B0h]@7
  int v51; // [sp+16Ch] [bp-ACh]@7
  char *v52; // [sp+170h] [bp-A8h]@7
  void *v53; // [sp+174h] [bp-A4h]@7
  void *v54; // [sp+180h] [bp-98h]@15
  void *v55; // [sp+18Ch] [bp-8Ch]@13
  void *v56; // [sp+198h] [bp-80h]@11
  void *ptr; // [sp+1A4h] [bp-74h]@9
  int v58; // [sp+1B4h] [bp-64h]@20
  int v59; // [sp+1E4h] [bp-34h]@20
  int v60; // [sp+1E8h] [bp-30h]@20
  int v61; // [sp+1ECh] [bp-2Ch]@20

  _R5 = a1;
  v3 = a2;
  v4 = byte_27D11C4;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire(&byte_27D11C4) )
  {
    mce::Mesh::Mesh((mce::Mesh *)&unk_27D1210);
    _cxa_atexit(mce::Mesh::~Mesh);
    j___cxa_guard_release(&byte_27D11C4);
  }
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)(_R5 + 1516));
  v6 = v5;
  result = (*(int (**)(void))(*(_DWORD *)v5 + 284))();
  if ( result )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 44))(v6);
    if ( result == 1 )
    {
      v27 = v3;
      if ( !byte_27D11C1 )
      {
        byte_27D11C1 = 1;
        v52 = (char *)&unk_28898CC;
        _aeabi_memclr4(&v53, 60);
        sub_119C884((void **)&v49, "holograms/hologram_icon_tv_white.obj");
        v50 = v49;
        v49 = (char *)&unk_28898CC;
        v51 = 0;
        LoadObjModel((ObjModel *)&v52, (const ResourceLocation *)&v50);
        v8 = v50 - 12;
        if ( (int *)(v50 - 12) != &dword_28898C0 )
        {
          v21 = (unsigned int *)(v50 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v8);
        }
        v9 = v49 - 12;
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v49 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v9);
        ObjModel::buildMesh((ObjModel *)&v48, (Tessellator *)&v52, *(float *)(v3 + 40), 959693186);
        mce::Mesh::operator=((int)&unk_27D1210, (int)&v48);
        mce::Mesh::~Mesh((mce::Mesh *)&v48);
        if ( ptr )
          operator delete(ptr);
        if ( v56 )
          operator delete(v56);
        if ( v55 )
          operator delete(v55);
        if ( v54 )
          operator delete(v54);
        if ( v53 )
          operator delete(v53);
        v10 = v52 - 12;
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v52 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v10);
      }
      HolographicPlatform::getTransform((int)&v44, v6, 7, 15, 0);
      _aeabi_memclr8(&v40, 60);
      _R4 = &Matrix::IDENTITY;
      v41 = HIDWORD(qword_27E8A14);
      v42 = unk_27E8A1C;
      v43 = *(_QWORD *)&qword_27E8A20;
      __asm
        VLDR            S0, [R4,#4]
        VLDR            S9, [R5,#8]
        VLDR            S2, [R4,#8]
        VLDR            S4, [R4,#0xC]
        VMUL.F32        S0, S0, S9
        VLDR            S6, [R4,#0x10]
        VMUL.F32        S2, S2, S9
        VLDR            S8, [R4,#0x14]
        VMUL.F32        S4, S4, S9
        VLDR            S10, [R4,#0x18]
        VMUL.F32        S6, S6, S9
        VLDR            S12, [R4,#0x1C]
        VMUL.F32        S8, S8, S9
        VLDR            S14, [R4]
        VMUL.F32        S10, S10, S9
        VLDR            S1, [R4,#0x20]
        VMUL.F32        S12, S12, S9
        VLDR            S3, [R4,#0x24]
        VMUL.F32        S14, S14, S9
        VLDR            S5, [R4,#0x28]
        VMUL.F32        S1, S1, S9
        VLDR            S7, [R4,#0x2C]
        VMUL.F32        S3, S3, S9
        VMUL.F32        S5, S5, S9
        VMUL.F32        S7, S7, S9
        VSTR            S14, [SP,#0x218+var_1A0]
        VSTR            S0, [SP,#0x218+var_19C]
        VSTR            S2, [SP,#0x218+var_198]
        VSTR            S4, [SP,#0x218+var_194]
        VSTR            S6, [SP,#0x218+var_190]
        VSTR            S8, [SP,#0x218+var_18C]
        VSTR            S10, [SP,#0x218+var_188]
        VSTR            S12, [SP,#0x218+var_184]
        VSTR            S1, [SP,#0x218+var_180]
        VSTR            S3, [SP,#0x218+var_17C]
        VSTR            S5, [SP,#0x218+var_178]
        VSTR            S7, [SP,#0x218+var_174]
      glm::detail::operator*<float>((int)&v58, (int)&v40, (int)&v44);
      v59 = v45;
      v60 = v46;
      v61 = v47;
      v16 = *(_DWORD *)(v27 + 32) + 36;
      mce::WorldConstantsHolographic::setMatrixPatch(v16, (int)&v58);
      MatrixStack::push((MatrixStack *)&v39, *(_DWORD *)(v27 + 16) + 16);
      MatrixStack::MatrixStackRef::operator=((int)&v39, (int)&Matrix::IDENTITY);
      sub_119C884((void **)&v37, "hologram");
      mce::RenderMaterialGroup::getMaterial(
        (mce::MaterialPtr *)&v38,
        (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
        &v37);
      mce::Mesh::render((mce::Buffer *)&unk_27D1210, v27, (int)&v38, _R5 + 1312, 0, 0);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v38);
      v17 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v37 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        else
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v39);
      mce::WorldConstantsHolographic::setMatrixPatch(v16, (int)&v44);
      (*(void (**)(void))(*(_DWORD *)v6 + 192))();
      v18 = *(_DWORD *)(_R5 + 8);
      _aeabi_memclr8(&v28, 60);
      v28 = *(_QWORD *)&Matrix::IDENTITY;
      v29 = qword_27E89F0;
      v30 = qword_27E89F8;
      v31 = qword_27E8A00;
      v32 = qword_27E8A08;
      v33 = unk_27E8A10;
      v34 = qword_27E8A14;
      v35 = unk_27E8A1C;
      v36 = *(_QWORD *)&qword_27E8A20;
      result = HolosceneRenderer::renderFrame_Level(_R5, v27, v18, (int)&v28);
    }
  return result;
}


int __fastcall HolosceneRenderer::_computeAlphaFromHintCycles(HolosceneRenderer *this)
{
  int result; // r0@3

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, =0.0
  }
  if ( *((_DWORD *)this + 385) % 2 == 1 )
    __asm { VMOVEQ.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}


int __fastcall HolosceneRenderer::renderHandFrames(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  int result; // r0@1
  unsigned int v7; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  v5 = v4;
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
  {
    v7 = *(_WORD *)(v5 + 660);
    if ( (_BYTE)v7 )
    {
      HolosceneRenderer::_renderDebugHand(v2, v3, 17);
      result = *(_BYTE *)(v5 + 661);
    }
    else
      result = v7 >> 8;
    if ( result )
      result = j_j_j__ZN17HolosceneRenderer16_renderDebugHandER13ScreenContext14TransformSpace(v2, v3, 18);
  }
  return result;
}


int __fastcall HolosceneRenderer::_buildHandPointerMesh(HolosceneRenderer *this, Tessellator *a2)
{
  char *v2; // r8@1
  Tessellator *v3; // r5@1
  char v5; // [sp+8h] [bp-120h]@1
  int v6; // [sp+6Ch] [bp-BCh]@1
  int v7; // [sp+70h] [bp-B8h]@1
  int v8; // [sp+74h] [bp-B4h]@1
  int v9; // [sp+78h] [bp-B0h]@1
  signed int v10; // [sp+7Ch] [bp-ACh]@1
  signed int v11; // [sp+80h] [bp-A8h]@1
  int v12; // [sp+84h] [bp-A4h]@1
  int v13; // [sp+88h] [bp-A0h]@1
  signed int v14; // [sp+8Ch] [bp-9Ch]@1
  int v15; // [sp+90h] [bp-98h]@1
  int v16; // [sp+94h] [bp-94h]@1
  signed int v17; // [sp+98h] [bp-90h]@1
  int v18; // [sp+9Ch] [bp-8Ch]@1
  int v19; // [sp+A0h] [bp-88h]@1
  signed int v20; // [sp+A4h] [bp-84h]@1
  signed int v21; // [sp+A8h] [bp-80h]@1
  int v22; // [sp+ACh] [bp-7Ch]@1
  signed int v23; // [sp+B0h] [bp-78h]@1
  int v24; // [sp+B4h] [bp-74h]@1
  int v25; // [sp+B8h] [bp-70h]@1
  signed int v26; // [sp+BCh] [bp-6Ch]@1
  int v27; // [sp+C0h] [bp-68h]@1
  int v28; // [sp+C4h] [bp-64h]@1
  int v29; // [sp+C8h] [bp-60h]@1
  signed int v30; // [sp+CCh] [bp-5Ch]@1
  int v31; // [sp+D0h] [bp-58h]@1
  int v32; // [sp+D4h] [bp-54h]@1
  signed int v33; // [sp+D8h] [bp-50h]@1
  int v34; // [sp+DCh] [bp-4Ch]@1
  int v35; // [sp+E0h] [bp-48h]@1
  signed int v36; // [sp+E4h] [bp-44h]@1
  int v37; // [sp+E8h] [bp-40h]@1
  int v38; // [sp+ECh] [bp-3Ch]@1
  signed int v39; // [sp+F0h] [bp-38h]@1
  int v40; // [sp+F4h] [bp-34h]@1
  int v41; // [sp+F8h] [bp-30h]@1
  signed int v42; // [sp+FCh] [bp-2Ch]@1
  signed int v43; // [sp+100h] [bp-28h]@1
  int v44; // [sp+104h] [bp-24h]@1

  v2 = (char *)this + 612;
  v3 = a2;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 612));
  Tessellator::begin((int)v3, 2, 9, 0);
  v41 = 1065353216;
  v42 = 1065353216;
  v43 = 1065353216;
  v44 = 0;
  Tessellator::color(v3, (const Color *)&v41);
  v38 = -1165815185;
  v39 = -1165815185;
  v40 = 0;
  Tessellator::vertex(v3, (const Vec3 *)&v38);
  v35 = -1165815185;
  v36 = 981668463;
  v37 = 0;
  Tessellator::vertex(v3, (const Vec3 *)&v35);
  v32 = 981668463;
  v33 = 981668463;
  v34 = 0;
  Tessellator::vertex(v3, (const Vec3 *)&v32);
  v29 = 981668463;
  v30 = -1165815185;
  v31 = 0;
  Tessellator::vertex(v3, (const Vec3 *)&v29);
  v25 = 1065353216;
  v26 = 1065353216;
  v27 = 1065353216;
  v28 = 1036831949;
  Tessellator::color(v3, (const Color *)&v25);
  v22 = -1171341627;
  v23 = -1171341627;
  v24 = 1052770304;
  Tessellator::vertex(v3, (const Vec3 *)&v22);
  v19 = -1171341627;
  v20 = 976142021;
  v21 = 1052770304;
  Tessellator::vertex(v3, (const Vec3 *)&v19);
  v16 = 976142021;
  v17 = 976142021;
  v18 = 1052770304;
  Tessellator::vertex(v3, (const Vec3 *)&v16);
  v13 = 976142021;
  v14 = -1171341627;
  v15 = 1052770304;
  Tessellator::vertex(v3, (const Vec3 *)&v13);
  v9 = 1065353216;
  v10 = 1065353216;
  v11 = 1065353216;
  v12 = 0;
  Tessellator::color(v3, (const Color *)&v9);
  v6 = 0;
  v7 = 0;
  v8 = 1061158912;
  Tessellator::vertex(v3, (const Vec3 *)&v6);
  Tessellator::beginIndices(v3, 0);
  Tessellator::quad(v3, 0, 1u, 5u, 4u);
  Tessellator::quad(v3, 1u, 2u, 6u, 5u);
  Tessellator::quad(v3, 2u, 3u, 7u, 6u);
  Tessellator::quad(v3, 3u, 0, 4u, 7u);
  Tessellator::triangle(v3, 5u, 4u, 8u);
  Tessellator::triangle(v3, 6u, 5u, 8u);
  Tessellator::triangle(v3, 7u, 6u, 8u);
  Tessellator::triangle(v3, 4u, 7u, 8u);
  Tessellator::end((Tessellator *)&v5, (const char *)v3, 0, 0);
  mce::Mesh::operator=((int)v2, (int)&v5);
  return mce::Mesh::~Mesh((mce::Mesh *)&v5);
}


void __fastcall HolosceneRenderer::_buildHandMesh(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer *v2; // r4@1
  char *v3; // r6@1
  Tessellator *v4; // r5@1
  char *v5; // r0@1
  char *v6; // r0@2
  char *v7; // r0@3
  char *v8; // r0@4
  char *v9; // r0@15
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  unsigned int *v18; // r2@33
  signed int v19; // r1@35
  int v20; // [sp+0h] [bp-140h]@5
  char *v21; // [sp+68h] [bp-D8h]@3
  char *v22; // [sp+6Ch] [bp-D4h]@3
  int v23; // [sp+70h] [bp-D0h]@3
  char v24; // [sp+74h] [bp-CCh]@3
  char *v25; // [sp+DCh] [bp-64h]@1
  char *v26; // [sp+E0h] [bp-60h]@1
  int v27; // [sp+E4h] [bp-5Ch]@1
  char *v28; // [sp+E8h] [bp-58h]@1
  void *v29; // [sp+ECh] [bp-54h]@1
  void *v30; // [sp+F8h] [bp-48h]@11
  void *v31; // [sp+104h] [bp-3Ch]@9
  void *v32; // [sp+110h] [bp-30h]@7
  void *ptr; // [sp+11Ch] [bp-24h]@5

  v2 = this;
  v3 = (char *)this + 1112;
  v4 = a2;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 1112));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v2 + 1212));
  v28 = (char *)&unk_28898CC;
  _aeabi_memclr4(&v29, 60);
  sub_119C884((void **)&v25, "holograms/hologram_hand_left.obj");
  v26 = v25;
  v25 = (char *)&unk_28898CC;
  v27 = 0;
  LoadObjModel((ObjModel *)&v28, (const ResourceLocation *)&v26);
  v5 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v26 - 4);
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
  v6 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v25 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  ObjModel::buildMesh((ObjModel *)&v24, (Tessellator *)&v28, *(float *)&v4, 1000593162);
  mce::Mesh::operator=((int)v3, (int)&v24);
  mce::Mesh::~Mesh((mce::Mesh *)&v24);
  sub_119C884((void **)&v21, "holograms/hologram_hand_right.obj");
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  LoadObjModel((ObjModel *)&v28, (const ResourceLocation *)&v22);
  v7 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  ObjModel::buildMesh((ObjModel *)&v20, (Tessellator *)&v28, *(float *)&v4, 1000593162);
  mce::Mesh::operator=((int)v2 + 1212, (int)&v20);
  mce::Mesh::~Mesh((mce::Mesh *)&v20);
  if ( ptr )
    operator delete(ptr);
  if ( v32 )
    operator delete(v32);
  if ( v31 )
    operator delete(v31);
  if ( v30 )
    operator delete(v30);
  if ( v29 )
    operator delete(v29);
  v9 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


int __fastcall HolosceneRenderer::renderHandPointer(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  v5 = v4;
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
  {
    result = *(_BYTE *)(v5 + 661);
    if ( *(_BYTE *)(v5 + 661) )
      result = j_j_j__ZN17HolosceneRenderer18_renderHandPointerER13ScreenContext14TransformSpace(v2, v3, 18);
  }
  return result;
}


int __fastcall HolosceneRenderer::renderCoordinateFrame(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  char v15; // [sp+8h] [bp-68h]@1
  int v16; // [sp+10h] [bp-60h]@1
  int v17; // [sp+14h] [bp-5Ch]@1
  int v18; // [sp+18h] [bp-58h]@1
  int v19; // [sp+1Ch] [bp-54h]@1
  int v20; // [sp+20h] [bp-50h]@1
  signed int v21; // [sp+24h] [bp-4Ch]@1
  int v22; // [sp+28h] [bp-48h]@1
  int v23; // [sp+2Ch] [bp-44h]@1
  int v24; // [sp+30h] [bp-40h]@1
  int v25; // [sp+34h] [bp-3Ch]@1
  signed int v26; // [sp+38h] [bp-38h]@1
  int v27; // [sp+3Ch] [bp-34h]@1
  int v28; // [sp+40h] [bp-30h]@1
  int v29; // [sp+44h] [bp-2Ch]@1
  int v30; // [sp+48h] [bp-28h]@1
  int v31; // [sp+4Ch] [bp-24h]@1

  v4 = a1;
  v5 = a2;
  v16 = 1065353216;
  v19 = 0;
  v20 = 0;
  _R9 = a4;
  v17 = 0;
  v18 = 0;
  v7 = a3;
  v23 = 0;
  v24 = 0;
  v21 = 1065353216;
  v22 = 0;
  v25 = 0;
  v26 = 1065353216;
  v29 = 0;
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v31 = 1065353216;
  v8 = *(_DWORD *)(a2 + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v8, (int)&v16);
  mce::WorldConstantsHolographic::setMatrixPatch(v8, v7);
  MatrixStack::pushIdentity((MatrixStack *)&v15, *(_DWORD *)(v5 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v15);
  __asm
  {
    VMOV            S0, R9
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S2, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VSTR            S2, [R0,#0x14]
    VLDR            S2, [R0,#0x18]
    VSTR            S2, [R0,#0x18]
    VLDR            S2, [R0,#0x1C]
    VSTR            S2, [R0,#0x1C]
    VLDR            S2, [R0,#0x20]
    VSTR            S2, [R0,#0x20]
    VLDR            S2, [R0,#0x24]
    VSTR            S2, [R0,#0x24]
    VLDR            S2, [R0,#0x28]
    VSTR            S2, [R0,#0x28]
    VLDR            S2, [R0,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x2C]
  }
  mce::Mesh::render((mce::Buffer *)(v4 + 712), v5, v4 + 1480, 0, 0);
  mce::WorldConstantsHolographic::setMatrixPatch(v8, (int)&v16);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v15);
}


void __fastcall HolosceneRenderer::~HolosceneRenderer(HolosceneRenderer *this)
{
  HolosceneRenderer::~HolosceneRenderer(this);
}


int __fastcall HolosceneRenderer::_drawCrosshairMeshes(float a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  float v10; // r10@1
  mce::Buffer *v11; // r11@1
  mce::Buffer *v12; // r8@1
  int v13; // r4@1
  int v18; // r0@4
  __int64 v19; // kr00_8@4
  int v20; // r5@4
  int v22; // r0@4
  int v23; // r0@4
  int v24; // r5@4
  int v25; // r6@4
  int v26; // r7@4
  int v28; // r0@4
  float v30; // [sp+8h] [bp-78h]@4
  char v31; // [sp+18h] [bp-68h]@4
  float v32; // [sp+20h] [bp-60h]@4
  char v33; // [sp+30h] [bp-50h]@4

  v10 = a1;
  v11 = (mce::Buffer *)LODWORD(a4);
  v12 = (mce::Buffer *)LODWORD(a3);
  v13 = LODWORD(a2);
  __asm
  {
    VMOV.F32        S18, #1.0
    VLDR            S16, [SP,#0x80+arg_4]
  }
  switch ( a10 )
    case 1:
    case 2:
      __asm
      {
        VMOV.F32        S0, #0.5; jumptable 00F08120 cases 1,2
        VMOV.F32        S18, #0.25
        VMUL.F32        S16, S16, S0
      }
      break;
    case 0:
    case 3:
    default:
        VMOV.F32        S16, #0.5; jumptable 00F08120 default case
        VLDR            S18, =0.15
  MatrixStack::push((MatrixStack *)&v33, *(_DWORD *)(LODWORD(a2) + 16) + 16);
  MatrixStack::MatrixStackRef::operator=((int)&v33, a9);
  v18 = MatrixStack::MatrixStackRef::operator->((int)&v33);
  v19 = *(_QWORD *)(v18 + 48);
  v20 = *(_DWORD *)(v18 + 56);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v33);
    VLDR            S20, [SP,#0x80+arg_C]
    VLDR            S0, [SP,#0x80+arg_8]
    VLDR            S2, [R0]
    VMUL.F32        S0, S20, S0
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S2, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VSTR            S2, [R0,#0x14]
    VLDR            S2, [R0,#0x18]
    VSTR            S2, [R0,#0x18]
    VLDR            S2, [R0,#0x1C]
    VSTR            S2, [R0,#0x1C]
    VLDR            S2, [R0,#0x20]
    VSTR            S2, [R0,#0x20]
    VLDR            S2, [R0,#0x24]
    VSTR            S2, [R0,#0x24]
    VLDR            S2, [R0,#0x28]
    VSTR            S2, [R0,#0x28]
    VLDR            S2, [R0,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x2C]
  v22 = MatrixStack::MatrixStackRef::operator->((int)&v33);
    VLDR            S22, [SP,#0x80+arg_0]
    VLDR            S0, =0.7
    VLDR            S2, =0.1
    VMUL.F32        S0, S22, S0
  *(_QWORD *)(v22 + 48) = v19;
  __asm { VMUL.F32        S2, S16, S2 }
  *(_DWORD *)(v22 + 56) = v20;
    VMUL.F32        S0, S0, S18
    VSTR            S2, [SP,#0x80+var_60]
    VSTR            S2, [SP,#0x80+var_5C]
    VSTR            S2, [SP,#0x80+var_58]
    VSTR            S0, [SP,#0x80+var_54]
  ShaderColor::setColor(*(ShaderColor **)(v13 + 48), (const Color *)&v32);
  mce::Mesh::render(v11, v13, LODWORD(v10) + 1432, 0, 0);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v33);
  MatrixStack::push((MatrixStack *)&v31, *(_DWORD *)(v13 + 16) + 16);
  MatrixStack::MatrixStackRef::operator=((int)&v31, a9);
  v23 = MatrixStack::MatrixStackRef::operator->((int)&v31);
  v24 = *(_DWORD *)(v23 + 48);
  v25 = *(_DWORD *)(v23 + 52);
  v26 = *(_DWORD *)(v23 + 56);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v31);
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S20
    VSTR            S0, [R0]
    VLDR            S0, [R0,#4]
    VSTR            S0, [R0,#4]
    VLDR            S0, [R0,#8]
    VSTR            S0, [R0,#8]
    VLDR            S0, [R0,#0xC]
    VSTR            S0, [R0,#0xC]
    VLDR            S0, [R0,#0x10]
    VSTR            S0, [R0,#0x10]
    VLDR            S0, [R0,#0x14]
    VSTR            S0, [R0,#0x14]
    VLDR            S0, [R0,#0x18]
    VSTR            S0, [R0,#0x18]
    VLDR            S0, [R0,#0x1C]
    VSTR            S0, [R0,#0x1C]
    VLDR            S0, [R0,#0x20]
    VSTR            S0, [R0,#0x20]
    VLDR            S0, [R0,#0x24]
    VSTR            S0, [R0,#0x24]
    VLDR            S0, [R0,#0x28]
    VSTR            S0, [R0,#0x28]
    VLDR            S0, [R0,#0x2C]
  v28 = MatrixStack::MatrixStackRef::operator->((int)&v31);
    VLDR            S0, =0.85
    VMUL.F32        S2, S18, S22
  v28 += 48;
  __asm { VMUL.F32        S0, S16, S0 }
  *(_DWORD *)v28 = v24;
  *(_DWORD *)(v28 + 4) = v25;
  *(_DWORD *)(v28 + 8) = v26;
    VSTR            S0, [SP,#0x80+var_78]
    VSTR            S0, [SP,#0x80+var_74]
    VSTR            S0, [SP,#0x80+var_70]
    VSTR            S2, [SP,#0x80+var_6C]
  ShaderColor::setColor(*(ShaderColor **)(v13 + 48), (const Color *)&v30);
  mce::Mesh::render(v12, v13, LODWORD(v10) + 1444, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v31);
}


int __fastcall HolosceneRenderer::_renderLivingRoomHintText(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  int v12; // r8@3
  int v13; // r0@3
  int v14; // r2@3
  int v15; // r3@3
  void *v18; // r0@3
  signed int v19; // r0@5
  signed int v21; // r0@9
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  int v24; // [sp+24h] [bp-2Ch]@3
  char v25; // [sp+28h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(a1 + 1540);
  if ( result >= 1 )
  {
    MatrixStack::push((MatrixStack *)&v25, *(_DWORD *)(a2 + 16) + 16);
    MatrixStack::MatrixStackRef::operator=((int)&v25, (int)&Matrix::IDENTITY);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v25);
    __asm
    {
      VLDR            S0, =0.6
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S1, [R0,#0x10]
      VMUL.F32        S2, S2, S0
      VLDR            S6, [R0,#0x1C]
      VMUL.F32        S4, S4, S0
      VLDR            S8, [R0,#0x20]
      VMUL.F32        S1, S1, S0
      VLDR            S3, =-1.9
      VMUL.F32        S0, S6, S0
      VLDR            S10, [R0,#0x24]
      VLDR            S12, [R0,#0x28]
      VMUL.F32        S8, S8, S3
      VLDR            S14, [R0,#0x2C]
      VMUL.F32        S10, S10, S3
      VMUL.F32        S12, S12, S3
      VMUL.F32        S6, S14, S3
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S8, S8, S1
      VSUB.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VSUB.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VSUB.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S6, S8, S6
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VADD.F32        S0, S0, S14
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    }
    __asm { VLDR            S0, =0.01 }
    _R7 = v2 + 1532;
      VLDR            S2, [R0]
      VLDR            S4, =-0.01
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VMUL.F32        S2, S2, S4
      VSTR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
      VLDR            S0, [R7]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v12 = ClientInstance::getFont(*(ClientInstance **)(v2 + 1516));
      I18n::get(&v24, (int **)(v2 + 1536));
      v13 = *(_DWORD *)(v3 + 32);
      v14 = *(_DWORD *)(v13 + 560);
      v15 = *(_DWORD *)(v14 + 20);
      *(_DWORD *)v15 = Color::WHITE;
      *(float *)(v15 + 4) = unk_283E614;
      *(_QWORD *)(v15 + 8) = qword_283E618;
      *(_BYTE *)(v14 + 17) = 1;
      mce::ConstantBufferConstantsBase::sync(
        (mce::ConstantBufferConstantsBase *)(v13 + 548),
        *(mce::RenderContext **)(v3 + 12));
      _R0 = -Font::getLineLength(v12, &v24, 1065353216, 0);
      __asm
      {
        VMOV.F32        S0, #0.5
        VMOV            S2, R0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S2, S0
        VMOV            R3, S0
      }
      Font::drawCached(*(float *)&v12, v3, (int)&v24, _R3, 0, v2 + 1520, 0, 0.0, v2 + 1468, -1, 0, 0);
      v18 = (void *)(v24 - 12);
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
          j_j_j_j_j__ZdlPv_9_1(v18);
      __asm { VLDR            S0, [R7] }
    v19 = *(_DWORD *)(v2 + 1540);
    _R2 = dword_F069F8;
    if ( v19 % 2 == 1 )
      _R2 = &dword_F069F8[1];
      VLDR            S2, [R2]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R7]
    if ( _NF ^ _VF )
      goto LABEL_24;
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, S2
LABEL_24:
      __asm { VMOV.F32        S0, #1.0 }
      v21 = v19 - 1;
      __asm { VLDR            S2, =0.0 }
      if ( v21 % 2 == 1 )
        __asm { VMOVEQ.F32      S2, S0 }
      *(_DWORD *)(v2 + 1540) = v21;
      __asm { VSTR            S2, [R7] }
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v25);
  }
  return result;
}


int __fastcall HolosceneRenderer::renderRedHitEffect(int a1, int a2, int a3)
{
  int v4; // r4@1
  int v5; // r5@1
  int result; // r0@1
  int v11; // r5@5
  Tessellator *v12; // r6@5
  int v13; // r0@5
  int v14; // r1@5
  int v15; // r2@5
  int v16; // r3@5
  ShaderColor *v17; // r0@5
  void *v18; // r0@5
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  int v21; // [sp+Ch] [bp-13Ch]@5
  char v22; // [sp+10h] [bp-138h]@5
  char v23; // [sp+1Ch] [bp-12Ch]@5
  int v24; // [sp+80h] [bp-C8h]@5
  int v25; // [sp+84h] [bp-C4h]@5
  int v26; // [sp+88h] [bp-C0h]@5
  int v27; // [sp+90h] [bp-B8h]@5
  int v28; // [sp+94h] [bp-B4h]@5
  int v29; // [sp+98h] [bp-B0h]@5
  int v30; // [sp+9Ch] [bp-ACh]@5
  int v31; // [sp+A0h] [bp-A8h]@5
  int v32; // [sp+A4h] [bp-A4h]@5
  int v33; // [sp+A8h] [bp-A0h]@5
  int v34; // [sp+ACh] [bp-9Ch]@5
  int v35; // [sp+B0h] [bp-98h]@5
  signed int v36; // [sp+B4h] [bp-94h]@5
  int v37; // [sp+B8h] [bp-90h]@5
  int v38; // [sp+BCh] [bp-8Ch]@5
  int v39; // [sp+C0h] [bp-88h]@5
  int v40; // [sp+C4h] [bp-84h]@5
  signed int v41; // [sp+C8h] [bp-80h]@5
  int v42; // [sp+CCh] [bp-7Ch]@5
  int v43; // [sp+D0h] [bp-78h]@5
  int v44; // [sp+D4h] [bp-74h]@5
  int v45; // [sp+D8h] [bp-70h]@5
  signed int v46; // [sp+DCh] [bp-6Ch]@5
  char v47; // [sp+E4h] [bp-64h]@5
  char v48; // [sp+124h] [bp-24h]@3

  _R6 = a3;
  v4 = a2;
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  result = (*(int (**)(void))(*(_DWORD *)v5 + 44))();
  __asm
  {
    VMOV            S16, R6
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && result == 1 )
    MatrixStack::pushIdentity((MatrixStack *)&v48, *(_DWORD *)(v4 + 16) + 16);
    __asm
    {
      VMOV.F32        S0, #1.0
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S16, S0 }
    HolographicPlatform::getTransform((int)&v47, v5, 16, 15, 0);
    v33 = 0;
    v34 = 0;
    v31 = 1065353216;
    v32 = 0;
    v35 = 0;
    v36 = 1065353216;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v43 = 0;
    v44 = 0;
    v41 = 1065353216;
    v42 = 0;
    v45 = 0;
    v46 = 1065353216;
    v11 = *(_DWORD *)(v4 + 32) + 36;
    mce::WorldConstantsHolographic::getMatrixPatch(v11, (int)&v31);
    mce::WorldConstantsHolographic::setMatrixPatch(v11, (int)&v47);
    v12 = *(Tessellator **)(v4 + 40);
    Tessellator::begin(*(_DWORD *)(v4 + 40), 2, 4, 0);
    Tessellator::vertex(v12, -10.0, -10.0, 1.0);
    Tessellator::vertex(v12, -10.0, 10.0, 1.0);
    Tessellator::vertex(v12, 10.0, 10.0, 1.0);
    Tessellator::vertex(v12, 10.0, -10.0, 1.0);
    Tessellator::beginIndices(v12, 6);
    Tessellator::quad(v12, 0, 1u, 2u, 3u);
    v13 = ShaderColor::getColor(*(ShaderColor **)(v4 + 48));
    __asm { VMOV.F32        S0, #0.25 }
    v14 = *(_DWORD *)v13;
    v15 = *(_DWORD *)(v13 + 4);
    v16 = *(_DWORD *)(v13 + 8);
    v30 = *(_DWORD *)(v13 + 12);
    v27 = v14;
    v28 = v15;
    v29 = v16;
    v17 = *(ShaderColor **)(v4 + 48);
    __asm { VMUL.F32        S0, S16, S0 }
    v24 = 1065353216;
    v25 = 0;
    v26 = 0;
    __asm { VSTR            S0, [SP,#0x148+var_BC] }
    ShaderColor::setColor(v17, (const Color *)&v24);
    Tessellator::end((Tessellator *)&v23, (const char *)v12, 0, 0);
    sub_119C884((void **)&v21, "hologram_hit_effect");
    mce::RenderMaterialGroup::getMaterial(
      (mce::MaterialPtr *)&v22,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
      &v21);
    mce::Mesh::render((mce::Buffer *)&v23, v4, (int)&v22, 0, 0);
    mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v22);
    v18 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v18);
    ShaderColor::setColor(*(ShaderColor **)(v4 + 48), (const Color *)&v27);
    mce::WorldConstantsHolographic::setMatrixPatch(v11, (int)&v31);
    mce::Mesh::~Mesh((mce::Mesh *)&v23);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v48);
  return result;
}


int __fastcall HolosceneRenderer::_buildCoordFrameMesh(HolosceneRenderer *this, Tessellator *a2, mce::Mesh *a3, const Vec3 *a4, float a5)
{
  mce::Mesh *v5; // r9@1
  const Vec3 *v6; // r6@1
  Tessellator *v7; // r5@1
  char v13; // [sp+4h] [bp-1C4h]@1
  float v14; // [sp+68h] [bp-160h]@1
  int v15; // [sp+70h] [bp-158h]@1
  float v16; // [sp+74h] [bp-154h]@1
  int v17; // [sp+7Ch] [bp-14Ch]@1
  float v18; // [sp+80h] [bp-148h]@1
  int v19; // [sp+88h] [bp-140h]@1
  float v20; // [sp+8Ch] [bp-13Ch]@1
  int v21; // [sp+94h] [bp-134h]@1
  int v22; // [sp+98h] [bp-130h]@1
  int v23; // [sp+9Ch] [bp-12Ch]@1
  signed int v24; // [sp+A0h] [bp-128h]@1
  signed int v25; // [sp+A4h] [bp-124h]@1
  float v26; // [sp+A8h] [bp-120h]@1
  int v27; // [sp+ACh] [bp-11Ch]@1
  float v28; // [sp+B4h] [bp-114h]@1
  int v29; // [sp+B8h] [bp-110h]@1
  float v30; // [sp+C0h] [bp-108h]@1
  int v31; // [sp+C4h] [bp-104h]@1
  float v32; // [sp+CCh] [bp-FCh]@1
  int v33; // [sp+D0h] [bp-F8h]@1
  int v34; // [sp+D8h] [bp-F0h]@1
  signed int v35; // [sp+DCh] [bp-ECh]@1
  int v36; // [sp+E0h] [bp-E8h]@1
  signed int v37; // [sp+E4h] [bp-E4h]@1
  int v38; // [sp+E8h] [bp-E0h]@1
  int v39; // [sp+F4h] [bp-D4h]@1
  int v40; // [sp+100h] [bp-C8h]@1
  int v41; // [sp+10Ch] [bp-BCh]@1
  int v42; // [sp+118h] [bp-B0h]@1
  int v43; // [sp+11Ch] [bp-ACh]@1
  int v44; // [sp+120h] [bp-A8h]@1
  signed int v45; // [sp+124h] [bp-A4h]@1
  float v46; // [sp+128h] [bp-A0h]@1
  float v47; // [sp+134h] [bp-94h]@1
  float v48; // [sp+140h] [bp-88h]@1
  float v49; // [sp+14Ch] [bp-7Ch]@1
  float v50; // [sp+158h] [bp-70h]@1
  float v51; // [sp+164h] [bp-64h]@1
  float v52; // [sp+170h] [bp-58h]@1
  float v53; // [sp+17Ch] [bp-4Ch]@1
  int v54; // [sp+188h] [bp-40h]@1
  int v55; // [sp+18Ch] [bp-3Ch]@1
  int v56; // [sp+190h] [bp-38h]@1
  int v57; // [sp+194h] [bp-34h]@1

  v5 = a3;
  v6 = a4;
  v7 = a2;
  mce::Mesh::reset(a3);
  Tessellator::begin((int)v7, 2, 20, 0);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 1065353216;
  Tessellator::color(v7, (const Color *)&v54);
  __asm
  {
    VLDR            S16, [SP,#0x1C8+arg_0]
    VNEG.F32        S18, S16
    VSTR            S18, [SP,#0x1C8+var_4C]
    VSTR            S18, [SP,#0x1C8+var_48]
    VSTR            S18, [SP,#0x1C8+var_44]
  }
  Tessellator::vertex(v7, (const Vec3 *)&v53);
    VSTR            S18, [SP,#0x1C8+var_58]
    VSTR            S16, [SP,#0x1C8+var_54]
    VSTR            S18, [SP,#0x1C8+var_50]
  Tessellator::vertex(v7, (const Vec3 *)&v52);
    VSTR            S16, [SP,#0x1C8+var_64]
    VSTR            S16, [SP,#0x1C8+var_60]
    VSTR            S18, [SP,#0x1C8+var_5C]
  Tessellator::vertex(v7, (const Vec3 *)&v51);
    VSTR            S16, [SP,#0x1C8+var_70]
    VSTR            S18, [SP,#0x1C8+var_6C]
    VSTR            S18, [SP,#0x1C8+var_68]
  Tessellator::vertex(v7, (const Vec3 *)&v50);
    VSTR            S18, [SP,#0x1C8+var_7C]
    VSTR            S18, [SP,#0x1C8+var_78]
    VSTR            S16, [SP,#0x1C8+var_74]
  Tessellator::vertex(v7, (const Vec3 *)&v49);
    VSTR            S18, [SP,#0x1C8+var_88]
    VSTR            S16, [SP,#0x1C8+var_84]
    VSTR            S16, [SP,#0x1C8+var_80]
  Tessellator::vertex(v7, (const Vec3 *)&v48);
    VSTR            S16, [SP,#0x1C8+var_94]
    VSTR            S16, [SP,#0x1C8+var_90]
    VSTR            S16, [SP,#0x1C8+var_8C]
  Tessellator::vertex(v7, (const Vec3 *)&v47);
    VSTR            S16, [SP,#0x1C8+var_A0]
    VSTR            S18, [SP,#0x1C8+var_9C]
    VSTR            S16, [SP,#0x1C8+var_98]
  Tessellator::vertex(v7, (const Vec3 *)&v46);
  v42 = 1065353216;
  v43 = 0;
  v44 = 0;
  v45 = 1065353216;
  Tessellator::color(v7, (const Color *)&v42);
  v41 = *(_DWORD *)v6;
    VSTR            S18, [SP,#0x1C8+var_B8]
    VSTR            S18, [SP,#0x1C8+var_B4]
  Tessellator::vertex(v7, (const Vec3 *)&v41);
  v40 = *(_DWORD *)v6;
    VSTR            S18, [SP,#0x1C8+var_C4]
    VSTR            S16, [SP,#0x1C8+var_C0]
  Tessellator::vertex(v7, (const Vec3 *)&v40);
  v39 = *(_DWORD *)v6;
    VSTR            S16, [SP,#0x1C8+var_D0]
    VSTR            S16, [SP,#0x1C8+var_CC]
  Tessellator::vertex(v7, (const Vec3 *)&v39);
  v38 = *(_DWORD *)v6;
    VSTR            S16, [SP,#0x1C8+var_DC]
    VSTR            S18, [SP,#0x1C8+var_D8]
  Tessellator::vertex(v7, (const Vec3 *)&v38);
  v34 = 0;
  v35 = 1065353216;
  v36 = 0;
  v37 = 1065353216;
  Tessellator::color(v7, (const Color *)&v34);
  __asm { VSTR            S18, [SP,#0x1C8+var_FC] }
  v33 = *((_DWORD *)v6 + 1);
  __asm { VSTR            S18, [SP,#0x1C8+var_F4] }
  Tessellator::vertex(v7, (const Vec3 *)&v32);
  __asm { VSTR            S18, [SP,#0x1C8+var_108] }
  v31 = *((_DWORD *)v6 + 1);
  __asm { VSTR            S16, [SP,#0x1C8+var_100] }
  Tessellator::vertex(v7, (const Vec3 *)&v30);
  __asm { VSTR            S16, [SP,#0x1C8+var_114] }
  v29 = *((_DWORD *)v6 + 1);
  __asm { VSTR            S16, [SP,#0x1C8+var_10C] }
  Tessellator::vertex(v7, (const Vec3 *)&v28);
  __asm { VSTR            S16, [SP,#0x1C8+var_120] }
  v27 = *((_DWORD *)v6 + 1);
  __asm { VSTR            S18, [SP,#0x1C8+var_118] }
  Tessellator::vertex(v7, (const Vec3 *)&v26);
  v22 = 0;
  v23 = 0;
  v24 = 1065353216;
  v25 = 1065353216;
  Tessellator::color(v7, (const Color *)&v22);
    VSTR            S18, [SP,#0x1C8+var_13C]
    VSTR            S18, [SP,#0x1C8+var_138]
  v21 = *((_DWORD *)v6 + 2);
  Tessellator::vertex(v7, (const Vec3 *)&v20);
    VSTR            S18, [SP,#0x1C8+var_148]
    VSTR            S16, [SP,#0x1C8+var_144]
  v19 = *((_DWORD *)v6 + 2);
  Tessellator::vertex(v7, (const Vec3 *)&v18);
    VSTR            S16, [SP,#0x1C8+var_154]
    VSTR            S16, [SP,#0x1C8+var_150]
  v17 = *((_DWORD *)v6 + 2);
  Tessellator::vertex(v7, (const Vec3 *)&v16);
    VSTR            S16, [SP,#0x1C8+var_160]
    VSTR            S18, [SP,#0x1C8+var_15C]
  v15 = *((_DWORD *)v6 + 2);
  Tessellator::vertex(v7, (const Vec3 *)&v14);
  Tessellator::beginIndices(v7, 0);
  Tessellator::quad(v7, 0, 1u, 2u, 3u);
  Tessellator::quad(v7, 7u, 6u, 5u, 4u);
  Tessellator::quad(v7, 4u, 5u, 1u, 0);
  Tessellator::quad(v7, 5u, 6u, 2u, 1u);
  Tessellator::quad(v7, 6u, 7u, 3u, 2u);
  Tessellator::quad(v7, 7u, 4u, 0, 3u);
  Tessellator::quad(v7, 0xBu, 0xAu, 9u, 8u);
  Tessellator::quad(v7, 2u, 6u, 0xAu, 0xBu);
  Tessellator::quad(v7, 6u, 7u, 9u, 0xAu);
  Tessellator::quad(v7, 7u, 3u, 8u, 9u);
  Tessellator::quad(v7, 3u, 2u, 0xBu, 8u);
  Tessellator::quad(v7, 0xCu, 0xDu, 0xEu, 0xFu);
  Tessellator::quad(v7, 1u, 5u, 0xDu, 0xCu);
  Tessellator::quad(v7, 5u, 6u, 0xEu, 0xDu);
  Tessellator::quad(v7, 6u, 2u, 0xFu, 0xEu);
  Tessellator::quad(v7, 2u, 1u, 0xCu, 0xFu);
  Tessellator::quad(v7, 0x13u, 0x12u, 0x11u, 0x10u);
  Tessellator::quad(v7, 7u, 6u, 0x12u, 0x13u);
  Tessellator::quad(v7, 6u, 5u, 0x11u, 0x12u);
  Tessellator::quad(v7, 5u, 4u, 0x10u, 0x11u);
  Tessellator::quad(v7, 4u, 7u, 0x13u, 0x10u);
  Tessellator::end((Tessellator *)&v13, (const char *)v7, 0, 0);
  mce::Mesh::operator=((int)v5, (int)&v13);
  return mce::Mesh::~Mesh((mce::Mesh *)&v13);
}


signed int __fastcall HolosceneRenderer::_getPreciseHitPointNorm(int a1, __int64 a2, int a3, __int64 a4, int a5)
{
  Entity *v6; // r0@1
  BlockSource *v7; // r9@1
  int v8; // r7@1
  signed int v9; // r5@1
  int v10; // r0@1
  int v11; // r3@1
  int v12; // r4@1
  int v13; // r7@1
  int v14; // r4@1
  int v15; // r6@1
  int v16; // r7@1
  __int64 v17; // r6@1
  __int64 v32; // [sp+Ch] [bp-CCh]@1
  int v33; // [sp+14h] [bp-C4h]@5
  int v34; // [sp+18h] [bp-C0h]@5
  int v35; // [sp+1Ch] [bp-BCh]@5
  int v36; // [sp+20h] [bp-B8h]@5
  int v37; // [sp+24h] [bp-B4h]@5
  float v38; // [sp+28h] [bp-B0h]@6
  float v39; // [sp+2Ch] [bp-ACh]@6
  float v40; // [sp+30h] [bp-A8h]@6
  float v41; // [sp+34h] [bp-A4h]@6
  float v42; // [sp+38h] [bp-A0h]@6
  float v43; // [sp+3Ch] [bp-9Ch]@6
  float v44; // [sp+40h] [bp-98h]@6
  float v45; // [sp+4Ch] [bp-8Ch]@6
  int v48; // [sp+58h] [bp-80h]@1
  int v49; // [sp+5Ch] [bp-7Ch]@1
  int v50; // [sp+60h] [bp-78h]@1
  int v51; // [sp+64h] [bp-74h]@1
  int v52; // [sp+68h] [bp-70h]@1
  int v53; // [sp+6Ch] [bp-6Ch]@1
  int v54; // [sp+70h] [bp-68h]@1
  char v55; // [sp+78h] [bp-60h]@1
  __int64 v56; // [sp+94h] [bp-44h]@1
  int v57; // [sp+9Ch] [bp-3Ch]@1

  _R8 = a3;
  v32 = a2;
  v56 = *(_QWORD *)(a3 + 8);
  v57 = *(_DWORD *)(a3 + 16);
  v6 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 1516));
  v7 = (BlockSource *)Entity::getRegion(v6);
  v8 = BlockSource::getBlock(v7, (const BlockPos *)&v56);
  AABB::AABB((AABB *)&v55);
  v9 = 0;
  v10 = (*(int (__fastcall **)(int, BlockSource *, __int64 *, char *))(*(_DWORD *)v8 + 32))(v8, v7, &v56, &v55);
  v11 = *(_DWORD *)v10;
  v12 = *(_DWORD *)(v10 + 4);
  v13 = *(_DWORD *)(v10 + 8);
  v10 += 12;
  v48 = v11;
  v49 = v12;
  v50 = v13;
  v14 = *(_DWORD *)(v10 + 4);
  v15 = *(_DWORD *)(v10 + 8);
  v16 = *(_DWORD *)(v10 + 12);
  v51 = *(_DWORD *)v10;
  v52 = v14;
  v53 = v15;
  v54 = v16;
  v17 = *(_QWORD *)BlockSource::fetchCollisionShapes(v7, v7, (const AABB *)&v48, 0, 0, 0);
  if ( (_DWORD)v17 != HIDWORD(v17) )
  {
    _KR00_8 = a4;
    __asm { VMOV            S2, R1 }
    _R0 = a5;
    __asm
    {
      VMOV            S4, R2
      VMUL.F32        S8, S2, S2
      VMUL.F32        S6, S4, S4
      VMOV            S0, R0
      VMUL.F32        S10, S0, S0
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      _R0 = &Vec3::ZERO;
      __asm
      {
        VLDR            S4, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S0, [R0,#8]
      }
    else
        VDIV.F32        S0, S0, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S4, S4, S6
      VMOV.F32        S6, #3.0
      VLDR            S8, [R8,#0x14]
      VLDR            S10, [R8,#0x18]
      VLDR            S12, [R8,#0x1C]
      VSUB.F32        S8, S8, S4
      VSUB.F32        S10, S10, S2
    v37 = 0;
    __asm { VSUB.F32        S12, S12, S0 }
    v36 = 0;
    v35 = 0;
      VMUL.F32        S4, S4, S6
      VLDR            S16, =3.4028e38
      VMUL.F32        S2, S2, S6
      VMUL.F32        S0, S0, S6
      VLDR            S18, =1.1921e-7
    v34 = 0;
    _R8 = 0;
      VSTR            S8, [SP,#0xD8+var_8C]
      VADD.F32        S4, S8, S4
      VSTR            S10, [SP,#0xD8+var_88]
      VADD.F32        S2, S10, S2
      VSTR            S12, [SP,#0xD8+var_84]
      VADD.F32        S0, S12, S0
    v33 = 0;
      VSTR            S4, [SP,#0xD8+var_98]
      VSTR            S2, [SP,#0xD8+var_94]
      VSTR            S0, [SP,#0xD8+var_90]
    do
      v42 = 0.0;
      v43 = 0.0;
      v38 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
      v41 = 0.0;
      if ( AABB::intersectSegment((AABB *)v17, (const Vec3 *)&v45, (const Vec3 *)&v44, (Vec3 *)&v41, (Vec3 *)&v38) == 1 )
        __asm
        {
          VLDR            S2, [SP,#0xD8+var_8C]
          VLDR            S0, [SP,#0xD8+var_A4]
          VLDR            S8, [SP,#0xD8+var_88]
          VLDR            S4, [SP,#0xD8+var_A0]
          VSUB.F32        S2, S0, S2
          VLDR            S10, [SP,#0xD8+var_84]
          VSUB.F32        S8, S4, S8
          VLDR            S6, [SP,#0xD8+var_9C]
          VSUB.F32        S10, S6, S10
          VMUL.F32        S2, S2, S2
          VMUL.F32        S8, S8, S8
          VMUL.F32        S10, S10, S10
          VADD.F32        S2, S8, S2
          VADD.F32        S2, S2, S10
          VSQRT.F32       S2, S2
          VCMPE.F32       S2, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            S8, [SP,#0xD8+var_B0]
            VLDR            S10, [SP,#0xD8+var_AC]
            VMUL.F32        S14, S8, S8
            VLDR            S12, [SP,#0xD8+var_A8]
            VMUL.F32        S1, S10, S10
            VMUL.F32        S3, S12, S12
            VADD.F32        S14, S1, S14
            VADD.F32        S14, S14, S3
            VSQRT.F32       S14, S14
            VCMPE.F32       S14, S18
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm
            {
              VMOV            R0, S6
              VMOV            R8, S0
              VMOV.F32        S16, S2
            }
            v37 = _R0;
            __asm { VMOV            R0, S4 }
            v33 = _R0;
            __asm { VMOV            R0, S8 }
            v36 = _R0;
            __asm { VMOV            R0, S10 }
            v35 = _R0;
            __asm { VMOV            R0, S12 }
            v34 = _R0;
      LODWORD(v17) = v17 + 28;
    while ( HIDWORD(v17) != (_DWORD)v17 );
      VLDR            S0, =3.4028e38
      VCMPE.F32       S16, S0
    if ( _ZF )
      v9 = 0;
      v9 = 1;
      *(_DWORD *)v32 = _R8;
      *(_DWORD *)(v32 + 4) = v33;
      *(_DWORD *)(v32 + 8) = v37;
      *(_DWORD *)HIDWORD(v32) = v36;
      *(_DWORD *)(HIDWORD(v32) + 4) = v35;
      *(_DWORD *)(HIDWORD(v32) + 8) = v34;
  }
  return v9;
}


int __fastcall HolosceneRenderer::_renderHandPointer(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r6@1
  char v9; // [sp+8h] [bp-A0h]@1
  int v10; // [sp+10h] [bp-98h]@1
  int v11; // [sp+14h] [bp-94h]@1
  int v12; // [sp+18h] [bp-90h]@1
  int v13; // [sp+1Ch] [bp-8Ch]@1
  int v14; // [sp+20h] [bp-88h]@1
  signed int v15; // [sp+24h] [bp-84h]@1
  int v16; // [sp+28h] [bp-80h]@1
  int v17; // [sp+2Ch] [bp-7Ch]@1
  int v18; // [sp+30h] [bp-78h]@1
  int v19; // [sp+34h] [bp-74h]@1
  signed int v20; // [sp+38h] [bp-70h]@1
  int v21; // [sp+3Ch] [bp-6Ch]@1
  int v22; // [sp+40h] [bp-68h]@1
  int v23; // [sp+44h] [bp-64h]@1
  int v24; // [sp+48h] [bp-60h]@1
  signed int v25; // [sp+4Ch] [bp-5Ch]@1
  char v26; // [sp+50h] [bp-58h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  HolographicPlatform::getTransform((int)&v26, v6, v4, 15, 0);
  v12 = 0;
  v13 = 0;
  v10 = 1065353216;
  v11 = 0;
  v14 = 0;
  v15 = 1065353216;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 1065353216;
  v21 = 0;
  v24 = 0;
  v25 = 1065353216;
  v7 = *(_DWORD *)(v5 + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v7, (int)&v10);
  mce::WorldConstantsHolographic::setMatrixPatch(v7, (int)&v26);
  MatrixStack::pushIdentity((MatrixStack *)&v9, *(_DWORD *)(v5 + 16) + 16);
  mce::Mesh::render((mce::Buffer *)(v3 + 612), v5, v3 + 1492, 0, 0);
  mce::WorldConstantsHolographic::setMatrixPatch(v7, (int)&v10);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v9);
}


void __fastcall HolosceneRenderer::_buildGazeIconMesh(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer::_buildGazeIconMesh(this, a2);
}


int __fastcall HolosceneRenderer::renderFrame_Level(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r7@1
  int result; // r0@1
  int v11; // ST08_4@2
  int v12; // r6@2
  int v20; // r1@2
  int v21; // r0@2
  ShaderColor *v22; // r0@2
  int v23; // [sp+20h] [bp-110h]@2
  signed int v24; // [sp+24h] [bp-10Ch]@2
  signed int v25; // [sp+28h] [bp-108h]@2
  signed int v26; // [sp+2Ch] [bp-104h]@2
  float v27; // [sp+30h] [bp-100h]@2
  int v28; // [sp+60h] [bp-D0h]@2
  int v29; // [sp+64h] [bp-CCh]@2
  int v30; // [sp+68h] [bp-C8h]@2
  int v31; // [sp+6Ch] [bp-C4h]@2
  char v32; // [sp+70h] [bp-C0h]@2
  char v33; // [sp+78h] [bp-B8h]@2
  __int64 v34; // [sp+80h] [bp-B0h]@2
  int v35; // [sp+88h] [bp-A8h]@2
  int v36; // [sp+8Ch] [bp-A4h]@2
  int v37; // [sp+90h] [bp-A0h]@2
  signed int v38; // [sp+94h] [bp-9Ch]@2
  int v39; // [sp+98h] [bp-98h]@2
  int v40; // [sp+9Ch] [bp-94h]@2
  __int64 v41; // [sp+A0h] [bp-90h]@2
  __int64 v42; // [sp+A8h] [bp-88h]@2
  int v43; // [sp+B0h] [bp-80h]@2
  int v44; // [sp+B4h] [bp-7Ch]@2
  int v45; // [sp+B8h] [bp-78h]@2
  int v46; // [sp+BCh] [bp-74h]@2
  __int64 v47; // [sp+C0h] [bp-70h]@2
  int v48; // [sp+C8h] [bp-68h]@2
  int v49; // [sp+CCh] [bp-64h]@2
  int v50; // [sp+D0h] [bp-60h]@2
  signed int v51; // [sp+D4h] [bp-5Ch]@2
  int v52; // [sp+D8h] [bp-58h]@2
  int v53; // [sp+DCh] [bp-54h]@2
  __int64 v54; // [sp+E0h] [bp-50h]@2
  __int64 v55; // [sp+E8h] [bp-48h]@2
  int v56; // [sp+F0h] [bp-40h]@2
  int v57; // [sp+F4h] [bp-3Ch]@2
  int v58; // [sp+F8h] [bp-38h]@2
  int v59; // [sp+FCh] [bp-34h]@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  v9 = v8;
  result = (*(int (**)(void))(*(_DWORD *)v8 + 44))();
  if ( result == 1 )
  {
    v11 = v6;
    HolographicPlatform::getTransform((int)&v34, v9, 7, 15, 0);
    glm::detail::operator*<float>((int)&v47, (int)&v34, v5);
    v34 = v47;
    v35 = v48;
    v36 = v49;
    v37 = v50;
    v38 = v51;
    v39 = v52;
    v40 = v53;
    v41 = v54;
    v42 = v55;
    v43 = v56;
    v44 = v57;
    v45 = v58;
    v46 = v59;
    v48 = 0;
    v49 = 0;
    v47 = 1065353216LL;
    v50 = 0;
    v51 = 1065353216;
    v54 = 0LL;
    v52 = 0;
    v53 = 0;
    v58 = 0;
    v56 = 0;
    v57 = 0;
    v55 = 1065353216LL;
    v59 = 1065353216;
    v12 = *(_DWORD *)(v7 + 32) + 36;
    mce::WorldConstantsHolographic::getMatrixPatch(v12, (int)&v47);
    mce::WorldConstantsHolographic::setMatrixPatch(v12, (int)&v34);
    MatrixStack::pushIdentity((MatrixStack *)&v33, *(_DWORD *)(v7 + 16) + 16);
    MatrixStack::push((MatrixStack *)&v32, *(_DWORD *)(v7 + 16) + 16);
    _R0 = v11;
    __asm { VMOV            S16, R0 }
    _aeabi_memclr8(&v27, 60);
    _R0 = &Matrix::IDENTITY;
    __asm
    {
      VLDR            S0, [R0,#0x28]
      VLDR            S4, [R0,#8]
      VLDR            S6, [R0,#0xC]
      VMUL.F32        S0, S0, S16
      VLDR            S8, [R0,#0x10]
      VMUL.F32        S4, S4, S16
      VLDR            S10, [R0,#0x14]
      VMUL.F32        S6, S6, S16
      VLDR            S12, [R0,#0x18]
      VMUL.F32        S8, S8, S16
      VLDR            S14, [R0,#0x1C]
      VMUL.F32        S10, S10, S16
      VLDMIA          R0, {S1-S2}
      VMUL.F32        S12, S12, S16
      VMUL.F32        S14, S14, S16
      VLDR            S3, [R0,#0x24]
      VMUL.F32        S1, S1, S16
      VLDR            S5, [R0,#0x20]
      VMUL.F32        S2, S2, S16
      VLDR            S7, [R0,#0x2C]
      VMUL.F32        S3, S3, S16
      VMUL.F32        S5, S5, S16
      VMUL.F32        S7, S7, S16
    }
    v28 = *(_DWORD *)(_R0 + 48);
    v29 = *(_DWORD *)(_R0 + 52);
    v20 = *(_DWORD *)(_R0 + 56);
    v21 = *(_DWORD *)(_R0 + 60);
    v30 = v20;
    v31 = v21;
      VSTR            S1, [SP,#0x130+var_100]
      VSTR            S2, [SP,#0x130+var_FC]
      VSTR            S4, [SP,#0x130+var_F8]
      VSTR            S6, [SP,#0x130+var_F4]
      VSTR            S8, [SP,#0x130+var_F0]
      VSTR            S10, [SP,#0x130+var_EC]
      VSTR            S12, [SP,#0x130+var_E8]
      VSTR            S14, [SP,#0x130+var_E4]
      VSTR            S5, [SP,#0x130+var_E0]
      VSTR            S3, [SP,#0x130+var_DC]
      VSTR            S0, [SP,#0x130+var_D8]
      VSTR            S7, [SP,#0x130+var_D4]
    MatrixStack::MatrixStackRef::operator=((int)&v32, (int)&v27);
    v22 = *(ShaderColor **)(v7 + 48);
    v23 = 1065353216;
    v24 = 1065353216;
    v25 = 1065353216;
    v26 = 1065353216;
    ShaderColor::setColor(v22, (const Color *)&v23);
    mce::Mesh::render((mce::Buffer *)(v4 + 112), v7, v4 + 1456, v4 + 1336, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v32);
    mce::WorldConstantsHolographic::setMatrixPatch(v12, (int)&v47);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v33);
  }
  return result;
}


int __fastcall HolosceneRenderer::onAppSuspended(HolosceneRenderer *this)
{
  HolosceneRenderer *v1; // r4@1

  v1 = this;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 12));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 412));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 812));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 912));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 1012));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 112));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 212));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 312));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 512));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 612));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v1 + 1112));
  return j_j_j__ZN3mce4Mesh5resetEv_0((HolosceneRenderer *)((char *)v1 + 1212));
}


int __fastcall HolosceneRenderer::renderLivingRoom(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r10@1
  int v4; // r0@1
  int result; // r0@1
  int v6; // r9@2
  ShaderColor *v14; // r0@2
  int v15; // [sp+8h] [bp-180h]@2
  signed int v16; // [sp+Ch] [bp-17Ch]@2
  signed int v17; // [sp+10h] [bp-178h]@2
  signed int v18; // [sp+14h] [bp-174h]@2
  int v19; // [sp+18h] [bp-170h]@2
  int v20; // [sp+1Ch] [bp-16Ch]@2
  int v21; // [sp+20h] [bp-168h]@2
  int v22; // [sp+24h] [bp-164h]@2
  int v23; // [sp+28h] [bp-160h]@2
  int v24; // [sp+2Ch] [bp-15Ch]@2
  int v25; // [sp+30h] [bp-158h]@2
  int v26; // [sp+34h] [bp-154h]@2
  int v27; // [sp+38h] [bp-150h]@2
  int v28; // [sp+3Ch] [bp-14Ch]@2
  int v29; // [sp+40h] [bp-148h]@2
  int v30; // [sp+44h] [bp-144h]@2
  int v31; // [sp+48h] [bp-140h]@2
  int v32; // [sp+4Ch] [bp-13Ch]@2
  int v33; // [sp+50h] [bp-138h]@2
  int v34; // [sp+54h] [bp-134h]@2
  __int64 v35; // [sp+58h] [bp-130h]@2
  __int64 v36; // [sp+60h] [bp-128h]@2
  __int64 v37; // [sp+68h] [bp-120h]@2
  __int64 v38; // [sp+70h] [bp-118h]@2
  __int64 v39; // [sp+78h] [bp-110h]@2
  __int64 v40; // [sp+80h] [bp-108h]@2
  float v41; // [sp+98h] [bp-F0h]@2
  __int64 v42; // [sp+A8h] [bp-E0h]@2
  __int64 v43; // [sp+B0h] [bp-D8h]@2
  __int64 v44; // [sp+C8h] [bp-C0h]@2
  __int64 v45; // [sp+D0h] [bp-B8h]@2
  char v46; // [sp+D8h] [bp-B0h]@2
  int v47; // [sp+E0h] [bp-A8h]@2
  int v48; // [sp+E4h] [bp-A4h]@2
  int v49; // [sp+E8h] [bp-A0h]@2
  int v50; // [sp+ECh] [bp-9Ch]@2
  int v51; // [sp+F0h] [bp-98h]@2
  __int64 v52; // [sp+F4h] [bp-94h]@2
  int v53; // [sp+FCh] [bp-8Ch]@2
  int v54; // [sp+100h] [bp-88h]@2
  int v55; // [sp+104h] [bp-84h]@2
  __int64 v56; // [sp+108h] [bp-80h]@2
  int v57; // [sp+110h] [bp-78h]@2
  int v58; // [sp+114h] [bp-74h]@2
  int v59; // [sp+118h] [bp-70h]@2
  int v60; // [sp+11Ch] [bp-6Ch]@2
  int v61; // [sp+124h] [bp-64h]@2
  int v62; // [sp+128h] [bp-60h]@2
  int v63; // [sp+12Ch] [bp-5Ch]@2
  int v64; // [sp+130h] [bp-58h]@2
  int v65; // [sp+134h] [bp-54h]@2
  int v66; // [sp+138h] [bp-50h]@2
  int v67; // [sp+13Ch] [bp-4Ch]@2
  int v68; // [sp+140h] [bp-48h]@2
  int v69; // [sp+144h] [bp-44h]@2
  int v70; // [sp+148h] [bp-40h]@2
  int v71; // [sp+14Ch] [bp-3Ch]@2
  int v72; // [sp+150h] [bp-38h]@2
  int v73; // [sp+154h] [bp-34h]@2
  int v74; // [sp+158h] [bp-30h]@2
  int v75; // [sp+15Ch] [bp-2Ch]@2
  int v76; // [sp+160h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
  {
    v47 = 1065353216;
    v50 = 0;
    v51 = 0;
    v48 = 0;
    v49 = 0;
    v53 = 0;
    v54 = 0;
    v52 = 1065353216LL;
    v55 = 0;
    v56 = 1065353216LL;
    v58 = 0;
    v59 = 0;
    v57 = 0;
    v60 = 1065353216;
    v6 = *(_DWORD *)(v3 + 32) + 36;
    mce::WorldConstantsHolographic::getMatrixPatch(v6, (int)&v47);
    mce::WorldConstantsHolographic::setMatrixPatch(v6, (int)&Matrix::IDENTITY);
    MatrixStack::push((MatrixStack *)&v46, *(_DWORD *)(v3 + 16) + 16);
    MatrixStack::MatrixStackRef::operator=((int)&v46, (int)&Matrix::IDENTITY);
    _aeabi_memclr8(&v41, 56);
    __asm { VLDR            S0, =8.7423e-8 }
    _R6 = &Matrix::IDENTITY;
    __asm
    {
      VLDR            S2, [R6,#0x20]
      VLDR            S4, [R6,#0x24]
      VLDR            S6, [R6,#0x28]
      VMUL.F32        S8, S2, S0
      VLDR            S10, [R6,#0x2C]
      VMUL.F32        S12, S4, S0
      VMUL.F32        S14, S6, S0
      VLDR            S1, [R6,#4]
      VMUL.F32        S0, S10, S0
      VLDR            S3, [R6,#8]
      VLDR            S5, [R6,#0xC]
      VLDR            S7, [R6]
      VSUB.F32        S8, S8, S7
      VSUB.F32        S12, S12, S1
      VSUB.F32        S14, S14, S3
      VSUB.F32        S0, S0, S5
      VSTR            S8, [SP,#0x188+var_F0]
      VSTR            S12, [SP,#0x188+var_EC]
      VSTR            S14, [SP,#0x188+var_E8]
      VSTR            S0, [SP,#0x188+var_E4]
      VLDR            S0, =-8.7423e-8
    }
    v42 = qword_27E89F8;
    __asm { VMUL.F32        S8, S7, S0 }
    v43 = qword_27E8A00;
      VMUL.F32        S12, S1, S0
      VMUL.F32        S14, S3, S0
      VMUL.F32        S0, S5, S0
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S14, S6
      VSUB.F32        S0, S0, S10
      VSTR            S2, [SP,#0x188+var_D0]
      VSTR            S4, [SP,#0x188+var_CC]
      VSTR            S6, [SP,#0x188+var_C8]
      VSTR            S0, [SP,#0x188+var_C4]
    v44 = *(_QWORD *)&qword_27E8A18;
    v45 = *(_QWORD *)&qword_27E8A20;
    _aeabi_memclr8(&v35, 56);
    __asm { VMOV.F32        S0, #1.25 }
    v35 = *(_QWORD *)&Matrix::IDENTITY;
    v36 = qword_27E89F0;
    _R1 = HIDWORD(qword_27E89F8);
    v37 = qword_27E89F8;
    __asm { VMOV            S2, R0 }
    _KR00_8 = qword_27E8A00;
      VMOV            S4, R1
      VMUL.F32        S2, S2, S0
      VLDR            S10, [R6,#0x34]
      VMOV            S6, R0
      VLDR            S12, [R6,#0x38]
      VMOV            S8, R2
      VLDR            S14, [R6,#0x3C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
    v38 = qword_27E8A00;
      VMUL.F32        S0, S8, S0
      VLDR            S8, [R6,#0x30]
      VADD.F32        S2, S8, S2
    v39 = qword_27E8A08;
      VADD.F32        S4, S10, S4
      VADD.F32        S6, S12, S6
      VADD.F32        S0, S14, S0
    v40 = qword_27E8A10;
      VSTR            S2, [SP,#0x188+var_100]
      VSTR            S4, [SP,#0x188+var_FC]
      VSTR            S6, [SP,#0x188+var_F8]
      VSTR            S0, [SP,#0x188+var_F4]
    glm::detail::operator*<float>((int)&v61, (int)&v35, (int)&v41);
    _aeabi_memclr8(&v19, 56);
    v19 = v61;
    v20 = v62;
    v21 = v63;
    v22 = v64;
    v23 = v65;
    v24 = v66;
    v25 = v67;
    v26 = v68;
    v27 = v69;
    v28 = v70;
    v29 = v71;
    v30 = v72;
    v31 = v73;
    v32 = v74;
    v33 = v75;
    v34 = v76;
    glm::inverse<float>((int)&v61, (int)&v19);
    MatrixStack::MatrixStackRef::operator=((int)&v46, (int)&v19);
    v14 = *(ShaderColor **)(v3 + 48);
    v15 = 1065353216;
    v16 = 1065353216;
    v17 = 1065353216;
    v18 = 1065353216;
    ShaderColor::setColor(v14, (const Color *)&v15);
    mce::Mesh::render((mce::Buffer *)(v2 + 212), v3, v2 + 1456, v2 + 1384, 0, 0);
    mce::Mesh::render((mce::Buffer *)(v2 + 312), v3, v2 + 1456, v2 + 1336, 0, 0);
    if ( !ClientInstance::isHoloCursorNeeded(*(ClientInstance **)(v2 + 1516)) )
      HolosceneRenderer::_renderLivingRoomHintText(v2, v3);
    mce::WorldConstantsHolographic::setMatrixPatch(v6, (int)&v47);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v46);
  }
  return result;
}


void __fastcall HolosceneRenderer::_buildHoloScreenLivingRoomAndTable(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer *v2; // r4@1
  char *v3; // r6@1
  Tessellator *v4; // r5@1
  char *v5; // r0@1
  char *v6; // r0@2
  char *v7; // r0@3
  char *v8; // r0@4
  char *v9; // r0@15
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  unsigned int *v18; // r2@33
  signed int v19; // r1@35
  int v20; // [sp+0h] [bp-140h]@5
  char *v21; // [sp+68h] [bp-D8h]@3
  char *v22; // [sp+6Ch] [bp-D4h]@3
  int v23; // [sp+70h] [bp-D0h]@3
  char v24; // [sp+74h] [bp-CCh]@3
  char *v25; // [sp+DCh] [bp-64h]@1
  char *v26; // [sp+E0h] [bp-60h]@1
  int v27; // [sp+E4h] [bp-5Ch]@1
  char *v28; // [sp+E8h] [bp-58h]@1
  void *v29; // [sp+ECh] [bp-54h]@1
  void *v30; // [sp+F8h] [bp-48h]@11
  void *v31; // [sp+104h] [bp-3Ch]@9
  void *v32; // [sp+110h] [bp-30h]@7
  void *ptr; // [sp+11Ch] [bp-24h]@5

  v2 = this;
  v3 = (char *)this + 212;
  v4 = a2;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 212));
  mce::Mesh::reset((HolosceneRenderer *)((char *)v2 + 312));
  v28 = (char *)&unk_28898CC;
  _aeabi_memclr4(&v29, 60);
  sub_119C884((void **)&v25, "holograms/hologram_VR_livingroom.obj");
  v26 = v25;
  v25 = (char *)&unk_28898CC;
  v27 = 0;
  LoadObjModel((ObjModel *)&v28, (const ResourceLocation *)&v26);
  v5 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v26 - 4);
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
  v6 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v25 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  ObjModel::buildMesh((ObjModel *)&v24, (Tessellator *)&v28, *(float *)&v4, 1000593162);
  mce::Mesh::operator=((int)v3, (int)&v24);
  mce::Mesh::~Mesh((mce::Mesh *)&v24);
  sub_119C884((void **)&v21, "holograms/hologram_livingroom_table.obj");
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  LoadObjModel((ObjModel *)&v28, (const ResourceLocation *)&v22);
  v7 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  ObjModel::buildMesh((ObjModel *)&v20, (Tessellator *)&v28, *(float *)&v4, 1000593162);
  mce::Mesh::operator=((int)v2 + 312, (int)&v20);
  mce::Mesh::~Mesh((mce::Mesh *)&v20);
  if ( ptr )
    operator delete(ptr);
  if ( v32 )
    operator delete(v32);
  if ( v31 )
    operator delete(v31);
  if ( v30 )
    operator delete(v30);
  if ( v29 )
    operator delete(v29);
  v9 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


int __fastcall HolosceneRenderer::_renderDebugHand(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r6@1
  char v9; // [sp+8h] [bp-A0h]@1
  int v10; // [sp+10h] [bp-98h]@1
  int v11; // [sp+14h] [bp-94h]@1
  int v12; // [sp+18h] [bp-90h]@1
  int v13; // [sp+1Ch] [bp-8Ch]@1
  int v14; // [sp+20h] [bp-88h]@1
  signed int v15; // [sp+24h] [bp-84h]@1
  int v16; // [sp+28h] [bp-80h]@1
  int v17; // [sp+2Ch] [bp-7Ch]@1
  int v18; // [sp+30h] [bp-78h]@1
  int v19; // [sp+34h] [bp-74h]@1
  signed int v20; // [sp+38h] [bp-70h]@1
  int v21; // [sp+3Ch] [bp-6Ch]@1
  int v22; // [sp+40h] [bp-68h]@1
  int v23; // [sp+44h] [bp-64h]@1
  int v24; // [sp+48h] [bp-60h]@1
  signed int v25; // [sp+4Ch] [bp-5Ch]@1
  char v26; // [sp+50h] [bp-58h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  HolographicPlatform::getTransform((int)&v26, v6, v4, 15, 0);
  v12 = 0;
  v13 = 0;
  v10 = 1065353216;
  v11 = 0;
  v14 = 0;
  v15 = 1065353216;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 1065353216;
  v21 = 0;
  v24 = 0;
  v25 = 1065353216;
  v7 = *(_DWORD *)(v5 + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v7, (int)&v10);
  mce::WorldConstantsHolographic::setMatrixPatch(v7, (int)&v26);
  MatrixStack::pushIdentity((MatrixStack *)&v9, *(_DWORD *)(v5 + 16) + 16);
  mce::Mesh::render((mce::Buffer *)(v3 + 512), v5, v3 + 1480, 0, 0);
  mce::WorldConstantsHolographic::setMatrixPatch(v7, (int)&v10);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v9);
}


HolosceneRenderer *__fastcall HolosceneRenderer::~HolosceneRenderer(HolosceneRenderer *this)
{
  HolosceneRenderer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DC730;
  v2 = *((_DWORD *)this + 384);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1504));
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1492));
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1480));
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1468));
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1456));
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1444));
  mce::MaterialPtr::~MaterialPtr((HolosceneRenderer *)((char *)v1 + 1432));
  mce::TexturePtr::~TexturePtr((HolosceneRenderer *)((char *)v1 + 1408));
  mce::TexturePtr::~TexturePtr((HolosceneRenderer *)((char *)v1 + 1384));
  mce::TexturePtr::~TexturePtr((HolosceneRenderer *)((char *)v1 + 1360));
  mce::TexturePtr::~TexturePtr((HolosceneRenderer *)((char *)v1 + 1336));
  mce::TexturePtr::~TexturePtr((HolosceneRenderer *)((char *)v1 + 1312));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 1212));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 1112));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 1012));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 912));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 812));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 712));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 612));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 512));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 412));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 312));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 212));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 112));
  mce::Mesh::~Mesh((HolosceneRenderer *)((char *)v1 + 12));
  AppPlatformListener::~AppPlatformListener(v1);
  return v1;
}


int __fastcall HolosceneRenderer::_renderHand(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r6@1
  int v7; // r9@1
  int v8; // r0@1
  int v9; // r10@1
  int v10; // r7@1
  char v12; // [sp+8h] [bp-F8h]@1
  int v13; // [sp+10h] [bp-F0h]@1
  int v14; // [sp+14h] [bp-ECh]@1
  int v15; // [sp+18h] [bp-E8h]@1
  int v16; // [sp+1Ch] [bp-E4h]@1
  int v17; // [sp+20h] [bp-E0h]@1
  signed int v18; // [sp+24h] [bp-DCh]@1
  int v19; // [sp+28h] [bp-D8h]@1
  int v20; // [sp+2Ch] [bp-D4h]@1
  int v21; // [sp+30h] [bp-D0h]@1
  int v22; // [sp+34h] [bp-CCh]@1
  signed int v23; // [sp+38h] [bp-C8h]@1
  int v24; // [sp+3Ch] [bp-C4h]@1
  int v25; // [sp+40h] [bp-C0h]@1
  int v26; // [sp+44h] [bp-BCh]@1
  int v27; // [sp+48h] [bp-B8h]@1
  signed int v28; // [sp+4Ch] [bp-B4h]@1
  char v29; // [sp+50h] [bp-B0h]@1
  int v30; // [sp+90h] [bp-70h]@1
  int v31; // [sp+94h] [bp-6Ch]@1
  int v32; // [sp+98h] [bp-68h]@1
  int v33; // [sp+9Ch] [bp-64h]@1
  int v34; // [sp+A0h] [bp-60h]@1
  int v35; // [sp+A4h] [bp-5Ch]@1
  int v36; // [sp+A8h] [bp-58h]@1
  int v37; // [sp+ACh] [bp-54h]@1
  int v38; // [sp+B0h] [bp-50h]@1
  int v39; // [sp+B4h] [bp-4Ch]@1
  int v40; // [sp+B8h] [bp-48h]@1
  int v41; // [sp+BCh] [bp-44h]@1
  int v42; // [sp+C0h] [bp-40h]@1
  int v43; // [sp+C4h] [bp-3Ch]@1
  int v44; // [sp+C8h] [bp-38h]@1
  int v45; // [sp+CCh] [bp-34h]@1
  int v46; // [sp+D0h] [bp-30h]@1
  int v47; // [sp+D4h] [bp-2Ch]@1
  int v48; // [sp+D8h] [bp-28h]@1
  int v49; // [sp+DCh] [bp-24h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  HolographicPlatform::getTransform((int)&v29, v8, v6, 15, 0);
  v15 = 0;
  v16 = 0;
  v13 = 1065353216;
  v14 = 0;
  v17 = 0;
  v18 = 1065353216;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 1065353216;
  v24 = 0;
  v27 = 0;
  v28 = 1065353216;
  v9 = *(_DWORD *)(v7 + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v9, (int)&v13);
  mce::WorldConstantsHolographic::setMatrixPatch(v9, (int)&v29);
  MatrixStack::pushIdentity((MatrixStack *)&v12, *(_DWORD *)(v7 + 16) + 16);
  v10 = MatrixStack::MatrixStackRef::operator->((int)&v12);
  v30 = 1065353216;
  v31 = 0;
  v49 = 1119092736;
  v32 = 0;
  glm::rotate<float>((int)&v33, v10, (int)&v49, (int)&v30);
  *(_DWORD *)v10 = v33;
  *(_DWORD *)(v10 + 4) = v34;
  *(_DWORD *)(v10 + 8) = v35;
  *(_DWORD *)(v10 + 12) = v36;
  *(_DWORD *)(v10 + 16) = v37;
  *(_DWORD *)(v10 + 20) = v38;
  *(_DWORD *)(v10 + 24) = v39;
  *(_DWORD *)(v10 + 28) = v40;
  *(_DWORD *)(v10 + 32) = v41;
  *(_DWORD *)(v10 + 36) = v42;
  *(_DWORD *)(v10 + 40) = v43;
  *(_DWORD *)(v10 + 44) = v44;
  *(_DWORD *)(v10 + 48) = v45;
  *(_DWORD *)(v10 + 52) = v46;
  *(_DWORD *)(v10 + 56) = v47;
  *(_DWORD *)(v10 + 60) = v48;
  if ( v5 == 1 )
    mce::Mesh::render((mce::Buffer *)(v4 + 1112), v7, v4 + 1504, v4 + 1408, 0, 0);
  else
    mce::Mesh::render((mce::Buffer *)(v4 + 1212), v7, v4 + 1504, v4 + 1408, 0, 0);
  mce::WorldConstantsHolographic::setMatrixPatch(v9, (int)&v13);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v12);
}


int __fastcall HolosceneRenderer::renderHoloUICursor(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r6@1
  int result; // r0@1
  int *v12; // r0@3
  int v13; // r6@5
  ShaderColor *v14; // r0@5
  void *v15; // r0@5
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  int v18; // [sp+10h] [bp-188h]@5
  char v19; // [sp+14h] [bp-184h]@5
  int v20; // [sp+20h] [bp-178h]@5
  signed int v21; // [sp+24h] [bp-174h]@5
  signed int v22; // [sp+28h] [bp-170h]@5
  signed int v23; // [sp+2Ch] [bp-16Ch]@5
  int v24; // [sp+30h] [bp-168h]@5
  int v25; // [sp+34h] [bp-164h]@5
  int v26; // [sp+38h] [bp-160h]@5
  int v27; // [sp+3Ch] [bp-15Ch]@5
  int v28; // [sp+40h] [bp-158h]@5
  signed __int64 v29; // [sp+44h] [bp-154h]@5
  int v30; // [sp+4Ch] [bp-14Ch]@5
  int v31; // [sp+50h] [bp-148h]@5
  int v32; // [sp+54h] [bp-144h]@5
  __int64 v33; // [sp+58h] [bp-140h]@5
  int v34; // [sp+60h] [bp-138h]@5
  int v35; // [sp+64h] [bp-134h]@5
  int v36; // [sp+68h] [bp-130h]@5
  int v37; // [sp+6Ch] [bp-12Ch]@5
  __int64 v38; // [sp+70h] [bp-128h]@3
  __int64 v39; // [sp+78h] [bp-120h]@3
  __int64 v40; // [sp+80h] [bp-118h]@3
  __int64 v41; // [sp+88h] [bp-110h]@3
  __int64 v42; // [sp+90h] [bp-108h]@3
  __int64 v43; // [sp+98h] [bp-100h]@3
  __int64 v44; // [sp+A0h] [bp-F8h]@3
  float v45; // [sp+A8h] [bp-F0h]@3
  int v46; // [sp+ACh] [bp-ECh]@3
  __int64 v47; // [sp+B0h] [bp-E8h]@2
  __int64 v48; // [sp+B8h] [bp-E0h]@2
  __int64 v49; // [sp+C0h] [bp-D8h]@2
  __int64 v50; // [sp+C8h] [bp-D0h]@2
  __int64 v51; // [sp+D0h] [bp-C8h]@2
  __int64 v52; // [sp+D8h] [bp-C0h]@2
  __int64 v53; // [sp+E0h] [bp-B8h]@2
  float v54; // [sp+E8h] [bp-B0h]@2
  int v55; // [sp+ECh] [bp-ACh]@2
  float v56; // [sp+F4h] [bp-A4h]@2
  char v65; // [sp+134h] [bp-64h]@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  v5 = v4;
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
  {
    MatrixStack::pushIdentity((MatrixStack *)&v65, *(_DWORD *)(v3 + 16) + 16);
    _R0 = ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 1516));
    __asm
    {
      VLDR            S18, [R0,#0x180]
      VLDR            S16, [R0,#0x184]
    }
    HolographicPlatform::getTransform((int)&v56, v5, 6, 5, 0);
      VLDR            S28, [SP,#0x198+var_A4]
      VLDR            S30, [SP,#0x198+var_A0]
      VLDR            S17, [SP,#0x198+var_9C]
      VLDR            S24, [SP,#0x198+var_94]
      VLDR            S19, [SP,#0x198+var_8C]
      VLDR            S21, [SP,#0x198+var_90]
      VLDR            S20, [SP,#0x198+var_74]
      VLDR            S22, [SP,#0x198+var_70]
      VLDR            S26, [SP,#0x198+var_6C]
    v48 = 0LL;
    v47 = 1065353216LL;
    v49 = 4575657221408423936LL;
    v51 = 0LL;
    v50 = 0LL;
    v53 = 0LL;
    v52 = 1065353216LL;
    v54 = 0.0;
    v55 = 1065353216;
    if ( _ZF )
      v47 = *(_QWORD *)&Matrix::IDENTITY;
      v48 = qword_27E89F0;
      v49 = qword_27E89F8;
      v50 = qword_27E8A00;
      v51 = qword_27E8A08;
      v52 = qword_27E8A10;
      v53 = *(_QWORD *)&qword_27E8A18;
      v12 = (int *)(&qword_27E8A20 + 1);
      v54 = qword_27E8A20;
    else
      HolographicPlatform::getTransform((int)&v38, v5, 5, 15, 8);
      v47 = v38;
      v48 = v39;
      v49 = v40;
      v50 = v41;
      v51 = v42;
      v52 = v43;
      v53 = v44;
      v54 = v45;
      v12 = &v46;
    v55 = *v12;
    v24 = 1065353216;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v30 = 0;
    v31 = 0;
    v29 = 1065353216LL;
    v32 = 0;
    v33 = 1065353216LL;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    v37 = 1065353216;
    v13 = *(_DWORD *)(v3 + 32) + 36;
    mce::WorldConstantsHolographic::getMatrixPatch(v13, (int)&v24);
    mce::WorldConstantsHolographic::setMatrixPatch(v13, (int)&v47);
    MatrixStack::MatrixStackRef::operator->((int)&v65);
      VMUL.F32        S0, S28, S18
      VMUL.F32        S10, S24, S16
      VMUL.F32        S2, S30, S18
      VMUL.F32        S8, S21, S16
      VMUL.F32        S4, S17, S18
      VMUL.F32        S6, S19, S16
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S6, S4
      VADD.F32        S0, S0, S20
      VADD.F32        S2, S2, S22
      VADD.F32        S4, S4, S26
      VSTR            S0, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
    v14 = *(ShaderColor **)(v3 + 48);
    v20 = 1065353216;
    v21 = 1065353216;
    v22 = 1065353216;
    v23 = 1065353216;
    ShaderColor::setColor(v14, (const Color *)&v20);
    sub_119C884((void **)&v18, "hololens_UICursor");
    mce::RenderMaterialGroup::getMaterial(
      (mce::MaterialPtr *)&v19,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
      &v18);
    mce::Mesh::render((mce::Buffer *)(v2 + 412), v3, (int)&v19, v2 + 1360, 0, 0);
    mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v19);
    v15 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v18 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v15);
    mce::WorldConstantsHolographic::setMatrixPatch(v13, (int)&v24);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v65);
  }
  return result;
}


void __fastcall HolosceneRenderer::~HolosceneRenderer(HolosceneRenderer *this)
{
  HolosceneRenderer *v1; // r0@1

  v1 = HolosceneRenderer::~HolosceneRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HolosceneRenderer::renderInWorldHoloCursor(int a1, float a2, int a3)
{
  int v3; // r11@1
  float v5; // r6@1
  Options *v6; // r0@1
  int result; // r0@1
  int v8; // r5@2
  int v9; // r0@2
  signed int v14; // r2@4
  signed int v21; // r0@4
  __int64 v22; // r2@8
  int v26; // r1@17
  int v32; // r0@25
  int v35; // r0@41
  int v39; // r10@52
  int v40; // r6@52
  int v41; // r9@52
  int v45; // r5@63
  int v46; // r0@63
  int v47; // r5@63
  int v48; // r0@63
  int v49; // [sp+0h] [bp-238h]@25
  int v50; // [sp+4h] [bp-234h]@0
  __int64 v51; // [sp+8h] [bp-230h]@0
  int v52; // [sp+10h] [bp-228h]@0
  int v53; // [sp+1Ch] [bp-21Ch]@19
  int v54; // [sp+20h] [bp-218h]@19
  float v55; // [sp+24h] [bp-214h]@2
  float v56; // [sp+28h] [bp-210h]@39
  int v57; // [sp+2Ch] [bp-20Ch]@2
  signed int v58; // [sp+30h] [bp-208h]@20
  signed int v59; // [sp+34h] [bp-204h]@5
  signed int v60; // [sp+38h] [bp-200h]@4
  int v61; // [sp+3Ch] [bp-1FCh]@4
  char v62; // [sp+40h] [bp-1F8h]@63
  char v63; // [sp+48h] [bp-1F0h]@63
  char v64; // [sp+50h] [bp-1E8h]@63
  float v65; // [sp+58h] [bp-1E0h]@52
  int v66; // [sp+64h] [bp-1D4h]@52
  int v67; // [sp+74h] [bp-1C4h]@52
  int v68; // [sp+84h] [bp-1B4h]@52
  int v69; // [sp+94h] [bp-1A4h]@52
  int v70; // [sp+98h] [bp-1A0h]@40
  int v71; // [sp+9Ch] [bp-19Ch]@41
  int v72; // [sp+A0h] [bp-198h]@41
  int v73; // [sp+A4h] [bp-194h]@41
  int v74; // [sp+A8h] [bp-190h]@41
  int v75; // [sp+ACh] [bp-18Ch]@41
  int v76; // [sp+B0h] [bp-188h]@41
  int v77; // [sp+B4h] [bp-184h]@41
  int v78; // [sp+B8h] [bp-180h]@41
  int v79; // [sp+BCh] [bp-17Ch]@41
  int v80; // [sp+C0h] [bp-178h]@41
  int v81; // [sp+C4h] [bp-174h]@41
  int v82; // [sp+C8h] [bp-170h]@41
  int v83; // [sp+CCh] [bp-16Ch]@41
  int v84; // [sp+D0h] [bp-168h]@41
  int v85; // [sp+D4h] [bp-164h]@41
  float v86; // [sp+D8h] [bp-160h]@25
  float v87; // [sp+DCh] [bp-15Ch]@26
  int v88; // [sp+E0h] [bp-158h]@26
  float v89; // [sp+E4h] [bp-154h]@21
  int v101; // [sp+124h] [bp-114h]@2
  int v102; // [sp+128h] [bp-110h]@2
  int v103; // [sp+12Ch] [bp-10Ch]@2
  float v104; // [sp+130h] [bp-108h]@2
  float v105; // [sp+134h] [bp-104h]@2
  float v106; // [sp+138h] [bp-100h]@2
  float v107; // [sp+13Ch] [bp-FCh]@2
  char v110; // [sp+148h] [bp-F0h]@2
  int v111; // [sp+150h] [bp-E8h]@2
  int v112; // [sp+154h] [bp-E4h]@2
  int v113; // [sp+158h] [bp-E0h]@2
  int v114; // [sp+15Ch] [bp-DCh]@2
  int v115; // [sp+160h] [bp-D8h]@2
  signed int v116; // [sp+164h] [bp-D4h]@2
  int v117; // [sp+168h] [bp-D0h]@2
  int v118; // [sp+16Ch] [bp-CCh]@2
  int v119; // [sp+170h] [bp-C8h]@2
  int v120; // [sp+174h] [bp-C4h]@2
  signed int v121; // [sp+178h] [bp-C0h]@2
  int v122; // [sp+17Ch] [bp-BCh]@2
  int v123; // [sp+180h] [bp-B8h]@2
  int v124; // [sp+184h] [bp-B4h]@2
  int v125; // [sp+188h] [bp-B0h]@2
  int v126; // [sp+18Ch] [bp-ACh]@2
  int v127; // [sp+190h] [bp-A8h]@41
  int v128; // [sp+194h] [bp-A4h]@41
  int v129; // [sp+198h] [bp-A0h]@41
  int v130; // [sp+19Ch] [bp-9Ch]@41
  int v131; // [sp+1A0h] [bp-98h]@41
  int v132; // [sp+1A4h] [bp-94h]@41
  int v133; // [sp+1A8h] [bp-90h]@41
  int v134; // [sp+1ACh] [bp-8Ch]@41
  int v135; // [sp+1B0h] [bp-88h]@41
  int v136; // [sp+1B4h] [bp-84h]@41
  int v137; // [sp+1B8h] [bp-80h]@41
  int v138; // [sp+1BCh] [bp-7Ch]@41
  int v139; // [sp+1C0h] [bp-78h]@41
  int v140; // [sp+1C4h] [bp-74h]@41
  int v141; // [sp+1C8h] [bp-70h]@41
  int v142; // [sp+1CCh] [bp-6Ch]@41

  v3 = a1;
  _R7 = a3;
  v5 = a2;
  v6 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 1516));
  result = Options::getHideHud(v6);
  if ( result )
    return result;
  v111 = 1065353216;
  v114 = 0;
  v115 = 0;
  v112 = 0;
  v113 = 0;
  v118 = 0;
  v119 = 0;
  v116 = 1065353216;
  v117 = 0;
  v120 = 0;
  v121 = 1065353216;
  v124 = 0;
  v125 = 0;
  v122 = 0;
  v123 = 0;
  v126 = 1065353216;
  v8 = *(_DWORD *)(LODWORD(v5) + 32) + 36;
  v57 = *(_DWORD *)(LODWORD(v5) + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v8, (int)&v111);
  mce::WorldConstantsHolographic::setMatrixPatch(v8, (int)&Matrix::IDENTITY);
  v55 = v5;
  MatrixStack::pushIdentity((MatrixStack *)&v110, *(_DWORD *)(LODWORD(v5) + 16) + 16);
  v9 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 1516));
  HolographicPlatform::getTransformTranslation((int)&v107, v9, 1, 2, 0);
  v105 = 0.0;
  v106 = 0.0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0.0;
  if ( (*(_DWORD *)_R7 & 0xFFFFFFFE) != 2 )
  {
    __asm
    {
      VLDR            S0, [SP,#0x238+var_FC]
      VLDR            S6, [R7,#0x14]
      VLDR            S2, [SP,#0x238+var_F8]
      VLDR            S8, [R7,#0x18]
      VADD.F32        S20, S0, S6
      VLDR            S4, [SP,#0x238+var_F4]
      VLDR            S10, [R7,#0x1C]
      VADD.F32        S18, S2, S8
      VADD.F32        S16, S4, S10
    }
    if ( _ZF )
      LODWORD(v51) = *(_DWORD *)(_R7 + 80);
      LODWORD(v22) = &v101;
      HIDWORD(v22) = _R7;
      _R10 = 0;
      if ( HolosceneRenderer::_getPreciseHitPointNorm(v3, (int)&v104, v22, *(_QWORD *)(_R7 + 72), v51, v52) == 1 )
      {
        _R1 = v101;
        __asm { VMOV.F32        S2, #0.5 }
        v61 = v101;
        _R0 = 0;
        _R8 = v103;
        _R9 = v102;
        _R4 = 1065353216;
        __asm { VMOV            S6, R8 }
        v14 = 0;
        __asm
        {
          VMOV            S0, R9
          VABS.F32        S4, S0
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          _R0 = 1065353216;
          VMOV            S8, R0
        v60 = _R0;
          VMUL.F32        S10, S6, S8
          VMUL.F32        S0, S8, S0
          VMOV            R0, S10
          VMOV            S10, R1
          _R4 = 0;
          VLDR            S8, [SP,#0x238+var_108]
          VMOV            S2, R4
          VLDR            S14, [SP,#0x238+var_FC]
          VLDR            S12, [SP,#0x238+var_100]
          VMUL.F32        S4, S2, S10
          VLDR            S3, [SP,#0x238+var_F4]
          VMUL.F32        S2, S2, S6
          VLDR            S10, [SP,#0x238+var_104]
          VLDR            S1, [SP,#0x238+var_F8]
          VADD.F32        S16, S3, S12
          VADD.F32        S20, S14, S8
          VADD.F32        S18, S1, S10
        _R5 = _R0 ^ 0x80000000;
        v21 = 0;
          VSUB.F32        S0, S0, S4
          VMOV            R10, S2
          VMOV            R6, S0
        goto LABEL_14;
      }
      v59 = 1;
    else
    _R5 = 0;
    v60 = 0;
    _R6 = 0;
    _R4 = 0;
    v61 = 0;
    _R9 = 0;
    _R8 = 0;
    v14 = 0;
    goto LABEL_17;
  }
  __asm
    VLDR            S0, [SP,#0x238+var_FC]
    VLDR            S2, [SP,#0x238+var_F8]
    VLDR            S4, [SP,#0x238+var_F4]
  if ( !_ZF )
      VLDR            S6, =-1.7
      VLDR            S8, [R7,#0x44]
    v14 = 1;
    __asm { VLDR            S10, [R7,#0x54] }
    _R10 = 0;
      VADD.F32        S6, S8, S6
      VLDR            S12, [R7,#0x58]
      VLDR            S14, [R7,#0x5C]
      VADD.F32        S0, S0, S10
      VLDR            S5, [R7,#0x68]
      VADD.F32        S2, S2, S12
      VLDR            S3, [R7,#0x64]
      VADD.F32        S4, S4, S14
      VLDR            S1, [R7,#0x60]
    __asm { VMUL.F32        S8, S5, S6 }
    __asm { VMUL.F32        S12, S3, S6 }
    __asm { VMUL.F32        S6, S1, S6 }
    v21 = 1;
      VADD.F32        S16, S4, S8
      VADD.F32        S18, S2, S12
LABEL_14:
    v59 = v21;
    VLDR            S6, [R7,#0x14]
    VLDR            S8, [R7,#0x18]
  v14 = 2;
    VLDR            S10, [R7,#0x1C]
    VADD.F32        S20, S0, S6
  v59 = 1;
  v60 = 0;
  __asm { VADD.F32        S16, S4, S10 }
  _R10 = 0;
  __asm { VADD.F32        S18, S2, S8 }
  _R5 = 0;
  _R6 = 0;
  _R4 = 0;
  v61 = 0;
  _R9 = 0;
  _R8 = 0;
LABEL_17:
  v26 = *(_BYTE *)(_R7 + 130);
    VLDR            S22, [R7,#0x6C]
    VLDR            S24, [R7,#0x70]
    VLDR            S26, [R7,#0x74]
    v14 = 3;
  v53 = v14;
  v54 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 1516));
    VSUB.F32        S16, S16, S26
    VSUB.F32        S18, S18, S24
    VSUB.F32        S20, S20, S22
  if ( *(_BYTE *)(_R7 + 128) )
    v58 = 0;
  else
    HolographicPlatform::getTransform((int)&v89, v54, 2, 15, 10);
      VLDR            S14, [SP,#0x238+var_154]
      VLDR            S12, [SP,#0x238+var_150]
      VLDR            S7, [SP,#0x238+var_14C]
      VMUL.F32        S8, S14, S20
      VLDR            S1, [SP,#0x238+var_144]
      VMUL.F32        S4, S12, S20
      VLDR            S5, [SP,#0x238+var_13C]
      VMUL.F32        S0, S7, S20
      VLDR            S3, [SP,#0x238+var_140]
      VMUL.F32        S10, S1, S18
      VMUL.F32        S2, S5, S18
      VLDR            S13, [SP,#0x238+var_12C]
      VMUL.F32        S6, S3, S18
      VLDR            S11, [SP,#0x238+var_130]
      VLDR            S9, [SP,#0x238+var_134]
      VMUL.F32        S15, S13, S16
      VADD.F32        S8, S10, S8
      VLDR            S10, [SP,#0x238+var_124]
      VADD.F32        S0, S2, S0
      VADD.F32        S4, S6, S4
      VMUL.F32        S2, S11, S16
      VMUL.F32        S6, S9, S16
      VADD.F32        S0, S0, S15
      VADD.F32        S2, S4, S2
      VADD.F32        S4, S8, S6
      VLDR            S6, [SP,#0x238+var_11C]
      VLDR            S8, [SP,#0x238+var_120]
      __asm { VMOV            S15, R5 }
      _R0 = v61;
      __asm
        VMOV            S16, R10
        VMUL.F32        S26, S3, S15
        VMUL.F32        S22, S12, S16
        VMUL.F32        S20, S14, S16
        VMUL.F32        S30, S1, S15
        VMOV            S24, R0
      _R0 = v60;
        VMOV            S17, R9
        VMUL.F32        S16, S7, S16
        VMUL.F32        S15, S5, S15
        VADD.F32        S22, S26, S22
        VMUL.F32        S26, S7, S24
        VADD.F32        S20, S30, S20
        VMUL.F32        S30, S5, S17
        VMOV            S18, R6
        VMOV            S28, R8
        VADD.F32        S15, S15, S16
        VMOV            S16, R0
        VMUL.F32        S19, S13, S18
        VMUL.F32        S23, S14, S16
        VADD.F32        S26, S30, S26
        VMUL.F32        S30, S12, S16
        VMUL.F32        S7, S7, S16
        VMOV            S16, R4
        VMUL.F32        S14, S14, S24
        VMUL.F32        S27, S1, S16
        VMUL.F32        S1, S1, S17
        VMUL.F32        S5, S5, S16
        VMUL.F32        S25, S3, S16
        VMUL.F32        S12, S12, S24
        VMUL.F32        S3, S3, S17
        VMUL.F32        S21, S11, S18
        VMUL.F32        S13, S13, S28
        VADD.F32        S14, S1, S14
        VADD.F32        S1, S5, S7
        VADD.F32        S7, S27, S23
        VMUL.F32        S18, S9, S18
        VADD.F32        S12, S3, S12
        VMUL.F32        S11, S11, S28
        VMUL.F32        S3, S9, S28
        VADD.F32        S9, S15, S19
        VMOV            R0, S1
        VADD.F32        S5, S25, S30
        VADD.F32        S15, S22, S21
        VADD.F32        S16, S20, S18
        VADD.F32        S13, S26, S13
        VADD.F32        S12, S12, S11
        VADD.F32        S14, S14, S3
        VMOV            R6, S9
        VMOV            R4, S5
        VMOV            R5, S15
        VMOV            R10, S16
        VMOV            R8, S13
        VMOV            R9, S12
      v58 = _R0;
      __asm { VMOV            R0, S7 }
      v60 = _R0;
      __asm { VMOV            R0, S14 }
      v61 = _R0;
      v58 = 0;
      VADD.F32        S16, S0, S6
      VADD.F32        S20, S4, S10
  v32 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 1516));
  HolographicPlatform::getTransformTranslation((int)&v86, v32, 16, 15, 0);
    __asm { VLDR            S0, =0.0 }
    v86 = 0.0;
    v87 = 0.0;
    __asm { VMOV.F32        S2, S0 }
    v88 = 0;
    __asm { VMOV.F32        S4, S0 }
      VLDR            S4, [SP,#0x238+var_160]
      VLDR            S2, [SP,#0x238+var_15C]
      VLDR            S0, [SP,#0x238+var_158]
    VSUB.F32        S4, S20, S4
    VSUB.F32        S2, S18, S2
    VSUB.F32        S0, S16, S0
    VMOV.F32        S22, #1.0
    VMOV.F32        S26, #0.25
    VMUL.F32        S4, S4, S4
    VMUL.F32        S2, S2, S2
    VMUL.F32        S0, S0, S0
    VMOV.F32        S28, S22
    VADD.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #2.0
    VSQRT.F32       S24, S0
    VMOV.F32        S0, #1.5
    VMOV.F32        S4, S0
  if ( _ZF )
    __asm { VMOVEQ.F32      S4, S2 }
    VMOV.F32        S2, #6.0
    VCMPE.F32       S24, S4
    __asm { VMOVEQ.F32      S0, S2 }
    VMRS            APSR_nzcv, FPSCR
    VDIV.F32        S2, S24, S4
    VCMPE.F32       S24, S0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S28, S2 }
    VCMPE.F32       S24, S26
    VDIV.F32        S6, S24, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S28, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || !ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v3 + 1516)) )
    v56 = *(float *)&v3;
    _R11 = _R6;
    _R6 = _R10;
    if ( v59 == 1 )
      HolographicPlatform::getTransform((int)&v70, v54, 20, 15, 0);
      if ( *(_BYTE *)(_R7 + 128) )
        v35 = ClientInstance::getGameRenderer(*(ClientInstance **)(LODWORD(v56) + 1516));
        v70 = *(_DWORD *)(v35 + 392);
        v71 = *(_DWORD *)(v35 + 396);
        v72 = *(_DWORD *)(v35 + 400);
        v73 = *(_DWORD *)(v35 + 404);
        v74 = *(_DWORD *)(v35 + 408);
        v75 = *(_DWORD *)(v35 + 412);
        v76 = *(_DWORD *)(v35 + 416);
        v77 = *(_DWORD *)(v35 + 420);
        v78 = *(_DWORD *)(v35 + 424);
        v79 = *(_DWORD *)(v35 + 428);
        v80 = *(_DWORD *)(v35 + 432);
        v81 = *(_DWORD *)(v35 + 436);
        v82 = *(_DWORD *)(v35 + 440);
        v83 = *(_DWORD *)(v35 + 444);
        v84 = *(_DWORD *)(v35 + 448);
        v85 = *(_DWORD *)(v35 + 452);
        glm::inverse<float>((int)&v127, (int)&v70);
        v70 = v127;
        v71 = v128;
        v72 = v129;
        v73 = v130;
        v74 = v131;
        v75 = v132;
        v76 = v133;
        v77 = v134;
        _R1 = v135;
        _R9 = v136;
        _R8 = v137;
        v78 = v135;
        v79 = v136;
        v80 = v137;
        v81 = v138;
        v82 = v139;
        v83 = v140;
        v84 = v141;
        v85 = v142;
      else
        _R9 = v79;
        _R1 = v78;
        _R8 = v80;
        VMOV            S4, R1
        VMOV            S0, R8
        VMUL.F32        S2, S4, S4
        VMUL.F32        S6, S0, S0
        VADD.F32        S2, S6, S2
        VSQRT.F32       S12, S2
        VLDR            S2, =1.1921e-7
        VCMPE.F32       S12, S2
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        _R6 = -1082130432;
        v58 = 1065353216;
        _R11 = 0;
        _R5 = 0;
        _R4 = 0;
        v60 = 0;
        _R8 = 0;
        _R9 = -1082130432;
        v61 = 0;
          VNEG.F32        S14, S4
          VMOV            S2, R9
          VMUL.F32        S10, S0, S2
          VMUL.F32        S8, S4, S14
          VMUL.F32        S4, S2, S14
          VSUB.F32        S6, S6, S8
          VLDR            S8, =0.0001
          VCMPE.F32       S12, S8
        if ( _NF ^ _VF )
          v61 = _R1;
          _R5 = *(&Vec3::ZERO + 1);
          _R6 = Vec3::ZERO;
          _R11 = dword_2822498;
        else
          __asm { VDIV.F32        S14, S14, S12 }
          _R5 = 0;
          __asm
          {
            VDIV.F32        S12, S0, S12
            VMOV            R11, S14
            VMOV            R6, S12
          }
          VMUL.F32        S12, S4, S4
          VMUL.F32        S10, S10, S10
          VMUL.F32        S14, S6, S6
          VADD.F32        S10, S10, S12
          VADD.F32        S10, S10, S14
          VSQRT.F32       S10, S10
          VCMPE.F32       S10, S8
          _R4 = *(&Vec3::ZERO + 1);
          v60 = Vec3::ZERO;
          v58 = dword_2822498;
            VNMUL.F32       S0, S0, S2
            VDIV.F32        S2, S6, S10
            VDIV.F32        S0, S0, S10
            VDIV.F32        S4, S4, S10
            VMOV            R0, S0
            VMOV            R4, S2
          v58 = _R0;
          __asm { VMOV            R0, S4 }
          v60 = _R0;
    v39 = *(_BYTE *)(_R7 + 129);
    _aeabi_memclr8(&v65, 56);
      VMOV            S12, R8
      VMOV            S14, R4
      VMOV            S4, R6
      VMOV            S2, R9
    v40 = LODWORD(v56) + 1012;
      VMOV            S8, R5
      VMOV            S10, R11
      VMOV.F32        S5, #0.5
    v41 = LODWORD(v56) + 1012;
    v69 = *((_DWORD *)&qword_27E8A20 + 1);
    _R0 = v60;
      VLDR            S0, [R7,#0x7C]
      VMOV            S6, R0
    _R0 = v58;
      VMUL.F32        S0, S0, S28
      VCMPE.F32       S24, S5
      VMOV            S1, R0
    _R0 = v61;
      VMOV            S3, R0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S10, S10, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S6, S6, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S12, S12, S0
      VMUL.F32        S14, S14, S0
      VMUL.F32        S1, S1, S0
      VSTR            S4, [SP,#0x238+var_1E0]
      VMUL.F32        S0, S3, S0
      VSTR            S8, [SP,#0x238+var_1DC]
      VSTR            S10, [SP,#0x238+var_1D8]
    v66 = 0;
      VSTR            S6, [SP,#0x238+var_1D0]
      VSTR            S14, [SP,#0x238+var_1CC]
      VSTR            S1, [SP,#0x238+var_1C8]
    v67 = 0;
      VSTR            S0, [SP,#0x238+var_1C0]
      VSTR            S2, [SP,#0x238+var_1BC]
      VSTR            S12, [SP,#0x238+var_1B8]
    v68 = 0;
      VSTR            S20, [SP,#0x238+var_1B0]
      VSTR            S18, [SP,#0x238+var_1AC]
      VSTR            S16, [SP,#0x238+var_1A8]
      VMOV.F32        S16, S22
      v41 = LODWORD(v56) + 912;
      v40 = LODWORD(v56) + 812;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( _NF ^ _VF )
      ClientInstance::isRealityFullVRMode(*(ClientInstance **)(LODWORD(v56) + 1516));
      __asm { VMOV.F32        S16, S22 }
      if ( _ZF )
          VMOVEQ.F32      S0, #-0.25
          VMOVEQ.F32      S2, #4.0
          VADDEQ.F32      S0, S24, S0
          VMULEQ.F32      S16, S0, S2
      VMOV.F32        S0, #-2.0
      VLDR            S2, =0.0
      VADD.F32        S0, S24, S0
      VMUL.F32        S0, S0, S26
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      __asm { VMOVLT.F32      S0, S2 }
      VLDR            S2, =0.2
      VMUL.F32        S0, S0, S2
      VCMPE.F32       S0, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VADD.F32        S18, S0, S22 }
    if ( *(_BYTE *)(_R7 + 128) )
      MatrixStack::push((MatrixStack *)&v64, *(_DWORD *)(LODWORD(v55) + 16) + 32);
      MatrixStack::push((MatrixStack *)&v63, *(_DWORD *)(LODWORD(v55) + 16));
      MatrixStack::pushIdentity((MatrixStack *)&v62, *(_DWORD *)(LODWORD(v55) + 16) + 16);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v62);
      v45 = MatrixStack::MatrixStackRef::operator*((int)&v64);
      v46 = ClientInstance::getGameRenderer(*(ClientInstance **)(LODWORD(v56) + 1516));
      *(_DWORD *)v45 = *(_DWORD *)(v46 + 520);
      *(_DWORD *)(v45 + 4) = *(_DWORD *)(v46 + 524);
      *(_DWORD *)(v45 + 8) = *(_DWORD *)(v46 + 528);
      *(_DWORD *)(v45 + 12) = *(_DWORD *)(v46 + 532);
      *(_DWORD *)(v45 + 16) = *(_DWORD *)(v46 + 536);
      *(_DWORD *)(v45 + 20) = *(_DWORD *)(v46 + 540);
      *(_DWORD *)(v45 + 24) = *(_DWORD *)(v46 + 544);
      *(_DWORD *)(v45 + 28) = *(_DWORD *)(v46 + 548);
      *(_DWORD *)(v45 + 32) = *(_DWORD *)(v46 + 552);
      *(_DWORD *)(v45 + 36) = *(_DWORD *)(v46 + 556);
      *(_DWORD *)(v45 + 40) = *(_DWORD *)(v46 + 560);
      *(_DWORD *)(v45 + 44) = *(_DWORD *)(v46 + 564);
      *(_DWORD *)(v45 + 48) = *(_DWORD *)(v46 + 568);
      *(_DWORD *)(v45 + 52) = *(_DWORD *)(v46 + 572);
      *(_DWORD *)(v45 + 56) = *(_DWORD *)(v46 + 576);
      *(_DWORD *)(v45 + 60) = *(_DWORD *)(v46 + 580);
      v47 = MatrixStack::MatrixStackRef::operator*((int)&v63);
      v48 = ClientInstance::getGameRenderer(*(ClientInstance **)(LODWORD(v56) + 1516));
      *(_DWORD *)v47 = *(_DWORD *)(v48 + 392);
      *(_DWORD *)(v47 + 4) = *(_DWORD *)(v48 + 396);
      *(_DWORD *)(v47 + 8) = *(_DWORD *)(v48 + 400);
      *(_DWORD *)(v47 + 12) = *(_DWORD *)(v48 + 404);
      *(_DWORD *)(v47 + 16) = *(_DWORD *)(v48 + 408);
      *(_DWORD *)(v47 + 20) = *(_DWORD *)(v48 + 412);
      *(_DWORD *)(v47 + 24) = *(_DWORD *)(v48 + 416);
      *(_DWORD *)(v47 + 28) = *(_DWORD *)(v48 + 420);
      *(_DWORD *)(v47 + 32) = *(_DWORD *)(v48 + 424);
      *(_DWORD *)(v47 + 36) = *(_DWORD *)(v48 + 428);
      *(_DWORD *)(v47 + 40) = *(_DWORD *)(v48 + 432);
      *(_DWORD *)(v47 + 44) = *(_DWORD *)(v48 + 436);
      *(_DWORD *)(v47 + 48) = *(_DWORD *)(v48 + 440);
      *(_DWORD *)(v47 + 52) = *(_DWORD *)(v48 + 444);
      *(_DWORD *)(v47 + 56) = *(_DWORD *)(v48 + 448);
      *(_DWORD *)(v47 + 60) = *(_DWORD *)(v48 + 452);
        VLDR            S0, [R7,#0x78]
        VSTR            S18, [SP,#0x238+var_230]
        VSTR            S0, [SP,#0x238+var_234]
        VSTR            S16, [SP,#0x238+var_238]
      HolosceneRenderer::_drawCrosshairMeshes(
        v56,
        v55,
        *(float *)&v40,
        *(float *)&v41,
        v49,
        v50,
        v51,
        1061158912,
        (int)&v65,
        v53);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v63);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v64);
        1065353216,
  mce::WorldConstantsHolographic::setMatrixPatch(v57, (int)&v111);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v110);
}


int __fastcall HolosceneRenderer::renderSurfaces(int a1)
{
  int v1; // r4@1

  v1 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 1516));
  (*(void (**)(void))(*(_DWORD *)v1 + 192))();
  return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 220))(v1);
}


void __fastcall HolosceneRenderer::_buildHoloScreenFrame(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer::_buildHoloScreenFrame(this, a2);
}


void __fastcall HolosceneRenderer::_buildHoloScreenFrame(HolosceneRenderer *this, Tessellator *a2)
{
  char *v2; // r4@1
  Tessellator *v3; // r6@1
  char *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@13
  unsigned int *v7; // r2@15
  signed int v8; // r1@17
  unsigned int *v9; // r2@19
  signed int v10; // r1@21
  unsigned int *v11; // r2@23
  signed int v12; // r1@25
  int v13; // [sp+0h] [bp-C8h]@3
  char *v14; // [sp+68h] [bp-60h]@1
  char *v15; // [sp+6Ch] [bp-5Ch]@1
  int v16; // [sp+70h] [bp-58h]@1
  char *v17; // [sp+74h] [bp-54h]@1
  void *v18; // [sp+78h] [bp-50h]@1
  void *v19; // [sp+84h] [bp-44h]@9
  void *v20; // [sp+90h] [bp-38h]@7
  void *v21; // [sp+9Ch] [bp-2Ch]@5
  void *ptr; // [sp+A8h] [bp-20h]@3

  v2 = (char *)this + 112;
  v3 = a2;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 112));
  v17 = (char *)&unk_28898CC;
  _aeabi_memclr4(&v18, 60);
  sub_119C884((void **)&v14, "holograms/hologram_livingroom_frame.obj");
  v15 = v14;
  v14 = (char *)&unk_28898CC;
  v16 = 0;
  LoadObjModel((ObjModel *)&v17, (const ResourceLocation *)&v15);
  v4 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v14 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  ObjModel::buildMesh((ObjModel *)&v13, (Tessellator *)&v17, *(float *)&v3, 1025758986);
  mce::Mesh::operator=((int)v2, (int)&v13);
  mce::Mesh::~Mesh((mce::Mesh *)&v13);
  if ( ptr )
    operator delete(ptr);
  if ( v21 )
    operator delete(v21);
  if ( v20 )
    operator delete(v20);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    operator delete(v18);
  v6 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v17 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


int __fastcall HolosceneRenderer::_buildCursorMeshes(HolosceneRenderer *this, Tessellator *a2)
{
  HolosceneRenderer *v2; // r5@1
  char *v3; // r9@1
  Tessellator *v4; // r4@1
  BackwardsCompatTextureInfo *v5; // r0@2
  BackwardsCompatTextureInfo *v6; // r7@2
  __int64 v19; // r7@4
  __int64 v20; // r5@4
  HolosceneRenderer *v22; // [sp+Ch] [bp-44Ch]@2
  char v23; // [sp+10h] [bp-448h]@4
  int v24; // [sp+74h] [bp-3E4h]@4
  signed int v25; // [sp+78h] [bp-3E0h]@4
  unsigned int v26; // [sp+7Ch] [bp-3DCh]@4
  int v27; // [sp+80h] [bp-3D8h]@4
  signed int v28; // [sp+84h] [bp-3D4h]@4
  int v29; // [sp+88h] [bp-3D0h]@4
  int v30; // [sp+8Ch] [bp-3CCh]@4
  signed int v31; // [sp+90h] [bp-3C8h]@4
  int v32; // [sp+94h] [bp-3C4h]@4
  __int64 v33; // [sp+98h] [bp-3C0h]@4
  int v34; // [sp+A0h] [bp-3B8h]@4
  int v35; // [sp+A4h] [bp-3B4h]@4
  signed int v36; // [sp+A8h] [bp-3B0h]@4
  int v37; // [sp+ACh] [bp-3ACh]@4
  int v38; // [sp+B0h] [bp-3A8h]@4
  signed int v39; // [sp+B4h] [bp-3A4h]@4
  int v40; // [sp+B8h] [bp-3A0h]@4
  int v41; // [sp+BCh] [bp-39Ch]@4
  signed int v42; // [sp+C0h] [bp-398h]@4
  int v43; // [sp+C4h] [bp-394h]@4
  __int64 v44; // [sp+C8h] [bp-390h]@4
  int v45; // [sp+D0h] [bp-388h]@4
  char v46; // [sp+D4h] [bp-384h]@4
  int v47; // [sp+138h] [bp-320h]@4
  signed int v48; // [sp+13Ch] [bp-31Ch]@4
  int v49; // [sp+140h] [bp-318h]@4
  int v50; // [sp+144h] [bp-314h]@4
  signed int v51; // [sp+148h] [bp-310h]@4
  unsigned int v52; // [sp+14Ch] [bp-30Ch]@4
  __int64 v53; // [sp+150h] [bp-308h]@4
  unsigned int v54; // [sp+158h] [bp-300h]@4
  int v55; // [sp+15Ch] [bp-2FCh]@4
  signed int v56; // [sp+160h] [bp-2F8h]@4
  int v57; // [sp+164h] [bp-2F4h]@4
  int v58; // [sp+168h] [bp-2F0h]@4
  signed int v59; // [sp+16Ch] [bp-2ECh]@4
  int v60; // [sp+170h] [bp-2E8h]@4
  int v61; // [sp+174h] [bp-2E4h]@4
  signed int v62; // [sp+178h] [bp-2E0h]@4
  int v63; // [sp+17Ch] [bp-2DCh]@4
  int v64; // [sp+180h] [bp-2D8h]@4
  signed int v65; // [sp+184h] [bp-2D4h]@4
  int v66; // [sp+188h] [bp-2D0h]@4
  int v67; // [sp+18Ch] [bp-2CCh]@4
  signed int v68; // [sp+190h] [bp-2C8h]@4
  int v69; // [sp+194h] [bp-2C4h]@4
  int v70; // [sp+198h] [bp-2C0h]@4
  signed int v71; // [sp+19Ch] [bp-2BCh]@4
  signed int v72; // [sp+1A0h] [bp-2B8h]@4
  int v73; // [sp+1A4h] [bp-2B4h]@4
  signed int v74; // [sp+1A8h] [bp-2B0h]@4
  int v75; // [sp+1ACh] [bp-2ACh]@4
  int v76; // [sp+1B0h] [bp-2A8h]@4
  signed int v77; // [sp+1B4h] [bp-2A4h]@4
  signed int v78; // [sp+1B8h] [bp-2A0h]@4
  int v79; // [sp+1BCh] [bp-29Ch]@4
  signed int v80; // [sp+1C0h] [bp-298h]@4
  signed int v81; // [sp+1C4h] [bp-294h]@4
  int v82; // [sp+1C8h] [bp-290h]@4
  signed int v83; // [sp+1CCh] [bp-28Ch]@4
  int v84; // [sp+1D0h] [bp-288h]@4
  int v85; // [sp+1D4h] [bp-284h]@4
  signed int v86; // [sp+1D8h] [bp-280h]@4
  signed int v87; // [sp+1DCh] [bp-27Ch]@4
  int v88; // [sp+1E0h] [bp-278h]@4
  signed int v89; // [sp+1E4h] [bp-274h]@4
  int v90; // [sp+1E8h] [bp-270h]@4
  int v91; // [sp+1ECh] [bp-26Ch]@4
  signed int v92; // [sp+1F0h] [bp-268h]@4
  signed int v93; // [sp+1F4h] [bp-264h]@4
  char v94; // [sp+1F8h] [bp-260h]@4
  int v95; // [sp+25Ch] [bp-1FCh]@4
  signed int v96; // [sp+260h] [bp-1F8h]@4
  int v97; // [sp+264h] [bp-1F4h]@4
  int v98; // [sp+268h] [bp-1F0h]@4
  signed int v99; // [sp+26Ch] [bp-1ECh]@4
  int v100; // [sp+270h] [bp-1E8h]@4
  int v101; // [sp+274h] [bp-1E4h]@4
  signed int v102; // [sp+278h] [bp-1E0h]@4
  int v103; // [sp+27Ch] [bp-1DCh]@4
  __int64 v104; // [sp+280h] [bp-1D8h]@4
  signed int v105; // [sp+288h] [bp-1D0h]@4
  int v106; // [sp+28Ch] [bp-1CCh]@4
  signed int v107; // [sp+290h] [bp-1C8h]@4
  int v108; // [sp+294h] [bp-1C4h]@4
  int v109; // [sp+298h] [bp-1C0h]@4
  signed int v110; // [sp+29Ch] [bp-1BCh]@4
  int v111; // [sp+2A0h] [bp-1B8h]@4
  int v112; // [sp+2A4h] [bp-1B4h]@4
  signed int v113; // [sp+2A8h] [bp-1B0h]@4
  int v114; // [sp+2ACh] [bp-1ACh]@4
  __int64 v115; // [sp+2B0h] [bp-1A8h]@4
  int v116; // [sp+2B8h] [bp-1A0h]@4
  int v117; // [sp+2BCh] [bp-19Ch]@4
  signed int v118; // [sp+2C0h] [bp-198h]@4
  signed int v119; // [sp+2C4h] [bp-194h]@4
  int v120; // [sp+2C8h] [bp-190h]@4
  signed int v121; // [sp+2CCh] [bp-18Ch]@4
  signed int v122; // [sp+2D0h] [bp-188h]@4
  int v123; // [sp+2D4h] [bp-184h]@4
  signed int v124; // [sp+2D8h] [bp-180h]@4
  int v125; // [sp+2DCh] [bp-17Ch]@4
  int v126; // [sp+2E0h] [bp-178h]@4
  signed int v127; // [sp+2E4h] [bp-174h]@4
  int v128; // [sp+2E8h] [bp-170h]@4
  int v129; // [sp+2ECh] [bp-16Ch]@4
  signed int v130; // [sp+2F0h] [bp-168h]@4
  signed int v131; // [sp+2F4h] [bp-164h]@4
  int v132; // [sp+2F8h] [bp-160h]@4
  signed int v133; // [sp+2FCh] [bp-15Ch]@4
  signed int v134; // [sp+300h] [bp-158h]@4
  int v135; // [sp+304h] [bp-154h]@4
  signed int v136; // [sp+308h] [bp-150h]@4
  int v137; // [sp+30Ch] [bp-14Ch]@4
  int v138; // [sp+310h] [bp-148h]@4
  signed int v139; // [sp+314h] [bp-144h]@4
  int v140; // [sp+318h] [bp-140h]@4
  int v141; // [sp+31Ch] [bp-13Ch]@4
  signed int v142; // [sp+320h] [bp-138h]@4
  int v143; // [sp+324h] [bp-134h]@4
  int v144; // [sp+328h] [bp-130h]@4
  signed int v145; // [sp+32Ch] [bp-12Ch]@4
  int v146; // [sp+330h] [bp-128h]@4
  int v147; // [sp+334h] [bp-124h]@4
  signed int v148; // [sp+338h] [bp-120h]@4
  int v149; // [sp+33Ch] [bp-11Ch]@4
  int v150; // [sp+340h] [bp-118h]@4
  signed int v151; // [sp+344h] [bp-114h]@4
  signed int v152; // [sp+348h] [bp-110h]@4
  __int64 v153; // [sp+34Ch] [bp-10Ch]@4
  int v154; // [sp+354h] [bp-104h]@4
  int v155; // [sp+358h] [bp-100h]@4
  signed int v156; // [sp+35Ch] [bp-FCh]@4
  int v157; // [sp+360h] [bp-F8h]@4
  int v158; // [sp+364h] [bp-F4h]@4
  signed int v159; // [sp+368h] [bp-F0h]@4
  int v160; // [sp+36Ch] [bp-ECh]@4
  int v161; // [sp+370h] [bp-E8h]@4
  int v162; // [sp+374h] [bp-E4h]@4
  int v163; // [sp+378h] [bp-E0h]@4
  char v164; // [sp+37Ch] [bp-DCh]@4
  int v165; // [sp+3E0h] [bp-78h]@4
  signed int v166; // [sp+3E4h] [bp-74h]@4
  int v167; // [sp+3E8h] [bp-70h]@4
  int v168; // [sp+3ECh] [bp-6Ch]@4
  signed int v169; // [sp+3F0h] [bp-68h]@4
  int v170; // [sp+3F4h] [bp-64h]@4
  int v171; // [sp+3F8h] [bp-60h]@4
  signed int v172; // [sp+3FCh] [bp-5Ch]@4
  int v173; // [sp+400h] [bp-58h]@4
  int v174; // [sp+404h] [bp-54h]@4
  int v175; // [sp+408h] [bp-50h]@4
  int v176; // [sp+40Ch] [bp-4Ch]@4

  v2 = this;
  v3 = (char *)this + 412;
  v4 = a2;
  mce::Mesh::reset((HolosceneRenderer *)((char *)this + 412));
  if ( mce::TexturePtr::hasBackwardsCompatInfo((HolosceneRenderer *)((char *)v2 + 1360)) == 1 )
  {
    v22 = v2;
    v5 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((HolosceneRenderer *)((char *)v2 + 1360));
    v6 = v5;
    _R0 = BackwardsCompatTextureInfo::getUV(v5);
    __asm { VLDR            S20, [R0] }
    _R0 = BackwardsCompatTextureInfo::getUV(v6);
    __asm { VLDR            S16, [R0,#4] }
    _R0 = BackwardsCompatTextureInfo::getUVSize(v6);
    __asm { VLDR            S18, [R0] }
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [R0,#4]
      VDIV.F32        S18, S0, S18
      VDIV.F32        S22, S0, S2
    }
  }
  else
      VMOV.F32        S18, #1.0
      VLDR            S16, =0.0
      VMOV.F32        S20, S16
      VMOV.F32        S22, S18
  Tessellator::begin((int)v4, 2, 4, 0);
  __asm
    VMOV            R11, S20
    VMOV            R5, S22
  v174 = -1056964608;
  v175 = 1090519040;
  v176 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v174, __PAIR__(_R5, _R11));
  __asm { VMOV            R6, S18 }
  v171 = 1090519040;
  v172 = 1090519040;
  v173 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v171, __PAIR__(_R5, _R6));
  __asm { VMOV            R5, S16 }
  v168 = 1090519040;
  v169 = -1056964608;
  v170 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v168, __PAIR__(_R5, _R6));
  v165 = -1056964608;
  v166 = -1056964608;
  v167 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v165, __PAIR__(_R5, _R11));
  Tessellator::beginIndices(v4, 6);
  Tessellator::quad(v4, 3u, 2u, 1u, 0);
  Tessellator::end((Tessellator *)&v164, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v3, (int)&v164);
  mce::Mesh::~Mesh((mce::Mesh *)&v164);
  mce::Mesh::reset((HolosceneRenderer *)((char *)v22 + 812));
  HIDWORD(v19) = -1141521776;
  LODWORD(v19) = 1028443341;
  v161 = -1141521776;
  v162 = 1028443341;
  v163 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v161);
  v158 = 1005961872;
  v159 = 1028443341;
  v160 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v158);
  v155 = 1028443341;
  v156 = 1005961872;
  v157 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v155);
  v153 = v19;
  v154 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v153);
  v150 = 1005961872;
  v151 = -1119040307;
  v152 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v150);
  v147 = -1141521776;
  v148 = -1119040307;
  v149 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v147);
  v144 = -1119040307;
  v145 = -1141521776;
  v146 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v144);
  v141 = -1119040307;
  v142 = 1005961872;
  v143 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v141);
  v138 = -1141521776;
  v139 = 1028443341;
  v140 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v138);
  v135 = 1005961872;
  v136 = 1028443341;
  v137 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v135);
  v132 = 1028443341;
  v133 = 1005961872;
  v134 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v132);
  v129 = 1028443341;
  v130 = -1141521776;
  v131 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v129);
  v126 = 1005961872;
  v127 = -1119040307;
  v128 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v126);
  v123 = -1141521776;
  v124 = -1119040307;
  v125 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v123);
  v120 = -1119040307;
  v121 = -1141521776;
  v122 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v120);
  v117 = -1119040307;
  v118 = 1005961872;
  v119 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v117);
  v115 = 4320573344416383632LL;
  v116 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v115);
  v112 = 1005961872;
  v113 = 1005961872;
  v114 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v112);
  v109 = 1005961872;
  v110 = -1141521776;
  v111 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v109);
  v106 = -1141521776;
  v107 = -1141521776;
  v108 = 1015222894;
  Tessellator::vertex(v4, (const Vec3 *)&v106);
  v104 = 4320573344416383632LL;
  v105 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v104);
  v101 = 1005961872;
  v102 = 1005961872;
  v103 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v101);
  v98 = 1005961872;
  v99 = -1141521776;
  v100 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v98);
  v95 = -1141521776;
  v96 = -1141521776;
  v97 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v95);
  Tessellator::beginIndices(v4, 0);
  Tessellator::quad(v4, 1u, 0, 5u, 4u);
  Tessellator::quad(v4, 0x13u, 0x10u, 7u, 6u);
  Tessellator::quad(v4, 3u, 2u, 0x11u, 0x12u);
  Tessellator::quad(v4, 5u, 0, 8u, 0xDu);
  Tessellator::quad(v4, 0, 1u, 9u, 8u);
  Tessellator::quad(v4, 1u, 4u, 0xCu, 9u);
  Tessellator::quad(v4, 4u, 5u, 0xDu, 0xCu);
  Tessellator::quad(v4, 2u, 3u, 0xBu, 0xAu);
  Tessellator::quad(v4, 3u, 0x12u, 0x16u, 0xBu);
  Tessellator::quad(v4, 0x13u, 6u, 0xEu, 0x17u);
  Tessellator::quad(v4, 6u, 7u, 0xFu, 0xEu);
  Tessellator::quad(v4, 7u, 0x10u, 0x14u, 0xFu);
  Tessellator::quad(v4, 0x11u, 2u, 0xAu, 0x15u);
  Tessellator::end((Tessellator *)&v94, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v22 + 812, (int)&v94);
  mce::Mesh::~Mesh((mce::Mesh *)&v94);
  mce::Mesh::reset((HolosceneRenderer *)((char *)v22 + 912));
  LODWORD(v20) = -1134206910;
  v91 = -1134206910;
  v92 = 1030188172;
  v93 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v91);
  v88 = 1013276738;
  v89 = 1030188172;
  v90 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v88);
  v85 = 1030188172;
  v86 = 1013276738;
  v87 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v85);
  v82 = 1030188172;
  v83 = -1134206910;
  v84 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v82);
  HIDWORD(v20) = -1117295476;
  v79 = 1013276738;
  v80 = -1117295476;
  v81 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v79);
  v76 = -1134206910;
  v77 = -1117295476;
  v78 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v76);
  v73 = -1117295476;
  v74 = -1134206910;
  v75 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v73);
  v70 = -1117295476;
  v71 = 1013276738;
  v72 = 1002740646;
  Tessellator::vertex(v4, (const Vec3 *)&v70);
  v67 = -1134206910;
  v68 = 1030188172;
  v69 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v67);
  v64 = 1013276738;
  v65 = 1030188172;
  v66 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v64);
  v61 = 1030188172;
  v62 = 1013276738;
  v63 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v61);
  v58 = 1030188172;
  v59 = -1134206910;
  v60 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v58);
  v55 = 1013276738;
  v56 = -1117295476;
  v57 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v55);
  v53 = v20;
  v54 = 2147483648;
  Tessellator::vertex(v4, (const Vec3 *)&v53);
  v50 = -1117295476;
  v51 = -1134206910;
  v52 = 2147483648;
  Tessellator::vertex(v4, (const Vec3 *)&v50);
  v47 = -1117295476;
  v48 = 1013276738;
  v49 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v47);
  Tessellator::quad(v4, 3u, 2u, 7u, 6u);
  Tessellator::quad(v4, 3u, 6u, 0xEu, 0xBu);
  Tessellator::quad(v4, 7u, 2u, 0xAu, 0xFu);
  Tessellator::end((Tessellator *)&v46, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v22 + 912, (int)&v46);
  mce::Mesh::~Mesh((mce::Mesh *)&v46);
  mce::Mesh::reset((HolosceneRenderer *)((char *)v22 + 1012));
  v44 = 4320573344416383632LL;
  v45 = 1008981770;
  Tessellator::vertex(v4, (const Vec3 *)&v44);
  v41 = 1005961872;
  v42 = 1005961872;
  v43 = 1008981770;
  Tessellator::vertex(v4, (const Vec3 *)&v41);
  v38 = 1005961872;
  v39 = -1141521776;
  v40 = 1008981770;
  Tessellator::vertex(v4, (const Vec3 *)&v38);
  v35 = -1141521776;
  v36 = -1141521776;
  v37 = 1008981770;
  Tessellator::vertex(v4, (const Vec3 *)&v35);
  v33 = 4320573344416383632LL;
  v34 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v33);
  v30 = 1005961872;
  v31 = 1005961872;
  v32 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v30);
  v27 = 1005961872;
  v28 = -1141521776;
  v29 = 0;
  Tessellator::vertex(v4, (const Vec3 *)&v27);
  v24 = -1141521776;
  v25 = -1141521776;
  v26 = 2147483648;
  Tessellator::vertex(v4, (const Vec3 *)&v24);
  Tessellator::quad(v4, 6u, 2u, 3u, 7u);
  Tessellator::quad(v4, 5u, 1u, 2u, 6u);
  Tessellator::quad(v4, 4u, 0, 1u, 5u);
  Tessellator::quad(v4, 7u, 3u, 0, 4u);
  Tessellator::end((Tessellator *)&v23, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v22 + 1012, (int)&v23);
  return mce::Mesh::~Mesh((mce::Mesh *)&v23);
}


Tessellator *__fastcall HolosceneRenderer::_initResources(HolosceneRenderer *this)
{
  HolosceneRenderer *v1; // r4@1
  int v3; // [sp+4h] [bp-134h]@1
  signed int v4; // [sp+8h] [bp-130h]@1
  int v5; // [sp+Ch] [bp-12Ch]@1
  int v6; // [sp+10h] [bp-128h]@1
  signed int v7; // [sp+14h] [bp-124h]@1
  int v8; // [sp+18h] [bp-120h]@1
  char v9; // [sp+1Ch] [bp-11Ch]@1

  v1 = this;
  Tessellator::Tessellator((int)&v9);
  HolosceneRenderer::_buildGazeIconMesh(v1, (Tessellator *)&v9);
  HolosceneRenderer::_buildCursorMeshes(v1, (Tessellator *)&v9);
  HolosceneRenderer::_buildHoloScreenFrame(v1, (Tessellator *)&v9);
  HolosceneRenderer::_buildHoloScreenLivingRoomAndTable(v1, (Tessellator *)&v9);
  v6 = 1028443341;
  v7 = 1028443341;
  v8 = 1041865114;
  HolosceneRenderer::_buildCoordFrameMesh(
    1000593162,
    (int)&v9,
    (HolosceneRenderer *)((char *)v1 + 512),
    (int)&v6,
    0.005);
  v3 = 1065353216;
  v4 = 1065353216;
  v5 = 1065353216;
  HolosceneRenderer::_buildCoordFrameMesh(1017370378, (int)&v9, (HolosceneRenderer *)((char *)v1 + 712), (int)&v3, 0.02);
  HolosceneRenderer::_buildHandPointerMesh(v1, (Tessellator *)&v9);
  HolosceneRenderer::_buildHandMesh(v1, (Tessellator *)&v9);
  return Tessellator::~Tessellator((Tessellator *)&v9);
}
