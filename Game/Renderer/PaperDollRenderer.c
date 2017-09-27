

MinecraftUICustomRenderer *__fastcall PaperDollRenderer::PaperDollRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E0638;
  *((_DWORD *)v1 + 2) = 0;
  *((_BYTE *)v1 + 12) = 1;
  *((_BYTE *)v1 + 13) = 0;
  *((_BYTE *)v1 + 14) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  _aeabi_memclr8((char *)v1 + 32, 36);
  return v1;
}


char *__fastcall PaperDollRenderer::render(PaperDollRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v7; // r7@1
  ClientInstance *v8; // r6@1
  int v9; // r9@1
  GuiData *v10; // r8@1
  int v11; // r0@1
  int v12; // r4@2
  Json::Value *v13; // r4@2
  Json::Value *v14; // r4@4
  char *v15; // r1@5
  signed int v16; // r11@6
  char *v17; // r0@8
  char *v18; // r0@14
  char *result; // r0@15
  SkinRepositoryClientInterface *v24; // r5@17
  Json::Value *v25; // r4@17
  Json::Value *v26; // r4@19
  int v27; // r0@21
  unsigned int v28; // r0@24
  PaperDollRenderer *v29; // r4@25
  Skin *v30; // r0@26
  Skin *v31; // r6@26
  char *v32; // r0@27
  int v33; // r1@27
  int v34; // r2@27
  int v35; // r3@27
  int v36; // r0@27
  int v37; // r0@27
  __int64 v38; // r2@28
  ClientSkinInfoData *v39; // r5@30
  int v40; // r0@30
  mce::TextureGroup *v41; // r0@32
  mce::TextureGroup *v42; // r0@32
  int *v43; // r4@32
  void **v44; // r1@32
  Json::Value *v45; // r4@35
  Json::Value *v46; // r4@37
  int v47; // r1@37
  unsigned int v48; // r6@38
  unsigned __int64 v49; // kr00_8@38
  unsigned int *v50; // r2@39
  signed int v51; // r1@41
  unsigned int *v52; // r2@43
  signed int v53; // r1@45
  int v54; // r4@47
  Json::Value *v55; // r4@47
  Json::Value *v56; // r4@49
  char *v57; // r0@52
  char *v58; // r0@53
  int *v59; // r0@54
  signed int v60; // r6@56
  Json::Value *v61; // r4@61
  Json::Value *v62; // r4@63
  __int64 v63; // r2@67
  int v64; // r0@67
  int v65; // r4@67
  int v66; // r0@67
  int v67; // r1@67
  SkinPack *v68; // r0@67
  char *v69; // r0@68
  __int64 v70; // kr10_8@69
  Skin *v71; // r5@70
  char *v72; // r0@70
  int v73; // r1@70
  int v74; // r2@70
  int v75; // r3@70
  int v76; // r0@70
  mce::TextureGroup *v77; // r0@70
  char *v78; // r0@70
  char *v79; // r4@70
  char *v80; // r6@70
  __int64 v81; // r0@70
  int v82; // r5@70
  __int64 v83; // kr18_8@72
  int v84; // r2@72
  ClientSkinInfoData *v85; // r5@75
  int v86; // r0@75
  void (__fastcall *v87)(ClientSkinInfoData *, char *, char **, int *); // ST14_4@77
  char *v88; // r6@77
  mce::TextureGroup *v89; // r0@77
  int *v90; // r4@77
  unsigned int *v91; // r2@89
  signed int v92; // r1@91
  Minecraft *v93; // r0@96
  Level *v94; // r0@96
  Player *v95; // r0@96
  int v96; // r2@97
  unsigned __int64 v97; // kr20_8@97
  SkinInfoData *v98; // r0@97
  unsigned int *v99; // r0@97
  Skin *v100; // r0@97
  Skin *v101; // r6@97
  char *v102; // r0@98
  int v103; // r1@98
  int v104; // r2@98
  int v105; // r3@98
  int v106; // r12@98
  int v107; // r0@98
  int v108; // r0@98
  __int64 v109; // r2@99
  int v110; // r0@101
  mce::TextureGroup *v111; // r0@103
  mce::TextureGroup *v112; // r0@103
  unsigned int *v113; // r2@104
  signed int v114; // r1@106
  unsigned int *v115; // r2@108
  signed int v116; // r1@110
  unsigned int *v117; // r2@112
  signed int v118; // r1@114
  __int64 v119; // r1@132
  Json::Value *v120; // r4@134
  signed int v121; // r0@135
  Json::Value *v122; // r4@137
  int v132; // r0@146
  Minecraft *v133; // r0@149
  int v134; // r1@149
  ClientInputHandler *v140; // r0@150
  int v141; // r0@150
  Json::Value *v144; // r4@155
  Json::Value *v145; // r4@157
  int v147; // r5@162
  const char *v148; // r4@162
  int v149; // r8@163
  Json::Value *v150; // r4@165
  int v151; // r5@170
  const char *v152; // r4@170
  float v153; // r1@170
  Json::Value *v154; // r4@172
  int v156; // r4@176
  int v161; // r6@180
  int v166; // r0@180
  int v167; // r0@180
  int v168; // r6@180
  int v169; // r0@181
  int v170; // r0@188
  void *v171; // r0@190
  unsigned int *v172; // r2@193
  signed int v173; // r1@195
  const void **v174; // [sp+4h] [bp-154h]@0
  float v175; // [sp+8h] [bp-150h]@0
  char *v176; // [sp+10h] [bp-148h]@32
  char *v177; // [sp+14h] [bp-144h]@32
  unsigned int v178; // [sp+14h] [bp-144h]@38
  Skin *v179; // [sp+18h] [bp-140h]@17
  Skin *v180; // [sp+18h] [bp-140h]@32
  Skin *v181; // [sp+18h] [bp-140h]@70
  int v182; // [sp+1Ch] [bp-13Ch]@23
  ClientInstance *v183; // [sp+20h] [bp-138h]@25
  ClientInstance *v184; // [sp+20h] [bp-138h]@141
  int v185; // [sp+24h] [bp-134h]@184
  int v186; // [sp+28h] [bp-130h]@180
  int v187; // [sp+2Ch] [bp-12Ch]@180
  int v188; // [sp+30h] [bp-128h]@180
  int v189; // [sp+34h] [bp-124h]@180
  int v190; // [sp+38h] [bp-120h]@180
  int v191; // [sp+3Ch] [bp-11Ch]@180
  int v192; // [sp+40h] [bp-118h]@180
  int v193; // [sp+44h] [bp-114h]@180
  int v194; // [sp+48h] [bp-110h]@180
  int v195; // [sp+4Ch] [bp-10Ch]@180
  int v196; // [sp+50h] [bp-108h]@180
  int v197; // [sp+54h] [bp-104h]@180
  int v198; // [sp+58h] [bp-100h]@180
  int v199; // [sp+5Ch] [bp-FCh]@180
  int v200; // [sp+60h] [bp-F8h]@180
  int v201; // [sp+64h] [bp-F4h]@180
  float v202; // [sp+8Ch] [bp-CCh]@179
  float v203; // [sp+90h] [bp-C8h]@179
  int v204; // [sp+94h] [bp-C4h]@176
  int v205; // [sp+98h] [bp-C0h]@176
  const char *v206; // [sp+9Ch] [bp-BCh]@176
  char v207; // [sp+A0h] [bp-B8h]@170
  const char *v208; // [sp+A4h] [bp-B4h]@170
  char v209; // [sp+A8h] [bp-B0h]@162
  const char *v210; // [sp+ACh] [bp-ACh]@162
  char v211; // [sp+B0h] [bp-A8h]@144
  char *v212; // [sp+B8h] [bp-A0h]@70
  char *v213; // [sp+BCh] [bp-9Ch]@70
  char *v214; // [sp+C0h] [bp-98h]@70
  char v215; // [sp+C7h] [bp-91h]@67
  int v216; // [sp+C8h] [bp-90h]@54
  char *v217; // [sp+D0h] [bp-88h]@47
  char *v218; // [sp+D4h] [bp-84h]@50
  __int64 v219; // [sp+D8h] [bp-80h]@52
  unsigned __int64 v220; // [sp+E0h] [bp-78h]@56
  char *v221; // [sp+ECh] [bp-6Ch]@2
  char *v222; // [sp+F0h] [bp-68h]@5
  char v223; // [sp+F4h] [bp-64h]@5
  char v224; // [sp+F8h] [bp-60h]@50
  float v225; // [sp+FCh] [bp-5Ch]@180

  _R10 = this;
  v7 = a4;
  v8 = a3;
  v9 = MinecraftUIRenderContext::getScreenContext(a2);
  v10 = *(GuiData **)(v9 + 24);
  v11 = UIControl::getPropertyBag(v7);
  if ( PropertyBag::has((Json::Value *)(v11 + 8), 11, "entity_type") == 1 )
  {
    v12 = UIControl::getPropertyBag(v7);
    sub_119C854((int *)&v221, (int *)&Util::EMPTY_STRING);
    v13 = (Json::Value *)(v12 + 8);
    if ( Json::Value::isNull(v13)
      || Json::Value::isObject(v13) != 1
      || (v14 = (Json::Value *)Json::Value::operator[]((int)v13, "entity_type"), Json::Value::isString(v14) != 1) )
    {
      v222 = v221;
      v15 = (char *)&unk_28898CC;
      v221 = (char *)&unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&v222, (int)&v223, (int)v14);
      v15 = v221;
    v17 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      }
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    if ( sub_119C9E8((const void **)&v222, "player") )
      v16 = 30;
      if ( !sub_119C9E8((const void **)&v222, "npc") )
        v16 = 63;
    v18 = v222 - 12;
    if ( (int *)(v222 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v222 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
  }
  else
    v16 = 30;
  result = UIControl::getSize(v7);
  __asm
    VMOV.F32        S16, #1.0
    VLDR            S0, [R0]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    result = UIControl::getSize(v7);
    __asm
      VLDR            S0, [R0,#4]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      v179 = (Skin *)ClientInstance::getSkinRepository(v8);
      v24 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(v8);
      v25 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
      if ( Json::Value::isNull(v25)
        || Json::Value::isObject(v25) != 1
        || (v26 = (Json::Value *)Json::Value::operator[]((int)v25, "#skin_idx"), !Json::Value::isInt(v26))
        && Json::Value::isUInt(v26) != 1 )
        v27 = -1;
        v27 = Json::Value::asInt(v26, 0);
      v182 = v27;
      if ( v16 != 30 )
        goto LABEL_134;
      v28 = *((_WORD *)_R10 + 6);
      if ( (_BYTE)v28 )
        v29 = (PaperDollRenderer *)((char *)_R10 + 48);
        v183 = v8;
        if ( !SkinRepositoryClientInterface::isValidSelectedSkin(
                v24,
                (PaperDollRenderer *)((char *)_R10 + 48),
                *((_DWORD *)_R10 + 16)) )
        {
          v30 = SkinRepositoryClientInterface::getSelectedSkin(v24);
          v31 = v30;
          if ( v30 )
          {
            v32 = Skin::getSkinPackId(v30);
            v33 = *(_DWORD *)v32;
            v34 = *((_DWORD *)v32 + 1);
            v35 = *((_DWORD *)v32 + 2);
            v36 = *((_DWORD *)v32 + 3);
            *(_DWORD *)v29 = v33;
            *((_DWORD *)_R10 + 13) = v34;
            *((_DWORD *)_R10 + 14) = v35;
            *((_DWORD *)_R10 + 15) = v36;
            v37 = Skin::getSkinIndex(v31);
            *((_DWORD *)_R10 + 16) = v37;
            if ( mce::UUID::EMPTY != *(_QWORD *)v29
              || (v38 = *((_QWORD *)_R10 + 7), HIDWORD(v38) ^= unk_287E934, v38 != HIDWORD(qword_287E92C)) )
            {
              if ( v37 != -1 )
              {
                v39 = (ClientSkinInfoData *)operator new(0x24u);
                ClientSkinInfoData::ClientSkinInfoData(v39);
                v40 = *((_DWORD *)_R10 + 6);
                *((_DWORD *)_R10 + 6) = v39;
                if ( v40 )
                {
                  (*(void (**)(void))(*(_DWORD *)v40 + 4))();
                  v39 = (ClientSkinInfoData *)*((_DWORD *)_R10 + 6);
                }
                v180 = *(Skin **)(*(_DWORD *)v39 + 8);
                v177 = Skin::getSerializable(v31);
                v41 = (mce::TextureGroup *)ClientInstance::getTextures(v183);
                v176 = Skin::syncTextureData(v31, v41);
                v42 = (mce::TextureGroup *)ClientInstance::getTextures(v183);
                v43 = Skin::syncCapeTextureData(v31, v42);
                Skin::getGeometryName(v31);
                v44 = &Util::EMPTY_STRING;
LABEL_33:
                v174 = (const void **)*v44;
                ((void (__fastcall *)(ClientSkinInfoData *, char *, char *, int *))v180)(v39, v177, v176, v43);
                goto LABEL_131;
              }
            }
          }
        }
        goto LABEL_131;
      if ( v28 >= 0x100 )
        v54 = UIControl::getPropertyBag(v7);
        sub_119C884((void **)&v217, (const char *)&unk_257BC67);
        v55 = (Json::Value *)(v54 + 8);
        if ( Json::Value::isNull(v55)
          || Json::Value::isObject(v55) != 1
          || (v56 = (Json::Value *)Json::Value::operator[]((int)v55, "#player_uuid"), Json::Value::isString(v56) != 1) )
          v218 = v217;
          v217 = (char *)&unk_28898CC;
        else
          jsonValConversion<std::string>::as((int *)&v218, (int)&v224, (int)v56);
        mce::UUID::fromString((int)&v219, (int *)&v218);
        v57 = v218 - 12;
        if ( (int *)(v218 - 12) != &dword_28898C0 )
          v113 = (unsigned int *)(v218 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v114 = __ldrex(v113);
            while ( __strex(v114 - 1, v113) );
          else
            v114 = (*v113)--;
          if ( v114 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v57);
        v58 = v217 - 12;
        if ( (int *)(v217 - 12) != &dword_28898C0 )
          v115 = (unsigned int *)(v217 - 4);
              v116 = __ldrex(v115);
            while ( __strex(v116 - 1, v115) );
            v116 = (*v115)--;
          if ( v116 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v58);
        mce::UUID::asString((mce::UUID *)&v216);
        v59 = (int *)(v216 - 12);
        if ( *(_DWORD *)(v216 - 12) )
          if ( *((_QWORD *)_R10 + 4) == v219 )
            v60 = v220 ^ *((_DWORD *)_R10 + 10) | ((v220 ^ *((_QWORD *)_R10 + 5)) >> 32);
            if ( v220 != *((_QWORD *)_R10 + 5) )
              v60 = 1;
            v60 = 1;
          if ( v59 != &dword_28898C0 )
            v117 = (unsigned int *)(v216 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v118 = __ldrex(v117);
              while ( __strex(v118 - 1, v117) );
            else
              v118 = (*v117)--;
            if ( v118 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v59);
          if ( v60 == 1 )
            v93 = (Minecraft *)ClientInstance::getServerData(v183);
            v94 = (Level *)Minecraft::getLevel(v93);
            v95 = (Player *)Level::getPlayer(v94, (const mce::UUID *)&v219);
            if ( v95 )
              v96 = HIDWORD(v219);
              v97 = v220;
              *((_DWORD *)_R10 + 8) = v219;
              *((_DWORD *)_R10 + 9) = v96;
              *((_QWORD *)_R10 + 5) = v97;
              v98 = (SkinInfoData *)Player::getSkin(v95);
              v99 = (unsigned int *)SkinInfoData::getSkinId(v98);
              v100 = SkinRepositoryClientInterface::getSkinBySerializableName((int)v24, v99);
              v101 = v100;
              if ( v100 )
                v102 = Skin::getSkinPackId(v100);
                v103 = *(_DWORD *)v102;
                v104 = *((_DWORD *)v102 + 1);
                v105 = *((_DWORD *)v102 + 2);
                v106 = (int)_R10 + 48;
                v107 = *((_DWORD *)v102 + 3);
                *(_DWORD *)v106 = v103;
                *(_DWORD *)(v106 + 4) = v104;
                *(_DWORD *)(v106 + 8) = v105;
                *((_DWORD *)_R10 + 15) = v107;
                v108 = Skin::getSkinIndex(v101);
                *((_DWORD *)_R10 + 16) = v108;
                if ( mce::UUID::EMPTY != *((_QWORD *)_R10 + 6)
                  || (v109 = *((_QWORD *)_R10 + 7), HIDWORD(v109) ^= unk_287E934, v109 != HIDWORD(qword_287E92C)) )
                  if ( v108 != -1 )
                  {
                    v39 = (ClientSkinInfoData *)operator new(0x24u);
                    ClientSkinInfoData::ClientSkinInfoData(v39);
                    v110 = *((_DWORD *)_R10 + 6);
                    *((_DWORD *)_R10 + 6) = v39;
                    if ( v110 )
                    {
                      (*(void (**)(void))(*(_DWORD *)v110 + 4))();
                      v39 = (ClientSkinInfoData *)*((_DWORD *)_R10 + 6);
                    }
                    v180 = *(Skin **)(*(_DWORD *)v39 + 8);
                    v177 = Skin::getSerializable(v101);
                    v111 = (mce::TextureGroup *)ClientInstance::getTextures(v183);
                    v176 = Skin::syncTextureData(v101, v111);
                    v112 = (mce::TextureGroup *)ClientInstance::getTextures(v183);
                    v43 = Skin::syncCapeTextureData(v101, v112);
                    Skin::getGeometryName(v101);
                    v44 = &Util::EMPTY_STRING;
                    goto LABEL_33;
                  }
        else if ( v59 != &dword_28898C0 )
          v91 = (unsigned int *)(v216 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v59);
LABEL_131:
        v8 = v183;
        if ( mce::UUID::EMPTY == __PAIR__(
                                   (unsigned int)(*((_QWORD *)_R10 + 6) >> 32) ^ (unsigned int)qword_287E92C,
                                   (unsigned int)*((_QWORD *)_R10 + 6)) )
          v119 = *((_QWORD *)_R10 + 7);
          HIDWORD(v119) ^= unk_287E934;
          result = (char *)(HIDWORD(qword_287E92C) ^ v119 | HIDWORD(v119));
          if ( *(__int64 *)((char *)&qword_287E92C + 4) == __PAIR__(HIDWORD(v119), (unsigned int)v119) )
            return result;
        result = (char *)*((_DWORD *)_R10 + 6);
        if ( !result )
          return result;
LABEL_134:
        v120 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
        if ( Json::Value::isNull(v120) )
          v121 = 0;
        else if ( Json::Value::isObject(v120) == 1 )
          v122 = (Json::Value *)Json::Value::operator[]((int)v120, "#skin_rotation");
          if ( Json::Value::isBool(v122) == 1 )
            v121 = Json::Value::asBool(v122, 0);
            v121 = 0;
        v184 = v8;
        if ( (*((_DWORD *)_R10 + 2) & 0xFFFFFFFE) != 2 )
          *((_DWORD *)_R10 + 2) = v121;
          if ( !v121 )
            *((_DWORD *)_R10 + 4) = 0;
        MatrixStack::pushIdentity((MatrixStack *)&v211, *(_DWORD *)(v9 + 16) + 16);
        _R0 = UIControl::getSize(v7);
        __asm { VLDR            S16, [R0] }
        __asm
          VLDR            S2, =0.05
          VLDR            S0, =0.025641
          VLDR            S4, [R0,#4]
          VMUL.F32        S16, S16, S2
          VMUL.F32        S0, S4, S0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S16, S0 }
        _R0 = UIControl::getPosition(v7);
          VLDR            S20, [R0]
          VLDR            S18, [R0,#4]
        __asm { VLDR            S22, [R0] }
        __asm { VLDR            S26, [R0,#4] }
        _R4 = GuiData::getInvGuiScale(v10);
        _R6 = MatrixStack::MatrixStackRef::operator->((int)&v211);
        _R0 = UIControl::getLayer(v7);
          VMOV.F32        S24, #0.5
          VLDR            S14, =-500.0
          VMUL.F32        S0, S22, S24
          VMUL.F32        S2, S26, S24
          VADD.F32        S22, S0, S20
          VMOV            S0, R4
          VMUL.F32        S0, S0, S16
          VSUB.F32        S0, S2, S0
          VADD.F32        S26, S0, S18
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VLDR            S2, [R6]
          VLDR            S10, [R6,#0x10]
          VLDR            S4, [R6,#4]
          VMUL.F32        S2, S2, S22
          VLDR            S6, [R6,#8]
          VLDR            S12, [R6,#0x14]
          VMUL.F32        S10, S10, S26
          VLDR            S1, [R6,#0x18]
          VMUL.F32        S4, S4, S22
          VLDR            S8, [R6,#0xC]
          VMUL.F32        S12, S12, S26
          VADD.F32        S0, S0, S14
          VLDR            S3, [R6,#0x24]
          VMUL.F32        S14, S1, S26
          VLDR            S1, [R6,#0x1C]
          VMUL.F32        S6, S6, S22
          VMUL.F32        S8, S8, S22
          VMUL.F32        S1, S1, S26
          VADD.F32        S2, S10, S2
          VLDR            S10, [R6,#0x20]
          VADD.F32        S4, S12, S4
          VMUL.F32        S12, S3, S0
          VLDR            S3, [R6,#0x28]
          VMUL.F32        S10, S10, S0
          VADD.F32        S6, S14, S6
          VLDR            S14, [R6,#0x2C]
          VMUL.F32        S3, S3, S0
          VADD.F32        S8, S1, S8
          VMUL.F32        S0, S14, S0
          VADD.F32        S4, S4, S12
          VLDR            S12, [R6,#0x38]
          VADD.F32        S2, S2, S10
          VLDR            S10, [R6,#0x34]
          VADD.F32        S6, S6, S3
          VADD.F32        S0, S8, S0
          VLDR            S8, [R6,#0x30]
          VADD.F32        S4, S4, S10
          VADD.F32        S2, S2, S8
          VLDR            S8, [R6,#0x3C]
          VADD.F32        S6, S6, S12
          VADD.F32        S0, S0, S8
          VSTR            S2, [R6,#0x30]
          VSTR            S4, [R6,#0x34]
          VSTR            S6, [R6,#0x38]
          VSTR            S0, [R6,#0x3C]
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v211);
          VLDR            S0, [R0]
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
          VNMUL.F32       S0, S16, S0
          VSTR            S0, [R0,#0x20]
          VLDR            S0, [R0,#0x24]
          VSTR            S0, [R0,#0x24]
          VLDR            S0, [R0,#0x28]
          VSTR            S0, [R0,#0x28]
          VLDR            S0, [R0,#0x2C]
          VLDR            S16, =0.0
          VSTR            S0, [R0,#0x2C]
        v132 = *((_DWORD *)_R10 + 2);
        if ( v132 == 3 )
          v144 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
          if ( !Json::Value::isNull(v144) && Json::Value::isObject(v144) == 1 )
            v145 = (Json::Value *)Json::Value::operator[]((int)v144, "#custom_rot_y");
            if ( Json::Value::isNumeric(v145) == 1 )
              _R0 = Json::Value::asFloat(v145, 0.0);
              __asm { VMOV            S22, R0 }
              goto LABEL_160;
LABEL_159:
          __asm { VMOV.F32        S22, S16 }
          goto LABEL_160;
        if ( v132 != 2 )
          if ( v132 == 1 )
            v133 = (Minecraft *)ClientInstance::getServerData(v184);
            _R0 = Minecraft::getLastTimestep(v133, v134);
            __asm
              VMOV            D0, R0, R1
              VLDR            S2, [R10,#0x10]
              VMOV.F32        S4, #30.0
              VCVT.F32.F64    S0, D0
              VADD.F32        S0, S2, S0
              VMUL.F32        S22, S0, S4
              VSTR            S0, [R10,#0x10]
LABEL_160:
            __asm { VMOV.F32        S18, S16 }
LABEL_180:
            v161 = MatrixStack::MatrixStackRef::operator->((int)&v211);
            __asm { VCVTR.S32.F32   S0, S22 }
            _R1 = -1240768329;
              VMOV            R0, S0
              SMMLA.W         R1, R1, R0, R0
            _R0 = _R0 - 360 * (((signed int)_R1 >> 8) + (_R1 >> 31));
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VSTR            S0, [SP,#0x158+var_5C]
            glm::rotate<float>((int)&v186, v161, (int)&v225, (int)&Vec3::UNIT_Y);
            *(_DWORD *)v161 = v186;
            *(_DWORD *)(v161 + 4) = v187;
            *(_DWORD *)(v161 + 8) = v188;
            *(_DWORD *)(v161 + 12) = v189;
            *(_DWORD *)(v161 + 16) = v190;
            *(_DWORD *)(v161 + 20) = v191;
            *(_DWORD *)(v161 + 24) = v192;
            *(_DWORD *)(v161 + 28) = v193;
            *(_DWORD *)(v161 + 32) = v194;
            *(_DWORD *)(v161 + 36) = v195;
            *(_DWORD *)(v161 + 40) = v196;
            *(_DWORD *)(v161 + 44) = v197;
            *(_DWORD *)(v161 + 48) = v198;
            *(_DWORD *)(v161 + 52) = v199;
            *(_DWORD *)(v161 + 56) = v200;
            *(_DWORD *)(v161 + 60) = v201;
            v166 = ClientInstance::getMinecraftGame(v184);
            BaseEntityRenderContext::BaseEntityRenderContext((int)&v186, v9, v184, v166);
            v167 = BaseEntityRenderContext::getEntityRenderDispatcher((BaseEntityRenderContext *)&v186);
            v168 = v167;
            if ( v16 == 30 )
              v169 = EntityRenderDispatcher::getRenderer(v167, 30);
              if ( v169 )
                __asm
                  VSTR            S16, [SP,#0x158+var_154]
                  VSTR            S18, [SP,#0x158+var_150]
                PlayerRenderer::renderGui(v169, v9, *((SkinInfoData **)_R10 + 6), 0, 0, *(float *)&v174, v175);
            else if ( v16 == 63 )
              sub_119C854(&v185, (int *)&Util::EMPTY_STRING);
              if ( v182 < 0 || v182 >= (dword_2801854 - Npc::Skins) >> 3 )
                EntityInteraction::setInteractText(&v185, (int *)Npc::Skins);
              else
                EntityInteraction::setInteractText(&v185, (int *)(Npc::Skins + 8 * v182));
              v170 = EntityRenderDispatcher::getRenderer(v168, 63);
              if ( v170 )
                NpcRenderer::renderGui(v170, v9, (const void **)&v185, 0);
              v171 = (void *)(v185 - 12);
              if ( (int *)(v185 - 12) != &dword_28898C0 )
                v172 = (unsigned int *)(v185 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v173 = __ldrex(v172);
                  while ( __strex(v173 - 1, v172) );
                else
                  v173 = (*v172)--;
                if ( v173 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v171);
            BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v186);
            return (char *)MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v211);
          goto LABEL_159;
        _R4 = Mouse::getX((Mouse *)2);
        _R6 = (Mouse *)GuiData::getInvGuiScale(v10);
          VCVT.F32.S32    S16, S0
        _R5 = Mouse::getY(_R6);
          VMOV            S0, R5
          VCVT.F32.S32    S18, S0
        v140 = (ClientInputHandler *)ClientInstance::getInput(v184);
        ClientInputHandler::getCurrentInputMode(v140);
        v141 = ClientInstance::isARVRClient(v184);
          VMOV            S0, R6
          VMOV            S2, R4
          VMUL.F32        S2, S2, S18
          VMOV.F32        S20, S16
          VMOV.F32        S18, S16
          VSUB.F32        S0, S22, S0
          VSUB.F32        S2, S26, S2
        if ( _ZF )
          __asm
            VMOVEQ.F32      S20, S2
            VMOVEQ.F32      S18, S0
        if ( v141 == 1 )
          if ( *(_BYTE *)(ClientInstance::getGameRenderer(v184) + 812) )
            _R0 = ClientInstance::getGameRenderer(v184);
              VLDR            S18, [R0,#0x180]
              VLDR            S20, [R0,#0x184]
            _R0 = GuiData::getScreenSizeData(v10);
              VMUL.F32        S0, S20, S24
              VLDR            S4, [R0,#0x10]
              VMUL.F32        S2, S18, S24
              VLDR            S6, [R0,#0x14]
              VADD.F32        S0, S0, S24
              VADD.F32        S2, S2, S24
              VMUL.F32        S0, S6, S0
              VMUL.F32        S2, S4, S2
              VSUB.F32        S20, S26, S0
              VSUB.F32        S18, S22, S2
              VLDR            S20, =0.0
              VMOV.F32        S18, S20
        v147 = UIControl::getPropertyBag(v7);
        gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v209, (int)"#gesture_delta_source");
        v148 = v210;
        if ( Json::Value::isNull((Json::Value *)(v147 + 8)) )
          v149 = 0;
        else if ( Json::Value::isObject((Json::Value *)(v147 + 8)) == 1 )
          v150 = (Json::Value *)Json::Value::operator[](v147 + 8, v148);
          if ( Json::Value::isInt(v150) || Json::Value::isUInt(v150) == 1 )
            v149 = Json::Value::asInt(v150, 0);
            v149 = 0;
        v151 = UIControl::getPropertyBag(v7);
        gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v207, (int)"#gesture_mouse_delta_x");
        v152 = v208;
        if ( !Json::Value::isNull((Json::Value *)(v151 + 8)) && Json::Value::isObject((Json::Value *)(v151 + 8)) == 1 )
          v154 = (Json::Value *)Json::Value::operator[](v151 + 8, v152);
          if ( Json::Value::isNumeric(v154) == 1 )
            _R0 = Json::Value::asFloat(v154, 0.0);
            __asm { VMOV            S16, R0 }
        __asm { VLDR            S22, [R10,#0x14] }
        if ( v149 == 14 )
            VMOV.F32        S0, #-7.0
            VMUL.F32        S0, S16, S0
            VADD.F32        S0, S22, S0
          if ( v149 != 3 )
LABEL_179:
              VLDR            S16, =0.025
              VMUL.F32        S0, S20, S16
            v203 = mce::Math::atan(_R0, v153);
            _R0 = mce::Radian::asFloat((mce::Radian *)&v203);
              VMUL.F32        S0, S18, S16
              VLDR            S16, [R0]
              VMOV            R1, S0
            v202 = mce::Math::atan(_R1, *(float *)&_R1);
            _R0 = mce::Radian::asFloat((mce::Radian *)&v202);
              VMOV.F32        S0, #-20.0
              VLDR            S2, [R0]
              VMUL.F32        S18, S16, S0
              VMOV.F32        S0, #20.0
              VMUL.F32        S16, S2, S0
            goto LABEL_180;
          v156 = UIControl::getPropertyBag(v7);
          gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v205, (int)"#gesture_mouse_delta_x");
          v204 = 0;
          UIPropertyBag::set<float>(v156, v205, v206, (int)&v204);
            VMOV.F32        S0, #-12.0
            VLDR            S2, [R10,#0x14]
            VADD.F32        S0, S2, S0
        __asm { VSTR            S0, [R10,#0x14] }
        goto LABEL_179;
      v45 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
      if ( Json::Value::isNull(v45) || Json::Value::isObject(v45) != 1 )
        v46 = (Json::Value *)Json::Value::operator[]((int)v45, "#pack_id");
        if ( Json::Value::isUInt(v46) == 1 )
          v49 = Json::Value::asUInt64(v46, v47, 0LL);
          v178 = HIDWORD(v49);
          v48 = v49;
LABEL_61:
          v61 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
          if ( !Json::Value::isNull(v61)
            && Json::Value::isObject(v61) == 1
            && (v62 = (Json::Value *)Json::Value::operator[]((int)v61, "#force_skin_update"),
                Json::Value::isBool(v62) == 1)
            && Json::Value::asBool(v62, 0)
            || 522133279 * (unsigned int)*((_QWORD *)_R10 + 6) ^ (unsigned int)(*((_QWORD *)_R10 + 6) >> 32) ^ (unsigned int)*((_QWORD *)_R10 + 7) ^ (unsigned int)((522133279 * (unsigned __int64)(unsigned int)*((_QWORD *)_R10 + 7) >> 32) + 522133279 * (*((_QWORD *)_R10 + 7) >> 32)) ^ v48 | v178
            || v182 != *((_DWORD *)_R10 + 16) )
            v63 = qword_287E92C;
            v64 = unk_287E934;
            *((_DWORD *)_R10 + 12) = mce::UUID::EMPTY;
            v65 = (int)_R10 + 48;
            *(_QWORD *)(v65 + 4) = v63;
            *(_DWORD *)(v65 + 12) = v64;
            *(_DWORD *)(v65 + 16) = 0;
            v66 = UIControl::getPropertyBag(v7);
            v215 = 0;
            UIPropertyBag::set<bool>(v66, 18, "#force_skin_update", &v215);
            v68 = SkinRepository::getSkinPackByIdHash(v179, v67, __PAIR__(v178, v48));
            if ( v68 )
              v69 = SkinPack::getSkins(v68);
              if ( v182 >= 0 )
                v70 = *(_QWORD *)v69;
                if ( v182 < -991146299 * ((HIDWORD(v70) - (signed int)v70) >> 2) )
                  v71 = (Skin *)(v70 + 52 * v182);
                  v181 = (Skin *)(v70 + 52 * v182);
                  v72 = Skin::getSkinPackId((Skin *)(v70 + 52 * v182));
                  v73 = *(_DWORD *)v72;
                  v74 = *((_DWORD *)v72 + 1);
                  v75 = *((_DWORD *)v72 + 2);
                  v76 = *((_DWORD *)v72 + 3);
                  *(_DWORD *)v65 = v73;
                  *((_DWORD *)_R10 + 13) = v74;
                  *((_DWORD *)_R10 + 14) = v75;
                  *((_DWORD *)_R10 + 15) = v76;
                  *((_DWORD *)_R10 + 16) = Skin::getSkinIndex(v71);
                  v77 = (mce::TextureGroup *)ClientInstance::getTextures(v183);
                  v78 = Skin::syncTextureData(v71, v77);
                  v79 = v78;
                  v80 = 0;
                  v81 = *(_QWORD *)v78;
                  v212 = 0;
                  v213 = 0;
                  v82 = HIDWORD(v81) - v81;
                  v214 = 0;
                  if ( HIDWORD(v81) != (_DWORD)v81 )
                    v80 = (char *)operator new(HIDWORD(v81) - v81);
                  v212 = v80;
                  v213 = v80;
                  v214 = &v80[v82];
                  v83 = *(_QWORD *)v79;
                  v84 = HIDWORD(v83) - v83;
                  if ( HIDWORD(v83) != (_DWORD)v83 )
                    _aeabi_memmove(v80, v83);
                    v84 = HIDWORD(v83) - v83;
                  v213 = &v80[v84];
                    v85 = (ClientSkinInfoData *)operator new(0x24u);
                    ClientSkinInfoData::ClientSkinInfoData(v85);
                    v86 = *((_DWORD *)_R10 + 6);
                    *((_DWORD *)_R10 + 6) = v85;
                    if ( v86 )
                      (*(void (**)(void))(*(_DWORD *)v86 + 4))();
                      v85 = (ClientSkinInfoData *)*((_DWORD *)_R10 + 6);
                    v87 = *(void (__fastcall **)(ClientSkinInfoData *, char *, char **, int *))(*(_DWORD *)v85 + 8);
                    v88 = Skin::getSerializable(v181);
                    v89 = (mce::TextureGroup *)ClientInstance::getTextures(v183);
                    v90 = Skin::syncCapeTextureData(v181, v89);
                    Skin::getGeometryName(v181);
                    v174 = &Util::EMPTY_STRING;
                    v87(v85, v88, &v212, v90);
                    v80 = v212;
                  if ( v80 )
                    operator delete(v80);
          goto LABEL_131;
      v48 = 0;
      v178 = 0;
      goto LABEL_61;
  return result;
}


void __fastcall PaperDollRenderer::~PaperDollRenderer(PaperDollRenderer *this)
{
  PaperDollRenderer::~PaperDollRenderer(this);
}


int __fastcall PaperDollRenderer::~PaperDollRenderer(PaperDollRenderer *this)
{
  PaperDollRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E0638;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


MinecraftUICustomRenderer *__fastcall PaperDollRenderer::PaperDollRenderer(MinecraftUICustomRenderer *a1, int a2)
{
  int v2; // r6@1
  MinecraftUICustomRenderer *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  signed int v9; // r0@9
  void *v10; // r0@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  unsigned int *v22; // r2@36
  signed int v23; // r1@38
  int v24; // [sp+4h] [bp-3Ch]@4
  int v25; // [sp+Ch] [bp-34h]@4
  int v26; // [sp+10h] [bp-30h]@4
  int v27; // [sp+18h] [bp-28h]@3
  int v28; // [sp+20h] [bp-20h]@2
  int v29; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v3 = &off_26E0638;
  *((_DWORD *)v3 + 2) = 0;
  *((_BYTE *)v3 + 12) = 1;
  *((_BYTE *)v3 + 13) = 0;
  *((_BYTE *)v3 + 14) = 0;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 6) = 0;
  _aeabi_memclr8((char *)v3 + 32, 36);
  sub_119C884((void **)&v29, "use_selected_skin");
  *((_BYTE *)v3 + 12) = UIResolvedDef::getAsBool(v2, (int **)&v29, 1);
  v4 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v29 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v28, "use_uuid");
  *((_BYTE *)v3 + 13) = UIResolvedDef::getAsBool(v2, (int **)&v28, 0);
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v28 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v27, "use_skin_gui_scale");
  *((_BYTE *)v3 + 14) = UIResolvedDef::getAsBool(v2, (int **)&v27, 0);
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v27 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v25, "rotation");
  sub_119C884((void **)&v24, "none");
  UIResolvedDef::getAsString(&v26, v2, (int **)&v25, &v24);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( sub_119C9E8((const void **)&v26, "auto") )
    if ( sub_119C9E8((const void **)&v26, "gesture_x") )
      if ( sub_119C9E8((const void **)&v26, "custom_y") )
        v9 = 0;
      else
        v9 = 3;
      v9 = 2;
  else
    v9 = 1;
  *((_DWORD *)v3 + 2) = v9;
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  return v3;
}


void __fastcall PaperDollRenderer::~PaperDollRenderer(PaperDollRenderer *this)
{
  PaperDollRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E0638;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


MinecraftUICustomRenderer *__fastcall PaperDollRenderer::clone(PaperDollRenderer *this, int a2)
{
  PaperDollRenderer *v2; // r4@1
  int v3; // r5@1
  MinecraftUICustomRenderer *v4; // r6@1
  MinecraftUICustomRenderer *result; // r0@1
  MinecraftUICustomRenderer *v6; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = (MinecraftUICustomRenderer *)operator new(0x48u);
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(v4);
  *(_DWORD *)v4 = &off_26E0638;
  *((_BYTE *)v4 + 13) = 0;
  *((_BYTE *)v4 + 14) = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 6) = 0;
  _aeabi_memclr8((char *)v4 + 32, 36);
  v6 = v4;
  *((_DWORD *)v4 + 2) = *(_DWORD *)(v3 + 8);
  *((_BYTE *)v4 + 12) = *(_BYTE *)(v3 + 12);
  std::__shared_ptr<UICustomRenderer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<PaperDollRenderer,std::default_delete<std::default_delete>>(
    (int)v2,
    (int *)&v6);
  result = v6;
  if ( v6 )
    result = (MinecraftUICustomRenderer *)(*(int (**)(void))(*(_DWORD *)v6 + 4))();
  return result;
}
