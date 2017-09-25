

signed int __fastcall HudDebugOverlayRenderer::_renderWorkerPoolOverlay(int a1, int a2, ClientInstance *a3)
{
  int v3; // r8@1
  Scheduler *v4; // r0@1
  _DWORD *v5; // r0@1
  signed int v6; // r0@1
  int v7; // r1@2
  BackgroundWorker **v8; // r9@3
  __int64 v9; // r4@4
  int v10; // r11@4
  BackgroundWorker *v11; // r6@4
  int v12; // r7@4
  int *v13; // r0@4
  int v14; // r8@5
  int v15; // r10@7
  _DWORD *v17; // r0@14
  int v18; // r0@14
  unsigned int v19; // r0@15
  BackgroundWorker *v20; // t1@17
  unsigned int v21; // r0@17
  Scheduler *v22; // r0@21
  unsigned int v23; // r3@21
  int v24; // r7@21
  signed int v26; // r3@21
  bool v27; // zf@23
  signed int v29; // r7@23
  void *v30; // r0@28
  void *v31; // r4@29
  void *v32; // r0@30
  int *v33; // r5@32
  int v34; // r0@34
  unsigned int v35; // r1@35
  int v36; // r0@35
  _DWORD *v37; // r0@38
  signed int result; // r0@38
  signed int v39; // r11@38
  int *v40; // r5@39
  char *v42; // r4@39
  const char *v43; // r6@39
  int v44; // r1@41
  int v45; // r9@41
  int v46; // r6@41
  char v47; // r1@43
  char *v48; // r0@45
  signed int v49; // r6@45
  int v50; // r1@45
  char *v51; // r7@45
  int v52; // r4@45
  char v53; // r1@47
  char *v54; // r0@49
  char *v55; // r11@49
  BackgroundWorker **v56; // r1@49
  const char *v57; // r8@50
  __int64 v58; // kr18_8@55
  BackgroundWorker *v59; // r6@55
  int v60; // r10@55
  int *v61; // r0@55
  int v62; // r5@56
  int v63; // r1@59
  bool v64; // zf@61
  _DWORD *v65; // r0@65
  int *v66; // r0@66
  int v67; // r1@66
  int v68; // r1@66
  int v69; // r4@66
  char v70; // r1@68
  char *v71; // r0@70
  char *v72; // r0@71
  Scheduler *v73; // r0@71
  int v74; // r0@71
  char *v75; // r6@71
  int v76; // r4@71
  char v77; // r1@73
  char *v78; // r0@75
  void *v79; // r0@80
  void *v82; // r0@81
  unsigned int *v83; // r2@84
  signed int v84; // r1@86
  unsigned int *v85; // r2@88
  signed int v86; // r1@90
  int v87; // [sp+0h] [bp-190h]@0
  signed int v88; // [sp+20h] [bp-170h]@49
  void **v89; // [sp+2Ch] [bp-164h]@39
  void **v90; // [sp+30h] [bp-160h]@39
  void **v91; // [sp+34h] [bp-15Ch]@39
  void **v92; // [sp+38h] [bp-158h]@39
  void **v93; // [sp+3Ch] [bp-154h]@39
  BackgroundWorker **v94; // [sp+4Ch] [bp-144h]@49
  int v95; // [sp+50h] [bp-140h]@49
  int v96; // [sp+58h] [bp-138h]@1
  Font *v97; // [sp+5Ch] [bp-134h]@1
  int v98; // [sp+60h] [bp-130h]@49
  signed int v99; // [sp+64h] [bp-12Ch]@2
  int v100; // [sp+64h] [bp-12Ch]@39
  int v101; // [sp+68h] [bp-128h]@1
  int v102; // [sp+6Ch] [bp-124h]@3
  BackgroundWorker **v103; // [sp+6Ch] [bp-124h]@50
  int v104; // [sp+70h] [bp-120h]@2
  signed int v105; // [sp+70h] [bp-120h]@39
  BackgroundWorker **i; // [sp+74h] [bp-11Ch]@3
  int v107; // [sp+74h] [bp-11Ch]@38
  int v108; // [sp+78h] [bp-118h]@80
  void **v109; // [sp+7Ch] [bp-114h]@39
  int v110; // [sp+80h] [bp-110h]@82
  void **v111; // [sp+84h] [bp-10Ch]@39
  void **v112; // [sp+88h] [bp-108h]@80
  int v113; // [sp+A4h] [bp-ECh]@82
  int v114; // [sp+ACh] [bp-E4h]@81
  int v115; // [sp+B0h] [bp-E0h]@82
  signed int v116; // [sp+138h] [bp-58h]@38
  int v117; // [sp+13Ch] [bp-54h]@38
  int v118; // [sp+140h] [bp-50h]@21

  v3 = a1;
  v96 = a2;
  v4 = (Scheduler *)ClientInstance::getFont(a3);
  v97 = (Font *)v4;
  v5 = Scheduler::singleton(v4);
  v101 = v5[16];
  v6 = v5[17] - v101;
  if ( v6 >> 2 )
  {
    v7 = 0;
    v99 = v6 >> 2;
    v104 = v3 + 72;
    do
    {
      v102 = v7;
      v8 = (BackgroundWorker **)*(_QWORD *)(*(_DWORD *)(v101 + 4 * v7) + 8);
      for ( i = (BackgroundWorker **)(*(_QWORD *)(*(_DWORD *)(v101 + 4 * v7) + 8) >> 32);
            v8 != i;
            *(_DWORD *)(HIDWORD(v9) + 8) = v21 )
      {
        v9 = *(_QWORD *)(v3 + 72);
        v10 = v3;
        v11 = *v8;
        v12 = (unsigned int)*v8 % (unsigned int)(*(_QWORD *)(v3 + 72) >> 32);
        v13 = *(int **)(v9 + 4 * v12);
        if ( !v13 )
          goto LABEL_14;
        v14 = *v13;
        while ( v11 != *(BackgroundWorker **)(v14 + 4) )
        {
          v15 = *(_DWORD *)v14;
          if ( *(_DWORD *)v14 )
          {
            v13 = (int *)v14;
            v14 = *(_DWORD *)v14;
            if ( *(_DWORD *)(v15 + 4) % HIDWORD(v9) == v12 )
              continue;
          }
        }
        _ZF = v13 == 0;
        if ( v13 )
          HIDWORD(v9) = *v13;
          _ZF = *v13 == 0;
        if ( _ZF )
LABEL_14:
          v17 = operator new(0x10u);
          *v17 = 0;
          v17[1] = v11;
          v17[2] = 0;
          v17[3] = 0;
          v18 = std::_Hashtable<BackgroundWorker *,std::pair<BackgroundWorker * const,HudDebugOverlayRenderer::WorkerStats>,std::allocator<std::pair<BackgroundWorker * const,HudDebugOverlayRenderer::WorkerStats>>,std::__detail::_Select1st,std::equal_to<BackgroundWorker *>,std::hash<BackgroundWorker *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                  v104,
                  v12,
                  (unsigned int)v11,
                  (int)v17);
          v11 = *v8;
          HIDWORD(v9) = v18;
        v19 = BackgroundWorker::_getApproximateCallbackSize(v11);
        if ( v19 < *(_DWORD *)(HIDWORD(v9) + 12) )
          v19 = *(_DWORD *)(HIDWORD(v9) + 12);
        *(_DWORD *)(HIDWORD(v9) + 12) = v19;
        v20 = *v8;
        ++v8;
        v21 = BackgroundWorker::getApproximateTaskCount(v20);
        v3 = v10;
        if ( v21 < *(_DWORD *)(HIDWORD(v9) + 8) )
          v21 = *(_DWORD *)(HIDWORD(v9) + 8);
      }
      v7 = v102 + 1;
    }
    while ( v102 + 1 != v99 );
  }
  sub_119D43C(&v118);
  v22 = (Scheduler *)(v3 + 104);
  v24 = (*(_QWORD *)&v118 - *(_QWORD *)(v3 + 104)) >> 32;
  v23 = v118 - *(_DWORD *)(v3 + 104);
  _CF = v23 >= 0x1DCD6500;
  _ZF = v23 == 500000000;
  v26 = 0;
  if ( !_ZF && _CF )
    v26 = 1;
  v27 = v24 == 0;
  _NF = v24 < 0;
  v29 = 0;
  if ( !_NF && !v27 )
    v29 = 1;
  if ( v27 )
    v29 = v26;
  if ( v29 )
    *(_QWORD *)v22 = *(_QWORD *)&v118;
    v30 = *(void **)(v3 + 52);
    if ( v30 )
      do
        v31 = *(void **)v30;
        operator delete(v30);
        v30 = v31;
      while ( v31 );
    v32 = *(void **)(v3 + 44);
    if ( (void *)(v3 + 68) != v32 )
      operator delete(v32);
    *(_QWORD *)(v3 + 60) = *(_QWORD *)(v3 + 88);
    v33 = *(int **)(v3 + 72);
    if ( (int *)(v3 + 96) == v33 )
      *(_DWORD *)(v3 + 44) = v3 + 68;
      v34 = *v33;
      v33 = (int *)(v3 + 68);
      *(_DWORD *)(v3 + 68) = v34;
    else
      *(_DWORD *)(v3 + 44) = v33;
    v35 = *(_DWORD *)(v3 + 76);
    *(_DWORD *)(v3 + 48) = v35;
    v36 = *(_DWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 52) = v36;
    *(_DWORD *)(v3 + 56) = *(_DWORD *)(v3 + 84);
    if ( v36 )
      v33[*(_DWORD *)(v36 + 4) % v35] = v3 + 52;
    v22 = 0;
    *(_DWORD *)(v3 + 92) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    *(_DWORD *)(v3 + 72) = v3 + 96;
    *(_DWORD *)(v3 + 76) = 1;
    *(_DWORD *)(v3 + 80) = 0;
    *(_DWORD *)(v3 + 84) = 0;
  v37 = Scheduler::singleton(v22);
  v107 = v37[16];
  result = v37[17] - v107;
  v39 = result >> 2;
  v116 = result >> 2;
  v117 = v107;
  if ( result >> 2 )
    v40 = (int *)&v109;
    v100 = v3 + 44;
    __asm
      VMOV.F32        S16, #20.0
      VMOV.F32        S18, #2.0
    v42 = (char *)&v111;
    v93 = off_26D3F60;
    v43 = "Workers for: ";
    v92 = (void **)off_26D3F6C;
    v91 = (void **)off_26D3F68;
    v89 = off_26D3F84;
    v90 = off_26D3F80[0];
    v105 = 0;
    while ( 1 )
      sub_119CB58((int)v40, 24);
      sub_119C904(v42, (int)v43, 13);
      v44 = *(_DWORD *)(*(_DWORD *)(v107 + 4 * v105) + 24);
      sub_119E2D4(v42, v44, *(_DWORD *)(v44 - 12));
      v45 = (int)v42;
      v46 = *(_DWORD *)&v42[(_DWORD)*(v111 - 3) + 124];
      if ( !v46 )
        sub_119C994();
      if ( *(_BYTE *)(v46 + 28) )
        v47 = *(_BYTE *)(v46 + 39);
      else
        sub_119C924(v46);
        v47 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v46 + 24))(v46, 10);
      v48 = sub_119C934(v42, v47);
      sub_119C944(v48);
      v49 = WorkerPool::size(*(WorkerPool **)(v107 + 4 * v105));
      sub_119C904(v42, (int)"Wakeups per second: ", 20);
      v50 = *(_DWORD *)(*(_DWORD *)(v107 + 4 * v105) + 40);
      v51 = sub_119EA8C(v42);
      v52 = *(_DWORD *)&v51[*(_DWORD *)(*(_DWORD *)v51 - 12) + 124];
      if ( !v52 )
      if ( *(_BYTE *)(v52 + 28) )
        v53 = *(_BYTE *)(v52 + 39);
        sub_119C924(v52);
        v53 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v52 + 24))(v52, 10);
      v54 = sub_119C934(v51, v53);
      sub_119C944(v54);
      v88 = v39;
      v98 = v3;
      v55 = (char *)v45;
      v95 = v49 + 2;
      v56 = (BackgroundWorker **)*(_QWORD *)(*(_DWORD *)(v107 + 4 * v105) + 8);
      v94 = (BackgroundWorker **)(*(_QWORD *)(*(_DWORD *)(v107 + 4 * v105) + 8) >> 32);
      if ( v56 != v94 )
        do
          v103 = v56;
          v57 = "3";
          if ( BackgroundWorker::isIdle(*v56) )
            v57 = "4";
          if ( !*(_BYTE *)(*(_DWORD *)(v107 + 4 * v105) + 4) && Scheduler::isStarved((Scheduler *)"4") )
            v57 = "5";
          v58 = *(_QWORD *)(v98 + 44);
          v59 = *v103;
          v60 = (unsigned int)*v103 % HIDWORD(v58);
          v61 = *(int **)(v58 + 4 * v60);
          if ( !v61 )
            goto LABEL_65;
          v62 = *v61;
          while ( v59 != *(BackgroundWorker **)(v62 + 4) )
            if ( *(_DWORD *)v62 )
            {
              v63 = *(_DWORD *)(*(_DWORD *)v62 + 4) % HIDWORD(v58);
              v61 = (int *)v62;
              v62 = *(_DWORD *)v62;
              if ( v63 == v60 )
                continue;
            }
          v64 = v61 == 0;
          if ( v61 )
            v45 = *v61;
            v64 = *v61 == 0;
          if ( v64 )
LABEL_65:
            v65 = operator new(0x10u);
            *v65 = 0;
            v65[1] = v59;
            v65[2] = 0;
            v65[3] = 0;
            v45 = std::_Hashtable<BackgroundWorker *,std::pair<BackgroundWorker * const,HudDebugOverlayRenderer::WorkerStats>,std::allocator<std::pair<BackgroundWorker * const,HudDebugOverlayRenderer::WorkerStats>>,std::__detail::_Select1st,std::equal_to<BackgroundWorker *>,std::hash<BackgroundWorker *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                    v100,
                    v60,
                    (unsigned int)v59,
                    (int)v65);
          sub_119C904(v55, (int)"    ", 4);
          sub_119C904(v55, (int)&unk_262D1C0, 2);
          sub_119C904(v55, (int)v57, 1);
          v66 = (int *)BackgroundWorker::getName(*v103);
          sub_119C904(v55, *v66, *(_DWORD *)(*v66 - 12));
          sub_119C904(v55, (int)" TASKS: ", 8);
          v67 = *(_DWORD *)(v45 + 8);
          sub_119EA8C(v55);
          sub_119C904(v55, (int)" CBS: ", 6);
          v68 = *(_DWORD *)(v45 + 12);
          v69 = *(_DWORD *)&v55[(_DWORD)*(v111 - 3) + 124];
          if ( !v69 )
            sub_119C994();
          if ( *(_BYTE *)(v69 + 28) )
            v70 = *(_BYTE *)(v69 + 39);
          else
            sub_119C924(v69);
            v70 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v69 + 24))(v69, 10);
          v71 = sub_119C934(v55, v70);
          sub_119C944(v71);
          if ( !*(_BYTE *)(*(_DWORD *)(v107 + 4 * v105) + 4) )
            v72 = sub_119C904(v55, (int)"    Starved Frames: ", 20);
            v73 = (Scheduler *)Scheduler::singleton((Scheduler *)v72);
            v74 = Scheduler::_getNumberOfStarvedFrames(v73);
            v75 = (char *)sub_119C914((int)v55, v74);
            v76 = *(_DWORD *)&v75[*(_DWORD *)(*(_DWORD *)v75 - 12) + 124];
            if ( !v76 )
              sub_119C994();
            if ( *(_BYTE *)(v76 + 28) )
              v77 = *(_BYTE *)(v76 + 39);
            else
              sub_119C924(v76);
              v77 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v76 + 24))(v76, 10);
            v78 = sub_119C934(v75, v77);
            sub_119C944(v78);
            ++v95;
          v56 = v103 + 1;
        while ( v103 + 1 != v94 );
      v42 = v55;
      v40 = (int *)&v109;
      sub_119D48C(&v108, (int)&v112);
      v3 = v98;
      v39 = v88;
      __asm { VSTR            S16, [SP,#0x190+var_190] }
      Font::draw(*(float *)&v97, v96, (int)&v108, 1092616192, v87, COERCE_FLOAT(&Color::WHITE), 0.0, 0, -1, 0);
      v79 = (void *)(v108 - 12);
      if ( (int *)(v108 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v108 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
        else
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v79);
      _R6 = Font::getWrapHeight(v97);
      _R0 = v95;
      __asm
        VMOV            S0, R0
        VCVT.F32.U32    S20, S0
      v109 = v93;
      *(_DWORD *)((char *)*(v93 - 3) + (_DWORD)&v109) = v90;
      v111 = v89;
      v112 = &off_27734E8;
      v82 = (void *)(v114 - 12);
      if ( (int *)(v114 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v114 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v82);
      v112 = &off_26D40A8;
      sub_119C954((unsigned int **)&v113);
      v109 = v91;
      *(_DWORD *)((char *)*(v91 - 3) + (_DWORD)&v109) = v92;
      v110 = 0;
      sub_119C964(&v115);
      result = v105 + 1;
      v105 = result;
      if ( result == v88 )
        break;
        VMOV            S0, R6
        VADD.F32        S2, S16, S18
        VMUL.F32        S0, S0, S20
      v107 = v117;
      v43 = "Workers for: ";
      __asm { VADD.F32        S16, S2, S0 }
  return result;
}


void __fastcall HudDebugOverlayRenderer::~HudDebugOverlayRenderer(HudDebugOverlayRenderer *this)
{
  HudDebugOverlayRenderer::~HudDebugOverlayRenderer(this);
}


void __fastcall HudDebugOverlayRenderer::~HudDebugOverlayRenderer(HudDebugOverlayRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)HudDebugOverlayRenderer::~HudDebugOverlayRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


MinecraftUICustomRenderer *__fastcall HudDebugOverlayRenderer::HudDebugOverlayRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1
  void *v2; // r0@1
  double v3; // r0@2
  double v4; // r0@2
  int v5; // r7@4
  void *v6; // r6@4
  unsigned int v7; // r0@5
  int v8; // r7@7
  void *v9; // r6@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  int v13; // [sp+4h] [bp-2Ch]@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E0310;
  mce::MaterialPtr::MaterialPtr((MinecraftUICustomRenderer *)((char *)v1 + 8));
  sub_119C884((void **)&v13, "debug_texture");
  mce::MaterialPtr::MaterialPtr(
    (MinecraftUICustomRenderer *)((char *)v1 + 20),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v13);
  v2 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  mce::MaterialPtr::MaterialPtr((MinecraftUICustomRenderer *)((char *)v1 + 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 1065353216;
  LODWORD(v3) = (char *)v1 + 60;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v3)));
  *((_DWORD *)v1 + 12) = LODWORD(v4);
  if ( LODWORD(v4) == 1 )
    *((_DWORD *)v1 + 17) = 0;
    v6 = (char *)v1 + 68;
  else
    if ( LODWORD(v4) >= 0x40000000 )
      sub_119C874();
    v5 = 4 * LODWORD(v4);
    v6 = operator new(4 * LODWORD(v4));
    _aeabi_memclr4(v6, v5);
  *((_DWORD *)v1 + 11) = v6;
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 1065353216;
  LODWORD(v4) = (char *)v1 + 88;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v7 = sub_119C844(v4);
  *((_DWORD *)v1 + 19) = v7;
  if ( v7 == 1 )
    *((_DWORD *)v1 + 24) = 0;
    v9 = (char *)v1 + 96;
    if ( v7 >= 0x40000000 )
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *((_DWORD *)v1 + 18) = v9;
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  return v1;
}


int __fastcall HudDebugOverlayRenderer::clone(HudDebugOverlayRenderer *this)
{
  HudDebugOverlayRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI23HudDebugOverlayRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


int __fastcall HudDebugOverlayRenderer::~HudDebugOverlayRenderer(HudDebugOverlayRenderer *this)
{
  HudDebugOverlayRenderer *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6
  void *v6; // r5@7
  char *v7; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_26E0310;
  v2 = (void *)*((_DWORD *)this + 20);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 9), 4 * (*((_QWORD *)v1 + 9) >> 32));
  *((_DWORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 21) = 0;
  v4 = (char *)*((_DWORD *)v1 + 18);
  if ( v4 && (char *)v1 + 96 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 13);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 44), 4 * (*(_QWORD *)((char *)v1 + 44) >> 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  v7 = (char *)*((_DWORD *)v1 + 11);
  if ( v7 && (char *)v1 + 68 != v7 )
    operator delete(v7);
  mce::MaterialPtr::~MaterialPtr((HudDebugOverlayRenderer *)((char *)v1 + 32));
  mce::MaterialPtr::~MaterialPtr((HudDebugOverlayRenderer *)((char *)v1 + 20));
  mce::MaterialPtr::~MaterialPtr((HudDebugOverlayRenderer *)((char *)v1 + 8));
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


_DWORD *__fastcall HudDebugOverlayRenderer::renderRenderChunkOverlay(int a1, int a2, float a3, int a4)
{
  int v4; // r10@1
  int v5; // r11@1
  char *v6; // r7@1
  int v7; // r8@1
  __int64 v8; // kr00_8@1
  int v11; // r6@1
  char *v19; // r4@1
  char *v22; // r4@1
  char *v25; // r0@1
  char *v26; // r0@1
  char *v27; // r0@1
  char *v28; // r0@1
  char *v29; // r0@1
  int v30; // r1@1
  char *v31; // r0@1
  int v32; // r1@1
  char *v33; // r0@1
  int v34; // r1@1
  char *v35; // r0@1
  int **v36; // r10@1
  int v37; // r9@2
  int v38; // r7@2
  int v39; // r6@3
  int v40; // r6@3
  int v41; // r0@3
  int v42; // t1@3
  char *v43; // r0@4
  char *v44; // r0@4
  char *v45; // r0@4
  char *v49; // r0@4
  int v50; // r0@4
  int v51; // r1@4
  char *v52; // r0@4
  int v53; // r0@4
  int v54; // r1@4
  char *v55; // r0@4
  int v56; // r4@4
  char v57; // r1@6
  char *v58; // r0@8
  void *v59; // r0@8
  void **v60; // r0@9
  void *v61; // r0@9
  unsigned int *v63; // r2@11
  signed int v64; // r1@13
  unsigned int *v65; // r2@15
  signed int v66; // r1@17
  int v67; // [sp+1Ch] [bp-114h]@1
  float v68; // [sp+20h] [bp-110h]@1
  int v69; // [sp+24h] [bp-10Ch]@8
  void **v70; // [sp+28h] [bp-108h]@1
  int v71; // [sp+2Ch] [bp-104h]@10
  void **v72; // [sp+30h] [bp-100h]@1
  void **v73; // [sp+34h] [bp-FCh]@8
  int v74; // [sp+50h] [bp-E0h]@10
  int v75; // [sp+58h] [bp-D8h]@9
  int v76; // [sp+5Ch] [bp-D4h]@10

  v4 = a2;
  v5 = a4;
  v68 = a3;
  sub_119CB58((int)&v70, 24);
  v6 = LevelRendererCamera::getViewArea((LevelRendererCamera *)v5);
  v7 = *((_DWORD *)v6 + 18);
  v8 = *((_QWORD *)v6 + 6);
  _R1 = *((_DWORD *)v6 + 14) + *((_DWORD *)v6 + 17);
  _R0 = HIDWORD(v8) + *((_DWORD *)v6 + 16);
  v11 = *((_DWORD *)v6 + 23);
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S16, S0
    VMOV            S0, R0
  }
  _R0 = *((_DWORD *)v6 + 15) + v8;
    VCVT.F32.S32    S18, S0
    VCVT.F32.S32    S22, S0
  sub_119C904((char *)&v72, (int)"ViewArea: \n", 11);
  sub_119C904((char *)&v72, (int)"   Bounds Center: ", 18);
    VMOV.F32        S20, #0.5
    VMUL.F32        S0, S22, S20
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  v19 = sub_119D56C((char *)&v72);
  sub_119C904(v19, (int)", ", 2);
    VMUL.F32        S0, S18, S20
  v22 = sub_119D56C(v19);
  sub_119C904(v22, (int)", ", 2);
    VMUL.F32        S0, S16, S20
  v25 = sub_119D56C(v22);
  sub_119C904(v25, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"   Bounds Radius: ", 18);
  v26 = (char *)sub_119C914((int)&v72, v11 * v7 / 2);
  sub_119C904(v26, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"   Bounds Area: ", 16);
  v27 = (char *)sub_119C914((int)&v72, *((_DWORD *)v6 + 21));
  sub_119C904(v27, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"   Bounds Volume: ", 18);
  v28 = (char *)sub_119C914((int)&v72, *((_DWORD *)v6 + 22));
  sub_119C904(v28, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"View Distance: ", 15);
  v29 = (char *)sub_119C914((int)&v72, *(_DWORD *)(v5 + 368));
  sub_119C904(v29, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"Camera: \n", 9);
  sub_119C904((char *)&v72, (int)"   Under Lava: ", 15);
  v30 = *(_BYTE *)(v5 + 1234);
  v31 = sub_119D6CC((char *)&v72);
  sub_119C904(v31, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"   Under Liquid: ", 17);
  v32 = *(_BYTE *)(v5 + 1233);
  v33 = sub_119D6CC((char *)&v72);
  sub_119C904(v33, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"   Under Water: ", 16);
  v34 = *(_BYTE *)(v5 + 1232);
  v35 = sub_119D6CC((char *)&v72);
  sub_119C904(v35, (int)"\n", 1);
  v67 = v4;
  v36 = (int **)TerrainLayer::sAllLayers;
  if ( (dword_27D2984 - TerrainLayer::sAllLayers) >> 2 )
    v37 = 4 * ((dword_27D2984 - TerrainLayer::sAllLayers) >> 2);
    v38 = 0;
    do
    {
      v39 = **v36;
      sub_119C904((char *)&v72, (int)&unk_262D1C0, 2);
      sub_119C904((char *)&v72, (int)"4 Layer:", 8);
      sub_119C904((char *)&v72, (int)"1 ", 2);
      sub_119C904((char *)&v72, (*v36)[2], *(_DWORD *)((*v36)[2] - 12));
      sub_119C904((char *)&v72, (int)"2 Size:", 7);
      sub_119C904((char *)&v72, (int)"2 ", 2);
      v40 = v5 + 12 * v39;
      v41 = *(_DWORD *)(v40 + 8);
      v42 = *(_DWORD *)(v40 + 12);
      sub_119EA8C((char *)&v72);
      sub_119C904((char *)&v72, (int)"\n", 1);
      v37 -= 4;
      ++v36;
      v38 += -1431655765 * ((*(_DWORD *)(v40 + 12) - *(_DWORD *)(v40 + 8)) >> 2);
    }
    while ( v37 );
  sub_119C904((char *)&v72, (int)&unk_262D1C0, 2);
  sub_119C904((char *)&v72, (int)"4 Total Chunks Renderered: ", 27);
  v43 = sub_119EA8C((char *)&v72);
  sub_119C904(v43, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"f Allocated Chunks: ", 20);
  LevelRendererCamera::getAllocatedChunks((LevelRendererCamera *)v5);
  v44 = sub_119EA8C((char *)&v72);
  sub_119C904(v44, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"f Valid RenderChunk Meshes: ", 28);
  LevelRendererCamera::getRenderChunkMeshCount((LevelRendererCamera *)v5);
  v45 = sub_119EA8C((char *)&v72);
  sub_119C904(v45, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"f Valid RenderChunk Mesh Size (MB): ", 36);
  _R0 = LevelRendererCamera::getMeshSizeInBytes((LevelRendererCamera *)v5);
    VLDR            S2, =9.5367e-7
    VCVT.F32.U32    S0, S0
    VMUL.F32        S0, S0, S2
  v49 = sub_119D56C((char *)&v72);
  sub_119C904(v49, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"f Deferred Build Pool Size: ", 28);
  v50 = *(_DWORD *)(v5 + 1748);
  v51 = *(_DWORD *)(v5 + 1752);
  v52 = sub_119EA8C((char *)&v72);
  sub_119C904(v52, (int)"\n", 1);
  sub_119C904((char *)&v72, (int)"f Deferred Sort Pool Size: ", 27);
  v53 = *(_DWORD *)(v5 + 1760);
  v54 = *(_DWORD *)(v5 + 1764);
  v55 = sub_119EA8C((char *)&v72);
  sub_119C904(v55, (int)"\n", 1);
  v56 = *(_DWORD *)((char *)*(v72 - 3) + (_DWORD)&v72 + 124);
  if ( !v56 )
    sub_119C994();
  if ( *(_BYTE *)(v56 + 28) )
    v57 = *(_BYTE *)(v56 + 39);
  else
    sub_119C924(v56);
    v57 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v56 + 24))(v56, 10);
  v58 = sub_119C934((char *)&v72, v57);
  sub_119C944(v58);
  sub_119D48C(&v69, (int)&v73);
  Font::draw(v68, v67, (int)&v69, 1092616192, 1101004800, COERCE_FLOAT(&Color::WHITE), 0.0, 0, -1, 0);
  v59 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
    else
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v59);
  v60 = off_26D3F84;
  v70 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v70) = off_26D3F80[0];
  v72 = v60;
  v73 = &off_27734E8;
  v61 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v75 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  v73 = &off_26D40A8;
  sub_119C954((unsigned int **)&v74);
  v70 = (void **)off_26D3F68;
  *(void ***)((char *)&v70 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v71 = 0;
  return sub_119C964(&v76);
}
