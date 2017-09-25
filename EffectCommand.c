

void __fastcall EffectCommand::~EffectCommand(EffectCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A024;
  j_CommandSelectorBase::~CommandSelectorBase((EffectCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


Command *__fastcall EffectCommand::EffectCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A024;
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 20);
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 31) = 30;
  *((_DWORD *)v1 + 32) = 0;
  *((_BYTE *)v1 + 132) = 0;
  return v1;
}


void __fastcall EffectCommand::~EffectCommand(EffectCommand *this)
{
  EffectCommand::~EffectCommand(this);
}


void __fastcall EffectCommand::setup(EffectCommand *this, CommandRegistry *a2)
{
  EffectCommand::setup(this, a2);
}


void __fastcall EffectCommand::execute(EffectCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EffectCommand::execute(this, a2, a3);
}


int __fastcall EffectCommand::~EffectCommand(EffectCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A024;
  j_CommandSelectorBase::~CommandSelectorBase((EffectCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall EffectCommand::clear(EffectCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r6@1
  const Entity *v4; // r5@2
  void **v5; // r7@2
  int v6; // r0@4
  Mob *v7; // r11@4
  __int16 v8; // r0@4
  char *v9; // r0@6
  void *v10; // r4@8
  void *v11; // r9@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  int *v14; // r0@18
  void *v15; // r0@23
  void *v16; // r0@24
  void *v17; // r0@25
  unsigned int *v18; // r2@26
  signed int v19; // r1@28
  CommandOutput *v20; // r9@30
  _BYTE *v21; // r6@30
  char *v22; // r5@30
  unsigned int v23; // r2@30
  unsigned int v24; // r1@32
  unsigned int v25; // r4@32
  Mob **v26; // r7@39
  char *v27; // r7@41
  unsigned int *v28; // r2@45
  signed int v29; // r1@47
  unsigned int *v30; // r2@49
  signed int v31; // r1@51
  int v32; // r5@65
  unsigned int *v33; // r1@66
  unsigned int v34; // r0@68
  unsigned int *v35; // r4@72
  unsigned int v36; // r0@74
  int v37; // r5@79
  unsigned int *v38; // r1@80
  unsigned int v39; // r0@82
  unsigned int *v40; // r4@86
  unsigned int v41; // r0@88
  void *v42; // r0@93
  char *v43; // r4@94
  int v44; // r6@94
  unsigned int *v45; // r2@96
  signed int v46; // r1@98
  int *v47; // r0@104
  void *v48; // r0@109
  void *v49; // r0@110
  int v50; // r4@114
  unsigned int *v51; // r1@115
  unsigned int v52; // r0@117
  unsigned int *v53; // r5@121
  unsigned int v54; // r0@123
  unsigned int *v55; // r2@129
  signed int v56; // r1@131
  unsigned int *v57; // r2@133
  signed int v58; // r1@135
  int v59; // [sp+1Ch] [bp-94h]@94
  char *v60; // [sp+24h] [bp-8Ch]@94
  char *v61; // [sp+28h] [bp-88h]@94
  char *v62; // [sp+2Ch] [bp-84h]@94
  int v63; // [sp+34h] [bp-7Ch]@94
  int v64; // [sp+3Ch] [bp-74h]@25
  int v65; // [sp+40h] [bp-70h]@2
  void *v66; // [sp+48h] [bp-68h]@2
  void *v67; // [sp+4Ch] [bp-64h]@8
  char *v68; // [sp+50h] [bp-60h]@8
  int v69; // [sp+58h] [bp-58h]@8
  char v70; // [sp+5Ch] [bp-54h]@2
  int v71; // [sp+60h] [bp-50h]@65
  char v72; // [sp+68h] [bp-48h]@2
  int v73; // [sp+6Ch] [bp-44h]@79
  void *ptr; // [sp+74h] [bp-3Ch]@2
  char *v75; // [sp+78h] [bp-38h]@2
  char *v76; // [sp+7Ch] [bp-34h]@2
  int *v77; // [sp+80h] [bp-30h]@1
  int v78; // [sp+84h] [bp-2Ch]@114

  v3 = a3;
  j_CommandSelector<Entity>::results((int)&v77, (EffectCommand *)((char *)this + 20), a2);
  if ( j_Command::checkHasTargets<Entity>((__int64 **)&v77, v3) )
  {
    ptr = 0;
    v75 = 0;
    v76 = 0;
    j_CommandSelectorResults<Entity>::begin((int)&v72, &v77);
    j_CommandSelectorResults<Entity>::end((int)&v70, (int)&v77);
    v4 = (const Entity *)&v65;
    v5 = &v66;
    while ( j_SelectorIterator<Entity>::operator!=((int)&v72, (int)&v70) )
    {
      v6 = j_SelectorIterator<Entity>::operator*((int)&v72);
      v7 = (Mob *)v6;
      v8 = (*(int (**)(void))(*(_DWORD *)v6 + 488))();
      if ( j_EntityClassTree::isMob(v8) == 1 )
      {
        if ( j_Mob::hasAnyEffects(v7) == 1 )
        {
          j_Mob::removeAllEffects(v7);
          v9 = v75;
          if ( v75 == v76 )
          {
            v20 = v3;
            v21 = ptr;
            v22 = 0;
            v23 = (v75 - (_BYTE *)ptr) >> 2;
            if ( !v23 )
              v23 = 1;
            v24 = v23 + ((v75 - (_BYTE *)ptr) >> 2);
            v25 = v23 + ((v75 - (_BYTE *)ptr) >> 2);
            if ( 0 != v24 >> 30 )
              v25 = 0x3FFFFFFF;
            if ( v24 < v23 )
            if ( v25 )
            {
              if ( v25 >= 0x40000000 )
                sub_21E57F4();
              v22 = (char *)j_operator new(4 * v25);
              v9 = v75;
              v21 = ptr;
            }
            v26 = (Mob **)&v22[v9 - v21];
            *v26 = v7;
            if ( (v9 - v21) >> 2 )
              j___aeabi_memmove4_0((int)v22, (int)v21);
            v27 = (char *)(v26 + 1);
            if ( v21 )
              j_operator delete(v21);
            ptr = v22;
            v75 = v27;
            v76 = &v22[4 * v25];
            v3 = v20;
            v4 = (const Entity *)&v65;
            v5 = &v66;
          }
          else
            *(_DWORD *)v75 = v7;
            v75 += 4;
        }
        else
          sub_21E94B4((void **)&v69, "commands.effect.failure.notActive.all");
          j_CommandOutputParameter::CommandOutputParameter(v4, (int)v7);
          v66 = 0;
          v67 = 0;
          v68 = 0;
          v66 = j_operator new(8u);
          v68 = (char *)v66 + 8;
          v67 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                          (int)v4,
                          (int)v5,
                          (int)v66);
          j_CommandOutput::error(v3, &v69, (unsigned __int64 *)&v66);
          v10 = v67;
          v11 = v66;
          if ( v66 != v67 )
            do
              v14 = (int *)(*(_DWORD *)v11 - 12);
              if ( v14 != &dword_28898C0 )
              {
                v12 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
                  j_j_j_j__ZdlPv_9(v14);
              }
              v11 = (char *)v11 + 8;
            while ( v11 != v10 );
            v11 = v66;
          if ( v11 )
            j_operator delete(v11);
          v15 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v65 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
            else
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j__ZdlPv_9(v15);
          v16 = (void *)(v69 - 12);
          if ( (int *)(v69 - 12) != &dword_28898C0 )
            v30 = (unsigned int *)(v69 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          sub_21E94B4((void **)&v64, "player");
          j_CommandOutput::addToResultList((int)v3, (const char **)&v64, (int)v7);
          v17 = (void *)(v64 - 12);
          if ( (int *)(v64 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v64 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
      }
      j_SelectorIterator<Entity>::operator++((int)&v72);
    }
    v32 = v71;
    if ( v71 )
      v33 = (unsigned int *)(v71 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      else
        v34 = (*v33)--;
      if ( v34 == 1 )
        v35 = (unsigned int *)(v32 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
    v37 = v73;
    if ( v73 )
      v38 = (unsigned int *)(v73 + 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        v40 = (unsigned int *)(v37 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
    v42 = ptr;
    if ( ptr != v75 )
      sub_21E94B4((void **)&v63, "commands.effect.success.removed.all");
      j_CommandOutputParameter::CommandOutputParameter((int)&v59, (unsigned __int64 *)&ptr);
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v60 = (char *)j_operator new(8u);
      v62 = v60 + 8;
      v61 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v59,
                      (int)&v60,
                      (int)v60);
      j_CommandOutput::success((int)v3, &v63, (unsigned __int64 *)&v60);
      v44 = (int)v61;
      v43 = v60;
      if ( v60 != v61 )
          v47 = (int *)(*(_DWORD *)v43 - 12);
          if ( v47 != &dword_28898C0 )
            v45 = (unsigned int *)(*(_DWORD *)v43 - 4);
                v46 = __ldrex(v45);
              while ( __strex(v46 - 1, v45) );
              v46 = (*v45)--;
            if ( v46 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
          v43 += 8;
        while ( v43 != (char *)v44 );
        v43 = v60;
      if ( v43 )
        j_operator delete(v43);
      v48 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v59 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
      v49 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v63 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
      v42 = ptr;
    if ( v42 )
      j_operator delete(v42);
  }
  v50 = v78;
  if ( v78 )
    v51 = (unsigned int *)(v78 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
    else
      v52 = (*v51)--;
    if ( v52 == 1 )
      v53 = (unsigned int *)(v50 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
}


void __fastcall EffectCommand::clear(EffectCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EffectCommand::clear(this, a2, a3);
}


void __fastcall EffectCommand::execute(EffectCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EffectCommand *v3; // r7@1
  CommandOutput *v4; // r10@1
  const CommandOrigin *v5; // r5@1
  signed int v6; // r0@4
  char *v7; // r4@6
  int v8; // r6@6
  char *v9; // r4@8
  int v10; // r6@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int *v13; // r0@18
  void *v14; // r0@23
  void *v15; // r0@24
  void *v16; // r0@25
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  char *v19; // r4@30
  int v20; // r6@30
  unsigned int *v21; // r2@32
  signed int v22; // r1@34
  int *v23; // r0@40
  void *v24; // r0@45
  void *v25; // r0@46
  unsigned int *v26; // r2@52
  signed int v27; // r1@54
  int *v28; // r0@60
  void *v29; // r0@65
  void *v30; // r0@66
  int *v31; // r0@72
  void *v32; // r0@72
  char *i; // r4@74
  int v34; // r0@75
  Mob *v35; // r11@75
  __int16 v36; // r0@75
  int v37; // r6@76
  __int64 v38; // kr18_8@76
  char v39; // r0@76
  char *v40; // r11@80
  void *v41; // r4@80
  void *v42; // r6@80
  unsigned int *v43; // r2@82
  signed int v44; // r1@84
  int *v45; // r0@90
  void *v46; // r0@95
  void *v47; // r0@96
  unsigned int *v48; // r2@97
  signed int v49; // r1@99
  void *v50; // r0@103
  const void **v51; // r6@104
  void *v52; // r4@104
  void *v53; // r6@104
  unsigned int *v54; // r2@106
  signed int v55; // r1@108
  int *v56; // r0@114
  void *v57; // r0@119
  void *v58; // r0@120
  void *v59; // r0@121
  void *v60; // r0@122
  char *v61; // r0@123
  unsigned int *v62; // r2@126
  signed int v63; // r1@128
  unsigned int *v64; // r2@130
  signed int v65; // r1@132
  unsigned int *v66; // r2@134
  signed int v67; // r1@136
  unsigned int *v68; // r2@138
  signed int v69; // r1@140
  unsigned int *v70; // r2@142
  signed int v71; // r1@144
  unsigned int *v72; // r2@146
  signed int v73; // r1@148
  unsigned int *v74; // r2@150
  signed int v75; // r1@152
  int v76; // r4@191
  unsigned int *v77; // r1@192
  unsigned int v78; // r0@194
  unsigned int *v79; // r2@199
  signed int v80; // r1@201
  unsigned int *v81; // r2@203
  signed int v82; // r1@205
  unsigned int *v83; // r2@207
  signed int v84; // r1@209
  unsigned int *v85; // r2@211
  signed int v86; // r1@213
  unsigned int *v87; // r2@215
  signed int v88; // r1@217
  unsigned int *v89; // r2@219
  signed int v90; // r1@221
  unsigned int *v91; // r2@223
  signed int v92; // r1@225
  unsigned int *v93; // r5@257
  unsigned int v94; // r0@259
  int v95; // r4@264
  unsigned int *v96; // r1@265
  unsigned int v97; // r0@267
  unsigned int *v98; // r5@271
  unsigned int v99; // r0@273
  int v100; // r4@278
  unsigned int *v101; // r1@279
  unsigned int v102; // r0@281
  unsigned int *v103; // r5@285
  unsigned int v104; // r0@287
  int v105; // [sp+2Ch] [bp-124h]@80
  void *ptr; // [sp+34h] [bp-11Ch]@80
  void *v107; // [sp+38h] [bp-118h]@80
  char *v108; // [sp+3Ch] [bp-114h]@80
  int v109; // [sp+44h] [bp-10Ch]@80
  char *v110; // [sp+48h] [bp-108h]@104
  int v111; // [sp+4Ch] [bp-104h]@104
  int v112; // [sp+54h] [bp-FCh]@104
  int v113; // [sp+5Ch] [bp-F4h]@104
  int v114; // [sp+64h] [bp-ECh]@104
  void *v115; // [sp+6Ch] [bp-E4h]@104
  void *v116; // [sp+70h] [bp-E0h]@104
  char *v117; // [sp+74h] [bp-DCh]@104
  int v118; // [sp+7Ch] [bp-D4h]@104
  int v119; // [sp+84h] [bp-CCh]@103
  char v120; // [sp+88h] [bp-C8h]@78
  char v121; // [sp+98h] [bp-B8h]@74
  int v122; // [sp+9Ch] [bp-B4h]@191
  char v123; // [sp+A4h] [bp-ACh]@74
  int v124; // [sp+A8h] [bp-A8h]@264
  int *v125; // [sp+B0h] [bp-A0h]@73
  int v126; // [sp+B4h] [bp-9Ch]@278
  int v127; // [sp+B8h] [bp-98h]@72
  int v128; // [sp+BCh] [bp-94h]@6
  int v129; // [sp+C4h] [bp-8Ch]@6
  char *v130; // [sp+CCh] [bp-84h]@6
  char *v131; // [sp+D0h] [bp-80h]@6
  char *v132; // [sp+D4h] [bp-7Ch]@6
  int v133; // [sp+DCh] [bp-74h]@6
  int v134; // [sp+E0h] [bp-70h]@30
  int v135; // [sp+E8h] [bp-68h]@30
  char *v136; // [sp+F0h] [bp-60h]@30
  char *v137; // [sp+F4h] [bp-5Ch]@30
  char *v138; // [sp+F8h] [bp-58h]@30
  int v139; // [sp+100h] [bp-50h]@30
  int v140; // [sp+104h] [bp-4Ch]@8
  int v141; // [sp+10Ch] [bp-44h]@8
  char *v142; // [sp+114h] [bp-3Ch]@8
  char *v143; // [sp+118h] [bp-38h]@8
  char *v144; // [sp+11Ch] [bp-34h]@8
  int v145; // [sp+124h] [bp-2Ch]@8

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    j_j_j__ZNK13EffectCommand5clearERK13CommandOriginR13CommandOutput(this, a2, a3);
    return;
  }
  if ( *((_DWORD *)this + 31) > -1 )
    v6 = *((_DWORD *)this + 32);
    if ( v6 <= -1 )
    {
      sub_21E94B4((void **)&v139, "commands.generic.num.tooSmall");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v134, *((_DWORD *)v3 + 32));
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v135, 0);
      v136 = 0;
      v137 = 0;
      v138 = 0;
      v136 = (char *)j_operator new(0x10u);
      v138 = v136 + 16;
      v137 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v134,
                       (int)&v136,
                       (int)v136);
      j_CommandOutput::error(v4, &v139, (unsigned __int64 *)&v136);
      v20 = (int)v137;
      v19 = v136;
      if ( v136 != v137 )
      {
        do
        {
          v23 = (int *)(*(_DWORD *)v19 - 12);
          if ( v23 != &dword_28898C0 )
          {
            v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
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
              j_j_j_j__ZdlPv_9(v23);
          }
          v19 += 8;
        }
        while ( v19 != (char *)v20 );
        v19 = v136;
      }
      if ( v19 )
        j_operator delete(v19);
      v24 = (void *)(v135 - 12);
      if ( (int *)(v135 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v135 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
        else
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v25 = (void *)(v134 - 12);
      if ( (int *)(v134 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v134 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v16 = (void *)(v139 - 12);
      if ( (int *)(v139 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v139 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          goto LABEL_197;
        goto LABEL_196;
      return;
    }
    if ( v6 >= 256 )
      sub_21E94B4((void **)&v133, "commands.generic.num.tooBig");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v128, *((_DWORD *)v3 + 32));
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v129, 255);
      v130 = 0;
      v131 = 0;
      v132 = 0;
      v130 = (char *)j_operator new(0x10u);
      v132 = v130 + 16;
      v131 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v128,
                       (int)&v130,
                       (int)v130);
      j_CommandOutput::error(v4, &v133, (unsigned __int64 *)&v130);
      v8 = (int)v131;
      v7 = v130;
      if ( v130 != v131 )
          v28 = (int *)(*(_DWORD *)v7 - 12);
          if ( v28 != &dword_28898C0 )
            v26 = (unsigned int *)(*(_DWORD *)v7 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          v7 += 8;
        while ( v7 != (char *)v8 );
        v7 = v130;
      if ( v7 )
        j_operator delete(v7);
      v29 = (void *)(v129 - 12);
      if ( (int *)(v129 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v129 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v30 = (void *)(v128 - 12);
      if ( (int *)(v128 - 12) != &dword_28898C0 )
        v91 = (unsigned int *)(v128 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v16 = (void *)(v133 - 12);
      if ( (int *)(v133 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v133 - 4);
LABEL_196:
        v18 = (*v17)--;
LABEL_197:
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
        return;
    v31 = (int *)j_MobEffect::getResourceName(*((MobEffect **)v3 + 30));
    sub_21E8AF4(&v127, v31);
    j_CommandOutput::set<std::string>((int)v4, "effect", &v127);
    v32 = (void *)(v127 - 12);
    if ( (int *)(v127 - 12) != &dword_28898C0 )
      v87 = (unsigned int *)(v127 - 4);
      if ( &pthread_create )
        __dmb();
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
      else
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    j_CommandOutput::set<int>((int)v4, "amplifier", *((_DWORD *)v3 + 32));
    j_CommandOutput::set<int>((int)v4, "seconds", *((_DWORD *)v3 + 31));
    j_CommandSelector<Entity>::results((int)&v125, (EffectCommand *)((char *)v3 + 20), v5);
    if ( !j_Command::checkHasTargets<Entity>((__int64 **)&v125, v4) )
LABEL_278:
      v100 = v126;
      if ( v126 )
        v101 = (unsigned int *)(v126 + 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 == 1 )
          v103 = (unsigned int *)(v100 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v100 + 8))(v100);
          if ( &pthread_create )
            __dmb();
            do
              v104 = __ldrex(v103);
            while ( __strex(v104 - 1, v103) );
          else
            v104 = (*v103)--;
          if ( v104 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v100 + 12))(v100);
    j_CommandSelectorResults<Entity>::begin((int)&v123, &v125);
    j_CommandSelectorResults<Entity>::end((int)&v121, (int)&v125);
    for ( i = &v123; ; j_SelectorIterator<Entity>::operator++((int)i) )
      if ( !j_SelectorIterator<Entity>::operator!=((int)i, (int)&v121) )
        v76 = v122;
        if ( v122 )
          v77 = (unsigned int *)(v122 + 4);
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
            v78 = (*v77)--;
          if ( v78 == 1 )
            v93 = (unsigned int *)(v76 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 8))(v76);
                v94 = __ldrex(v93);
              while ( __strex(v94 - 1, v93) );
              v94 = (*v93)--;
            if ( v94 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 12))(v76);
        v95 = v124;
        if ( v124 )
          v96 = (unsigned int *)(v124 + 4);
              v97 = __ldrex(v96);
            while ( __strex(v97 - 1, v96) );
            v97 = (*v96)--;
          if ( v97 == 1 )
            v98 = (unsigned int *)(v95 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v95 + 8))(v95);
                v99 = __ldrex(v98);
              while ( __strex(v99 - 1, v98) );
              v99 = (*v98)--;
            if ( v99 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v95 + 12))(v95);
        goto LABEL_278;
      v34 = j_SelectorIterator<Entity>::operator*((int)i);
      v35 = (Mob *)v34;
      v36 = (*(int (**)(void))(*(_DWORD *)v34 + 488))();
      if ( j_EntityClassTree::isMob(v36) == 1 )
        v37 = j_MobEffect::getId(*((MobEffect **)v3 + 30));
        v38 = *(_QWORD *)((char *)v3 + 124);
        v39 = 0;
        if ( !*((_BYTE *)v3 + 132) )
          v39 = 1;
        j_MobEffectInstance::MobEffectInstance((int)&v120, v37, 20 * v38, SHIDWORD(v38), 0, v39);
        if ( *((_DWORD *)v3 + 31) < 1 )
          if ( j_Mob::hasEffect(v35, *((const MobEffect **)v3 + 30)) == 1 )
            j_Mob::removeEffect(v35, v37);
          j_Mob::addEffect(v35, (const MobEffectInstance *)&v120);
        sub_21E94B4((void **)&v119, "player");
        j_CommandOutput::addToResultList((int)v4, (const char **)&v119, (int)v35);
        v50 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)(v119 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        sub_21E94B4((void **)&v118, "commands.effect.success");
        v51 = (const void **)j_MobEffect::getDescriptionId(*((MobEffect **)v3 + 30));
        v110 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v110, *((_DWORD *)*v51 - 3) + 1);
        sub_21E7408((const void **)&v110, "%", 1u);
        sub_21E72F0((const void **)&v110, v51);
        j_CommandOutputParameter::CommandOutputParameter(&v111, (int *)&v110);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v112, *((_DWORD *)v3 + 32));
        j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v113, (int)v35);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v114, *((_DWORD *)v3 + 31));
        v115 = 0;
        v116 = 0;
        v117 = 0;
        v115 = j_operator new(0x20u);
        v117 = (char *)v115 + 32;
        v116 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v111,
                         (int)&v115,
                         (int)v115);
        j_CommandOutput::success((int)v4, &v118, (unsigned __int64 *)&v115);
        v52 = v116;
        v53 = v115;
        if ( v115 != v116 )
            v56 = (int *)(*(_DWORD *)v53 - 12);
            if ( v56 != &dword_28898C0 )
              v54 = (unsigned int *)(*(_DWORD *)v53 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
              }
              else
                v55 = (*v54)--;
              if ( v55 <= 0 )
                j_j_j_j__ZdlPv_9(v56);
            v53 = (char *)v53 + 8;
          while ( v53 != v52 );
          v53 = v115;
        if ( v53 )
          j_operator delete(v53);
        i = &v123;
        v57 = (void *)(v114 - 12);
        if ( (int *)(v114 - 12) != &dword_28898C0 )
          v66 = (unsigned int *)(v114 - 4);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        v58 = (void *)(v113 - 12);
        if ( (int *)(v113 - 12) != &dword_28898C0 )
          v68 = (unsigned int *)(v113 - 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j__ZdlPv_9(v58);
        v59 = (void *)(v112 - 12);
        if ( (int *)(v112 - 12) != &dword_28898C0 )
          v70 = (unsigned int *)(v112 - 4);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j__ZdlPv_9(v59);
        v60 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v111 - 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j__ZdlPv_9(v60);
        v61 = v110 - 12;
        if ( (int *)(v110 - 12) != &dword_28898C0 )
          v74 = (unsigned int *)(v110 - 4);
              v75 = __ldrex(v74);
            while ( __strex(v75 - 1, v74) );
            v75 = (*v74)--;
          if ( v75 <= 0 )
            j_j_j_j__ZdlPv_9(v61);
        v47 = (void *)(v118 - 12);
        if ( (int *)(v118 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v118 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            goto LABEL_159;
          goto LABEL_158;
        sub_21E94B4((void **)&v109, "commands.effect.failure.notAMob");
        j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v105, (int)v35);
        ptr = 0;
        v107 = 0;
        v108 = 0;
        ptr = j_operator new(8u);
        v108 = (char *)ptr + 8;
        v107 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v105,
                         (int)&ptr,
                         (int)ptr);
        j_CommandOutput::error(v4, &v109, (unsigned __int64 *)&ptr);
        v40 = i;
        v41 = v107;
        v42 = ptr;
        if ( ptr != v107 )
            v45 = (int *)(*(_DWORD *)v42 - 12);
            if ( v45 != &dword_28898C0 )
              v43 = (unsigned int *)(*(_DWORD *)v42 - 4);
                  v44 = __ldrex(v43);
                while ( __strex(v44 - 1, v43) );
                v44 = (*v43)--;
              if ( v44 <= 0 )
                j_j_j_j__ZdlPv_9(v45);
            v42 = (char *)v42 + 8;
          while ( v42 != v41 );
          v42 = ptr;
        if ( v42 )
          j_operator delete(v42);
        i = v40;
        v46 = (void *)(v105 - 12);
        if ( (int *)(v105 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v105 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
        v47 = (void *)(v109 - 12);
        if ( (int *)(v109 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v109 - 4);
LABEL_159:
            if ( v49 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
            continue;
LABEL_158:
          v49 = (*v48)--;
          goto LABEL_159;
  sub_21E94B4((void **)&v145, "commands.generic.num.tooSmall");
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v140, *((_DWORD *)v3 + 31));
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v141, 0);
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v142 = (char *)j_operator new(0x10u);
  v144 = v142 + 16;
  v143 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                   (int)&v140,
                   (int)&v142,
                   (int)v142);
  j_CommandOutput::error(v4, &v145, (unsigned __int64 *)&v142);
  v10 = (int)v143;
  v9 = v142;
  if ( v142 != v143 )
    do
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v9 += 8;
    while ( v9 != (char *)v10 );
    v9 = v142;
  if ( v9 )
    j_operator delete(v9);
  v14 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v141 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
    else
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v140 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v145 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      goto LABEL_197;
    goto LABEL_196;
}


void __fastcall EffectCommand::setup(EffectCommand *this, CommandRegistry *a2)
{
  EffectCommand *v2; // r10@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  MobEffect **v10; // r4@18
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  int *v13; // r0@28
  MobEffect *v14; // r9@28
  char **v15; // r0@28
  char *v16; // r1@29
  char *v17; // r0@31
  void *v18; // r0@33
  __int64 v19; // r2@34
  void *v20; // r0@34
  char v21; // r0@35
  char v22; // r0@38
  int v23; // r0@41
  __int64 v24; // r2@41
  void *v25; // r0@41
  void *v26; // r0@42
  char v27; // r0@43
  char v28; // r0@46
  char v29; // r0@49
  char v30; // r0@52
  char v31; // r0@55
  int v32; // r0@58
  void *v33; // r0@58
  void *v34; // r0@59
  void *v35; // r0@60
  void *v36; // r0@61
  void *v37; // r0@62
  char **v38; // r4@63
  char **v39; // r6@63
  unsigned int *v40; // r2@65
  signed int v41; // r1@67
  int *v42; // r0@73
  unsigned int *v43; // r2@79
  signed int v44; // r1@81
  unsigned int *v45; // r2@83
  signed int v46; // r1@85
  unsigned int *v47; // r2@95
  signed int v48; // r1@97
  int v49; // r2@99
  signed int v50; // r1@101
  int v51; // r2@103
  signed int v52; // r1@105
  int v53; // r2@107
  signed int v54; // r1@109
  unsigned int *v55; // r2@111
  signed int v56; // r1@113
  unsigned int *v57; // r2@115
  signed int v58; // r1@117
  unsigned int *v59; // r2@119
  signed int v60; // r1@121
  unsigned int *v61; // r2@123
  signed int v62; // r1@125
  unsigned int *v63; // r2@127
  signed int v64; // r1@129
  char v65; // [sp+20h] [bp-1B0h]@58
  int v66; // [sp+2Ch] [bp-1A4h]@58
  char v67; // [sp+48h] [bp-188h]@55
  int v68; // [sp+54h] [bp-17Ch]@59
  char v69; // [sp+70h] [bp-160h]@52
  int v70; // [sp+7Ch] [bp-154h]@60
  char v71; // [sp+98h] [bp-138h]@49
  int v72; // [sp+A4h] [bp-12Ch]@61
  char v73; // [sp+C0h] [bp-110h]@46
  int v74; // [sp+CCh] [bp-104h]@62
  __int64 v75; // [sp+E8h] [bp-E8h]@43
  char v76; // [sp+F0h] [bp-E0h]@41
  int v77; // [sp+FCh] [bp-D4h]@41
  char v78; // [sp+118h] [bp-B8h]@38
  int v79; // [sp+124h] [bp-ACh]@42
  __int64 v80; // [sp+140h] [bp-90h]@35
  int v81; // [sp+14Ch] [bp-84h]@34
  int v82; // [sp+154h] [bp-7Ch]@33
  char *v83; // [sp+158h] [bp-78h]@28
  MobEffect *v84; // [sp+15Ch] [bp-74h]@28
  char **v85; // [sp+160h] [bp-70h]@18
  char **v86; // [sp+164h] [bp-6Ch]@18
  char **v87; // [sp+168h] [bp-68h]@18
  int v88; // [sp+16Ch] [bp-64h]@1
  int v89; // [sp+170h] [bp-60h]@1
  void *v90; // [sp+174h] [bp-5Ch]@1
  int v91; // [sp+178h] [bp-58h]@1
  char *v92; // [sp+17Ch] [bp-54h]@1
  int v93; // [sp+184h] [bp-4Ch]@1
  __int16 v94; // [sp+18Ch] [bp-44h]@38
  __int16 v95; // [sp+190h] [bp-40h]@41
  __int16 v96; // [sp+198h] [bp-38h]@46
  __int16 v97; // [sp+19Ch] [bp-34h]@49
  __int16 v98; // [sp+1A0h] [bp-30h]@52
  __int16 v99; // [sp+1A4h] [bp-2Ch]@55
  __int16 v100; // [sp+1A8h] [bp-28h]@58

  v2 = this;
  sub_21E94B4((void **)&v93, "ClearEffects");
  sub_21E94B4((void **)&v88, "clear");
  v89 = 1;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v3 = j_operator new(8u);
  v90 = v3;
  v92 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,EffectCommand::Mode> const*,std::pair<std::string,EffectCommand::Mode>*>(
         (int)&v88,
         (int)&v90,
         (int)v3);
  v91 = v4;
  j_CommandRegistry::addEnumValues<EffectCommand::Mode>((int)v2, (int)&v93, (unsigned __int64 *)&v90);
  if ( v3 != (void *)v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 8;
    }
    while ( v3 != (void *)v4 );
    v3 = v90;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v93 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v10 = (MobEffect **)MobEffect::mMobEffects;
  do
    if ( *v10 )
      v13 = (int *)j_MobEffect::getResourceName(*v10);
      v14 = *v10;
      sub_21E8AF4((int *)&v83, v13);
      v84 = v14;
      v15 = v86;
      if ( v86 == v87 )
        j_std::vector<std::pair<std::string,MobEffect const*>,std::allocator<std::pair<std::string,MobEffect const*>>>::_M_emplace_back_aux<std::pair<std::string,MobEffect const*>>(
          (unsigned __int64 *)&v85,
          (int)&v83);
        v16 = v83;
      else
        *v86 = v83;
        v16 = (char *)&unk_28898CC;
        v83 = (char *)&unk_28898CC;
        v15[1] = (char *)v14;
        v86 = v15 + 2;
      v17 = v16 - 12;
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v16 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
    ++v10;
  while ( (_DWORD **)v10 != &MobEffect::mMobEffects[26] );
  sub_21E94B4((void **)&v82, "Effect");
  j_CommandRegistry::addEnumValues<MobEffect const*>((int)v2, (int)&v82, (unsigned __int64 *)&v85);
  v18 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v82 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v81, "effect");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v81, "commands.effect.description", 1, 0, 0);
  v20 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v49 = v81 - 4;
        v50 = __ldrex((unsigned int *)v19);
        HIDWORD(v19) = v50 - 1;
      while ( __strex(v50 - 1, (unsigned int *)v19) );
      v50 = *(_DWORD *)v19;
      HIDWORD(v19) = *(_DWORD *)v19 - 1;
      *(_DWORD *)v19 = HIDWORD(v19);
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  LODWORD(v19) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v80, 1, v19);
  v21 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  __dmb();
  if ( !(v21 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Entity>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id);
  v94 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v78,
    &v94,
    (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
    "player",
    0,
    20,
    -1);
  v22 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EffectCommand::Mode>(void)::id;
  if ( !(v22 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EffectCommand::Mode>(void)::id) )
    type_id<CommandRegistry,EffectCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EffectCommand::Mode>(void)::id);
  v95 = type_id<CommandRegistry,EffectCommand::Mode>(void)::id;
  v23 = j_CommandParameterData::CommandParameterData(
          (int)&v76,
          &v95,
          (unsigned int)CommandRegistry::parse<EffectCommand::Mode>,
          "clear",
          0,
          116,
          -1);
  j_CommandRegistry::registerOverload<EffectCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "effect",
    v80,
    v23);
  v25 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v51 = v77 - 4;
        v52 = __ldrex((unsigned int *)v24);
        HIDWORD(v24) = v52 - 1;
      while ( __strex(v52 - 1, (unsigned int *)v24) );
      v52 = *(_DWORD *)v24;
      HIDWORD(v24) = *(_DWORD *)v24 - 1;
      *(_DWORD *)v24 = HIDWORD(v24);
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v53 = v79 - 4;
        v54 = __ldrex((unsigned int *)v24);
        HIDWORD(v24) = v54 - 1;
      while ( __strex(v54 - 1, (unsigned int *)v24) );
      v54 = *(_DWORD *)v24;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  LODWORD(v24) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v75, 1, v24);
  v27 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v27 & 1)
  v96 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
    (int)&v73,
    &v96,
  v28 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,MobEffect const*>(void)::id;
  if ( !(v28 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,MobEffect const*>(void)::id) )
    type_id<CommandRegistry,MobEffect const*>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,MobEffect const*>(void)::id);
  v97 = type_id<CommandRegistry,MobEffect const*>(void)::id;
    (int)&v71,
    &v97,
    (unsigned int)CommandRegistry::parse<MobEffect const*>,
    120,
  v29 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v29 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v98 = type_id<CommandRegistry,int>(void)::id;
    (int)&v69,
    &v98,
    (unsigned int)CommandRegistry::parse<int>,
    "seconds",
    124,
    1,
  v30 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v30 & 1)
  v99 = type_id<CommandRegistry,int>(void)::id;
    (int)&v67,
    &v99,
    "amplifier",
    128,
  v31 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id;
  if ( !(v31 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id) )
    type_id<CommandRegistry,bool>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,bool>(void)::id);
  v100 = type_id<CommandRegistry,bool>(void)::id;
  v32 = j_CommandParameterData::CommandParameterData(
          (int)&v65,
          &v100,
          (unsigned int)CommandRegistry::parse<bool>,
          "hideParticles",
          132,
          1,
  j_CommandRegistry::registerOverload<EffectCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v75,
    v32);
  v33 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v66 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v68 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v70 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v72 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v74 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v39 = v86;
  v38 = v85;
  if ( v85 != v86 )
      v42 = (int *)(*v38 - 12);
      if ( v42 != &dword_28898C0 )
        v40 = (unsigned int *)(*v38 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v38 += 2;
    while ( v38 != v39 );
    v38 = v85;
  if ( v38 )
    j_operator delete(v38);
}
