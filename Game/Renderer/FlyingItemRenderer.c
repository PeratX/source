

_QWORD *__fastcall FlyingItemRenderer::FlyingItemRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0078;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  return result;
}


int __fastcall FlyingItemRenderer::_addNewFlyingItems(FlyingItemRenderer *this, UIPropertyBag *a2)
{
  UIPropertyBag *v2; // r9@1
  Json::Value *v3; // r6@1
  FlyingItemRenderer *v4; // r5@1
  Json::Value *v5; // r4@3
  void **v10; // r4@6
  signed int v11; // r11@6
  const char *v12; // r7@6
  unsigned int *v13; // r1@7
  signed int v14; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r1@15
  signed int v18; // r0@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r1@23
  signed int v22; // r0@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r1@31
  signed int v26; // r0@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r1@39
  signed int v30; // r0@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  unsigned int *v33; // r1@47
  signed int v34; // r0@49
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  unsigned int *v37; // r1@55
  signed int v38; // r0@57
  unsigned int *v39; // r2@59
  signed int v40; // r1@61
  unsigned int *v41; // r1@63
  signed int v42; // r0@65
  unsigned int *v43; // r2@67
  signed int v44; // r1@69
  unsigned int *v45; // r2@127
  signed int v46; // r1@129
  unsigned int *v47; // r1@131
  signed int v48; // r0@133
  unsigned int *v49; // r2@135
  signed int v50; // r1@137
  unsigned int *v51; // r2@139
  signed int v52; // r1@141
  unsigned int *v53; // r1@143
  signed int v54; // r0@145
  unsigned int *v55; // r2@147
  signed int v56; // r1@149
  unsigned int *v57; // r2@151
  signed int v58; // r1@153
  unsigned int *v59; // r2@155
  signed int v60; // r1@157
  unsigned int *v61; // r2@159
  signed int v62; // r1@161
  const void **v63; // r0@196
  const char *v64; // r5@196
  Json::Value *v65; // r4@198
  void *v66; // r0@203
  const void **v67; // r0@204
  const char *v68; // r5@204
  Json::Value *v69; // r4@206
  void *v70; // r0@211
  const void **v71; // r0@212
  const char *v72; // r5@212
  signed int v73; // r0@212
  int v74; // r0@213
  Json::Value *v75; // r0@214
  Json::Value *v76; // r4@214
  signed int v77; // r0@214
  void *v79; // r0@217
  const void **v80; // r0@218
  const char *v81; // r5@218
  signed int v82; // r0@218
  int v83; // r0@219
  Json::Value *v84; // r0@220
  Json::Value *v85; // r4@220
  signed int v86; // r0@220
  void *v88; // r0@223
  const void **v89; // r0@224
  const char *v90; // r5@224
  signed int v91; // r0@224
  int v92; // r0@225
  Json::Value *v93; // r0@226
  Json::Value *v94; // r4@226
  signed int v95; // r0@226
  void *v97; // r0@229
  const void **v98; // r0@230
  const char *v99; // r5@230
  signed int v100; // r0@230
  int v101; // r0@231
  Json::Value *v102; // r0@232
  Json::Value *v103; // r4@232
  signed int v104; // r0@232
  void *v106; // r0@235
  const void **v107; // r0@236
  const char *v108; // r5@236
  signed int v109; // r0@236
  int v110; // r0@237
  Json::Value *v111; // r0@238
  Json::Value *v112; // r4@238
  signed int v113; // r0@238
  void *v115; // r0@241
  const void **v116; // r0@242
  const char *v117; // r5@242
  signed int v118; // r0@242
  int v119; // r0@243
  Json::Value *v120; // r0@244
  Json::Value *v121; // r4@244
  signed int v122; // r0@244
  void *v124; // r0@247
  const void **v125; // r0@249
  const char *v126; // r7@249
  Json::Value *v127; // r4@251
  char *v128; // r1@252
  void *v129; // r7@254
  void *v130; // r0@254
  char *v131; // r0@259
  void *v132; // r0@261
  const void **v133; // r0@262
  const char *v134; // r7@262
  Json::Value *v135; // r4@264
  char *v136; // r1@265
  char *v137; // r0@267
  void *v138; // r0@269
  char *v139; // r0@270
  char *v140; // r0@271
  char v141; // r0@273
  __int64 v143; // r0@275
  char *v144; // r0@276
  int v145; // r3@276
  float v146; // r5@276
  float v147; // r7@276
  float v148; // r3@276
  float v149; // r5@276
  float v150; // r7@276
  unsigned __int64 *v152; // [sp+24h] [bp-1A4h]@6
  signed int v153; // [sp+34h] [bp-194h]@208
  FlyingItemRenderer *v154; // [sp+38h] [bp-190h]@196
  int v155; // [sp+3Ch] [bp-18Ch]@5
  unsigned int v156; // [sp+40h] [bp-188h]@200
  int v157; // [sp+44h] [bp-184h]@291
  char v158; // [sp+48h] [bp-180h]@272
  int v159; // [sp+50h] [bp-178h]@282
  void *v160; // [sp+6Ch] [bp-15Ch]@280
  void *ptr; // [sp+7Ch] [bp-14Ch]@278
  double v162; // [sp+90h] [bp-138h]@276
  float v163; // [sp+98h] [bp-130h]@276
  float v164; // [sp+9Ch] [bp-12Ch]@276
  float v165; // [sp+A0h] [bp-128h]@276
  float v166; // [sp+A4h] [bp-124h]@276
  float v167; // [sp+A8h] [bp-120h]@276
  float v168; // [sp+ACh] [bp-11Ch]@276
  char v169; // [sp+B0h] [bp-118h]@275
  void *v170; // [sp+BCh] [bp-10Ch]@255
  int v171; // [sp+C4h] [bp-104h]@159
  char *v172; // [sp+CCh] [bp-FCh]@262
  int v173; // [sp+D0h] [bp-F8h]@147
  char *v174; // [sp+D4h] [bp-F4h]@151
  char *v175; // [sp+DCh] [bp-ECh]@249
  int v176; // [sp+E0h] [bp-E8h]@135
  char *v177; // [sp+E4h] [bp-E4h]@155
  char v178; // [sp+E8h] [bp-E0h]@248
  int v179; // [sp+F0h] [bp-D8h]@288
  void *v180; // [sp+10Ch] [bp-BCh]@286
  void *v181; // [sp+11Ch] [bp-ACh]@284
  int v182; // [sp+134h] [bp-94h]@67
  int v183; // [sp+138h] [bp-90h]@59
  int v184; // [sp+13Ch] [bp-8Ch]@51
  int v185; // [sp+140h] [bp-88h]@43
  int v186; // [sp+144h] [bp-84h]@35
  int v187; // [sp+148h] [bp-80h]@27
  int v188; // [sp+14Ch] [bp-7Ch]@19
  int v189; // [sp+150h] [bp-78h]@6
  char v190; // [sp+154h] [bp-74h]@252
  char v191; // [sp+158h] [bp-70h]@265

  v2 = a2;
  v3 = (UIPropertyBag *)((char *)a2 + 8);
  v4 = this;
  if ( !Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) && Json::Value::isObject(v3) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v3, "flying_item_count");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
    {
      v155 = Json::Value::asInt(v5, 0);
      if ( v155 >= 1 )
      {
        v152 = (unsigned __int64 *)((char *)v4 + 8);
        __asm { VMOV.F32        S18, #1.0 }
        v10 = (void **)&v189;
        v11 = 0;
        __asm { VLDR            S16, =0.0 }
        v12 = "flying_item_id_aux";
        do
        {
          Util::toString<int,(void *)0,(void *)0>(v10, v11);
          v63 = sub_119C984((const void **)v10, 0, (unsigned int)v12, (_BYTE *)0x12);
          v154 = v4;
          v64 = (const char *)*v63;
          *v63 = &unk_28898CC;
          if ( Json::Value::isNull(v3)
            || Json::Value::isObject(v3) != 1
            || (v65 = (Json::Value *)Json::Value::operator[]((int)v3, v64), !Json::Value::isInt(v65))
            && Json::Value::isUInt(v65) != 1 )
          {
            v156 = 0;
          }
          else
            v156 = Json::Value::asInt(v65, 0);
          if ( (int *)(v64 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v64 - 4);
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
              j_j_j_j_j__ZdlPv_9_1((void *)(v64 - 12));
          v66 = (void *)(v189 - 12);
          if ( (int *)(v189 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v189 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v66);
          Util::toString<int,(void *)0,(void *)0>((void **)&v188, v11);
          v67 = sub_119C984((const void **)&v188, 0, (unsigned int)"flying_item_custom_color", (_BYTE *)0x18);
          v68 = (const char *)*v67;
          *v67 = &unk_28898CC;
            || (v69 = (Json::Value *)Json::Value::operator[]((int)v3, v68), !Json::Value::isInt(v69))
            && Json::Value::isUInt(v69) != 1 )
            v153 = -1;
            v153 = Json::Value::asInt(v69, 0);
          if ( (int *)(v68 - 12) != &dword_28898C0 )
            v17 = (unsigned int *)(v68 - 4);
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v68 - 12));
          v70 = (void *)(v188 - 12);
          if ( (int *)(v188 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v188 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v70);
          Util::toString<int,(void *)0,(void *)0>((void **)&v187, v11);
          v71 = sub_119C984((const void **)&v187, 0, (unsigned int)"flying_item_origin_position_x", (_BYTE *)0x1D);
          v72 = (const char *)*v71;
          *v71 = &unk_28898CC;
          v73 = Json::Value::isNull(v3);
          __asm { VMOV.F32        S20, S16 }
          if ( !v73 )
            v74 = Json::Value::isObject(v3);
            __asm { VMOV.F32        S20, S16 }
            if ( v74 == 1 )
              v75 = (Json::Value *)Json::Value::operator[]((int)v3, v72);
              v76 = v75;
              v77 = Json::Value::isNumeric(v75);
              __asm { VMOV.F32        S20, S16 }
              if ( v77 == 1 )
              {
                _R0 = Json::Value::asFloat(v76, 0.0);
                __asm { VMOV            S20, R0 }
              }
          if ( (int *)(v72 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v72 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v72 - 12));
          v79 = (void *)(v187 - 12);
          if ( (int *)(v187 - 12) != &dword_28898C0 )
            v23 = (unsigned int *)(v187 - 4);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v79);
          Util::toString<int,(void *)0,(void *)0>((void **)&v186, v11);
          v80 = sub_119C984((const void **)&v186, 0, (unsigned int)"flying_item_origin_position_y", (_BYTE *)0x1D);
          v81 = (const char *)*v80;
          *v80 = &unk_28898CC;
          v82 = Json::Value::isNull(v3);
          __asm { VMOV.F32        S22, S16 }
          if ( !v82 )
            v83 = Json::Value::isObject(v3);
            __asm { VMOV.F32        S22, S16 }
            if ( v83 == 1 )
              v84 = (Json::Value *)Json::Value::operator[]((int)v3, v81);
              v85 = v84;
              v86 = Json::Value::isNumeric(v84);
              __asm { VMOV.F32        S22, S16 }
              if ( v86 == 1 )
                _R0 = Json::Value::asFloat(v85, 0.0);
                __asm { VMOV            S22, R0 }
          if ( (int *)(v81 - 12) != &dword_28898C0 )
            v25 = (unsigned int *)(v81 - 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v81 - 12));
          v88 = (void *)(v186 - 12);
          if ( (int *)(v186 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v186 - 4);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v88);
          Util::toString<int,(void *)0,(void *)0>((void **)&v185, v11);
          v89 = sub_119C984((const void **)&v185, 0, (unsigned int)"flying_item_origin_scale", (_BYTE *)0x18);
          v90 = (const char *)*v89;
          *v89 = &unk_28898CC;
          v91 = Json::Value::isNull(v3);
          __asm { VMOV.F32        S24, S18 }
          if ( !v91 )
            v92 = Json::Value::isObject(v3);
            __asm { VMOV.F32        S24, S18 }
            if ( v92 == 1 )
              v93 = (Json::Value *)Json::Value::operator[]((int)v3, v90);
              v94 = v93;
              v95 = Json::Value::isNumeric(v93);
              __asm { VMOV.F32        S24, S18 }
              if ( v95 == 1 )
                _R0 = Json::Value::asFloat(v94, 0.0);
                __asm { VMOV            S24, R0 }
          if ( (int *)(v90 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v90 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v90 - 12));
          v97 = (void *)(v185 - 12);
          if ( (int *)(v185 - 12) != &dword_28898C0 )
            v31 = (unsigned int *)(v185 - 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v97);
          Util::toString<int,(void *)0,(void *)0>((void **)&v184, v11);
          v98 = sub_119C984((const void **)&v184, 0, (unsigned int)"flying_item_destination_position_x", (_BYTE *)0x22);
          v99 = (const char *)*v98;
          *v98 = &unk_28898CC;
          v100 = Json::Value::isNull(v3);
          __asm { VMOV.F32        S26, S16 }
          if ( !v100 )
            v101 = Json::Value::isObject(v3);
            __asm { VMOV.F32        S26, S16 }
            if ( v101 == 1 )
              v102 = (Json::Value *)Json::Value::operator[]((int)v3, v99);
              v103 = v102;
              v104 = Json::Value::isNumeric(v102);
              __asm { VMOV.F32        S26, S16 }
              if ( v104 == 1 )
                _R0 = Json::Value::asFloat(v103, 0.0);
                __asm { VMOV            S26, R0 }
          if ( (int *)(v99 - 12) != &dword_28898C0 )
            v33 = (unsigned int *)(v99 - 4);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v99 - 12));
          v106 = (void *)(v184 - 12);
          if ( (int *)(v184 - 12) != &dword_28898C0 )
            v35 = (unsigned int *)(v184 - 4);
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v106);
          Util::toString<int,(void *)0,(void *)0>((void **)&v183, v11);
          v107 = sub_119C984((const void **)&v183, 0, (unsigned int)"flying_item_destination_position_y", (_BYTE *)0x22);
          v108 = (const char *)*v107;
          *v107 = &unk_28898CC;
          v109 = Json::Value::isNull(v3);
          __asm { VMOV.F32        S28, S16 }
          if ( !v109 )
            v110 = Json::Value::isObject(v3);
            __asm { VMOV.F32        S28, S16 }
            if ( v110 == 1 )
              v111 = (Json::Value *)Json::Value::operator[]((int)v3, v108);
              v112 = v111;
              v113 = Json::Value::isNumeric(v111);
              __asm { VMOV.F32        S28, S16 }
              if ( v113 == 1 )
                _R0 = Json::Value::asFloat(v112, 0.0);
                __asm { VMOV            S28, R0 }
          if ( (int *)(v108 - 12) != &dword_28898C0 )
            v37 = (unsigned int *)(v108 - 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v108 - 12));
          v115 = (void *)(v183 - 12);
          if ( (int *)(v183 - 12) != &dword_28898C0 )
            v39 = (unsigned int *)(v183 - 4);
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
              v40 = (*v39)--;
            if ( v40 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v115);
          Util::toString<int,(void *)0,(void *)0>((void **)&v182, v11);
          v116 = sub_119C984((const void **)&v182, 0, (unsigned int)"flying_item_destination_scale", (_BYTE *)0x1D);
          v117 = (const char *)*v116;
          *v116 = &unk_28898CC;
          v118 = Json::Value::isNull(v3);
          __asm { VMOV.F32        S30, S18 }
          if ( !v118 )
            v119 = Json::Value::isObject(v3);
            __asm { VMOV.F32        S30, S18 }
            if ( v119 == 1 )
              v120 = (Json::Value *)Json::Value::operator[]((int)v3, v117);
              v121 = v120;
              v122 = Json::Value::isNumeric(v120);
              __asm { VMOV.F32        S30, S18 }
              if ( v122 == 1 )
                _R0 = Json::Value::asFloat(v121, 0.0);
                __asm { VMOV            S30, R0 }
          if ( (int *)(v117 - 12) != &dword_28898C0 )
            v41 = (unsigned int *)(v117 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j_j__ZdlPv_9_1((void *)(v117 - 12));
          v124 = (void *)(v182 - 12);
          if ( (int *)(v182 - 12) != &dword_28898C0 )
            v43 = (unsigned int *)(v182 - 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
              v44 = (*v43)--;
            if ( v44 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v124);
          ItemInstance::ItemInstance((ItemInstance *)&v178, v156 >> 16, 1, v156 & 0x7FFF);
          if ( *(_WORD *)(Item::mBanner + 18) == v156 >> 16 )
            Util::toString<int,(void *)0,(void *)0>((void **)&v176, v11);
            v125 = sub_119C984((const void **)&v176, 0, (unsigned int)"flying_item_banner_patterns", (_BYTE *)0x1B);
            v126 = (const char *)*v125;
            *v125 = &unk_28898CC;
            sub_119C884((void **)&v175, (const char *)&unk_257BC67);
            if ( Json::Value::isNull(v3)
              || Json::Value::isObject(v3) != 1
              || (v127 = (Json::Value *)Json::Value::operator[]((int)v3, v126), Json::Value::isString(v127) != 1) )
              v128 = (char *)&unk_28898CC;
              v177 = v175;
              v175 = (char *)&unk_28898CC;
              jsonValConversion<std::string>::as((int *)&v177, (int)&v190, (int)v127);
              v128 = v175;
            v131 = v128 - 12;
            if ( (int *)(v128 - 12) != &dword_28898C0 )
              v45 = (unsigned int *)(v128 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v46 = __ldrex(v45);
                while ( __strex(v46 - 1, v45) );
              else
                v46 = (*v45)--;
              if ( v46 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v131);
            if ( (int *)(v126 - 12) != &dword_28898C0 )
              v47 = (unsigned int *)(v126 - 4);
                  v48 = __ldrex(v47);
                while ( __strex(v48 - 1, v47) );
                v48 = (*v47)--;
              if ( v48 <= 0 )
                j_j_j_j_j__ZdlPv_9_1((void *)(v126 - 12));
            v132 = (void *)(v176 - 12);
            if ( (int *)(v176 - 12) != &dword_28898C0 )
              v49 = (unsigned int *)(v176 - 4);
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v132);
            Util::toString<int,(void *)0,(void *)0>((void **)&v173, v11);
            v133 = sub_119C984((const void **)&v173, 0, (unsigned int)"flying_item_banner_colors", (_BYTE *)0x19);
            v134 = (const char *)*v133;
            *v133 = &unk_28898CC;
            sub_119C884((void **)&v172, (const char *)&unk_257BC67);
              || (v135 = (Json::Value *)Json::Value::operator[]((int)v3, v134), Json::Value::isString(v135) != 1) )
              v136 = (char *)&unk_28898CC;
              v174 = v172;
              v172 = (char *)&unk_28898CC;
              jsonValConversion<std::string>::as((int *)&v174, (int)&v191, (int)v135);
              v136 = v172;
            v137 = v136 - 12;
            if ( (int *)(v136 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v136 - 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v137);
            if ( (int *)(v134 - 12) != &dword_28898C0 )
              v53 = (unsigned int *)(v134 - 4);
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
                v54 = (*v53)--;
              if ( v54 <= 0 )
                j_j_j_j_j__ZdlPv_9_1((void *)(v134 - 12));
            v138 = (void *)(v173 - 12);
            if ( (int *)(v173 - 12) != &dword_28898C0 )
              v55 = (unsigned int *)(v173 - 4);
                  v56 = __ldrex(v55);
                while ( __strex(v56 - 1, v55) );
                v56 = (*v55)--;
              if ( v56 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v138);
            BannerBlockEntity::setPatternAndColors((int)&v178, v153, (int *)&v177, (int *)&v174);
            v139 = v174 - 12;
            if ( (int *)(v174 - 12) != &dword_28898C0 )
              v57 = (unsigned int *)(v174 - 4);
                  v58 = __ldrex(v57);
                while ( __strex(v58 - 1, v57) );
                v58 = (*v57)--;
              if ( v58 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v139);
            v140 = v177 - 12;
            if ( (int *)(v177 - 12) != &dword_28898C0 )
              v59 = (unsigned int *)(v177 - 4);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v140);
          else if ( v153 != -1 )
            v129 = operator new(0x1Cu);
            CompoundTag::CompoundTag((int)v129);
            sub_119C884((void **)&v171, "customColor");
            CompoundTag::putInt((int)v129, (const void **)&v171, v153);
            v130 = (void *)(v171 - 12);
            if ( (int *)(v171 - 12) != &dword_28898C0 )
              v61 = (unsigned int *)(v171 - 4);
                  v62 = __ldrex(v61);
                while ( __strex(v62 - 1, v61) );
                v62 = (*v61)--;
              if ( v62 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v130);
            v170 = v129;
            ItemInstance::setUserData((int)&v178, (int *)&v170);
            if ( v170 )
              (*(void (**)(void))(*(_DWORD *)v170 + 4))();
            v170 = 0;
          ItemInstance::ItemInstance((int)&v158);
          ItemInstance::operator=((int)&v158, (int)&v178);
          v4 = v154;
          if ( v156 & 0x8000 )
            v141 = 1;
            v141 = ItemInstance::isGlint((ItemInstance *)&v178);
          v169 = v141;
          __asm
            VSTR            S20, [SP,#0x1C8+var_130]
            VSTR            S22, [SP,#0x1C8+var_12C]
            VSTR            S24, [SP,#0x1C8+var_120]
            VSTR            S26, [SP,#0x1C8+var_128]
            VSTR            S28, [SP,#0x1C8+var_124]
            VSTR            S30, [SP,#0x1C8+var_11C]
          _R0 = getTimeS();
            VMOV            D0, R0, R1
            VSTR            D0, [SP,#0x1C8+var_138]
          v143 = *(_QWORD *)((char *)v154 + 12);
          if ( (_DWORD)v143 == HIDWORD(v143) )
            std::vector<ui::FlyingItem,std::allocator<ui::FlyingItem>>::_M_emplace_back_aux<ui::FlyingItem const&>(
              v152,
              (int)&v158);
            v144 = (char *)ItemInstance::ItemInstance((ItemInstance *)v143, (int)&v158) + 72;
            v145 = HIDWORD(v162);
            v146 = v163;
            v147 = v164;
            *(_DWORD *)v144 = LODWORD(v162);
            *((_DWORD *)v144 + 1) = v145;
            *((float *)v144 + 2) = v146;
            *((float *)v144 + 3) = v147;
            v144 += 16;
            v148 = v166;
            v149 = v167;
            v150 = v168;
            *(float *)v144 = v165;
            *((float *)v144 + 1) = v148;
            *((float *)v144 + 2) = v149;
            *((float *)v144 + 3) = v150;
            v4 = v154;
            v144[16] = v169;
            *((_DWORD *)v4 + 3) += 112;
          if ( ptr )
            operator delete(ptr);
          v12 = "flying_item_id_aux";
          if ( v160 )
            operator delete(v160);
          if ( v159 )
            (*(void (**)(void))(*(_DWORD *)v159 + 4))();
          if ( v181 )
            operator delete(v181);
          if ( v180 )
            operator delete(v180);
          if ( v179 )
            (*(void (**)(void))(*(_DWORD *)v179 + 4))();
          ++v11;
          v10 = (void **)&v189;
        }
        while ( v11 < v155 );
      }
    }
  }
  v157 = 0;
  return UIPropertyBag::set<int>((int)v2, 17, "flying_item_count", &v157);
}


int __fastcall FlyingItemRenderer::render(FlyingItemRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  FlyingItemRenderer *v6; // r11@1
  int result; // r0@1
  int v8; // r4@1
  char *v14; // r6@2
  signed int v15; // r0@5
  char *v16; // r8@6
  int v17; // r4@6
  int v18; // r6@6
  int v19; // r5@7
  int v20; // r0@7
  int v21; // r1@7
  int v22; // r2@7
  int v23; // r3@7
  int v24; // r4@7
  int v25; // r7@7
  int v26; // r3@7
  int v27; // r4@7
  int v28; // r7@7
  void *v29; // r0@9
  void *v30; // r0@11
  int v31; // r0@13
  BaseEntityRenderContext *v32; // r11@16
  int v37; // r6@19
  int v38; // r0@19
  ItemRenderer *v39; // r0@19
  float v40; // [sp+0h] [bp-E0h]@0
  float v41; // [sp+4h] [bp-DCh]@0
  float v42; // [sp+10h] [bp-D0h]@0
  FlyingItemRenderer *v43; // [sp+18h] [bp-C8h]@1
  __int64 v44; // [sp+1Ch] [bp-C4h]@1
  char v45; // [sp+24h] [bp-BCh]@2
  char v46; // [sp+88h] [bp-58h]@16
  int (__fastcall *v47)(char *, char *, signed int); // [sp+90h] [bp-50h]@16
  int (__fastcall *v48)(char *, _DWORD, _DWORD, int); // [sp+94h] [bp-4Ch]@17

  v6 = this;
  v44 = *(_QWORD *)&a2;
  v43 = this;
  result = getTimeS();
  v8 = *((_QWORD *)v6 + 1) >> 32;
  _R10 = *((_QWORD *)v6 + 1);
  if ( _R10 != v8 )
  {
    __asm
    {
      VMOV            D8, R0, R1
      VLDR            S18, =0.15
      VLDR            S20, =6.6667
    }
    v14 = &v45;
    do
      __asm
      {
        VLDR            D0, [R10,#0x48]
        VSUB.F64        D0, D8, D0
        VCVT.F32.F64    S22, D0
        VCMPE.F32       S22, S18
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v32 = (BaseEntityRenderContext *)v14;
        Easing::getEasingFunc((int)&v46, 7);
        if ( !v47 )
          sub_119C8E4();
        __asm
        {
          VMUL.F32        S0, S22, S20
          VMOV            R6, S0
        }
        _R4 = v48(&v46, *(_DWORD *)(_R10 + 80), *(_DWORD *)(_R10 + 88), _R6);
        _R5 = v48(&v46, *(_DWORD *)(_R10 + 84), *(_DWORD *)(_R10 + 92), _R6);
        _R8 = v48(&v46, *(_QWORD *)(_R10 + 96), *(_QWORD *)(_R10 + 96) >> 32, _R6);
        v37 = MinecraftUIRenderContext::getScreenContext((MinecraftUIRenderContext *)v44);
        v38 = ClientInstance::getMinecraftGame((ClientInstance *)HIDWORD(v44));
        BaseEntityRenderContext::BaseEntityRenderContext((int)v32, v37, (ClientInstance *)HIDWORD(v44), v38);
        ItemInstance::setShowPickUp((ItemInstance *)_R10, 0);
        v14 = (char *)v32;
        v39 = (ItemRenderer *)BaseEntityRenderContext::getItemRenderer(v32);
          VMOV            S0, R4
          VMOV            S2, R5
          VMOV            S4, R8
          VSTR            S4, [SP,#0xE0+var_D0]
          VSTR            S2, [SP,#0xE0+var_DC]
          VSTR            S0, [SP,#0xE0+var_E0]
        ItemRenderer::renderGuiItemNew(
          v39,
          v32,
          (const ItemInstance *)_R10,
          0.0,
          v40,
          v41,
          1.0,
          v42,
          *(_BYTE *)(_R10 + 104));
        result = BaseEntityRenderContext::~BaseEntityRenderContext(v32);
        v6 = v43;
        if ( v47 )
          result = v47(&v46, &v46, 3);
        _R10 += 112;
      else
        if ( _R10 + 112 != v8 )
          v15 = v8 - (_R10 + 112);
          if ( v15 >= 1 )
          {
            v16 = v14;
            v17 = _R10;
            v18 = -1227133513 * (v15 >> 4) + 1;
            do
            {
              v19 = v17 + 112;
              ItemInstance::operator=(v17, v17 + 112);
              v20 = v17 + 184;
              v21 = v17 + 72;
              --v18;
              v22 = *(_DWORD *)(v17 + 184);
              v23 = *(_DWORD *)(v17 + 188);
              v24 = *(_DWORD *)(v17 + 192);
              v25 = *(_DWORD *)(v20 + 12);
              v20 += 16;
              *(_DWORD *)v21 = v22;
              *(_DWORD *)(v21 + 4) = v23;
              *(_DWORD *)(v21 + 8) = v24;
              *(_DWORD *)(v21 + 12) = v25;
              v21 += 16;
              v26 = *(_DWORD *)(v20 + 4);
              v27 = *(_DWORD *)(v20 + 8);
              v28 = *(_DWORD *)(v20 + 12);
              *(_DWORD *)v21 = *(_DWORD *)v20;
              *(_DWORD *)(v21 + 4) = v26;
              *(_DWORD *)(v21 + 8) = v27;
              *(_DWORD *)(v21 + 12) = v28;
              v17 = v19;
              *(_BYTE *)(v21 + 16) = *(_BYTE *)(v20 + 16);
            }
            while ( v18 > 1 );
            v8 = *((_DWORD *)v6 + 3);
            v14 = v16;
          }
        *((_DWORD *)v6 + 3) = v8 - 112;
        v29 = *(void **)(v8 - 60);
        if ( v29 )
          operator delete(v29);
        v30 = *(void **)(v8 - 76);
        if ( v30 )
          operator delete(v30);
        v31 = *(_DWORD *)(v8 - 104);
        if ( v31 )
          (*(void (**)(void))(*(_DWORD *)v31 + 4))();
        result = 0;
        *(_DWORD *)(v8 - 104) = 0;
      v8 = *((_DWORD *)v6 + 3);
    while ( _R10 != v8 );
  }
  return result;
}


void __fastcall FlyingItemRenderer::~FlyingItemRenderer(FlyingItemRenderer *this)
{
  FlyingItemRenderer *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E0078;
  *(_QWORD *)&v2 = *((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 112;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete((void *)v2);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall FlyingItemRenderer::update(FlyingItemRenderer *this, ClientInstance *a2, UIControl *a3)
{
  FlyingItemRenderer *v3; // r4@1
  int v4; // r5@1
  Json::Value *v5; // r6@1
  Json::Value *v6; // r6@3
  signed int result; // r0@7

  v3 = this;
  v4 = UIControl::getPropertyBag(a3);
  v5 = (Json::Value *)(v4 + 8);
  if ( !Json::Value::isNull((Json::Value *)(v4 + 8)) && Json::Value::isObject(v5) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v5, "flying_item_count");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
    {
      if ( Json::Value::asInt(v6, 0) )
        FlyingItemRenderer::_addNewFlyingItems(v3, (UIPropertyBag *)v4);
    }
  }
  result = 0;
  if ( *((_QWORD *)v3 + 1) >> 32 != (unsigned int)*((_QWORD *)v3 + 1) )
    result = 1;
  return result;
}


int __fastcall FlyingItemRenderer::~FlyingItemRenderer(FlyingItemRenderer *this)
{
  FlyingItemRenderer *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E0078;
  *(_QWORD *)&v2 = *((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 112;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


int __fastcall FlyingItemRenderer::clone(FlyingItemRenderer *this)
{
  FlyingItemRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI18FlyingItemRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall FlyingItemRenderer::~FlyingItemRenderer(FlyingItemRenderer *this)
{
  FlyingItemRenderer::~FlyingItemRenderer(this);
}


int __fastcall FlyingItemRenderer::getBatchType(FlyingItemRenderer *this)
{
  return 0;
}
