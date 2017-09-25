

void __fastcall CommandSelectorBase::newResults(CommandSelectorBase *this, const CommandOrigin *a2, const CommandOrigin *a3)
{
  CommandSelectorBase::newResults(this, a2, a3);
}


int __fastcall CommandSelectorBase::setType(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall CommandSelectorBase::setRadiusMin(int result, float a2)
{
  *(float *)(result + 76) = a2;
  *(_WORD *)(result + 89) = 257;
  return result;
}


signed int __fastcall CommandSelectorBase::matchType(CommandSelectorBase *this, Entity *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  Entity *v4; // r4@1
  signed int v5; // r0@2
  int v6; // r1@2
  signed int result; // r0@6

  *(_QWORD *)&v2 = *((_QWORD *)this + 3);
  v4 = a2;
  if ( v2 == v3 )
  {
    result = 1;
  }
  else
    while ( 1 )
    {
      v5 = EntityClassTree::isInstanceOf((int)v4, *(_DWORD *)v2);
      v6 = *(_BYTE *)(v2 + 4);
      if ( v5 )
        v6 ^= 1u;
      if ( v6 != 1 )
        break;
      v2 += 8;
      if ( v2 == v3 )
        return 1;
    }
    result = 0;
  return result;
}


signed int __fastcall CommandSelectorBase::matchName(CommandSelectorBase *this, Entity *a2)
{
  CommandSelectorBase *v2; // r4@1
  Entity *v3; // r5@1
  void *v4; // r0@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@7
  int v8; // r4@8
  int v9; // r5@8
  __int64 v10; // kr00_8@8
  signed int v11; // r0@9
  int v12; // r1@9
  signed int v13; // r4@13
  _BYTE *v14; // r0@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  int v18; // [sp+0h] [bp-28h]@2
  _BYTE *v19; // [sp+4h] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v19 = &unk_28898CC;
  if ( EntityClassTree::isInstanceOf((int)a2, 64) == 1 )
  {
    ItemInstance::getName((ItemInstance *)&v18, (int)v3 + 3416);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v19,
      &v18);
    v4 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v18 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
  }
  else
    v7 = (int *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 188))(v3);
    EntityInteraction::setInteractText((int *)&v19, v7);
  v10 = *(_QWORD *)((char *)v2 + 12);
  v8 = *(_QWORD *)((char *)v2 + 12) >> 32;
  v9 = v10;
  if ( (_DWORD)v10 == v8 )
    v13 = 1;
    while ( 1 )
      v11 = Util::compareNoCase(*((_DWORD *)v19 - 3), v19, *(_DWORD *)(*(_DWORD *)v9 - 12), *(_BYTE **)v9);
      v12 = *(_BYTE *)(v9 + 4);
      if ( v11 )
        v12 ^= 1u;
      if ( v12 != 1 )
        break;
      v9 += 8;
      if ( v9 == v8 )
        v13 = 1;
        goto LABEL_16;
    v13 = 0;
LABEL_16:
  v14 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v13;
}


int __fastcall CommandSelectorBase::setBox(int result, int a2)
{
  *(_DWORD *)(result + 64) = *(_DWORD *)a2;
  *(_DWORD *)(result + 68) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(result + 89) = 1;
  *(_BYTE *)(result + 91) = 1;
  return result;
}


void __fastcall CommandSelectorBase::newResults(CommandSelectorBase *this, const CommandOrigin *a2, const CommandOrigin *a3)
{
  const CommandOrigin *v3; // r7@1
  CommandSelectorBase *v4; // r10@1
  const CommandOrigin *v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1
  signed int v8; // r4@1
  __int64 v9; // r0@6
  int *v10; // r5@9
  __int64 v11; // r9@11
  int v12; // r8@11
  void *v13; // r0@11
  void (*v14)(void); // r2@11
  void *v15; // r3@11
  int v16; // r1@11
  Entity *v17; // r5@12
  float v22; // r8@17
  float v23; // r10@17
  int v24; // r11@17
  _DWORD *v25; // r0@20
  Level *v26; // r4@20
  int *v27; // r10@20
  _DWORD *v28; // r0@22
  Dimension *v29; // r7@24
  int v30; // r9@26
  _DWORD *v31; // r0@26
  __int64 v32; // r1@26
  int v34; // r4@30
  __int64 v35; // r0@30
  _DWORD *v36; // r0@34
  __int64 v37; // r1@34
  int v38; // r0@39
  char *v39; // r5@40
  unsigned int v40; // r6@40
  unsigned int v41; // r7@43
  unsigned int v42; // r7@45
  int v43; // r4@45
  void *v44; // r6@47
  int v45; // r8@48
  char *v46; // r9@49
  void *v47; // r6@51
  int v48; // r8@52
  char *v49; // r9@53
  void *v50; // r8@54
  signed int v51; // r1@54
  unsigned int v52; // r2@54
  unsigned int v53; // r1@56
  unsigned int v54; // r6@56
  char *v55; // r7@62
  signed int v56; // r8@64
  int v57; // r6@70
  int v58; // r0@70
  signed int v59; // r8@72
  int i; // r6@77
  char *v61; // r5@87
  int v62; // r5@89
  int v63; // [sp+0h] [bp-118h]@9
  int *v64; // [sp+4h] [bp-114h]@9
  _DWORD *v65; // [sp+8h] [bp-110h]@34
  __int64 v66; // [sp+10h] [bp-108h]@34
  char v67; // [sp+18h] [bp-100h]@32
  void (*v68)(void); // [sp+20h] [bp-F8h]@32
  signed int (__fastcall *v69)(int *, Dimension *); // [sp+24h] [bp-F4h]@32
  _DWORD *v70; // [sp+28h] [bp-F0h]@26
  __int64 v71; // [sp+30h] [bp-E8h]@26
  _DWORD *v72; // [sp+38h] [bp-E0h]@22
  int v73; // [sp+3Ch] [bp-DCh]@22
  void (*v74)(void); // [sp+40h] [bp-D8h]@22
  signed int (__fastcall *v75)(int *, Dimension *); // [sp+44h] [bp-D4h]@22
  _DWORD *v76; // [sp+48h] [bp-D0h]@20
  void (*v77)(void); // [sp+50h] [bp-C8h]@20
  signed int (__fastcall *v78)(int, int); // [sp+54h] [bp-C4h]@20
  void *v79; // [sp+58h] [bp-C0h]@19
  int v80; // [sp+5Ch] [bp-BCh]@19
  void (*v81)(void); // [sp+60h] [bp-B8h]@9
  void *v82; // [sp+64h] [bp-B4h]@19
  unsigned int v83; // [sp+6Ch] [bp-ACh]@9
  void *ptr; // [sp+70h] [bp-A8h]@9
  int v85; // [sp+74h] [bp-A4h]@9
  int v86; // [sp+78h] [bp-A0h]@9
  char v87; // [sp+7Ch] [bp-9Ch]@17
  int v88; // [sp+80h] [bp-98h]@9
  int v89; // [sp+84h] [bp-94h]@9
  int *v90; // [sp+88h] [bp-90h]@9
  int *v91; // [sp+8Ch] [bp-8Ch]@9
  int v92; // [sp+90h] [bp-88h]@9
  float v93; // [sp+94h] [bp-84h]@16
  float v96; // [sp+A0h] [bp-78h]@1
  float v97; // [sp+A4h] [bp-74h]@16
  int v98; // [sp+A8h] [bp-70h]@11
  void *v99; // [sp+B0h] [bp-68h]@11
  int v100; // [sp+B4h] [bp-64h]@11
  void *v101; // [sp+C0h] [bp-58h]@18
  int v102; // [sp+C4h] [bp-54h]@18
  void *v103; // [sp+D0h] [bp-48h]@17
  int v104; // [sp+D4h] [bp-44h]@17
  _DWORD *v105; // [sp+E0h] [bp-38h]@22
  int v106; // [sp+E4h] [bp-34h]@22

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a3 + 24))(a3);
  CommandPosition::getPosition((CommandPosition *)&v96, (const CommandOrigin *)((char *)v5 + 48), (int)v3);
  j__ZNSt12__shared_ptrISt6vectorIP6EntitySaIS2_EELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS4_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)v4);
  v7 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 36))(v3);
  v8 = *((_DWORD *)v5 + 1);
  if ( v7 )
  {
    if ( !v8 )
    {
LABEL_12:
      v17 = (Entity *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 32))(v3);
      if ( v17 && (!*((_BYTE *)v5 + 92) || EntityClassTree::isInstanceOf((int)v17, 319) == 1) )
      {
        if ( *((_BYTE *)v5 + 90) )
        {
          Entity::getAttachPos((AABB *)&v93, (int)v17, 0, 0);
          __asm
          {
            VLDR            S0, [SP,#0x118+var_84]
            VLDR            S6, [SP,#0x118+var_78]
            VLDR            S2, [SP,#0x118+var_80]
            VLDR            S8, [SP,#0x118+var_74]
            VSUB.F32        S0, S6, S0
            VLDR            S4, [SP,#0x118+var_7C]
            VSUB.F32        S2, S8, S2
            VLDR            S10, [SP,#0x118+var_70]
            VSUB.F32        S4, S10, S4
            VMUL.F32        S0, S0, S0
            VMUL.F32        S2, S2, S2
            VMUL.F32        S4, S4, S4
            VADD.F32        S0, S2, S0
            VADD.F32        S0, S0, S4
            VSQRT.F32       S0, S0
          }
        }
        else
          __asm { VLDR            S0, =0.0 }
        __asm { VMOV            R3, S0 }
        if ( CommandSelectorBase::filter(v5, v3, v17, _R3) == 1 )
          v34 = *(_DWORD *)v4;
          v35 = *(_QWORD *)(*(_DWORD *)v4 + 4);
          if ( (_DWORD)v35 == HIDWORD(v35) )
            v50 = *(void **)v34;
            v51 = v35 - *(_DWORD *)v34;
            v52 = v51 >> 2;
            if ( !(v51 >> 2) )
              v52 = 1;
            v53 = v52 + (v51 >> 2);
            v54 = v53;
            if ( 0 != v53 >> 30 )
              v54 = 0x3FFFFFFF;
            if ( v53 < v52 )
            if ( v54 )
            {
              if ( v54 >= 0x40000000 )
                sub_21E57F4();
              v55 = (char *)operator new(4 * v54);
              LODWORD(v35) = *(_QWORD *)v34 >> 32;
              v50 = (void *)*(_QWORD *)v34;
            }
            else
              v55 = 0;
            *(_DWORD *)&v55[v35 - (_DWORD)v50] = v17;
            v61 = &v55[v35 - (_DWORD)v50];
            if ( 0 != ((signed int)v35 - (signed int)v50) >> 2 )
              _aeabi_memmove4(v55, v50);
            v62 = (int)(v61 + 4);
            if ( v50 )
              operator delete(v50);
            *(_DWORD *)v34 = v55;
            *(_DWORD *)(v34 + 4) = v62;
            *(_DWORD *)(v34 + 8) = &v55[4 * v54];
          else
            *(_DWORD *)v35 = v17;
            *(_DWORD *)(v34 + 4) += 4;
      }
      return;
    }
  }
  else
      goto LABEL_12;
    if ( v8 != 2 )
    v9 = *(_QWORD *)((char *)v5 + 12);
    if ( (_DWORD)v9 == HIDWORD(v9) || *(_BYTE *)(v9 + 4) )
    v8 = 2;
  v63 = v6;
  v64 = (int *)v4;
  v10 = &v88;
  v92 = 0;
  v88 = 0;
  v89 = 0;
  v90 = &v88;
  v91 = &v88;
  v85 = 0;
  v86 = 0;
  v83 = 0;
  ptr = 0;
  v81 = 0;
  if ( *((_DWORD *)v5 + 2) == 2 )
    if ( *((_BYTE *)v5 + 90) )
      v11 = *(_QWORD *)&v96;
      v12 = v98;
      v13 = operator new(0x18u);
      *(_DWORD *)v13 = v5;
      *(_QWORD *)((char *)v13 + 4) = __PAIR__(HIDWORD(v11), (unsigned int)v11);
      v14 = (void (*)(void))sub_15C8874;
      v15 = sub_15C8776;
      *((_DWORD *)v13 + 3) = v12;
      *((_DWORD *)v13 + 4) = &ptr;
      v99 = v13;
      *((_DWORD *)v13 + 5) = v3;
      v16 = v100;
    else
      v13 = operator new(0xCu);
      *((_DWORD *)v13 + 1) = &ptr;
      v14 = (void (*)(void))sub_15C896E;
      v101 = v13;
      v15 = sub_15C88BA;
      *((_DWORD *)v13 + 2) = v3;
      v16 = v102;
    v22 = v96;
    v23 = v97;
    v24 = v98;
    v13 = operator new(0x1Cu);
    *(_DWORD *)v13 = v5;
    *((float *)v13 + 1) = v22;
    *((float *)v13 + 2) = v23;
    *((_DWORD *)v13 + 3) = v24;
    v14 = (void (*)(void))sub_15C8A98;
    v15 = sub_15C89AC;
    *((_DWORD *)v13 + 4) = v3;
    *((_DWORD *)v13 + 5) = &v87;
    v103 = v13;
    *((_DWORD *)v13 + 6) = &v83;
    v16 = v104;
  v80 = v16;
  v79 = v13;
  v81 = v14;
  v82 = v15;
  if ( v8 == 2 )
    v25 = operator new(8u);
    *v25 = v5;
    v25[1] = &v79;
    v76 = v25;
    v77 = (void (*)(void))sub_15C8C10;
    v78 = sub_15C8BE0;
    v26 = (Level *)v63;
    Level::forEachPlayer(v63, (int)&v76);
    v27 = v64;
    if ( v77 )
      v77();
    v28 = operator new(8u);
    *v28 = v5;
    v28[1] = &v79;
    v105 = v28;
    v72 = v28;
    v73 = v106;
    v74 = (void (*)(void))sub_15C8C86;
    v75 = sub_15C8C4A;
    if ( *((_BYTE *)v5 + 89) || *(_DWORD *)v5 <= 2 )
      v29 = (Dimension *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 28))(v3);
      if ( v29 )
        if ( !v74 )
          sub_21E5F48();
        v75((int *)&v72, v29);
        v30 = Dimension::getId(v29);
        v31 = operator new(0xCu);
        LODWORD(v32) = sub_15C8CF0;
        *v31 = v5;
        v31[1] = &v79;
        HIDWORD(v32) = sub_15C8CC0;
        v31[2] = v30;
        v70 = v31;
        v71 = v32;
        Dimension::forEachPlayer((int)v29, (int)&v70);
        if ( (_DWORD)v71 )
          ((void (*)(void))v71)();
      v68 = 0;
      sub_15C8C86((void **)&v67, (_QWORD **)&v72, 2);
      v69 = v75;
      v68 = v74;
      Level::forEachDimension(v63, (int)&v67);
      if ( v68 )
        v68();
      v36 = operator new(8u);
      LODWORD(v37) = sub_15C8D5E;
      *v36 = v5;
      v36[1] = &v79;
      HIDWORD(v37) = sub_15C8D2E;
      v65 = v36;
      v66 = v37;
      Level::forEachPlayer(v63, (int)&v65);
      if ( (_DWORD)v66 )
        ((void (*)(void))v66)();
    if ( v74 )
      v74();
  v38 = *((_DWORD *)v5 + 2);
  if ( v38 == 2 )
    v39 = Level::getRandom(v26);
    v40 = *((_DWORD *)v5 + 21);
    if ( v40 >= (v85 - (signed int)ptr) >> 2 )
      v40 = (v85 - (signed int)ptr) >> 2;
    for ( ; v40; v85 -= 4 )
      v41 = Random::_genRandInt32((Random *)v39) % v40;
      std::vector<Entity *,std::allocator<Entity *>>::push_back(*v27, (int *)ptr + v41);
      --v40;
      *((_DWORD *)ptr + v41) = *(_DWORD *)(v85 - 4);
    v42 = v83;
    v43 = *v27;
    if ( v38 )
      if ( v83 >= 0x40000000 )
        sub_21E5A04("vector::reserve");
      v44 = *(void **)v43;
      if ( (*(_DWORD *)(v43 + 8) - *(_DWORD *)v43) >> 2 < v83 )
        v45 = *(_DWORD *)(v43 + 4);
        if ( v83 )
          v46 = (char *)operator new(4 * v83);
          v46 = 0;
        v56 = v45 - (_DWORD)v44;
        if ( v56 )
          _aeabi_memmove4(v46, v44);
        if ( *(_DWORD *)v43 )
          operator delete(*(void **)v43);
        *(_DWORD *)v43 = v46;
        *(_DWORD *)(v43 + 4) = &v46[4 * (v56 >> 2)];
        *(_DWORD *)(v43 + 8) = &v46[4 * v42];
      while ( v10 != v90 )
        v57 = *v27;
        v58 = sub_21D4894((int)v10);
        std::vector<Entity *,std::allocator<Entity *>>::push_back(v57, (int *)(v58 + 20));
        v10 = (int *)sub_21D4894((int)v10);
      v47 = *(void **)v43;
        v48 = *(_DWORD *)(v43 + 4);
          v49 = (char *)operator new(4 * v83);
          v49 = 0;
        v59 = v48 - (_DWORD)v47;
        if ( v59 )
          _aeabi_memmove4(v49, v47);
        *(_DWORD *)v43 = v49;
        *(_DWORD *)(v43 + 4) = &v49[4 * (v59 >> 2)];
        *(_DWORD *)(v43 + 8) = &v49[4 * v42];
      for ( i = (int)v90; (int *)i != &v88; i = sub_21D4820(i) )
        std::vector<Entity *,std::allocator<Entity *>>::push_back(*v27, (int *)(i + 20));
  if ( v81 )
    v81();
  if ( ptr )
    operator delete(ptr);
  std::_Rb_tree<std::pair<float,Entity *>,std::pair<float,Entity *>,std::_Identity<std::pair<float,Entity *>>,std::less<std::pair<float,Entity *>>,std::allocator<std::pair<float,Entity *>>>::_M_erase(
    (int)&v87,
    v89);
}


int __fastcall CommandSelectorBase::setResultCount(int result, unsigned int a2)
{
  *(_DWORD *)(result + 84) = a2;
  return result;
}


int __fastcall CommandSelectorBase::addNameFilter(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@1
  int result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorI16InvertableFilterISsESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_(
               (_QWORD *)(v2 + 12),
               v3);
  }
  else
    *((_BYTE *)sub_21E8AF4((int *)v4, (int *)v3) + 4) = *(_BYTE *)(v3 + 4);
    result = *(_DWORD *)(v2 + 16) + 8;
    *(_DWORD *)(v2 + 16) = result;
  return result;
}


int __fastcall CommandSelectorBase::setIncludeDeadPlayers(int result, bool a2)
{
  *(_BYTE *)(result + 88) = a2;
  return result;
}


int __fastcall CommandSelectorBase::setPosition(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0@1

  result = a1 + 48;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a5;
  return result;
}


int __fastcall CommandSelectorBase::setOrder(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


signed int __fastcall CommandSelectorBase::isExpansionAllowed(CommandSelectorBase *this, const CommandOrigin *a2)
{
  CommandSelectorBase *v2; // r4@1
  int v3; // r0@2
  signed int result; // r0@4
  int v5; // r1@5 OVERLAPPED
  int v6; // r2@5

  v2 = this;
  if ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 36))(a2) || (v3 = *((_DWORD *)v2 + 1)) == 0 )
  {
    result = 1;
  }
  else if ( v3 == 2 )
    *(_QWORD *)&v5 = *(_QWORD *)((char *)v2 + 12);
    result = 0;
    if ( v5 != v6 && !*(_BYTE *)(v5 + 4) )
      result = 1;
  else
  return result;
}


void __fastcall CommandSelectorBase::addTypeFilter(int a1, unsigned int *a2)
{
  CommandSelectorBase::addTypeFilter(a1, a2);
}


int __fastcall CommandSelectorBase::setRadiusMax(int result, float a2)
{
  *(float *)(result + 80) = a2;
  *(_WORD *)(result + 89) = 257;
  return result;
}


void __fastcall CommandSelectorBase::addTypeFilter(int a1, unsigned int *a2)
{
  unsigned int *v2; // r6@1
  int v3; // r4@1
  __int64 v4; // r8@3
  __int64 v5; // r0@6
  void *v6; // r11@8
  unsigned int v7; // r2@8
  unsigned int v8; // r1@10
  unsigned int v9; // r5@10
  char *v10; // r7@16
  char *v11; // r6@18
  int v12; // r6@20
  void *v13; // r0@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  int v16; // [sp+0h] [bp-30h]@1

  v2 = a2;
  v3 = a1;
  Util::toLower((void **)&v16, *(_DWORD *)(*a2 - 12), *a2);
  if ( sub_21E7D6C((const void **)&v16, "player") )
  {
    if ( sub_21E7D6C((const void **)&v16, "minecraft:player") )
      LODWORD(v4) = EntityTypeFromString((const void **)v2);
    else
      LODWORD(v4) = 319;
  }
  else
    LODWORD(v4) = 319;
  v5 = *(_QWORD *)(v3 + 28);
  HIDWORD(v4) = *((_BYTE *)v2 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    v6 = *(void **)(v3 + 24);
    v7 = ((signed int)v5 - (signed int)v6) >> 3;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v5) = v7 + (((signed int)v5 - (signed int)v6) >> 3);
    v9 = v7 + (((signed int)v5 - (signed int)v6) >> 3);
    if ( 0 != HIDWORD(v5) >> 29 )
      v9 = 0x1FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x20000000 )
        sub_21E57F4();
      v10 = (char *)operator new(8 * v9);
      LODWORD(v5) = *(_QWORD *)(v3 + 24) >> 32;
      v6 = (void *)*(_QWORD *)(v3 + 24);
    }
      v10 = 0;
    v11 = &v10[v5 - (_DWORD)v6];
    *(_DWORD *)&v10[v5 - (_DWORD)v6] = v4;
    *((_DWORD *)v11 + 1) = HIDWORD(v4);
    if ( 0 != ((signed int)v5 - (signed int)v6) >> 3 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 8);
    if ( v6 )
      operator delete(v6);
    *(_DWORD *)(v3 + 24) = v10;
    *(_DWORD *)(v3 + 28) = v12;
    *(_DWORD *)(v3 + 32) = &v10[8 * v9];
    *(_QWORD *)v5 = v4;
    *(_DWORD *)(v3 + 28) += 8;
  v13 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


int __fastcall CommandSelectorBase::addFilter(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int); // r3@2
  int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 == *(_QWORD *)(a1 + 40) >> 32 )
  {
    result = j_j_j__ZNSt6vectorISt8functionIFbRK13CommandOriginR6EntityEESaIS7_EE19_M_emplace_back_auxIJRKS7_EEEvDpOT_(
               (_QWORD *)(a1 + 36),
               a2);
  }
  else
    *(_DWORD *)(v4 + 8) = 0;
    v5 = *(void (__fastcall **)(int))(a2 + 8);
    if ( v5 )
    {
      v5(v4);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 12);
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
      v4 = *(_DWORD *)(v2 + 40);
    }
    result = v4 + 16;
    *(_DWORD *)(v2 + 40) = v4 + 16;
  return result;
}


CommandSelectorBase *__fastcall CommandSelectorBase::~CommandSelectorBase(CommandSelectorBase *this)
{
  CommandSelectorBase *v1; // r10@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void (__fastcall *v4)(int, int, signed int); // r3@2
  void *v5; // r0@8
  void *v6; // r5@10
  void *v7; // r7@10
  unsigned int *v8; // r2@12
  signed int v9; // r1@14
  int *v10; // r0@20

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void (__fastcall **)(int, int, signed int))(v2 + 8);
      if ( v4 )
        v4(v2, v2, 3);
      v2 += 16;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 9);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (void *)*((_DWORD *)v1 + 6);
  if ( v5 )
    operator delete(v5);
  v7 = (void *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v6 = (void *)*(_QWORD *)((char *)v1 + 12);
  if ( v6 != v7 )
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 8;
    while ( v6 != v7 );
    v6 = (void *)*((_DWORD *)v1 + 3);
  if ( v6 )
    operator delete(v6);
  return v1;
}


int __fastcall CommandSelectorBase::setVersion(int result, int a2)
{
  *(_DWORD *)result = a2;
  return result;
}


signed int __fastcall CommandSelectorBase::filter(CommandSelectorBase *this, const CommandOrigin *a2, Entity *a3, float _R3)
{
  Entity *v5; // r4@1
  unsigned int v6; // r0@1
  const CommandOrigin *v7; // r5@1
  __int64 v12; // r10@6
  __int64 v13; // r8@6
  int v14; // r0@6
  int v15; // r3@6
  int v16; // r2@6
  int v17; // r12@6
  int v18; // r7@6
  int v19; // r1@16
  int v20; // r3@16
  int v21; // r6@24
  int v22; // r7@24
  __int64 v23; // kr08_8@24
  int v25; // [sp+4h] [bp-5Ch]@6
  int v26; // [sp+8h] [bp-58h]@6
  char v27; // [sp+Ch] [bp-54h]@6
  int v28; // [sp+18h] [bp-48h]@6
  int v29; // [sp+1Ch] [bp-44h]@22
  int v30; // [sp+20h] [bp-40h]@20
  char v31; // [sp+24h] [bp-3Ch]@6
  int v32; // [sp+30h] [bp-30h]@6
  int v33; // [sp+34h] [bp-2Ch]@6
  int v34; // [sp+38h] [bp-28h]@6

  _R6 = this;
  v5 = a3;
  v6 = *((_WORD *)this + 45);
  v7 = a2;
  if ( !(_BYTE)v6 )
    goto LABEL_33;
  __asm
  {
    VMOV            S0, R3
    VLDR            S2, [R6,#0x4C]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S2, [R6,#0x50]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
LABEL_33:
      if ( v6 < 0x100 )
        goto LABEL_34;
      CommandPosition::getPosition((CommandPosition *)&v31, (CommandSelectorBase *)((char *)_R6 + 48), (int)a2);
      BlockPos::BlockPos((int)&v32, (int)&v31);
      v12 = *((_QWORD *)_R6 + 8);
      v26 = *((_DWORD *)_R6 + 18);
      v13 = *(_QWORD *)&v32;
      v25 = v34;
      Entity::getAttachPos((AABB *)&v27, (int)v5, 0, 0);
      BlockPos::BlockPos((int)&v28, (int)&v27);
      v14 = v33;
      v15 = v32;
      v16 = HIDWORD(v12) + HIDWORD(v13);
      v17 = v33;
      v18 = v32;
      if ( v32 < (signed int)v12 + (signed int)v13 )
        v18 = v12 + v13;
      if ( v33 < v16 )
        v17 = HIDWORD(v12) + HIDWORD(v13);
      if ( v16 < v33 )
        v14 = HIDWORD(v12) + HIDWORD(v13);
      if ( (signed int)v12 + (signed int)v13 < v32 )
        v15 = v12 + v13;
      if ( v28 >= v15 && v28 <= v18 )
      {
        v19 = v34;
        v20 = v34;
        if ( v34 < v26 + v25 )
          v20 = v26 + v25;
        if ( v26 + v25 < v34 )
          v19 = v26 + v25;
        if ( v30 >= v19 && v30 <= v20 && v29 >= v14 && v29 <= v17 )
        {
LABEL_34:
          v23 = *(_QWORD *)((char *)_R6 + 36);
          v21 = *(_QWORD *)((char *)_R6 + 36) >> 32;
          v22 = v23;
          if ( (_DWORD)v23 == v21 )
            return 1;
          while ( 1 )
          {
            if ( !*(_DWORD *)(v22 + 8) )
              sub_21E5F48();
            if ( !(*(int (__fastcall **)(int, const CommandOrigin *, Entity *))(v22 + 12))(v22, v7, v5) )
              break;
            v22 += 16;
            if ( v21 == v22 )
              return 1;
          }
        }
      }
  return 0;
}


int __fastcall CommandSelectorBase::CommandSelectorBase(int a1, char a2)
{
  char v2; // r5@1
  int v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  _aeabi_memclr4(a1, 48);
  CommandPosition::CommandPosition((CommandPosition *)(v3 + 48));
  *(_DWORD *)(v3 + 64) = BlockPos::ZERO;
  *(_DWORD *)(v3 + 68) = unk_2816278;
  *(_DWORD *)(v3 + 72) = dword_281627C;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 80) = 2139095039;
  *(_DWORD *)(v3 + 84) = -1;
  *(_DWORD *)(v3 + 88) = 0;
  result = v3;
  *(_BYTE *)(v3 + 92) = v2;
  return result;
}


signed int __fastcall CommandSelectorBase::compile(int a1, int a2, void **a3)
{
  void **v4; // r11@1
  int v5; // r0@2
  __int64 v6; // r0@4
  void **v7; // r0@6
  _BYTE *v8; // r2@6
  char *v9; // r1@6
  __int64 v10; // r0@7
  int v11; // r2@8
  int v12; // r3@9
  signed int v14; // r3@12
  signed int v15; // r2@15
  int v16; // r0@15
  void *v17; // r10@15
  int v18; // r1@16
  int v19; // r6@16
  int v20; // r5@18
  signed int v21; // r4@19
  bool v22; // zf@32
  int v23; // r7@37
  int v24; // r0@37
  unsigned int v25; // r2@41
  unsigned int v26; // r1@43
  unsigned int v27; // r9@43
  char *v28; // r4@49
  int v29; // r5@51
  int v30; // r7@57
  int v31; // r0@57
  void *v32; // r4@58
  unsigned int v33; // r1@58
  unsigned int v34; // r0@60
  unsigned int v35; // r6@60
  char *v36; // r0@66
  char *v37; // r9@66
  int v38; // r5@68
  void *v39; // r4@75
  unsigned int v40; // r1@75
  unsigned int v41; // r0@77
  unsigned int v42; // r6@77
  char *v43; // r0@83
  char *v44; // r9@83
  int v45; // r5@85
  int v46; // r5@87
  bool v47; // zf@90
  _DWORD *v52; // r0@99
  __int64 v53; // r1@99
  int v54; // r0@99
  __int64 v55; // kr20_8@100
  int v56; // r2@100
  int v57; // r2@100
  _DWORD *v58; // r0@105
  __int64 v59; // r1@105
  int v60; // r0@105
  __int64 v61; // kr28_8@106
  int v62; // r2@106
  int v63; // r2@106
  int v64; // r5@110 OVERLAPPED
  int v65; // r6@110 OVERLAPPED
  int v66; // r6@111
  int v67; // r7@112
  void (__fastcall *v68)(int, int, signed int); // r3@113
  int v69; // r0@119
  int v70; // r4@120
  void (__fastcall *v71)(int, int, signed int); // r3@121
  _DWORD *v72; // [sp+0h] [bp-50h]@105
  __int64 v73; // [sp+8h] [bp-48h]@105
  _DWORD *v74; // [sp+10h] [bp-40h]@99
  __int64 v75; // [sp+18h] [bp-38h]@99
  int v76; // [sp+20h] [bp-30h]@98
  int v77; // [sp+24h] [bp-2Ch]@98
  int v78; // [sp+28h] [bp-28h]@98

  _R8 = a1;
  v4 = a3;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 36))(a2) )
  {
    v5 = *(_DWORD *)(_R8 + 4);
    if ( v5 )
    {
      if ( v5 != 2 || (v6 = *(_QWORD *)(_R8 + 12), (_DWORD)v6 == HIDWORD(v6)) || *(_BYTE *)(v6 + 4) )
      {
        v7 = v4;
        v8 = (_BYTE *)36;
        v9 = "commands.generic.permission.selector";
LABEL_97:
        sub_21E8190(v7, v9, v8);
        return 0;
      }
    }
  }
  v10 = *(_QWORD *)(_R8 + 12);
  if ( (_DWORD)v10 != HIDWORD(v10) )
    v11 = 0;
    while ( 1 )
      v12 = *(_BYTE *)(v10 + 4);
      _ZF = v12 == 0;
      if ( !*(_BYTE *)(v10 + 4) )
        _ZF = ((v11 ^ 1) & 1) == 0;
      if ( _ZF )
        break;
      v14 = 0;
        v14 = 1;
      LODWORD(v10) = v10 + 8;
      v11 |= v14;
      if ( HIDWORD(v10) == (_DWORD)v10 )
        goto LABEL_15;
    v7 = v4;
    v8 = (_BYTE *)29;
    v9 = "commands.generic.tooManyNames";
    goto LABEL_97;
LABEL_15:
  v15 = *(_DWORD *)(_R8 + 4);
  v16 = *(_QWORD *)(_R8 + 24) >> 32;
  v17 = (void *)*(_QWORD *)(_R8 + 24);
  if ( v17 != (void *)v16 )
    v18 = 0;
    v19 = *(_QWORD *)(_R8 + 24);
      if ( v15 == 2 )
        v8 = (_BYTE *)34;
        v9 = "commands.generic.invalidPlayerType";
        goto LABEL_97;
      v20 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 == 1 )
        v9 = "commands.generic.invalidType";
        goto LABEL_96;
      v21 = 0;
      if ( !*(_BYTE *)(v19 + 4) )
        v21 = 1;
      if ( v18 & v21 )
      v15 = 1;
        v15 = 2;
      v18 |= v21;
      v19 += 8;
      if ( v20 != 319 )
        v15 = 1;
      *(_DWORD *)(_R8 + 4) = v15;
      if ( v19 == v16 )
        goto LABEL_32;
    v8 = (_BYTE *)30;
    v9 = "commands.generic.duplicateType";
  if ( v15 == 3 )
    *(_DWORD *)(_R8 + 4) = 2;
    goto LABEL_90;
  LOBYTE(v18) = 0;
LABEL_32:
  v22 = (v18 & 1) == 0;
  if ( !(v18 & 1) )
    v22 = v15 == 1;
  if ( v22 )
    if ( v16 == *(_DWORD *)(_R8 + 32) )
      v25 = (v16 - (signed int)v17) >> 3;
      if ( !v25 )
        v25 = 1;
      v26 = v25 + ((v16 - (signed int)v17) >> 3);
      v27 = v25 + ((v16 - (signed int)v17) >> 3);
      if ( 0 != v26 >> 29 )
        v27 = 0x1FFFFFFF;
      if ( v26 < v25 )
      if ( v27 )
        if ( v27 >= 0x20000000 )
          goto LABEL_127;
        v28 = (char *)operator new(8 * v27);
        v16 = *(_QWORD *)(_R8 + 24) >> 32;
        v17 = (void *)*(_QWORD *)(_R8 + 24);
      else
        v28 = 0;
      v29 = (int)&v28[v16 - (_DWORD)v17];
      *(_DWORD *)v29 = 312;
      *(_DWORD *)(v29 + 4) = 1;
      if ( 0 != (v16 - (signed int)v17) >> 3 )
        _aeabi_memmove4(v28, v17);
      v23 = v29 + 8;
      if ( v17 )
        operator delete(v17);
      v24 = (int)&v28[8 * v27];
      *(_DWORD *)(_R8 + 24) = v28;
      *(_DWORD *)(_R8 + 28) = v23;
      *(_DWORD *)(_R8 + 32) = v24;
    else
      *(_DWORD *)v16 = 312;
      *(_DWORD *)(v16 + 4) = 1;
      v23 = *(_DWORD *)(_R8 + 28) + 8;
      v24 = *(_DWORD *)(_R8 + 32);
    if ( v23 == v24 )
      v32 = *(void **)(_R8 + 24);
      v33 = (v23 - (signed int)v32) >> 3;
      if ( !v33 )
        v33 = 1;
      v34 = v33 + ((v23 - (signed int)v32) >> 3);
      v35 = v33 + ((v23 - (signed int)v32) >> 3);
      if ( 0 != v34 >> 29 )
        v35 = 0x1FFFFFFF;
      if ( v34 < v33 )
      if ( v35 )
        if ( v35 >= 0x20000000 )
        v36 = (char *)operator new(8 * v35);
        v23 = *(_QWORD *)(_R8 + 24) >> 32;
        v32 = (void *)*(_QWORD *)(_R8 + 24);
        v37 = v36;
        v37 = 0;
      v38 = (int)&v37[v23 - (_DWORD)v32];
      *(_DWORD *)v38 = 307;
      *(_DWORD *)(v38 + 4) = 1;
      if ( 0 != (v23 - (signed int)v32) >> 3 )
        _aeabi_memmove4(v37, v32);
      v30 = v38 + 8;
      if ( v32 )
        operator delete(v32);
      v31 = (int)&v37[8 * v35];
      *(_DWORD *)(_R8 + 24) = v37;
      *(_DWORD *)(_R8 + 28) = v30;
      *(_DWORD *)(_R8 + 32) = v31;
      *(_DWORD *)v23 = 307;
      *(_DWORD *)(v23 + 4) = 1;
      v30 = *(_DWORD *)(_R8 + 28) + 8;
      v31 = *(_DWORD *)(_R8 + 32);
    if ( v30 != v31 )
      *(_DWORD *)v30 = 318;
      *(_DWORD *)(v30 + 4) = 1;
      *(_DWORD *)(_R8 + 28) += 8;
      goto LABEL_90;
    v39 = *(void **)(_R8 + 24);
    v40 = (v30 - (signed int)v39) >> 3;
    if ( !v40 )
      v40 = 1;
    v41 = v40 + ((v30 - (signed int)v39) >> 3);
    v42 = v40 + ((v30 - (signed int)v39) >> 3);
    if ( 0 != v41 >> 29 )
      v42 = 0x1FFFFFFF;
    if ( v41 < v40 )
    if ( !v42 )
      v44 = 0;
      goto LABEL_85;
    if ( v42 < 0x20000000 )
      v43 = (char *)operator new(8 * v42);
      v30 = *(_QWORD *)(_R8 + 24) >> 32;
      v39 = (void *)*(_QWORD *)(_R8 + 24);
      v44 = v43;
LABEL_85:
      v45 = (int)&v44[v30 - (_DWORD)v39];
      *(_DWORD *)v45 = 318;
      *(_DWORD *)(v45 + 4) = 1;
      if ( 0 != (v30 - (signed int)v39) >> 3 )
        _aeabi_memmove4(v44, v39);
      v46 = v45 + 8;
      if ( v39 )
        operator delete(v39);
      *(_DWORD *)(_R8 + 24) = v44;
      *(_DWORD *)(_R8 + 28) = v46;
      *(_DWORD *)(_R8 + 32) = &v44[8 * v42];
LABEL_127:
    sub_21E57F4();
LABEL_90:
  v47 = *(_BYTE *)(_R8 + 92) == 0;
  if ( *(_BYTE *)(_R8 + 92) )
    v47 = (*(_DWORD *)(_R8 + 4) | 2) == 2;
  if ( !v47 )
    v8 = (_BYTE *)32;
    v9 = "commands.generic.targetNotPlayer";
  __asm
    VLDR            S0, [R8,#0x4C]
    VLDR            S2, [R8,#0x50]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v9 = "commands.generic.radiusError";
LABEL_96:
    v8 = (_BYTE *)28;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  std::vector<std::function<bool ()(CommandOrigin const&,Entity &)>,std::allocator<std::function<bool ()(CommandOrigin const&,Entity &)>>>::reserve(
    (int)&v76,
    ((signed int)((*(_QWORD *)(_R8 + 36) >> 32) - *(_QWORD *)(_R8 + 36)) >> 4) + 2);
  if ( (unsigned int)*(_QWORD *)(_R8 + 12) != *(_QWORD *)(_R8 + 12) >> 32 )
    v52 = operator new(0xCu);
    HIDWORD(v53) = std::_Function_handler<bool ()(CommandOrigin const&,Entity &),std::_Bind<std::_Mem_fn<bool (CommandSelectorBase::*)(Entity &)const> ()(CommandSelectorBase*,std::_Placeholder<2>)>>::_M_invoke;
    LODWORD(v53) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (CommandSelectorBase::*)(Entity &)const> ()(CommandSelectorBase*,std::_Placeholder<2>)>>::_M_manager;
    *v52 = CommandSelectorBase::matchName;
    v52[1] = 0;
    v52[2] = _R8;
    v74 = v52;
    v75 = v53;
    v54 = v77;
    if ( v77 == v78 )
      std::vector<std::function<bool ()(CommandOrigin const&,Entity &)>,std::allocator<std::function<bool ()(CommandOrigin const&,Entity &)>>>::_M_emplace_back_aux<std::function<bool ()(CommandOrigin const&,Entity &)>>(
        (unsigned __int64 *)&v76,
        (int)&v74);
      *(_DWORD *)(v77 + 8) = 0;
      v55 = *(_QWORD *)&v74;
      *(_QWORD *)&v74 = *(_QWORD *)v54;
      *(_QWORD *)v54 = v55;
      v56 = v75;
      LODWORD(v75) = *(_DWORD *)(v54 + 8);
      *(_DWORD *)(v54 + 8) = v56;
      v57 = HIDWORD(v75);
      HIDWORD(v75) = *(_DWORD *)(v54 + 12);
      *(_DWORD *)(v54 + 12) = v57;
      v77 = v54 + 16;
    if ( (_DWORD)v75 )
      ((void (*)(void))v75)();
  if ( (unsigned int)*(_QWORD *)(_R8 + 24) != *(_QWORD *)(_R8 + 24) >> 32 )
    v58 = operator new(0xCu);
    HIDWORD(v59) = std::_Function_handler<bool ()(CommandOrigin const&,Entity &),std::_Bind<std::_Mem_fn<bool (CommandSelectorBase::*)(Entity &)const> ()(CommandSelectorBase*,std::_Placeholder<2>)>>::_M_invoke;
    LODWORD(v59) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (CommandSelectorBase::*)(Entity &)const> ()(CommandSelectorBase*,std::_Placeholder<2>)>>::_M_manager;
    *v58 = CommandSelectorBase::matchType;
    v58[1] = 0;
    v58[2] = _R8;
    v72 = v58;
    v73 = v59;
    v60 = v77;
        (int)&v72);
      v61 = *(_QWORD *)&v72;
      *(_QWORD *)&v72 = *(_QWORD *)v60;
      *(_QWORD *)v60 = v61;
      v62 = v73;
      LODWORD(v73) = *(_DWORD *)(v60 + 8);
      *(_DWORD *)(v60 + 8) = v62;
      v63 = HIDWORD(v73);
      HIDWORD(v73) = *(_DWORD *)(v60 + 12);
      *(_DWORD *)(v60 + 12) = v63;
      v77 = v60 + 16;
    if ( (_DWORD)v73 )
      ((void (*)(void))v73)();
  *(_QWORD *)&v64 = *(_QWORD *)(_R8 + 36);
  if ( v65 - v64 >= 1 )
    v66 = ((v65 - v64) >> 4) + 1;
    do
      v67 = v77;
      if ( v77 == v78 )
        std::vector<std::function<bool ()(CommandOrigin const&,Entity &)>,std::allocator<std::function<bool ()(CommandOrigin const&,Entity &)>>>::_M_emplace_back_aux<std::function<bool ()(CommandOrigin const&,Entity &)> const&>(
          &v76,
          v64);
        *(_DWORD *)(v77 + 8) = 0;
        v68 = *(void (__fastcall **)(int, int, signed int))(v64 + 8);
        if ( v68 )
        {
          v68(v67, v64, 2);
          *(_DWORD *)(v67 + 12) = *(_DWORD *)(v64 + 12);
          *(_DWORD *)(v67 + 8) = *(_DWORD *)(v64 + 8);
        }
        v77 = v67 + 16;
      --v66;
      v64 += 16;
    while ( v66 > 1 );
    *(_QWORD *)&v64 = *(_QWORD *)(_R8 + 36);
  *(_DWORD *)(_R8 + 36) = v76;
  v76 = v64;
  *(_DWORD *)(_R8 + 40) = v77;
  v77 = v65;
  v69 = *(_DWORD *)(_R8 + 44);
  *(_DWORD *)(_R8 + 44) = v78;
  v78 = v69;
  if ( v64 != v65 )
    v70 = v64;
      v71 = *(void (__fastcall **)(int, int, signed int))(v70 + 8);
      if ( v71 )
        v71(v70, v70, 3);
      v70 += 16;
    while ( v65 != v70 );
  if ( v64 )
    operator delete((void *)v64);
  return 1;
}
