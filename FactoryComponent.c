

int __fastcall FactoryComponent::destroyAll(FactoryComponent *this)
{
  FactoryComponent *v1; // r11@1
  __int64 v2; // r0@1
  UIControl **v3; // r8@2
  int v4; // r4@2
  unsigned int v5; // r0@3
  unsigned int *v6; // r5@3
  unsigned int v7; // r1@6
  unsigned int v8; // r2@7
  UIControl *v9; // r7@8
  void (*v10)(void); // r2@11
  unsigned int v11; // r1@13
  int v12; // r10@16
  unsigned int *v13; // r1@17
  unsigned int v14; // r0@19
  unsigned int *v15; // r6@23
  unsigned int v16; // r0@25
  int v17; // r0@30
  unsigned int v18; // r1@33
  int v19; // r6@36
  unsigned int *v20; // r1@37
  unsigned int v21; // r0@39
  unsigned int *v22; // r7@43
  unsigned int v23; // r0@45
  int v24; // r6@50
  unsigned int *v25; // r1@51
  unsigned int v26; // r0@53
  unsigned int *v27; // r7@57
  unsigned int v28; // r0@59
  unsigned int v29; // r0@67
  unsigned int *v30; // r5@71
  unsigned int v31; // r0@73
  int v32; // r4@79
  int v33; // r0@80
  UIControl **v34; // r6@81
  int v35; // r0@81
  unsigned int *v36; // r2@82
  unsigned int v37; // r1@84
  UIControl *v39; // [sp+4h] [bp-3Ch]@31
  int v40; // [sp+8h] [bp-38h]@31
  int v41; // [sp+Ch] [bp-34h]@30
  int v42; // [sp+10h] [bp-30h]@50
  UIControl *v43; // [sp+14h] [bp-2Ch]@11
  int v44; // [sp+18h] [bp-28h]@11

  v1 = this;
  v2 = *((_QWORD *)this + 7);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v3 = (UIControl **)v2;
      v4 = *(_DWORD *)(v2 + 4);
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
              v9 = *v3;
              if ( !*v6 )
                v9 = (UIControl *)*v6;
              if ( !v9 )
                goto LABEL_95;
              v10 = *(void (**)(void))(*(_DWORD *)UIControl::getScreenAction(v9, 0) + 40);
              v43 = v9;
              v44 = v4;
              if ( &pthread_create )
              {
                __dmb();
                do
                  v11 = __ldrex(v6);
                while ( __strex(v11 + 1, v6) );
              }
              else
                ++*v6;
              v10();
              v12 = v44;
              if ( v44 )
                v13 = (unsigned int *)(v44 + 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v14 = __ldrex(v13);
                  while ( __strex(v14 - 1, v13) );
                }
                else
                  v14 = (*v13)--;
                if ( v14 == 1 )
                  v15 = (unsigned int *)(v12 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v16 = __ldrex(v15);
                    while ( __strex(v16 - 1, v15) );
                  }
                  else
                    v16 = (*v15)--;
                  if ( v16 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
              UIControl::getParent((UIControl *)&v41, (int)v9);
              v17 = v41;
              if ( v41 )
                v39 = v9;
                v40 = v4;
                    v18 = __ldrex(v6);
                  while ( __strex(v18 + 1, v6) );
                  ++*v6;
                UIControl::removeChild(v17, &v39);
                v19 = v40;
                if ( v40 )
                  v20 = (unsigned int *)(v40 + 4);
                      v21 = __ldrex(v20);
                    while ( __strex(v21 - 1, v20) );
                    v21 = (*v20)--;
                  if ( v21 == 1 )
                    v22 = (unsigned int *)(v19 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v23 = __ldrex(v22);
                      while ( __strex(v23 - 1, v22) );
                    }
                    else
                      v23 = (*v22)--;
                    if ( v23 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
              v24 = v42;
              if ( v42 )
                v25 = (unsigned int *)(v42 + 4);
                    v26 = __ldrex(v25);
                  while ( __strex(v26 - 1, v25) );
                  v26 = (*v25)--;
                if ( v26 == 1 )
                  v27 = (unsigned int *)(v24 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
                      v28 = __ldrex(v27);
                    while ( __strex(v28 - 1, v27) );
                    v28 = (*v27)--;
                  if ( v28 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
              if ( v4 )
LABEL_95:
                    v29 = __ldrex(v6);
                  while ( __strex(v29 - 1, v6) );
                  v29 = (*v6)--;
                if ( v29 == 1 )
                  v30 = (unsigned int *)(v4 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
                      v31 = __ldrex(v30);
                    while ( __strex(v31 - 1, v30) );
                    v31 = (*v30)--;
                  if ( v31 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
              break;
            }
          }
          else
            __clrex();
        }
      }
      LODWORD(v2) = v3 + 2;
    }
    while ( v3 + 2 != *((UIControl ***)v1 + 15) );
    v32 = *((_DWORD *)v1 + 14);
    if ( (_DWORD)v2 != v32 )
      v33 = *((_DWORD *)v1 + 14);
      do
        v34 = (UIControl **)v33;
        v35 = *(_DWORD *)(v33 + 4);
        if ( v35 )
          v36 = (unsigned int *)(v35 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 == 1 )
            (*(void (**)(void))(*(_DWORD *)v35 + 12))();
        v33 = (int)(v34 + 2);
      while ( v34 != v3 );
    LODWORD(v2) = v32;
  }
  *((_DWORD *)v1 + 15) = v2;
  return v2;
}


int __fastcall FactoryComponent::setFactoryIsChild(int result, bool a2)
{
  *(_BYTE *)(result + 68) = a2;
  return result;
}


int *__fastcall FactoryComponent::addControlIdToTemplateName(int a1, int **a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r0@1

  v3 = a3;
  v4 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)(a1 + 20),
                a2);
  return j_EntityInteraction::setInteractText(v4, v3);
}


void __fastcall FactoryComponent::create(FactoryComponent *this, const UIPropertyBag *a2, int a3)
{
  const UIPropertyBag *v3; // r8@1
  int v4; // r7@1
  unsigned int v5; // r9@1
  FactoryComponent *v6; // r11@1
  unsigned int v7; // r6@1
  unsigned int v8; // r0@2
  unsigned int *v9; // r10@2
  unsigned int v10; // r1@5
  unsigned int v11; // r2@6
  unsigned int v12; // r0@7
  bool v13; // zf@7
  int v14; // r6@10
  Json::Value *v15; // r4@12
  Json::Value *v16; // r4@18
  Json::Value *v17; // r4@24
  int *v18; // r0@25
  unsigned int v19; // r1@27
  unsigned int v20; // r6@28
  __int64 v21; // kr00_8@28
  unsigned int v22; // r5@28
  int *v23; // r8@28
  int v24; // r7@29
  int v25; // r9@29
  const void *v26; // r1@31
  size_t v27; // r2@31
  int v28; // r0@32
  int v29; // r11@33
  char *v30; // r0@35
  PropertyBag *v31; // r4@38
  int v32; // r0@38
  int v33; // r3@38
  int v34; // r6@38
  unsigned int *v35; // r1@40
  unsigned int v36; // r0@42
  UIControl *v37; // r2@45
  __int64 v38; // r4@46
  _DWORD *v39; // r0@50
  __int64 v40; // r1@50
  void (*v41)(void); // r2@52
  unsigned int *v42; // r1@53
  unsigned int v43; // r3@55
  int v44; // r4@58
  const char *v45; // r0@60
  const char *v46; // r5@60
  const Json::Value *v47; // r0@62
  int v48; // r0@62
  int v49; // r5@67
  unsigned int *v50; // r1@68
  unsigned int v51; // r0@70
  unsigned int *v52; // r6@74
  unsigned int v53; // r0@76
  unsigned int *v54; // r4@80
  unsigned int v55; // r0@82
  unsigned int *v56; // r0@88
  unsigned int v57; // r1@90
  __int64 v58; // r0@93
  int v59; // r1@94
  unsigned int *v60; // r1@95
  unsigned int v61; // r0@97
  int v62; // r0@102
  unsigned int *v63; // r2@103
  unsigned int v64; // r1@105
  unsigned int *v65; // r4@111
  unsigned int v66; // r0@113
  unsigned int *v67; // r1@116
  unsigned int v68; // r0@118
  unsigned int v69; // r0@124
  unsigned int *v70; // r1@130
  unsigned int v71; // r0@132
  unsigned int *v72; // r4@136
  unsigned int v73; // r0@138
  char *v74; // r0@143
  char *v75; // r0@144
  char *v76; // r0@149
  char *v77; // r0@150
  unsigned int *v78; // r1@154
  unsigned int v79; // r0@156
  unsigned int *v80; // r4@160
  unsigned int v81; // r0@162
  unsigned int *v82; // r2@168
  signed int v83; // r1@170
  unsigned int *v84; // r2@172
  signed int v85; // r1@174
  int v86; // r0@176
  unsigned int *v87; // r2@177
  signed int v88; // r1@179
  bool v89; // zf@189
  unsigned int *v90; // r2@193
  signed int v91; // r1@195
  unsigned int *v92; // r2@197
  signed int v93; // r1@199
  int v94; // [sp+14h] [bp-C4h]@25
  unsigned __int64 v95; // [sp+18h] [bp-C0h]@25
  int v96; // [sp+1Ch] [bp-BCh]@74
  int v97; // [sp+20h] [bp-B8h]@25
  const UIPropertyBag *v98; // [sp+24h] [bp-B4h]@25
  int v99; // [sp+28h] [bp-B0h]@10
  int v100; // [sp+28h] [bp-B0h]@67
  int *s1; // [sp+2Ch] [bp-ACh]@29
  UIControl *s1a; // [sp+2Ch] [bp-ACh]@46
  __int64 v103; // [sp+30h] [bp-A8h]@87
  __int64 v104; // [sp+38h] [bp-A0h]@52
  _DWORD *v105; // [sp+40h] [bp-98h]@50
  __int64 v106; // [sp+48h] [bp-90h]@50
  __int64 v107; // [sp+50h] [bp-88h]@176
  char v108; // [sp+58h] [bp-80h]@62
  char v109; // [sp+68h] [bp-70h]@59
  char v110; // [sp+70h] [bp-68h]@58
  char v111; // [sp+78h] [bp-60h]@58
  __int64 v112; // [sp+8Ch] [bp-4Ch]@46
  int v113; // [sp+94h] [bp-44h]@38
  int v114; // [sp+98h] [bp-40h]@38
  int *v115; // [sp+9Ch] [bp-3Ch]@25
  char *v116; // [sp+A0h] [bp-38h]@21
  char *v117; // [sp+A4h] [bp-34h]@13
  char v118; // [sp+A8h] [bp-30h]@13
  char v119; // [sp+ACh] [bp-2Ch]@25

  v3 = a2;
  v4 = a3;
  v5 = *((_DWORD *)a2 + 3);
  v6 = this;
  v7 = 0;
  if ( !v5 )
    goto LABEL_152;
  v8 = *(_DWORD *)(v5 + 4);
  v9 = (unsigned int *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v8 )
      {
        v7 = 0;
        goto LABEL_152;
      }
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
  v12 = *v9;
  v13 = *v9 == 0;
  if ( *v9 )
    v12 = *((_DWORD *)v3 + 2);
    v13 = v12 == 0;
  if ( v13 )
LABEL_151:
    v7 = v5;
LABEL_152:
    *(_DWORD *)v6 = 0;
    *((_DWORD *)v6 + 1) = 0;
    goto LABEL_153;
  v99 = v12;
  FactoryComponent::_trim(v3);
  v14 = v4 + 8;
  if ( Json::Value::isNull((Json::Value *)(v4 + 8))
    || Json::Value::isObject((Json::Value *)(v4 + 8)) != 1
    || (v15 = (Json::Value *)Json::Value::operator[](v4 + 8, "name"), Json::Value::isString(v15) != 1) )
    v117 = (char *)&unk_28898CC;
  else
    jsonValConversion<std::string>::as((int *)&v117, (int)&v118, (int)v15);
  if ( !Json::Value::isNull((Json::Value *)(v4 + 8)) && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
    v16 = (Json::Value *)Json::Value::operator[](v4 + 8, "exclusive");
    if ( Json::Value::isBool(v16) == 1 && Json::Value::asBool(v16, 0) == 1 )
      FactoryComponent::destroy((int)v3, (const void **)&v117);
  v116 = (char *)&unk_28898CC;
  if ( !*((_DWORD *)v3 + 12) )
    if ( Json::Value::isNull((Json::Value *)(v4 + 8))
      || Json::Value::isObject((Json::Value *)(v4 + 8)) != 1
      || (v17 = (Json::Value *)Json::Value::operator[](v4 + 8, "control_id"), Json::Value::isString(v17) != 1) )
      v98 = v3;
      v94 = v4 + 8;
      v95 = __PAIR__(v5, (unsigned int)v6);
      v97 = v4;
      v18 = (int *)&unk_28898CC;
      v115 = (int *)&unk_28898CC;
    else
      jsonValConversion<std::string>::as((int *)&v115, (int)&v119, (int)v17);
      v18 = v115;
    v19 = *(v18 - 3);
    if ( v19 )
      v20 = sub_119C9A4(v18, v19, -955291385);
      v21 = *(_QWORD *)((char *)v98 + 20);
      v22 = v20 % (unsigned int)(*(_QWORD *)((char *)v98 + 20) >> 32);
      v23 = *(int **)(v21 + 4 * v22);
      if ( v23 )
        v24 = *v23;
        s1 = v115;
        v25 = *(_DWORD *)(*v23 + 12);
        while ( 1 )
        {
          if ( v25 == v20 )
          {
            v26 = *(const void **)(v24 + 4);
            v27 = *(s1 - 3);
            if ( v27 == *((_DWORD *)v26 - 3) )
            {
              v28 = memcmp(s1, v26, v27);
              if ( !v28 )
                break;
            }
          }
          v29 = *(_DWORD *)v24;
          if ( *(_DWORD *)v24 )
            v25 = *(_DWORD *)(v29 + 12);
            v23 = (int *)v21;
            v24 = *(_DWORD *)v21;
            if ( *(_DWORD *)(v29 + 12) % HIDWORD(v21) == v22 )
              continue;
          goto LABEL_35;
        }
        v89 = v23 == 0;
        if ( v23 )
          v28 = *v23;
          v89 = *v23 == 0;
        if ( !v89 )
          EntityInteraction::setInteractText((int *)&v116, (int *)(v28 + 8));
LABEL_35:
    v5 = HIDWORD(v95);
    v6 = (FactoryComponent *)v95;
    v4 = v97;
    v14 = v94;
    v30 = (char *)(v115 - 3);
    if ( v115 - 3 != &dword_28898C0 )
      v87 = (unsigned int *)(v115 - 1);
      if ( &pthread_create )
        __dmb();
        do
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v4 = v97;
        v14 = v94;
      else
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    v3 = v98;
  if ( *((_BYTE *)v3 + 68) )
    v31 = (PropertyBag *)v14;
    v32 = UIComponent::getOwner(v3);
    UIControl::getParent((UIControl *)&v113, v32);
    v34 = v114;
    v33 = v113;
    v113 = 0;
    v114 = 0;
    if ( !v33 )
      if ( v34 )
        v35 = (unsigned int *)(v34 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 == 1 )
          v54 = (unsigned int *)(v34 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
          if ( &pthread_create )
            __dmb();
            do
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
          else
            v55 = (*v54)--;
          if ( v55 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
      v76 = v116 - 12;
      if ( (int *)(v116 - 12) != &dword_28898C0 )
        v90 = (unsigned int *)(v116 - 4);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v76);
      v77 = v117 - 12;
      if ( (int *)(v117 - 12) != &dword_28898C0 )
        v92 = (unsigned int *)(v117 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v77);
      goto LABEL_151;
    v33 = UIComponent::getOwner(v3);
    v34 = 0;
  v37 = (UIControl *)*((_DWORD *)v3 + 12);
  if ( v37 )
    s1a = (UIControl *)v33;
    UIControlFactory::createControlTree((int)&v112, v99, v37, v33, *((_DWORD *)v3 + 19));
    v38 = v112;
    v112 = 0LL;
LABEL_47:
    if ( (_DWORD)v38 )
      if ( *((_DWORD *)v117 - 3) )
        UIControl::setName(v38, (int *)&v117);
      v39 = operator new(4u);
      LODWORD(v40) = sub_1108228;
      *v39 = v4;
      HIDWORD(v40) = sub_1108194;
      v105 = v39;
      v106 = v40;
      UIControl::applyToChildren(v38, (int)&v105);
      if ( (_DWORD)v106 )
        ((void (*)(void))v106)();
      UIControl::onAdded((UIControl *)v38);
      v41 = *(void (**)(void))(*(_DWORD *)UIControl::getScreenAction((UIControl *)v38, 0) + 32);
      v104 = v38;
      if ( HIDWORD(v38) )
        v42 = (unsigned int *)(HIDWORD(v38) + 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 + 1, v42) );
          ++*v42;
      v100 = HIDWORD(v38);
      v41();
      v49 = HIDWORD(v104);
      if ( HIDWORD(v104) )
        v50 = (unsigned int *)(HIDWORD(v104) + 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 == 1 )
          v96 = v34;
          v52 = (unsigned int *)(v49 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          v34 = v96;
          if ( v53 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
      HIDWORD(v38) = v100;
      UIControl::notifyChildAdded(s1a);
      v103 = v38;
      if ( v100 )
        v56 = (unsigned int *)(v100 + 8);
            v57 = __ldrex(v56);
          while ( __strex(v57 + 1, v56) );
          ++*v56;
      v58 = *(_QWORD *)((char *)v3 + 60);
      if ( (_DWORD)v58 == HIDWORD(v58) )
        std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::_M_emplace_back_aux<std::weak_ptr<UIControl>>(
          (unsigned __int64 *)v3 + 7,
          (int)&v103);
        *(_DWORD *)v58 = v103;
        HIDWORD(v58) = HIDWORD(v103);
        *(_DWORD *)(v58 + 4) = HIDWORD(v103);
        if ( HIDWORD(v58) )
          v60 = (unsigned int *)(v59 + 8);
              v61 = __ldrex(v60);
            while ( __strex(v61 + 1, v60) );
            LODWORD(v58) = *((_DWORD *)v3 + 15);
            ++*v60;
        *((_DWORD *)v3 + 15) = v58 + 8;
      v62 = HIDWORD(v103);
      if ( HIDWORD(v103) )
        v63 = (unsigned int *)(HIDWORD(v103) + 8);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 == 1 )
          (*(void (**)(void))(*(_DWORD *)v62 + 12))();
      LODWORD(v38) = 0;
    goto LABEL_110;
  if ( *((_DWORD *)v116 - 3) )
    Json::Value::Value(&v111, 0);
    v44 = PropertyBag::toJsonValue(v31);
    Json::Value::begin((Json::Value *)&v110, v44);
      Json::Value::end((Json::Value *)&v109, v44);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v110, (const Json::ValueIteratorBase *)&v109) == 1 )
      v45 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v110);
      v46 = v45;
      if ( v45 && *v45 == 36 )
        v47 = (const Json::Value *)Json::Value::operator[](v44, v45);
        Json::Value::Value((Json::Value *)&v108, v47);
        v48 = Json::Value::operator[]((Json::Value *)&v111, v46);
        Json::Value::operator=(v48, (const Json::Value *)&v108);
        Json::Value::~Value((Json::Value *)&v108);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v110);
    v86 = UIControl::getScreenAction(s1a, 0);
    UIControlFactory::createControlTree(
      (int)&v107,
      v99,
      (int)&v116,
      v86,
      (int)s1a,
      *((_DWORD *)v3 + 19),
      (Json::Value *)&v111,
      0);
    v38 = v107;
    v107 = 0LL;
    Json::Value::~Value((Json::Value *)&v111);
    goto LABEL_47;
  v38 = 0LL;
LABEL_110:
  FactoryComponent::removeExcessControls(v3);
  *(_QWORD *)v6 = v38;
  if ( HIDWORD(v38) )
    v65 = (unsigned int *)(HIDWORD(v38) + 8);
    if ( &pthread_create )
      do
        v66 = __ldrex(v65);
      while ( __strex(v66 + 1, v65) );
      ++*v65;
    v67 = (unsigned int *)(HIDWORD(v38) + 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v38) + 8))(HIDWORD(v38));
          v69 = __ldrex(v65);
        while ( __strex(v69 - 1, v65) );
        v69 = (*v65)--;
      if ( v69 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v38) + 12))(HIDWORD(v38));
  if ( v34 )
    v70 = (unsigned int *)(v34 + 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 == 1 )
      v72 = (unsigned int *)(v34 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
  v74 = v116 - 12;
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v116 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v74);
  v75 = v117 - 12;
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v117 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75);
  v7 = v5;
LABEL_153:
  if ( v7 )
    v78 = (unsigned int *)(v7 + 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 == 1 )
      v80 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(unsigned int))(*(_DWORD *)v7 + 8))(v7);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 == 1 )
        (*(void (__fastcall **)(unsigned int))(*(_DWORD *)v7 + 12))(v7);
}


int __fastcall FactoryComponent::_trim(FactoryComponent *this)
{
  FactoryComponent *v1; // r5@1
  int result; // r0@1
  int i; // r9@1
  __int64 v4; // kr00_8@1
  int v5; // r10@2
  unsigned int v6; // r1@3
  unsigned int *v7; // r0@3
  unsigned int v8; // r2@6
  unsigned int v9; // r3@7
  unsigned int v10; // r0@8
  bool v11; // zf@8
  int v12; // r0@14
  int v13; // r4@14
  int v14; // r6@16
  int v15; // r5@16
  int v16; // r8@17
  unsigned int *v17; // r0@18
  unsigned int v18; // r1@20
  int v19; // r0@23
  unsigned int *v20; // r2@24
  unsigned int v21; // r1@26
  unsigned __int8 v22; // vf@31
  int v23; // r0@35
  unsigned int *v24; // r2@36
  unsigned int v25; // r1@38
  unsigned int *v26; // r1@44
  unsigned int v27; // r0@46
  unsigned int *v28; // r4@50
  unsigned int v29; // r0@52
  FactoryComponent *v30; // [sp+0h] [bp-28h]@1

  v1 = this;
  v30 = this;
  v4 = *((_QWORD *)this + 7);
  result = *((_QWORD *)this + 7) >> 32;
  for ( i = v4; i != result; result = *((_DWORD *)v1 + 15) )
  {
    v5 = *(_DWORD *)(i + 4);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 4);
      v7 = (unsigned int *)(v5 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v6 )
          {
            v5 = 0;
            goto LABEL_14;
          }
          __dmb();
          v8 = __ldrex(v7);
          if ( v8 == v6 )
            break;
          __clrex();
          v6 = v8;
        }
        v9 = __strex(v6 + 1, v7);
        v6 = v8;
      }
      while ( v9 );
      __dmb();
      v10 = *v7;
      v11 = *(_DWORD *)i == 0;
      if ( *(_DWORD *)i )
        v11 = v10 == 0;
      if ( !v11 )
        i += 8;
        goto LABEL_44;
    }
    else
      v5 = 0;
LABEL_14:
    v12 = *((_DWORD *)v1 + 15);
    v13 = i + 8;
    if ( i + 8 == v12 )
      v12 = i + 8;
    else if ( v12 - v13 >= 1 )
      v14 = (v12 - v13) >> 3;
      v15 = i;
        *(_DWORD *)v15 = *(_DWORD *)v13;
        v16 = *(_DWORD *)(v13 + 4);
        if ( v16 )
          v17 = (unsigned int *)(v16 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 + 1, v17) );
          else
            ++*v17;
        v19 = *(_DWORD *)(v15 + 4);
        if ( v19 )
          v20 = (unsigned int *)(v19 + 8);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (**)(void))(*(_DWORD *)v19 + 12))();
        *(_DWORD *)(v15 + 4) = v16;
        v22 = __OFSUB__(v14--, 1);
        v15 += 8;
        v13 += 8;
      while ( !((unsigned __int8)((v14 < 0) ^ v22) | (v14 == 0)) );
      v1 = v30;
      v12 = *((_DWORD *)v30 + 15);
    *((_DWORD *)v1 + 15) = v12 - 8;
    v23 = *(_DWORD *)(v12 - 4);
    if ( v23 )
      v24 = (unsigned int *)(v23 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (**)(void))(*(_DWORD *)v23 + 12))();
LABEL_44:
      v26 = (unsigned int *)(v5 + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        v28 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        else
          v29 = (*v28)--;
        if ( v29 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


FactoryComponent *__fastcall FactoryComponent::~FactoryComponent(FactoryComponent *this)
{
  FactoryComponent *v1; // r8@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  int v7; // r5@14
  unsigned int *v8; // r1@15
  unsigned int v9; // r0@17
  unsigned int *v10; // r6@21
  unsigned int v11; // r0@23
  char *v12; // r0@28
  int v13; // r1@31
  void *v14; // r0@31
  int v15; // r0@32
  unsigned int *v16; // r2@33
  unsigned int v17; // r1@35
  unsigned int *v19; // r2@41
  signed int v20; // r1@43

  v1 = this;
  *(_DWORD *)this = &off_26DFEB8;
  *(_QWORD *)&v2 = *((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v4 + 12))();
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 14);
  }
  if ( v2 )
    operator delete((void *)v2);
  v7 = *((_DWORD *)v1 + 13);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 20);
  v12 = (char *)*((_DWORD *)v1 + 5);
  if ( v12 && (char *)v1 + 44 != v12 )
    operator delete(v12);
  v13 = *((_DWORD *)v1 + 4);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v13 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = *((_DWORD *)v1 + 3);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      (*(void (**)(void))(*(_DWORD *)v15 + 12))();
  UIComponent::~UIComponent(v1);
  return v1;
}


void __fastcall FactoryComponent::~FactoryComponent(FactoryComponent *this)
{
  FactoryComponent *v1; // r0@1

  v1 = FactoryComponent::~FactoryComponent(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall FactoryComponent::setControlTemplate(int a1, int a2)
{
  int v2; // r4@1
  UIControl *v3; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  unsigned int *v8; // r1@9
  unsigned int v9; // r0@11
  unsigned int *v10; // r7@15
  unsigned int v11; // r0@17

  v2 = a1;
  v3 = *(UIControl **)a2;
  *(_DWORD *)(v2 + 48) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 52);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
        v4 = *(_DWORD *)(v2 + 52);
      }
      else
        ++*v6;
    }
    if ( v4 )
      v8 = (unsigned int *)(v4 + 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 52) = v5;
    v3 = *(UIControl **)(v2 + 48);
  }
  return j_j_j__ZN9UIControl13setIsTemplateEb_0(v3, 1);
}


int __fastcall FactoryComponent::clone(FactoryComponent *this, UIControl *a2, UIControl *a3)
{
  FactoryComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r0@7
  unsigned int *v11; // r2@8
  unsigned int v12; // r1@10
  UIControl *v13; // r1@15
  __int64 v14; // r0@16
  int v15; // r5@16
  unsigned int *v16; // r1@17
  unsigned int v17; // r0@19
  unsigned int *v18; // r7@23
  unsigned int v19; // r0@25
  int v20; // r7@30
  unsigned int *v21; // r1@31
  unsigned int v22; // r0@33
  unsigned int *v23; // r5@37
  unsigned int v24; // r0@39
  int result; // r0@45
  int v26; // [sp+0h] [bp-28h]@16
  int v27; // [sp+4h] [bp-24h]@16
  int v28; // [sp+8h] [bp-20h]@1
  int v29; // [sp+Ch] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x50u);
  v28 = *((_DWORD *)v5 + 2);
  v7 = *((_DWORD *)v5 + 3);
  v29 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  FactoryComponent::FactoryComponent((UIComponent *)v6, v4, (int)&v28);
  v10 = v29;
  if ( v29 )
    v11 = (unsigned int *)(v29 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  v13 = (UIControl *)*((_DWORD *)v5 + 12);
  if ( v13 )
    UIControl::clone((UIControl *)&v26, v13, (int)v4);
    v14 = *(_QWORD *)&v26;
    v26 = 0;
    v27 = 0;
    *((_DWORD *)v6 + 12) = v14;
    v15 = *((_DWORD *)v6 + 13);
    *((_DWORD *)v6 + 13) = HIDWORD(v14);
    if ( v15 )
      v16 = (unsigned int *)(v15 + 4);
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
        v18 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    v20 = v27;
    if ( v27 )
      v21 = (unsigned int *)(v27 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v23 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    UIControl::setIsTemplate(*((UIControl **)v6 + 12), 1);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)((char *)v6 + 20),
    (int)v5 + 20);
  std::vector<std::weak_ptr<UIControl>,std::allocator<std::weak_ptr<UIControl>>>::operator=(
    (int)v6 + 56,
    (unsigned __int64 *)v5 + 7);
  result = *((_BYTE *)v5 + 68);
  *((_BYTE *)v6 + 68) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall FactoryComponent::~FactoryComponent(FactoryComponent *this)
{
  FactoryComponent::~FactoryComponent(this);
}


int __fastcall FactoryComponent::setInsertPosition(int result, int a2)
{
  *(_DWORD *)(result + 76) = a2;
  return result;
}


int __fastcall FactoryComponent::destroy(int a1, const void **a2)
{
  int v2; // r11@1
  int result; // r0@1
  int i; // r10@1
  __int64 v5; // kr00_8@1
  int v6; // r0@3
  int v7; // r5@3
  UIControl **v8; // r6@5
  int v9; // r11@5
  int v10; // r4@6
  unsigned int *v11; // r0@7
  unsigned int v12; // r1@9
  UIControl *v13; // r0@12
  unsigned int *v14; // r2@13
  unsigned int v15; // r1@15
  unsigned __int8 v16; // vf@20
  UIControl *v17; // r4@22
  int v18; // r0@24
  unsigned int *v19; // r2@25
  unsigned int v20; // r1@27
  void (*v21)(void); // r2@33
  unsigned int v22; // r1@36
  int v23; // r5@39
  unsigned int *v24; // r1@40
  unsigned int v25; // r0@42
  unsigned int *v26; // r7@46
  unsigned int v27; // r0@48
  int v28; // r0@53
  unsigned int v29; // r1@56
  int v30; // r5@59
  unsigned int *v31; // r1@60
  unsigned int v32; // r0@62
  unsigned int *v33; // r4@66
  unsigned int v34; // r0@68
  int v35; // r5@73
  unsigned int *v36; // r1@74
  unsigned int v37; // r0@76
  unsigned int *v38; // r4@80
  unsigned int v39; // r0@82
  void (__fastcall *v40)(int); // r1@86
  int v41; // r0@86
  int v42; // r9@87
  unsigned int *v43; // r10@88
  unsigned int v44; // r0@88
  unsigned int v45; // r1@91
  unsigned int v46; // r2@92
  _DWORD *v47; // r0@96
  size_t v48; // r2@96
  int v49; // r0@102
  int v50; // r5@102
  int v51; // r7@104
  int v52; // r6@104
  int v53; // r9@104
  int v54; // r10@105
  unsigned int *v55; // r0@106
  unsigned int v56; // r1@108
  int v57; // r0@111
  unsigned int *v58; // r2@112
  unsigned int v59; // r1@114
  unsigned int *v60; // r2@124
  unsigned int v61; // r1@126
  unsigned int *v62; // r1@133
  unsigned int v63; // r0@135
  unsigned int *v64; // r4@139
  unsigned int v65; // r0@141
  UIControl *v66; // [sp+4h] [bp-4Ch]@5
  int v67; // [sp+8h] [bp-48h]@1
  const void **v68; // [sp+Ch] [bp-44h]@1
  UIControl **v69; // [sp+10h] [bp-40h]@88
  int v70; // [sp+10h] [bp-40h]@104
  UIControl *v71; // [sp+14h] [bp-3Ch]@53
  int v72; // [sp+18h] [bp-38h]@53
  UIControl *v73; // [sp+1Ch] [bp-34h]@33
  int v74; // [sp+20h] [bp-30h]@33
  int v75; // [sp+24h] [bp-2Ch]@32
  int v76; // [sp+28h] [bp-28h]@73

  v2 = a1;
  v68 = a2;
  v67 = a1;
  v5 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(a1 + 56) >> 32;
  for ( i = v5; i != result; result = *(_DWORD *)(v2 + 60) )
  {
    v42 = *(_DWORD *)(i + 4);
    if ( v42 )
    {
      v69 = (UIControl **)i;
      v43 = (unsigned int *)(v42 + 4);
      v44 = *(_DWORD *)(v42 + 4);
      while ( v44 )
      {
        __dmb();
        v45 = __ldrex(v43);
        if ( v45 == v44 )
        {
          v46 = __strex(v44 + 1, v43);
          v44 = v45;
          if ( !v46 )
          {
            __dmb();
            v17 = *v69;
            if ( !*v43 )
              v17 = (UIControl *)*v43;
            if ( v17 )
            {
              v47 = *(_DWORD **)UIControl::getName(v17);
              v48 = *(v47 - 3);
              if ( v48 != *((_DWORD *)*v68 - 3) || memcmp(v47, *v68, v48) )
              {
                i = (int)(v69 + 2);
                goto LABEL_133;
              }
              v6 = *(_DWORD *)(v2 + 60);
              v7 = (int)(v69 + 2);
              if ( v69 + 2 == (UIControl **)v6 )
                v6 = (int)(v69 + 2);
              else if ( v6 - v7 >= 1 )
                v8 = v69;
                v9 = (v6 - v7) >> 3;
                v66 = v17;
                do
                {
                  *v8 = *(UIControl **)v7;
                  v10 = *(_DWORD *)(v7 + 4);
                  if ( v10 )
                  {
                    v11 = (unsigned int *)(v10 + 8);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v12 = __ldrex(v11);
                      while ( __strex(v12 + 1, v11) );
                    }
                    else
                      ++*v11;
                  }
                  v13 = v8[1];
                  if ( v13 )
                    v14 = (unsigned int *)((char *)v13 + 8);
                        v15 = __ldrex(v14);
                      while ( __strex(v15 - 1, v14) );
                      v15 = (*v14)--;
                    if ( v15 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
                  v8[1] = (UIControl *)v10;
                  v16 = __OFSUB__(v9--, 1);
                  v8 += 2;
                  v7 += 8;
                }
                while ( !((unsigned __int8)((v9 < 0) ^ v16) | (v9 == 0)) );
                v2 = v67;
                v17 = v66;
                v6 = *(_DWORD *)(v67 + 60);
              *(_DWORD *)(v2 + 60) = v6 - 8;
              v18 = *(_DWORD *)(v6 - 4);
              if ( v18 )
                v19 = (unsigned int *)(v18 + 8);
                if ( &pthread_create )
                  __dmb();
                  do
                    v20 = __ldrex(v19);
                  while ( __strex(v20 - 1, v19) );
                else
                  v20 = (*v19)--;
                if ( v20 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v18 + 12))();
              UIControl::getParent((UIControl *)&v75, (int)v17);
              if ( v75 )
                v21 = *(void (**)(void))(*(_DWORD *)UIControl::getScreenAction(v17, 0) + 40);
                v73 = v17;
                v74 = v42;
                if ( v42 )
                  if ( &pthread_create )
                    __dmb();
                    do
                      v22 = __ldrex(v43);
                    while ( __strex(v22 + 1, v43) );
                  else
                    ++*v43;
                v21();
                v23 = v74;
                if ( v74 )
                  v24 = (unsigned int *)(v74 + 4);
                      v25 = __ldrex(v24);
                    while ( __strex(v25 - 1, v24) );
                    v25 = (*v24)--;
                  if ( v25 == 1 )
                    v26 = (unsigned int *)(v23 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
                        v27 = __ldrex(v26);
                      while ( __strex(v27 - 1, v26) );
                      v27 = (*v26)--;
                    if ( v27 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
                v28 = v75;
                v71 = v17;
                v72 = v42;
                      v29 = __ldrex(v43);
                    while ( __strex(v29 + 1, v43) );
                UIControl::removeChild(v28, &v71);
                v30 = v72;
                if ( v72 )
                  v31 = (unsigned int *)(v72 + 4);
                      v32 = __ldrex(v31);
                    while ( __strex(v32 - 1, v31) );
                    v32 = (*v31)--;
                  if ( v32 == 1 )
                    v33 = (unsigned int *)(v30 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
                        v34 = __ldrex(v33);
                      while ( __strex(v34 - 1, v33) );
                      v34 = (*v33)--;
                    if ( v34 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
              v35 = v76;
              i = (int)v69;
              if ( v76 )
                v36 = (unsigned int *)(v76 + 4);
                    v37 = __ldrex(v36);
                  while ( __strex(v37 - 1, v36) );
                  v37 = (*v36)--;
                if ( v37 == 1 )
                  v38 = (unsigned int *)(v35 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
                      v39 = __ldrex(v38);
                    while ( __strex(v39 - 1, v38) );
                    v39 = (*v38)--;
                  if ( v39 == 1 )
                    v40 = *(void (__fastcall **)(int))(*(_DWORD *)v35 + 12);
                    v41 = v35;
                    goto LABEL_131;
              goto LABEL_132;
            }
LABEL_100:
            i = (int)v69;
            goto LABEL_102;
          }
        }
        else
          __clrex();
      }
      v42 = 0;
      goto LABEL_100;
    }
    v42 = 0;
LABEL_102:
    v49 = *(_DWORD *)(v2 + 60);
    v50 = i + 8;
    if ( i + 8 == v49 )
      v49 = i + 8;
    else if ( v49 - v50 >= 1 )
      v70 = v42;
      v51 = (v49 - v50) >> 3;
      v52 = i;
      v53 = i;
      do
        *(_DWORD *)v52 = *(_DWORD *)v50;
        v54 = *(_DWORD *)(v50 + 4);
        if ( v54 )
          v55 = (unsigned int *)(v54 + 8);
          if ( &pthread_create )
            do
              v56 = __ldrex(v55);
            while ( __strex(v56 + 1, v55) );
          else
            ++*v55;
        v57 = *(_DWORD *)(v52 + 4);
        if ( v57 )
          v58 = (unsigned int *)(v57 + 8);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 == 1 )
            (*(void (**)(void))(*(_DWORD *)v57 + 12))();
        *(_DWORD *)(v52 + 4) = v54;
        v16 = __OFSUB__(v51--, 1);
        v52 += 8;
        v50 += 8;
      while ( !((unsigned __int8)((v51 < 0) ^ v16) | (v51 == 0)) );
      i = v53;
      v49 = *(_DWORD *)(v2 + 60);
      v42 = v70;
    *(_DWORD *)(v2 + 60) = v49 - 8;
    v41 = *(_DWORD *)(v49 - 4);
    if ( v41 )
      v60 = (unsigned int *)(v41 + 8);
      if ( &pthread_create )
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      else
        v61 = (*v60)--;
      if ( v61 == 1 )
        v40 = *(void (__fastcall **)(int))(*(_DWORD *)v41 + 12);
LABEL_131:
        v40(v41);
LABEL_132:
LABEL_133:
      v62 = (unsigned int *)(v42 + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        v64 = (unsigned int *)(v42 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
        if ( &pthread_create )
          __dmb();
          do
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  }
  return result;
}


char *__fastcall FactoryComponent::getFactoryName(FactoryComponent *this)
{
  return (char *)this + 16;
}


int __fastcall FactoryComponent::getControlTemplate(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 48);
  v2 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


void __fastcall FactoryComponent::create(FactoryComponent *this, const UIPropertyBag *a2, int a3)
{
  FactoryComponent::create(this, a2, a3);
}


int __fastcall FactoryComponent::setMaxSize(int result, int a2)
{
  *(_DWORD *)(result + 72) = a2;
  return result;
}


UIComponent *__fastcall FactoryComponent::FactoryComponent(UIComponent *a1, UIControl *a2, int a3)
{
  int v3; // r5@1
  UIComponent *v4; // r4@1
  double v5; // r0@1
  unsigned int v6; // r0@7
  int v7; // r6@9
  void *v8; // r5@9

  v3 = a3;
  v4 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v4 = &off_26DFEB8;
  *((_DWORD *)v4 + 2) = *(_DWORD *)v3;
  LODWORD(v5) = *(_DWORD *)(v3 + 4);
  *((_DWORD *)v4 + 3) = LODWORD(v5);
  if ( LODWORD(v5) )
  {
    LODWORD(v5) += 8;
    HIDWORD(v5) = &pthread_create;
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v5) = __ldrex((unsigned int *)LODWORD(v5));
      while ( __strex(HIDWORD(v5) + 1, (unsigned int *)LODWORD(v5)) );
    }
    else
      ++*(_DWORD *)LODWORD(v5);
  }
  *((_DWORD *)v4 + 4) = &unk_28898CC;
  *((_DWORD *)v4 + 7) = 0;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 9) = 1065353216;
  LODWORD(v5) = (char *)v4 + 36;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v6 = sub_119C844(v5);
  *((_DWORD *)v4 + 6) = v6;
  if ( v6 == 1 )
    *((_DWORD *)v4 + 11) = 0;
    v8 = (char *)v4 + 44;
  else
    if ( v6 >= 0x40000000 )
      sub_119C874();
    v7 = 4 * v6;
    v8 = operator new(4 * v6);
    _aeabi_memclr4(v8, v7);
  *((_DWORD *)v4 + 5) = v8;
  *((_DWORD *)v4 + 16) = 0;
  *((_DWORD *)v4 + 14) = 0;
  *((_DWORD *)v4 + 15) = 0;
  *((_DWORD *)v4 + 12) = 0;
  *((_DWORD *)v4 + 13) = 0;
  *((_BYTE *)v4 + 68) = 1;
  *((_QWORD *)v4 + 9) = 0x100000000LL;
  return v4;
}


int __fastcall FactoryComponent::removeExcessControls(FactoryComponent *this)
{
  FactoryComponent *v1; // r5@1
  int result; // r0@1
  int v3; // r4@2
  int v4; // r0@3
  int v5; // r0@3
  UIControl *v6; // r6@3
  char *v7; // r7@5
  unsigned int *v8; // r1@11
  unsigned int *v9; // r5@17
  UIControl *v10; // [sp+4h] [bp-1Ch]@3
  int v11; // [sp+8h] [bp-18h]@3

  v1 = this;
  result = *((_DWORD *)this + 18);
  if ( result >= 1 )
  {
    v3 = 0;
    if ( *((_BYTE *)v1 + 68) )
    {
      v4 = UIComponent::getOwner(v1);
      UIControl::getParent((UIControl *)&v10, v4);
      v5 = v11;
      v6 = v10;
      v10 = 0;
      v11 = 0;
      v3 = v5;
    }
    else
      v6 = (UIControl *)UIComponent::getOwner(v1);
    v7 = UIControl::getChildren(v6);
    while ( 1 )
      result = (*((_DWORD *)v7 + 1) - *(_DWORD *)v7) >> 3;
      if ( result <= *((_DWORD *)v1 + 18) )
        break;
      if ( *((_DWORD *)v1 + 19) == 1 )
        UIControl::popFrontChild(v6);
      else
        UIControl::popBackChild(v6);
    if ( v3 )
      v8 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
        result = (*v8)--;
      if ( result == 1 )
        v9 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v9);
          while ( __strex(result - 1, v9) );
        }
        else
          result = (*v9)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return result;
}
