

Json::Value *__fastcall ui::parseLayoutAxis(int a1, unsigned int a2, const Json::Value *a3, signed int a4)
{
  signed int v4; // r5@1
  int v5; // r4@1
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  char *v11; // r0@9
  int v16; // r2@9
  signed int v17; // r1@9
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  int v21; // [sp+8h] [bp-30h]@2
  int v22; // [sp+Ch] [bp-2Ch]@2
  char v23; // [sp+10h] [bp-28h]@1

  v4 = a4;
  v5 = a1;
  Json::Value::get((Json::Value *)&v23, a2, a3, (const Json::Value *)&Json::Value::null);
  if ( Json::Value::isString((Json::Value *)&v23) == 1 )
  {
    sub_119C884((void **)&v21, (const char *)&unk_257BC67);
    Json::Value::asString(&v22, (int)&v23, &v21);
    ui::parseLayoutAxis(v5, (const void **)&v22, v4);
    v6 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v21 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
  }
  else
    if ( Json::Value::isNumeric((Json::Value *)&v23) == 1 )
      _R5 = Json::Value::asFloat((Json::Value *)&v23, 0.0);
      v11 = (char *)operator new(0xCu);
      __asm { VMOV            S0, R5 }
      v16 = (int)(v11 + 12);
      *(_DWORD *)v11 = 0;
      __asm { VSTR            S0, [R0,#4] }
      *((_DWORD *)v11 + 2) = 0;
      v17 = 1;
    else
      v17 = 0;
      v16 = 0;
      v11 = 0;
    *(_DWORD *)v5 = v11;
    *(_DWORD *)(v5 + 4) = v16;
    *(_DWORD *)(v5 + 8) = v16;
    *(_DWORD *)(v5 + 12) = v17;
  return Json::Value::~Value((Json::Value *)&v23);
}


int __fastcall ui::SliceSize::SliceSize(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall ui::SliceSize::SliceSize(int result, float a2, float a3, float a4, float a5)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VSTR            S0, [R0,#0xC]
  }
  *(float *)result = a2;
  *(float *)(result + 4) = a3;
  *(float *)(result + 8) = a4;
  return result;
}


void __fastcall ui::parseLayoutAxis(int a1, const void **a2, signed int a3)
{
  const void **v3; // r5@1
  signed int v4; // r8@1
  int v5; // r4@1
  void *v6; // r0@3
  _DWORD *v7; // r6@4
  _DWORD *v8; // r7@4
  signed int v9; // r1@5
  signed int v10; // r1@7
  unsigned int v11; // r9@9
  const void **v16; // r5@10
  signed int v17; // r0@18
  void *v18; // r0@21
  _BYTE *v19; // r2@24
  int v20; // r0@27
  int v21; // r6@28
  signed int v22; // r7@30
  signed int v23; // r10@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  int v26; // r1@37
  int v27; // r8@37
  __int64 v28; // kr08_8@37
  _BYTE *v29; // r0@48
  __int64 v30; // kr10_8@51
  int v31; // r6@53
  int v32; // r0@53
  int v33; // r4@53
  unsigned int v34; // r1@53
  unsigned int v35; // r2@55
  unsigned int v36; // r0@55
  int v37; // r8@60
  _DWORD *v38; // r0@60
  _DWORD *v39; // r5@60
  int v40; // r1@61
  __int64 v41; // r2@61
  int v42; // r4@63
  int v43; // r6@73
  int v44; // r0@73
  int v45; // r4@73
  unsigned int v46; // r1@73
  unsigned int v47; // r2@75
  unsigned int v48; // r0@75
  char *v49; // r0@80
  char *v50; // r5@80
  int v51; // r0@80
  int v52; // r0@80
  int v53; // r1@81
  __int64 v54; // r2@81
  int v55; // r4@83
  unsigned int *v56; // r2@87
  signed int v57; // r1@89
  signed int v58; // r0@97
  unsigned int *v59; // r2@100
  signed int v60; // r1@102
  int *v61; // r0@108
  unsigned int *v62; // r2@116
  signed int v63; // r1@118
  signed int v64; // [sp+14h] [bp-154h]@9
  signed int v65; // [sp+18h] [bp-150h]@7
  signed int v66; // [sp+20h] [bp-148h]@5
  signed int v67; // [sp+24h] [bp-144h]@9
  void **v68; // [sp+30h] [bp-138h]@9
  void **v69; // [sp+34h] [bp-134h]@9
  void **v70; // [sp+38h] [bp-130h]@9
  void **v71; // [sp+3Ch] [bp-12Ch]@9
  void **v72; // [sp+40h] [bp-128h]@9
  int v73; // [sp+54h] [bp-114h]@3
  int v74; // [sp+54h] [bp-114h]@53
  void **v75; // [sp+58h] [bp-110h]@21
  int v76; // [sp+5Ch] [bp-10Ch]@22
  void **v77; // [sp+60h] [bp-108h]@21
  void **v78; // [sp+64h] [bp-104h]@21
  int v79; // [sp+80h] [bp-E8h]@22
  int v80; // [sp+88h] [bp-E0h]@21
  int v81; // [sp+8Ch] [bp-DCh]@22
  int v82; // [sp+114h] [bp-54h]@4
  int v83; // [sp+118h] [bp-50h]@3
  _DWORD *v84; // [sp+11Ch] [bp-4Ch]@3
  _DWORD *v85; // [sp+120h] [bp-48h]@4
  _BYTE *v86; // [sp+128h] [bp-40h]@24

  v3 = a2;
  v4 = a3;
  v5 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 3;
  if ( !sub_119C9E8(a2, "fill") )
  {
    v58 = 2;
LABEL_114:
    *(_DWORD *)(v5 + 12) = v58;
    return;
  }
  if ( !sub_119C9E8(v3, "default") )
    v58 = 0;
    goto LABEL_114;
  Util::toLower((void **)&v83, *((_DWORD *)*v3 - 3), (unsigned int)*v3);
  Util::split((int)&v84, (unsigned int *)&v83, (unsigned __int64 *)&dword_27CA6A8, 1);
  v73 = v5;
  v6 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v83 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
    }
    else
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v82 = 0;
  v7 = v85;
  v8 = v84;
  if ( v85 != v84 )
    v9 = 6;
    v66 = v4;
    if ( v4 == 1 )
      v9 = 5;
    v65 = v9;
    v10 = 8;
      v10 = 7;
    v64 = v10;
    v11 = 0;
    v72 = off_26D3F60;
    v71 = (void **)off_26D3F6C;
    v70 = (void **)off_26D3F68;
    v68 = off_26D3F84;
    v69 = off_26D3F80[0];
    __asm { VLDR            S16, =0.01 }
    v67 = 0;
    while ( 1 )
      v16 = (const void **)dword_27CA6AC;
      if ( std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
             dword_27CA6A8,
             (const void **)dword_27CA6AC,
             (const void **)&v8[v11]) == v16 )
      {
        sub_119CB58((int)&v75, 24);
        sub_119C904((char *)&v77, v8[v11], *(_DWORD *)(v8[v11] - 12));
        sub_119CA38((char *)&v75);
        v75 = v72;
        *(_DWORD *)((char *)*(v72 - 3) + (_DWORD)&v75) = v69;
        v77 = v68;
        v78 = &off_27734E8;
        v18 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
        {
          v24 = (unsigned int *)(v80 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          }
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
        }
        v78 = &off_26D40A8;
        sub_119C954((unsigned int **)&v79);
        v75 = v70;
        *(_DWORD *)((char *)*(v70 - 3) + (_DWORD)&v75) = v71;
        v76 = 0;
        sub_119C964(&v81);
        goto LABEL_67;
      }
      if ( !sub_119C9E8((const void **)&v8[v11], "%") )
        break;
      if ( sub_119C9E8((const void **)&v8[v11], "x")
        && sub_119C9E8((const void **)&v8[v11], "y")
        && sub_119C9E8((const void **)&v8[v11], "c")
        && sub_119C9E8((const void **)&v8[v11], "m") )
        if ( sub_119C9E8((const void **)&v8[v11], "px") )
          if ( sub_119C9E8((const void **)&v8[v11], "+") )
            _ZF = sub_119C9E8((const void **)&v8[v11], "-") == 0;
            v17 = v67;
            if ( _ZF )
              v17 = 1;
            v17 = 0;
          v67 = v17;
        else
          v26 = v73;
          v27 = v82;
          v28 = *(_QWORD *)(v73 + 4);
          if ( (_DWORD)v28 == HIDWORD(v28) )
            v43 = *(_DWORD *)v73;
            v44 = ((signed int)v28 - *(_DWORD *)v73) >> 2;
            v45 = -1431655765 * v44;
            v46 = -1431655765 * v44;
            if ( (_DWORD)v28 == *(_DWORD *)v73 )
              v46 = 1;
            v48 = v46 + -1431655765 * v44;
            v47 = v48;
            if ( v48 > 0x15555555 )
              v48 = 357913941;
            _CF = v47 >= v46;
            LOWORD(v46) = 21846;
            if ( !_CF )
            HIWORD(v46) = 5461;
            if ( v48 >= v46 )
              sub_119C874();
            v49 = (char *)operator new(12 * HIDWORD(v28));
            v50 = v49;
            *(_DWORD *)&v49[12 * v45] = 0;
            v51 = (int)&v49[12 * v45];
            *(_DWORD *)(v51 + 4) = v27;
            *(_DWORD *)(v51 + 8) = v67;
            v52 = (int)v50;
            if ( v43 != (_DWORD)v28 )
            {
              do
              {
                v53 = *(_DWORD *)v43;
                v54 = *(_QWORD *)(v43 + 4);
                v43 += 12;
                *(_DWORD *)HIDWORD(v28) = v53;
                *(_QWORD *)(HIDWORD(v28) + 4) = v54;
                v52 = HIDWORD(v28) + 12;
              }
              while ( (_DWORD)v28 != v43 );
              v43 = *(_DWORD *)v73;
            }
            v55 = v52 + 12;
            if ( v43 )
              operator delete((void *)v43);
            v26 = v73;
            *(_DWORD *)v73 = v50;
            *(_DWORD *)(v73 + 4) = v55;
            *(_DWORD *)(v73 + 8) = &v50[12 * HIDWORD(v28)];
            *(_DWORD *)v28 = 0;
            *(_DWORD *)(v28 + 4) = v27;
            *(_DWORD *)(v28 + 8) = v67;
            *(_DWORD *)(v73 + 4) = v28 + 12;
          v73 = v26;
          *(_DWORD *)(v26 + 12) = 1;
LABEL_67:
      v7 = v85;
      v8 = v84;
      if ( ++v11 >= v85 - v84 )
        goto LABEL_98;
    __asm { VLDR            S18, [SP,#0x168+var_54] }
    if ( v11 >= v85 - v84 - 1 )
      v23 = 0;
      v21 = v73;
      v22 = v66;
LABEL_51:
      __asm { VMUL.F32        S18, S18, S16 }
      v30 = *(_QWORD *)(v21 + 4);
      if ( (_DWORD)v30 == HIDWORD(v30) )
        v74 = v21;
        v31 = *(_DWORD *)v21;
        v32 = ((signed int)v30 - v31) >> 2;
        v33 = -1431655765 * v32;
        v34 = -1431655765 * v32;
        if ( (_DWORD)v30 == v31 )
          v34 = 1;
        v35 = v34 + -1431655765 * v32;
        v36 = v35;
        if ( v35 > 0x15555555 )
          v36 = 357913941;
        _CF = v35 >= v34;
        LOWORD(v34) = 21846;
        if ( !_CF )
        HIWORD(v34) = 5461;
        if ( v36 >= v34 )
          sub_119C874();
        v37 = 3 * v36;
        v38 = operator new(12 * v36);
        v39 = v38;
        v38[3 * v33] = v22;
        __asm { VSTR            S18, [R0,#4] }
        v38[3 * v33 + 2] = v67;
        if ( !_ZF )
          do
            v40 = *(_DWORD *)v31;
            v41 = *(_QWORD *)(v31 + 4);
            v31 += 12;
            *(_DWORD *)HIDWORD(v30) = v40;
            *(_QWORD *)(HIDWORD(v30) + 4) = v41;
            v38 = (_DWORD *)(HIDWORD(v30) + 12);
          while ( (_DWORD)v30 != v31 );
          v31 = *(_DWORD *)v74;
        v42 = (int)(v38 + 3);
        if ( v31 )
          operator delete((void *)v31);
        v21 = v74;
        *(_DWORD *)v74 = v39;
        *(_DWORD *)(v74 + 4) = v42;
        *(_DWORD *)(v74 + 8) = &v39[v37];
      else
        *(_DWORD *)v30 = v22;
        __asm { VSTR            S18, [R11,#4] }
        *(_DWORD *)(v30 + 8) = v67;
        *(_DWORD *)(v21 + 4) = v30 + 12;
      v73 = v21;
      *(_DWORD *)(v21 + 12) = 1;
      v11 += v23;
      goto LABEL_67;
    sub_119C854((int *)&v86, &v84[v11 + 1]);
    v19 = v86;
    if ( *((_DWORD *)v86 - 3) != 1 )
      v22 = 9;
      goto LABEL_48;
    if ( *((_DWORD *)v86 - 1) >= 0 )
      sub_119CB68((const void **)&v86);
      v19 = v86;
    v20 = *v19;
    if ( v20 == 99 )
      if ( v85 - v84 <= v11 + 2 || *(_BYTE *)v84[v11 + 2] != 109 )
        v23 = 1;
        v22 = v65;
        v23 = 2;
        v22 = v64;
    v21 = v73;
    if ( v20 == 120 )
      v22 = 3;
      if ( v20 != 121 )
        v22 = 9;
        v23 = 0;
LABEL_48:
        v29 = v19 - 12;
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v19 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v29);
        if ( v22 == 9 )
          v22 = v66;
        goto LABEL_51;
      v22 = 4;
    v23 = 1;
    goto LABEL_48;
LABEL_98:
  if ( v8 != v7 )
    do
      v61 = (int *)(*v8 - 12);
      if ( v61 != &dword_28898C0 )
        v59 = (unsigned int *)(*v8 - 4);
        if ( &pthread_create )
          __dmb();
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v61);
      ++v8;
    while ( v8 != v7 );
    v7 = v84;
  if ( v7 )
    operator delete(v7);
}


int __fastcall ui::LayoutOffset::LayoutOffset(int a1, const void **a2, const void **a3)
{
  int v3; // r4@1
  const void **v4; // r6@1
  unsigned __int64 *v5; // r5@1
  void *ptr; // [sp+0h] [bp-30h]@1
  int v8; // [sp+Ch] [bp-24h]@1
  void *v9; // [sp+10h] [bp-20h]@1
  int v10; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a3;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v5 = (unsigned __int64 *)(a1 + 12);
  *(_DWORD *)(a1 + 24) = 3;
  *(_DWORD *)(a1 + 28) = 3;
  ui::parseLayoutAxis((int)&v9, a2, 1);
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=((unsigned __int64 *)v3, (unsigned __int64 *)&v9);
  *(_DWORD *)(v3 + 24) = v10;
  ui::parseLayoutAxis((int)&ptr, v4, 2);
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(v5, (unsigned __int64 *)&ptr);
  *(_DWORD *)(v3 + 28) = v8;
  if ( ptr )
    operator delete(ptr);
  if ( v9 )
    operator delete(v9);
  return v3;
}


int __fastcall ui::AxisOffsetContainer::AxisOffsetContainer(int result)
{
  __int64 v1; // r1@1

  LODWORD(v1) = 0;
  HIDWORD(v1) = 3;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = v1;
  return result;
}


void __fastcall ui::parseLayoutAxis(int a1, const void **a2, signed int a3)
{
  ui::parseLayoutAxis(a1, a2, a3);
}


ui::LayoutOffset *__fastcall ui::LayoutOffset::LayoutOffset(ui::LayoutOffset *this, const ui::LayoutOffset *a2)
{
  const ui::LayoutOffset *v2; // r5@1
  ui::LayoutOffset *v3; // r4@1
  signed int v4; // r1@1
  void *v5; // r0@1
  unsigned int v6; // r7@1
  int v7; // r1@4 OVERLAPPED
  int v8; // r2@4 OVERLAPPED
  __int64 v9; // kr00_8@5
  int v10; // r6@5
  signed int v11; // r1@6
  unsigned int v12; // r6@6
  void *v13; // r0@6
  int v14; // r1@9 OVERLAPPED
  int v15; // r2@9 OVERLAPPED
  __int64 v16; // kr08_8@10
  int v17; // r6@10

  v2 = a2;
  v3 = this;
  v4 = (*(_QWORD *)a2 >> 32) - *(_QWORD *)a2;
  v5 = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  v6 = -1431655765 * (v4 >> 2);
  if ( v4 )
  {
    if ( v6 >= 0x15555556 )
      sub_DA7414();
    v5 = operator new(v4);
  }
  *(_DWORD *)v3 = v5;
  *((_DWORD *)v3 + 1) = v5;
  *((_DWORD *)v3 + 2) = (char *)v5 + 12 * v6;
  for ( *(_QWORD *)&v7 = *(_QWORD *)v2; v8 != v7; v5 = (char *)v5 + 12 )
    v9 = *(_QWORD *)v7;
    v10 = *(_DWORD *)(v7 + 8);
    v7 += 12;
    *(_QWORD *)v5 = v9;
    *((_DWORD *)v5 + 2) = v10;
  v11 = (*(_QWORD *)((char *)v2 + 12) >> 32) - *(_QWORD *)((char *)v2 + 12);
  v12 = -1431655765 * (v11 >> 2);
  v13 = 0;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 0;
  if ( v11 )
    if ( v12 >= 0x15555556 )
    v13 = operator new(v11);
  *((_DWORD *)v3 + 3) = v13;
  *((_DWORD *)v3 + 4) = v13;
  *((_DWORD *)v3 + 5) = (char *)v13 + 12 * v12;
  for ( *(_QWORD *)&v14 = *(_QWORD *)((char *)v2 + 12); v15 != v14; v13 = (char *)v13 + 12 )
    v16 = *(_QWORD *)v14;
    v17 = *(_DWORD *)(v14 + 8);
    v14 += 12;
    *(_QWORD *)v13 = v16;
    *((_DWORD *)v13 + 2) = v17;
  *((_QWORD *)v3 + 3) = *((_QWORD *)v2 + 3);
  return v3;
}


unsigned int __fastcall ui::LayoutOffset::LayoutOffset(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // r4@1
  _DWORD *v3; // r6@1
  unsigned int v4; // r5@1
  int v5; // r0@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-2Ch]@1
  int v9; // [sp+8h] [bp-28h]@1
  int v10; // [sp+Ch] [bp-24h]@1
  int v11; // [sp+10h] [bp-20h]@1
  int v12; // [sp+14h] [bp-1Ch]@1
  int v13; // [sp+18h] [bp-18h]@1

  v2 = a1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = a1 + 12;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = 1;
  v5 = *a2;
  v11 = 0;
  v12 = v5;
  v13 = 0;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::push_back(__PAIR__(&v11, v2));
  v6 = v3[1];
  v8 = 0;
  v9 = v6;
  v10 = 0;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::push_back(__PAIR__(&v8, v4));
  return v2;
}


ui::LayoutOffset *__fastcall ui::LayoutOffset::LayoutOffset(ui::LayoutOffset *this, const Json::Value *a2)
{
  ui::LayoutOffset *v2; // r4@1
  const Json::Value *v3; // r6@1
  unsigned __int64 *v4; // r5@1
  void *ptr; // [sp+0h] [bp-30h]@1
  int v7; // [sp+Ch] [bp-24h]@1
  void *v8; // [sp+10h] [bp-20h]@1
  int v9; // [sp+1Ch] [bp-14h]@1

  v2 = this;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  v4 = (unsigned __int64 *)((char *)this + 12);
  *((_DWORD *)this + 6) = 3;
  *((_DWORD *)this + 7) = 3;
  ui::parseLayoutAxis((int)&v8, (unsigned int)a2, 0, 1);
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=((unsigned __int64 *)v2, (unsigned __int64 *)&v8);
  *((_DWORD *)v2 + 6) = v9;
  ui::parseLayoutAxis((int)&ptr, (unsigned int)v3, (const Json::Value *)1, 2);
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::operator=(v4, (unsigned __int64 *)&ptr);
  *((_DWORD *)v2 + 7) = v7;
  if ( ptr )
    operator delete(ptr);
  if ( v8 )
    operator delete(v8);
  return v2;
}


int __fastcall ui::LayoutOffset::LayoutOffset(__int64 a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  unsigned int v6; // r5@1
  int v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1
  int v16; // [sp+18h] [bp-18h]@1

  v4 = a1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v6 = a1 + 12;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = 1;
  v14 = HIDWORD(a1);
  v15 = a2;
  v16 = 0;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::push_back(a1);
  __asm { VLDR            S0, [SP,#0x30+arg_0] }
  v12 = v5;
  __asm { VSTR            S0, [SP,#0x30+var_28] }
  v13 = 0;
  std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>>::push_back(__PAIR__(&v12, v6));
  return v4;
}


int __fastcall ui::LayoutOffset::LayoutOffset(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall ui::AxisOffset::AxisOffset(int result, int a2, int a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  return result;
}


int __fastcall ui::AxisOffset::AxisOffset(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall ui::SliceSize::SliceSize(int result, float a2)
{
  *(float *)result = a2;
  *(float *)(result + 4) = a2;
  *(float *)(result + 8) = a2;
  *(float *)(result + 12) = a2;
  return result;
}
