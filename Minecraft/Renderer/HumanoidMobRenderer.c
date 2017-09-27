

int __fastcall HumanoidMobRenderer::prepareArmor(float a1, int a2, Entity *a3, int a4, int a5)
{
  Entity *v5; // r6@1
  int v6; // r10@1
  int v7; // r5@1
  int v8; // r4@1
  ItemInstance *v9; // r7@1
  int v10; // r9@2
  int v15; // r0@2
  int v16; // r11@2
  int v17; // r4@5
  signed int v18; // r4@6
  int v19; // r8@7
  char v20; // r2@9
  int v21; // r0@9
  char v22; // r0@11
  char v23; // r2@13
  int v24; // r2@15
  char v25; // r1@17
  char v26; // r0@19
  int v27; // r0@19
  int v28; // r1@19
  int v29; // r3@19
  int v30; // r2@19
  mce::Texture *v31; // r0@24
  int v33; // [sp+4h] [bp-4Ch]@0
  int v34; // [sp+Ch] [bp-44h]@2
  char v35; // [sp+10h] [bp-40h]@24

  v5 = a3;
  v6 = LODWORD(a1);
  v7 = a4;
  v8 = a2;
  v9 = (ItemInstance *)(*(int (__fastcall **)(Entity *, int))(*(_DWORD *)a3 + 1028))(a3, a4);
  if ( ItemInstance::isArmorItem(v9) == 1 )
  {
    v10 = *(_DWORD *)v9;
    v34 = v8;
    __asm { VLDR            S16, [SP,#0x50+arg_0] }
    v15 = *(_DWORD *)(*(_DWORD *)v9 + 124);
    v16 = 2 * v15;
    if ( _ZF )
      v16 = 2 * v15 | 1;
    if ( ArmorItem::isElytra(v9, (const ItemInstance *)1) == 1 )
    {
      v17 = *(_DWORD *)(v6 + 656);
    }
    else
      v19 = v6 + 648;
      if ( v7 == 2 )
        v19 = v6 + 652;
      v17 = *(_DWORD *)v19;
      v20 = 0;
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 4292) & 0x40;
      if ( !(v21 | v7) )
        v20 = 1;
      _ZF = v21 == 0;
      *(_BYTE *)(v17 + 149) = v20;
      v22 = 0;
      if ( _ZF )
        v22 = 1;
      v23 = 0;
      if ( (unsigned int)(v7 - 1) < 2 )
        v23 = 1;
      *(_BYTE *)(v17 + 589) = v23 & v22;
      v24 = v7 | 1;
      if ( v7 != 1 )
        LOBYTE(v7) = 0;
      v25 = 0;
      *(_BYTE *)(v17 + 809) = v7 & v22;
      *(_BYTE *)(v17 + 1029) = v7 & v22;
      if ( v24 == 3 )
        v25 = 1;
      v26 = v22 & v25;
      *(_BYTE *)(v17 + 1249) = v26;
      *(_BYTE *)(v17 + 1469) = v26;
      v27 = ItemInstance::isGlint(v9);
      v28 = *(_DWORD *)v19;
      v29 = *(_DWORD *)v19 + 72;
      v30 = *(_DWORD *)v19 + 48;
      if ( !*(_DWORD *)(v10 + 124) )
      {
        v29 = v28 + 84;
        v30 = v28 + 60;
      }
      if ( v27 )
        v30 = v29;
      *(_DWORD *)(v28 + 28) = v30;
    MobRenderer::setArmor((MobRenderer *)v6, (Model *)v17);
    *(_BYTE *)(v17 + 25) = Entity::isRiding(v5);
    *(_DWORD *)(v17 + 32) = *(_DWORD *)(v6 + 660) + 24 * v16;
    (*(void (__fastcall **)(char *, int, ItemInstance *))(*(_DWORD *)v10 + 156))(&v35, v10, v9);
    __asm { VSTR            S16, [SP,#0x50+var_4C] }
    EntityShaderManager::_setupFoilShaderParameters(v6, v34, *(float *)&v5, (unsigned int)&v35, &Vec2::ONE, v33);
    v31 = (mce::Texture *)mce::TexturePtr::operator->(v6 + 108);
    v18 = 1;
    mce::Texture::bindTexture(v31, *(mce::RenderContext **)(v34 + 12), 1u, 2u);
  }
  else
    v18 = -1;
  return v18;
}


int __fastcall HumanoidMobRenderer::HumanoidMobRenderer(int a1, float a2, int *a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r7@1
  int *v7; // r6@1
  int v8; // r4@1
  _DWORD *v9; // r5@1
  int v15; // r0@3
  __int64 v16; // r0@3
  ElytraModel *v17; // r6@3
  int v18; // r0@3
  char v20; // [sp+4h] [bp-34h]@1
  int v21; // [sp+1Ch] [bp-1Ch]@1

  v6 = *(_DWORD *)LODWORD(a2);
  v7 = a3;
  v8 = a1;
  v9 = a4;
  *(_DWORD *)LODWORD(a2) = 0;
  v21 = v6;
  mce::TexturePtr::TexturePtr((int)&v20, a5);
  __asm
  {
    VLDR            S0, [SP,#0x38+arg_4]
    VMOV            R3, S0
  }
  MobRenderer::MobRenderer(v8, &v21, (mce::TexturePtr *)&v20);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v20);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v21 = 0;
  *(_DWORD *)v8 = &off_26DB7D4;
  *(_DWORD *)(v8 + 644) = 0;
  v15 = *v7;
  *v7 = 0;
  *(_DWORD *)(v8 + 648) = v15;
  v16 = *v9;
  *v9 = 0;
  *(_DWORD *)(v8 + 668) = 0;
  *(_DWORD *)(v8 + 660) = 0;
  *(_DWORD *)(v8 + 664) = 0;
  *(_QWORD *)(v8 + 652) = v16;
  v17 = (ElytraModel *)operator new(0x1F4u);
  ElytraModel::ElytraModel(v17);
  v18 = *(_DWORD *)(v8 + 656);
  *(_DWORD *)(v8 + 656) = v17;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  HumanoidMobRenderer::initTextures((HumanoidMobRenderer *)v8);
  return v8;
}


int __fastcall HumanoidMobRenderer::HumanoidMobRenderer(int a1, int a2, float a3, _DWORD *a4, int *a5, int a6, int a7)
{
  int v7; // r7@1
  int *v8; // r6@1
  int v9; // r4@1
  _DWORD *v10; // r5@1
  int v16; // r0@3
  int v17; // r0@3
  __int64 v18; // r0@3
  ElytraModel *v19; // r6@3
  int v20; // r0@3
  char v22; // [sp+4h] [bp-34h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@1

  v7 = *(_DWORD *)a2;
  v8 = (int *)LODWORD(a3);
  v9 = a1;
  v10 = a4;
  *(_DWORD *)a2 = 0;
  v23 = v7;
  mce::TexturePtr::TexturePtr((int)&v22, a6);
  __asm
  {
    VLDR            S0, [SP,#0x38+arg_8]
    VMOV            R3, S0
  }
  MobRenderer::MobRenderer(v9, &v23, (mce::TexturePtr *)&v22);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v22);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  *(_DWORD *)v9 = &off_26DB7D4;
  v16 = *a5;
  *a5 = 0;
  *(_DWORD *)(v9 + 644) = v16;
  v17 = *v8;
  *v8 = 0;
  *(_DWORD *)(v9 + 648) = v17;
  v18 = *v10;
  *v10 = 0;
  *(_DWORD *)(v9 + 668) = 0;
  *(_DWORD *)(v9 + 660) = 0;
  *(_DWORD *)(v9 + 664) = 0;
  *(_QWORD *)(v9 + 652) = v18;
  v19 = (ElytraModel *)operator new(0x1F4u);
  ElytraModel::ElytraModel(v19);
  v20 = *(_DWORD *)(v9 + 656);
  *(_DWORD *)(v9 + 656) = v19;
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  HumanoidMobRenderer::initTextures((HumanoidMobRenderer *)v9);
  return v9;
}


signed int __fastcall HumanoidMobRenderer::prepareCarriedItem(HumanoidMobRenderer *this, Model *a2, Mob *a3, const ItemInstance *a4)
{
  const ItemInstance *v4; // r6@1
  Mob *v5; // r7@1
  Model *v6; // r5@1
  HumanoidMobRenderer *v7; // r4@1
  signed int result; // r0@1
  bool v9; // zf@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  MobRenderer::prepareCarriedItem(this, a2, a3, a4);
  result = *((_BYTE *)v4 + 15);
  v9 = result == 0;
  if ( *((_BYTE *)v4 + 15) )
  {
    result = *(_DWORD *)v4;
    v9 = *(_DWORD *)v4 == 0;
  }
  if ( !v9 )
    result = ItemInstance::isNull(v4);
    if ( !result )
    {
      result = *((_BYTE *)v4 + 14);
      if ( *((_BYTE *)v4 + 14) )
      {
        result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 916))(v5);
        if ( result >= 1 )
        {
          result = ItemInstance::getUseAnimation(v4);
          if ( result == 4 )
          {
            result = 4277;
            *((_BYTE *)v6 + 4277) = 1;
            *(_BYTE *)(*((_DWORD *)v7 + 163) + 4277) = 1;
            *(_BYTE *)(*((_DWORD *)v7 + 162) + 4277) = 1;
          }
        }
      }
    }
  return result;
}


void __fastcall HumanoidMobRenderer::initTextures(HumanoidMobRenderer *this)
{
  HumanoidMobRenderer *v1; // r4@1
  mce::TextureGroup *v2; // r5@1
  __int64 v3; // r0@1
  char *v4; // r0@4
  char *v5; // r0@5
  __int64 v6; // r0@6
  char *v7; // r0@9
  char *v8; // r0@10
  __int64 v9; // r0@11
  char *v10; // r0@14
  char *v11; // r0@15
  __int64 v12; // r0@16
  char *v13; // r0@19
  char *v14; // r0@20
  __int64 v15; // r0@21
  char *v16; // r0@24
  char *v17; // r0@25
  __int64 v18; // r0@26
  char *v19; // r0@29
  char *v20; // r0@30
  __int64 v21; // r0@31
  char *v22; // r0@34
  char *v23; // r0@35
  __int64 v24; // r0@36
  char *v25; // r0@39
  char *v26; // r0@40
  __int64 v27; // r0@41
  char *v28; // r0@44
  char *v29; // r0@45
  __int64 v30; // r0@46
  char *v31; // r0@49
  char *v32; // r0@50
  __int64 v33; // r0@51
  char *v34; // r0@54
  char *v35; // r0@55
  __int64 v36; // r0@56
  char *v37; // r0@59
  char *v38; // r0@60
  unsigned int *v39; // r2@62
  signed int v40; // r1@64
  unsigned int *v41; // r2@66
  signed int v42; // r1@68
  unsigned int *v43; // r2@70
  signed int v44; // r1@72
  unsigned int *v45; // r2@74
  signed int v46; // r1@76
  unsigned int *v47; // r2@78
  signed int v48; // r1@80
  unsigned int *v49; // r2@82
  signed int v50; // r1@84
  unsigned int *v51; // r2@86
  signed int v52; // r1@88
  unsigned int *v53; // r2@90
  signed int v54; // r1@92
  unsigned int *v55; // r2@94
  signed int v56; // r1@96
  unsigned int *v57; // r2@98
  signed int v58; // r1@100
  unsigned int *v59; // r2@102
  signed int v60; // r1@104
  unsigned int *v61; // r2@106
  signed int v62; // r1@108
  unsigned int *v63; // r2@110
  signed int v64; // r1@112
  unsigned int *v65; // r2@114
  signed int v66; // r1@116
  unsigned int *v67; // r2@118
  signed int v68; // r1@120
  unsigned int *v69; // r2@122
  signed int v70; // r1@124
  unsigned int *v71; // r2@126
  signed int v72; // r1@128
  unsigned int *v73; // r2@130
  signed int v74; // r1@132
  unsigned int *v75; // r2@134
  signed int v76; // r1@136
  unsigned int *v77; // r2@138
  signed int v78; // r1@140
  unsigned int *v79; // r2@142
  signed int v80; // r1@144
  unsigned int *v81; // r2@146
  signed int v82; // r1@148
  unsigned int *v83; // r2@150
  signed int v84; // r1@152
  unsigned int *v85; // r2@154
  signed int v86; // r1@156
  char *v87; // [sp+4h] [bp-1F4h]@56
  char *v88; // [sp+8h] [bp-1F0h]@56
  int v89; // [sp+Ch] [bp-1ECh]@56
  char v90; // [sp+10h] [bp-1E8h]@56
  char *v91; // [sp+2Ch] [bp-1CCh]@51
  char *v92; // [sp+30h] [bp-1C8h]@51
  int v93; // [sp+34h] [bp-1C4h]@51
  char v94; // [sp+38h] [bp-1C0h]@51
  char *v95; // [sp+54h] [bp-1A4h]@46
  char *v96; // [sp+58h] [bp-1A0h]@46
  int v97; // [sp+5Ch] [bp-19Ch]@46
  char v98; // [sp+60h] [bp-198h]@46
  char *v99; // [sp+7Ch] [bp-17Ch]@41
  char *v100; // [sp+80h] [bp-178h]@41
  int v101; // [sp+84h] [bp-174h]@41
  char v102; // [sp+88h] [bp-170h]@41
  char *v103; // [sp+A4h] [bp-154h]@36
  char *v104; // [sp+A8h] [bp-150h]@36
  int v105; // [sp+ACh] [bp-14Ch]@36
  char v106; // [sp+B0h] [bp-148h]@36
  char *v107; // [sp+CCh] [bp-12Ch]@31
  char *v108; // [sp+D0h] [bp-128h]@31
  int v109; // [sp+D4h] [bp-124h]@31
  char v110; // [sp+D8h] [bp-120h]@31
  char *v111; // [sp+F4h] [bp-104h]@26
  char *v112; // [sp+F8h] [bp-100h]@26
  int v113; // [sp+FCh] [bp-FCh]@26
  char v114; // [sp+100h] [bp-F8h]@26
  char *v115; // [sp+11Ch] [bp-DCh]@21
  char *v116; // [sp+120h] [bp-D8h]@21
  int v117; // [sp+124h] [bp-D4h]@21
  char v118; // [sp+128h] [bp-D0h]@21
  char *v119; // [sp+144h] [bp-B4h]@16
  char *v120; // [sp+148h] [bp-B0h]@16
  int v121; // [sp+14Ch] [bp-ACh]@16
  char v122; // [sp+150h] [bp-A8h]@16
  char *v123; // [sp+16Ch] [bp-8Ch]@11
  char *v124; // [sp+170h] [bp-88h]@11
  int v125; // [sp+174h] [bp-84h]@11
  char v126; // [sp+178h] [bp-80h]@11
  char *v127; // [sp+194h] [bp-64h]@6
  char *v128; // [sp+198h] [bp-60h]@6
  int v129; // [sp+19Ch] [bp-5Ch]@6
  char v130; // [sp+1A0h] [bp-58h]@6
  char *v131; // [sp+1BCh] [bp-3Ch]@1
  char *v132; // [sp+1C0h] [bp-38h]@1
  int v133; // [sp+1C4h] [bp-34h]@1
  char v134; // [sp+1C8h] [bp-30h]@1

  v1 = this;
  v2 = (mce::TextureGroup *)mce::TexturePtr::getGroup((HumanoidMobRenderer *)((char *)this + 144));
  sub_119C884((void **)&v131, "textures/models/armor/leather_1");
  v132 = v131;
  v131 = (char *)&unk_28898CC;
  v133 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v134, v2, (int)&v132, 0);
  v3 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TexturePtr>(
      (unsigned __int64 *)((char *)v1 + 660),
      (int)&v134);
  }
  else
    mce::TexturePtr::TexturePtr(v3, (int)&v134);
    *((_DWORD *)v1 + 166) += 24;
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v134);
  v4 = v132 - 12;
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v132 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  v5 = v131 - 12;
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v131 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v127, "textures/models/armor/leather_2");
  v128 = v127;
  v127 = (char *)&unk_28898CC;
  v129 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v130, v2, (int)&v128, 0);
  v6 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v6 == HIDWORD(v6) )
      (int)&v130);
    mce::TexturePtr::TexturePtr(v6, (int)&v130);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v130);
  v7 = v128 - 12;
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v128 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v127 - 12;
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v127 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v123, "textures/models/armor/chain_1");
  v124 = v123;
  v123 = (char *)&unk_28898CC;
  v125 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v126, v2, (int)&v124, 0);
  v9 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v9 == HIDWORD(v9) )
      (int)&v126);
    mce::TexturePtr::TexturePtr(v9, (int)&v126);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v126);
  v10 = v124 - 12;
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v124 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v123 - 12;
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v123 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v119, "textures/models/armor/chain_2");
  v120 = v119;
  v119 = (char *)&unk_28898CC;
  v121 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v122, v2, (int)&v120, 0);
  v12 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v12 == HIDWORD(v12) )
      (int)&v122);
    mce::TexturePtr::TexturePtr(v12, (int)&v122);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v122);
  v13 = v120 - 12;
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v120 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v119 - 12;
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v119 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v115, "textures/models/armor/iron_1");
  v116 = v115;
  v115 = (char *)&unk_28898CC;
  v117 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v118, v2, (int)&v116, 0);
  v15 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v15 == HIDWORD(v15) )
      (int)&v118);
    mce::TexturePtr::TexturePtr(v15, (int)&v118);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v118);
  v16 = v116 - 12;
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v116 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v115 - 12;
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v115 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v111, "textures/models/armor/iron_2");
  v112 = v111;
  v111 = (char *)&unk_28898CC;
  v113 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v114, v2, (int)&v112, 0);
  v18 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v18 == HIDWORD(v18) )
      (int)&v114);
    mce::TexturePtr::TexturePtr(v18, (int)&v114);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v114);
  v19 = v112 - 12;
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v112 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = v111 - 12;
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v111 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v107, "textures/models/armor/diamond_1");
  v108 = v107;
  v107 = (char *)&unk_28898CC;
  v109 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v110, v2, (int)&v108, 0);
  v21 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v21 == HIDWORD(v21) )
      (int)&v110);
    mce::TexturePtr::TexturePtr(v21, (int)&v110);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v110);
  v22 = v108 - 12;
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v108 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = v107 - 12;
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v107 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  sub_119C884((void **)&v103, "textures/models/armor/diamond_2");
  v104 = v103;
  v103 = (char *)&unk_28898CC;
  v105 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v106, v2, (int)&v104, 0);
  v24 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v24 == HIDWORD(v24) )
      (int)&v106);
    mce::TexturePtr::TexturePtr(v24, (int)&v106);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v106);
  v25 = v104 - 12;
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v104 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = v103 - 12;
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v103 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  sub_119C884((void **)&v99, "textures/models/armor/gold_1");
  v100 = v99;
  v99 = (char *)&unk_28898CC;
  v101 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v102, v2, (int)&v100, 0);
  v27 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v27 == HIDWORD(v27) )
      (int)&v102);
    mce::TexturePtr::TexturePtr(v27, (int)&v102);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v102);
  v28 = v100 - 12;
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v100 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = v99 - 12;
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v99 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v95, "textures/models/armor/gold_2");
  v96 = v95;
  v95 = (char *)&unk_28898CC;
  v97 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v98, v2, (int)&v96, 0);
  v30 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v30 == HIDWORD(v30) )
      (int)&v98);
    mce::TexturePtr::TexturePtr(v30, (int)&v98);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v98);
  v31 = v96 - 12;
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v96 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = v95 - 12;
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v95 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  sub_119C884((void **)&v91, "textures/models/armor/elytra");
  v92 = v91;
  v91 = (char *)&unk_28898CC;
  v93 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v94, v2, (int)&v92, 0);
  v33 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v33 == HIDWORD(v33) )
      (int)&v94);
    mce::TexturePtr::TexturePtr(v33, (int)&v94);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v94);
  v34 = v92 - 12;
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v92 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v91 - 12;
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v91 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  sub_119C884((void **)&v87, "textures/models/armor/elytra");
  v88 = v87;
  v87 = (char *)&unk_28898CC;
  v89 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v90, v2, (int)&v88, 0);
  v36 = *((_QWORD *)v1 + 83);
  if ( (_DWORD)v36 == HIDWORD(v36) )
      (int)&v90);
    mce::TexturePtr::TexturePtr(v36, (int)&v90);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v90);
  v37 = v88 - 12;
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v88 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v38 = v87 - 12;
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v87 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
}


signed int __fastcall HumanoidMobRenderer::renderInternal(int a1, int a2, Player **a3, int a4)
{
  int v4; // r5@1
  Player *v5; // r4@1
  int v6; // r8@1
  int v7; // r0@1
  char v8; // r0@1
  float v15; // r1@2
  float v16; // r1@2
  float v18; // r1@2
  float v19; // r1@2
  float v20; // r1@2
  int v21; // r6@3
  char *v22; // r0@3
  int v23; // r6@3
  char *v24; // r0@3
  int v25; // r6@3
  char *v26; // r0@3
  int v27; // r6@3
  char *v28; // r0@3
  int v29; // r6@3
  char *v30; // r0@3
  int v31; // r6@3
  char *v32; // r0@3
  int v33; // r6@3
  char *v34; // r0@3
  int v35; // r6@3
  char *v36; // r0@3
  int v37; // r6@3
  char *v38; // r0@3
  int v39; // r6@3
  char *v40; // r0@3
  int v41; // r6@3
  char *v42; // r0@3
  int v43; // r6@3
  char *v44; // r0@3
  int v45; // r6@3
  char *v46; // r0@3
  int v47; // r6@3
  char *v48; // r0@3
  int v49; // r6@3
  char *v50; // r0@3
  int v51; // r6@3
  char *v52; // r0@3
  int v53; // r7@3
  int v56; // r7@3
  int v59; // r7@3
  int v62; // r7@3
  int v65; // r7@3
  int v68; // r7@3
  int v71; // r7@3
  int v74; // r7@3
  int v77; // r7@3
  int v80; // r7@3
  int v83; // r7@3
  int v86; // r7@3
  int v89; // r7@3
  int v92; // r7@3
  int v95; // r7@3
  int v98; // r7@3
  SkinInfoData *v101; // r0@4
  char *v102; // r0@4
  int v103; // r0@5
  int v104; // r0@6
  int v105; // r2@6
  int v106; // r3@6
  signed int result; // r0@6
  __int64 v108; // [sp+1Ch] [bp-114h]@1
  float v109; // [sp+30h] [bp-100h]@3
  float v110; // [sp+3Ch] [bp-F4h]@3
  float v111; // [sp+48h] [bp-E8h]@3
  float v112; // [sp+54h] [bp-DCh]@3
  float v113; // [sp+60h] [bp-D0h]@3
  float v114; // [sp+6Ch] [bp-C4h]@3
  float v115; // [sp+78h] [bp-B8h]@3
  float v116; // [sp+84h] [bp-ACh]@3
  float v117; // [sp+90h] [bp-A0h]@3
  float v118; // [sp+9Ch] [bp-94h]@3
  float v119; // [sp+A8h] [bp-88h]@3
  float v120; // [sp+B4h] [bp-7Ch]@3
  float v121; // [sp+C0h] [bp-70h]@3
  float v122; // [sp+CCh] [bp-64h]@3
  float v123; // [sp+D8h] [bp-58h]@3
  float v124; // [sp+E4h] [bp-4Ch]@3
  float v125; // [sp+F0h] [bp-40h]@2

  v108 = *(_QWORD *)&a2;
  v4 = a1;
  v5 = *a3;
  v6 = a4;
  v7 = (*(int (__fastcall **)(Player *))(*(_DWORD *)*a3 + 908))(*a3);
  (*(void (__fastcall **)(int, int, Player *, int))(*(_DWORD *)v4 + 44))(v4, v6, v5, v7);
  v8 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 312))(v5);
  *(_BYTE *)(v6 + 4276) = v8;
  *(_BYTE *)(*(_DWORD *)(v4 + 652) + 4276) = v8;
  *(_BYTE *)(*(_DWORD *)(v4 + 648) + 4276) = v8;
  (*(void (__fastcall **)(Player *))(*(_DWORD *)v5 + 312))(v5);
  if ( Entity::getStatusFlag((int)v5, 30) == 1 )
  {
    Entity::getRotation((Entity *)&v125, (int)v5);
    __asm
    {
      VLDR            S0, [SP,#0x130+var_3C]
      VLDR            S16, [SP,#0x130+var_40]
    }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S18, [R0]
      VMUL.F32        S0, S0, S18
      VMOV            R6, S0
    mce::Math::cos(_R6, v15);
    mce::Math::sin(_R6, v16);
      VMUL.F32        S0, S16, S18
    mce::Math::cos(_R6, v18);
    mce::Math::sin(_R6, v19);
    mce::Math::cos(_R6, v20);
  }
  v21 = *(_DWORD *)(v4 + 656);
  v22 = ModelPart::getOrigin((ModelPart *)(v6 + 536));
  ModelPart::setOrigin((ModelPart *)(v21 + 60), (const Vec3 *)v22);
  v23 = *(_DWORD *)(v4 + 656);
  v24 = ModelPart::getOrigin((ModelPart *)(v6 + 536));
  ModelPart::setOrigin((ModelPart *)(v23 + 280), (const Vec3 *)v24);
  v25 = *(_DWORD *)(v4 + 648);
  v26 = ModelPart::getOrigin((ModelPart *)(v6 + 976));
  ModelPart::setOrigin((ModelPart *)(v25 + 976), (const Vec3 *)v26);
  v27 = *(_DWORD *)(v4 + 648);
  v28 = ModelPart::getOrigin((ModelPart *)(v6 + 756));
  ModelPart::setOrigin((ModelPart *)(v27 + 756), (const Vec3 *)v28);
  v29 = *(_DWORD *)(v4 + 648);
  v30 = ModelPart::getOrigin((ModelPart *)(v6 + 1416));
  ModelPart::setOrigin((ModelPart *)(v29 + 1416), (const Vec3 *)v30);
  v31 = *(_DWORD *)(v4 + 648);
  v32 = ModelPart::getOrigin((ModelPart *)(v6 + 1196));
  ModelPart::setOrigin((ModelPart *)(v31 + 1196), (const Vec3 *)v32);
  v33 = *(_DWORD *)(v4 + 648);
  v34 = ModelPart::getOrigin((ModelPart *)(v6 + 536));
  ModelPart::setOrigin((ModelPart *)(v33 + 536), (const Vec3 *)v34);
  v35 = *(_DWORD *)(v4 + 648);
  v36 = ModelPart::getOrigin((ModelPart *)(v6 + 96));
  ModelPart::setOrigin((ModelPart *)(v35 + 96), (const Vec3 *)v36);
  v37 = *(_DWORD *)(v4 + 648);
  v38 = ModelPart::getOrigin((ModelPart *)(v6 + 2076));
  ModelPart::setOrigin((ModelPart *)(v37 + 2076), (const Vec3 *)v38);
  v39 = *(_DWORD *)(v4 + 652);
  v40 = ModelPart::getOrigin((ModelPart *)(v6 + 976));
  ModelPart::setOrigin((ModelPart *)(v39 + 976), (const Vec3 *)v40);
  v41 = *(_DWORD *)(v4 + 652);
  v42 = ModelPart::getOrigin((ModelPart *)(v6 + 756));
  ModelPart::setOrigin((ModelPart *)(v41 + 756), (const Vec3 *)v42);
  v43 = *(_DWORD *)(v4 + 652);
  v44 = ModelPart::getOrigin((ModelPart *)(v6 + 1416));
  ModelPart::setOrigin((ModelPart *)(v43 + 1416), (const Vec3 *)v44);
  v45 = *(_DWORD *)(v4 + 652);
  v46 = ModelPart::getOrigin((ModelPart *)(v6 + 1196));
  ModelPart::setOrigin((ModelPart *)(v45 + 1196), (const Vec3 *)v46);
  v47 = *(_DWORD *)(v4 + 652);
  v48 = ModelPart::getOrigin((ModelPart *)(v6 + 536));
  ModelPart::setOrigin((ModelPart *)(v47 + 536), (const Vec3 *)v48);
  v49 = *(_DWORD *)(v4 + 652);
  v50 = ModelPart::getOrigin((ModelPart *)(v6 + 96));
  ModelPart::setOrigin((ModelPart *)(v49 + 96), (const Vec3 *)v50);
  v51 = *(_DWORD *)(v4 + 652);
  v52 = ModelPart::getOrigin((ModelPart *)(v6 + 2076));
  ModelPart::setOrigin((ModelPart *)(v51 + 2076), (const Vec3 *)v52);
  v53 = *(_DWORD *)(v4 + 656);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 2296));
  _R0 = ModelPart::getOrigin((ModelPart *)(v6 + 536));
  __asm
    VLDR            S0, [R0]
    VLDR            S6, [R6]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VSUB.F32        S0, S6, S0
    VLDR            S8, [R6,#4]
    VLDR            S10, [R6,#8]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x130+var_4C]
    VSTR            S2, [SP,#0x130+var_48]
    VSTR            S4, [SP,#0x130+var_44]
  ModelPart::setOffset((ModelPart *)(v53 + 60), (const Vec3 *)&v124);
  v56 = *(_DWORD *)(v4 + 656);
    VSTR            S0, [SP,#0x130+var_58]
    VSTR            S2, [SP,#0x130+var_54]
    VSTR            S4, [SP,#0x130+var_50]
  ModelPart::setOffset((ModelPart *)(v56 + 280), (const Vec3 *)&v123);
  v59 = *(_DWORD *)(v4 + 648);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 2956));
  _R0 = ModelPart::getOrigin((ModelPart *)(v6 + 976));
    VSTR            S0, [SP,#0x130+var_64]
    VSTR            S2, [SP,#0x130+var_60]
    VSTR            S4, [SP,#0x130+var_5C]
  ModelPart::setOffset((ModelPart *)(v59 + 976), (const Vec3 *)&v122);
  v62 = *(_DWORD *)(v4 + 648);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 2736));
  _R0 = ModelPart::getOrigin((ModelPart *)(v6 + 756));
    VSTR            S0, [SP,#0x130+var_70]
    VSTR            S2, [SP,#0x130+var_6C]
    VSTR            S4, [SP,#0x130+var_68]
  ModelPart::setOffset((ModelPart *)(v62 + 756), (const Vec3 *)&v121);
  v65 = *(_DWORD *)(v4 + 648);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 3396));
  _R0 = ModelPart::getOrigin((ModelPart *)(v6 + 1416));
    VSTR            S0, [SP,#0x130+var_7C]
    VSTR            S2, [SP,#0x130+var_78]
    VSTR            S4, [SP,#0x130+var_74]
  ModelPart::setOffset((ModelPart *)(v65 + 1416), (const Vec3 *)&v120);
  v68 = *(_DWORD *)(v4 + 648);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 3176));
  _R0 = ModelPart::getOrigin((ModelPart *)(v6 + 1196));
    VSTR            S0, [SP,#0x130+var_88]
    VSTR            S2, [SP,#0x130+var_84]
    VSTR            S4, [SP,#0x130+var_80]
  ModelPart::setOffset((ModelPart *)(v68 + 1196), (const Vec3 *)&v119);
  v71 = *(_DWORD *)(v4 + 648);
    VSTR            S0, [SP,#0x130+var_94]
    VSTR            S2, [SP,#0x130+var_90]
    VSTR            S4, [SP,#0x130+var_8C]
  ModelPart::setOffset((ModelPart *)(v71 + 536), (const Vec3 *)&v118);
  v74 = *(_DWORD *)(v4 + 648);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 2516));
  _R0 = ModelPart::getOrigin((ModelPart *)(v6 + 96));
    VSTR            S0, [SP,#0x130+var_A0]
    VSTR            S2, [SP,#0x130+var_9C]
    VSTR            S4, [SP,#0x130+var_98]
  ModelPart::setOffset((ModelPart *)(v74 + 96), (const Vec3 *)&v117);
  v77 = *(_DWORD *)(v4 + 648);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 3616));
    VSTR            S0, [SP,#0x130+var_AC]
    VSTR            S2, [SP,#0x130+var_A8]
    VSTR            S4, [SP,#0x130+var_A4]
  ModelPart::setOffset((ModelPart *)(v77 + 2076), (const Vec3 *)&v116);
  v80 = *(_DWORD *)(v4 + 652);
    VSTR            S0, [SP,#0x130+var_B8]
    VSTR            S2, [SP,#0x130+var_B4]
    VSTR            S4, [SP,#0x130+var_B0]
  ModelPart::setOffset((ModelPart *)(v80 + 976), (const Vec3 *)&v115);
  v83 = *(_DWORD *)(v4 + 652);
    VSTR            S0, [SP,#0x130+var_C4]
    VSTR            S2, [SP,#0x130+var_C0]
    VSTR            S4, [SP,#0x130+var_BC]
  ModelPart::setOffset((ModelPart *)(v83 + 756), (const Vec3 *)&v114);
  v86 = *(_DWORD *)(v4 + 652);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 4056));
    VSTR            S0, [SP,#0x130+var_D0]
    VSTR            S2, [SP,#0x130+var_CC]
    VSTR            S4, [SP,#0x130+var_C8]
  ModelPart::setOffset((ModelPart *)(v86 + 1416), (const Vec3 *)&v113);
  v89 = *(_DWORD *)(v4 + 652);
  _R6 = ModelPart::getOrigin((ModelPart *)(v6 + 3836));
    VSTR            S0, [SP,#0x130+var_DC]
    VSTR            S2, [SP,#0x130+var_D8]
    VSTR            S4, [SP,#0x130+var_D4]
  ModelPart::setOffset((ModelPart *)(v89 + 1196), (const Vec3 *)&v112);
  v92 = *(_DWORD *)(v4 + 652);
    VSTR            S0, [SP,#0x130+var_E8]
    VSTR            S2, [SP,#0x130+var_E4]
    VSTR            S4, [SP,#0x130+var_E0]
  ModelPart::setOffset((ModelPart *)(v92 + 536), (const Vec3 *)&v111);
  v95 = *(_DWORD *)(v4 + 652);
    VSTR            S0, [SP,#0x130+var_F4]
    VSTR            S2, [SP,#0x130+var_F0]
    VSTR            S4, [SP,#0x130+var_EC]
  ModelPart::setOffset((ModelPart *)(v95 + 96), (const Vec3 *)&v110);
  v98 = *(_DWORD *)(v4 + 652);
    VSTR            S0, [SP,#0x130+var_100]
    VSTR            S2, [SP,#0x130+var_FC]
    VSTR            S4, [SP,#0x130+var_F8]
  ModelPart::setOffset((ModelPart *)(v98 + 2076), (const Vec3 *)&v109);
  if ( Entity::hasType((int)v5, 319) == 1 )
    v101 = (SkinInfoData *)Player::getSkin(v5);
    v102 = SkinInfoData::getGeometryName(v101);
    if ( !sub_119C9E8((const void **)v102, "geometry.AdventureTime.SusanStrong") )
      v103 = *(_DWORD *)(v4 + 652);
      *(_DWORD *)(v103 + 1464) = 1067450368;
      *(_DWORD *)(v103 + 1244) = 1067450368;
  v104 = (*(int (__fastcall **)(int, Player *))(*(_DWORD *)v4 + 84))(v4, v5);
  MobRenderer::renderModel(v4, (BaseEntityRenderContext *)v108, SHIDWORD(v108), v6, v104);
  *(_BYTE *)(v6 + 4277) = 0;
  v105 = *(_DWORD *)(v4 + 652);
  *(_BYTE *)(v105 + 4277) = 0;
  v106 = *(_DWORD *)(v4 + 648);
  *(_BYTE *)(v106 + 4277) = 0;
  *(_BYTE *)(v6 + 4276) = 0;
  *(_BYTE *)(v105 + 4276) = 0;
  *(_BYTE *)(v106 + 4276) = 0;
  result = 4300;
  *(_DWORD *)(v106 + 4300) = 2139095039;
  *(_DWORD *)(v106 + 4304) = 2139095039;
  *(_DWORD *)(v105 + 4300) = 2139095039;
  *(_DWORD *)(v105 + 4304) = 2139095039;
  *(_DWORD *)(v6 + 4300) = 2139095039;
  *(_DWORD *)(v6 + 4304) = 2139095039;
  return result;
}


int __fastcall HumanoidMobRenderer::additionalRendering(__int64 this, Model *a2, Mob *a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
  Mob *v9; // r9@1
  Model *v10; // r4@1
  float v14; // r3@3
  int v19; // r8@5
  __int64 v20; // r10@5
  int v21; // r4@5
  int v23; // r6@8
  signed int v24; // r0@8
  bool v25; // zf@8
  int v26; // r0@13
  int v27; // r0@13
  int v30; // r3@15
  int v32; // r10@15
  int v33; // r0@15
  ItemInHandRenderer *v36; // r0@16
  bool v37; // zf@18
  int v39; // r0@25
  int v40; // r7@25
  int result; // r0@25
  bool v42; // zf@25
  int v43; // r0@30
  int v45; // r4@31
  int v47; // r0@32
  int v48; // r0@32
  int v49; // r5@32 OVERLAPPED
  int v50; // r6@32 OVERLAPPED
  int v51; // r4@33
  int v53; // r5@40
  int v54; // r5@40
  int v56; // r4@42
  int v57; // r4@42
  signed int v58; // r0@42
  int v59; // r4@48
  int v63; // r4@48
  int v64; // r4@49
  __int64 v65; // r5@49
  int v66; // r4@49
  int v69; // r4@49
  int v70; // r4@50
  int v73; // r4@51
  int v74; // r4@51
  int v78; // r4@51
  int v81; // r4@53
  int v82; // r4@53
  ItemInHandRenderer *v83; // r4@55
  float v84; // [sp+14h] [bp-DCh]@0
  int v85; // [sp+1Ch] [bp-D4h]@1
  Model *v86; // [sp+20h] [bp-D0h]@5
  __int64 v87; // [sp+24h] [bp-CCh]@1
  char v88; // [sp+2Ch] [bp-C4h]@30
  int v89; // [sp+34h] [bp-BCh]@15
  int v90; // [sp+38h] [bp-B8h]@15
  signed int v91; // [sp+3Ch] [bp-B4h]@15
  char v92; // [sp+40h] [bp-B0h]@13
  int v93; // [sp+48h] [bp-A8h]@31
  int v94; // [sp+4Ch] [bp-A4h]@31
  int v95; // [sp+50h] [bp-A0h]@31
  int v96; // [sp+54h] [bp-9Ch]@31
  int v97; // [sp+58h] [bp-98h]@31
  int v98; // [sp+5Ch] [bp-94h]@31
  int v99; // [sp+60h] [bp-90h]@31
  int v100; // [sp+64h] [bp-8Ch]@31
  int v101; // [sp+68h] [bp-88h]@31
  int v102; // [sp+6Ch] [bp-84h]@31
  int v103; // [sp+70h] [bp-80h]@31
  int v104; // [sp+74h] [bp-7Ch]@31
  int v105; // [sp+78h] [bp-78h]@31
  int v106; // [sp+7Ch] [bp-74h]@31
  int v107; // [sp+80h] [bp-70h]@31
  int v108; // [sp+84h] [bp-6Ch]@31
  int v109; // [sp+88h] [bp-68h]@31
  int v110; // [sp+8Ch] [bp-64h]@31
  int v111; // [sp+90h] [bp-60h]@31
  int v112; // [sp+94h] [bp-5Ch]@31

  v87 = this;
  v9 = a3;
  v10 = a2;
  v85 = BaseEntityRenderContext::getScreenContext((BaseEntityRenderContext *)HIDWORD(this));
  Entity::isRiding(v9);
  __asm
  {
    VLDR            S16, [SP,#0xF0+arg_14]
    VLDR            S18, [SP,#0xF0+arg_10]
    VLDR            S22, [SP,#0xF0+arg_C]
    VLDR            S20, [SP,#0xF0+arg_8]
    VLDR            S24, [SP,#0xF0+arg_4]
    VLDR            S26, [SP,#0xF0+arg_0]
  }
  if ( _ZF && *(_BYTE *)(Entity::getRide(v9) + 528) )
    _R0 = mce::Math::lerpRotate(*((mce::Math **)v9 + 854), *((float *)v9 + 853), 0.0, v14);
    __asm
    {
      VLDR            S0, =90.0
      VMOV            S2, R0
      VADD.F32        S0, S22, S0
      VADD.F32        S22, S0, S2
    }
    VMOV            R5, S26
    VMOV            R7, S24
  v86 = v10;
    VMOV            R3, S20
    VSTR            S22, [SP,#0xF0+var_F0]
    VSTR            S18, [SP,#0xF0+var_EC]
    VSTR            S16, [SP,#0xF0+var_E8]
  (*(void (__fastcall **)(Model *, int, int, int))(*(_DWORD *)v10 + 64))(v10, _R5, _R7, _R3);
  v19 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v9 + 1028))(v9, 0);
  v20 = *(_QWORD *)v19;
  v21 = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)v9 + 1028))(v9, 1);
  _ZF = *(_BYTE *)(v19 + 15) == 0;
  if ( *(_BYTE *)(v19 + 15) )
    _ZF = *(_DWORD *)v19 == 0;
  if ( !_ZF )
    v23 = *(_DWORD *)(*(_DWORD *)(v87 + 648) + 4292);
    v24 = ItemInstance::isNull((ItemInstance *)v19);
    v25 = v24 == 0;
    if ( !v24 )
      v25 = (v23 & 0x40) == 0;
    if ( v25 && *(_BYTE *)(v19 + 14) )
      v26 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)HIDWORD(v87));
      MatrixStack::push((MatrixStack *)&v92, v26);
      v27 = MatrixStack::MatrixStackRef::operator*((int)&v92);
      ModelPart::translateTo((int)v86 + 96, v27, 1031798784);
      if ( HIDWORD(v20) == Block::mPumpkin )
      {
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v92);
        __asm
        {
          VMOV.F32        S0, #0.25
          VLDR            S2, [R0,#0x14]
          VLDR            S4, [R0,#0x18]
          VLDR            S8, [R0,#0x10]
          VLDR            S6, [R0,#0x1C]
          VLDR            S10, [R0,#0x34]
          VLDR            S12, [R0,#0x38]
          VLDR            S14, [R0,#0x3C]
          VMUL.F32        S2, S2, S0
          VMUL.F32        S4, S4, S0
          VMUL.F32        S8, S8, S0
          VMUL.F32        S0, S6, S0
          VLDR            S6, [R0,#0x30]
          VSUB.F32        S2, S10, S2
          VSUB.F32        S4, S12, S4
          VSUB.F32        S6, S6, S8
          VSUB.F32        S0, S14, S0
          VSTR            S6, [R0,#0x30]
          VSTR            S2, [R0,#0x34]
          VSTR            S4, [R0,#0x38]
          VSTR            S0, [R0,#0x3C]
        }
          VMOV.F32        S0, #0.625
          VLDR            S2, [R0]
          VSTR            S2, [R0]
          VLDR            S2, [R0,#4]
          VSTR            S2, [R0,#4]
          VLDR            S2, [R0,#8]
          VSTR            S2, [R0,#8]
          VLDR            S2, [R0,#0xC]
          VMUL.F32        S0, S2, S0
          VMOV.F32        S2, #-0.625
          VSTR            S0, [R0,#0xC]
          VLDR            S0, [R0,#0x10]
          VMUL.F32        S0, S0, S2
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
          VSTR            S0, [R0,#0x2C]
        v36 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer((BaseEntityRenderContext *)HIDWORD(v87));
        ItemInHandRenderer::renderItem(
          v36,
          (BaseEntityRenderContext *)HIDWORD(v87),
          v9,
          (const ItemInstance *)v19,
          0,
          1,
          0);
      }
      else if ( (_DWORD)v20 == Item::mSkull )
          VMOV.F32        S0, #1.1875
          VMOV.F32        S2, #-1.1875
          VLDR            S0, =0.0001
        v30 = *(_DWORD *)(HIDWORD(v87) + 4);
        EntityShaderManager::_setupShaderParameters(v87, v85, *(float *)&v9);
        _R0 = (int)v9 + 3488;
        __asm { VLDR            S26, [R0] }
        v32 = BaseEntityRenderContext::getBlockEntityRenderDispatcher((BaseEntityRenderContext *)HIDWORD(v87));
        v89 = -1090519040;
        v90 = 0;
        v91 = -1090519040;
        v33 = ItemInstance::getAuxValue((ItemInstance *)v19);
        __asm { VSTR            S26, [SP,#0xF0+var_DC] }
        BlockEntityRenderDispatcher::renderSkull(
          v32,
          SHIDWORD(v87),
          (int)&v89,
          1127481344,
          *(float *)&v33,
          v84);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v92);
  v37 = *(_BYTE *)(v21 + 15) == 0;
  if ( *(_BYTE *)(v21 + 15) )
    v37 = *(_DWORD *)v21 == 0;
  if ( !v37
    && !ItemInstance::isNull((ItemInstance *)v21)
    && *(_BYTE *)(v21 + 14)
    && ArmorItem::isElytra(*(ArmorItem **)v21) == 1 )
    _R2 = HIDWORD(v87);
    *(_DWORD *)(*(_QWORD *)(v87 + 656) + 32) = (*(_QWORD *)(v87 + 656) >> 32) + 240;
      VLDR            S0, [R2,#4]
      VSTR            S0, [SP,#0xF0+var_F0]
    (*(void (**)(void))(**(_DWORD **)(v87 + 656) + 68))();
      VSTR            S24, [SP,#0xF0+var_F0]
      VSTR            S20, [SP,#0xF0+var_EC]
      VSTR            S22, [SP,#0xF0+var_E8]
      VSTR            S18, [SP,#0xF0+var_E4]
      VSTR            S16, [SP,#0xF0+var_E0]
    (*(void (**)(void))(**(_DWORD **)(v87 + 656) + 60))();
  v39 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v9 + 908))(v9);
  v40 = v39;
  result = *(_BYTE *)(v39 + 15);
  v42 = result == 0;
  if ( result )
    result = *(_DWORD *)v40;
    v42 = *(_DWORD *)v40 == 0;
  if ( !v42 )
    result = ItemInstance::isNull((ItemInstance *)v40);
    if ( !result )
      result = *(_BYTE *)(v40 + 14);
      if ( *(_BYTE *)(v40 + 14) )
        v43 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)HIDWORD(v87));
        MatrixStack::push((MatrixStack *)&v88, v43);
        if ( Entity::isBaby(v9) == 1 )
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          __asm
          {
            VMOV.F32        S0, #0.125
            VLDR            S2, [R0,#0x14]
            VLDR            S4, [R0,#0x18]
            VLDR            S8, [R0,#0x10]
            VLDR            S6, [R0,#0x1C]
            VLDR            S10, [R0,#0x34]
            VLDR            S12, [R0,#0x38]
            VLDR            S14, [R0,#0x3C]
            VMUL.F32        S2, S2, S0
            VMUL.F32        S4, S4, S0
            VMUL.F32        S8, S8, S0
            VMUL.F32        S0, S6, S0
            VLDR            S6, [R0,#0x30]
            VSUB.F32        S2, S10, S2
            VSUB.F32        S4, S12, S4
            VSUB.F32        S6, S6, S8
            VSUB.F32        S0, S14, S0
            VSTR            S6, [R0,#0x30]
            VSTR            S2, [R0,#0x34]
            VSTR            S4, [R0,#0x38]
            VSTR            S0, [R0,#0x3C]
          }
          v45 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          v93 = -1082130432;
          v94 = 0;
          v95 = 0;
          v112 = -1046478848;
          glm::rotate<float>((int)&v96, v45, (int)&v112, (int)&v93);
          *(_DWORD *)v45 = v96;
          *(_DWORD *)(v45 + 4) = v97;
          *(_DWORD *)(v45 + 8) = v98;
          *(_DWORD *)(v45 + 12) = v99;
          *(_DWORD *)(v45 + 16) = v100;
          *(_DWORD *)(v45 + 20) = v101;
          *(_DWORD *)(v45 + 24) = v102;
          *(_DWORD *)(v45 + 28) = v103;
          *(_DWORD *)(v45 + 32) = v104;
          *(_DWORD *)(v45 + 36) = v105;
          *(_DWORD *)(v45 + 40) = v106;
          *(_DWORD *)(v45 + 44) = v107;
          *(_DWORD *)(v45 + 48) = v108;
          *(_DWORD *)(v45 + 52) = v109;
          *(_DWORD *)(v45 + 56) = v110;
          *(_DWORD *)(v45 + 60) = v111;
            VMOV.F32        S0, #0.5
            VLDR            S2, [R0]
            VSTR            S2, [R0]
            VLDR            S2, [R0,#4]
            VSTR            S2, [R0,#4]
            VLDR            S2, [R0,#8]
            VSTR            S2, [R0,#8]
            VLDR            S2, [R0,#0xC]
            VSTR            S2, [R0,#0xC]
            VLDR            S2, [R0,#0x10]
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
        v47 = MatrixStack::MatrixStackRef::operator*((int)&v88);
        ModelPart::translateTo((int)v86 + 756, v47, 1031798784);
        v48 = MatrixStack::MatrixStackRef::operator*((int)&v88);
        ModelPart::translateTo((int)v86 + 1636, v48, 1031798784);
        *(_QWORD *)&v49 = *(_QWORD *)v40;
        if ( *(_QWORD *)v40 >> 32 )
          v51 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v50 + 4)]);
        else
          v51 = (*(int (__fastcall **)(int))(*(_DWORD *)v49 + 60))(v49);
        if ( BlockTessellator::canRender(v51) == 1 )
            VMOV.F32        S16, #0.1875
            VLDR            S0, =0.03125
          if ( v50 == Block::mWoolCarpet )
            __asm { VMOVEQ.F32      S16, S0 }
          if ( v50 == Block::mTopSnow )
            VMOV.F32        S0, #-0.3125
            VMUL.F32        S2, S2, S16
            VLDR            S8, [R0,#0x20]
            VMUL.F32        S4, S4, S16
            VLDR            S10, [R0,#0x24]
            VMUL.F32        S6, S6, S16
            VLDR            S12, [R0,#0x28]
            VLDR            S1, [R0,#0x10]
            VLDR            S14, [R0,#0x2C]
            VMUL.F32        S10, S10, S0
            VMUL.F32        S12, S12, S0
            VMUL.F32        S0, S14, S0
            VMUL.F32        S1, S1, S16
            VADD.F32        S2, S10, S2
            VADD.F32        S4, S12, S4
            VADD.F32        S0, S0, S6
            VADD.F32        S8, S8, S1
            VADD.F32        S2, S2, S10
            VADD.F32        S4, S4, S12
            VADD.F32        S0, S0, S14
            VADD.F32        S6, S8, S6
          v53 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          v93 = 1065353216;
          v112 = 1128792064;
          glm::rotate<float>((int)&v96, v53, (int)&v112, (int)&v93);
          *(_DWORD *)v53 = v96;
          *(_DWORD *)(v53 + 4) = v97;
          *(_DWORD *)(v53 + 8) = v98;
          *(_DWORD *)(v53 + 12) = v99;
          *(_DWORD *)(v53 + 16) = v100;
          *(_DWORD *)(v53 + 20) = v101;
          *(_DWORD *)(v53 + 24) = v102;
          *(_DWORD *)(v53 + 28) = v103;
          *(_DWORD *)(v53 + 32) = v104;
          *(_DWORD *)(v53 + 36) = v105;
          *(_DWORD *)(v53 + 40) = v106;
          *(_DWORD *)(v53 + 44) = v107;
          *(_DWORD *)(v53 + 48) = v108;
          *(_DWORD *)(v53 + 52) = v109;
          *(_DWORD *)(v53 + 56) = v110;
          *(_DWORD *)(v53 + 60) = v111;
          v54 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          v93 = 0;
          v94 = 1065353216;
          v112 = 1110704128;
          glm::rotate<float>((int)&v96, v54, (int)&v112, (int)&v93);
          *(_DWORD *)v54 = v96;
          *(_DWORD *)(v54 + 4) = v97;
          *(_DWORD *)(v54 + 8) = v98;
          *(_DWORD *)(v54 + 12) = v99;
          *(_DWORD *)(v54 + 16) = v100;
          *(_DWORD *)(v54 + 20) = v101;
          *(_DWORD *)(v54 + 24) = v102;
          *(_DWORD *)(v54 + 28) = v103;
          *(_DWORD *)(v54 + 32) = v104;
          *(_DWORD *)(v54 + 36) = v105;
          *(_DWORD *)(v54 + 40) = v106;
          *(_DWORD *)(v54 + 44) = v107;
          *(_DWORD *)(v54 + 48) = v108;
          *(_DWORD *)(v54 + 52) = v109;
          *(_DWORD *)(v54 + 56) = v110;
          *(_DWORD *)(v54 + 60) = v111;
            VMOV.F32        S0, #0.375
          if ( _ZF )
            v70 = MatrixStack::MatrixStackRef::operator->((int)&v88);
            v93 = 0;
            v94 = -1082130432;
            v95 = 0;
            v112 = 1119092736;
            glm::rotate<float>((int)&v96, v70, (int)&v112, (int)&v93);
            *(_DWORD *)v70 = v96;
            *(_DWORD *)(v70 + 4) = v97;
            *(_DWORD *)(v70 + 8) = v98;
            *(_DWORD *)(v70 + 12) = v99;
            *(_DWORD *)(v70 + 16) = v100;
            *(_DWORD *)(v70 + 20) = v101;
            *(_DWORD *)(v70 + 24) = v102;
            *(_DWORD *)(v70 + 28) = v103;
            *(_DWORD *)(v70 + 32) = v104;
            *(_DWORD *)(v70 + 36) = v105;
            *(_DWORD *)(v70 + 40) = v106;
            *(_DWORD *)(v70 + 44) = v107;
            *(_DWORD *)(v70 + 48) = v108;
            *(_DWORD *)(v70 + 52) = v109;
            *(_DWORD *)(v70 + 56) = v110;
            *(_DWORD *)(v70 + 60) = v111;
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v88);
            __asm
            {
              VMOV.F32        S0, #0.25
              VLDR            S8, [R0,#0xC]
              VMOV.F32        S2, #-0.5
              VLDR            S10, [R0,#0x10]
              VLDR            S12, [R0,#0x14]
              VMOV.F32        S5, #-0.75
              VLDR            S14, [R0,#0x18]
              VLDR            S6, [R0,#8]
              VLDR            S1, [R0,#0x1C]
              VLDMIA          R0, {S3-S4}
              VMUL.F32        S8, S8, S0
              VMUL.F32        S3, S3, S0
              VLDR            S7, [R0,#0x20]
              VMUL.F32        S10, S10, S2
              VMUL.F32        S4, S4, S0
              VMUL.F32        S12, S12, S2
              VMUL.F32        S0, S6, S0
              VLDR            S6, [R0,#0x24]
              VMUL.F32        S14, S14, S2
              VMUL.F32        S2, S1, S2
              VMUL.F32        S1, S7, S5
              VLDR            S7, [R0,#0x28]
              VSUB.F32        S10, S10, S3
              VMUL.F32        S6, S6, S5
              VSUB.F32        S4, S12, S4
              VLDR            S12, [R0,#0x2C]
              VMUL.F32        S3, S7, S5
              VSUB.F32        S0, S14, S0
              VSUB.F32        S2, S2, S8
              VMUL.F32        S12, S12, S5
              VADD.F32        S8, S10, S1
              VLDR            S10, [R0,#0x34]
              VADD.F32        S4, S4, S6
              VLDR            S6, [R0,#0x30]
              VADD.F32        S0, S0, S3
              VADD.F32        S2, S2, S12
              VLDR            S12, [R0,#0x38]
              VADD.F32        S6, S8, S6
              VLDR            S8, [R0,#0x3C]
              VADD.F32        S4, S4, S10
              VADD.F32        S0, S0, S12
              VADD.F32        S2, S2, S8
              VSTR            S6, [R0,#0x30]
              VSTR            S4, [R0,#0x34]
              VSTR            S0, [R0,#0x38]
              VSTR            S2, [R0,#0x3C]
            }
          else if ( v51 == 81 )
            v56 = MatrixStack::MatrixStackRef::operator->((int)&v88);
            v93 = 1065353216;
            v94 = 0;
            v112 = 1110704128;
            glm::rotate<float>((int)&v96, v56, (int)&v112, (int)&v93);
            *(_DWORD *)v56 = v96;
            *(_DWORD *)(v56 + 4) = v97;
            *(_DWORD *)(v56 + 8) = v98;
            *(_DWORD *)(v56 + 12) = v99;
            *(_DWORD *)(v56 + 16) = v100;
            *(_DWORD *)(v56 + 20) = v101;
            *(_DWORD *)(v56 + 24) = v102;
            *(_DWORD *)(v56 + 28) = v103;
            *(_DWORD *)(v56 + 32) = v104;
            *(_DWORD *)(v56 + 36) = v105;
            *(_DWORD *)(v56 + 40) = v106;
            *(_DWORD *)(v56 + 44) = v107;
            *(_DWORD *)(v56 + 48) = v108;
            *(_DWORD *)(v56 + 52) = v109;
            *(_DWORD *)(v56 + 56) = v110;
            *(_DWORD *)(v56 + 60) = v111;
            v57 = MatrixStack::MatrixStackRef::operator->((int)&v88);
            v58 = 1106247680;
            v95 = 1065353216;
            goto LABEL_54;
LABEL_55:
          v83 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer((BaseEntityRenderContext *)HIDWORD(v87));
          ItemInHandRenderer::renderItem(
            v83,
            (BaseEntityRenderContext *)HIDWORD(v87),
            v9,
            (const ItemInstance *)v40,
            0,
            1,
            *(_BYTE *)(v87 + 136));
          return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v88);
        if ( v49 == Item::mBow )
          v64 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          LODWORD(v65) = 0;
          HIDWORD(v65) = 1065353216;
          v112 = 1127481344;
          glm::rotate<float>((int)&v96, v64, (int)&v112, (int)&v93);
          *(_DWORD *)v64 = v96;
          *(_DWORD *)(v64 + 4) = v97;
          *(_DWORD *)(v64 + 8) = v98;
          *(_DWORD *)(v64 + 12) = v99;
          *(_DWORD *)(v64 + 16) = v100;
          *(_DWORD *)(v64 + 20) = v101;
          *(_DWORD *)(v64 + 24) = v102;
          *(_DWORD *)(v64 + 28) = v103;
          *(_DWORD *)(v64 + 32) = v104;
          *(_DWORD *)(v64 + 36) = v105;
          *(_DWORD *)(v64 + 40) = v106;
          *(_DWORD *)(v64 + 44) = v107;
          *(_DWORD *)(v64 + 48) = v108;
          *(_DWORD *)(v64 + 52) = v109;
          *(_DWORD *)(v64 + 56) = v110;
          *(_DWORD *)(v64 + 60) = v111;
          v66 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          *(_QWORD *)&v93 = v65;
          glm::rotate<float>((int)&v96, v66, (int)&v112, (int)&v93);
          *(_DWORD *)v66 = v96;
          *(_DWORD *)(v66 + 4) = v97;
          *(_DWORD *)(v66 + 8) = v98;
          *(_DWORD *)(v66 + 12) = v99;
          *(_DWORD *)(v66 + 16) = v100;
          *(_DWORD *)(v66 + 20) = v101;
          *(_DWORD *)(v66 + 24) = v102;
          *(_DWORD *)(v66 + 28) = v103;
          *(_DWORD *)(v66 + 32) = v104;
          *(_DWORD *)(v66 + 36) = v105;
          *(_DWORD *)(v66 + 40) = v106;
          *(_DWORD *)(v66 + 44) = v107;
          *(_DWORD *)(v66 + 48) = v108;
          *(_DWORD *)(v66 + 52) = v109;
          *(_DWORD *)(v66 + 56) = v110;
          *(_DWORD *)(v66 + 60) = v111;
            VLDR            S0, =0.17812
            VMUL.F32        S1, S1, S0
            VLDR            S3, =-0.33437
            VMUL.F32        S8, S8, S3
            VMUL.F32        S10, S10, S3
            VMUL.F32        S12, S12, S3
            VMUL.F32        S6, S14, S3
            VADD.F32        S0, S6, S0
            VMOV.F32        S0, #0.625
          v69 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          v112 = 1117782016;
          glm::rotate<float>((int)&v96, v69, (int)&v112, (int)&v93);
          *(_DWORD *)v69 = v96;
          *(_DWORD *)(v69 + 4) = v97;
          *(_DWORD *)(v69 + 8) = v98;
          *(_DWORD *)(v69 + 12) = v99;
          *(_DWORD *)(v69 + 16) = v100;
          *(_DWORD *)(v69 + 20) = v101;
          *(_DWORD *)(v69 + 24) = v102;
          *(_DWORD *)(v69 + 28) = v103;
          *(_DWORD *)(v69 + 32) = v104;
          *(_DWORD *)(v69 + 36) = v105;
          *(_DWORD *)(v69 + 40) = v106;
          *(_DWORD *)(v69 + 44) = v107;
          *(_DWORD *)(v69 + 48) = v108;
          *(_DWORD *)(v69 + 52) = v109;
          *(_DWORD *)(v69 + 56) = v110;
          *(_DWORD *)(v69 + 60) = v111;
          v57 = MatrixStack::MatrixStackRef::operator->((int)&v88);
        else if ( v49 == Item::mFishingRod || v49 == Item::mCarrotOnAStick )
          v73 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          glm::rotate<float>((int)&v96, v73, (int)&v112, (int)&v93);
          *(_DWORD *)v73 = v96;
          *(_DWORD *)(v73 + 4) = v97;
          *(_DWORD *)(v73 + 8) = v98;
          *(_DWORD *)(v73 + 12) = v99;
          *(_DWORD *)(v73 + 16) = v100;
          *(_DWORD *)(v73 + 20) = v101;
          *(_DWORD *)(v73 + 24) = v102;
          *(_DWORD *)(v73 + 28) = v103;
          *(_DWORD *)(v73 + 32) = v104;
          *(_DWORD *)(v73 + 36) = v105;
          *(_DWORD *)(v73 + 40) = v106;
          *(_DWORD *)(v73 + 44) = v107;
          *(_DWORD *)(v73 + 48) = v108;
          *(_DWORD *)(v73 + 52) = v109;
          *(_DWORD *)(v73 + 56) = v110;
          *(_DWORD *)(v73 + 60) = v111;
          v74 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          *(_QWORD *)&v93 = 1065353216LL;
          v112 = -1049624576;
          glm::rotate<float>((int)&v96, v74, (int)&v112, (int)&v93);
          *(_DWORD *)v74 = v96;
          *(_DWORD *)(v74 + 4) = v97;
          *(_DWORD *)(v74 + 8) = v98;
          *(_DWORD *)(v74 + 12) = v99;
          *(_DWORD *)(v74 + 16) = v100;
          *(_DWORD *)(v74 + 20) = v101;
          *(_DWORD *)(v74 + 24) = v102;
          *(_DWORD *)(v74 + 28) = v103;
          *(_DWORD *)(v74 + 32) = v104;
          *(_DWORD *)(v74 + 36) = v105;
          *(_DWORD *)(v74 + 40) = v106;
          *(_DWORD *)(v74 + 44) = v107;
          *(_DWORD *)(v74 + 48) = v108;
          *(_DWORD *)(v74 + 52) = v109;
          *(_DWORD *)(v74 + 56) = v110;
          *(_DWORD *)(v74 + 60) = v111;
            VLDR            S0, =0.1
            VLDR            S6, [R0,#0xC]
            VLDR            S4, [R0,#8]
            VMUL.F32        S6, S6, S0
            VLDR            S3, =0.065
            VLDR            S10, [R0,#0x14]
            VLDR            S12, [R0,#0x18]
            VLDR            S14, [R0,#0x1C]
            VLDMIA          R0, {S1-S2}
            VMUL.F32        S14, S14, S3
            VLDR            S5, =-0.0625
            VLDR            S7, [R0,#0x20]
            VMUL.F32        S0, S4, S0
            VLDR            S4, [R0,#0x24]
            VMUL.F32        S3, S7, S5
            VLDR            S7, [R0,#0x28]
            VMUL.F32        S4, S4, S5
            VADD.F32        S6, S14, S6
            VLDR            S10, [R0,#0x2C]
            VADD.F32        S0, S12, S0
            VMUL.F32        S1, S7, S5
            VMUL.F32        S10, S10, S5
            VADD.F32        S2, S2, S4
            VADD.F32        S8, S8, S3
            VADD.F32        S0, S0, S1
            VADD.F32        S4, S6, S10
            VLDR            S8, [R0,#0x3C]
            VADD.F32        S0, S0, S12
            VADD.F32        S4, S4, S8
            VSTR            S0, [R0,#0x38]
            VSTR            S4, [R0,#0x3C]
          v78 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          glm::rotate<float>((int)&v96, v78, (int)&v112, (int)&v93);
          *(_DWORD *)v78 = v96;
          *(_DWORD *)(v78 + 4) = v97;
          *(_DWORD *)(v78 + 8) = v98;
          *(_DWORD *)(v78 + 12) = v99;
          *(_DWORD *)(v78 + 16) = v100;
          *(_DWORD *)(v78 + 20) = v101;
          *(_DWORD *)(v78 + 24) = v102;
          *(_DWORD *)(v78 + 28) = v103;
          *(_DWORD *)(v78 + 32) = v104;
          *(_DWORD *)(v78 + 36) = v105;
          *(_DWORD *)(v78 + 40) = v106;
          *(_DWORD *)(v78 + 44) = v107;
          *(_DWORD *)(v78 + 48) = v108;
          *(_DWORD *)(v78 + 52) = v109;
          *(_DWORD *)(v78 + 56) = v110;
          *(_DWORD *)(v78 + 60) = v111;
          if ( !v49 || (*(int (__fastcall **)(int))(*(_DWORD *)v49 + 88))(v49) != 1 )
              VMOV.F32        S2, #0.25
              VLDR            S8, [R0]
              VLDR            S10, [R0,#4]
              VMOV.F32        S9, #0.1875
              VLDR            S6, [R0,#0x20]
              VLDR            S1, [R0,#0x10]
              VLDR            S12, [R0,#8]
              VSUB.F32        S6, S1, S6
              VLDR            S0, [R0,#0x24]
              VLDR            S7, [R0,#0x14]
              VLDR            S4, [R0,#0x28]
              VLDR            S3, [R0,#0x18]
              VMUL.F32        S8, S8, S2
              VLDR            S14, [R0,#0xC]
              VSUB.F32        S0, S7, S0
              VLDR            S5, [R0,#0x1C]
              VSUB.F32        S4, S3, S4
              VLDR            S1, [R0,#0x2C]
              VMUL.F32        S2, S14, S2
              VLDR            S14, [R0,#0x34]
              VSUB.F32        S1, S5, S1
              VLDR            S3, [R0,#0x30]
              VADD.F32        S10, S14, S10
              VLDR            S14, [R0,#0x38]
              VADD.F32        S8, S3, S8
              VLDR            S3, [R0,#0x3C]
              VMUL.F32        S0, S0, S9
              VMUL.F32        S6, S6, S9
              VADD.F32        S12, S14, S12
              VMUL.F32        S4, S4, S9
              VMUL.F32        S14, S1, S9
              VADD.F32        S2, S3, S2
              VADD.F32        S0, S10, S0
              VADD.F32        S4, S12, S4
              VADD.F32        S2, S2, S14
              VSTR            S0, [R0,#0x34]
              VSTR            S4, [R0,#0x38]
              VMOV.F32        S0, #0.375
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
            v81 = MatrixStack::MatrixStackRef::operator->((int)&v88);
            v112 = 1114636288;
            glm::rotate<float>((int)&v96, v81, (int)&v112, (int)&v93);
            *(_DWORD *)v81 = v96;
            *(_DWORD *)(v81 + 4) = v97;
            *(_DWORD *)(v81 + 8) = v98;
            *(_DWORD *)(v81 + 12) = v99;
            *(_DWORD *)(v81 + 16) = v100;
            *(_DWORD *)(v81 + 20) = v101;
            *(_DWORD *)(v81 + 24) = v102;
            *(_DWORD *)(v81 + 28) = v103;
            *(_DWORD *)(v81 + 32) = v104;
            *(_DWORD *)(v81 + 36) = v105;
            *(_DWORD *)(v81 + 40) = v106;
            *(_DWORD *)(v81 + 44) = v107;
            *(_DWORD *)(v81 + 48) = v108;
            *(_DWORD *)(v81 + 52) = v109;
            *(_DWORD *)(v81 + 56) = v110;
            *(_DWORD *)(v81 + 60) = v111;
            v82 = MatrixStack::MatrixStackRef::operator->((int)&v88);
            v112 = -1028390912;
            glm::rotate<float>((int)&v96, v82, (int)&v112, (int)&v93);
            *(_DWORD *)v82 = v96;
            *(_DWORD *)(v82 + 4) = v97;
            *(_DWORD *)(v82 + 8) = v98;
            *(_DWORD *)(v82 + 12) = v99;
            *(_DWORD *)(v82 + 16) = v100;
            *(_DWORD *)(v82 + 20) = v101;
            *(_DWORD *)(v82 + 24) = v102;
            *(_DWORD *)(v82 + 28) = v103;
            *(_DWORD *)(v82 + 32) = v104;
            *(_DWORD *)(v82 + 36) = v105;
            *(_DWORD *)(v82 + 40) = v106;
            *(_DWORD *)(v82 + 44) = v107;
            *(_DWORD *)(v82 + 48) = v108;
            *(_DWORD *)(v82 + 52) = v109;
            *(_DWORD *)(v82 + 56) = v110;
            *(_DWORD *)(v82 + 60) = v111;
            v58 = 1101004800;
          v59 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          glm::rotate<float>((int)&v96, v59, (int)&v112, (int)&v93);
          *(_DWORD *)v59 = v96;
          *(_DWORD *)(v59 + 4) = v97;
          *(_DWORD *)(v59 + 8) = v98;
          *(_DWORD *)(v59 + 12) = v99;
          *(_DWORD *)(v59 + 16) = v100;
          *(_DWORD *)(v59 + 20) = v101;
          *(_DWORD *)(v59 + 24) = v102;
          *(_DWORD *)(v59 + 28) = v103;
          *(_DWORD *)(v59 + 32) = v104;
          *(_DWORD *)(v59 + 36) = v105;
          *(_DWORD *)(v59 + 40) = v106;
          *(_DWORD *)(v59 + 44) = v107;
          *(_DWORD *)(v59 + 48) = v108;
          *(_DWORD *)(v59 + 52) = v109;
          *(_DWORD *)(v59 + 56) = v110;
          *(_DWORD *)(v59 + 60) = v111;
            VLDR            S3, =0.265
          v63 = MatrixStack::MatrixStackRef::operator->((int)&v88);
          glm::rotate<float>((int)&v96, v63, (int)&v112, (int)&v93);
          *(_DWORD *)v63 = v96;
          *(_DWORD *)(v63 + 4) = v97;
          *(_DWORD *)(v63 + 8) = v98;
          *(_DWORD *)(v63 + 12) = v99;
          *(_DWORD *)(v63 + 16) = v100;
          *(_DWORD *)(v63 + 20) = v101;
          *(_DWORD *)(v63 + 24) = v102;
          *(_DWORD *)(v63 + 28) = v103;
          *(_DWORD *)(v63 + 32) = v104;
          *(_DWORD *)(v63 + 36) = v105;
          *(_DWORD *)(v63 + 40) = v106;
          *(_DWORD *)(v63 + 44) = v107;
          *(_DWORD *)(v63 + 48) = v108;
          *(_DWORD *)(v63 + 52) = v109;
          *(_DWORD *)(v63 + 56) = v110;
          *(_DWORD *)(v63 + 60) = v111;
        v58 = 1110704128;
        v93 = 0;
        v94 = 1065353216;
        v95 = 0;
LABEL_54:
        v112 = v58;
        glm::rotate<float>((int)&v96, v57, (int)&v112, (int)&v93);
        *(_DWORD *)v57 = v96;
        *(_DWORD *)(v57 + 4) = v97;
        *(_DWORD *)(v57 + 8) = v98;
        *(_DWORD *)(v57 + 12) = v99;
        *(_DWORD *)(v57 + 16) = v100;
        *(_DWORD *)(v57 + 20) = v101;
        *(_DWORD *)(v57 + 24) = v102;
        *(_DWORD *)(v57 + 28) = v103;
        *(_DWORD *)(v57 + 32) = v104;
        *(_DWORD *)(v57 + 36) = v105;
        *(_DWORD *)(v57 + 40) = v106;
        *(_DWORD *)(v57 + 44) = v107;
        *(_DWORD *)(v57 + 48) = v108;
        *(_DWORD *)(v57 + 52) = v109;
        *(_DWORD *)(v57 + 56) = v110;
        *(_DWORD *)(v57 + 60) = v111;
        goto LABEL_55;
  return result;
}


int __fastcall HumanoidMobRenderer::setupRotations(int a1, float a2, int a3, int a4, int a5, int a6)
{
  int result; // r0@1
  float v14; // r3@6
  float v15; // r1@6
  float v19; // r1@10
  int v24; // [sp+4h] [bp-9Ch]@0
  float v25; // [sp+Ch] [bp-94h]@6
  float v27; // [sp+18h] [bp-88h]@10
  int v28; // [sp+1Ch] [bp-84h]@6
  signed int v29; // [sp+20h] [bp-80h]@6
  int v30; // [sp+24h] [bp-7Ch]@6
  int v31; // [sp+28h] [bp-78h]@6
  int v32; // [sp+2Ch] [bp-74h]@6
  int v33; // [sp+30h] [bp-70h]@6
  int v34; // [sp+34h] [bp-6Ch]@6
  int v35; // [sp+38h] [bp-68h]@6
  int v36; // [sp+3Ch] [bp-64h]@6
  int v37; // [sp+40h] [bp-60h]@6
  int v38; // [sp+44h] [bp-5Ch]@6
  int v39; // [sp+48h] [bp-58h]@6
  int v40; // [sp+4Ch] [bp-54h]@6
  int v41; // [sp+50h] [bp-50h]@6
  int v42; // [sp+54h] [bp-4Ch]@6
  int v43; // [sp+58h] [bp-48h]@6
  int v44; // [sp+5Ch] [bp-44h]@6
  int v45; // [sp+60h] [bp-40h]@6
  int v46; // [sp+64h] [bp-3Ch]@6

  __asm { VLDR            S18, [SP,#0xA0+arg_4] }
  _R5 = (Mob *)LODWORD(a2);
  __asm { VSTR            S18, [SP,#0xA0+var_9C] }
  MobRenderer::setupRotations(a1, a2, a3, a4, a5, v24);
  result = Mob::isGliding(_R5);
  if ( result == 1 )
  {
    _R0 = Mob::getGlidingTicks(_R5);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =0.01
      VLDR            S16, =0.0
      VCVT.F32.S32    S0, S0
      VLDR            S6, =-90.0
      VMOV.F32        S4, S16
      VADD.F32        S0, S0, S18
      VMUL.F32        S0, S0, S0
      VMUL.F32        S0, S0, S2
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S2
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S4, S0 }
      VLDR            S8, [R5,#0x78]
      VSUB.F32        S6, S6, S8
      __asm { VMOVGT.F32      S4, S2 }
    v28 = 1065353216;
    __asm { VMUL.F32        S0, S4, S6 }
    v29 = 0;
    v30 = 0;
    __asm { VSTR            S0, [SP,#0xA0+var_94] }
    glm::rotate<float>((int)&v31, a5, (int)&v25, (int)&v28);
    __asm { VMOV            R2, S18 }
    *(_DWORD *)a5 = v31;
    *(_DWORD *)(a5 + 4) = v32;
    *(_DWORD *)(a5 + 8) = v33;
    *(_DWORD *)(a5 + 12) = v34;
    *(_DWORD *)(a5 + 16) = v35;
    *(_DWORD *)(a5 + 20) = v36;
    *(_DWORD *)(a5 + 24) = v37;
    *(_DWORD *)(a5 + 28) = v38;
    *(_DWORD *)(a5 + 32) = v39;
    *(_DWORD *)(a5 + 36) = v40;
    *(_DWORD *)(a5 + 40) = v41;
    *(_DWORD *)(a5 + 44) = v42;
    *(_DWORD *)(a5 + 48) = v43;
    *(_DWORD *)(a5 + 52) = v44;
    *(_DWORD *)(a5 + 56) = v45;
    *(_DWORD *)(a5 + 60) = v46;
    result = Entity::getViewVector((Entity *)&v25, *(float *)&_R5, _R2, v14);
      VLDR            S18, [SP,#0xA0+var_94]
      VLDR            S20, [SP,#0xA0+var_8C]
      VMUL.F32        S0, S18, S18
      VMUL.F32        S2, S20, S20
      VADD.F32        S0, S2, S0
      __asm
      {
        VLDR            S22, [R5,#0x6C]
        VLDR            S24, [R5,#0x74]
        VMUL.F32        S0, S22, S22
        VMUL.F32        S2, S24, S24
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VMUL.F32        S2, S24, S18
          VLDR            S6, =0.0625
          VMUL.F32        S4, S22, S20
          VMOV            R0, S0
          VSUB.F32        S2, S4, S2
          VABS.F32        S4, S2
          VCMPE.F32       S4, S6
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S2, S16 }
        __asm { VMOV            R5, S2 }
        _R6 = mce::Math::sqrt(_R0, v15);
        _R0 = mce::Math::signum(_R5, v19);
          VMUL.F32        S0, S22, S18
          VMUL.F32        S2, S24, S20
          VMOV            S16, R0
          VADD.F32        S0, S2, S0
          VMOV            S2, R6
          VDIV.F32        S0, S0, S2
          VMOV            R1, S0
        _R0 = acosf(_R1);
          VMOV            S0, R0
          VMUL.F32        S0, S0, S16
        _R0 = &mce::Math::RADDEG;
        __asm { VLDR            S2, [R0] }
        v28 = 0;
        __asm { VMUL.F32        S0, S0, S2 }
        v29 = 1065353216;
        v30 = 0;
        __asm { VSTR            S0, [SP,#0xA0+var_88] }
        glm::rotate<float>((int)&v31, a5, (int)&v27, (int)&v28);
        *(_DWORD *)a5 = v31;
        *(_DWORD *)(a5 + 4) = v32;
        *(_DWORD *)(a5 + 8) = v33;
        *(_DWORD *)(a5 + 12) = v34;
        *(_DWORD *)(a5 + 16) = v35;
        *(_DWORD *)(a5 + 20) = v36;
        *(_DWORD *)(a5 + 24) = v37;
        *(_DWORD *)(a5 + 28) = v38;
        *(_DWORD *)(a5 + 32) = v39;
        *(_DWORD *)(a5 + 36) = v40;
        *(_DWORD *)(a5 + 40) = v41;
        *(_DWORD *)(a5 + 44) = v42;
        *(_DWORD *)(a5 + 48) = v43;
        *(_DWORD *)(a5 + 52) = v44;
        *(_DWORD *)(a5 + 56) = v45;
        result = v46;
        *(_DWORD *)(a5 + 60) = v46;
  }
  return result;
}


int __fastcall HumanoidMobRenderer::getModel(HumanoidMobRenderer *this, Mob *a2)
{
  HumanoidMobRenderer *v2; // r4@1
  int result; // r0@2

  v2 = this;
  if ( Entity::isBaby(a2) == 1 )
  {
    result = *((_DWORD *)v2 + 161);
    if ( !result )
      result = *((_DWORD *)v2 + 35);
  }
  else
    result = *((_DWORD *)v2 + 35);
  return result;
}


void __fastcall HumanoidMobRenderer::~HumanoidMobRenderer(HumanoidMobRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = HumanoidMobRenderer::~HumanoidMobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall HumanoidMobRenderer::render(int a1, int a2, Entity **a3)
{
  Entity **v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r3@2

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( Entity::isBaby(*a3) == 1 )
  {
    v6 = *(_DWORD *)(v4 + 644);
    if ( !v6 )
      v6 = *(_DWORD *)(v4 + 140);
  }
  else
    v6 = *(_DWORD *)(v4 + 140);
  return j_j_j__ZN19HumanoidMobRenderer14renderInternalER23BaseEntityRenderContextR16EntityRenderDataR13HumanoidModel(
           v4,
           v5,
           v3,
           v6);
}


void __fastcall HumanoidMobRenderer::initTextures(HumanoidMobRenderer *this)
{
  HumanoidMobRenderer::initTextures(this);
}


BaseEntityRenderer *__fastcall HumanoidMobRenderer::~HumanoidMobRenderer(HumanoidMobRenderer *this)
{
  HumanoidMobRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2
  int v5; // r0@6
  int v6; // r0@8
  int v7; // r0@10
  int v8; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_26DB7D4;
  v3 = (char *)(*(_QWORD *)((char *)this + 660) >> 32);
  v2 = (char *)*(_QWORD *)((char *)this + 660);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 165);
  }
  if ( v2 )
    operator delete(v2);
  v5 = *((_DWORD *)v1 + 164);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 164) = 0;
  v6 = *((_DWORD *)v1 + 163);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 163) = 0;
  v7 = *((_DWORD *)v1 + 162);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 162) = 0;
  v8 = *((_DWORD *)v1 + 161);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall HumanoidMobRenderer::~HumanoidMobRenderer(HumanoidMobRenderer *this)
{
  HumanoidMobRenderer::~HumanoidMobRenderer(this);
}
