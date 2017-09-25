

HorseContainerManagerController *__fastcall HorseScreenController::_getInventoryGridSize(HorseScreenController *this, int a2)
{
  int *v2; // r3@1
  int *v3; // r2@1
  HorseContainerManagerController *result; // r0@1
  int v5; // r4@2
  unsigned int *v6; // r1@3
  unsigned int v7; // r6@5
  unsigned int *v8; // r1@9
  unsigned int *v9; // r5@15

  v2 = (int *)this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = (int *)((char *)this + 4);
  result = *(HorseContainerManagerController **)(a2 + 628);
  if ( result )
  {
    v5 = *(_DWORD *)(a2 + 632);
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
    result = (HorseContainerManagerController *)HorseContainerManagerController::getInventoryGridSize(result, v2, v3);
      v8 = (unsigned int *)(v5 + 4);
          result = (HorseContainerManagerController *)__ldrex(v8);
        while ( __strex((unsigned int)result - 1, v8) );
        result = (HorseContainerManagerController *)(*v8)--;
      if ( result == (HorseContainerManagerController *)1 )
        v9 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (HorseContainerManagerController *)__ldrex(v9);
          while ( __strex((unsigned int)result - 1, v9) );
        }
        else
          result = (HorseContainerManagerController *)(*v9)--;
        if ( result == (HorseContainerManagerController *)1 )
          result = (HorseContainerManagerController *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


signed int __fastcall HorseScreenController::_isStillValid(HorseScreenController *this)
{
  HorseScreenController *v1; // r5@1
  __int64 v2; // kr00_8@2
  unsigned int *v3; // r1@3
  unsigned int v4; // r2@5
  int v5; // r6@8
  unsigned int *v6; // r1@9
  unsigned int v7; // r0@11
  unsigned int *v8; // r7@15
  unsigned int v9; // r0@17
  int v11; // r1@24
  int v12; // r2@24
  signed int result; // r0@25
  int v19; // [sp+0h] [bp-20h]@24
  int v20; // [sp+4h] [bp-1Ch]@24
  int v21; // [sp+8h] [bp-18h]@24

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1 )
    goto LABEL_29;
  v2 = *(_QWORD *)((char *)v1 + 628);
  if ( HIDWORD(v2) )
  {
    v3 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v5 = HorseContainerManagerController::getEntity((HorseContainerManagerController *)v2);
    v6 = (unsigned int *)(HIDWORD(v2) + 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  if ( !v5 )
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 316))(v5) )
  _R4 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106));
  v11 = *(_DWORD *)(v5 + 76);
  v12 = *(_DWORD *)(v5 + 80);
  v19 = *(_DWORD *)(v5 + 72);
  v20 = v11;
  v21 = v12;
  _R0 = ClientInstanceScreenModel::distanceSqrFromPlayerToBlockCenter(
          *((ClientInstanceScreenModel **)v1 + 106),
          (const Vec3 *)&v19);
  __asm
    VMOV            S0, R4
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = ContainerScreenController::_isStillValid(v1);
  else
LABEL_29:
    result = 0;
  return result;
}


int __fastcall HorseScreenController::_getChestInventorySize(HorseScreenController *this)
{
  HorseScreenController *v1; // r1@1
  HorseContainerManagerController *v2; // r0@1
  int v3; // r4@2
  unsigned int *v4; // r1@3
  unsigned int v5; // r2@5
  int result; // r0@7
  int v7; // r5@9
  unsigned int *v8; // r1@10
  unsigned int v9; // r0@12
  unsigned int *v10; // r6@16
  unsigned int v11; // r0@18

  v1 = this;
  v2 = (HorseContainerManagerController *)*((_DWORD *)this + 157);
  if ( v2 )
  {
    v3 = *((_DWORD *)v1 + 158);
    if ( v3 )
    {
      v4 = (unsigned int *)(v3 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
      }
      else
        ++*v4;
    }
    v7 = HorseContainerManagerController::getChestInventorySize(v2);
      v8 = (unsigned int *)(v3 + 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v3 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    result = v7;
  }
  else
    result = 0;
  return result;
}


void __fastcall HorseScreenController::_setAcceptedItems(HorseScreenController *this)
{
  __int64 v1; // kr00_8@1
  unsigned int *v2; // r1@2
  unsigned int v3; // r2@4
  unsigned int *v4; // r1@8
  unsigned int v5; // r0@10
  unsigned int *v6; // r5@14
  unsigned int v7; // r0@16

  v1 = *(_QWORD *)((char *)this + 628);
  if ( HIDWORD(v1) )
  {
    v2 = (unsigned int *)(HIDWORD(v1) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex(v2);
      while ( __strex(v3 + 1, v2) );
    }
    else
      ++*v2;
  }
  HorseContainerManagerController::setAcceptedItems((HorseContainerManagerController *)v1);
    v4 = (unsigned int *)(HIDWORD(v1) + 4);
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(HIDWORD(v1) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v1) + 8))(HIDWORD(v1));
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v1) + 12))(HIDWORD(v1));
}


HorseContainerManagerController *__fastcall HorseScreenController::_getEquipGridSize(HorseScreenController *this, int a2)
{
  int *v2; // r3@1
  int *v3; // r2@1
  HorseContainerManagerController *result; // r0@1
  int v5; // r4@2
  unsigned int *v6; // r1@3
  unsigned int v7; // r6@5
  unsigned int *v8; // r1@9
  unsigned int *v9; // r5@15

  v2 = (int *)this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = (int *)((char *)this + 4);
  result = *(HorseContainerManagerController **)(a2 + 628);
  if ( result )
  {
    v5 = *(_DWORD *)(a2 + 632);
    if ( v5 )
    {
      v6 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
    result = (HorseContainerManagerController *)HorseContainerManagerController::getEquipGridSize(result, v2, v3);
      v8 = (unsigned int *)(v5 + 4);
          result = (HorseContainerManagerController *)__ldrex(v8);
        while ( __strex((unsigned int)result - 1, v8) );
        result = (HorseContainerManagerController *)(*v8)--;
      if ( result == (HorseContainerManagerController *)1 )
        v9 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (HorseContainerManagerController *)__ldrex(v9);
          while ( __strex((unsigned int)result - 1, v9) );
        }
        else
          result = (HorseContainerManagerController *)(*v9)--;
        if ( result == (HorseContainerManagerController *)1 )
          result = (HorseContainerManagerController *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


int __fastcall HorseScreenController::HorseScreenController(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r4@1
  int v5; // r1@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@4
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r6@14
  unsigned int v12; // r0@16
  __int64 v13; // r0@21
  int v14; // r5@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r0@24
  unsigned int *v17; // r6@28
  unsigned int v18; // r0@30
  int v19; // r5@35
  unsigned int *v20; // r1@36
  unsigned int v21; // r0@38
  unsigned int *v22; // r6@42
  unsigned int v23; // r0@44
  __int64 v24; // kr00_8@49
  unsigned int *v25; // r1@50
  unsigned int v26; // r2@52
  signed int v27; // r8@55
  unsigned int *v28; // r1@56
  unsigned int v29; // r0@58
  unsigned int *v30; // r5@62
  unsigned int v31; // r0@64
  __int64 v32; // kr08_8@69
  unsigned int *v33; // r1@70
  unsigned int v34; // r2@72
  __int16 v35; // r9@75
  unsigned int *v36; // r1@76
  unsigned int v37; // r0@78
  unsigned int *v38; // r5@82
  unsigned int v39; // r0@84
  __int64 v40; // kr10_8@89
  unsigned int *v41; // r1@90
  unsigned int v42; // r2@92
  signed int v43; // r6@95
  unsigned int *v44; // r1@96
  unsigned int v45; // r0@98
  unsigned int *v46; // r7@102
  unsigned int v47; // r0@104
  _DWORD *v48; // r0@109
  __int64 v49; // r1@109
  __int64 v50; // r1@109
  _DWORD *v51; // r0@113
  __int64 v52; // r1@113
  __int64 v53; // r1@113
  _DWORD *v54; // r0@117
  __int64 v55; // r1@117
  __int64 v56; // r1@117
  _BYTE *v57; // r0@121
  __int64 v58; // r1@121
  __int64 v59; // r1@121
  _WORD *v60; // r0@125
  __int64 v61; // r1@125
  __int64 v62; // r1@125
  _BYTE *v63; // r0@129
  unsigned int v64; // r3@129
  unsigned int v65; // r5@129
  __int64 v66; // r1@129
  __int64 v67; // r1@129
  _BYTE *v68; // r0@133
  __int64 v69; // r1@133
  _BYTE *v70; // r0@137
  __int64 v71; // r1@137
  __int64 v72; // r1@137
  _WORD *v73; // r0@141
  int v74; // r5@141
  __int64 v75; // r1@141
  __int64 v76; // r1@141
  _WORD *v77; // r0@145
  __int64 v78; // r1@145
  __int64 v79; // r1@145
  _DWORD *v80; // r0@149
  __int64 v81; // r1@149
  __int64 v82; // r1@149
  __int64 v83; // r6@153
  _QWORD *v84; // r0@153
  __int64 v85; // r1@153
  __int64 v86; // r1@153
  _DWORD *v87; // r0@157
  __int64 v88; // r1@157
  __int64 v89; // r1@157
  _DWORD *v90; // r0@161
  __int64 v91; // r1@161
  __int64 v92; // r1@161
  int v93; // r5@165
  _DWORD *v94; // r0@165
  __int64 v95; // r1@165
  void *v96; // r0@167
  int v97; // r5@168
  _DWORD *v98; // r0@168
  __int64 v99; // r1@168
  void *v100; // r0@170
  unsigned int *v102; // r2@172
  signed int v103; // r1@174
  unsigned int *v104; // r2@176
  signed int v105; // r1@178
  _DWORD *v106; // [sp+8h] [bp-260h]@168
  __int64 v107; // [sp+10h] [bp-258h]@168
  int v108; // [sp+1Ch] [bp-24Ch]@168
  _DWORD *v109; // [sp+20h] [bp-248h]@165
  __int64 v110; // [sp+28h] [bp-240h]@165
  int v111; // [sp+34h] [bp-234h]@165
  void *v112; // [sp+38h] [bp-230h]@161
  __int64 v113; // [sp+40h] [bp-228h]@161
  _DWORD *v114; // [sp+48h] [bp-220h]@161
  __int64 v115; // [sp+50h] [bp-218h]@161
  int v116; // [sp+58h] [bp-210h]@161
  void *v117; // [sp+5Ch] [bp-20Ch]@157
  __int64 v118; // [sp+64h] [bp-204h]@157
  _DWORD *v119; // [sp+6Ch] [bp-1FCh]@157
  __int64 v120; // [sp+74h] [bp-1F4h]@157
  int v121; // [sp+7Ch] [bp-1ECh]@157
  void *v122; // [sp+80h] [bp-1E8h]@153
  __int64 v123; // [sp+88h] [bp-1E0h]@153
  _QWORD *v124; // [sp+90h] [bp-1D8h]@153
  __int64 v125; // [sp+98h] [bp-1D0h]@153
  int v126; // [sp+A0h] [bp-1C8h]@153
  void *v127; // [sp+A4h] [bp-1C4h]@149
  __int64 v128; // [sp+ACh] [bp-1BCh]@149
  _DWORD *v129; // [sp+B4h] [bp-1B4h]@149
  __int64 v130; // [sp+BCh] [bp-1ACh]@149
  int v131; // [sp+C4h] [bp-1A4h]@149
  void *v132; // [sp+C8h] [bp-1A0h]@145
  __int64 v133; // [sp+D0h] [bp-198h]@145
  _WORD *v134; // [sp+D8h] [bp-190h]@145
  __int64 v135; // [sp+E0h] [bp-188h]@145
  int v136; // [sp+E8h] [bp-180h]@145
  void *v137; // [sp+ECh] [bp-17Ch]@141
  __int64 v138; // [sp+F4h] [bp-174h]@141
  _WORD *v139; // [sp+FCh] [bp-16Ch]@141
  __int64 v140; // [sp+104h] [bp-164h]@141
  int v141; // [sp+10Ch] [bp-15Ch]@141
  void *v142; // [sp+110h] [bp-158h]@137
  __int64 v143; // [sp+118h] [bp-150h]@137
  _BYTE *v144; // [sp+120h] [bp-148h]@137
  __int64 v145; // [sp+128h] [bp-140h]@137
  int v146; // [sp+130h] [bp-138h]@137
  void *v147; // [sp+134h] [bp-134h]@133
  __int64 v148; // [sp+13Ch] [bp-12Ch]@133
  _BYTE *v149; // [sp+144h] [bp-124h]@133
  void (*v150)(void); // [sp+14Ch] [bp-11Ch]@133
  int (__fastcall *v151)(int *); // [sp+150h] [bp-118h]@133
  int v152; // [sp+154h] [bp-114h]@133
  void *v153; // [sp+158h] [bp-110h]@129
  __int64 v154; // [sp+160h] [bp-108h]@129
  _BYTE *v155; // [sp+168h] [bp-100h]@129
  __int64 v156; // [sp+170h] [bp-F8h]@129
  int v157; // [sp+178h] [bp-F0h]@129
  void *v158; // [sp+17Ch] [bp-ECh]@125
  __int64 v159; // [sp+184h] [bp-E4h]@125
  _WORD *v160; // [sp+18Ch] [bp-DCh]@125
  __int64 v161; // [sp+194h] [bp-D4h]@125
  int v162; // [sp+19Ch] [bp-CCh]@125
  void *v163; // [sp+1A0h] [bp-C8h]@121
  __int64 v164; // [sp+1A8h] [bp-C0h]@121
  _BYTE *v165; // [sp+1B0h] [bp-B8h]@121
  __int64 v166; // [sp+1B8h] [bp-B0h]@121
  int v167; // [sp+1C0h] [bp-A8h]@121
  void *v168; // [sp+1C4h] [bp-A4h]@117
  __int64 v169; // [sp+1CCh] [bp-9Ch]@117
  _DWORD *v170; // [sp+1D4h] [bp-94h]@117
  __int64 v171; // [sp+1DCh] [bp-8Ch]@117
  int v172; // [sp+1E4h] [bp-84h]@117
  void *v173; // [sp+1E8h] [bp-80h]@113
  __int64 v174; // [sp+1F0h] [bp-78h]@113
  _DWORD *v175; // [sp+1F8h] [bp-70h]@113
  __int64 v176; // [sp+200h] [bp-68h]@113
  int v177; // [sp+208h] [bp-60h]@113
  void *v178; // [sp+20Ch] [bp-5Ch]@109
  __int64 v179; // [sp+214h] [bp-54h]@109
  _DWORD *v180; // [sp+21Ch] [bp-4Ch]@109
  __int64 v181; // [sp+224h] [bp-44h]@109
  int v182; // [sp+22Ch] [bp-3Ch]@109
  char v183; // [sp+230h] [bp-38h]@21
  int v184; // [sp+234h] [bp-34h]@21
  int v185; // [sp+238h] [bp-30h]@1
  int v186; // [sp+23Ch] [bp-2Ch]@1
  __int64 v187; // [sp+240h] [bp-28h]@1

  v187 = a3;
  v4 = a1;
  v185 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v186 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  BlockContainerScreenController::BlockContainerScreenController(a1, (int)&v185, v187, HIDWORD(v187), a4);
  v8 = v186;
  if ( v186 )
    v9 = (unsigned int *)(v186 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v4 = &off_26E20A0;
  *(_BYTE *)(v4 + 636) = 0;
  ContainerScreenController::createContainerManagerController<HorseContainerManagerModel,HorseContainerManagerController,EntityUniqueID const&>(
    (int)&v183,
    v4,
    &v187);
  v13 = *(_QWORD *)&v183;
  *(_DWORD *)&v183 = 0;
  v184 = 0;
  *(_DWORD *)(v4 + 628) = v13;
  v14 = *(_DWORD *)(v4 + 632);
  *(_DWORD *)(v4 + 632) = HIDWORD(v13);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = v184;
  if ( v184 )
    v20 = (unsigned int *)(v184 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = *(_QWORD *)(v4 + 628);
  if ( HIDWORD(v24) )
    v25 = (unsigned int *)(HIDWORD(v24) + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      ++*v25;
  v27 = HorseContainerManagerController::canWearSaddle((HorseContainerManagerController *)v24);
    v28 = (unsigned int *)(HIDWORD(v24) + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(HIDWORD(v24) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v24) + 8))(HIDWORD(v24));
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v24) + 12))(HIDWORD(v24));
  v32 = *(_QWORD *)(v4 + 628);
  if ( HIDWORD(v32) )
    v33 = (unsigned int *)(HIDWORD(v32) + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      ++*v33;
  v35 = HorseContainerManagerController::canWearArmor((HorseContainerManagerController *)v32);
    v36 = (unsigned int *)(HIDWORD(v32) + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(HIDWORD(v32) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v32) + 8))(HIDWORD(v32));
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v32) + 12))(HIDWORD(v32));
  v40 = *(_QWORD *)(v4 + 628);
  if ( HIDWORD(v40) )
    v41 = (unsigned int *)(HIDWORD(v40) + 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 + 1, v41) );
      ++*v41;
  v43 = HorseContainerManagerController::canWearCarpet((HorseContainerManagerController *)v40);
    v44 = (unsigned int *)(HIDWORD(v40) + 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      v46 = (unsigned int *)(HIDWORD(v40) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v40) + 8))(HIDWORD(v40));
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v40) + 12))(HIDWORD(v40));
  v182 = 1061799841;
  v48 = operator new(4u);
  LODWORD(v49) = sub_11A8D2A;
  *v48 = v4;
  HIDWORD(v49) = sub_11A8CFC;
  v180 = v48;
  v181 = v49;
  v178 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v179 = v50;
  ScreenController::bindBool(v4, &v182, (int)&v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  v177 = 968488662;
  v51 = operator new(4u);
  LODWORD(v52) = sub_11A8D6C;
  *v51 = v4;
  HIDWORD(v52) = sub_11A8D60;
  v175 = v51;
  v176 = v52;
  v173 = operator new(1u);
  LODWORD(v53) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v53) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v174 = v53;
  ScreenController::bindGridSize(v4, &v177, (int)&v175, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  StringHash::StringHash<char [23]>(&v172, (int)"#equip_grid_dimensions");
  v54 = operator new(4u);
  LODWORD(v55) = sub_11A8DAE;
  *v54 = v4;
  HIDWORD(v55) = sub_11A8DA2;
  v170 = v54;
  v171 = v55;
  v168 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v169 = v56;
  ScreenController::bindGridSize(v4, &v172, (int)&v170, (int)&v168);
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  v167 = -300940651;
  v57 = operator new(1u);
  LODWORD(v58) = sub_11A8DF0;
  *v57 = v27;
  HIDWORD(v58) = sub_11A8DE4;
  v165 = v57;
  v166 = v58;
  v163 = operator new(1u);
  LODWORD(v59) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v59) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v164 = v59;
  ScreenController::bindBool(v4, &v167, (int)&v165, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  if ( (_DWORD)v166 )
    ((void (*)(void))v166)();
  v162 = 1104066183;
  v60 = operator new(2u);
  LODWORD(v61) = sub_11A8E3C;
  *v60 = v35 | ((_WORD)v43 << 8);
  HIDWORD(v61) = sub_11A8E26;
  v160 = v60;
  v161 = v61;
  v158 = operator new(1u);
  LODWORD(v62) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v62) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v159 = v62;
  ScreenController::bindBool(v4, &v162, (int)&v160, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  v157 = -1815913090;
  v63 = operator new(3u);
  v64 = (v27 << 16) & 0xFFFFFFFE | v35 & 1;
  v65 = v64 | (v43 << 8);
  LODWORD(v66) = sub_11A8E92;
  HIDWORD(v66) = sub_11A8E72;
  *(_WORD *)v63 = v65;
  v63[2] = v64 >> 16;
  v155 = v63;
  v156 = v66;
  v153 = operator new(1u);
  LODWORD(v67) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v67) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v154 = v67;
  ScreenController::bindBool(v4, &v157, (int)&v155, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  StringHash::StringHash<char [27]>(&v152, (int)"#has_armor_and_saddle_slot");
  v68 = operator new(3u);
  *(_WORD *)v68 = v65;
  v68[2] = v65 >> 16;
  v149 = v68;
  v150 = (void (*)(void))sub_11A8EE4;
  v151 = sub_11A8ECC;
  v147 = operator new(1u);
  LODWORD(v69) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v69) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v148 = v69;
  ScreenController::bindBool(v4, &v152, (int)&v149, (int)&v147);
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  if ( v150 )
    v150();
  v146 = 1975164157;
  v70 = operator new(1u);
  LODWORD(v71) = sub_11A8F2A;
  *v70 = v43;
  HIDWORD(v71) = sub_11A8F1E;
  v144 = v70;
  v145 = v71;
  v142 = operator new(1u);
  LODWORD(v72) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v72) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v143 = v72;
  ScreenController::bindBool(v4, &v146, (int)&v144, (int)&v142);
  if ( (_DWORD)v143 )
    ((void (*)(void))v143)();
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  v141 = -40624222;
  v73 = operator new(2u);
  v74 = v43 | (v27 << 8);
  LODWORD(v75) = sub_11A8F76;
  *v73 = v74;
  HIDWORD(v75) = sub_11A8F60;
  v139 = v73;
  v140 = v75;
  v137 = operator new(1u);
  LODWORD(v76) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v76) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v138 = v76;
  ScreenController::bindBool(v4, &v141, (int)&v139, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  StringHash::StringHash<char [28]>(&v136, (int)"#has_carpet_and_saddle_slot");
  v77 = operator new(2u);
  LODWORD(v78) = sub_11A8FC2;
  *v77 = v43 | ((_WORD)v27 << 8);
  HIDWORD(v78) = sub_11A8FAC;
  v134 = v77;
  v135 = v78;
  v132 = operator new(1u);
  LODWORD(v79) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v79) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v133 = v79;
  ScreenController::bindBool(v4, &v136, (int)&v134, (int)&v132);
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v131 = 429774855;
  v80 = operator new(4u);
  LODWORD(v81) = sub_11A9148;
  *v80 = v4;
  HIDWORD(v81) = sub_11A8FF8;
  v129 = v80;
  v130 = v81;
  v127 = operator new(1u);
  LODWORD(v82) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v82) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v128 = v82;
  ScreenController::bindBool(v4, &v131, (int)&v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  v126 = -127870361;
  v83 = v187;
  v84 = operator new(8u);
  LODWORD(v85) = sub_11A918C;
  *v84 = v83;
  HIDWORD(v85) = sub_11A917E;
  v124 = v84;
  v125 = v85;
  v122 = operator new(1u);
  LODWORD(v86) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v86) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v123 = v86;
  ScreenController::bindString(v4, &v126, (int)&v124, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  v121 = 793777690;
  v87 = operator new(4u);
  LODWORD(v88) = sub_11A91D8;
  *v87 = v4;
  HIDWORD(v88) = sub_11A91C6;
  v119 = v87;
  v120 = v88;
  v117 = operator new(1u);
  LODWORD(v89) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v89) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v89;
  ScreenController::bindBool(v4, &v121, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v116 = 933500568;
  v90 = operator new(4u);
  LODWORD(v91) = sub_11A921E;
  *v90 = v4;
  HIDWORD(v91) = sub_11A920E;
  v114 = v90;
  v115 = v91;
  v112 = operator new(1u);
  LODWORD(v92) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v92) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v92;
  ScreenController::bindBool(v4, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  sub_1590164((void **)&v111, "horse_interactive_tabs");
  v93 = MinecraftScreenController::_getNameId((ScreenController *)v4, (int **)&v111);
  v94 = operator new(4u);
  LODWORD(v95) = sub_11A927A;
  *v94 = v4;
  HIDWORD(v95) = sub_11A9254;
  v109 = v94;
  v110 = v95;
  ScreenController::registerToggleChangeEventHandler(v4, v93, (int)&v109);
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  v96 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v111 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v96);
  sub_1590164((void **)&v108, "button.controller_select");
  v97 = MinecraftScreenController::_getNameId((ScreenController *)v4, (int **)&v108);
  v98 = operator new(4u);
  LODWORD(v99) = sub_11A92FE;
  *v98 = v4;
  HIDWORD(v99) = sub_11A92B0;
  v106 = v98;
  v107 = v99;
  ScreenController::registerButtonClickHandler(v4, v97, (int)&v106);
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  v100 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v108 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v100);
  HorseScreenController::_setAcceptedItems((HorseScreenController *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


void __fastcall HorseScreenController::_registerCoalesceOrder(HorseScreenController *this)
{
  HorseScreenController::_registerCoalesceOrder(this);
}


void __fastcall HorseScreenController::_registerCoalesceOrder(HorseScreenController *this)
{
  HorseScreenController *v1; // r8@1
  int v2; // r9@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  int *v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r9@16
  int v12; // r0@16
  int v13; // r5@17
  int v14; // r7@17
  bool v15; // zf@18
  int v16; // r4@21
  bool v17; // zf@24
  _DWORD *v18; // r0@28
  int *v19; // r1@29
  int v20; // r9@32
  int v21; // r0@32
  int v22; // r5@33
  int v23; // r7@33
  bool v24; // zf@34
  int v25; // r4@37
  bool v26; // zf@40
  _DWORD *v27; // r0@44
  int *v28; // r1@45
  int v29; // r9@48
  int v30; // r0@48
  int v31; // r5@49
  int v32; // r7@49
  bool v33; // zf@50
  int v34; // r4@53
  bool v35; // zf@56
  _DWORD *v36; // r0@60
  int *v37; // r1@61
  int v38; // r9@64
  int v39; // r0@64
  int v40; // r5@65
  int v41; // r7@65
  bool v42; // zf@66
  int v43; // r4@69
  bool v44; // zf@72
  _DWORD *v45; // r0@76
  unsigned __int64 *v46; // r8@77
  int v47; // r0@77
  int v48; // r9@77
  int v49; // r0@77
  int v50; // r5@78
  int v51; // r7@78
  bool v52; // zf@79
  int v53; // r4@82
  bool v54; // zf@85
  int *v55; // r1@88
  _DWORD *v56; // r0@89
  int v57; // r9@92
  int v58; // r0@92
  int v59; // r5@93
  int v60; // r7@93
  bool v61; // zf@94
  int v62; // r4@97
  bool v63; // zf@100
  _DWORD *v64; // r0@104
  int *v65; // r1@105
  int v66; // r9@108
  int v67; // r0@108
  int v68; // r5@109
  int v69; // r7@109
  bool v70; // zf@110
  int v71; // r4@113
  bool v72; // zf@116
  _DWORD *v73; // r0@120
  int *v74; // r1@121
  int v75; // r9@124
  int v76; // r0@124
  int v77; // r5@125
  int v78; // r7@125
  bool v79; // zf@126
  int v80; // r4@129
  bool v81; // zf@132
  _DWORD *v82; // r0@136
  int *v83; // r1@137
  int v84; // r9@140
  int v85; // r0@140
  int v86; // r5@141
  int v87; // r7@141
  bool v88; // zf@142
  int v89; // r4@145
  bool v90; // zf@148
  _DWORD *v91; // r0@152
  int v92; // r0@153
  int v93; // r9@153
  int v94; // r0@153
  int v95; // r5@154
  int v96; // r7@154
  bool v97; // zf@155
  int v98; // r4@158
  bool v99; // zf@161
  int *v100; // r1@164
  _DWORD *v101; // r0@165
  int v102; // r9@168
  int v103; // r0@168
  int v104; // r5@169
  int v105; // r7@169
  bool v106; // zf@170
  int v107; // r4@173
  bool v108; // zf@176
  _DWORD *v109; // r0@180
  int *v110; // r1@181
  int v111; // r9@184
  int v112; // r0@184
  int v113; // r5@185
  int v114; // r7@185
  bool v115; // zf@186
  int v116; // r4@189
  bool v117; // zf@192
  _DWORD *v118; // r0@196
  int *v119; // r1@197
  int v120; // r9@200
  int v121; // r0@200
  int v122; // r5@201
  int v123; // r7@201
  bool v124; // zf@202
  int v125; // r4@205
  bool v126; // zf@208
  _DWORD *v127; // r0@212
  int *v128; // r1@213
  int v129; // r9@216
  int v130; // r0@216
  int v131; // r5@217
  int v132; // r7@217
  bool v133; // zf@218
  int v134; // r4@221
  bool v135; // zf@224
  _DWORD *v136; // r0@228
  int v137; // r0@229
  int v138; // r9@229
  int v139; // r0@229
  int v140; // r5@230
  int v141; // r7@230
  bool v142; // zf@231
  int v143; // r4@234
  bool v144; // zf@237
  int *v145; // r1@240
  _DWORD *v146; // r0@241
  int v147; // r9@244
  int v148; // r0@244
  int v149; // r5@245
  int v150; // r7@245
  bool v151; // zf@246
  int v152; // r4@249
  bool v153; // zf@252
  _DWORD *v154; // r0@256
  int *v155; // r1@257
  int v156; // r9@260
  int v157; // r0@260
  int v158; // r5@261
  int v159; // r7@261
  bool v160; // zf@262
  int v161; // r4@265
  bool v162; // zf@268
  _DWORD *v163; // r0@272
  int *v164; // r1@273
  int v165; // r9@276
  int v166; // r0@276
  int v167; // r5@277
  int v168; // r7@277
  bool v169; // zf@278
  int v170; // r4@281
  bool v171; // zf@284
  _DWORD *v172; // r0@288
  int *v173; // r1@289
  int v174; // r9@292
  int v175; // r0@292
  int v176; // r5@293
  int v177; // r7@293
  bool v178; // zf@294
  int v179; // r4@297
  bool v180; // zf@300
  _DWORD *v181; // r0@304
  int v182; // r0@305
  int *v183; // r4@305
  int *v184; // r6@305
  unsigned int *v185; // r2@307
  signed int v186; // r1@309
  int *v187; // r0@315
  int *v188; // r4@320
  int *v189; // r6@320
  unsigned int *v190; // r2@322
  signed int v191; // r1@324
  int *v192; // r0@330
  int *v193; // r4@335
  int *v194; // r6@335
  unsigned int *v195; // r2@337
  signed int v196; // r1@339
  int *v197; // r0@345
  int *v198; // r4@350
  int *v199; // r6@350
  unsigned int *v200; // r2@352
  signed int v201; // r1@354
  int *v202; // r0@360
  int *v203; // [sp+4h] [bp-54h]@229
  int *v204; // [sp+8h] [bp-50h]@229
  int *v205; // [sp+Ch] [bp-4Ch]@229
  int *v206; // [sp+10h] [bp-48h]@153
  int *v207; // [sp+14h] [bp-44h]@153
  int *v208; // [sp+18h] [bp-40h]@153
  int *v209; // [sp+1Ch] [bp-3Ch]@77
  int *v210; // [sp+20h] [bp-38h]@77
  int *v211; // [sp+24h] [bp-34h]@77
  int *v212; // [sp+28h] [bp-30h]@1
  int *v213; // [sp+2Ch] [bp-2Ch]@1
  int *v214; // [sp+30h] [bp-28h]@1

  v1 = this;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v2 = 0x18u % dword_27DB7B8;
  v3 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
  if ( v3 )
  {
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 24;
      if ( v5 == 24 )
        v6 = *(_DWORD *)(v4 + 4) == 24;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DB7B8 == v2 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v8 = v3 == 0;
    if ( !v8 )
      v9 = (int *)(v3 + 8);
LABEL_15:
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v212,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DB7B4,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v213 == v214 )
    goto LABEL_15;
  sub_15901A4(v213, v9);
  ++v213;
LABEL_16:
  v11 = 0x1Au % dword_27DB7B8;
  v12 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 26;
    if ( v14 == 26 )
      v15 = *(_DWORD *)(v13 + 4) == 26;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DB7B8 == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 26;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DB7B4,
            v11,
            0x1Au,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v212,
      v19);
  else
    sub_15901A4(v213, v19);
    ++v213;
  v20 = 4u % dword_27DB7B8;
  v21 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 4;
    if ( v23 == 4 )
      v24 = *(_DWORD *)(v22 + 4) == 4;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DB7B8 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 4;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            4u,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_15901A4(v213, v28);
  v29 = 0x17u % dword_27DB7B8;
  v30 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 23;
    if ( v32 == 23 )
      v33 = *(_DWORD *)(v31 + 4) == 23;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DB7B8 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 23;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x17u,
            (int)v36);
  v37 = (int *)(v30 + 8);
      v37);
    sub_15901A4(v213, v37);
  v38 = 0x18u % dword_27DB7B8;
  v39 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
  if ( !v39 )
    goto LABEL_76;
  v40 = *(_DWORD *)v39;
  v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
    v42 = v41 == 24;
    if ( v41 == 24 )
      v42 = *(_DWORD *)(v40 + 4) == 24;
    if ( v42 )
    v43 = *(_DWORD *)v40;
    if ( *(_DWORD *)v40 )
      v41 = *(_DWORD *)(v43 + 12);
      v39 = v40;
      v40 = *(_DWORD *)v40;
      if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27DB7B8 == v38 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_76:
    v45 = operator new(0x10u);
    *v45 = 0;
    v45[1] = 24;
    v45[2] = &unk_28898CC;
    v39 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v38,
            0x18u,
            (int)v45);
  v46 = (unsigned __int64 *)((char *)v1 + 572);
  v47 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v46,
          (int **)(v39 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v47, (unsigned __int64 *)&v212);
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v48 = 0x1Au % dword_27DB7B8;
  v49 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
  if ( v49 )
    v50 = *(_DWORD *)v49;
    v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
      v52 = v51 == 26;
      if ( v51 == 26 )
        v52 = *(_DWORD *)(v50 + 4) == 26;
      if ( v52 )
      v53 = *(_DWORD *)v50;
      if ( *(_DWORD *)v50 )
        v51 = *(_DWORD *)(v53 + 12);
        v49 = v50;
        v50 = *(_DWORD *)v50;
        if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27DB7B8 == v48 )
      goto LABEL_89;
    v54 = v49 == 0;
    if ( v49 )
      v49 = *(_DWORD *)v49;
      v54 = v49 == 0;
    if ( !v54 )
      v55 = (int *)(v49 + 8);
LABEL_91:
        (unsigned __int64 *)&v209,
        v55);
      goto LABEL_92;
LABEL_89:
  v56 = operator new(0x10u);
  *v56 = 0;
  v56[1] = 26;
  v56[2] = &unk_28898CC;
  v55 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DB7B4,
                  v48,
                  0x1Au,
                  (int)v56)
              + 8);
  if ( v210 == v211 )
    goto LABEL_91;
  sub_15901A4(v210, v55);
  ++v210;
LABEL_92:
  v57 = 4u % dword_27DB7B8;
  v58 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
  if ( !v58 )
    goto LABEL_104;
  v59 = *(_DWORD *)v58;
  v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
    v61 = v60 == 4;
    if ( v60 == 4 )
      v61 = *(_DWORD *)(v59 + 4) == 4;
    if ( v61 )
    v62 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 )
      v60 = *(_DWORD *)(v62 + 12);
      v58 = v59;
      v59 = *(_DWORD *)v59;
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DB7B8 == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_104:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 4;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            (int)v64);
  v65 = (int *)(v58 + 8);
      (unsigned __int64 *)&v209,
      v65);
    sub_15901A4(v210, v65);
    ++v210;
  v66 = 0x17u % dword_27DB7B8;
  v67 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 23;
    if ( v69 == 23 )
      v70 = *(_DWORD *)(v68 + 4) == 23;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DB7B8 == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 23;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = (int *)(v67 + 8);
      v74);
    sub_15901A4(v210, v74);
  v75 = 0x18u % dword_27DB7B8;
  v76 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
  if ( !v76 )
    goto LABEL_136;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 24;
    if ( v78 == 24 )
      v79 = *(_DWORD *)(v77 + 4) == 24;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DB7B8 == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_136:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 24;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            (int)v82);
  v83 = (int *)(v76 + 8);
      v83);
    sub_15901A4(v210, v83);
  v84 = 0x1Au % dword_27DB7B8;
  v85 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
  if ( !v85 )
    goto LABEL_152;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 26;
    if ( v87 == 26 )
      v88 = *(_DWORD *)(v86 + 4) == 26;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DB7B8 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_152:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 26;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v85 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v92, (unsigned __int64 *)&v209);
  v206 = 0;
  v207 = 0;
  v208 = 0;
  v93 = 0x17u % dword_27DB7B8;
  v94 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
  if ( v94 )
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 23;
      if ( v96 == 23 )
        v97 = *(_DWORD *)(v95 + 4) == 23;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DB7B8 == v93 )
      goto LABEL_165;
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( !v99 )
      v100 = (int *)(v94 + 8);
LABEL_167:
        (unsigned __int64 *)&v206,
        v100);
      goto LABEL_168;
LABEL_165:
  v101 = operator new(0x10u);
  *v101 = 0;
  v101[1] = 23;
  v101[2] = &unk_28898CC;
  v100 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DB7B4,
                   v93,
                   0x17u,
                   (int)v101)
               + 8);
  if ( v207 == v208 )
    goto LABEL_167;
  sub_15901A4(v207, v100);
  ++v207;
LABEL_168:
  v102 = 0x1Au % dword_27DB7B8;
  v103 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
  if ( !v103 )
    goto LABEL_180;
  v104 = *(_DWORD *)v103;
  v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
    v106 = v105 == 26;
    if ( v105 == 26 )
      v106 = *(_DWORD *)(v104 + 4) == 26;
    if ( v106 )
    v107 = *(_DWORD *)v104;
    if ( *(_DWORD *)v104 )
      v105 = *(_DWORD *)(v107 + 12);
      v103 = v104;
      v104 = *(_DWORD *)v104;
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DB7B8 == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_180:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 26;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DB7B4,
             v102,
             0x1Au,
             (int)v109);
  v110 = (int *)(v103 + 8);
      (unsigned __int64 *)&v206,
      v110);
    sub_15901A4(v207, v110);
    ++v207;
  v111 = 0x18u % dword_27DB7B8;
  v112 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
  if ( !v112 )
    goto LABEL_196;
  v113 = *(_DWORD *)v112;
  v114 = *(_DWORD *)(*(_DWORD *)v112 + 12);
    v115 = v114 == 24;
    if ( v114 == 24 )
      v115 = *(_DWORD *)(v113 + 4) == 24;
    if ( v115 )
    v116 = *(_DWORD *)v113;
    if ( *(_DWORD *)v113 )
      v114 = *(_DWORD *)(v116 + 12);
      v112 = v113;
      v113 = *(_DWORD *)v113;
      if ( *(_DWORD *)(v116 + 12) % (unsigned int)dword_27DB7B8 == v111 )
  v117 = v112 == 0;
  if ( v112 )
    v112 = *(_DWORD *)v112;
    v117 = v112 == 0;
  if ( v117 )
LABEL_196:
    v118 = operator new(0x10u);
    *v118 = 0;
    v118[1] = 24;
    v118[2] = &unk_28898CC;
    v112 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v111,
             0x18u,
             (int)v118);
  v119 = (int *)(v112 + 8);
      v119);
    sub_15901A4(v207, v119);
  v120 = 4u % dword_27DB7B8;
  v121 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
  if ( !v121 )
    goto LABEL_212;
  v122 = *(_DWORD *)v121;
  v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
    v124 = v123 == 4;
    if ( v123 == 4 )
      v124 = *(_DWORD *)(v122 + 4) == 4;
    if ( v124 )
    v125 = *(_DWORD *)v122;
    if ( *(_DWORD *)v122 )
      v123 = *(_DWORD *)(v125 + 12);
      v121 = v122;
      v122 = *(_DWORD *)v122;
      if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DB7B8 == v120 )
  v126 = v121 == 0;
  if ( v121 )
    v121 = *(_DWORD *)v121;
    v126 = v121 == 0;
  if ( v126 )
LABEL_212:
    v127 = operator new(0x10u);
    *v127 = 0;
    v127[1] = 4;
    v127[2] = &unk_28898CC;
    v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v120,
             4u,
             (int)v127);
  v128 = (int *)(v121 + 8);
      v128);
    sub_15901A4(v207, v128);
  v129 = 0x17u % dword_27DB7B8;
  v130 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
  if ( !v130 )
    goto LABEL_228;
  v131 = *(_DWORD *)v130;
  v132 = *(_DWORD *)(*(_DWORD *)v130 + 12);
    v133 = v132 == 23;
    if ( v132 == 23 )
      v133 = *(_DWORD *)(v131 + 4) == 23;
    if ( v133 )
    v134 = *(_DWORD *)v131;
    if ( *(_DWORD *)v131 )
      v132 = *(_DWORD *)(v134 + 12);
      v130 = v131;
      v131 = *(_DWORD *)v131;
      if ( *(_DWORD *)(v134 + 12) % (unsigned int)dword_27DB7B8 == v129 )
  v135 = v130 == 0;
  if ( v130 )
    v130 = *(_DWORD *)v130;
    v135 = v130 == 0;
  if ( v135 )
LABEL_228:
    v136 = operator new(0x10u);
    *v136 = 0;
    v136[1] = 23;
    v136[2] = &unk_28898CC;
    v130 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v129,
             0x17u,
             (int)v136);
  v137 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v46,
           (int **)(v130 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v137, (unsigned __int64 *)&v206);
  v203 = 0;
  v204 = 0;
  v205 = 0;
  v138 = 4u % dword_27DB7B8;
  v139 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
  if ( v139 )
    v140 = *(_DWORD *)v139;
    v141 = *(_DWORD *)(*(_DWORD *)v139 + 12);
      v142 = v141 == 4;
      if ( v141 == 4 )
        v142 = *(_DWORD *)(v140 + 4) == 4;
      if ( v142 )
      v143 = *(_DWORD *)v140;
      if ( *(_DWORD *)v140 )
        v141 = *(_DWORD *)(v143 + 12);
        v139 = v140;
        v140 = *(_DWORD *)v140;
        if ( *(_DWORD *)(v143 + 12) % (unsigned int)dword_27DB7B8 == v138 )
      goto LABEL_241;
    v144 = v139 == 0;
    if ( v139 )
      v139 = *(_DWORD *)v139;
      v144 = v139 == 0;
    if ( !v144 )
      v145 = (int *)(v139 + 8);
LABEL_243:
        (unsigned __int64 *)&v203,
        v145);
      goto LABEL_244;
LABEL_241:
  v146 = operator new(0x10u);
  *v146 = 0;
  v146[1] = 4;
  v146[2] = &unk_28898CC;
  v145 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v138,
                   4u,
                   (int)v146)
  if ( v204 == v205 )
    goto LABEL_243;
  sub_15901A4(v204, v145);
  ++v204;
LABEL_244:
  v147 = 0x17u % dword_27DB7B8;
  v148 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
  if ( !v148 )
    goto LABEL_256;
  v149 = *(_DWORD *)v148;
  v150 = *(_DWORD *)(*(_DWORD *)v148 + 12);
    v151 = v150 == 23;
    if ( v150 == 23 )
      v151 = *(_DWORD *)(v149 + 4) == 23;
    if ( v151 )
    v152 = *(_DWORD *)v149;
    if ( *(_DWORD *)v149 )
      v150 = *(_DWORD *)(v152 + 12);
      v148 = v149;
      v149 = *(_DWORD *)v149;
      if ( *(_DWORD *)(v152 + 12) % (unsigned int)dword_27DB7B8 == v147 )
  v153 = v148 == 0;
  if ( v148 )
    v148 = *(_DWORD *)v148;
    v153 = v148 == 0;
  if ( v153 )
LABEL_256:
    v154 = operator new(0x10u);
    *v154 = 0;
    v154[1] = 23;
    v154[2] = &unk_28898CC;
    v148 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v147,
             (int)v154);
  v155 = (int *)(v148 + 8);
      (unsigned __int64 *)&v203,
      v155);
    sub_15901A4(v204, v155);
    ++v204;
  v156 = 0x18u % dword_27DB7B8;
  v157 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
  if ( !v157 )
    goto LABEL_272;
  v158 = *(_DWORD *)v157;
  v159 = *(_DWORD *)(*(_DWORD *)v157 + 12);
    v160 = v159 == 24;
    if ( v159 == 24 )
      v160 = *(_DWORD *)(v158 + 4) == 24;
    if ( v160 )
    v161 = *(_DWORD *)v158;
    if ( *(_DWORD *)v158 )
      v159 = *(_DWORD *)(v161 + 12);
      v157 = v158;
      v158 = *(_DWORD *)v158;
      if ( *(_DWORD *)(v161 + 12) % (unsigned int)dword_27DB7B8 == v156 )
  v162 = v157 == 0;
  if ( v157 )
    v157 = *(_DWORD *)v157;
    v162 = v157 == 0;
  if ( v162 )
LABEL_272:
    v163 = operator new(0x10u);
    *v163 = 0;
    v163[1] = 24;
    v163[2] = &unk_28898CC;
    v157 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v156,
             (int)v163);
  v164 = (int *)(v157 + 8);
      v164);
    sub_15901A4(v204, v164);
  v165 = 0x1Au % dword_27DB7B8;
  v166 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
  if ( !v166 )
    goto LABEL_288;
  v167 = *(_DWORD *)v166;
  v168 = *(_DWORD *)(*(_DWORD *)v166 + 12);
    v169 = v168 == 26;
    if ( v168 == 26 )
      v169 = *(_DWORD *)(v167 + 4) == 26;
    if ( v169 )
    v170 = *(_DWORD *)v167;
    if ( *(_DWORD *)v167 )
      v168 = *(_DWORD *)(v170 + 12);
      v166 = v167;
      v167 = *(_DWORD *)v167;
      if ( *(_DWORD *)(v170 + 12) % (unsigned int)dword_27DB7B8 == v165 )
  v171 = v166 == 0;
  if ( v166 )
    v166 = *(_DWORD *)v166;
    v171 = v166 == 0;
  if ( v171 )
LABEL_288:
    v172 = operator new(0x10u);
    *v172 = 0;
    v172[1] = 26;
    v172[2] = &unk_28898CC;
    v166 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v165,
             (int)v172);
  v173 = (int *)(v166 + 8);
      v173);
    sub_15901A4(v204, v173);
  v174 = 4u % dword_27DB7B8;
  v175 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
  if ( !v175 )
    goto LABEL_304;
  v176 = *(_DWORD *)v175;
  v177 = *(_DWORD *)(*(_DWORD *)v175 + 12);
    v178 = v177 == 4;
    if ( v177 == 4 )
      v178 = *(_DWORD *)(v176 + 4) == 4;
    if ( v178 )
    v179 = *(_DWORD *)v176;
    if ( *(_DWORD *)v176 )
      v177 = *(_DWORD *)(v179 + 12);
      v175 = v176;
      v176 = *(_DWORD *)v176;
      if ( *(_DWORD *)(v179 + 12) % (unsigned int)dword_27DB7B8 == v174 )
  v180 = v175 == 0;
  if ( v175 )
    v175 = *(_DWORD *)v175;
    v180 = v175 == 0;
  if ( v180 )
LABEL_304:
    v181 = operator new(0x10u);
    *v181 = 0;
    v181[1] = 4;
    v181[2] = &unk_28898CC;
    v175 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v174,
             (int)v181);
  v182 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v175 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v182, (unsigned __int64 *)&v203);
  v184 = v204;
  v183 = v203;
  if ( v203 != v204 )
    do
      v187 = (int *)(*v183 - 12);
      if ( v187 != &dword_28898C0 )
        v185 = (unsigned int *)(*v183 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v186 = __ldrex(v185);
          while ( __strex(v186 - 1, v185) );
        }
        else
          v186 = (*v185)--;
        if ( v186 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v187);
      ++v183;
    while ( v183 != v184 );
    v183 = v203;
  if ( v183 )
    operator delete(v183);
  v189 = v207;
  v188 = v206;
  if ( v206 != v207 )
      v192 = (int *)(*v188 - 12);
      if ( v192 != &dword_28898C0 )
        v190 = (unsigned int *)(*v188 - 4);
            v191 = __ldrex(v190);
          while ( __strex(v191 - 1, v190) );
          v191 = (*v190)--;
        if ( v191 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v192);
      ++v188;
    while ( v188 != v189 );
    v188 = v206;
  if ( v188 )
    operator delete(v188);
  v194 = v210;
  v193 = v209;
  if ( v209 != v210 )
      v197 = (int *)(*v193 - 12);
      if ( v197 != &dword_28898C0 )
        v195 = (unsigned int *)(*v193 - 4);
            v196 = __ldrex(v195);
          while ( __strex(v196 - 1, v195) );
          v196 = (*v195)--;
        if ( v196 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v197);
      ++v193;
    while ( v193 != v194 );
    v193 = v209;
  if ( v193 )
    operator delete(v193);
  v199 = v213;
  v198 = v212;
  if ( v212 != v213 )
      v202 = (int *)(*v198 - 12);
      if ( v202 != &dword_28898C0 )
        v200 = (unsigned int *)(*v198 - 4);
            v201 = __ldrex(v200);
          while ( __strex(v201 - 1, v200) );
          v201 = (*v200)--;
        if ( v201 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v202);
      ++v198;
    while ( v198 != v199 );
    v198 = v212;
  if ( v198 )
    operator delete(v198);
}


void __fastcall HorseScreenController::~HorseScreenController(HorseScreenController *this)
{
  HorseScreenController::~HorseScreenController(this);
}


int __fastcall HorseScreenController::addStaticScreenVars(HorseScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  HorseScreenController *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$chest_size");
  v5 = HorseScreenController::_getChestInventorySize(v3);
  Json::Value::Value((Json::Value *)&v7, v5);
  Json::Value::operator=(v4, (const Json::Value *)&v7);
  Json::Value::~Value((Json::Value *)&v7);
  return ContainerScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall HorseScreenController::_registerAutoPlaceOrder(HorseScreenController *this)
{
  HorseScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  int v8; // r9@10
  int v9; // r0@10
  int v10; // r5@11
  int v11; // r7@11
  bool v12; // zf@12
  int v13; // r4@15
  bool v14; // zf@18
  _DWORD *v15; // r0@22
  char **v16; // r0@23
  char *v17; // r1@24
  char *v18; // r0@26
  int v19; // r9@27
  int v20; // r0@27
  int v21; // r5@28
  int v22; // r7@28
  bool v23; // zf@29
  int v24; // r4@32
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  char **v27; // r0@40
  char *v28; // r1@41
  char *v29; // r0@43
  int v30; // r9@44
  int v31; // r0@44
  int v32; // r5@45
  int v33; // r7@45
  bool v34; // zf@46
  int v35; // r4@49
  bool v36; // zf@52
  _DWORD *v37; // r0@56
  char **v38; // r0@57
  char *v39; // r1@58
  char *v40; // r0@60
  int v41; // r9@61
  int v42; // r0@61
  int v43; // r5@62
  int v44; // r7@62
  bool v45; // zf@63
  int v46; // r4@66
  bool v47; // zf@69
  _DWORD *v48; // r0@73
  unsigned __int64 *v49; // r8@74
  int v50; // r0@74
  int v51; // r9@74
  int v52; // r0@74
  int v53; // r5@75
  int v54; // r7@75
  bool v55; // zf@76
  int v56; // r4@79
  bool v57; // zf@82
  _DWORD *v58; // r0@86
  char **v59; // r0@87
  char *v60; // r1@88
  char *v61; // r0@90
  int v62; // r9@91
  int v63; // r0@91
  int v64; // r5@92
  int v65; // r7@92
  bool v66; // zf@93
  int v67; // r4@96
  bool v68; // zf@99
  _DWORD *v69; // r0@103
  char **v70; // r0@104
  char *v71; // r1@105
  char *v72; // r0@107
  int v73; // r9@108
  int v74; // r0@108
  int v75; // r5@109
  int v76; // r7@109
  bool v77; // zf@110
  int v78; // r4@113
  bool v79; // zf@116
  _DWORD *v80; // r0@120
  char **v81; // r0@121
  char *v82; // r1@122
  char *v83; // r0@124
  int v84; // r9@125
  int v85; // r0@125
  int v86; // r5@126
  int v87; // r7@126
  bool v88; // zf@127
  int v89; // r4@130
  bool v90; // zf@133
  _DWORD *v91; // r0@137
  int v92; // r0@138
  int v93; // r9@138
  int v94; // r0@138
  int v95; // r5@139
  int v96; // r7@139
  bool v97; // zf@140
  int v98; // r4@143
  bool v99; // zf@146
  _DWORD *v100; // r0@150
  char **v101; // r0@151
  char *v102; // r1@152
  char *v103; // r0@154
  int v104; // r9@155
  int v105; // r0@155
  int v106; // r5@156
  int v107; // r7@156
  bool v108; // zf@157
  int v109; // r4@160
  bool v110; // zf@163
  _DWORD *v111; // r0@167
  char **v112; // r0@168
  char *v113; // r1@169
  char *v114; // r0@171
  int v115; // r9@172
  int v116; // r0@172
  int v117; // r5@173
  int v118; // r7@173
  bool v119; // zf@174
  int v120; // r4@177
  bool v121; // zf@180
  _DWORD *v122; // r0@184
  char **v123; // r0@185
  char *v124; // r1@186
  char *v125; // r0@188
  int v126; // r9@189
  int v127; // r0@189
  int v128; // r5@190
  int v129; // r7@190
  bool v130; // zf@191
  int v131; // r4@194
  bool v132; // zf@197
  _DWORD *v133; // r0@201
  int v134; // r0@202
  int v135; // r9@202
  int v136; // r0@202
  int v137; // r5@203
  int v138; // r7@203
  bool v139; // zf@204
  int v140; // r4@207
  bool v141; // zf@210
  _DWORD *v142; // r0@214
  char **v143; // r0@215
  char *v144; // r1@216
  char *v145; // r0@218
  int v146; // r9@219
  int v147; // r0@219
  int v148; // r5@220
  int v149; // r7@220
  bool v150; // zf@221
  int v151; // r4@224
  bool v152; // zf@227
  _DWORD *v153; // r0@231
  char **v154; // r0@232
  char *v155; // r1@233
  char *v156; // r0@235
  int v157; // r9@236
  int v158; // r0@236
  int v159; // r5@237
  int v160; // r7@237
  bool v161; // zf@238
  int v162; // r4@241
  bool v163; // zf@244
  _DWORD *v164; // r0@248
  char **v165; // r0@249
  char *v166; // r1@250
  char *v167; // r0@252
  int v168; // r9@253
  int v169; // r0@253
  int v170; // r5@254
  int v171; // r7@254
  bool v172; // zf@255
  int v173; // r4@258
  bool v174; // zf@261
  _DWORD *v175; // r0@265
  int v176; // r0@266
  char **v177; // r4@266
  char **v178; // r6@266
  unsigned int *v179; // r2@268
  signed int v180; // r1@270
  int *v181; // r0@276
  char **v182; // r4@281
  char **v183; // r6@281
  unsigned int *v184; // r2@283
  signed int v185; // r1@285
  int *v186; // r0@291
  char **v187; // r4@296
  char **v188; // r6@296
  unsigned int *v189; // r2@298
  signed int v190; // r1@300
  int *v191; // r0@306
  char **v192; // r4@311
  char **v193; // r6@311
  unsigned int *v194; // r2@313
  signed int v195; // r1@315
  int *v196; // r0@321
  bool v197; // zf@324
  _DWORD *v198; // r0@328
  char **v199; // r0@329
  char *v200; // r1@330
  char *v201; // r0@332
  int v202; // r9@334
  int v203; // r0@334
  int v204; // r5@335
  int v205; // r7@335
  bool v206; // zf@336
  int v207; // r4@339
  unsigned int *v208; // r2@342
  signed int v209; // r1@344
  unsigned int *v210; // r2@346
  signed int v211; // r1@348
  unsigned int *v212; // r2@350
  signed int v213; // r1@352
  unsigned int *v214; // r2@354
  signed int v215; // r1@356
  unsigned int *v216; // r2@358
  signed int v217; // r1@360
  unsigned int *v218; // r2@362
  signed int v219; // r1@364
  unsigned int *v220; // r2@366
  signed int v221; // r1@368
  unsigned int *v222; // r2@370
  signed int v223; // r1@372
  unsigned int *v224; // r2@374
  signed int v225; // r1@376
  unsigned int *v226; // r2@378
  signed int v227; // r1@380
  unsigned int *v228; // r2@382
  signed int v229; // r1@384
  unsigned int *v230; // r2@386
  signed int v231; // r1@388
  bool v232; // zf@390
  _DWORD *v233; // r0@394
  char **v234; // r0@395
  char *v235; // r1@396
  char *v236; // r0@398
  int v237; // r9@399
  int v238; // r0@399
  int v239; // r5@400
  int v240; // r7@400
  bool v241; // zf@401
  int v242; // r4@404
  bool v243; // zf@407
  _DWORD *v244; // r0@411
  unsigned __int64 *v245; // r9@412
  int v246; // r0@412
  int v247; // r8@413
  int v248; // r0@413
  int v249; // r4@414
  int v250; // r7@414
  bool v251; // zf@415
  int v252; // r5@418
  bool v253; // zf@421
  _DWORD *v254; // r0@425
  char **v255; // r0@426
  char *v256; // r1@427
  char *v257; // r0@429
  int v258; // r8@430
  int v259; // r0@430
  int v260; // r4@431
  int v261; // r7@431
  bool v262; // zf@432
  int v263; // r5@435
  bool v264; // zf@438
  _DWORD *v265; // r0@442
  char **v266; // r0@443
  char *v267; // r1@444
  char *v268; // r0@446
  int v269; // r8@447
  int v270; // r0@447
  int v271; // r4@448
  int v272; // r7@448
  bool v273; // zf@449
  int v274; // r5@452
  bool v275; // zf@455
  _DWORD *v276; // r0@459
  int v277; // r0@460
  int v278; // r8@460
  int v279; // r0@460
  int v280; // r4@461
  int v281; // r7@461
  bool v282; // zf@462
  int v283; // r5@465
  bool v284; // zf@468
  _DWORD *v285; // r0@472
  char **v286; // r0@473
  char *v287; // r1@474
  char *v288; // r0@476
  int v289; // r8@477
  int v290; // r0@477
  int v291; // r4@478
  int v292; // r7@478
  bool v293; // zf@479
  int v294; // r5@482
  bool v295; // zf@485
  _DWORD *v296; // r0@489
  char **v297; // r0@490
  char *v298; // r1@491
  char *v299; // r0@493
  int v300; // r8@494
  int v301; // r0@494
  int v302; // r4@495
  int v303; // r7@495
  bool v304; // zf@496
  int v305; // r5@499
  bool v306; // zf@502
  _DWORD *v307; // r0@506
  int v308; // r0@507
  char **v309; // r4@507
  char **v310; // r6@507
  unsigned int *v311; // r2@509
  signed int v312; // r1@511
  int *v313; // r0@517
  char **v314; // r4@522
  char **v315; // r6@522
  unsigned int *v316; // r2@524
  signed int v317; // r1@526
  int *v318; // r0@532
  char **v319; // r6@537
  unsigned int *v320; // r2@539
  signed int v321; // r1@541
  int *v322; // r0@547
  unsigned int *v323; // r2@553
  signed int v324; // r1@555
  unsigned int *v325; // r2@557
  signed int v326; // r1@559
  unsigned int *v327; // r2@561
  signed int v328; // r1@563
  unsigned int *v329; // r2@565
  signed int v330; // r1@567
  unsigned int *v331; // r2@617
  signed int v332; // r1@619
  unsigned int *v333; // r2@621
  signed int v334; // r1@623
  char *v335; // [sp+0h] [bp-108h]@249
  char v336; // [sp+4h] [bp-104h]@250
  char *v337; // [sp+8h] [bp-100h]@232
  char v338; // [sp+Ch] [bp-FCh]@233
  char *v339; // [sp+10h] [bp-F8h]@215
  char v340; // [sp+14h] [bp-F4h]@216
  char **v341; // [sp+18h] [bp-F0h]@202
  char **v342; // [sp+1Ch] [bp-ECh]@202
  char **v343; // [sp+20h] [bp-E8h]@202
  char *v344; // [sp+24h] [bp-E4h]@185
  char v345; // [sp+28h] [bp-E0h]@186
  char *v346; // [sp+2Ch] [bp-DCh]@168
  char v347; // [sp+30h] [bp-D8h]@169
  char *v348; // [sp+34h] [bp-D4h]@151
  char v349; // [sp+38h] [bp-D0h]@152
  char **v350; // [sp+3Ch] [bp-CCh]@138
  char **v351; // [sp+40h] [bp-C8h]@138
  char **v352; // [sp+44h] [bp-C4h]@138
  char *v353; // [sp+48h] [bp-C0h]@121
  char v354; // [sp+4Ch] [bp-BCh]@122
  char *v355; // [sp+50h] [bp-B8h]@104
  char v356; // [sp+54h] [bp-B4h]@105
  char *v357; // [sp+58h] [bp-B0h]@87
  char v358; // [sp+5Ch] [bp-ACh]@88
  char **v359; // [sp+60h] [bp-A8h]@74
  char **v360; // [sp+64h] [bp-A4h]@74
  char **v361; // [sp+68h] [bp-A0h]@74
  char *v362; // [sp+6Ch] [bp-9Ch]@57
  char v363; // [sp+70h] [bp-98h]@58
  char *v364; // [sp+74h] [bp-94h]@40
  char v365; // [sp+78h] [bp-90h]@41
  char *v366; // [sp+7Ch] [bp-8Ch]@23
  char v367; // [sp+80h] [bp-88h]@24
  char **v368; // [sp+84h] [bp-84h]@2
  char **v369; // [sp+88h] [bp-80h]@2
  char **v370; // [sp+8Ch] [bp-7Ch]@2
  char *v371; // [sp+90h] [bp-78h]@490
  char v372; // [sp+94h] [bp-74h]@491
  char *v373; // [sp+98h] [bp-70h]@473
  char v374; // [sp+9Ch] [bp-6Ch]@474
  char **v375; // [sp+A0h] [bp-68h]@460
  char **v376; // [sp+A4h] [bp-64h]@460
  char **v377; // [sp+A8h] [bp-60h]@460
  char *v378; // [sp+ACh] [bp-5Ch]@443
  char v379; // [sp+B0h] [bp-58h]@444
  char *v380; // [sp+B4h] [bp-54h]@426
  char v381; // [sp+B8h] [bp-50h]@427
  char **v382; // [sp+BCh] [bp-4Ch]@412
  char **v383; // [sp+C0h] [bp-48h]@412
  char **v384; // [sp+C4h] [bp-44h]@412
  char *v385; // [sp+C8h] [bp-40h]@395
  char v386; // [sp+CCh] [bp-3Ch]@396
  char *v387; // [sp+D0h] [bp-38h]@329
  char v388; // [sp+D4h] [bp-34h]@330
  char **v389; // [sp+D8h] [bp-30h]@10
  char **v390; // [sp+DCh] [bp-2Ch]@10
  char **v391; // [sp+E0h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v368 = 0;
    v369 = 0;
    v370 = 0;
    v2 = 0x17u % dword_27DB7B8;
    v3 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v3 )
      goto LABEL_22;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 23;
      if ( v5 == 23 )
        v6 = *(_DWORD *)(v4 + 4) == 23;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DB7B8 == v2 )
          continue;
      }
    }
    v14 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v14 = v3 == 0;
    if ( v14 )
LABEL_22:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 23;
      v15[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DB7B4,
             v2,
             0x17u,
             (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v366, (int *)(v3 + 8), 0);
    v16 = v369;
    if ( v369 == v370 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v368,
        (int)&v366);
      v17 = v366;
    else
      *v369 = v366;
      v17 = (char *)&unk_28898CC;
      v366 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v367;
      v369 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v208 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v209 = __ldrex(v208);
        while ( __strex(v209 - 1, v208) );
      else
        v209 = (*v208)--;
      if ( v209 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v18);
    v19 = 4u % dword_27DB7B8;
    v20 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 4;
      if ( v22 == 4 )
        v23 = *(_DWORD *)(v21 + 4) == 4;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DB7B8 == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_39:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 4;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DB7B4,
              v19,
              4u,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v364, (int *)(v20 + 8), 0);
    v27 = v369;
        (int)&v364);
      v28 = v364;
      *v369 = v364;
      v28 = (char *)&unk_28898CC;
      v364 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v365;
      v369 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v210 = (unsigned int *)(v28 - 4);
          v211 = __ldrex(v210);
        while ( __strex(v211 - 1, v210) );
        v211 = (*v210)--;
      if ( v211 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v29);
    v30 = 0x1Au % dword_27DB7B8;
    v31 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
    if ( !v31 )
      goto LABEL_56;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 26;
      if ( v33 == 26 )
        v34 = *(_DWORD *)(v32 + 4) == 26;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DB7B8 == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_56:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 26;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              0x1Au,
              (int)v37);
    AutoPlaceItem::AutoPlaceItem((int *)&v362, (int *)(v31 + 8), 0);
    v38 = v369;
        (int)&v362);
      v39 = v362;
      *v369 = v362;
      v39 = (char *)&unk_28898CC;
      v362 = (char *)&unk_28898CC;
      *((_BYTE *)v38 + 4) = v363;
      v369 = v38 + 2;
    v40 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v212 = (unsigned int *)(v39 - 4);
          v213 = __ldrex(v212);
        while ( __strex(v213 - 1, v212) );
        v213 = (*v212)--;
      if ( v213 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v40);
    v41 = 0x18u % dword_27DB7B8;
    v42 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
    if ( !v42 )
      goto LABEL_73;
    v43 = *(_DWORD *)v42;
    v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v45 = v44 == 24;
      if ( v44 == 24 )
        v45 = *(_DWORD *)(v43 + 4) == 24;
      if ( v45 )
      v46 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v44 = *(_DWORD *)(v46 + 12);
        v42 = v43;
        v43 = *(_DWORD *)v43;
        if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DB7B8 == v41 )
    v47 = v42 == 0;
    if ( v42 )
      v42 = *(_DWORD *)v42;
      v47 = v42 == 0;
    if ( v47 )
LABEL_73:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 24;
      v48[2] = &unk_28898CC;
      v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v41,
              0x18u,
              (int)v48);
    v49 = (unsigned __int64 *)((char *)v1 + 600);
    v50 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v49,
            (int **)(v42 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v50, (unsigned __int64 *)&v368);
    v359 = 0;
    v360 = 0;
    v361 = 0;
    v51 = 0x17u % dword_27DB7B8;
    v52 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v52 )
      goto LABEL_86;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 23;
      if ( v54 == 23 )
        v55 = *(_DWORD *)(v53 + 4) == 23;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DB7B8 == v51 )
    v57 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v57 = v52 == 0;
    if ( v57 )
LABEL_86:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 23;
      v58[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              0x17u,
              (int)v58);
    AutoPlaceItem::AutoPlaceItem((int *)&v357, (int *)(v52 + 8), 0);
    v59 = v360;
    if ( v360 == v361 )
        (unsigned __int64 *)&v359,
        (int)&v357);
      v60 = v357;
      *v360 = v357;
      v60 = (char *)&unk_28898CC;
      v357 = (char *)&unk_28898CC;
      *((_BYTE *)v59 + 4) = v358;
      v360 = v59 + 2;
    v61 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v214 = (unsigned int *)(v60 - 4);
          v215 = __ldrex(v214);
        while ( __strex(v215 - 1, v214) );
        v215 = (*v214)--;
      if ( v215 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v61);
    v62 = 4u % dword_27DB7B8;
    v63 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
    if ( !v63 )
      goto LABEL_103;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 4;
      if ( v65 == 4 )
        v66 = *(_DWORD *)(v64 + 4) == 4;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DB7B8 == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_103:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 4;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    AutoPlaceItem::AutoPlaceItem((int *)&v355, (int *)(v63 + 8), 0);
    v70 = v360;
        (int)&v355);
      v71 = v355;
      *v360 = v355;
      v71 = (char *)&unk_28898CC;
      v355 = (char *)&unk_28898CC;
      *((_BYTE *)v70 + 4) = v356;
      v360 = v70 + 2;
    v72 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v216 = (unsigned int *)(v71 - 4);
          v217 = __ldrex(v216);
        while ( __strex(v217 - 1, v216) );
        v217 = (*v216)--;
      if ( v217 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v72);
    v73 = 0x18u % dword_27DB7B8;
    v74 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
    if ( !v74 )
      goto LABEL_120;
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      v77 = v76 == 24;
      if ( v76 == 24 )
        v77 = *(_DWORD *)(v75 + 4) == 24;
      if ( v77 )
      v78 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v76 = *(_DWORD *)(v78 + 12);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DB7B8 == v73 )
    v79 = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)v74;
      v79 = v74 == 0;
    if ( v79 )
LABEL_120:
      v80 = operator new(0x10u);
      *v80 = 0;
      v80[1] = 24;
      v80[2] = &unk_28898CC;
      v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v73,
              (int)v80);
    AutoPlaceItem::AutoPlaceItem((int *)&v353, (int *)(v74 + 8), 0);
    v81 = v360;
        (int)&v353);
      v82 = v353;
      *v360 = v353;
      v82 = (char *)&unk_28898CC;
      v353 = (char *)&unk_28898CC;
      *((_BYTE *)v81 + 4) = v354;
      v360 = v81 + 2;
    v83 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v218 = (unsigned int *)(v82 - 4);
          v219 = __ldrex(v218);
        while ( __strex(v219 - 1, v218) );
        v219 = (*v218)--;
      if ( v219 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v83);
    v84 = 0x1Au % dword_27DB7B8;
    v85 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
    if ( !v85 )
      goto LABEL_137;
    v86 = *(_DWORD *)v85;
    v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
      v88 = v87 == 26;
      if ( v87 == 26 )
        v88 = *(_DWORD *)(v86 + 4) == 26;
      if ( v88 )
      v89 = *(_DWORD *)v86;
      if ( *(_DWORD *)v86 )
        v87 = *(_DWORD *)(v89 + 12);
        v85 = v86;
        v86 = *(_DWORD *)v86;
        if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DB7B8 == v84 )
    v90 = v85 == 0;
    if ( v85 )
      v85 = *(_DWORD *)v85;
      v90 = v85 == 0;
    if ( v90 )
LABEL_137:
      v91 = operator new(0x10u);
      *v91 = 0;
      v91[1] = 26;
      v91[2] = &unk_28898CC;
      v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v84,
              (int)v91);
    v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v85 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v92, (unsigned __int64 *)&v359);
    v350 = 0;
    v351 = 0;
    v352 = 0;
    v93 = 0x18u % dword_27DB7B8;
    v94 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
    if ( !v94 )
      goto LABEL_150;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 24;
      if ( v96 == 24 )
        v97 = *(_DWORD *)(v95 + 4) == 24;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DB7B8 == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_150:
      v100 = operator new(0x10u);
      *v100 = 0;
      v100[1] = 24;
      v100[2] = &unk_28898CC;
      v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v93,
              (int)v100);
    AutoPlaceItem::AutoPlaceItem((int *)&v348, (int *)(v94 + 8), 0);
    v101 = v351;
    if ( v351 == v352 )
        (unsigned __int64 *)&v350,
        (int)&v348);
      v102 = v348;
      *v351 = v348;
      v102 = (char *)&unk_28898CC;
      v348 = (char *)&unk_28898CC;
      *((_BYTE *)v101 + 4) = v349;
      v351 = v101 + 2;
    v103 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v220 = (unsigned int *)(v102 - 4);
          v221 = __ldrex(v220);
        while ( __strex(v221 - 1, v220) );
        v221 = (*v220)--;
      if ( v221 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v103);
    v104 = 0x1Au % dword_27DB7B8;
    v105 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
    if ( !v105 )
      goto LABEL_167;
    v106 = *(_DWORD *)v105;
    v107 = *(_DWORD *)(*(_DWORD *)v105 + 12);
      v108 = v107 == 26;
      if ( v107 == 26 )
        v108 = *(_DWORD *)(v106 + 4) == 26;
      if ( v108 )
      v109 = *(_DWORD *)v106;
      if ( *(_DWORD *)v106 )
        v107 = *(_DWORD *)(v109 + 12);
        v105 = v106;
        v106 = *(_DWORD *)v106;
        if ( *(_DWORD *)(v109 + 12) % (unsigned int)dword_27DB7B8 == v104 )
    v110 = v105 == 0;
    if ( v105 )
      v105 = *(_DWORD *)v105;
      v110 = v105 == 0;
    if ( v110 )
LABEL_167:
      v111 = operator new(0x10u);
      *v111 = 0;
      v111[1] = 26;
      v111[2] = &unk_28898CC;
      v105 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DB7B4,
               v104,
               0x1Au,
               (int)v111);
    AutoPlaceItem::AutoPlaceItem((int *)&v346, (int *)(v105 + 8), 0);
    v112 = v351;
        (int)&v346);
      v113 = v346;
      *v351 = v346;
      v113 = (char *)&unk_28898CC;
      v346 = (char *)&unk_28898CC;
      *((_BYTE *)v112 + 4) = v347;
      v351 = v112 + 2;
    v114 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v222 = (unsigned int *)(v113 - 4);
          v223 = __ldrex(v222);
        while ( __strex(v223 - 1, v222) );
        v223 = (*v222)--;
      if ( v223 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v114);
    v115 = 4u % dword_27DB7B8;
    v116 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
    if ( !v116 )
      goto LABEL_184;
    v117 = *(_DWORD *)v116;
    v118 = *(_DWORD *)(*(_DWORD *)v116 + 12);
      v119 = v118 == 4;
      if ( v118 == 4 )
        v119 = *(_DWORD *)(v117 + 4) == 4;
      if ( v119 )
      v120 = *(_DWORD *)v117;
      if ( *(_DWORD *)v117 )
        v118 = *(_DWORD *)(v120 + 12);
        v116 = v117;
        v117 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v120 + 12) % (unsigned int)dword_27DB7B8 == v115 )
    v121 = v116 == 0;
    if ( v116 )
      v116 = *(_DWORD *)v116;
      v121 = v116 == 0;
    if ( v121 )
LABEL_184:
      v122 = operator new(0x10u);
      *v122 = 0;
      v122[1] = 4;
      v122[2] = &unk_28898CC;
      v116 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v115,
               4u,
               (int)v122);
    AutoPlaceItem::AutoPlaceItem((int *)&v344, (int *)(v116 + 8), 0);
    v123 = v351;
        (int)&v344);
      v124 = v344;
      *v351 = v344;
      v124 = (char *)&unk_28898CC;
      v344 = (char *)&unk_28898CC;
      *((_BYTE *)v123 + 4) = v345;
      v351 = v123 + 2;
    v125 = v124 - 12;
    if ( (int *)(v124 - 12) != &dword_28898C0 )
      v224 = (unsigned int *)(v124 - 4);
          v225 = __ldrex(v224);
        while ( __strex(v225 - 1, v224) );
        v225 = (*v224)--;
      if ( v225 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v125);
    v126 = 0x17u % dword_27DB7B8;
    v127 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v127 )
      goto LABEL_201;
    v128 = *(_DWORD *)v127;
    v129 = *(_DWORD *)(*(_DWORD *)v127 + 12);
      v130 = v129 == 23;
      if ( v129 == 23 )
        v130 = *(_DWORD *)(v128 + 4) == 23;
      if ( v130 )
      v131 = *(_DWORD *)v128;
      if ( *(_DWORD *)v128 )
        v129 = *(_DWORD *)(v131 + 12);
        v127 = v128;
        v128 = *(_DWORD *)v128;
        if ( *(_DWORD *)(v131 + 12) % (unsigned int)dword_27DB7B8 == v126 )
    v132 = v127 == 0;
    if ( v127 )
      v127 = *(_DWORD *)v127;
      v132 = v127 == 0;
    if ( v132 )
LABEL_201:
      v133 = operator new(0x10u);
      *v133 = 0;
      v133[1] = 23;
      v133[2] = &unk_28898CC;
      v127 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v126,
               0x17u,
               (int)v133);
    v134 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v49,
             (int **)(v127 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v134, (unsigned __int64 *)&v350);
    v341 = 0;
    v342 = 0;
    v343 = 0;
    v135 = 0x18u % dword_27DB7B8;
    v136 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x18u % dword_27DB7B8));
    if ( !v136 )
      goto LABEL_214;
    v137 = *(_DWORD *)v136;
    v138 = *(_DWORD *)(*(_DWORD *)v136 + 12);
      v139 = v138 == 24;
      if ( v138 == 24 )
        v139 = *(_DWORD *)(v137 + 4) == 24;
      if ( v139 )
      v140 = *(_DWORD *)v137;
      if ( *(_DWORD *)v137 )
        v138 = *(_DWORD *)(v140 + 12);
        v136 = v137;
        v137 = *(_DWORD *)v137;
        if ( *(_DWORD *)(v140 + 12) % (unsigned int)dword_27DB7B8 == v135 )
    v141 = v136 == 0;
    if ( v136 )
      v136 = *(_DWORD *)v136;
      v141 = v136 == 0;
    if ( v141 )
LABEL_214:
      v142 = operator new(0x10u);
      *v142 = 0;
      v142[1] = 24;
      v142[2] = &unk_28898CC;
      v136 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v135,
               0x18u,
               (int)v142);
    AutoPlaceItem::AutoPlaceItem((int *)&v339, (int *)(v136 + 8), 0);
    v143 = v342;
    if ( v342 == v343 )
        (unsigned __int64 *)&v341,
        (int)&v339);
      v144 = v339;
      *v342 = v339;
      v144 = (char *)&unk_28898CC;
      v339 = (char *)&unk_28898CC;
      *((_BYTE *)v143 + 4) = v340;
      v342 = v143 + 2;
    v145 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v226 = (unsigned int *)(v144 - 4);
          v227 = __ldrex(v226);
        while ( __strex(v227 - 1, v226) );
        v227 = (*v226)--;
      if ( v227 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v145);
    v146 = 0x1Au % dword_27DB7B8;
    v147 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x1Au % dword_27DB7B8));
    if ( !v147 )
      goto LABEL_231;
    v148 = *(_DWORD *)v147;
    v149 = *(_DWORD *)(*(_DWORD *)v147 + 12);
      v150 = v149 == 26;
      if ( v149 == 26 )
        v150 = *(_DWORD *)(v148 + 4) == 26;
      if ( v150 )
      v151 = *(_DWORD *)v148;
      if ( *(_DWORD *)v148 )
        v149 = *(_DWORD *)(v151 + 12);
        v147 = v148;
        v148 = *(_DWORD *)v148;
        if ( *(_DWORD *)(v151 + 12) % (unsigned int)dword_27DB7B8 == v146 )
    v152 = v147 == 0;
    if ( v147 )
      v147 = *(_DWORD *)v147;
      v152 = v147 == 0;
    if ( v152 )
LABEL_231:
      v153 = operator new(0x10u);
      *v153 = 0;
      v153[1] = 26;
      v153[2] = &unk_28898CC;
      v147 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v146,
               (int)v153);
    AutoPlaceItem::AutoPlaceItem((int *)&v337, (int *)(v147 + 8), 0);
    v154 = v342;
        (int)&v337);
      v155 = v337;
      *v342 = v337;
      v155 = (char *)&unk_28898CC;
      v337 = (char *)&unk_28898CC;
      *((_BYTE *)v154 + 4) = v338;
      v342 = v154 + 2;
    v156 = v155 - 12;
    if ( (int *)(v155 - 12) != &dword_28898C0 )
      v228 = (unsigned int *)(v155 - 4);
          v229 = __ldrex(v228);
        while ( __strex(v229 - 1, v228) );
        v229 = (*v228)--;
      if ( v229 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v156);
    v157 = 0x17u % dword_27DB7B8;
    v158 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v158 )
      goto LABEL_248;
    v159 = *(_DWORD *)v158;
    v160 = *(_DWORD *)(*(_DWORD *)v158 + 12);
      v161 = v160 == 23;
      if ( v160 == 23 )
        v161 = *(_DWORD *)(v159 + 4) == 23;
      if ( v161 )
      v162 = *(_DWORD *)v159;
      if ( *(_DWORD *)v159 )
        v160 = *(_DWORD *)(v162 + 12);
        v158 = v159;
        v159 = *(_DWORD *)v159;
        if ( *(_DWORD *)(v162 + 12) % (unsigned int)dword_27DB7B8 == v157 )
    v163 = v158 == 0;
    if ( v158 )
      v158 = *(_DWORD *)v158;
      v163 = v158 == 0;
    if ( v163 )
LABEL_248:
      v164 = operator new(0x10u);
      *v164 = 0;
      v164[1] = 23;
      v164[2] = &unk_28898CC;
      v158 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v157,
               (int)v164);
    AutoPlaceItem::AutoPlaceItem((int *)&v335, (int *)(v158 + 8), 0);
    v165 = v342;
        (int)&v335);
      v166 = v335;
      *v342 = v335;
      v166 = (char *)&unk_28898CC;
      v335 = (char *)&unk_28898CC;
      *((_BYTE *)v165 + 4) = v336;
      v342 = v165 + 2;
    v167 = v166 - 12;
    if ( (int *)(v166 - 12) != &dword_28898C0 )
      v230 = (unsigned int *)(v166 - 4);
          v231 = __ldrex(v230);
        while ( __strex(v231 - 1, v230) );
        v231 = (*v230)--;
      if ( v231 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v167);
    v168 = 4u % dword_27DB7B8;
    v169 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
    if ( !v169 )
      goto LABEL_265;
    v170 = *(_DWORD *)v169;
    v171 = *(_DWORD *)(*(_DWORD *)v169 + 12);
      v172 = v171 == 4;
      if ( v171 == 4 )
        v172 = *(_DWORD *)(v170 + 4) == 4;
      if ( v172 )
      v173 = *(_DWORD *)v170;
      if ( *(_DWORD *)v170 )
        v171 = *(_DWORD *)(v173 + 12);
        v169 = v170;
        v170 = *(_DWORD *)v170;
        if ( *(_DWORD *)(v173 + 12) % (unsigned int)dword_27DB7B8 == v168 )
    v174 = v169 == 0;
    if ( v169 )
      v169 = *(_DWORD *)v169;
      v174 = v169 == 0;
    if ( v174 )
LABEL_265:
      v175 = operator new(0x10u);
      *v175 = 0;
      v175[1] = 4;
      v175[2] = &unk_28898CC;
      v169 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v168,
               (int)v175);
    v176 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v169 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v176, (unsigned __int64 *)&v341);
    v178 = v342;
    v177 = v341;
    if ( v341 != v342 )
      do
        v181 = (int *)(*v177 - 12);
        if ( v181 != &dword_28898C0 )
        {
          v179 = (unsigned int *)(*v177 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v180 = __ldrex(v179);
            while ( __strex(v180 - 1, v179) );
          }
          else
            v180 = (*v179)--;
          if ( v180 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v181);
        }
        v177 += 2;
      while ( v177 != v178 );
      v177 = v341;
    if ( v177 )
      operator delete(v177);
    v183 = v351;
    v182 = v350;
    if ( v350 != v351 )
        v186 = (int *)(*v182 - 12);
        if ( v186 != &dword_28898C0 )
          v184 = (unsigned int *)(*v182 - 4);
              v185 = __ldrex(v184);
            while ( __strex(v185 - 1, v184) );
            v185 = (*v184)--;
          if ( v185 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v186);
        v182 += 2;
      while ( v182 != v183 );
      v182 = v350;
    if ( v182 )
      operator delete(v182);
    v188 = v360;
    v187 = v359;
    if ( v359 != v360 )
        v191 = (int *)(*v187 - 12);
        if ( v191 != &dword_28898C0 )
          v189 = (unsigned int *)(*v187 - 4);
              v190 = __ldrex(v189);
            while ( __strex(v190 - 1, v189) );
            v190 = (*v189)--;
          if ( v190 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v191);
        v187 += 2;
      while ( v187 != v188 );
      v187 = v359;
    if ( v187 )
      operator delete(v187);
    v193 = v369;
    v192 = v368;
    if ( v368 != v369 )
        v196 = (int *)(*v192 - 12);
        if ( v196 != &dword_28898C0 )
          v194 = (unsigned int *)(*v192 - 4);
              v195 = __ldrex(v194);
            while ( __strex(v195 - 1, v194) );
            v195 = (*v194)--;
          if ( v195 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v196);
        v192 += 2;
      while ( v192 != v193 );
      v192 = v368;
  }
  else
    v389 = 0;
    v390 = 0;
    v391 = 0;
    v8 = 0x17u % dword_27DB7B8;
    v9 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v9 )
      goto LABEL_328;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 23;
      if ( v11 == 23 )
        v12 = *(_DWORD *)(v10 + 4) == 23;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DB7B8 == v8 )
    v197 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v197 = v9 == 0;
    if ( v197 )
LABEL_328:
      v198 = operator new(0x10u);
      *v198 = 0;
      v198[1] = 23;
      v198[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v8,
             (int)v198);
    AutoPlaceItem::AutoPlaceItem((int *)&v387, (int *)(v9 + 8), 0);
    v199 = v390;
    if ( v390 == v391 )
        (unsigned __int64 *)&v389,
        (int)&v387);
      v200 = v387;
      *v390 = v387;
      v200 = (char *)&unk_28898CC;
      v387 = (char *)&unk_28898CC;
      *((_BYTE *)v199 + 4) = v388;
      v390 = v199 + 2;
    v201 = v200 - 12;
    if ( (int *)(v200 - 12) != &dword_28898C0 )
      v323 = (unsigned int *)(v200 - 4);
          v324 = __ldrex(v323);
        while ( __strex(v324 - 1, v323) );
        v324 = (*v323)--;
      if ( v324 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v201);
    if ( *((_BYTE *)v1 + 636) )
      v202 = 4u % dword_27DB7B8;
      v203 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
      if ( !v203 )
        goto LABEL_394;
      v204 = *(_DWORD *)v203;
      v205 = *(_DWORD *)(*(_DWORD *)v203 + 12);
      while ( 1 )
        v206 = v205 == 4;
        if ( v205 == 4 )
          v206 = *(_DWORD *)(v204 + 4) == 4;
        if ( v206 )
          break;
        v207 = *(_DWORD *)v204;
        if ( *(_DWORD *)v204 )
          v205 = *(_DWORD *)(v207 + 12);
          v203 = v204;
          v204 = *(_DWORD *)v204;
          if ( *(_DWORD *)(v207 + 12) % (unsigned int)dword_27DB7B8 == v202 )
            continue;
      v232 = v203 == 0;
      if ( v203 )
        v203 = *(_DWORD *)v203;
        v232 = v203 == 0;
      if ( v232 )
LABEL_394:
        v233 = operator new(0x10u);
        *v233 = 0;
        v233[1] = 4;
        v233[2] = &unk_28898CC;
        v203 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DB7B4,
                 v202,
                 4u,
                 (int)v233);
      AutoPlaceItem::AutoPlaceItem((int *)&v385, (int *)(v203 + 8), 0);
      v234 = v390;
      if ( v390 == v391 )
        std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
          (unsigned __int64 *)&v389,
          (int)&v385);
        v235 = v385;
        *v390 = v385;
        v235 = (char *)&unk_28898CC;
        v385 = (char *)&unk_28898CC;
        *((_BYTE *)v234 + 4) = v386;
        v390 = v234 + 2;
      v236 = v235 - 12;
      if ( (int *)(v235 - 12) != &dword_28898C0 )
        v331 = (unsigned int *)(v235 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v332 = __ldrex(v331);
          while ( __strex(v332 - 1, v331) );
        else
          v332 = (*v331)--;
        if ( v332 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v236);
    v237 = 9u % dword_27DB7B8;
    v238 = *(_DWORD *)(dword_27DB7B4 + 4 * (9u % dword_27DB7B8));
    if ( !v238 )
      goto LABEL_411;
    v239 = *(_DWORD *)v238;
    v240 = *(_DWORD *)(*(_DWORD *)v238 + 12);
      v241 = v240 == 9;
      if ( v240 == 9 )
        v241 = *(_DWORD *)(v239 + 4) == 9;
      if ( v241 )
      v242 = *(_DWORD *)v239;
      if ( *(_DWORD *)v239 )
        v240 = *(_DWORD *)(v242 + 12);
        v238 = v239;
        v239 = *(_DWORD *)v239;
        if ( *(_DWORD *)(v242 + 12) % (unsigned int)dword_27DB7B8 == v237 )
    v243 = v238 == 0;
    if ( v238 )
      v238 = *(_DWORD *)v238;
      v243 = v238 == 0;
    if ( v243 )
LABEL_411:
      v244 = operator new(0x10u);
      *v244 = 0;
      v244[1] = 9;
      v244[2] = &unk_28898CC;
      v238 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v237,
               9u,
               (int)v244);
    v245 = (unsigned __int64 *)((char *)v1 + 600);
    v246 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (unsigned __int64 *)v1 + 75,
             (int **)(v238 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v246, (unsigned __int64 *)&v389);
    v382 = 0;
    v383 = 0;
    v384 = 0;
      v247 = 4u % dword_27DB7B8;
      v248 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
      if ( !v248 )
        goto LABEL_425;
      v249 = *(_DWORD *)v248;
      v250 = *(_DWORD *)(*(_DWORD *)v248 + 12);
        v251 = v250 == 4;
        if ( v250 == 4 )
          v251 = *(_DWORD *)(v249 + 4) == 4;
        if ( v251 )
        v252 = *(_DWORD *)v249;
        if ( *(_DWORD *)v249 )
          v250 = *(_DWORD *)(v252 + 12);
          v248 = v249;
          v249 = *(_DWORD *)v249;
          if ( *(_DWORD *)(v252 + 12) % (unsigned int)dword_27DB7B8 == v247 )
      v253 = v248 == 0;
      if ( v248 )
        v248 = *(_DWORD *)v248;
        v253 = v248 == 0;
      if ( v253 )
LABEL_425:
        v254 = operator new(0x10u);
        *v254 = 0;
        v254[1] = 4;
        v254[2] = &unk_28898CC;
        v248 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 v247,
                 (int)v254);
      AutoPlaceItem::AutoPlaceItem((int *)&v380, (int *)(v248 + 8), 0);
      v255 = v383;
      if ( v383 == v384 )
          (unsigned __int64 *)&v382,
          (int)&v380);
        v256 = v380;
        *v383 = v380;
        v256 = (char *)&unk_28898CC;
        v380 = (char *)&unk_28898CC;
        *((_BYTE *)v255 + 4) = v381;
        v383 = v255 + 2;
      v257 = v256 - 12;
      if ( (int *)(v256 - 12) != &dword_28898C0 )
        v333 = (unsigned int *)(v256 - 4);
            v334 = __ldrex(v333);
          while ( __strex(v334 - 1, v333) );
          v334 = (*v333)--;
        if ( v334 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v257);
    v258 = 9u % dword_27DB7B8;
    v259 = *(_DWORD *)(dword_27DB7B4 + 4 * (9u % dword_27DB7B8));
    if ( !v259 )
      goto LABEL_442;
    v260 = *(_DWORD *)v259;
    v261 = *(_DWORD *)(*(_DWORD *)v259 + 12);
      v262 = v261 == 9;
      if ( v261 == 9 )
        v262 = *(_DWORD *)(v260 + 4) == 9;
      if ( v262 )
      v263 = *(_DWORD *)v260;
      if ( *(_DWORD *)v260 )
        v261 = *(_DWORD *)(v263 + 12);
        v259 = v260;
        v260 = *(_DWORD *)v260;
        if ( *(_DWORD *)(v263 + 12) % (unsigned int)dword_27DB7B8 == v258 )
    v264 = v259 == 0;
    if ( v259 )
      v259 = *(_DWORD *)v259;
      v264 = v259 == 0;
    if ( v264 )
LABEL_442:
      v265 = operator new(0x10u);
      *v265 = 0;
      v265[1] = 9;
      v265[2] = &unk_28898CC;
      v259 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v258,
               (int)v265);
    AutoPlaceItem::AutoPlaceItem((int *)&v378, (int *)(v259 + 8), 0);
    v266 = v383;
    if ( v383 == v384 )
        (unsigned __int64 *)&v382,
        (int)&v378);
      v267 = v378;
      *v383 = v378;
      v267 = (char *)&unk_28898CC;
      v378 = (char *)&unk_28898CC;
      *((_BYTE *)v266 + 4) = v379;
      v383 = v266 + 2;
    v268 = v267 - 12;
    if ( (int *)(v267 - 12) != &dword_28898C0 )
      v325 = (unsigned int *)(v267 - 4);
          v326 = __ldrex(v325);
        while ( __strex(v326 - 1, v325) );
        v326 = (*v325)--;
      if ( v326 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v268);
    v269 = 0x17u % dword_27DB7B8;
    v270 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v270 )
      goto LABEL_459;
    v271 = *(_DWORD *)v270;
    v272 = *(_DWORD *)(*(_DWORD *)v270 + 12);
      v273 = v272 == 23;
      if ( v272 == 23 )
        v273 = *(_DWORD *)(v271 + 4) == 23;
      if ( v273 )
      v274 = *(_DWORD *)v271;
      if ( *(_DWORD *)v271 )
        v272 = *(_DWORD *)(v274 + 12);
        v270 = v271;
        v271 = *(_DWORD *)v271;
        if ( *(_DWORD *)(v274 + 12) % (unsigned int)dword_27DB7B8 == v269 )
    v275 = v270 == 0;
    if ( v270 )
      v270 = *(_DWORD *)v270;
      v275 = v270 == 0;
    if ( v275 )
LABEL_459:
      v276 = operator new(0x10u);
      *v276 = 0;
      v276[1] = 23;
      v276[2] = &unk_28898CC;
      v270 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v269,
               (int)v276);
    v277 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v245,
             (int **)(v270 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v277, (unsigned __int64 *)&v382);
    v375 = 0;
    v376 = 0;
    v377 = 0;
    v278 = 9u % dword_27DB7B8;
    v279 = *(_DWORD *)(dword_27DB7B4 + 4 * (9u % dword_27DB7B8));
    if ( !v279 )
      goto LABEL_472;
    v280 = *(_DWORD *)v279;
    v281 = *(_DWORD *)(*(_DWORD *)v279 + 12);
      v282 = v281 == 9;
      if ( v281 == 9 )
        v282 = *(_DWORD *)(v280 + 4) == 9;
      if ( v282 )
      v283 = *(_DWORD *)v280;
      if ( *(_DWORD *)v280 )
        v281 = *(_DWORD *)(v283 + 12);
        v279 = v280;
        v280 = *(_DWORD *)v280;
        if ( *(_DWORD *)(v283 + 12) % (unsigned int)dword_27DB7B8 == v278 )
    v284 = v279 == 0;
    if ( v279 )
      v279 = *(_DWORD *)v279;
      v284 = v279 == 0;
    if ( v284 )
LABEL_472:
      v285 = operator new(0x10u);
      *v285 = 0;
      v285[1] = 9;
      v285[2] = &unk_28898CC;
      v279 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v278,
               (int)v285);
    AutoPlaceItem::AutoPlaceItem((int *)&v373, (int *)(v279 + 8), 0);
    v286 = v376;
    if ( v376 == v377 )
        (unsigned __int64 *)&v375,
        (int)&v373);
      v287 = v373;
      *v376 = v373;
      v287 = (char *)&unk_28898CC;
      v373 = (char *)&unk_28898CC;
      *((_BYTE *)v286 + 4) = v374;
      v376 = v286 + 2;
    v288 = v287 - 12;
    if ( (int *)(v287 - 12) != &dword_28898C0 )
      v327 = (unsigned int *)(v287 - 4);
          v328 = __ldrex(v327);
        while ( __strex(v328 - 1, v327) );
        v328 = (*v327)--;
      if ( v328 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v288);
    v289 = 0x17u % dword_27DB7B8;
    v290 = *(_DWORD *)(dword_27DB7B4 + 4 * (0x17u % dword_27DB7B8));
    if ( !v290 )
      goto LABEL_489;
    v291 = *(_DWORD *)v290;
    v292 = *(_DWORD *)(*(_DWORD *)v290 + 12);
      v293 = v292 == 23;
      if ( v292 == 23 )
        v293 = *(_DWORD *)(v291 + 4) == 23;
      if ( v293 )
      v294 = *(_DWORD *)v291;
      if ( *(_DWORD *)v291 )
        v292 = *(_DWORD *)(v294 + 12);
        v290 = v291;
        v291 = *(_DWORD *)v291;
        if ( *(_DWORD *)(v294 + 12) % (unsigned int)dword_27DB7B8 == v289 )
    v295 = v290 == 0;
    if ( v290 )
      v290 = *(_DWORD *)v290;
      v295 = v290 == 0;
    if ( v295 )
LABEL_489:
      v296 = operator new(0x10u);
      *v296 = 0;
      v296[1] = 23;
      v296[2] = &unk_28898CC;
      v290 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v289,
               (int)v296);
    AutoPlaceItem::AutoPlaceItem((int *)&v371, (int *)(v290 + 8), 0);
    v297 = v376;
        (int)&v371);
      v298 = v371;
      *v376 = v371;
      v298 = (char *)&unk_28898CC;
      v371 = (char *)&unk_28898CC;
      *((_BYTE *)v297 + 4) = v372;
      v376 = v297 + 2;
    v299 = v298 - 12;
    if ( (int *)(v298 - 12) != &dword_28898C0 )
      v329 = (unsigned int *)(v298 - 4);
          v330 = __ldrex(v329);
        while ( __strex(v330 - 1, v329) );
        v330 = (*v329)--;
      if ( v330 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v299);
    v300 = 4u % dword_27DB7B8;
    v301 = *(_DWORD *)(dword_27DB7B4 + 4 * (4u % dword_27DB7B8));
    if ( !v301 )
      goto LABEL_506;
    v302 = *(_DWORD *)v301;
    v303 = *(_DWORD *)(*(_DWORD *)v301 + 12);
      v304 = v303 == 4;
      if ( v303 == 4 )
        v304 = *(_DWORD *)(v302 + 4) == 4;
      if ( v304 )
      v305 = *(_DWORD *)v302;
      if ( *(_DWORD *)v302 )
        v303 = *(_DWORD *)(v305 + 12);
        v301 = v302;
        v302 = *(_DWORD *)v302;
        if ( *(_DWORD *)(v305 + 12) % (unsigned int)dword_27DB7B8 == v300 )
    v306 = v301 == 0;
    if ( v301 )
      v301 = *(_DWORD *)v301;
      v306 = v301 == 0;
    if ( v306 )
LABEL_506:
      v307 = operator new(0x10u);
      *v307 = 0;
      v307[1] = 4;
      v307[2] = &unk_28898CC;
      v301 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v300,
               (int)v307);
    v308 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v301 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v308, (unsigned __int64 *)&v375);
    v310 = v376;
    v309 = v375;
    if ( v375 != v376 )
        v313 = (int *)(*v309 - 12);
        if ( v313 != &dword_28898C0 )
          v311 = (unsigned int *)(*v309 - 4);
              v312 = __ldrex(v311);
            while ( __strex(v312 - 1, v311) );
            v312 = (*v311)--;
          if ( v312 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v313);
        v309 += 2;
      while ( v309 != v310 );
      v309 = v375;
    if ( v309 )
      operator delete(v309);
    v315 = v383;
    v314 = v382;
    if ( v382 != v383 )
        v318 = (int *)(*v314 - 12);
        if ( v318 != &dword_28898C0 )
          v316 = (unsigned int *)(*v314 - 4);
              v317 = __ldrex(v316);
            while ( __strex(v317 - 1, v316) );
            v317 = (*v316)--;
          if ( v317 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v318);
        v314 += 2;
      while ( v314 != v315 );
      v314 = v382;
    if ( v314 )
      operator delete(v314);
    v319 = v390;
    v192 = v389;
    if ( v389 != v390 )
        v322 = (int *)(*v192 - 12);
        if ( v322 != &dword_28898C0 )
          v320 = (unsigned int *)(*v192 - 4);
              v321 = __ldrex(v320);
            while ( __strex(v321 - 1, v320) );
            v321 = (*v320)--;
          if ( v321 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v322);
      while ( v192 != v319 );
      v192 = v389;
  if ( v192 )
    operator delete(v192);
}


int __fastcall HorseScreenController::_isChested(HorseScreenController *this)
{
  signed int v1; // r1@1
  signed int v2; // r2@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  HorseScreenController::_getInventoryGridSize((HorseScreenController *)&v4, (int)this);
  v1 = 0;
  v2 = 0;
  if ( v5 > 0 )
    v1 = 1;
  if ( v4 > 0 )
    v2 = 1;
  return v2 & v1;
}


void __fastcall HorseScreenController::_getFriendlyName(HorseScreenController *this, int a2)
{
  int v2; // r2@1
  int v3; // r1@1
  int v4; // r4@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r3@5
  unsigned int *v7; // r1@10
  unsigned int v8; // r0@12
  unsigned int *v9; // r5@16
  unsigned int v10; // r0@18

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 628);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v2 + 632);
    if ( v4 )
    {
      v5 = (unsigned int *)(v4 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 + 1, v5) );
      }
      else
        ++*v5;
    }
    HorseContainerManagerController::getFriendlyName(this, v3);
      v7 = (unsigned int *)(v4 + 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  else
    sub_15901A4((int *)this, (int *)&Util::EMPTY_STRING);
}


int __fastcall HorseScreenController::_getHorseContainerManagerController(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 628);
  v2 = *(_DWORD *)(a2 + 632);
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


void __fastcall HorseScreenController::_registerAutoPlaceOrder(HorseScreenController *this)
{
  HorseScreenController::_registerAutoPlaceOrder(this);
}


void __fastcall HorseScreenController::~HorseScreenController(HorseScreenController *this)
{
  ContainerScreenController *v1; // r0@1

  v1 = BlockContainerScreenController::~BlockContainerScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall HorseScreenController::_setAcceptedItems(HorseScreenController *this)
{
  HorseScreenController::_setAcceptedItems(this);
}
