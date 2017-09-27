

BaseEntityRenderer *__fastcall VillagerZombieRenderer::~VillagerZombieRenderer(VillagerZombieRenderer *this)
{
  VillagerZombieRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DC508;
  v3 = (char *)(*((_QWORD *)this + 84) >> 32);
  v2 = (char *)*((_QWORD *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 168);
  }
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN19HumanoidMobRendererD2Ev(v1);
}


void __fastcall VillagerZombieRenderer::~VillagerZombieRenderer(VillagerZombieRenderer *this)
{
  VillagerZombieRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DC508;
  v3 = (char *)(*((_QWORD *)this + 84) >> 32);
  v2 = (char *)*((_QWORD *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 168);
  }
  if ( v2 )
    operator delete(v2);
  HumanoidMobRenderer::~HumanoidMobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall VillagerZombieRenderer::setupRotations(int a1, ZombieVillager *a2, int a3, int _R3, int a5, int a6)
{
  ZombieVillager *v6; // r5@1
  int v7; // r6@1
  int v8; // r4@1
  float v13; // r1@1

  v6 = a2;
  v7 = a1;
  v8 = a3;
  __asm { VMOV            S16, R3 }
  if ( ZombieVillager::isConverting(a2) == 1 )
  {
    _R0 = *((_DWORD *)v6 + 104);
    __asm
    {
      VMOV.F32        S0, #3.25
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    }
    _R0 = mce::Math::cos(_R0, v13);
      VMOV.F32        S0, #0.25
    _R0 = &mce::Math::PI;
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VADD.F32        S16, S0, S16
  }
  __asm { VMOV            R3, S16 }
  return j_j_j__ZNK19HumanoidMobRenderer14setupRotationsERK6EntityffR6Matrixf(v7, *(float *)&v6, v8, _R3, a5, a6);
}


void __fastcall VillagerZombieRenderer::~VillagerZombieRenderer(VillagerZombieRenderer *this)
{
  VillagerZombieRenderer::~VillagerZombieRenderer(this);
}


signed int __fastcall VillagerZombieRenderer::render(int a1, BaseEntityRenderContext *a2, ZombieVillager **a3)
{
  int v4; // r4@1
  ZombieVillager **v5; // r8@1
  int v6; // r5@1
  ZombieVillager *v7; // r7@1
  int v8; // r0@1
  int v13; // r9@1
  int v14; // r5@1
  char v15; // r0@1
  int v16; // r9@1
  int v17; // r0@1
  int v18; // r1@1
  int v19; // r2@1
  signed int result; // r0@1
  char v21; // [sp+Ch] [bp-34h]@1

  _R10 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *v5;
  (*(void (__fastcall **)(char *, int, ZombieVillager *, _DWORD))(*(_DWORD *)v4 + 8))(
    &v21,
    v4,
    *v5,
    *((_DWORD *)_R10 + 1));
  v8 = ZombieVillager::getProfession(v7);
  __asm
  {
    VLDR            S0, [R10,#4]
    VSTR            S0, [SP,#0x40+var_3C]
  }
  EntityShaderManager::_setupShaderParameters(
    *(float *)&v4,
    v6,
    (int)v7,
    COERCE_FLOAT(&v21),
    COERCE_FLOAT((_UNKNOWN *)((char *)&unk_27D0BA0 + 16 * v8 + 4)));
  v13 = (*(int (__fastcall **)(ZombieVillager *))(*(_DWORD *)v7 + 908))(v7);
  v14 = HumanoidMobRenderer::getModel((HumanoidMobRenderer *)v4, v7);
  (*(void (__fastcall **)(int, int, ZombieVillager *, int))(*(_DWORD *)v4 + 44))(v4, v14, v7, v13);
  v15 = (*(int (__fastcall **)(ZombieVillager *))(*(_DWORD *)v7 + 312))(v7);
  *(_BYTE *)(v14 + 4276) = v15;
  *(_BYTE *)(*(_DWORD *)(v4 + 652) + 4276) = v15;
  *(_BYTE *)(*(_DWORD *)(v4 + 648) + 4276) = v15;
  v16 = *(_DWORD *)(v4 + 140);
  v17 = ZombieVillager::getProfession(v7);
  MobRenderer::renderModel(v4, _R10, (int)v5, v16, *(_DWORD *)(v4 + 672) + 24 * v17);
  *(_BYTE *)(v14 + 4277) = 0;
  v18 = *(_DWORD *)(v4 + 652);
  *(_BYTE *)(v18 + 4277) = 0;
  v19 = *(_DWORD *)(v4 + 648);
  *(_BYTE *)(v19 + 4277) = 0;
  result = 4300;
  *(_BYTE *)(v14 + 4276) = 0;
  *(_BYTE *)(v18 + 4276) = 0;
  *(_BYTE *)(v19 + 4276) = 0;
  *(_DWORD *)(v19 + 4300) = 2139095039;
  *(_DWORD *)(v19 + 4304) = 2139095039;
  *(_DWORD *)(v18 + 4300) = 2139095039;
  *(_DWORD *)(v18 + 4304) = 2139095039;
  *(_DWORD *)(v14 + 4300) = 2139095039;
  *(_DWORD *)(v14 + 4304) = 2139095039;
  return result;
}


GeometryPtr *__fastcall VillagerZombieRenderer::VillagerZombieRenderer(GeometryPtr *a1, float a2, const GeometryPtr *a3, const GeometryPtr *a4, GeometryPtr *a5, int a6)
{
  GeometryPtr *v6; // r8@1
  const GeometryPtr *v7; // r5@1
  const GeometryPtr *v8; // r4@1
  mce::TextureGroup *v9; // r6@1
  VillagerZombieModel *v10; // r7@1
  VillagerZombieModel *v11; // r7@1
  VillagerZombieModel *v12; // r5@1
  char *v17; // r0@1
  char *v18; // r0@2
  mce::TexturePtr **v19; // r5@9
  int v20; // r4@9
  char *v21; // r0@9
  char *v22; // r0@10
  mce::TexturePtr *v23; // r4@11
  char *v24; // r0@11
  char *v25; // r0@12
  mce::TexturePtr *v26; // r4@13
  char *v27; // r0@13
  char *v28; // r0@14
  mce::TexturePtr *v29; // r4@15
  char *v30; // r0@15
  char *v31; // r0@16
  mce::TexturePtr *v32; // r7@17
  char *v33; // r0@17
  char *v34; // r0@18
  unsigned int *v36; // r2@20
  signed int v37; // r1@22
  unsigned int *v38; // r2@24
  signed int v39; // r1@26
  unsigned int *v40; // r2@28
  signed int v41; // r1@30
  unsigned int *v42; // r2@32
  signed int v43; // r1@34
  unsigned int *v44; // r2@36
  signed int v45; // r1@38
  unsigned int *v46; // r2@40
  signed int v47; // r1@42
  unsigned int *v48; // r2@44
  signed int v49; // r1@46
  unsigned int *v50; // r2@48
  signed int v51; // r1@50
  unsigned int *v52; // r2@52
  signed int v53; // r1@54
  unsigned int *v54; // r2@56
  signed int v55; // r1@58
  unsigned int *v56; // r2@60
  signed int v57; // r1@62
  unsigned int *v58; // r2@64
  signed int v59; // r1@66
  int v60; // [sp+4h] [bp-11Ch]@0
  char *v61; // [sp+Ch] [bp-114h]@17
  char *v62; // [sp+10h] [bp-110h]@17
  int v63; // [sp+14h] [bp-10Ch]@17
  char v64; // [sp+18h] [bp-108h]@17
  char *v65; // [sp+34h] [bp-ECh]@15
  char *v66; // [sp+38h] [bp-E8h]@15
  int v67; // [sp+3Ch] [bp-E4h]@15
  char v68; // [sp+40h] [bp-E0h]@15
  char *v69; // [sp+5Ch] [bp-C4h]@13
  char *v70; // [sp+60h] [bp-C0h]@13
  int v71; // [sp+64h] [bp-BCh]@13
  char v72; // [sp+68h] [bp-B8h]@13
  char *v73; // [sp+84h] [bp-9Ch]@11
  char *v74; // [sp+88h] [bp-98h]@11
  int v75; // [sp+8Ch] [bp-94h]@11
  char v76; // [sp+90h] [bp-90h]@11
  char *v77; // [sp+ACh] [bp-74h]@9
  char *v78; // [sp+B0h] [bp-70h]@9
  int v79; // [sp+B4h] [bp-6Ch]@9
  char v80; // [sp+B8h] [bp-68h]@9
  char *v81; // [sp+D4h] [bp-4Ch]@1
  char *v82; // [sp+D8h] [bp-48h]@1
  int v83; // [sp+DCh] [bp-44h]@1
  char v84; // [sp+E0h] [bp-40h]@1
  VillagerZombieModel *v85; // [sp+F8h] [bp-28h]@1
  VillagerZombieModel *v86; // [sp+FCh] [bp-24h]@1
  VillagerZombieModel *v87; // [sp+100h] [bp-20h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = (mce::TextureGroup *)LODWORD(a2);
  v10 = (VillagerZombieModel *)operator new(0x10E0u);
  VillagerZombieModel::VillagerZombieModel(v10, v8);
  v87 = v10;
  v11 = (VillagerZombieModel *)operator new(0x10E0u);
  VillagerZombieModel::VillagerZombieModel(v11, v7);
  v86 = v11;
  v12 = (VillagerZombieModel *)operator new(0x10E0u);
  VillagerZombieModel::VillagerZombieModel(v12, a5);
  v85 = v12;
  sub_119C884((void **)&v81, "textures/entity/zombie_villager/zombie_smith");
  v82 = v81;
  v81 = (char *)&unk_28898CC;
  v83 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v84, v9, (int)&v82, 0);
  __asm
  {
    VLDR            S0, [SP,#0x120+arg_4]
    VSTR            S0, [SP,#0x120+var_11C]
  }
  HumanoidMobRenderer::HumanoidMobRenderer((int)v6, COERCE_FLOAT(&v87), (int *)&v86, &v85, (int)&v84, v60);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v84);
  v17 = v82 - 12;
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v82 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v81 - 12;
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v81 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  if ( v85 )
    (*(void (**)(void))(*(_DWORD *)v85 + 4))();
  v85 = 0;
  if ( v86 )
    (*(void (**)(void))(*(_DWORD *)v86 + 4))();
  v86 = 0;
  if ( v87 )
    (*(void (**)(void))(*(_DWORD *)v87 + 4))();
  v19 = (mce::TexturePtr **)((char *)v6 + 672);
  v87 = 0;
  *(_DWORD *)v6 = &off_26DC508;
  *((_DWORD *)v6 + 168) = 0;
  *((_DWORD *)v6 + 169) = 0;
  *((_DWORD *)v6 + 170) = 0;
  std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_default_append((int)v6 + 672, 5u);
  v20 = *((_DWORD *)v6 + 168);
  sub_119C884((void **)&v77, "textures/entity/zombie_villager/zombie_smith");
  v78 = v77;
  v77 = (char *)&unk_28898CC;
  v79 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v80, v9, (int)&v78, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v20 + 72), (mce::TexturePtr *)&v80);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v80);
  v21 = v78 - 12;
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v78 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = v77 - 12;
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v77 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = *v19;
  sub_119C884((void **)&v73, "textures/entity/zombie_villager/zombie_butcher");
  v74 = v73;
  v73 = (char *)&unk_28898CC;
  v75 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v76, v9, (int)&v74, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)((char *)v23 + 96), (mce::TexturePtr *)&v76);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v76);
  v24 = v74 - 12;
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v74 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v73 - 12;
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v73 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = *v19;
  sub_119C884((void **)&v69, "textures/entity/zombie_villager/zombie_librarian");
  v70 = v69;
  v69 = (char *)&unk_28898CC;
  v71 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v72, v9, (int)&v70, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)((char *)v26 + 24), (mce::TexturePtr *)&v72);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v72);
  v27 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v70 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v69 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = *v19;
  sub_119C884((void **)&v65, "textures/entity/zombie_villager/zombie_priest");
  v66 = v65;
  v65 = (char *)&unk_28898CC;
  v67 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v68, v9, (int)&v66, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)((char *)v29 + 48), (mce::TexturePtr *)&v68);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v68);
  v30 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v66 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = v65 - 12;
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v65 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = *v19;
  sub_119C884((void **)&v61, "textures/entity/zombie_villager/zombie_farmer");
  v62 = v61;
  v61 = (char *)&unk_28898CC;
  v63 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v64, v9, (int)&v62, 0);
  mce::TexturePtr::operator=(v32, (mce::TexturePtr *)&v64);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v64);
  v33 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v62 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = v61 - 12;
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v61 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  return v6;
}
