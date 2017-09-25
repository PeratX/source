

signed int __fastcall GiveCommand::execute(GiveCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GiveCommand *v3; // r5@1
  CommandOutput *v4; // r10@1
  const CommandOrigin *v5; // r6@1
  signed int result; // r0@1
  CommandOutput *v7; // r3@3
  char *v8; // r0@6
  char *i; // r11@8
  CommandOutput *v10; // r3@10
  Entity *v11; // r8@10
  char *v12; // r0@13
  _BYTE *v13; // r11@15
  char *v14; // r6@15
  unsigned int v15; // r2@15
  unsigned int v16; // r1@17
  unsigned int v17; // r7@17
  int v18; // r4@24
  Entity **v19; // r4@26
  const ItemInstance *v20; // r4@29
  const ItemInstance *j; // r6@29
  __int64 v22; // r6@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  int *v25; // r0@41
  void *v26; // r0@46
  void *v27; // r0@47
  void *v28; // r0@48
  void *v29; // r0@49
  char *v30; // r0@50
  _BYTE *v31; // r11@52
  char *v32; // r6@52
  unsigned int v33; // r2@52
  unsigned int v34; // r1@54
  unsigned int v35; // r7@54
  int v36; // r4@61
  Entity **v37; // r4@63
  __int64 v38; // r6@66
  void *v39; // r0@67
  void *v40; // r0@69
  int v41; // r0@71
  unsigned int *v42; // r2@78
  signed int v43; // r1@80
  unsigned int *v44; // r2@82
  signed int v45; // r1@84
  unsigned int *v46; // r2@86
  signed int v47; // r1@88
  unsigned int *v48; // r2@90
  signed int v49; // r1@92
  void *v50; // r4@112
  void *v51; // r6@112
  unsigned int *v52; // r2@114
  signed int v53; // r1@116
  int *v54; // r0@122
  char *v55; // r0@127
  unsigned int *v56; // r2@128
  signed int v57; // r1@130
  signed int v58; // r7@132
  unsigned int *v59; // r2@133
  signed int v60; // r1@135
  int v61; // r6@145
  unsigned int *v62; // r1@146
  unsigned int v63; // r0@148
  unsigned int *v64; // r4@152
  unsigned int v65; // r0@154
  int v66; // r6@159
  unsigned int *v67; // r1@160
  unsigned int v68; // r0@162
  unsigned int *v69; // r4@166
  unsigned int v70; // r0@168
  void *v71; // r0@174
  _BYTE *v72; // r0@175
  char *v73; // r4@180
  int v74; // r6@180
  unsigned int *v75; // r2@182
  signed int v76; // r1@184
  int *v77; // r0@190
  void *v78; // r0@195
  void *v79; // r0@196
  void *v80; // r0@197
  char *v81; // r0@198
  void *v82; // r0@199
  _BYTE *v83; // r0@200
  int v84; // r4@203
  unsigned int *v85; // r1@204
  unsigned int v86; // r0@206
  unsigned int *v87; // r5@210
  unsigned int v88; // r0@212
  unsigned int *v89; // r2@224
  signed int v90; // r1@226
  unsigned int *v91; // r2@228
  signed int v92; // r1@230
  unsigned int *v93; // r2@232
  signed int v94; // r1@234
  unsigned int *v95; // r2@236
  signed int v96; // r1@238
  unsigned int *v97; // r2@240
  signed int v98; // r1@242
  unsigned int *v99; // r2@244
  signed int v100; // r1@246
  unsigned int *v101; // r2@248
  signed int v102; // r1@250
  CommandOutput *v103; // [sp+0h] [bp-140h]@0
  CommandOutput *v104; // [sp+0h] [bp-140h]@1
  char *v105; // [sp+28h] [bp-118h]@178
  int v106; // [sp+2Ch] [bp-114h]@180
  int v107; // [sp+34h] [bp-10Ch]@180
  int v108; // [sp+3Ch] [bp-104h]@180
  char *v109; // [sp+44h] [bp-FCh]@180
  char *v110; // [sp+48h] [bp-F8h]@180
  char *v111; // [sp+4Ch] [bp-F4h]@180
  int v112; // [sp+54h] [bp-ECh]@175
  _BYTE *v113; // [sp+58h] [bp-E8h]@175
  int v114; // [sp+5Ch] [bp-E4h]@174
  int v115; // [sp+64h] [bp-DCh]@49
  int v116; // [sp+68h] [bp-D8h]@31
  int v117; // [sp+6Ch] [bp-D4h]@31
  void *v118; // [sp+70h] [bp-D0h]@31
  void *v119; // [sp+74h] [bp-CCh]@31
  char *v120; // [sp+78h] [bp-C8h]@31
  int v121; // [sp+80h] [bp-C0h]@31
  const ItemInstance *v122; // [sp+84h] [bp-BCh]@29
  const ItemInstance *v123; // [sp+88h] [bp-B8h]@29
  int v124; // [sp+90h] [bp-B0h]@29
  char v125; // [sp+94h] [bp-ACh]@8
  int v126; // [sp+98h] [bp-A8h]@145
  char v127; // [sp+A0h] [bp-A0h]@8
  int v128; // [sp+A4h] [bp-9Ch]@159
  void *ptr; // [sp+ACh] [bp-94h]@8
  Entity **v130; // [sp+B0h] [bp-90h]@8
  char *v131; // [sp+B4h] [bp-8Ch]@8
  int *v132; // [sp+B8h] [bp-88h]@7
  int v133; // [sp+BCh] [bp-84h]@203
  __int64 v134; // [sp+C0h] [bp-80h]@112
  int v135; // [sp+C8h] [bp-78h]@112
  char *v136; // [sp+CCh] [bp-74h]@5
  int v137; // [sp+D0h] [bp-70h]@3
  int v138; // [sp+D8h] [bp-68h]@221
  void *v139; // [sp+F4h] [bp-4Ch]@219
  void *v140; // [sp+104h] [bp-3Ch]@217

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = j_Command::validRange(*((Command **)this + 31), 1, 0x7FFF, (int)a3, v103);
  if ( result != 1 )
    return result;
  result = j_Command::validRange(*((Command **)v3 + 32), 0, 0x7FFF, (int)v4, v104);
  j_CommandItem::getInstance(
    (CommandItem *)&v137,
    (int)v3 + 116,
    *(_QWORD *)((char *)v3 + 124),
    *(_QWORD *)((char *)v3 + 124) >> 32);
  if ( !j_Command::validItemInstance((Command *)&v137, (const ItemInstance *)1, (int)v4, v7) )
    goto LABEL_217;
  if ( !j_Json::Value::isNull((GiveCommand *)((char *)v3 + 136)) )
  {
    v136 = (char *)&unk_28898CC;
    if ( !j_CommandUtils::addItemInstanceComponents() )
    {
      v134 = 0LL;
      v135 = 0;
      j_CommandOutput::error(v4, (int *)&v136, (unsigned __int64 *)&v134);
      v51 = (void *)HIDWORD(v134);
      v50 = (void *)v134;
      if ( (_DWORD)v134 != HIDWORD(v134) )
      {
        do
        {
          v54 = (int *)(*(_DWORD *)v50 - 12);
          if ( v54 != &dword_28898C0 )
          {
            v52 = (unsigned int *)(*(_DWORD *)v50 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
            }
            else
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
          }
          v50 = (char *)v50 + 8;
        }
        while ( v50 != v51 );
        v50 = (void *)v134;
      }
      if ( v50 )
        j_operator delete(v50);
      v55 = v136 - 12;
      if ( (int *)(v136 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v136 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
        else
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v55);
      goto LABEL_217;
    }
    v8 = v136 - 12;
    if ( (int *)(v136 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v136 - 4);
      if ( &pthread_create )
        __dmb();
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
      else
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  j_CommandSelector<Player>::results((int)&v132, (GiveCommand *)((char *)v3 + 20), v5);
  if ( !j_Command::checkHasTargets<Player>((__int64 **)&v132, v4) )
    goto LABEL_203;
  ptr = 0;
  v130 = 0;
  v131 = 0;
  j_CommandSelectorResults<Player>::begin((int)&v127, &v132);
  j_CommandSelectorResults<Player>::end((int)&v125, (int)&v132);
  for ( i = &v127; ; j_SelectorIterator<Player>::operator++((int)i) )
    if ( !j_SelectorIterator<Player>::operator!=((int)i, (int)&v125) )
      v58 = 2;
      goto LABEL_145;
    v11 = (Entity *)j_SelectorIterator<Player>::operator*((int)i);
    if ( v137 )
      if ( *(_WORD *)(v137 + 18) == *(_WORD *)(Item::mFilledMap + 18) )
        break;
LABEL_29:
    v124 = 0;
    j_CommandUtils::createItemStacks((CommandUtils *)&v122, (const ItemInstance *)&v137, *((_DWORD *)v3 + 31), &v124);
    v20 = v123;
    for ( j = v122; v20 != j; j = (const ItemInstance *)((char *)j + 72) )
      j_InventoryTransactionManager::_createServerSideAction(
        (Entity *)((char *)v11 + 5152),
        (const ItemInstance *)&ItemInstance::EMPTY_ITEM,
        j);
      (*(void (__fastcall **)(Entity *, const ItemInstance *))(*(_DWORD *)v11 + 660))(v11, j);
    sub_21E94B4((void **)&v121, "commands.give.successRecipient");
    j_ItemInstance::getName((ItemInstance *)&v116, (int)&v137);
    j_Util::toString<int,(void *)0,(void *)0>((void **)&v117, v124);
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v118 = j_operator new(8u);
    v120 = (char *)v118 + 8;
    v119 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v116,
                     (int)&v118,
                     (int)v118);
    j_CommandUtils::displayLocalizableMessage(1, v11, (int)&v121, (int)&v118, 0);
    v22 = *(_QWORD *)&v118;
    if ( v118 != v119 )
      do
        v25 = (int *)(*(_DWORD *)v22 - 12);
        if ( v25 != &dword_28898C0 )
          v23 = (unsigned int *)(*(_DWORD *)v22 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        LODWORD(v22) = v22 + 4;
      while ( (_DWORD)v22 != HIDWORD(v22) );
      LODWORD(v22) = v118;
    if ( (_DWORD)v22 )
      j_operator delete((void *)v22);
    v26 = (void *)(v117 - 12);
    if ( (int *)(v117 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v117 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v116 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v121 - 12);
    if ( (int *)(v121 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v121 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    j_CommandOutput::set<int>((int)v4, "itemAmount", v124);
    sub_21E94B4((void **)&v115, "playerName");
    j_CommandOutput::addToResultList((int)v4, (const char **)&v115, (int)v11);
    v29 = (void *)(v115 - 12);
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v115 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = (char *)v130;
    if ( (char *)v130 == v131 )
      v31 = ptr;
      v32 = 0;
      v33 = ((char *)v130 - (_BYTE *)ptr) >> 2;
      if ( !v33 )
        v33 = 1;
      v34 = v33 + (((char *)v130 - (_BYTE *)ptr) >> 2);
      v35 = v33 + (((char *)v130 - (_BYTE *)ptr) >> 2);
      if ( 0 != v34 >> 30 )
        v35 = 0x3FFFFFFF;
      if ( v34 < v33 )
      if ( v35 )
        if ( v35 >= 0x40000000 )
          sub_21E57F4();
        v32 = (char *)j_operator new(4 * v35);
        v30 = (char *)v130;
        v31 = ptr;
      v36 = (int)&v32[v30 - v31];
      *(_DWORD *)&v32[v30 - v31] = v11;
      if ( 0 != (v30 - v31) >> 2 )
        j___aeabi_memmove4_0((int)v32, (int)v31);
      v37 = (Entity **)(v36 + 4);
      if ( v31 )
        j_operator delete(v31);
      i = &v127;
      ptr = v32;
      v130 = v37;
      v131 = &v32[4 * v35];
    else
      *v130 = v11;
      ++v130;
    v38 = *(_QWORD *)&v122;
    if ( v122 != v123 )
        v39 = *(void **)(v38 + 52);
        if ( v39 )
          j_operator delete(v39);
        v40 = *(void **)(v38 + 36);
        if ( v40 )
          j_operator delete(v40);
        v41 = *(_DWORD *)(v38 + 8);
        if ( v41 )
          (*(void (**)(void))(*(_DWORD *)v41 + 4))();
        *(_DWORD *)(v38 + 8) = 0;
        LODWORD(v38) = v38 + 72;
      while ( HIDWORD(v38) != (_DWORD)v38 );
      LODWORD(v38) = v122;
    if ( (_DWORD)v38 )
      j_operator delete((void *)v38);
  if ( j_GiveCommand::createMapData(v11, (Player *)&v137, v4, v10) == 1 )
    v12 = (char *)v130;
      v13 = ptr;
      v14 = 0;
      v15 = ((char *)v130 - (_BYTE *)ptr) >> 2;
      if ( !v15 )
        v15 = 1;
      v16 = v15 + (((char *)v130 - (_BYTE *)ptr) >> 2);
      v17 = v15 + (((char *)v130 - (_BYTE *)ptr) >> 2);
      if ( 0 != v16 >> 30 )
        v17 = 0x3FFFFFFF;
      if ( v16 < v15 )
      if ( v17 )
        if ( v17 >= 0x40000000 )
        v14 = (char *)j_operator new(4 * v17);
        v12 = (char *)v130;
        v13 = ptr;
      v18 = (int)&v14[v12 - v13];
      *(_DWORD *)&v14[v12 - v13] = v11;
      if ( 0 != (v12 - v13) >> 2 )
        j___aeabi_memmove4_0((int)v14, (int)v13);
      v19 = (Entity **)(v18 + 4);
      if ( v13 )
        j_operator delete(v13);
      ptr = v14;
      v130 = v19;
      v131 = &v14[4 * v17];
    goto LABEL_29;
  v58 = 1;
LABEL_145:
  v61 = v126;
  if ( v126 )
    v62 = (unsigned int *)(v126 + 4);
    if ( &pthread_create )
      __dmb();
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 == 1 )
      v64 = (unsigned int *)(v61 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
  v66 = v128;
  if ( v128 )
    v67 = (unsigned int *)(v128 + 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 == 1 )
      v69 = (unsigned int *)(v66 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 8))(v66);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 12))(v66);
  if ( v58 == 2 )
    j_ItemInstance::getName((ItemInstance *)&v114, (int)&v137);
    j_CommandOutput::set<std::string>((int)v4, "itemName", &v114);
    v71 = (void *)(v114 - 12);
    if ( (int *)(v114 - 12) != &dword_28898C0 )
      v89 = (unsigned int *)(v114 - 4);
          v90 = __ldrex(v89);
        while ( __strex(v90 - 1, v89) );
        v90 = (*v89)--;
      if ( v90 <= 0 )
        j_j_j_j__ZdlPv_9(v71);
    j_ItemInstance::getDescriptionId((ItemInstance *)&v113, (int)&v137);
    sub_21E94B4((void **)&v112, "commands.give.success");
    v72 = v113;
    if ( *((_DWORD *)v113 - 1) >= 0 )
      sub_21E8010((const void **)&v113);
      v72 = v113;
    if ( *v72 == 37 )
      sub_21E8AF4((int *)&v105, (int *)&v113);
      v105 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v105, *((_DWORD *)v72 - 3) + 1);
      sub_21E7408((const void **)&v105, "%", 1u);
      sub_21E72F0((const void **)&v105, (const void **)&v113);
    j_CommandOutputParameter::CommandOutputParameter(&v106, (int *)&v105);
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v107, *((_DWORD *)v3 + 31));
    j_CommandOutputParameter::CommandOutputParameter((int)&v108, (unsigned __int64 *)&ptr);
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v109 = (char *)j_operator new(0x18u);
    v111 = v109 + 24;
    v110 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v106,
                     (int)&v109,
                     (int)v109);
    j_CommandOutput::success((int)v4, &v112, (unsigned __int64 *)&v109);
    v74 = (int)v110;
    v73 = v109;
    if ( v109 != v110 )
        v77 = (int *)(*(_DWORD *)v73 - 12);
        if ( v77 != &dword_28898C0 )
          v75 = (unsigned int *)(*(_DWORD *)v73 - 4);
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
            v76 = (*v75)--;
          if ( v76 <= 0 )
            j_j_j_j__ZdlPv_9(v77);
        v73 += 8;
      while ( v73 != (char *)v74 );
      v73 = v109;
    if ( v73 )
      j_operator delete(v73);
    v78 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v108 - 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j__ZdlPv_9(v78);
    v79 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v93 = (unsigned int *)(v107 - 4);
          v94 = __ldrex(v93);
        while ( __strex(v94 - 1, v93) );
        v94 = (*v93)--;
      if ( v94 <= 0 )
        j_j_j_j__ZdlPv_9(v79);
    v80 = (void *)(v106 - 12);
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v106 - 4);
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v80);
    v81 = v105 - 12;
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v105 - 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 <= 0 )
        j_j_j_j__ZdlPv_9(v81);
    v82 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v112 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j__ZdlPv_9(v82);
    v83 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v101 = (unsigned int *)(v113 - 4);
          v102 = __ldrex(v101);
        while ( __strex(v102 - 1, v101) );
        v102 = (*v101)--;
      if ( v102 <= 0 )
        j_j_j_j__ZdlPv_9(v83);
  if ( ptr )
    j_operator delete(ptr);
LABEL_203:
  v84 = v133;
  if ( v133 )
    v85 = (unsigned int *)(v133 + 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 == 1 )
      v87 = (unsigned int *)(v84 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 8))(v84);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 12))(v84);
LABEL_217:
  if ( v140 )
    j_operator delete(v140);
  if ( v139 )
    j_operator delete(v139);
  result = v138;
  if ( v138 )
    result = (*(int (**)(void))(*(_DWORD *)v138 + 4))();
  return result;
}


Command *__fastcall GiveCommand::GiveCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A0AC;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  j_CommandItem::CommandItem((int)v1 + 116);
  *(_QWORD *)((char *)v1 + 124) = 1LL;
  j_Json::Value::Value((_DWORD *)v1 + 34, 0);
  return v1;
}


signed int __fastcall GiveCommand::createMapData(GiveCommand *this, Player *a2, ItemInstance *a3, CommandOutput *a4)
{
  Player *v4; // r5@1
  Entity *v5; // r7@1
  ItemInstance *v6; // r4@1
  int v7; // r0@1
  int v8; // r4@1
  signed int v9; // r2@1
  char v10; // r6@1
  signed int v11; // r8@1
  BlockSource *v12; // r11@6
  int v13; // r5@6
  Dimension *v14; // r0@7
  int v15; // r6@7
  int (__fastcall *v16)(int, signed int, char *, int *); // r9@7
  int v17; // r0@7
  void *v18; // r4@8
  void *v19; // r6@8
  int v20; // r0@10
  ItemInstance *v21; // r1@11
  MapItemSavedData *v22; // r2@11
  MapItemSavedData *v23; // r6@11
  char v24; // r7@13
  int v25; // r0@13
  int v26; // r4@14
  unsigned int *v27; // r1@15
  unsigned int v28; // r0@17
  unsigned int *v29; // r2@19
  signed int v30; // r1@21
  int *v31; // r0@27
  void *v32; // r0@32
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  void *v35; // r4@37
  void *v36; // r6@37
  unsigned int *v37; // r2@39
  signed int v38; // r1@41
  int *v39; // r0@47
  unsigned int *v41; // r5@56
  unsigned int v42; // r0@58
  MapItem *v43; // r0@63
  MapItemSavedData *v44; // r2@63
  ItemInstance *v45; // [sp+8h] [bp-A8h]@1
  unsigned __int8 v46; // [sp+Ch] [bp-A4h]@7
  EmptyMapItem *v47; // [sp+10h] [bp-A0h]@1
  signed int v48; // [sp+14h] [bp-9Ch]@6
  Entity *v49; // [sp+18h] [bp-98h]@7
  char v50; // [sp+1Ch] [bp-94h]@14
  int v51; // [sp+20h] [bp-90h]@14
  char v52; // [sp+24h] [bp-8Ch]@13
  int v53; // [sp+28h] [bp-88h]@13
  int v54; // [sp+2Ch] [bp-84h]@13
  signed int v55[3]; // [sp+30h] [bp-80h]@11
  int v56; // [sp+3Ch] [bp-74h]@10
  int v57; // [sp+40h] [bp-70h]@10
  int v58; // [sp+44h] [bp-6Ch]@10
  __int64 v59; // [sp+48h] [bp-68h]@8
  int v60; // [sp+50h] [bp-60h]@8
  int v61; // [sp+58h] [bp-58h]@8
  char v62; // [sp+5Ch] [bp-54h]@7
  int v63; // [sp+68h] [bp-48h]@6
  int v64; // [sp+6Ch] [bp-44h]@6
  int v65; // [sp+70h] [bp-40h]@6
  __int64 v66; // [sp+74h] [bp-3Ch]@37
  int v67; // [sp+7Ch] [bp-34h]@37
  int v68; // [sp+84h] [bp-2Ch]@37

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = j_ItemInstance::getAuxValue(a2);
  v45 = v6;
  v8 = 0;
  v47 = v4;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  switch ( v7 )
  {
    case 0:
    case 1:
      v9 = 0;
      v8 = 0;
      v10 = 0;
      v11 = 0;
      goto LABEL_6;
    case 4:
      v11 = 8;
      v10 = 14;
      goto LABEL_5;
    case 3:
      v11 = 4;
      v10 = 15;
LABEL_5:
      v8 = 2;
      v9 = 1;
    case 2:
LABEL_6:
      v48 = v9;
      v12 = (BlockSource *)j_Entity::getRegion(v5);
      v13 = j_BlockSource::getLevel(v12);
      v63 = 0;
      v64 = 0;
      v65 = 0;
      if ( !(_BYTE)v11 )
      {
        v46 = v10;
        v49 = v5;
        v20 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5);
        j_BlockPos::BlockPos((int)&v56, v20);
        v63 = v56;
        v64 = v57;
        v65 = v58;
        goto LABEL_11;
      }
      v46 = v10;
      v14 = (Dimension *)j_Entity::getDimension(v5);
      v15 = j_Dimension::getWorldGenerator(v14);
      v49 = v5;
      v16 = *(int (__fastcall **)(int, signed int, char *, int *))(*(_DWORD *)v15 + 12);
      v17 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5);
      j_BlockPos::BlockPos((int)&v62, v17);
      if ( v16(v15, v11, &v62, &v63) )
LABEL_11:
        v55[0] = -1;
        v55[1] = -1;
        v23 = j_Level::createMapSavedData(v13, (unsigned __int64 *)v55);
        if ( v48 == 1 )
          j_EmptyMapItem::addPlayerMarker(v47, v21);
        j_MapItem::setItemInstanceInfo(v47, v23, v22);
        j_MapItemSavedData::setScale(v23, v8);
        j_Vec3::Vec3((int)&v52, (int)&v63);
        v24 = *((_BYTE *)v23 + 36);
        v25 = j_BlockSource::getDimensionId(v12);
        j_MapItemSavedData::setOrigin((int)v23, *(float *)&v52, v53, v54, v24, v25);
        if ( (_BYTE)v11 )
        {
          j_MapItemSavedData::addTrackedMapEntity((int)&v50, (int)v23, (int)&v63, v12, v46);
          v26 = v51;
          if ( v51 )
          {
            v27 = (unsigned int *)(v51 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 == 1 )
              v41 = (unsigned int *)(v26 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v42 = __ldrex(v41);
                while ( __strex(v42 - 1, v41) );
              }
              else
                v42 = (*v41)--;
              if ( v42 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
          }
          j_MapItemSavedData::enableUnlimitedTracking(v23);
          *((_BYTE *)v23 + 17) = 1;
          v43 = (MapItem *)j_Entity::getDimension(v49);
          j_MapItem::renderBiomePreviewMap(v43, (Dimension *)v23, v44);
        }
        j_MapItemSavedData::setDirty(v23);
        return 1;
      sub_21E94B4((void **)&v61, "commands.give.map.featureNotFound");
      v59 = 0LL;
      v60 = 0;
      j_CommandOutput::error(v45, &v61, (unsigned __int64 *)&v59);
      v19 = (void *)HIDWORD(v59);
      v18 = (void *)v59;
      if ( (_DWORD)v59 != HIDWORD(v59) )
        do
          v31 = (int *)(*(_DWORD *)v18 - 12);
          if ( v31 != &dword_28898C0 )
            v29 = (unsigned int *)(*(_DWORD *)v18 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
          v18 = (char *)v18 + 8;
        while ( v18 != v19 );
        v18 = (void *)v59;
      if ( v18 )
        j_operator delete(v18);
      v32 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v61 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
LABEL_69:
          v34 = (*v33)--;
LABEL_70:
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      return 0;
    default:
      sub_21E94B4((void **)&v68, "commands.give.map.invalidData");
      v66 = 0LL;
      v67 = 0;
      j_CommandOutput::error(0, &v68, (unsigned __int64 *)&v66);
      v36 = (void *)HIDWORD(v66);
      v35 = (void *)v66;
      if ( (_DWORD)v66 != HIDWORD(v66) )
          v39 = (int *)(*(_DWORD *)v35 - 12);
          if ( v39 != &dword_28898C0 )
            v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j__ZdlPv_9(v39);
          v35 = (char *)v35 + 8;
        while ( v35 != v36 );
        v35 = (void *)v66;
      if ( v35 )
        j_operator delete(v35);
      v32 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) == &dword_28898C0 )
        return 0;
      v33 = (unsigned int *)(v68 - 4);
      if ( !&pthread_create )
        goto LABEL_69;
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      goto LABEL_70;
  }
}


void __fastcall GiveCommand::setup(GiveCommand *this, CommandRegistry *a2)
{
  GiveCommand *v2; // r10@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  char v7; // r0@8
  char v8; // r0@11
  char v9; // r0@14
  int v10; // r0@17
  void *v11; // r0@17
  void *v12; // r0@18
  void *v13; // r0@19
  void *v14; // r0@20
  void *v15; // r0@21
  int v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  char v28; // [sp+1Ch] [bp-10Ch]@17
  int v29; // [sp+28h] [bp-100h]@17
  char v30; // [sp+44h] [bp-E4h]@14
  int v31; // [sp+50h] [bp-D8h]@18
  char v32; // [sp+6Ch] [bp-BCh]@11
  int v33; // [sp+78h] [bp-B0h]@19
  char v34; // [sp+94h] [bp-94h]@8
  int v35; // [sp+A0h] [bp-88h]@20
  char v36; // [sp+BCh] [bp-6Ch]@5
  int v37; // [sp+C8h] [bp-60h]@21
  __int64 v38; // [sp+E4h] [bp-44h]@2
  int v39; // [sp+F0h] [bp-38h]@1
  __int16 v40; // [sp+F4h] [bp-34h]@5
  unsigned __int16 v41; // [sp+F8h] [bp-30h]@8
  __int16 v42; // [sp+FCh] [bp-2Ch]@11
  __int16 v43; // [sp+100h] [bp-28h]@14
  __int16 v44; // [sp+104h] [bp-24h]@17

  v2 = this;
  sub_21E94B4((void **)&v39, "give");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v39, "commands.give.description", 1, 0, 0);
  v4 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v16 = v39 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v17 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v17 - 1;
      }
      while ( __strex(v17 - 1, (unsigned int *)v3) );
    }
    else
      v17 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v38, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v40 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v36,
    &v40,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "player",
    0,
    20,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id) )
    type_id<CommandRegistry,CommandItem>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id);
  v41 = type_id<CommandRegistry,CommandItem>(void)::id[0];
    (int)&v34,
    &v41,
    (unsigned int)CommandRegistry::parse<CommandItem>,
    "itemName",
    116,
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v42 = type_id<CommandRegistry,int>(void)::id;
    (int)&v32,
    &v42,
    (unsigned int)CommandRegistry::parse<int>,
    "amount",
    124,
    1,
  v8 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v8 & 1)
  v43 = type_id<CommandRegistry,int>(void)::id;
    (int)&v30,
    &v43,
    "data",
    128,
  v9 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id;
  if ( !(v9 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id) )
    type_id<CommandRegistry,Json::Value>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id);
  v44 = type_id<CommandRegistry,Json::Value>(void)::id;
  v10 = j_CommandParameterData::CommandParameterData(
          (int)&v28,
          &v44,
          (unsigned int)CommandRegistry::parse<Json::Value>,
          "components",
          0,
          136,
          1,
          -1);
  j_CommandRegistry::registerOverload<GiveCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "give",
    v38,
    v10);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v33 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


void __fastcall GiveCommand::setup(GiveCommand *this, CommandRegistry *a2)
{
  GiveCommand::setup(this, a2);
}


int __fastcall GiveCommand::~GiveCommand(GiveCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A0AC;
  v2 = (GiveCommand *)((char *)this + 20);
  j_Json::Value::~Value((GiveCommand *)((char *)this + 136));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall GiveCommand::~GiveCommand(GiveCommand *this)
{
  GiveCommand::~GiveCommand(this);
}


void __fastcall GiveCommand::~GiveCommand(GiveCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A0AC;
  v2 = (GiveCommand *)((char *)this + 20);
  j_Json::Value::~Value((GiveCommand *)((char *)this + 136));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
