

int __fastcall EnchantingContainerManagerController::shouldBookBeOpen(EnchantingContainerManagerController *this)
{
  int v1; // r5@0
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r7@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r6@7
  EnchantingContainerManagerModel *v8; // r0@8
  unsigned int v9; // r0@12
  unsigned int *v11; // r7@18
  unsigned int v12; // r0@20

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = 0;
          if ( *v4 )
          {
            v8 = (EnchantingContainerManagerModel *)*((_DWORD *)this + 16);
            if ( v8 )
            {
              v1 = EnchantingContainerManagerModel::getShouldBookBeOpen(v8);
              v7 = 1;
            }
          }
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v4);
            while ( __strex(v9 - 1, v4) );
          else
            v9 = (*v4)--;
          if ( v9 == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return v1 & v7;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 0;
  return v1 & v7;
}


int __fastcall EnchantingContainerManagerController::getOutputItemId(EnchantingContainerManagerController *this)
{
  return EnchantingContainerManagerController::getInputItemId(this) | 0x8000;
}


void **__fastcall EnchantingContainerManagerController::getHoverText(EnchantingContainerManagerController *this, int a2, int a3)
{
  EnchantingContainerManagerModel *v3; // r7@0
  int v4; // r5@1
  signed int v5; // r6@1
  int v6; // r8@1
  void **v7; // r11@1
  unsigned int v8; // r0@2
  unsigned int *v9; // r9@2
  unsigned int v10; // r1@5
  unsigned int v11; // r2@6
  signed int v12; // r4@7
  bool v13; // zf@7
  char *v14; // r0@10
  char *v15; // r4@10
  void **result; // r0@10
  int v17; // r10@11
  char *v18; // r4@13
  void *v19; // r0@13
  __int64 v20; // r2@16
  void *v21; // r0@16
  char *v22; // r0@17
  void *v23; // r0@18
  unsigned int *v24; // r2@19
  signed int v25; // r1@21
  signed int v26; // r4@23
  int v27; // r0@24
  int *v28; // r2@24
  __int64 v29; // r2@27
  void *v30; // r0@27
  char *v31; // r0@28
  void *v32; // r0@29
  void *v33; // r0@30
  __int64 v34; // r2@31
  void *v35; // r0@31
  char *v36; // r0@32
  __int64 v37; // r2@38
  void *v38; // r0@38
  char *v39; // r0@39
  void *v40; // r0@40
  void *v41; // r0@41
  __int64 v42; // r2@42
  void *v43; // r0@42
  char *v44; // r0@43
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  unsigned int *v47; // r2@57
  signed int v48; // r1@59
  unsigned int *v49; // r2@61
  signed int v50; // r1@63
  void **v51; // r0@69
  void *v52; // r0@69
  unsigned int *v53; // r5@80
  unsigned int *v54; // r2@90
  signed int v55; // r1@92
  unsigned int *v56; // r2@98
  signed int v57; // r1@100
  unsigned int *v58; // r2@102
  signed int v59; // r1@104
  unsigned int *v60; // r2@106
  signed int v61; // r1@108
  unsigned int *v62; // r2@110
  signed int v63; // r1@112
  unsigned int *v64; // r2@114
  signed int v65; // r1@116
  unsigned int *v66; // r2@118
  signed int v67; // r1@120
  unsigned int *v68; // r2@130
  signed int v69; // r1@132
  unsigned int *v70; // r2@134
  signed int v71; // r1@136
  unsigned int *v72; // r2@138
  signed int v73; // r1@140
  unsigned int *v74; // r2@142
  signed int v75; // r1@144
  unsigned int *v76; // r2@146
  signed int v77; // r1@148
  unsigned int *v78; // r2@150
  signed int v79; // r1@152
  int v80; // [sp+Ch] [bp-13Ch]@31
  char *v81; // [sp+10h] [bp-138h]@31
  int v82; // [sp+14h] [bp-134h]@31
  int v83; // [sp+18h] [bp-130h]@30
  int v84; // [sp+20h] [bp-128h]@27
  char *v85; // [sp+24h] [bp-124h]@27
  int v86; // [sp+28h] [bp-120h]@27
  int v87; // [sp+30h] [bp-118h]@42
  char *v88; // [sp+34h] [bp-114h]@42
  int v89; // [sp+38h] [bp-110h]@42
  int v90; // [sp+3Ch] [bp-10Ch]@41
  int v91; // [sp+44h] [bp-104h]@38
  char *v92; // [sp+48h] [bp-100h]@38
  int v93; // [sp+4Ch] [bp-FCh]@38
  int v94; // [sp+54h] [bp-F4h]@16
  char *v95; // [sp+58h] [bp-F0h]@16
  int v96; // [sp+5Ch] [bp-ECh]@16
  int v97; // [sp+60h] [bp-E8h]@13
  void **v98; // [sp+64h] [bp-E4h]@11
  int v99; // [sp+68h] [bp-E0h]@70
  void **v100; // [sp+6Ch] [bp-DCh]@13
  void **v101; // [sp+70h] [bp-D8h]@68
  int v102; // [sp+8Ch] [bp-BCh]@70
  int v103; // [sp+94h] [bp-B4h]@69
  int v104; // [sp+98h] [bp-B0h]@70

  v4 = a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 68);
  v7 = (void **)this;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 4);
    v9 = (unsigned int *)(v6 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v8 )
          return sub_21E94B4(v7, (const char *)&unk_257BC67);
        __dmb();
        v10 = __ldrex(v9);
        if ( v10 == v8 )
          break;
        __clrex();
        v8 = v10;
      }
      v11 = __strex(v8 + 1, v9);
      v8 = v10;
    }
    while ( v11 );
    __dmb();
    v12 = 0;
    v13 = *v9 == 0;
    if ( *v9 )
      v3 = *(EnchantingContainerManagerModel **)(v4 + 64);
      v13 = v3 == 0;
    if ( v13 )
LABEL_74:
      if ( &pthread_create )
        do
          result = (void **)__ldrex(v9);
        while ( __strex((unsigned int)result - 1, v9) );
      else
        result = (void **)(*v9)--;
      if ( result == (void **)1 )
        v53 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (void **)__ldrex(v53);
          while ( __strex((unsigned int)result - 1, v53) );
        }
        else
          result = (void **)(*v53)--;
        if ( result == (void **)1 )
          result = (void **)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
LABEL_87:
      if ( v12 )
        return result;
      return sub_21E94B4(v7, (const char *)&unk_257BC67);
    v14 = EnchantingContainerManagerModel::getEnchants(v3);
    v15 = v14;
    result = (void **)(-1171354717 * ((signed int)((*(_QWORD *)v14 >> 32) - *(_QWORD *)v14) >> 2));
    if ( (signed int)result <= v5 )
      goto LABEL_72;
    sub_21D103C((int)&v98, 24);
    v17 = *(_DWORD *)v15;
    if ( ItemEnchants::count((ItemEnchants *)(*(_DWORD *)v15 + 44 * v5 + 4)) < 1 || *(_DWORD *)(v17 + 44 * v5) < 0 )
      v26 = 0;
LABEL_69:
      v51 = off_26D3F84;
      v98 = off_26D3F60;
      *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v98) = off_26D3F80[0];
      v100 = v51;
      v101 = &off_27734E8;
      v52 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v103 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v101 = &off_26D40A8;
      sub_21C802C((unsigned int **)&v102);
      v98 = (void **)off_26D3F68;
      *(void ***)((char *)&v98 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
      v99 = 0;
      result = (void **)sub_21B6560(&v104);
      if ( v26 )
        v12 = 1;
        goto LABEL_73;
LABEL_72:
      v12 = 0;
LABEL_73:
      if ( !v6 )
        goto LABEL_87;
      goto LABEL_74;
    EnchantingContainerManagerController::_getEnchantHint((EnchantingContainerManagerController *)&v97, v4, v5);
    v18 = (char *)&v100;
    sub_21CBF38((char *)&v100, v97, *(_DWORD *)(v97 - 12));
    v19 = (void *)(v97 - 12);
    if ( (int *)(v97 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v97 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v18 = (char *)&v100;
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    if ( ContainerManagerModel::isCreativeMode(v3) )
LABEL_68:
      sub_21CBF38(v18, dword_27F9A24, *(_DWORD *)(dword_27F9A24 - 12));
      sub_21CFED8((int *)v7, (int)&v101);
      v26 = 1;
      goto LABEL_69;
    sub_21CBF38(v18, (int)"\n\n", 2);
    if ( EnchantingContainerManagerController::getStatusForOption((EnchantingContainerManagerController *)v4, v5) == 2 )
      sub_21CBF38(v18, dword_27F9A08, *(_DWORD *)(dword_27F9A08 - 12));
      sub_21E94B4((void **)&v94, "container.enchant.levelrequirement");
      I18n::get((int *)&v95, (int **)&v94);
      LODWORD(v20) = *(_DWORD *)(v17 + 44 * v5);
      Util::format((Util *)&v96, v95, v20);
      sub_21CBF38(v18, v96, *(_DWORD *)(v96 - 12));
      v21 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v96 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = v95 - 12;
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v95 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) == &dword_28898C0 )
        goto LABEL_68;
      v24 = (unsigned int *)(v94 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        goto LABEL_66;
LABEL_65:
      v25 = (*v24)--;
      goto LABEL_66;
    v27 = EnchantingContainerManagerModel::getLapisCount(v3);
    v28 = (int *)&unk_27F99F4;
    if ( v27 <= v5 )
      v28 = &dword_27F9A08;
    sub_21CBF38(v18, *v28, *(_DWORD *)(*v28 - 12));
    if ( v5 )
      sub_21E94B4((void **)&v84, "container.enchant.lapis.many");
      I18n::get((int *)&v85, (int **)&v84);
      LODWORD(v29) = v5 + 1;
      Util::format((Util *)&v86, v85, v29);
      sub_21CBF38(v18, v86, *(_DWORD *)(v86 - 12));
      v30 = (void *)(v86 - 12);
      if ( (int *)(v86 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v86 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v31 = v85 - 12;
      if ( (int *)(v85 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v85 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v32 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v84 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      sub_21E8AF4(&v83, &Util::NEW_LINE);
      sub_21E72F0((const void **)&v83, (const void **)&unk_27F99F4);
      sub_21CBF38(v18, v83, *(_DWORD *)(v83 - 12));
      v33 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v83 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      sub_21E94B4((void **)&v80, "container.enchant.level.many");
      I18n::get((int *)&v81, (int **)&v80);
      LODWORD(v34) = v5 + 1;
      Util::format((Util *)&v82, v81, v34);
      sub_21CBF38(v18, v82, *(_DWORD *)(v82 - 12));
      v35 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v82 - 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      v36 = v81 - 12;
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v66 = (unsigned int *)(v81 - 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v23 = (void *)(v80 - 12);
      if ( (int *)(v80 - 12) == &dword_28898C0 )
      v24 = (unsigned int *)(v80 - 4);
      if ( !&pthread_create )
        goto LABEL_65;
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      sub_21E94B4((void **)&v91, "container.enchant.lapis.one");
      I18n::get((int *)&v92, (int **)&v91);
      LODWORD(v37) = 1;
      Util::format((Util *)&v93, v92, v37);
      sub_21CBF38(v18, v93, *(_DWORD *)(v93 - 12));
      v38 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v93 - 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v39 = v92 - 12;
      if ( (int *)(v92 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v92 - 4);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = (void *)(v91 - 12);
      if ( (int *)(v91 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v91 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      sub_21E8AF4(&v90, &Util::NEW_LINE);
      sub_21E72F0((const void **)&v90, (const void **)&unk_27F99F4);
      sub_21CBF38(v18, v90, *(_DWORD *)(v90 - 12));
      v41 = (void *)(v90 - 12);
      if ( (int *)(v90 - 12) != &dword_28898C0 )
        v74 = (unsigned int *)(v90 - 4);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      sub_21E94B4((void **)&v87, "container.enchant.level.one");
      I18n::get((int *)&v88, (int **)&v87);
      LODWORD(v42) = 1;
      Util::format((Util *)&v89, v88, v42);
      sub_21CBF38(v18, v89, *(_DWORD *)(v89 - 12));
      v43 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v89 - 4);
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v44 = v88 - 12;
      if ( (int *)(v88 - 12) != &dword_28898C0 )
        v78 = (unsigned int *)(v88 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v44);
      v23 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) == &dword_28898C0 )
      v24 = (unsigned int *)(v87 - 4);
LABEL_66:
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
    goto LABEL_68;
  }
  return sub_21E94B4(v7, (const char *)&unk_257BC67);
}


char *__fastcall EnchantingContainerManagerController::_getEnchantHint(EnchantingContainerManagerController *this, int a2, int a3)
{
  const void **v3; // r9@1
  int v4; // r7@1
  int v5; // r6@1
  char *result; // r0@1
  int v7; // r10@1
  unsigned int *v8; // r5@2
  char *v9; // r1@5
  unsigned int v10; // r2@6
  EnchantingContainerManagerModel *v11; // r0@7
  bool v12; // zf@7
  int v13; // r4@10
  int v14; // r0@10
  const char *v15; // r6@10
  __int64 v16; // r2@10
  void *v17; // r0@10
  void *v18; // r6@11
  void *v19; // r11@11
  char *v20; // r1@12
  int (**v21)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@12
  unsigned int *v22; // r2@13
  signed int v23; // r7@15
  char *v24; // r4@19
  int (**v25)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@19
  int *v26; // r0@20
  char *v27; // r0@25
  void *v28; // r0@26
  unsigned int *v29; // r4@34
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  _DWORD *v36; // [sp+4h] [bp-44h]@10
  _DWORD *v37; // [sp+8h] [bp-40h]@11
  int v38; // [sp+14h] [bp-34h]@10
  const char *v39; // [sp+18h] [bp-30h]@10
  int v40; // [sp+1Ch] [bp-2Ch]@10
  char v41; // [sp+20h] [bp-28h]@12

  v3 = (const void **)this;
  v4 = a2;
  v5 = a3;
  result = (char *)sub_21E8AF4((int *)this, (int *)&unk_27F9A14);
  v7 = *(_DWORD *)(v4 + 68);
  if ( v7 )
  {
    result = *(char **)(v7 + 4);
    v8 = (unsigned int *)(v7 + 4);
    while ( result )
    {
      __dmb();
      v9 = (char *)__ldrex(v8);
      if ( v9 == result )
      {
        v10 = __strex((unsigned int)(result + 1), v8);
        result = v9;
        if ( !v10 )
        {
          __dmb();
          v11 = (EnchantingContainerManagerModel *)*v8;
          v12 = *v8 == 0;
          if ( *v8 )
          {
            v11 = *(EnchantingContainerManagerModel **)(v4 + 64);
            v12 = v11 == 0;
          }
          if ( v12 )
            goto LABEL_68;
          v13 = *(_DWORD *)EnchantingContainerManagerModel::getEnchants(v11);
          sub_21E72F0(v3, (const void **)&unk_27F9A20);
          sub_21E94B4((void **)&v38, "container.enchant.clue");
          I18n::get((int *)&v39, (int **)&v38);
          v14 = v13 + 44 * v5;
          v15 = v39;
          ItemEnchants::getEnchantNames((ItemEnchants *)&v36, v14 + 4);
          LODWORD(v16) = *v36;
          Util::format((Util *)&v40, v15, v16);
          sub_21E72F0(v3, (const void **)&v40);
          v17 = (void *)(v40 - 12);
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v30 = (unsigned int *)(v40 - 4);
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
              j_j_j_j__ZdlPv_9(v17);
          v19 = v37;
          v18 = v36;
          if ( v36 != v37 )
            v20 = &v41;
            v21 = &pthread_create;
            do
              v26 = (int *)(*(_DWORD *)v18 - 12);
              if ( v26 != &dword_28898C0 )
              {
                v22 = (unsigned int *)(*(_DWORD *)v18 - 4);
                if ( v21 )
                {
                  __dmb();
                  do
                    v23 = __ldrex(v22);
                  while ( __strex(v23 - 1, v22) );
                }
                else
                  v23 = (*v22)--;
                if ( v23 <= 0 )
                  v24 = v20;
                  v25 = v21;
                  j_j_j_j__ZdlPv_9(v26);
                  v21 = v25;
                  v20 = v24;
              }
              v18 = (char *)v18 + 4;
            while ( v18 != v19 );
            v18 = v36;
          if ( v18 )
            operator delete(v18);
          v27 = (char *)(v39 - 12);
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v39 - 4);
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          v28 = (void *)(v38 - 12);
          if ( (int *)(v38 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v38 - 4);
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
              v35 = (*v34)--;
            if ( v35 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          result = (char *)sub_21E72F0(v3, (const void **)&dword_27F9A24);
          if ( v7 )
LABEL_68:
                result = (char *)__ldrex(v8);
              while ( __strex((unsigned int)(result - 1), v8) );
              result = (char *)(*v8)--;
            if ( result == (char *)1 )
              v29 = (unsigned int *)(v7 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
              if ( &pthread_create )
                __dmb();
                do
                  result = (char *)__ldrex(v29);
                while ( __strex((unsigned int)(result - 1), v29) );
              else
                result = (char *)(*v29)--;
              if ( result == (char *)1 )
                result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


void __fastcall EnchantingContainerManagerController::~EnchantingContainerManagerController(EnchantingContainerManagerController *this)
{
  EnchantingContainerManagerController::~EnchantingContainerManagerController(this);
}


unsigned int __fastcall EnchantingContainerManagerController::EnchantingContainerManagerController(unsigned int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r6@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  unsigned int v7; // r1@8
  unsigned int *v8; // r0@8
  unsigned int v9; // r2@11
  unsigned int v10; // r3@12
  unsigned int v11; // r1@13
  signed int v12; // r0@13
  int v13; // r1@17
  unsigned int *v14; // r1@20
  unsigned int v15; // r0@22
  unsigned int *v16; // r7@26
  unsigned int v17; // r0@28
  int v18; // r0@33
  unsigned int *v19; // r2@34
  unsigned int v20; // r1@36
  int v21; // r0@41
  unsigned int *v22; // r0@42
  unsigned int v23; // r1@44
  int v25; // [sp+4h] [bp-1Ch]@19
  int v26; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v26 = v4;
  if ( !v4 )
    goto LABEL_16;
  v5 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
  {
    __dmb();
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 + 1, v5) );
    v4 = *(_DWORD *)(v2 + 4);
    if ( !v4 )
      goto LABEL_16;
  }
  else
    ++*v5;
  v7 = *(_DWORD *)(v4 + 4);
  v8 = (unsigned int *)(v4 + 4);
  while ( v7 )
    v9 = __ldrex(v8);
    if ( v9 == v7 )
    {
      v10 = __strex(v7 + 1, v8);
      v7 = v9;
      if ( !v10 )
      {
        __dmb();
        v11 = *v8;
        v12 = 0;
        if ( !v11 )
          v12 = 1;
        goto LABEL_17;
      }
    }
    else
      __clrex();
LABEL_16:
  v12 = 1;
  v4 = 0;
LABEL_17:
  v13 = *(_DWORD *)v2;
  if ( v12 )
    v13 = 0;
  v25 = v13;
  if ( v4 )
    v14 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  ContainerManagerController::ContainerManagerController(COERCE_DOUBLE(__PAIR__(&v25, v3)));
  v18 = v26;
  if ( v26 )
    v19 = (unsigned int *)(v26 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v3 = &off_26ECDBC;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)v2;
  v21 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v3 + 68) = v21;
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  EnchantingContainerManagerController::_setupCallbacks((EnchantingContainerManagerController *)v3);
  return v3;
}


void __fastcall EnchantingContainerManagerController::~EnchantingContainerManagerController(EnchantingContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECDBC;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  ContainerManagerController::~ContainerManagerController(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


  if ( EnchantingContainerManagerController::getPlayerLevels(*(EnchantingContainerManagerController **)(**(_DWORD **)a2 + 628)) <= 0 )
{
    v3 = unk_27DB2C4;
    v4 = unk_27DB2C8;
    v5 = unk_27DB2CC;
    result = dword_27DB2D0;
  }
  else
  {
    v3 = unk_27DB2B4;
    v4 = unk_27DB2B8;
    v5 = unk_27DB2BC;
    result = dword_27DB2C0;
  *(_DWORD *)v2 = v3;
  *(_DWORD *)(v2 + 4) = v4;
  *(_DWORD *)(v2 + 8) = v5;
  *(_DWORD *)(v2 + 12) = result;
  return result;
}


int __fastcall EnchantingContainerManagerController::isTableValid(EnchantingContainerManagerController *this, float a2)
{
  signed int v2; // r5@0
  int v3; // r4@1
  unsigned int v4; // r2@2
  unsigned int *v5; // r7@2
  unsigned int v6; // r3@5
  unsigned int v7; // r6@6
  signed int v8; // r6@7
  EnchantingContainerManagerModel *v9; // r0@8
  unsigned int v10; // r0@12
  unsigned int *v12; // r7@18
  unsigned int v13; // r0@20

  v3 = *((_DWORD *)this + 17);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = 0;
          if ( *v5 )
          {
            v9 = (EnchantingContainerManagerModel *)*((_DWORD *)this + 16);
            if ( v9 )
            {
              v2 = EnchantingContainerManagerModel::isTableValid(v9, a2);
              v8 = 1;
            }
          }
          if ( &pthread_create )
            __dmb();
            do
              v10 = __ldrex(v5);
            while ( __strex(v10 - 1, v5) );
          else
            v10 = (*v5)--;
          if ( v10 == 1 )
            v12 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return v2 & v8;
        }
      }
      else
        __clrex();
    }
  }
  v8 = 0;
  return v2 & v8;
}


void __fastcall EnchantingContainerManagerController::getEnchantHint(EnchantingContainerManagerController *this, int a2, int a3)
{
  int *v3; // r8@1
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r4@1
  unsigned int v7; // r0@2
  unsigned int *v8; // r5@2
  unsigned int v9; // r1@5
  unsigned int v10; // r2@6
  EnchantingContainerManagerModel *v11; // r0@7
  bool v12; // zf@7
  __int64 v13; // kr00_8@10
  void *v14; // r0@13
  unsigned int v15; // r0@16
  unsigned int *v16; // r5@20
  unsigned int v17; // r0@22
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  int v20; // [sp+4h] [bp-2Ch]@13

  v3 = (int *)this;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)this = &unk_28898CC;
  v6 = *(_DWORD *)(a2 + 68);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    v8 = (unsigned int *)(v6 + 4);
    while ( v7 )
    {
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
      {
        v10 = __strex(v7 + 1, v8);
        v7 = v9;
        if ( !v10 )
        {
          __dmb();
          v11 = (EnchantingContainerManagerModel *)*v8;
          v12 = *v8 == 0;
          if ( *v8 )
          {
            v11 = *(EnchantingContainerManagerModel **)(v4 + 64);
            v12 = v11 == 0;
          }
          if ( v12 )
            goto LABEL_39;
          v13 = *(_QWORD *)EnchantingContainerManagerModel::getEnchants(v11);
          if ( -1171354717 * ((HIDWORD(v13) - (signed int)v13) >> 2) <= v5 )
          if ( ItemEnchants::count((ItemEnchants *)(v13 + 44 * v5 + 4)) < 1 )
          if ( *(_DWORD *)(v13 + 44 * v5) < 0 )
          EnchantingContainerManagerController::_getEnchantHint((EnchantingContainerManagerController *)&v20, v4, v5);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            v3,
            &v20);
          v14 = (void *)(v20 - 12);
          if ( (int *)(v20 - 12) == &dword_28898C0 )
          v18 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
          if ( v6 )
LABEL_39:
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v8);
              while ( __strex(v15 - 1, v8) );
            }
            else
              v15 = (*v8)--;
            if ( v15 == 1 )
              v16 = (unsigned int *)(v6 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
              }
              else
                v17 = (*v16)--;
              if ( v17 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


int __fastcall EnchantingContainerManagerController::enchantResult(int result, int a2)
{
  EnchantingContainerManagerModel *v2; // r8@0
  int v3; // r6@1
  int v4; // r4@3
  unsigned int v5; // r1@4
  unsigned int *v6; // r7@4
  unsigned int v7; // r2@7
  unsigned int v8; // r3@8
  bool v9; // zf@9
  __int64 v10; // kr00_8@12
  int v11; // r0@13
  const ItemEnchants *v12; // r2@13
  Player *v13; // r9@13
  int v14; // r5@13
  Level *v15; // r0@13
  int v16; // r0@13
  int v17; // r9@13
  int v18; // r0@38
  int v19; // r5@38
  unsigned int *v20; // r5@81
  __int16 v21; // [sp+5h] [bp-36Bh]@0
  char v22; // [sp+7h] [bp-369h]@0
  int v23; // [sp+8h] [bp-368h]@38
  char v24; // [sp+Ch] [bp-364h]@38
  __int16 v25; // [sp+Dh] [bp-363h]@38
  char v26; // [sp+Fh] [bp-361h]@38
  int v27; // [sp+10h] [bp-360h]@38
  int v28; // [sp+14h] [bp-35Ch]@38
  int v29; // [sp+18h] [bp-358h]@38
  int v30; // [sp+20h] [bp-350h]@48
  void *v31; // [sp+3Ch] [bp-334h]@46
  void *v32; // [sp+4Ch] [bp-324h]@44
  int v33; // [sp+60h] [bp-310h]@38
  int v34; // [sp+68h] [bp-308h]@42
  void *v35; // [sp+84h] [bp-2ECh]@40
  void *v36; // [sp+94h] [bp-2DCh]@38
  char v37; // [sp+A8h] [bp-2C8h]@38
  int v38; // [sp+B0h] [bp-2C0h]@54
  void *v39; // [sp+CCh] [bp-2A4h]@52
  void *v40; // [sp+DCh] [bp-294h]@50
  char v41; // [sp+F0h] [bp-280h]@38
  int v42; // [sp+F8h] [bp-278h]@60
  void *v43; // [sp+114h] [bp-25Ch]@58
  void *v44; // [sp+124h] [bp-24Ch]@56
  __int16 v45; // [sp+13Dh] [bp-233h]@25
  char v46; // [sp+13Fh] [bp-231h]@25
  int v47; // [sp+140h] [bp-230h]@25
  char v48; // [sp+144h] [bp-22Ch]@25
  __int16 v49; // [sp+145h] [bp-22Bh]@25
  char v50; // [sp+147h] [bp-229h]@25
  int v51; // [sp+148h] [bp-228h]@25
  int v52; // [sp+14Ch] [bp-224h]@25
  int v53; // [sp+150h] [bp-220h]@25
  int v54; // [sp+158h] [bp-218h]@35
  void *v55; // [sp+174h] [bp-1FCh]@33
  void *v56; // [sp+184h] [bp-1ECh]@31
  int v57; // [sp+198h] [bp-1D8h]@25
  int v58; // [sp+1A0h] [bp-1D0h]@29
  void *v59; // [sp+1BCh] [bp-1B4h]@27
  void *v60; // [sp+1CCh] [bp-1A4h]@25
  __int16 v61; // [sp+1E5h] [bp-18Bh]@13
  char v62; // [sp+1E7h] [bp-189h]@13
  int v63; // [sp+1E8h] [bp-188h]@13
  char v64; // [sp+1ECh] [bp-184h]@13
  __int16 v65; // [sp+1EDh] [bp-183h]@13
  char v66; // [sp+1EFh] [bp-181h]@13
  int v67; // [sp+1F0h] [bp-180h]@13
  int v68; // [sp+1F4h] [bp-17Ch]@13
  int v69; // [sp+1F8h] [bp-178h]@13
  int v70; // [sp+200h] [bp-170h]@23
  void *v71; // [sp+21Ch] [bp-154h]@21
  void *v72; // [sp+22Ch] [bp-144h]@19
  int v73; // [sp+240h] [bp-130h]@13
  int v74; // [sp+248h] [bp-128h]@17
  void *v75; // [sp+264h] [bp-10Ch]@15
  void *ptr; // [sp+274h] [bp-FCh]@13
  char v77; // [sp+288h] [bp-E8h]@13
  void **v78; // [sp+290h] [bp-E0h]@13
  int v79; // [sp+294h] [bp-DCh]@13
  int v80; // [sp+298h] [bp-D8h]@13
  char v81; // [sp+29Ch] [bp-D4h]@13
  int v82; // [sp+2A0h] [bp-D0h]@13
  int v83; // [sp+2A4h] [bp-CCh]@13
  int v84; // [sp+2A8h] [bp-C8h]@13
  int v85; // [sp+2ACh] [bp-C4h]@13
  int v86; // [sp+2B0h] [bp-C0h]@13
  __int64 v87; // [sp+2B8h] [bp-B8h]@13
  char v88; // [sp+2C0h] [bp-B0h]@13
  int v89; // [sp+2C8h] [bp-A8h]@66
  void *v90; // [sp+2E4h] [bp-8Ch]@64
  void *v91; // [sp+2F4h] [bp-7Ch]@62
  char v92; // [sp+308h] [bp-68h]@13
  int v93; // [sp+310h] [bp-60h]@72
  void *v94; // [sp+32Ch] [bp-44h]@70
  void *v95; // [sp+33Ch] [bp-34h]@68

  v3 = a2;
  if ( a2 >= 0 && a2 <= 3 )
  {
    v4 = *(_DWORD *)(result + 68);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      v6 = (unsigned int *)(v4 + 4);
      while ( v5 )
      {
        __dmb();
        v7 = __ldrex(v6);
        if ( v7 == v5 )
        {
          v8 = __strex(v5 + 1, v6);
          v5 = v7;
          if ( !v8 )
          {
            __dmb();
            v9 = *v6 == 0;
            if ( *v6 )
            {
              v2 = *(EnchantingContainerManagerModel **)(result + 64);
              v9 = v2 == 0;
            }
            if ( v9 )
              goto LABEL_90;
            v10 = *(_QWORD *)EnchantingContainerManagerModel::getEnchants(v2);
            if ( -1171354717 * ((HIDWORD(v10) - (signed int)v10) >> 2) <= v3 )
            v11 = (*(int (__fastcall **)(EnchantingContainerManagerModel *, _DWORD))(*(_DWORD *)v2 + 32))(v2, 0);
            ItemInstance::ItemInstance((ItemInstance *)&v92, v11);
            ItemInstance::ItemInstance((ItemInstance *)&v88, (int)&v92);
            EnchantUtils::applyEnchant((EnchantUtils *)&v88, (ItemInstance *)(v10 + 44 * v3 + 4), v12);
            (*(void (__fastcall **)(EnchantingContainerManagerModel *, _DWORD, char *))(*(_DWORD *)v2 + 28))(
              v2,
              0,
              &v88);
            EnchantingContainerManagerModel::getNewEnchantmentSeed(v2);
            v13 = (Player *)ContainerManagerModel::getPlayer(v2);
            v14 = Player::getEnchantmentSeed(v13);
            Entity::getRuntimeID((Entity *)&v77, (int)v13);
            v79 = 2;
            v80 = 1;
            v81 = 0;
            v78 = &off_26DA670;
            v82 = 0;
            v83 = 0;
            v84 = 0;
            v85 = v14;
            v86 = 20;
            v87 = *(_QWORD *)&v77;
            v15 = (Level *)Entity::getLevel(v13);
            v16 = Level::getPacketSender(v15);
            (*(void (**)(void))(*(_DWORD *)v16 + 8))();
            EnchantingContainerManagerModel::setShouldBookBeOpen(v2, 0);
            EnchantingContainerManagerModel::recalculateOptions(v2);
            v63 = 99999;
            v64 = -17;
            v66 = v62;
            v65 = v61;
            v67 = 0;
            v68 = 0;
            ItemInstance::ItemInstance((ItemInstance *)&v69, (int)&ItemInstance::EMPTY_ITEM);
            ItemInstance::ItemInstance((ItemInstance *)&v73, (int)&v92);
            v17 = (int)v13 + 5152;
            InventoryTransactionManager::addAction(v17, (int)&v63);
            if ( ptr )
              operator delete(ptr);
            if ( v75 )
              operator delete(v75);
            if ( v74 )
              (*(void (**)(void))(*(_DWORD *)v74 + 4))();
            v74 = 0;
            if ( v72 )
              operator delete(v72);
            if ( v71 )
              operator delete(v71);
            if ( v70 )
              (*(void (**)(void))(*(_DWORD *)v70 + 4))();
            v47 = 99999;
            v48 = -17;
            v50 = v46;
            v70 = 0;
            v49 = v45;
            v51 = 0;
            v52 = 0;
            ItemInstance::ItemInstance((ItemInstance *)&v53, (int)&v88);
            ItemInstance::ItemInstance((ItemInstance *)&v57, (int)&ItemInstance::EMPTY_ITEM);
            InventoryTransactionManager::addAction(v17, (int)&v47);
            if ( v60 )
              operator delete(v60);
            if ( v59 )
              operator delete(v59);
            if ( v58 )
              (*(void (**)(void))(*(_DWORD *)v58 + 4))();
            v58 = 0;
            if ( v56 )
              operator delete(v56);
            if ( v55 )
              operator delete(v55);
            if ( v54 )
              (*(void (**)(void))(*(_DWORD *)v54 + 4))();
            v54 = 0;
            if ( !ContainerManagerModel::isCreativeMode(v2) )
              ContainerManagerModel::debitPlayerXP(v2, v3 + 1);
              v18 = (*(int (__fastcall **)(EnchantingContainerManagerModel *, signed int))(*(_DWORD *)v2 + 32))(v2, 1);
              ItemInstance::ItemInstance((ItemInstance *)&v41, v18);
              ItemInstance::ItemInstance((ItemInstance *)&v37, (int)&v41);
              ItemInstance::set((ItemInstance *)&v37, v3 + 1);
              v19 = ContainerManagerModel::getPlayer(v2);
              v23 = 99999;
              v24 = -17;
              v26 = v22;
              v25 = v21;
              v27 = 0;
              v28 = 0;
              ItemInstance::ItemInstance((ItemInstance *)&v29, (int)&ItemInstance::EMPTY_ITEM);
              ItemInstance::ItemInstance((ItemInstance *)&v33, (int)&v37);
              InventoryTransactionManager::addAction(v19 + 5152, (int)&v23);
              if ( v36 )
                operator delete(v36);
              if ( v35 )
                operator delete(v35);
              if ( v34 )
                (*(void (**)(void))(*(_DWORD *)v34 + 4))();
              v34 = 0;
              if ( v32 )
                operator delete(v32);
              if ( v31 )
                operator delete(v31);
              if ( v30 )
                (*(void (**)(void))(*(_DWORD *)v30 + 4))();
              v30 = 0;
              ItemInstance::remove((ItemInstance *)&v41, v3 + 1);
              (*(void (__fastcall **)(EnchantingContainerManagerModel *, signed int, char *))(*(_DWORD *)v2 + 28))(
                v2,
                1,
                &v41);
              if ( v40 )
                operator delete(v40);
              if ( v39 )
                operator delete(v39);
              if ( v38 )
                (*(void (**)(void))(*(_DWORD *)v38 + 4))();
              if ( v44 )
                operator delete(v44);
              if ( v43 )
                operator delete(v43);
              if ( v42 )
                (*(void (**)(void))(*(_DWORD *)v42 + 4))();
            if ( v91 )
              operator delete(v91);
            if ( v90 )
              operator delete(v90);
            if ( v89 )
              (*(void (**)(void))(*(_DWORD *)v89 + 4))();
            if ( v95 )
              operator delete(v95);
            if ( v94 )
              operator delete(v94);
            result = v93;
            if ( v93 )
              result = (*(int (**)(void))(*(_DWORD *)v93 + 4))();
            if ( v4 )
LABEL_90:
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = __ldrex(v6);
                while ( __strex(result - 1, v6) );
              }
              else
                result = (*v6)--;
              if ( result == 1 )
                v20 = (unsigned int *)(v4 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    result = __ldrex(v20);
                  while ( __strex(result - 1, v20) );
                }
                else
                  result = (*v20)--;
                if ( result == 1 )
                  result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
            return result;
          }
        }
        else
          __clrex();
      }
    }
  }
  return result;
}


char *__fastcall EnchantingContainerManagerController::_setupCallbacks(EnchantingContainerManagerController *this)
{
  EnchantingContainerManagerController *v1; // r8@1
  int v2; // r11@1
  int v3; // r0@1
  int v4; // r6@2
  int v5; // r4@2
  bool v6; // zf@3
  int v7; // r5@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int *v10; // r0@14
  int v11; // r6@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed int v16; // r1@20
  int v17; // r0@24
  int v18; // r7@24
  unsigned int *v19; // r2@27
  unsigned int v20; // r1@29
  _DWORD *v21; // r0@35
  __int64 v22; // r1@35
  unsigned int *v23; // r1@38
  unsigned int v24; // r0@40
  unsigned int *v25; // r4@44
  unsigned int v26; // r0@46
  int v27; // r11@51
  int v28; // r0@51
  int v29; // r6@52
  int v30; // r4@52
  bool v31; // zf@53
  int v32; // r5@56
  bool v33; // zf@59
  _DWORD *v34; // r0@63
  int *v35; // r0@64
  char *result; // r0@64
  int v37; // r5@64
  unsigned int v38; // r1@65
  unsigned int *v39; // r0@65
  unsigned int v40; // r2@68
  unsigned int v41; // r3@69
  signed int v42; // r1@70
  int v43; // r6@74
  unsigned int *v44; // r2@77
  unsigned int v45; // r1@79
  _DWORD *v46; // r0@85
  __int64 v47; // r1@85
  unsigned int *v48; // r1@88
  unsigned int *v49; // r4@94
  _DWORD *v50; // [sp+4h] [bp-54h]@85
  __int64 v51; // [sp+Ch] [bp-4Ch]@85
  int v52; // [sp+14h] [bp-44h]@64
  int v53; // [sp+18h] [bp-40h]@64
  _DWORD *v54; // [sp+1Ch] [bp-3Ch]@35
  __int64 v55; // [sp+24h] [bp-34h]@35
  int v56; // [sp+2Ch] [bp-2Ch]@14
  int v57; // [sp+30h] [bp-28h]@14

  v1 = this;
  v2 = 0x12u % dword_27F9A2C;
  v3 = *(_DWORD *)(dword_27F9A28 + 4 * (0x12u % dword_27F9A2C));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 18;
    if ( v5 == 18 )
      v6 = *(_DWORD *)(v4 + 4) == 18;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F9A2C == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 18;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9A28,
           v2,
           0x12u,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (unsigned __int64 *)((char *)v1 + 20),
                 (int **)(v3 + 8));
  ContainerController::getContainerModel((ContainerController *)&v56, *v10);
  v11 = v57;
  if ( v57 )
    v12 = *(_DWORD *)(v57 + 4);
    v13 = (unsigned int *)(v57 + 4);
    do
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_24;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_24:
    v17 = v57;
    v18 = v56;
    if ( v16 )
      v18 = 0;
    if ( v57 )
      v19 = (unsigned int *)(v57 + 8);
      if ( &pthread_create )
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    if ( v18 )
      v21 = operator new(4u);
      LODWORD(v22) = sub_168D63C;
      *v21 = v1;
      HIDWORD(v22) = sub_168D2BC;
      v54 = v21;
      v55 = v22;
      ContainerModel::registerOnContainerChangedCallback(v18, (int)&v54);
      if ( (_DWORD)v55 )
        ((void (*)(void))v55)();
    if ( v11 )
      v23 = (unsigned int *)(v11 + 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        v25 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        else
          v26 = (*v25)--;
        if ( v26 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v27 = 0x13u % dword_27F9A2C;
  v28 = *(_DWORD *)(dword_27F9A28 + 4 * (0x13u % dword_27F9A2C));
  if ( !v28 )
    goto LABEL_63;
  v29 = *(_DWORD *)v28;
  v30 = *(_DWORD *)(*(_DWORD *)v28 + 12);
    v31 = v30 == 19;
    if ( v30 == 19 )
      v31 = *(_DWORD *)(v29 + 4) == 19;
    if ( v31 )
    v32 = *(_DWORD *)v29;
    if ( *(_DWORD *)v29 )
      v30 = *(_DWORD *)(v32 + 12);
      v28 = v29;
      v29 = *(_DWORD *)v29;
      if ( *(_DWORD *)(v32 + 12) % (unsigned int)dword_27F9A2C == v27 )
  v33 = v28 == 0;
  if ( v28 )
    v28 = *(_DWORD *)v28;
    v33 = v28 == 0;
  if ( v33 )
LABEL_63:
    v34 = operator new(0x10u);
    *v34 = 0;
    v34[1] = 19;
    v34[2] = &unk_28898CC;
    v28 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27F9A28,
            v27,
            0x13u,
            (int)v34);
  v35 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (int **)(v28 + 8));
  result = (char *)ContainerController::getContainerModel((ContainerController *)&v52, *v35);
  v37 = v53;
  if ( v53 )
    v38 = *(_DWORD *)(v53 + 4);
    v39 = (unsigned int *)(v53 + 4);
        if ( !v38 )
          v42 = 1;
          v37 = 0;
          goto LABEL_74;
        v40 = __ldrex(v39);
        if ( v40 == v38 )
        v38 = v40;
      v41 = __strex(v38 + 1, v39);
      v38 = v40;
    while ( v41 );
    v42 = 0;
    if ( !*v39 )
      v42 = 1;
LABEL_74:
    result = (char *)v53;
    v43 = v52;
    if ( v42 )
      v43 = 0;
    if ( v53 )
      v44 = (unsigned int *)(v53 + 8);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        result = (char *)(*(int (**)(void))(*(_DWORD *)result + 12))();
    if ( v43 )
      v46 = operator new(4u);
      LODWORD(v47) = sub_168D99C;
      *v46 = v1;
      HIDWORD(v47) = sub_168D674;
      v50 = v46;
      v51 = v47;
      result = ContainerModel::registerOnContainerChangedCallback(v43, (int)&v50);
      if ( (_DWORD)v51 )
        result = (char *)((int (*)(void))v51)();
    if ( v37 )
      v48 = (unsigned int *)(v37 + 4);
          result = (char *)__ldrex(v48);
        while ( __strex((unsigned int)(result - 1), v48) );
        result = (char *)(*v48)--;
      if ( result == (char *)1 )
        v49 = (unsigned int *)(v37 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
            result = (char *)__ldrex(v49);
          while ( __strex((unsigned int)(result - 1), v49) );
          result = (char *)(*v49)--;
        if ( result == (char *)1 )
          result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
  return result;
}


int __fastcall EnchantingContainerManagerController::getPlayerLevels(EnchantingContainerManagerController *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r5@7
  bool v7; // zf@7
  unsigned int v8; // r0@13
  unsigned int *v10; // r6@18
  unsigned int v11; // r0@20

  v1 = *((_DWORD *)this + 17);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = 0;
          v7 = *v3 == 0;
          if ( *v3 )
          {
            this = (EnchantingContainerManagerController *)*((_DWORD *)this + 16);
            v7 = this == 0;
          }
          if ( !v7 )
            v6 = ContainerManagerModel::getPlayerXP(this);
          if ( &pthread_create )
            __dmb();
            do
              v8 = __ldrex(v3);
            while ( __strex(v8 - 1, v3) );
          else
            v8 = (*v3)--;
          if ( v8 == 1 )
            v10 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
            }
            else
              v11 = (*v10)--;
            if ( v11 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return v6;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


void __fastcall EnchantingContainerManagerController::getEnchantHint(EnchantingContainerManagerController *this, int a2, int a3)
{
  EnchantingContainerManagerController::getEnchantHint(this, a2, a3);
}


signed int __fastcall EnchantingContainerManagerController::getStatusForOption(EnchantingContainerManagerController *this, int a2)
{
  EnchantingContainerManagerModel *v2; // r8@0
  int v3; // r4@1
  int v4; // r6@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r7@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  signed int v9; // r5@7
  bool v10; // zf@7
  char *v11; // r0@10
  unsigned __int64 *v12; // r5@10
  int v13; // r1@11
  int v14; // r0@11
  unsigned int v15; // r0@22
  unsigned int *v16; // r6@26
  unsigned int v17; // r0@28
  int v19; // r5@34
  int v20; // r6@37

  v3 = *((_DWORD *)this + 17);
  v4 = a2;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v5 )
          return 3;
        __dmb();
        v7 = __ldrex(v6);
        if ( v7 == v5 )
          break;
        __clrex();
        v5 = v7;
      }
      v8 = __strex(v5 + 1, v6);
      v5 = v7;
    }
    while ( v8 );
    __dmb();
    v9 = 3;
    v10 = *v6 == 0;
    if ( *v6 )
      v2 = (EnchantingContainerManagerModel *)*((_DWORD *)this + 16);
      v10 = v2 == 0;
    if ( !v10 )
      v11 = EnchantingContainerManagerModel::getEnchants(v2);
      v12 = (unsigned __int64 *)v11;
      if ( v4 < 0 )
        v9 = 3;
      else
        v13 = -1171354717 * ((signed int)((*(_QWORD *)v11 >> 32) - *(_QWORD *)v11) >> 2);
        v14 = 3;
        if ( v13 < 3 )
          v14 = -1171354717 * ((signed int)((*v12 >> 32) - *v12) >> 2);
        if ( v14 <= v4 )
        {
          v9 = 3;
        }
        else if ( ContainerManagerModel::isCreativeMode(v2) )
          v9 = 0;
        else
          v19 = *(_DWORD *)v12;
          if ( ItemEnchants::count((ItemEnchants *)(v19 + 44 * v4 + 4)) )
          {
            if ( *(_DWORD *)(v19 + 44 * v4) < 0 )
            {
              v9 = 3;
            }
            else if ( EnchantingContainerManagerModel::getLapisCount(v2) <= v4 )
              v9 = 1;
            else
              v20 = *(_DWORD *)(v19 + 44 * v4);
              v9 = 0;
              if ( v20 > ContainerManagerModel::getPlayerXP(v2) )
                v9 = 2;
          }
          else
            v9 = 3;
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v6);
      while ( __strex(v15 - 1, v6) );
    else
      v15 = (*v6)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  else
  return v9;
}


int __fastcall EnchantingContainerManagerController::getInputItemId(EnchantingContainerManagerController *this)
{
  int v1; // r5@1
  int v2; // r10@1
  unsigned __int64 *v3; // r9@1
  int v4; // r0@1
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int *v10; // r0@14
  int v11; // r4@14
  unsigned int v12; // r1@15
  unsigned int *v13; // r0@15
  unsigned int v14; // r2@18
  unsigned int v15; // r3@19
  signed int v16; // r1@20
  int v17; // r0@24
  unsigned int *v18; // r2@27
  unsigned int v19; // r1@29
  signed int v20; // r6@31
  int v21; // r0@36
  int v22; // r0@36
  bool v23; // zf@36
  unsigned int *v24; // r1@44
  unsigned int v25; // r0@46
  unsigned int *v26; // r7@50
  unsigned int v27; // r0@52
  int v29; // [sp+0h] [bp-28h]@14
  int v30; // [sp+4h] [bp-24h]@14

  v1 = dword_27F9A28;
  v2 = 0x12u % dword_27F9A2C;
  v3 = (unsigned __int64 *)((char *)this + 20);
  v4 = *(_DWORD *)(dword_27F9A28 + 4 * (0x12u % dword_27F9A2C));
  if ( !v4 )
    goto LABEL_13;
  v1 = *(_DWORD *)v4;
  v5 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v6 = v5 == 18;
    if ( v5 == 18 )
      v6 = *(_DWORD *)(v1 + 4) == 18;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v1;
    if ( *(_DWORD *)v1 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v4 = v1;
      v1 = *(_DWORD *)v1;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27F9A2C == v2 )
        continue;
    }
  }
  v8 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v8 = v4 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 18;
    v9[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9A28,
           v2,
           0x12u,
           (int)v9);
  v10 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ContainerController>>,std::allocator<std::pair<std::string const,std::shared_ptr<ContainerController>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 v3,
                 (int **)(v4 + 8));
  ContainerController::getContainerModel((ContainerController *)&v29, *v10);
  v11 = v30;
  if ( v30 )
    v12 = *(_DWORD *)(v30 + 4);
    v13 = (unsigned int *)(v30 + 4);
    do
      while ( 1 )
      {
        if ( !v12 )
        {
          v16 = 1;
          v11 = 0;
          goto LABEL_24;
        }
        __dmb();
        v14 = __ldrex(v13);
        if ( v14 == v12 )
          break;
        __clrex();
        v12 = v14;
      }
      v15 = __strex(v12 + 1, v13);
      v12 = v14;
    while ( v15 );
    __dmb();
    v16 = 0;
    if ( !*v13 )
      v16 = 1;
LABEL_24:
    v17 = v30;
    v1 = v29;
    if ( v16 )
      v1 = 0;
    if ( v30 )
      v18 = (unsigned int *)(v30 + 8);
      if ( &pthread_create )
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    if ( !v1 )
      goto LABEL_62;
    v21 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v1 + 32))(v1, 0);
    v1 = v21;
    v22 = *(_BYTE *)(v21 + 15);
    v23 = v22 == 0;
    if ( v22 )
      v23 = *(_DWORD *)v1 == 0;
    if ( v23 || ItemInstance::isNull((ItemInstance *)v1) || !*(_BYTE *)(v1 + 14) )
LABEL_62:
      v20 = 0;
    else
      v1 = ItemInstance::getIdAuxEnchanted((ItemInstance *)v1);
      v20 = 1;
    if ( v11 )
      v24 = (unsigned int *)(v11 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        else
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  else
    v20 = 0;
  if ( !v20 )
    v1 = 0;
  return v1;
}


signed int __fastcall EnchantingContainerManagerController::handlePlaceAll(int a1, ContainerItemStack *a2, const void **a3, int a4)
{
  int v4; // r9@1
  ContainerItemStack *v5; // r10@1
  const void **v6; // r5@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@3
  int v12; // r11@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  const void *v15; // r1@14
  size_t v16; // r2@14
  int v17; // r0@15
  int v18; // r3@15
  int v19; // r1@15
  int v20; // r0@15
  int v22; // [sp+0h] [bp-28h]@1

  v4 = a1;
  v22 = a4;
  v5 = a2;
  v6 = a3;
  v7 = 0x12u % dword_27F9A2C;
  v8 = *(_DWORD *)(dword_27F9A28 + 4 * (0x12u % dword_27F9A2C));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 18;
    if ( v10 == 18 )
      v11 = *(_DWORD *)(v9 + 4) == 18;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27F9A2C == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = 18;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27F9A28,
           v7,
           0x12u,
           (int)v14);
  v15 = *(const void **)(v8 + 8);
  v16 = *((_DWORD *)*v6 - 3);
  if ( v16 == *((_DWORD *)v15 - 3) )
    v17 = memcmp(*v6, v15, v16);
    v18 = v22;
    v11 = v17 == 0;
    v19 = (int)v5;
    v20 = v4;
      return j_j_j__ZN26ContainerManagerController14handlePlaceOneER18ContainerItemStackRKSsi(v4, v5, (int **)v6, v22);
  else
  return j_j_j__ZN26ContainerManagerController14handlePlaceAllER18ContainerItemStackRKSsi(v20, v19, (int **)v6, v18);
}


void **__fastcall EnchantingContainerManagerController::getRunesForOption(EnchantingContainerManagerController *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int *v5; // r5@1
  unsigned int v6; // r0@2
  unsigned int *v7; // r7@2
  unsigned int v8; // r2@5
  unsigned int v9; // r3@6
  signed int v10; // r8@7
  EnchantingContainerManagerModel *v11; // r0@7
  bool v12; // zf@7
  char *v13; // r0@10
  __int64 v14; // kr00_8@11
  void **result; // r0@16
  unsigned int *v16; // r6@20

  v3 = *(_DWORD *)(a2 + 68);
  v4 = a3;
  v5 = (int *)this;
  if ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 4);
    v7 = (unsigned int *)(v3 + 4);
    while ( v6 )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
      {
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
        if ( !v9 )
        {
          __dmb();
          v10 = 0;
          v11 = (EnchantingContainerManagerModel *)*v7;
          v12 = *v7 == 0;
          if ( *v7 )
          {
            v11 = *(EnchantingContainerManagerModel **)(a2 + 64);
            v12 = v11 == 0;
          }
          if ( !v12 )
            v13 = EnchantingContainerManagerModel::getEnchantNames(v11);
            if ( v4 < 0 || (v14 = *(_QWORD *)v13, (HIDWORD(v14) - (signed int)v14) >> 2 <= v4) )
            {
              v10 = 0;
            }
            else
              sub_21E8AF4(v5, (int *)(v14 + 4 * v4));
              v10 = 1;
          if ( &pthread_create )
            __dmb();
            do
              result = (void **)__ldrex(v7);
            while ( __strex((unsigned int)result - 1, v7) );
          else
            result = (void **)(*v7)--;
          if ( result == (void **)1 )
            v16 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = (void **)__ldrex(v16);
              while ( __strex((unsigned int)result - 1, v16) );
              result = (void **)(*v16)--;
            if ( result == (void **)1 )
              result = (void **)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          if ( v10 )
            return result;
          return sub_21E94B4((void **)v5, (const char *)&unk_257BC67);
        }
      }
      else
        __clrex();
    }
  }
  return sub_21E94B4((void **)v5, (const char *)&unk_257BC67);
}


int __fastcall EnchantingContainerManagerController::getCostForOption(EnchantingContainerManagerController *this, int a2)
{
  int v2; // r5@0
  int v3; // r4@1
  int v4; // r8@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r6@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  signed int v9; // r7@7
  EnchantingContainerManagerModel *v10; // r0@8
  char *v11; // r0@9
  __int64 v12; // kr00_8@10
  unsigned int v14; // r0@19
  unsigned int *v15; // r6@23
  unsigned int v16; // r0@25

  v3 = *((_DWORD *)this + 17);
  v4 = a2;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = 0;
          if ( *v6 )
          {
            v10 = (EnchantingContainerManagerModel *)*((_DWORD *)this + 16);
            if ( v10 )
            {
              v11 = EnchantingContainerManagerModel::getEnchantmentCosts(v10);
              if ( v4 < 0 || (v12 = *(_QWORD *)v11, (HIDWORD(v12) - (signed int)v12) >> 2 <= v4) )
              {
                v9 = 0;
              }
              else
                v2 = *(_DWORD *)(v12 + 4 * v4);
                v9 = 1;
            }
          }
          if ( &pthread_create )
            __dmb();
            do
              v14 = __ldrex(v6);
            while ( __strex(v14 - 1, v6) );
          else
            v14 = (*v6)--;
          if ( v14 == 1 )
            v15 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            else
              v16 = (*v15)--;
            if ( v16 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          goto LABEL_13;
        }
      }
      else
        __clrex();
    }
  }
  v9 = 0;
LABEL_13:
  if ( !v9 )
    v2 = 0;
  return v2;
}


ContainerManagerController *__fastcall EnchantingContainerManagerController::~EnchantingContainerManagerController(EnchantingContainerManagerController *this)
{
  ContainerManagerController *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_26ECDBC;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return j_j_j__ZN26ContainerManagerControllerD2Ev(v1);
}
