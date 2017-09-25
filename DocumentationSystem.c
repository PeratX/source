

void *__fastcall DocumentationSystem::Node::getName(void **a1, int a2)
{
  void **v2; // r5@1
  _BYTE *v3; // r0@1
  int *v4; // r4@1
  char *v5; // r2@3
  unsigned int v6; // r3@3
  void *result; // r0@4

  v2 = a1;
  v4 = (int *)(a2 + 92);
  v3 = *(_BYTE **)(a2 + 92);
  if ( *((_DWORD *)v3 - 3) && *v3 == 91 )
  {
    v5 = sub_21E77E4(v4, 93, 0) + 1;
    v6 = *(_DWORD *)(*v4 - 12);
    if ( v6 < (unsigned int)v5 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", (int)v5, v6);
    result = sub_21E9040(v2, v4, (unsigned int)v5, 0xFFFFFFFF);
  }
  else
    result = sub_21E8AF4((int *)v2, v4);
  return result;
}


int __fastcall DocumentationSystem::DocumentationSystem(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = result + 4;
  *(_DWORD *)(result + 16) = result + 4;
  DocumentationSystem::mDocs = result;
  return result;
}


int __fastcall DocumentationSystem::Node::Node(int a1, int *a2)
{
  int *v2; // r9@1
  int v3; // r8@1
  int v4; // r1@1

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = 1;
  *(_WORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 6) = 1;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v3 + 12), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v3 + 16), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v3 + 20), "Parameters");
  sub_21E94B4((void **)(v3 + 24), "Type");
  sub_21E94B4((void **)(v3 + 28), "Name");
  sub_21E94B4((void **)(v3 + 32), "Default Value");
  sub_21E94B4((void **)(v3 + 36), "Description");
  sub_21E94B4((void **)(v3 + 40), "Vanilla entities that use this");
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 56) = v3 + 48;
  *(_DWORD *)(v3 + 60) = v3 + 48;
  *(_DWORD *)(v3 + 72) = 0;
  v4 = v3 + 72;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 8) = v4;
  *(_DWORD *)(v4 + 12) = v4;
  sub_21E8AF4((int *)(v3 + 92), v2);
  return v3;
}


int *__fastcall DocumentationSystem::Node::addExample(int a1, const void **a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r0@1

  v3 = a3;
  v4 = (int *)j_std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                a1 + 68,
                a2);
  return EntityInteraction::setInteractText(v4, v3);
}


char *__fastcall DocumentationSystem::getPage(int a1, const void **a2)
{
  int v2; // r9@1
  int v3; // r10@1
  int v4; // r0@1
  const void **v5; // r8@1
  int v6; // r4@1
  const void *v7; // r6@2
  int v8; // r11@2
  size_t v9; // r5@2
  _DWORD *v10; // r0@4
  size_t v11; // r7@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r5@13
  unsigned int v16; // r6@13
  size_t v17; // r2@13
  int v18; // r0@15
  char *v19; // r6@20
  char v21; // [sp+4h] [bp-84h]@20

  v2 = a1;
  v3 = a1 + 4;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a2;
  v6 = v3;
  if ( v4 )
  {
    v7 = *a2;
    v8 = v3;
    v9 = *((_DWORD *)*a2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = j_memcmp_0(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 == v3 )
    goto LABEL_24;
  v14 = *(_DWORD **)(v6 + 16);
  v15 = *((_DWORD *)*v5 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v5 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = j_memcmp_0(*v5, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v3;
LABEL_24:
    v19 = j_std::map<std::string,DocumentationSystem::Node,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::operator[](
            v2,
            v5);
    j_DocumentationSystem::Node::Node((int)&v21, (int *)v5);
    j_DocumentationSystem::Node::operator=((int)v19, (int)&v21);
    j_DocumentationSystem::Node::~Node((int)&v21);
  return j_std::map<std::string,DocumentationSystem::Node,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::operator[](
           v2,
           v5);
}


char *__fastcall DocumentationSystem::Node::addNode(int a1, const void **a2, int *a3)
{
  _DWORD *v3; // r11@1
  int v4; // r5@1
  int v5; // r0@1
  const void **v6; // r10@1
  int v7; // r4@1
  const void *v8; // r6@2
  int v9; // r8@2
  size_t v10; // r7@2
  _DWORD *v11; // r0@4
  size_t v12; // r9@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r6@13
  unsigned int v17; // r7@13
  size_t v18; // r2@13
  int v19; // r0@15
  char *v20; // r6@20
  int *v22; // [sp+4h] [bp-8Ch]@1
  int v23; // [sp+8h] [bp-88h]@1
  char v24; // [sp+Ch] [bp-84h]@20

  v3 = (_DWORD *)a1;
  v4 = a1 + 48;
  v5 = *(_DWORD *)(a1 + 52);
  v6 = a2;
  v7 = v4;
  v22 = a3;
  v23 = (int)(v3 + 11);
  if ( v5 )
  {
    v8 = *a2;
    v9 = v4;
    v10 = *((_DWORD *)*a2 - 3);
    do
    {
      v7 = v5;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = j_memcmp_0(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v5 = *(_DWORD *)(v7 + 8);
      v9 = v7;
    }
    while ( v5 );
  }
LABEL_12:
  if ( v7 == v4 )
    goto LABEL_24;
  v15 = *(_DWORD **)(v7 + 16);
  v16 = *((_DWORD *)*v6 - 3);
  v17 = *(v15 - 3);
  v18 = *((_DWORD *)*v6 - 3);
  if ( v16 > v17 )
    v18 = *(v15 - 3);
  v19 = j_memcmp_0(*v6, v15, v18);
  if ( !v19 )
    v19 = v16 - v17;
  if ( v19 < 0 )
    v7 = v4;
LABEL_24:
    v20 = j_std::map<std::string,DocumentationSystem::Node,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::operator[](
            v23,
            v6);
    j_DocumentationSystem::Node::Node((int)&v24, *v3 + 1, (int *)v6, v22);
    j_DocumentationSystem::Node::operator=((int)v20, (int)&v24);
    j_DocumentationSystem::Node::~Node((int)&v24);
  return j_std::map<std::string,DocumentationSystem::Node,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::operator[](
           v23,
           v6);
}


int __fastcall DocumentationSystem::Node::Node(int a1)
{
  int v1; // r8@1
  int v2; // r2@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 6) = 1;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v1 + 12), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v1 + 16), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v1 + 20), "Parameters");
  sub_21E94B4((void **)(v1 + 24), "Type");
  sub_21E94B4((void **)(v1 + 28), "Name");
  sub_21E94B4((void **)(v1 + 32), "Default Value");
  sub_21E94B4((void **)(v1 + 36), "Description");
  sub_21E94B4((void **)(v1 + 40), "Vanilla entities that use this");
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 56) = v1 + 48;
  *(_DWORD *)(v1 + 60) = v1 + 48;
  *(_DWORD *)(v1 + 72) = 0;
  v2 = v1 + 72;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 8) = v2;
  *(_DWORD *)(v2 + 12) = v2;
  sub_21E94B4((void **)(v1 + 92), (const char *)&unk_257BC67);
  return v1;
}


char *__fastcall DocumentationSystem::Node::addNode(int a1, int *a2, const void **a3, int *a4, int *a5)
{
  int v5; // r11@1
  int v6; // r1@1
  int v7; // r6@1
  const void **v8; // r5@1
  int v9; // r4@1
  const void *v10; // r7@2
  int v11; // r9@2
  size_t v12; // r8@2
  _DWORD *v13; // r0@4
  size_t v14; // r10@4
  size_t v15; // r2@4
  int v16; // r0@6
  int v17; // r8@12
  _DWORD *v18; // r1@13
  unsigned int v19; // r7@13
  unsigned int v20; // r6@13
  size_t v21; // r2@13
  int v22; // r0@15
  char *v23; // r7@20
  _DWORD *v25; // [sp+8h] [bp-90h]@1
  int *v26; // [sp+Ch] [bp-8Ch]@1
  int *v27; // [sp+10h] [bp-88h]@1
  char v28; // [sp+14h] [bp-84h]@20

  v27 = a2;
  v5 = a1 + 48;
  v6 = *(_DWORD *)(a1 + 52);
  v7 = a1 + 44;
  v8 = a3;
  v9 = a1 + 48;
  v26 = a4;
  v25 = (_DWORD *)a1;
  if ( v6 )
  {
    v10 = *a3;
    v11 = a1 + 48;
    v12 = *((_DWORD *)*a3 - 3);
    do
    {
      v9 = v6;
      while ( 1 )
      {
        v13 = *(_DWORD **)(v9 + 16);
        v14 = *(v13 - 3);
        v15 = *(v13 - 3);
        if ( v14 > v12 )
          v15 = v12;
        v16 = j_memcmp_0(v13, v10, v15);
        if ( !v16 )
          v16 = v14 - v12;
        if ( v16 >= 0 )
          break;
        v9 = *(_DWORD *)(v9 + 12);
        if ( !v9 )
        {
          v9 = v11;
          goto LABEL_12;
        }
      }
      v6 = *(_DWORD *)(v9 + 8);
      v11 = v9;
    }
    while ( v6 );
  }
LABEL_12:
  v17 = v7;
  if ( v9 == v5 )
    goto LABEL_24;
  v18 = *(_DWORD **)(v9 + 16);
  v19 = *((_DWORD *)*v8 - 3);
  v20 = *(v18 - 3);
  v21 = *((_DWORD *)*v8 - 3);
  if ( v19 > v20 )
    v21 = *(v18 - 3);
  v22 = j_memcmp_0(*v8, v18, v21);
  if ( !v22 )
    v22 = v19 - v20;
  if ( v22 < 0 )
    v9 = v5;
LABEL_24:
    v23 = j_std::map<std::string,DocumentationSystem::Node,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::operator[](
            v17,
            v8);
    j_DocumentationSystem::Node::Node((int)&v28, *v25 + 1, v27, (int *)v8, v26, a5);
    j_DocumentationSystem::Node::operator=((int)v23, (int)&v28);
    j_DocumentationSystem::Node::~Node((int)&v28);
  return j_std::map<std::string,DocumentationSystem::Node,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::operator[](
           v17,
           v8);
}


void __fastcall DocumentationSystem::printNode(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r11@1
  _BYTE *v5; // r0@3
  _DWORD *v6; // r8@3
  char *v7; // r2@5
  unsigned int v8; // r3@5
  void *v9; // r0@8
  int v10; // r4@8
  char *v11; // r4@15
  char *v12; // r2@17
  unsigned int v13; // r3@17
  char *v14; // r4@20
  char *v15; // r4@20
  int v16; // r7@20
  char v17; // r1@22
  char *v18; // r0@24
  char *v19; // r4@24
  int v20; // r7@24
  char v21; // r1@26
  char *v22; // r0@28
  void *v23; // r0@28
  char *v24; // r0@29
  char *v25; // r4@31
  int v26; // r7@32
  char v27; // r1@34
  char *v28; // r0@36
  char *v29; // r7@36
  int v30; // r6@36
  char v31; // r1@38
  char *v32; // r0@40
  char *v33; // r4@41
  int v34; // r6@41
  char v35; // r1@43
  char *v36; // r0@45
  char *v37; // r4@45
  int v38; // r6@45
  char v39; // r1@47
  char *v40; // r0@49
  int i; // r4@53
  char *v42; // r6@58
  int v43; // r4@58
  char v44; // r1@60
  char *v45; // r4@62
  int v46; // r6@62
  char v47; // r1@64
  char *v48; // r0@66
  int v49; // r4@66
  char v50; // r1@68
  char *v51; // r0@70
  int j; // r4@70
  int v53; // r7@75
  char v54; // r1@77
  char *v55; // r0@79
  char *v56; // r5@79
  char *v57; // r7@79
  int v58; // r5@79
  char v59; // r1@81
  char *v60; // r0@83
  int v61; // r4@86
  char v62; // r1@88
  char *v63; // r0@90
  unsigned int *v64; // r2@91
  signed int v65; // r1@93
  char *v66; // r0@96
  char *v67; // r4@96
  int v68; // r6@96
  char v69; // r1@98
  char *v70; // r0@100
  int v71; // r6@101
  char *v72; // r9@102
  char *v73; // r7@105
  int v74; // r5@105
  char v75; // r1@107
  char *v76; // r0@109
  char *v77; // r7@109
  int v78; // r5@109
  char v79; // r1@111
  char *v80; // r0@113
  char *v81; // r4@113
  int v82; // r5@113
  char v83; // r1@115
  char *v84; // r0@117
  char *v85; // r4@117
  int v86; // r5@117
  char v87; // r1@119
  char *v88; // r0@121
  char *v89; // r2@130
  unsigned int v90; // r3@130
  int *v91; // r0@133
  unsigned int *v92; // r2@135
  signed int v93; // r1@137
  int v94; // r4@145
  unsigned int *v95; // r2@148
  signed int v96; // r1@150
  unsigned int *v97; // r2@152
  signed int v98; // r1@154
  int v99; // r4@171
  char v100; // r1@173
  char *v101; // r0@175
  char *v102; // r4@175
  int v103; // r5@175
  char v104; // r1@177
  char *v105; // r0@179
  void *v106; // r4@180
  void *v107; // r6@180
  unsigned int *v108; // r2@182
  signed int v109; // r1@184
  int *v110; // r0@190
  unsigned int *v111; // r2@196
  signed int v112; // r1@198
  int *v113; // [sp+4h] [bp-4Ch]@1
  int v114; // [sp+8h] [bp-48h]@1
  int v115; // [sp+Ch] [bp-44h]@131
  int v116; // [sp+10h] [bp-40h]@18
  _DWORD *v117; // [sp+14h] [bp-3Ch]@10
  int v118; // [sp+18h] [bp-38h]@6
  _BYTE **v119; // [sp+1Ch] [bp-34h]@1
  _BYTE **v120; // [sp+20h] [bp-30h]@1
  int v121; // [sp+24h] [bp-2Ch]@1

  v3 = a1;
  v114 = a2;
  v4 = a3;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v113 = (int *)(a3 + 16);
  j_Util::splitString((unsigned int *)(a3 + 16), 32, (int)&v119);
  if ( v120 != v119 && j_Util::compareNoCase(*((_DWORD *)*v119 - 3), *v119, 5, "[EDU]") )
    goto LABEL_180;
  v6 = (_DWORD *)(v4 + 92);
  v5 = *(_BYTE **)(v4 + 92);
  if ( *((_DWORD *)v5 - 3) && *v5 == 91 )
  {
    v7 = sub_21E77E4((int *)(v4 + 92), 93, 0) + 1;
    v8 = *(_DWORD *)(*v6 - 12);
    if ( v8 < (unsigned int)v7 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", (int)v7, v8);
    sub_21E9040((void **)&v118, (int *)(v4 + 92), (unsigned int)v7, 0xFFFFFFFF);
  }
  else
    sub_21E8AF4(&v118, (int *)(v4 + 92));
  v9 = (void *)(v118 - 12);
  v10 = *(_DWORD *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v118 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    }
    else
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v10 )
    v117 = &unk_28898CC;
    if ( *(_DWORD *)v4 == 2 )
      sub_21E8190((void **)&v117, "===", (_BYTE *)3);
    else if ( *(_DWORD *)v4 == 1 )
      sub_21E8190((void **)&v117, "==", (_BYTE *)2);
      sub_21E8190((void **)&v117, (char *)&unk_257BC67, 0);
    v11 = sub_21CBF38((char *)(v114 + 8), (int)v117, *(v117 - 3));
    sub_21CBF38(v11, (int)" ", 1);
    if ( *(_DWORD *)(*v6 - 12) && *(_BYTE *)*v6 == 91 )
      v12 = sub_21E77E4((int *)(v4 + 92), 93, 0) + 1;
      v13 = *(_DWORD *)(*v6 - 12);
      if ( v13 < (unsigned int)v12 )
        sub_21E5B04(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          (int)"basic_string::substr",
          (int)v12,
          v13);
      sub_21E9040((void **)&v116, (int *)(v4 + 92), (unsigned int)v12, 0xFFFFFFFF);
      sub_21E8AF4(&v116, (int *)(v4 + 92));
    v14 = sub_21CBF38(v11, v116, *(_DWORD *)(v116 - 12));
    sub_21CBF38(v14, (int)" ", 1);
    v15 = sub_21CBF38(v14, (int)v117, *(v117 - 3));
    v16 = *(_DWORD *)&v15[*(_DWORD *)(*(_DWORD *)v15 - 12) + 124];
    if ( !v16 )
      sub_21E5824();
    if ( *(_BYTE *)(v16 + 28) )
      v17 = *(_BYTE *)(v16 + 39);
      sub_21B50F0(v16);
      v17 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 24))(v16, 10);
    v18 = sub_21CBC4C(v15, v17);
    v19 = sub_21CB78C(v18);
    v20 = *(_DWORD *)&v19[*(_DWORD *)(*(_DWORD *)v19 - 12) + 124];
    if ( !v20 )
    if ( *(_BYTE *)(v20 + 28) )
      v21 = *(_BYTE *)(v20 + 39);
      sub_21B50F0(v20);
      v21 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v20 + 24))(v20, 10);
    v22 = sub_21CBC4C(v19, v21);
    sub_21CB78C(v22);
    v23 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v116 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
      }
      else
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (char *)(v117 - 3);
    if ( v117 - 3 != &dword_28898C0 )
      v97 = v117 - 1;
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  if ( *(_DWORD *)(*v113 - 12) )
    v25 = (char *)(v114 + 8);
    if ( *(_DWORD *)v4 >= 2u )
      sub_21CBF38((char *)(v114 + 8), (int)";Description", 12);
      v26 = *(_DWORD *)&v25[*(_DWORD *)(*(_DWORD *)v25 - 12) + 124];
      if ( !v26 )
        sub_21E5824();
      if ( *(_BYTE *)(v26 + 28) )
        v27 = *(_BYTE *)(v26 + 39);
        sub_21B50F0(v26);
        v27 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v26 + 24))(v26, 10);
      v28 = sub_21CBC4C(v25, v27);
      v29 = sub_21CB78C(v28);
      v30 = *(_DWORD *)&v29[*(_DWORD *)(*(_DWORD *)v29 - 12) + 124];
      if ( !v30 )
      if ( *(_BYTE *)(v30 + 28) )
        v31 = *(_BYTE *)(v30 + 39);
        sub_21B50F0(v30);
        v31 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v30 + 24))(v30, 10);
      v32 = sub_21CBC4C(v29, v31);
      sub_21CB78C(v32);
    sub_21CBF38(v25, (int)": ", 2);
    v33 = sub_21CBF38(v25, *v113, *(_DWORD *)(*v113 - 12));
    v34 = *(_DWORD *)&v33[*(_DWORD *)(*(_DWORD *)v33 - 12) + 124];
    if ( !v34 )
    if ( *(_BYTE *)(v34 + 28) )
      v35 = *(_BYTE *)(v34 + 39);
      sub_21B50F0(v34);
      v35 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v34 + 24))(v34, 10);
    v36 = sub_21CBC4C(v33, v35);
    v37 = sub_21CB78C(v36);
    v38 = *(_DWORD *)&v37[*(_DWORD *)(*(_DWORD *)v37 - 12) + 124];
    if ( !v38 )
    if ( *(_BYTE *)(v38 + 28) )
      v39 = *(_BYTE *)(v38 + 39);
      sub_21B50F0(v38);
      v39 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v38 + 24))(v38, 10);
    v40 = sub_21CBC4C(v37, v39);
    sub_21CB78C(v40);
  if ( *(_DWORD *)(v4 + 64) )
    if ( *(_BYTE *)(v4 + 4) )
      j_DocumentationSystem::printWikiTable(v3, v114, v4);
      for ( i = *(_DWORD *)(v4 + 56); i != v4 + 48; i = sub_21D4820(i) )
        j_DocumentationSystem::printNode(v3, v114, i + 20);
  if ( *(_DWORD *)(v4 + 88) )
    if ( *(_BYTE *)(v4 + 5) )
      v42 = (char *)(v114 + 8);
      sub_21CBF38((char *)(v114 + 8), (int)"{| class=\"wikitable mw - collapsible mw - collapsed\"", 52);
      v43 = *(_DWORD *)&v42[*(_DWORD *)(*(_DWORD *)v42 - 12) + 124];
      if ( !v43 )
      if ( *(_BYTE *)(v43 + 28) )
        v44 = *(_BYTE *)(v43 + 39);
        sub_21B50F0(v43);
        v44 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v43 + 24))(v43, 10);
      v48 = sub_21CBC4C(v42, v44);
      sub_21CB78C(v48);
      sub_21CBF38(v42, (int)"! Vanilla Entities that use this", 32);
      v49 = *(_DWORD *)&v42[*(_DWORD *)(*(_DWORD *)v42 - 12) + 124];
      if ( !v49 )
      if ( *(_BYTE *)(v49 + 28) )
        v50 = *(_BYTE *)(v49 + 39);
        sub_21B50F0(v49);
        v50 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v49 + 24))(v49, 10);
      v51 = sub_21CBC4C(v42, v50);
      sub_21CB78C(v51);
      for ( j = *(_DWORD *)(v4 + 80); j != v4 + 72; j = sub_21D4820(j) )
        if ( sub_21E7D6C((const void **)(j + 20), (const char *)&unk_257BC67)
          && sub_21E7D6C((const void **)(j + 20), "unknown") )
        {
          sub_21CBF38(v42, (int)"|-", 2);
          v53 = *(_DWORD *)&v42[*(_DWORD *)(*(_DWORD *)v42 - 12) + 124];
          if ( !v53 )
            sub_21E5824();
          if ( *(_BYTE *)(v53 + 28) )
          {
            v54 = *(_BYTE *)(v53 + 39);
          }
          else
            sub_21B50F0(v53);
            v54 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v53 + 24))(v53, 10);
          v55 = sub_21CBC4C(v42, v54);
          v56 = sub_21CB78C(v55);
          sub_21CBF38(v56, (int)"| [[", 4);
          v57 = sub_21CBF38(v56, *(_DWORD *)(j + 20), *(_DWORD *)(*(_DWORD *)(j + 20) - 12));
          sub_21CBF38(v57, (int)"]]", 2);
          v58 = *(_DWORD *)&v57[*(_DWORD *)(*(_DWORD *)v57 - 12) + 124];
          if ( !v58 )
          if ( *(_BYTE *)(v58 + 28) )
            v59 = *(_BYTE *)(v58 + 39);
            sub_21B50F0(v58);
            v59 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v58 + 24))(v58, 10);
          v60 = sub_21CBC4C(v57, v59);
          sub_21CB78C(v60);
        }
      sub_21CBF38(v42, (int)"|}", 2);
      v61 = *(_DWORD *)&v42[*(_DWORD *)(*(_DWORD *)v42 - 12) + 124];
      if ( !v61 )
      if ( *(_BYTE *)(v61 + 28) )
        v62 = *(_BYTE *)(v61 + 39);
        sub_21B50F0(v61);
        v62 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v61 + 24))(v61, 10);
      v63 = sub_21CBC4C(v42, v62);
      sub_21CB78C(v63);
      if ( *(_DWORD *)(*(_DWORD *)(v4 + 40) - 12) )
        sub_21CBF38((char *)(v114 + 8), (int)";", 1);
        v45 = sub_21CBF38((char *)(v114 + 8), *(_DWORD *)(v4 + 40), *(_DWORD *)(*(_DWORD *)(v4 + 40) - 12));
        v46 = *(_DWORD *)&v45[*(_DWORD *)(*(_DWORD *)v45 - 12) + 124];
        if ( !v46 )
          sub_21E5824();
        if ( *(_BYTE *)(v46 + 28) )
          v47 = *(_BYTE *)(v46 + 39);
        else
          sub_21B50F0(v46);
          v47 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v46 + 24))(v46, 10);
        v66 = sub_21CBC4C(v45, v47);
        v67 = sub_21CB78C(v66);
        v68 = *(_DWORD *)&v67[*(_DWORD *)(*(_DWORD *)v67 - 12) + 124];
        if ( !v68 )
        if ( *(_BYTE *)(v68 + 28) )
          v69 = *(_BYTE *)(v68 + 39);
          sub_21B50F0(v68);
          v69 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v68 + 24))(v68, 10);
        v70 = sub_21CBC4C(v67, v69);
        sub_21CB78C(v70);
      v71 = *(_DWORD *)(v4 + 80);
      if ( v71 != v4 + 72 )
        v72 = (char *)(v114 + 8);
          if ( sub_21E7D6C((const void **)(v71 + 20), (const char *)&unk_257BC67)
            && sub_21E7D6C((const void **)(v71 + 20), "unknown") )
            sub_21CBF38(v72, (int)": ", 2);
            v73 = sub_21CBF38(v72, *(_DWORD *)(v71 + 16), *(_DWORD *)(*(_DWORD *)(v71 + 16) - 12));
            v74 = *(_DWORD *)&v73[*(_DWORD *)(*(_DWORD *)v73 - 12) + 124];
            if ( !v74 )
              sub_21E5824();
            if ( *(_BYTE *)(v74 + 28) )
            {
              v75 = *(_BYTE *)(v74 + 39);
            }
            else
              sub_21B50F0(v74);
              v75 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v74 + 24))(v74, 10);
            v76 = sub_21CBC4C(v73, v75);
            v77 = sub_21CB78C(v76);
            v78 = *(_DWORD *)&v77[*(_DWORD *)(*(_DWORD *)v77 - 12) + 124];
            if ( !v78 )
            if ( *(_BYTE *)(v78 + 28) )
              v79 = *(_BYTE *)(v78 + 39);
              sub_21B50F0(v78);
              v79 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v78 + 24))(v78, 10);
            v80 = sub_21CBC4C(v77, v79);
            sub_21CB78C(v80);
            v81 = sub_21CBF38(v72, *(_DWORD *)(v71 + 20), *(_DWORD *)(*(_DWORD *)(v71 + 20) - 12));
            v82 = *(_DWORD *)&v81[*(_DWORD *)(*(_DWORD *)v81 - 12) + 124];
            if ( !v82 )
            if ( *(_BYTE *)(v82 + 28) )
              v83 = *(_BYTE *)(v82 + 39);
              sub_21B50F0(v82);
              v83 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v82 + 24))(v82, 10);
            v84 = sub_21CBC4C(v81, v83);
            v85 = sub_21CB78C(v84);
            v86 = *(_DWORD *)&v85[*(_DWORD *)(*(_DWORD *)v85 - 12) + 124];
            if ( !v86 )
            if ( *(_BYTE *)(v86 + 28) )
              v87 = *(_BYTE *)(v86 + 39);
              sub_21B50F0(v86);
              v87 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v86 + 24))(v86, 10);
            v88 = sub_21CBC4C(v85, v87);
            sub_21CB78C(v88);
          v71 = sub_21D4820(v71);
        while ( v71 != v4 + 72 );
  if ( *(_DWORD *)(*v6 - 12) && *(_BYTE *)*v6 == 91 )
    v89 = sub_21E77E4((int *)(v4 + 92), 93, 0) + 1;
    v90 = *(_DWORD *)(*v6 - 12);
    if ( v90 < (unsigned int)v89 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", (int)v89, v90);
    sub_21E9040((void **)&v115, (int *)(v4 + 92), (unsigned int)v89, 0xFFFFFFFF);
    sub_21E8AF4(&v115, (int *)(v4 + 92));
  v91 = (int *)(v115 - 12);
  if ( *(_DWORD *)(v115 - 12) )
    if ( v91 != &dword_28898C0 )
      v92 = (unsigned int *)(v115 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        goto LABEL_169;
      goto LABEL_168;
    goto LABEL_171;
LABEL_169:
        if ( v93 <= 0 )
          j_j_j_j__ZdlPv_9(v91);
        goto LABEL_171;
LABEL_168:
      v93 = (*v92)--;
      goto LABEL_169;
LABEL_171:
    v99 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v114 + 8) - 12) + v114 + 8 + 124);
    if ( !v99 )
    if ( *(_BYTE *)(v99 + 28) )
      v100 = *(_BYTE *)(v99 + 39);
      sub_21B50F0(v99);
      v100 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v99 + 24))(v99, 10);
    v101 = sub_21CBC4C((char *)(v114 + 8), v100);
    v102 = sub_21CB78C(v101);
    v103 = *(_DWORD *)&v102[*(_DWORD *)(*(_DWORD *)v102 - 12) + 124];
    if ( !v103 )
    if ( *(_BYTE *)(v103 + 28) )
      v104 = *(_BYTE *)(v103 + 39);
      sub_21B50F0(v103);
      v104 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v103 + 24))(v103, 10);
    v105 = sub_21CBC4C(v102, v104);
    sub_21CB78C(v105);
  v94 = *(_DWORD *)(v4 + 64);
  if ( v91 != &dword_28898C0 )
    v111 = (unsigned int *)(v115 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v91);
  if ( v94 )
LABEL_180:
  v107 = v120;
  v106 = v119;
  if ( v119 != v120 )
    do
      v110 = (int *)(*(_DWORD *)v106 - 12);
      if ( v110 != &dword_28898C0 )
        v108 = (unsigned int *)(*(_DWORD *)v106 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j__ZdlPv_9(v110);
      v106 = (char *)v106 + 4;
    while ( v106 != v107 );
    v106 = v119;
  if ( v106 )
    j_operator delete(v106);
}


int __fastcall DocumentationSystem::Node::Node(int a1, int a2, int *a3, int *a4, int *a5, int *a6)
{
  int v6; // r8@1
  int *v7; // r9@1
  int v8; // r1@1

  v6 = a1;
  *(_DWORD *)a1 = a2;
  *(_WORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 6) = 1;
  v7 = a4;
  sub_21E8AF4((int *)(a1 + 8), a3);
  sub_21E8AF4((int *)(v6 + 12), a5);
  sub_21E8AF4((int *)(v6 + 16), a6);
  sub_21E94B4((void **)(v6 + 20), "Parameters");
  sub_21E94B4((void **)(v6 + 24), "Type");
  sub_21E94B4((void **)(v6 + 28), "Name");
  sub_21E94B4((void **)(v6 + 32), "Default Value");
  sub_21E94B4((void **)(v6 + 36), "Description");
  sub_21E94B4((void **)(v6 + 40), "Vanilla entities that use this");
  *(_DWORD *)(v6 + 52) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_DWORD *)(v6 + 60) = 0;
  *(_DWORD *)(v6 + 64) = 0;
  *(_DWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = v6 + 48;
  *(_DWORD *)(v6 + 60) = v6 + 48;
  *(_DWORD *)(v6 + 72) = 0;
  v8 = v6 + 72;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 8) = v8;
  *(_DWORD *)(v8 + 12) = v8;
  sub_21E8AF4((int *)(v6 + 92), v7);
  return v6;
}


char *__fastcall DocumentationSystem::printWikiTable(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r11@1
  char *result; // r0@1
  int v6; // r8@1
  int *v7; // r7@2
  int *v8; // r9@2
  int v9; // r10@2
  char *v10; // r6@4
  int v11; // r5@4
  char v12; // r1@6
  char *v13; // r0@8
  char *v14; // r6@8
  int v15; // r5@8
  char v16; // r1@10
  char *v17; // r0@12
  char *v18; // r6@13
  int v19; // r5@13
  char v20; // r1@15
  char *v21; // r0@17
  char *v22; // r0@17
  int v23; // r5@28
  char v24; // r1@30
  char *v25; // r0@32
  int v26; // r7@32
  int v27; // r4@33
  char v28; // r1@35
  char *v29; // r0@37
  char *v30; // r5@38
  int v31; // r4@38
  char v32; // r1@40
  char *v33; // r0@42
  _BYTE *v34; // r0@44
  char *v35; // r2@46
  unsigned int v36; // r3@46
  int v37; // r4@47
  char *v38; // r10@49
  int v39; // r5@49
  char v40; // r1@51
  char *v41; // r0@53
  void *v42; // r0@53
  char *v43; // r5@55
  int v44; // r4@55
  char v45; // r1@57
  char *v46; // r0@59
  char *v47; // r5@61
  int v48; // r4@61
  char v49; // r1@63
  char *v50; // r0@65
  int i; // r5@68
  unsigned int *v52; // r2@73
  signed int v53; // r1@75
  int v54; // r4@82
  char v55; // r1@84
  char *v56; // r0@86
  int v57; // [sp+8h] [bp-40h]@32
  int v58; // [sp+Ch] [bp-3Ch]@2
  __int64 v59; // [sp+10h] [bp-38h]@2
  int v60; // [sp+18h] [bp-30h]@47

  v3 = a3;
  v4 = a1;
  result = *(char **)(a3 + 64);
  v6 = a2;
  if ( !result )
    return result;
  v7 = (int *)(a3 + 24);
  v8 = (int *)(a3 + 28);
  v9 = sub_21E7D6C((const void **)(a3 + 24), (const char *)&unk_257BC67);
  v58 = sub_21E7D6C((const void **)(v3 + 28), (const char *)&unk_257BC67);
  HIDWORD(v59) = sub_21E7D6C((const void **)(v3 + 32), (const char *)&unk_257BC67);
  LODWORD(v59) = sub_21E7D6C((const void **)(v3 + 36), (const char *)&unk_257BC67);
  if ( *(_DWORD *)v3 >= 2u && *(_DWORD *)(*(_DWORD *)(v3 + 20) - 12) )
  {
    sub_21CBF38((char *)(v6 + 8), (int)";", 1);
    v10 = sub_21CBF38((char *)(v6 + 8), *(_DWORD *)(v3 + 20), *(_DWORD *)(*(_DWORD *)(v3 + 20) - 12));
    v11 = *(_DWORD *)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12) + 124];
    if ( !v11 )
      goto LABEL_88;
    if ( *(_BYTE *)(v11 + 28) )
    {
      v12 = *(_BYTE *)(v11 + 39);
    }
    else
      sub_21B50F0(v11);
      v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v11 + 24))(v11, 10);
    v13 = sub_21CBC4C(v10, v12);
    v14 = sub_21CB78C(v13);
    v15 = *(_DWORD *)&v14[*(_DWORD *)(*(_DWORD *)v14 - 12) + 124];
    if ( !v15 )
    if ( *(_BYTE *)(v15 + 28) )
      v16 = *(_BYTE *)(v15 + 39);
      sub_21B50F0(v15);
      v16 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v15 + 24))(v15, 10);
    v17 = sub_21CBC4C(v14, v16);
    sub_21CB78C(v17);
  }
  v18 = (char *)(v6 + 8);
  sub_21CBF38((char *)(v6 + 8), (int)": {| class=\"wikitable\"", 22);
  v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 8) - 12) + v6 + 8 + 124);
  if ( !v19 )
    goto LABEL_88;
  if ( *(_BYTE *)(v19 + 28) )
    v20 = *(_BYTE *)(v19 + 39);
  else
    sub_21B50F0(v19);
    v20 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v19 + 24))(v19, 10);
  v21 = sub_21CBC4C((char *)(v6 + 8), v20);
  v22 = sub_21CB78C(v21);
  sub_21CBF38(v22, (int)"!", 1);
  if ( v9 )
    sub_21CBF38((char *)(v6 + 8), (int)" ", 1);
    sub_21CBF38((char *)(v6 + 8), *v7, *(_DWORD *)(*v7 - 12));
    if ( v58 | HIDWORD(v59) | (unsigned int)v59 )
      sub_21CBF38((char *)(v6 + 8), (int)" !!", 3);
  if ( v58 )
    sub_21CBF38((char *)(v6 + 8), *v8, *(_DWORD *)(*v8 - 12));
    if ( v59 )
  if ( HIDWORD(v59) )
    sub_21CBF38((char *)(v6 + 8), *(_DWORD *)(v3 + 32), *(_DWORD *)(*(_DWORD *)(v3 + 32) - 12));
    if ( (_DWORD)v59 )
LABEL_27:
      sub_21CBF38((char *)(v6 + 8), (int)" ", 1);
      sub_21CBF38((char *)(v6 + 8), *(_DWORD *)(v3 + 36), *(_DWORD *)(*(_DWORD *)(v3 + 36) - 12));
      goto LABEL_28;
  else if ( (_DWORD)v59 )
    goto LABEL_27;
LABEL_28:
  v23 = *(_DWORD *)&v18[*(_DWORD *)(*(_DWORD *)v18 - 12) + 124];
  if ( !v23 )
  if ( *(_BYTE *)(v23 + 28) )
    v24 = *(_BYTE *)(v23 + 39);
    sub_21B50F0(v23);
    v24 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v23 + 24))(v23, 10);
  v25 = sub_21CBC4C((char *)(v6 + 8), v24);
  sub_21CB78C(v25);
  v26 = *(_DWORD *)(v3 + 56);
  v57 = v3 + 48;
  if ( v26 != v3 + 48 )
    while ( 1 )
      sub_21CBF38((char *)(v6 + 8), (int)"|-", 2);
      v27 = *(_DWORD *)&v18[*(_DWORD *)(*(_DWORD *)v18 - 12) + 124];
      if ( !v27 )
        break;
      if ( *(_BYTE *)(v27 + 28) )
      {
        v28 = *(_BYTE *)(v27 + 39);
      }
      else
        sub_21B50F0(v27);
        v28 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v27 + 24))(v27, 10);
      v29 = sub_21CBC4C((char *)(v6 + 8), v28);
      sub_21CB78C(v29);
      if ( v9 )
        sub_21CBF38((char *)(v6 + 8), (int)"| ", 2);
        v30 = sub_21CBF38((char *)(v6 + 8), *(_DWORD *)(v26 + 28), *(_DWORD *)(*(_DWORD *)(v26 + 28) - 12));
        v31 = *(_DWORD *)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12) + 124];
        if ( !v31 )
          break;
        if ( *(_BYTE *)(v31 + 28) )
        {
          v32 = *(_BYTE *)(v31 + 39);
        }
        else
          sub_21B50F0(v31);
          v32 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v31 + 24))(v31, 10);
        v33 = sub_21CBC4C(v30, v32);
        sub_21CB78C(v33);
      if ( v58 )
        v34 = *(_BYTE **)(v26 + 112);
        if ( *((_DWORD *)v34 - 3) && *v34 == 91 )
          v35 = sub_21E77E4((int *)(v26 + 112), 93, 0) + 1;
          v36 = *(_DWORD *)(*(_DWORD *)(v26 + 112) - 12);
          if ( v36 < (unsigned int)v35 )
            sub_21E5B04(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              (int)"basic_string::substr",
              (int)v35,
              v36);
          v37 = v9;
          sub_21E9040((void **)&v60, (int *)(v26 + 112), (unsigned int)v35, 0xFFFFFFFF);
          sub_21E8AF4(&v60, (int *)(v26 + 112));
        v38 = sub_21CBF38((char *)(v6 + 8), v60, *(_DWORD *)(v60 - 12));
        v39 = *(_DWORD *)&v38[*(_DWORD *)(*(_DWORD *)v38 - 12) + 124];
        if ( !v39 )
          sub_21E5824();
        if ( *(_BYTE *)(v39 + 28) )
          v40 = *(_BYTE *)(v39 + 39);
          sub_21B50F0(v39);
          v40 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v39 + 24))(v39, 10);
        v41 = sub_21CBC4C(v38, v40);
        sub_21CB78C(v41);
        v9 = v37;
        v42 = (void *)(v60 - 12);
        if ( (int *)(v60 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v60 - 4);
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
            j_j_j_j__ZdlPv_9(v42);
      if ( HIDWORD(v59) )
        v43 = sub_21CBF38((char *)(v6 + 8), *(_DWORD *)(v26 + 32), *(_DWORD *)(*(_DWORD *)(v26 + 32) - 12));
        v44 = *(_DWORD *)&v43[*(_DWORD *)(*(_DWORD *)v43 - 12) + 124];
        if ( !v44 )
          goto LABEL_89;
        if ( *(_BYTE *)(v44 + 28) )
          v45 = *(_BYTE *)(v44 + 39);
          sub_21B50F0(v44);
          v45 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v44 + 24))(v44, 10);
        v46 = sub_21CBC4C(v43, v45);
        sub_21CB78C(v46);
      if ( (_DWORD)v59 )
        v47 = sub_21CBF38((char *)(v6 + 8), *(_DWORD *)(v26 + 36), *(_DWORD *)(*(_DWORD *)(v26 + 36) - 12));
        v48 = *(_DWORD *)&v47[*(_DWORD *)(*(_DWORD *)v47 - 12) + 124];
        if ( !v48 )
LABEL_89:
        if ( *(_BYTE *)(v48 + 28) )
          v49 = *(_BYTE *)(v48 + 39);
          sub_21B50F0(v48);
          v49 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v48 + 24))(v48, 10);
        v50 = sub_21CBC4C(v47, v49);
        sub_21CB78C(v50);
      if ( *(_BYTE *)(v26 + 24) )
        j_DocumentationSystem::printWikiTable(v4, v6, v26 + 20);
        for ( i = *(_DWORD *)(v26 + 76); i != v26 + 68; i = sub_21D4820(i) )
          j_DocumentationSystem::printNode(v4, v6, i + 20);
      v26 = sub_21D4820(v26);
      if ( v26 == v57 )
        goto LABEL_82;
LABEL_88:
    sub_21E5824();
LABEL_82:
  sub_21CBF38((char *)(v6 + 8), (int)"|}", 2);
  v54 = *(_DWORD *)&v18[*(_DWORD *)(*(_DWORD *)v18 - 12) + 124];
  if ( !v54 )
  if ( *(_BYTE *)(v54 + 28) )
    v55 = *(_BYTE *)(v54 + 39);
    sub_21B50F0(v54);
    v55 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v54 + 24))(v54, 10);
  v56 = sub_21CBC4C((char *)(v6 + 8), v55);
  return sub_21CB78C(v56);
}


void __fastcall DocumentationSystem::printNodeHTML(int a1, int a2, int a3)
{
  DocumentationSystem::printNodeHTML(a1, a2, a3);
}


DocumentationSystem *__fastcall DocumentationSystem::~DocumentationSystem(DocumentationSystem *this)
{
  DocumentationSystem *v1; // r4@1

  v1 = this;
  if ( (DocumentationSystem *)DocumentationSystem::mDocs == this )
    DocumentationSystem::mDocs = 0;
  j_std::_Rb_tree<std::string,std::pair<std::string const,DocumentationSystem::Node>,std::_Select1st<std::pair<std::string const,DocumentationSystem::Node>>,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  return v1;
}


int __fastcall DocumentationSystem::Node::Node(int a1, int a2, int *a3, int *a4)
{
  int v4; // r8@1
  int *v5; // r4@1
  int *v6; // r9@1
  int v7; // r1@1

  v4 = a1;
  v5 = a4;
  *(_DWORD *)a1 = a2;
  *(_WORD *)(a1 + 4) = 0;
  v6 = a3;
  *(_BYTE *)(a1 + 6) = 1;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v4 + 12), (const char *)&unk_257BC67);
  sub_21E8AF4((int *)(v4 + 16), v5);
  sub_21E94B4((void **)(v4 + 20), "Parameters");
  sub_21E94B4((void **)(v4 + 24), "Type");
  sub_21E94B4((void **)(v4 + 28), "Name");
  sub_21E94B4((void **)(v4 + 32), "Default Value");
  sub_21E94B4((void **)(v4 + 36), "Description");
  sub_21E94B4((void **)(v4 + 40), "Vanilla entities that use this");
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = v4 + 48;
  *(_DWORD *)(v4 + 60) = v4 + 48;
  *(_DWORD *)(v4 + 72) = 0;
  v7 = v4 + 72;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 8) = v7;
  *(_DWORD *)(v7 + 12) = v7;
  sub_21E8AF4((int *)(v4 + 92), v6);
  return v4;
}


char *__fastcall DocumentationSystem::printDocumentationHTML(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r4@1
  void *v4; // r0@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r3@4
  unsigned __int64 v8; // r2@4
  char *v9; // r4@6
  char *v10; // r0@6
  char *v11; // r4@6
  char *v12; // r5@6
  int v13; // r4@6
  char v14; // r1@8
  char *v15; // r0@10
  int v16; // r4@10
  char v17; // r1@12
  char *v18; // r0@14
  int v19; // r4@14
  char v20; // r1@16
  char *v21; // r0@18
  int v22; // r8@18
  const void **v23; // r0@20
  _BYTE *v24; // r0@20
  char *v25; // r2@22
  unsigned int v26; // r3@22
  __int64 v27; // kr00_8@25
  unsigned int v28; // r1@25
  const void **v29; // r0@27
  const void **v30; // r0@29
  int v31; // r6@29
  char *v32; // r4@29
  int v33; // r5@29
  char v34; // r1@31
  char *v35; // r0@33
  char *v36; // r0@34
  void *v37; // r0@35
  void *v38; // r0@36
  char *v39; // r0@37
  int j; // r11@38
  char *v41; // r6@42
  _BYTE *v42; // r0@42
  char *v43; // r2@44
  unsigned int v44; // r3@44
  char *v45; // r6@47
  int v46; // r4@47
  char v47; // r1@49
  char *v48; // r0@51
  void *v49; // r0@51
  unsigned int *v50; // r2@52
  signed int v51; // r1@54
  unsigned int *v52; // r1@64
  signed int v53; // r0@66
  unsigned int *v54; // r2@68
  signed int v55; // r1@70
  unsigned int *v56; // r2@72
  signed int v57; // r1@74
  unsigned int *v58; // r2@76
  signed int v59; // r1@78
  unsigned int *v60; // r2@80
  signed int v61; // r1@82
  int v62; // r4@105
  char v63; // r1@107
  char *v64; // r0@109
  int v65; // r4@109
  char v66; // r1@111
  char *v67; // r0@113
  int k; // r6@113
  unsigned int *v69; // r2@115
  signed int v70; // r1@117
  void *v71; // r0@123
  void *v72; // r0@125
  char *result; // r0@126
  unsigned int *v74; // r2@128
  signed int v75; // r1@130
  int v76; // [sp+14h] [bp-15A4h]@18
  int i; // [sp+18h] [bp-15A0h]@18
  RakNet *v78; // [sp+20h] [bp-1598h]@1
  int v79; // [sp+24h] [bp-1594h]@115
  int v80; // [sp+28h] [bp-1590h]@123
  int v81; // [sp+88h] [bp-1530h]@45
  int v82; // [sp+8Ch] [bp-152Ch]@23
  char *v83; // [sp+90h] [bp-1528h]@20
  unsigned int v84; // [sp+94h] [bp-1524h]@20
  char *v85; // [sp+98h] [bp-1520h]@29
  __int64 v86; // [sp+9Ch] [bp-151Ch]@4
  int v87; // [sp+A0h] [bp-1518h]@4
  int v88; // [sp+A4h] [bp-1514h]@4
  int v89; // [sp+A8h] [bp-1510h]@4
  int v90; // [sp+ACh] [bp-150Ch]@4
  int v91; // [sp+B0h] [bp-1508h]@4
  int v92; // [sp+B4h] [bp-1504h]@4
  char v93; // [sp+C0h] [bp-14F8h]@4
  int v94; // [sp+C4h] [bp-14F4h]@4
  int v95; // [sp+4C4h] [bp-10F4h]@4
  void **v96; // [sp+4C8h] [bp-10F0h]@4
  int v97; // [sp+4CCh] [bp-10ECh]@125
  void **v98; // [sp+4D0h] [bp-10E8h]@6
  int v99; // [sp+4D4h] [bp-10E4h]@5
  void **v100; // [sp+1504h] [bp-B4h]@125

  v2 = a1;
  v3 = a2;
  v78 = _stack_chk_guard;
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v4 + 280))(&v88);
  j_Core::FileStream::FileStream((Core::FileStream *)&v96);
  v5 = *v3;
  v6 = *(_DWORD *)(v88 - 12);
  v7 = *(_DWORD *)(*v3 - 12);
  v89 = v88;
  v90 = v6;
  v91 = v5;
  v92 = v7;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v93, (int)&v89, 2);
  LODWORD(v86) = &v94;
  v87 = v95;
  j_Core::FileStream::open((int)&v96, &v86, 48);
  if ( !(*((_BYTE *)*(v96 - 3) + (_DWORD)&v96 + 20) & 1)
    && j_Core::FileStdStreamBuf::isOpen((Core::FileStdStreamBuf *)&v99) == 1 )
  {
    sub_21CBF38((char *)&v98, (int)"<h1>Version: ", 13);
    v9 = (char *)sub_21CC43C(&v98, 1);
    sub_21CBF38(v9, (int)".", 1);
    v10 = (char *)sub_21CC43C(v9, 2);
    sub_21CBF38(v10, (int)".", 1);
    v11 = (char *)sub_21CC43C(&v98, 0);
    sub_21CBF38(v11, (int)".", 1);
    v12 = (char *)sub_21CC43C(v11, 81);
    sub_21CBF38(v12, (int)"</h1>", 5);
    v13 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
    if ( !v13 )
      sub_21E5824();
    if ( *(_BYTE *)(v13 + 28) )
    {
      v14 = *(_BYTE *)(v13 + 39);
    }
    else
      sub_21B50F0(v13);
      v14 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v13 + 24))(v13, 10);
    v15 = sub_21CBC4C(v12, v14);
    sub_21CB78C(v15);
    sub_21CBF38((char *)&v98, (int)"<h2><p id=\"Index\">Index</p></h2>", 32);
    v16 = *(_DWORD *)((char *)*(v98 - 3) + (_DWORD)&v98 + 124);
    if ( !v16 )
    if ( *(_BYTE *)(v16 + 28) )
      v17 = *(_BYTE *)(v16 + 39);
      sub_21B50F0(v16);
      v17 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 24))(v16, 10);
    v18 = sub_21CBC4C((char *)&v98, v17);
    sub_21CB78C(v18);
    sub_21CBF38((char *)&v98, (int)"<table border=\"1\">", 18);
    v19 = *(_DWORD *)((char *)*(v98 - 3) + (_DWORD)&v98 + 124);
    if ( !v19 )
    if ( *(_BYTE *)(v19 + 28) )
      v20 = *(_BYTE *)(v19 + 39);
      sub_21B50F0(v19);
      v20 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v19 + 24))(v19, 10);
    v21 = sub_21CBC4C((char *)&v98, v20);
    sub_21CB78C(v21);
    v22 = *(_DWORD *)(v2 + 12);
    v76 = v2;
    for ( i = v2 + 4; v22 != i; v22 = sub_21D4820(v22) )
      if ( *(_BYTE *)(v22 + 26) )
      {
        v83 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v83, *(_DWORD *)(*(_DWORD *)(v22 + 16) - 12) + 19);
        sub_21E7408((const void **)&v83, "<tr> <th><a href=\"#", 0x13u);
        sub_21E72F0((const void **)&v83, (const void **)(v22 + 16));
        v23 = sub_21E7408((const void **)&v83, "\">", 2u);
        v84 = (unsigned int)*v23;
        *v23 = &unk_28898CC;
        v24 = *(_BYTE **)(v22 + 112);
        if ( *((_DWORD *)v24 - 3) && *v24 == 91 )
        {
          v25 = sub_21E77E4((int *)(v22 + 112), 93, 0) + 1;
          v26 = *(_DWORD *)(*(_DWORD *)(v22 + 112) - 12);
          if ( v26 < (unsigned int)v25 )
            sub_21E5B04(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              (int)"basic_string::substr",
              (int)v25,
              v26);
          sub_21E9040((void **)&v82, (int *)(v22 + 112), (unsigned int)v25, 0xFFFFFFFF);
        }
        else
          sub_21E8AF4(&v82, (int *)(v22 + 112));
        v27 = *(_QWORD *)(v84 - 12);
        v28 = *(_DWORD *)(v82 - 12) + v27;
        if ( v28 > HIDWORD(v27) && v28 <= *(_DWORD *)(v82 - 8) )
          v29 = sub_21E82D8((const void **)&v82, 0, v84, (_BYTE *)v27);
          v29 = sub_21E72F0((const void **)&v84, (const void **)&v82);
        v85 = (char *)*v29;
        *v29 = &unk_28898CC;
        v30 = sub_21E7408((const void **)&v85, "</a></th> </tr>", 0xFu);
        v31 = (int)*v30;
        *v30 = &unk_28898CC;
        v32 = sub_21CBF38((char *)&v98, v31, *(_DWORD *)(v31 - 12));
        v33 = *(_DWORD *)&v32[*(_DWORD *)(*(_DWORD *)v32 - 12) + 124];
        if ( !v33 )
          sub_21E5824();
        if ( *(_BYTE *)(v33 + 28) )
          v34 = *(_BYTE *)(v33 + 39);
          sub_21B50F0(v33);
          v34 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v33 + 24))(v33, 10);
        v35 = sub_21CBC4C(v32, v34);
        sub_21CB78C(v35);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v31 - 4);
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
            j_j_j_j__ZdlPv_9((void *)(v31 - 12));
        v36 = v85 - 12;
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v85 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v37 = (void *)(v82 - 12);
        if ( (int *)(v82 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v82 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        v38 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v84 - 4);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        v39 = v83 - 12;
        if ( (int *)(v83 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v83 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        for ( j = *(_DWORD *)(v22 + 76); j != v22 + 68; j = sub_21D4820(j) )
          if ( *(_BYTE *)(j + 26) )
            sub_21CBF38((char *)&v98, (int)"<tr> <td> <a href=\"#", 20);
            v41 = sub_21CBF38((char *)&v98, *(_DWORD *)(j + 16), *(_DWORD *)(*(_DWORD *)(j + 16) - 12));
            sub_21CBF38(v41, (int)"\"> ", 3);
            v42 = *(_BYTE **)(j + 112);
            if ( *((_DWORD *)v42 - 3) && *v42 == 91 )
            {
              v43 = sub_21E77E4((int *)(j + 112), 93, 0) + 1;
              v44 = *(_DWORD *)(*(_DWORD *)(j + 112) - 12);
              if ( v44 < (unsigned int)v43 )
                sub_21E5B04(
                  "%s: __pos (which is %zu) > this->size() (which is %zu)",
                  (int)"basic_string::substr",
                  (int)v43,
                  v44);
              sub_21E9040((void **)&v81, (int *)(j + 112), (unsigned int)v43, 0xFFFFFFFF);
            }
            else
              sub_21E8AF4(&v81, (int *)(j + 112));
            v45 = sub_21CBF38(v41, v81, *(_DWORD *)(v81 - 12));
            sub_21CBF38(v45, (int)"</a> </tr> </td>", 16);
            v46 = *(_DWORD *)&v45[*(_DWORD *)(*(_DWORD *)v45 - 12) + 124];
            if ( !v46 )
              sub_21E5824();
            if ( *(_BYTE *)(v46 + 28) )
              v47 = *(_BYTE *)(v46 + 39);
              sub_21B50F0(v46);
              v47 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v46 + 24))(v46, 10);
            v48 = sub_21CBC4C(v45, v47);
            sub_21CB78C(v48);
            v49 = (void *)(v81 - 12);
            if ( (int *)(v81 - 12) != &dword_28898C0 )
              v50 = (unsigned int *)(v81 - 4);
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
                j_j_j_j__ZdlPv_9(v49);
      }
    sub_21CBF38((char *)&v98, (int)"</table>", 8);
    v62 = *(_DWORD *)((char *)*(v98 - 3) + (_DWORD)&v98 + 124);
    if ( !v62 )
    if ( *(_BYTE *)(v62 + 28) )
      v63 = *(_BYTE *)(v62 + 39);
      sub_21B50F0(v62);
      v63 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v62 + 24))(v62, 10);
    v64 = sub_21CBC4C((char *)&v98, v63);
    sub_21CB78C(v64);
    sub_21CBF38((char *)&v98, (int)"<a href=\"#Index\">Back to top</a>", 32);
    v65 = *(_DWORD *)((char *)*(v98 - 3) + (_DWORD)&v98 + 124);
    if ( !v65 )
    if ( *(_BYTE *)(v65 + 28) )
      v66 = *(_BYTE *)(v65 + 39);
      sub_21B50F0(v65);
      v66 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v65 + 24))(v65, 10);
    v67 = sub_21CBC4C((char *)&v98, v66);
    sub_21CB78C(v67);
    for ( k = *(_DWORD *)(v76 + 12); k != i; k = sub_21D4820(k) )
      sub_21E8AF4(&v79, (int *)(k + 16));
      j_DocumentationSystem::Node::Node((int)&v80, k + 20);
      j_DocumentationSystem::printNodeHTML(v76, (int)&v96, (int)&v79);
      j_DocumentationSystem::Node::~Node((int)&v80);
      v71 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v69 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
          v70 = (*v69)--;
        if ( v70 <= 0 )
          j_j_j_j__ZdlPv_9(v71);
  }
  v96 = &off_26D66C4;
  v100 = &off_26D66EC;
  v98 = &off_26D66D8;
  j_Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v99, (int)&off_26D66EC, v8);
  v96 = &off_26D670C;
  v100 = &off_26D6720;
  v97 = 0;
  sub_21B6560(&v100);
  v72 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  result = (char *)(_stack_chk_guard - v78);
  if ( _stack_chk_guard != v78 )
    j___stack_chk_fail_0((int)result);
  return result;
}


char *__fastcall DocumentationSystem::printHTMLTable(int a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r5@1
  const void **v5; // r7@1
  const void **v6; // r6@1
  const void **v7; // r8@1
  unsigned int v8; // r0@1
  unsigned int v9; // r1@1
  unsigned int v10; // r2@1
  char *result; // r0@1
  char *v12; // r4@2
  int v13; // r5@2
  char v14; // r1@4
  char *v15; // r0@6
  char *v16; // r0@6
  const void **v17; // r0@7
  int v18; // r5@7
  _DWORD *v19; // r7@7
  int *v20; // r7@7
  int v21; // t1@7
  char *v22; // r0@8
  const void **v23; // r0@10
  int v24; // r5@10
  _DWORD *v25; // r6@10
  int *v26; // r6@10
  int v27; // t1@10
  char *v28; // r0@11
  const void **v29; // r0@13
  int v30; // r6@13
  _DWORD *v31; // r5@13
  int *v32; // r5@13
  int v33; // t1@13
  char *v34; // r0@14
  const void **v35; // r0@15
  int v36; // r6@15
  _DWORD *v37; // r5@15
  int *v38; // r5@15
  int v39; // t1@15
  char *v40; // r0@16
  int v41; // r5@17
  char v42; // r1@19
  char *v43; // r0@21
  int v44; // r6@21
  int v45; // r10@21
  int *v46; // r8@22
  const char *v47; // r9@22
  int v48; // r5@23
  char v49; // r1@25
  char *v50; // r0@27
  _BYTE *v51; // r0@28
  char *v52; // r2@30
  unsigned int v53; // r3@30
  char *v54; // r5@33
  int v55; // r7@33
  char v56; // r1@35
  char *v57; // r0@37
  void *v58; // r0@37
  char *v59; // r5@39
  int v60; // r7@39
  char v61; // r1@41
  char *v62; // r0@43
  char *v63; // r5@45
  int v64; // r7@45
  int *v65; // r9@46
  char v66; // r1@47
  char *v67; // r0@49
  int i; // r8@52
  void *v69; // r0@55
  unsigned int *v70; // r2@56
  signed int v71; // r1@58
  int v72; // r5@64
  char v73; // r1@66
  char *v74; // r0@68
  int v75; // r5@69
  char v76; // r1@71
  char *v77; // r0@73
  unsigned int *v78; // r2@75
  signed int v79; // r1@77
  int v80; // r5@84
  char v81; // r1@86
  char *v82; // r0@88
  unsigned int *v83; // r1@90
  signed int v84; // r0@92
  unsigned int *v85; // r2@94
  signed int v86; // r1@96
  unsigned int *v87; // r1@98
  signed int v88; // r0@100
  unsigned int *v89; // r2@102
  signed int v90; // r1@104
  unsigned int *v91; // r1@106
  signed int v92; // r0@108
  unsigned int *v93; // r2@110
  signed int v94; // r1@112
  unsigned int *v95; // r1@114
  signed int v96; // r0@116
  unsigned int *v97; // r2@118
  signed int v98; // r1@120
  int v99; // [sp+4h] [bp-BCh]@2
  int v100; // [sp+Ch] [bp-B4h]@1
  unsigned int v101; // [sp+10h] [bp-B0h]@1
  unsigned int v102; // [sp+14h] [bp-ACh]@1
  unsigned int v103; // [sp+1Ch] [bp-A4h]@1
  int v104; // [sp+20h] [bp-A0h]@22
  int v105; // [sp+24h] [bp-9Ch]@55
  int v106; // [sp+84h] [bp-3Ch]@31
  char *v107; // [sp+88h] [bp-38h]@15
  char *v108; // [sp+8Ch] [bp-34h]@13
  char *v109; // [sp+90h] [bp-30h]@10
  char *v110; // [sp+94h] [bp-2Ch]@7

  v3 = a3;
  v100 = a1;
  v4 = a2;
  v5 = (const void **)(a3 + 28);
  v6 = (const void **)(a3 + 24);
  v7 = (const void **)(a3 + 32);
  v8 = *(_DWORD *)(*(_DWORD *)(a3 + 28) - 12);
  v9 = *(_DWORD *)(*(_DWORD *)(a3 + 24) - 12);
  v10 = *(_DWORD *)(*(_DWORD *)(a3 + 32) - 12);
  v103 = v8;
  result = (char *)(v8 | v9 | v10);
  v102 = v9;
  v101 = v10;
  if ( (unsigned int)result >= 2 )
  {
    v12 = (char *)(v4 + 8);
    sub_21CBF38((char *)(v4 + 8), (int)"<table border=\"1\">", 18);
    v99 = v4;
    v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 8) - 12) + v4 + 8 + 124);
    if ( !v13 )
      goto LABEL_151;
    if ( *(_BYTE *)(v13 + 28) )
    {
      v14 = *(_BYTE *)(v13 + 39);
    }
    else
      sub_21B50F0(v13);
      v14 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v13 + 24))(v13, 10);
    v15 = sub_21CBC4C(v12, v14);
    v16 = sub_21CB78C(v15);
    sub_21CBF38(v16, (int)"<tr> ", 5);
    if ( v103 >= 2 )
      v110 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v110, *((_DWORD *)*v5 - 3) + 4);
      sub_21E7408((const void **)&v110, "<th>", 4u);
      sub_21E72F0((const void **)&v110, v5);
      v17 = sub_21E7408((const void **)&v110, "</th> ", 6u);
      v18 = (int)*v17;
      v19 = *v17;
      *v17 = &unk_28898CC;
      v21 = *(v19 - 3);
      v20 = v19 - 3;
      sub_21CBF38(v12, v18, v21);
      if ( v20 != &dword_28898C0 )
      {
        v83 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
        }
        else
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      }
      v22 = v110 - 12;
      if ( (int *)(v110 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v110 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
    if ( v102 >= 2 )
      v109 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v109, *((_DWORD *)*v6 - 3) + 4);
      sub_21E7408((const void **)&v109, "<th>", 4u);
      sub_21E72F0((const void **)&v109, v6);
      v23 = sub_21E7408((const void **)&v109, "</th> ", 6u);
      v24 = (int)*v23;
      v25 = *v23;
      *v23 = &unk_28898CC;
      v27 = *(v25 - 3);
      v26 = v25 - 3;
      sub_21CBF38(v12, v24, v27);
      if ( v26 != &dword_28898C0 )
        v87 = (unsigned int *)(v24 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      v28 = v109 - 12;
      if ( (int *)(v109 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v109 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
    if ( v101 >= 2 )
      v108 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v108, *((_DWORD *)*v7 - 3) + 4);
      sub_21E7408((const void **)&v108, "<th>", 4u);
      sub_21E72F0((const void **)&v108, v7);
      v29 = sub_21E7408((const void **)&v108, "</th> ", 6u);
      v30 = (int)*v29;
      v31 = *v29;
      *v29 = &unk_28898CC;
      v33 = *(v31 - 3);
      v32 = v31 - 3;
      sub_21CBF38(v12, v30, v33);
      if ( v32 != &dword_28898C0 )
        v91 = (unsigned int *)(v30 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v34 = v108 - 12;
      if ( (int *)(v108 - 12) != &dword_28898C0 )
        v93 = (unsigned int *)(v108 - 4);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v107 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v107, *(_DWORD *)(*(_DWORD *)(v3 + 36) - 12) + 4);
      sub_21E7408((const void **)&v107, "<th>", 4u);
      sub_21E72F0((const void **)&v107, (const void **)(v3 + 36));
      v35 = sub_21E7408((const void **)&v107, "</th> ", 6u);
      v36 = (int)*v35;
      v37 = *v35;
      *v35 = &unk_28898CC;
      v39 = *(v37 - 3);
      v38 = v37 - 3;
      sub_21CBF38(v12, v36, v39);
      if ( v38 != &dword_28898C0 )
        v95 = (unsigned int *)(v36 - 4);
            v96 = __ldrex(v95);
          while ( __strex(v96 - 1, v95) );
          v96 = (*v95)--;
        if ( v96 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v40 = v107 - 12;
      if ( (int *)(v107 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v107 - 4);
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
    sub_21CBF38(v12, (int)"</tr>", 5);
    v41 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
    if ( !v41 )
    if ( *(_BYTE *)(v41 + 28) )
      v42 = *(_BYTE *)(v41 + 39);
      sub_21B50F0(v41);
      v42 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v41 + 24))(v41, 10);
    v43 = sub_21CBC4C(v12, v42);
    sub_21CB78C(v43);
    v44 = *(_DWORD *)(v3 + 56);
    v45 = v3 + 48;
    if ( v44 != v45 )
      v46 = &v104;
      v47 = "<tr>";
      while ( 1 )
        sub_21CBF38(v12, (int)v47, 4);
        v48 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
        if ( !v48 )
          break;
        if ( *(_BYTE *)(v48 + 28) )
          v49 = *(_BYTE *)(v48 + 39);
          sub_21B50F0(v48);
          v49 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v48 + 24))(v48, 10);
        v50 = sub_21CBC4C(v12, v49);
        sub_21CB78C(v50);
        if ( v103 >= 2 )
          sub_21CBF38(v12, (int)"<td>", 4);
          v51 = *(_BYTE **)(v44 + 112);
          if ( *((_DWORD *)v51 - 3) && *v51 == 91 )
          {
            v52 = sub_21E77E4((int *)(v44 + 112), 93, 0) + 1;
            v53 = *(_DWORD *)(*(_DWORD *)(v44 + 112) - 12);
            if ( v53 < (unsigned int)v52 )
              sub_21E5B04(
                "%s: __pos (which is %zu) > this->size() (which is %zu)",
                (int)"basic_string::substr",
                (int)v52,
                v53);
            sub_21E9040((void **)&v106, (int *)(v44 + 112), (unsigned int)v52, 0xFFFFFFFF);
          }
          else
            sub_21E8AF4(&v106, (int *)(v44 + 112));
          v54 = sub_21CBF38(v12, v106, *(_DWORD *)(v106 - 12));
          sub_21CBF38(v54, (int)"</td>", 5);
          v55 = *(_DWORD *)&v54[*(_DWORD *)(*(_DWORD *)v54 - 12) + 124];
          if ( !v55 )
            sub_21E5824();
          if ( *(_BYTE *)(v55 + 28) )
            v56 = *(_BYTE *)(v55 + 39);
            sub_21B50F0(v55);
            v56 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v55 + 24))(v55, 10);
          v57 = sub_21CBC4C(v54, v56);
          sub_21CB78C(v57);
          v58 = (void *)(v106 - 12);
          if ( (int *)(v106 - 12) != &dword_28898C0 )
            v78 = (unsigned int *)(v106 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
            }
            else
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j__ZdlPv_9(v58);
        if ( v102 >= 2 )
          v59 = sub_21CBF38(v12, *(_DWORD *)(v44 + 28), *(_DWORD *)(*(_DWORD *)(v44 + 28) - 12));
          sub_21CBF38(v59, (int)"</td>", 5);
          v60 = *(_DWORD *)&v59[*(_DWORD *)(*(_DWORD *)v59 - 12) + 124];
          if ( !v60 )
            goto LABEL_150;
          if ( *(_BYTE *)(v60 + 28) )
            v61 = *(_BYTE *)(v60 + 39);
            sub_21B50F0(v60);
            v61 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v60 + 24))(v60, 10);
          v62 = sub_21CBC4C(v59, v61);
          sub_21CB78C(v62);
        if ( v101 >= 2 )
          v63 = sub_21CBF38(v12, *(_DWORD *)(v44 + 32), *(_DWORD *)(*(_DWORD *)(v44 + 32) - 12));
          sub_21CBF38(v63, (int)"</td>", 5);
          v64 = *(_DWORD *)&v63[*(_DWORD *)(*(_DWORD *)v63 - 12) + 124];
          if ( !v64 )
          v65 = v46;
          if ( *(_BYTE *)(v64 + 28) )
            v66 = *(_BYTE *)(v64 + 39);
            sub_21B50F0(v64);
            v66 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v64 + 24))(v64, 10);
          v67 = sub_21CBC4C(v63, v66);
          sub_21CB78C(v67);
          sub_21CBF38(v12, *(_DWORD *)(v44 + 36), *(_DWORD *)(*(_DWORD *)(v44 + 36) - 12));
          if ( *(_DWORD *)(v44 + 84) )
            if ( *(_BYTE *)(v44 + 24) )
              j_DocumentationSystem::printHTMLTable(v100, v99, v44 + 20);
              for ( i = *(_DWORD *)(v44 + 76); i != v44 + 68; i = sub_21D4820(i) )
              {
                sub_21E8AF4(v65, (int *)(i + 16));
                j_DocumentationSystem::Node::Node((int)&v105, i + 20);
                j_DocumentationSystem::printNodeHTML(v100, v99, (int)v65);
                j_DocumentationSystem::Node::~Node((int)&v105);
                v69 = (void *)(v104 - 12);
                if ( (int *)(v104 - 12) != &dword_28898C0 )
                {
                  v70 = (unsigned int *)(v104 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v71 = __ldrex(v70);
                    while ( __strex(v71 - 1, v70) );
                  }
                  else
                    v71 = (*v70)--;
                  if ( v71 <= 0 )
                    j_j_j_j__ZdlPv_9(v69);
                }
              }
          sub_21CBF38(v12, (int)"</td>", 5);
          v72 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
          if ( !v72 )
LABEL_150:
          v46 = v65;
          if ( *(_BYTE *)(v72 + 28) )
            v73 = *(_BYTE *)(v72 + 39);
            v47 = "<tr>";
            sub_21B50F0(v72);
            v73 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v72 + 24))(v72, 10);
          v74 = sub_21CBC4C(v12, v73);
          sub_21CB78C(v74);
        sub_21CBF38(v12, (int)"</tr>", 5);
        v75 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
        if ( !v75 )
          goto LABEL_150;
        if ( *(_BYTE *)(v75 + 28) )
          v76 = *(_BYTE *)(v75 + 39);
          sub_21B50F0(v75);
          v76 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v75 + 24))(v75, 10);
        v77 = sub_21CBC4C(v12, v76);
        sub_21CB78C(v77);
        v44 = sub_21D4820(v44);
        if ( v44 == v45 )
          goto LABEL_84;
LABEL_151:
      sub_21E5824();
LABEL_84:
    sub_21CBF38(v12, (int)"</table>", 8);
    v80 = *(_DWORD *)&v12[*(_DWORD *)(*(_DWORD *)v12 - 12) + 124];
    if ( !v80 )
    if ( *(_BYTE *)(v80 + 28) )
      v81 = *(_BYTE *)(v80 + 39);
      sub_21B50F0(v80);
      v81 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v80 + 24))(v80, 10);
    v82 = sub_21CBC4C(v12, v81);
    result = sub_21CB78C(v82);
  }
  return result;
}


int __fastcall DocumentationSystem::getSystem(DocumentationSystem *this)
{
  return DocumentationSystem::mDocs;
}


void __fastcall DocumentationSystem::printNodeHTML(int a1, int a2, int a3)
{
  int v3; // r8@1
  int *v4; // r6@1
  int v5; // r11@1
  _BYTE *v6; // r0@3
  char *v7; // r2@5
  unsigned int v8; // r3@5
  char *v9; // r4@9
  char *v10; // r4@9
  int v11; // r5@9
  char v12; // r1@11
  signed int v13; // r0@12
  char *v14; // r0@14
  char *v15; // r4@14
  int v16; // r5@14
  char v17; // r1@16
  char *v18; // r0@18
  int v19; // r4@20
  char v20; // r1@22
  char *v21; // r0@24
  char *v22; // r4@24
  int v23; // r5@24
  char v24; // r1@26
  char *v25; // r0@28
  char *v26; // r4@28
  int v27; // r5@28
  char v28; // r1@30
  char *v29; // r0@32
  char *v30; // r4@32
  int v31; // r5@32
  char v32; // r1@34
  char *v33; // r0@36
  _DWORD *v34; // r10@37
  const void **v35; // r0@38
  int v36; // r7@38
  _DWORD *v37; // r6@38
  int *v38; // r6@38
  int v39; // t1@38
  char *v40; // r4@38
  int v41; // r5@38
  char v42; // r1@40
  char *v43; // r0@42
  char *v44; // r4@42
  int v45; // r5@42
  char v46; // r1@44
  char *v47; // r0@46
  char *v48; // r0@47
  int v49; // r6@50
  const void **v50; // r0@53
  char *v51; // r7@53
  int v52; // r4@53
  _DWORD *v53; // r9@53
  int *v54; // r9@53
  int v55; // t1@53
  char *v56; // r5@53
  int v57; // r6@53
  char v58; // r1@55
  char *v59; // r0@57
  char *v60; // r0@58
  int v61; // r4@60
  char v62; // r1@62
  int v63; // r6@63
  char *v64; // r10@67
  int v65; // r5@67
  char v66; // r1@69
  char *v67; // r0@71
  char *v68; // r0@76
  int i; // r6@76
  int v70; // r5@78
  char v71; // r1@80
  char *v72; // r0@82
  char *v73; // r5@82
  int v74; // r4@82
  char v75; // r1@84
  char *v76; // r0@86
  int v77; // r4@86
  char v78; // r1@88
  char *v79; // r0@90
  int v80; // r4@94
  char v81; // r1@96
  unsigned int *v82; // r2@98
  signed int v83; // r1@100
  void *v84; // r0@106
  char *v85; // r0@110
  int v86; // r5@117
  char v87; // r1@119
  char *v88; // r0@121
  char *v89; // r4@121
  int v90; // r5@121
  char v91; // r1@123
  char *v92; // r0@125
  void *v93; // r0@125
  void *v94; // r4@126
  void *v95; // r6@126
  unsigned int *v96; // r2@128
  signed int v97; // r1@130
  int *v98; // r0@136
  unsigned int *v99; // r1@142
  signed int v100; // r0@144
  unsigned int *v101; // r2@146
  signed int v102; // r1@148
  unsigned int *v103; // r2@150
  signed int v104; // r1@152
  unsigned int *v105; // r1@154
  signed int v106; // r0@156
  unsigned int *v107; // r2@158
  signed int v108; // r1@160
  _DWORD *v109; // [sp+4h] [bp-ACh]@64
  int v110; // [sp+8h] [bp-A8h]@1
  char *v111; // [sp+Ch] [bp-A4h]@53
  int v112; // [sp+10h] [bp-A0h]@98
  int v113; // [sp+14h] [bp-9Ch]@106
  char *v114; // [sp+74h] [bp-3Ch]@38
  int v115; // [sp+78h] [bp-38h]@6
  _BYTE **v116; // [sp+7Ch] [bp-34h]@1
  _BYTE **v117; // [sp+80h] [bp-30h]@1
  int v118; // [sp+84h] [bp-2Ch]@1

  v3 = a3;
  v4 = (int *)(a3 + 20);
  v110 = a1;
  v5 = a2;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  j_Util::splitString((unsigned int *)(a3 + 20), 32, (int)&v116);
  if ( v117 != v116 && j_Util::compareNoCase(*((_DWORD *)*v116 - 3), *v116, 5, "[EDU]") )
    goto LABEL_126;
  v6 = *(_BYTE **)(v3 + 96);
  if ( *((_DWORD *)v6 - 3) && *v6 == 91 )
  {
    v7 = sub_21E77E4((int *)(v3 + 96), 93, 0) + 1;
    v8 = *(_DWORD *)(*(_DWORD *)(v3 + 96) - 12);
    if ( v8 < (unsigned int)v7 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", (int)v7, v8);
    sub_21E9040((void **)&v115, (int *)(v3 + 96), (unsigned int)v7, 0xFFFFFFFF);
  }
  else
    sub_21E8AF4(&v115, (int *)(v3 + 96));
  if ( *(_DWORD *)(v115 - 12) )
    sub_21CBF38((char *)(v5 + 8), (int)"<h3><p id=\"", 11);
    v9 = sub_21CBF38((char *)(v5 + 8), *(_DWORD *)v3, *(_DWORD *)(*(_DWORD *)v3 - 12));
    sub_21CBF38(v9, (int)"\">", 2);
    v10 = sub_21CBF38(v9, v115, *(_DWORD *)(v115 - 12));
    sub_21CBF38(v10, (int)"</p></h3>", 9);
    v11 = *(_DWORD *)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12) + 124];
    if ( !v11 )
      sub_21E5824();
    if ( *(_BYTE *)(v11 + 28) )
    {
      v12 = *(_BYTE *)(v11 + 39);
    }
    else
      sub_21B50F0(v11);
      v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v11 + 24))(v11, 10);
    v14 = sub_21CBC4C(v10, v12);
    v15 = sub_21CB78C(v14);
    v16 = *(_DWORD *)&v15[*(_DWORD *)(*(_DWORD *)v15 - 12) + 124];
    if ( !v16 )
    if ( *(_BYTE *)(v16 + 28) )
      v17 = *(_BYTE *)(v16 + 39);
      sub_21B50F0(v16);
      v17 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 24))(v16, 10);
    v18 = sub_21CBC4C(v15, v17);
    sub_21CB78C(v18);
    v13 = 1;
    v13 = 0;
  if ( *(_DWORD *)(*v4 - 12) )
    sub_21CBF38((char *)(v5 + 8), (int)"<h4>Description</h4>", 20);
    v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 8) - 12) + v5 + 8 + 124);
    if ( !v19 )
    if ( *(_BYTE *)(v19 + 28) )
      v20 = *(_BYTE *)(v19 + 39);
      sub_21B50F0(v19);
      v20 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v19 + 24))(v19, 10);
    v21 = sub_21CBC4C((char *)(v5 + 8), v20);
    v22 = sub_21CB78C(v21);
    v23 = *(_DWORD *)&v22[*(_DWORD *)(*(_DWORD *)v22 - 12) + 124];
    if ( !v23 )
    if ( *(_BYTE *)(v23 + 28) )
      v24 = *(_BYTE *)(v23 + 39);
      sub_21B50F0(v23);
      v24 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v23 + 24))(v23, 10);
    v25 = sub_21CBC4C(v22, v24);
    sub_21CB78C(v25);
    v26 = sub_21CBF38((char *)(v5 + 8), *v4, *(_DWORD *)(*v4 - 12));
    v27 = *(_DWORD *)&v26[*(_DWORD *)(*(_DWORD *)v26 - 12) + 124];
    if ( !v27 )
    if ( *(_BYTE *)(v27 + 28) )
      v28 = *(_BYTE *)(v27 + 39);
      sub_21B50F0(v27);
      v28 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v27 + 24))(v27, 10);
    v29 = sub_21CBC4C(v26, v28);
    v30 = sub_21CB78C(v29);
    v31 = *(_DWORD *)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12) + 124];
    if ( !v31 )
    if ( *(_BYTE *)(v31 + 28) )
      v32 = *(_BYTE *)(v31 + 39);
      sub_21B50F0(v31);
      v32 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v31 + 24))(v31, 10);
    v33 = sub_21CBC4C(v30, v32);
    sub_21CB78C(v33);
  v34 = (_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(v3 + 68) )
    v114 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v114, *(_DWORD *)(*(_DWORD *)(v3 + 24) - 12) + 4);
    sub_21E7408((const void **)&v114, "<h4>", 4u);
    sub_21E72F0((const void **)&v114, (const void **)(v3 + 24));
    v35 = sub_21E7408((const void **)&v114, "</h4>", 5u);
    v36 = (int)*v35;
    v37 = *v35;
    *v35 = &unk_28898CC;
    v39 = *(v37 - 3);
    v38 = v37 - 3;
    v40 = sub_21CBF38((char *)(v5 + 8), v36, v39);
    v41 = *(_DWORD *)&v40[*(_DWORD *)(*(_DWORD *)v40 - 12) + 124];
    if ( !v41 )
    if ( *(_BYTE *)(v41 + 28) )
      v42 = *(_BYTE *)(v41 + 39);
      sub_21B50F0(v41);
      v42 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v41 + 24))(v41, 10);
    v43 = sub_21CBC4C(v40, v42);
    v44 = sub_21CB78C(v43);
    v45 = *(_DWORD *)&v44[*(_DWORD *)(*(_DWORD *)v44 - 12) + 124];
    if ( !v45 )
    if ( *(_BYTE *)(v45 + 28) )
      v46 = *(_BYTE *)(v45 + 39);
      sub_21B50F0(v45);
      v46 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v45 + 24))(v45, 10);
    v47 = sub_21CBC4C(v44, v46);
    sub_21CB78C(v47);
    if ( v38 != &dword_28898C0 )
      v99 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
      }
      else
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v48 = v114 - 12;
    if ( (int *)(v114 - 12) != &dword_28898C0 )
      v101 = (unsigned int *)(v114 - 4);
          v102 = __ldrex(v101);
        while ( __strex(v102 - 1, v101) );
        v102 = (*v101)--;
      if ( v102 <= 0 )
        j_j_j_j__ZdlPv_9(v48);
    if ( *(_BYTE *)(v3 + 8) )
      j_DocumentationSystem::printHTMLTable(v110, v5, v3 + 4);
LABEL_51:
      v13 = 1;
      goto LABEL_52;
    v49 = *(_DWORD *)(v3 + 60);
    if ( v49 == v3 + 52 )
      goto LABEL_51;
    do
      sub_21E8AF4(&v112, (int *)(v49 + 16));
      j_DocumentationSystem::Node::Node((int)&v113, v49 + 20);
      j_DocumentationSystem::printNodeHTML(v110, v5, (int)&v112);
      j_DocumentationSystem::Node::~Node((int)&v113);
      v84 = (void *)(v112 - 12);
      if ( (int *)(v112 - 12) != &dword_28898C0 )
        v82 = (unsigned int *)(v112 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
        }
        else
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v84);
      v49 = sub_21D4820(v49);
    while ( v49 != v3 + 52 );
    v34 = (_DWORD *)(v3 + 4);
LABEL_52:
  if ( *(_DWORD *)(v3 + 92) )
    v111 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v111, *(_DWORD *)(*(_DWORD *)(v3 + 44) - 12) + 4);
    sub_21E7408((const void **)&v111, "<h4>", 4u);
    sub_21E72F0((const void **)&v111, (const void **)(v3 + 44));
    v50 = sub_21E7408((const void **)&v111, "</h4>", 5u);
    v51 = (char *)(v5 + 8);
    v52 = (int)*v50;
    v53 = *v50;
    *v50 = &unk_28898CC;
    v55 = *(v53 - 3);
    v54 = v53 - 3;
    v56 = sub_21CBF38((char *)(v5 + 8), v52, v55);
    v57 = *(_DWORD *)&v56[*(_DWORD *)(*(_DWORD *)v56 - 12) + 124];
    if ( !v57 )
    if ( *(_BYTE *)(v57 + 28) )
      v58 = *(_BYTE *)(v57 + 39);
      sub_21B50F0(v57);
      v58 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v57 + 24))(v57, 10);
    v59 = sub_21CBC4C(v56, v58);
    sub_21CB78C(v59);
    if ( v54 != &dword_28898C0 )
      v105 = (unsigned int *)(v52 - 4);
          v106 = __ldrex(v105);
        while ( __strex(v106 - 1, v105) );
        v106 = (*v105)--;
      if ( v106 <= 0 )
        j_j_j_j__ZdlPv_9(v54);
    v60 = v111 - 12;
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v107 = (unsigned int *)(v111 - 4);
          v108 = __ldrex(v107);
        while ( __strex(v108 - 1, v107) );
        v108 = (*v107)--;
      if ( v108 <= 0 )
        j_j_j_j__ZdlPv_9(v60);
    if ( *(_BYTE *)(v3 + 9) )
      sub_21CBF38((char *)(v5 + 8), (int)"<table border=\"1\">", 18);
      v61 = *(_DWORD *)&v51[*(_DWORD *)(*(_DWORD *)v51 - 12) + 124];
      if ( !v61 )
        sub_21E5824();
      if ( *(_BYTE *)(v61 + 28) )
        v62 = *(_BYTE *)(v61 + 39);
        sub_21B50F0(v61);
        v62 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v61 + 24))(v61, 10);
      v68 = sub_21CBC4C((char *)(v5 + 8), v62);
      sub_21CB78C(v68);
      for ( i = *(_DWORD *)(v3 + 84); i != v3 + 76; i = sub_21D4820(i) )
        sub_21CBF38((char *)(v5 + 8), (int)"<tr>", 4);
        v70 = *(_DWORD *)&v51[*(_DWORD *)(*(_DWORD *)v51 - 12) + 124];
        if ( !v70 )
          sub_21E5824();
        if ( *(_BYTE *)(v70 + 28) )
          v71 = *(_BYTE *)(v70 + 39);
          sub_21B50F0(v70);
          v71 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v70 + 24))(v70, 10);
        v72 = sub_21CBC4C((char *)(v5 + 8), v71);
        sub_21CB78C(v72);
        sub_21CBF38((char *)(v5 + 8), (int)"<td>", 4);
        v73 = sub_21CBF38((char *)(v5 + 8), *(_DWORD *)(i + 20), *(_DWORD *)(*(_DWORD *)(i + 20) - 12));
        v74 = *(_DWORD *)&v73[*(_DWORD *)(*(_DWORD *)v73 - 12) + 124];
        if ( !v74 )
        if ( *(_BYTE *)(v74 + 28) )
          v75 = *(_BYTE *)(v74 + 39);
          sub_21B50F0(v74);
          v75 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v74 + 24))(v74, 10);
        v76 = sub_21CBC4C(v73, v75);
        sub_21CB78C(v76);
        sub_21CBF38((char *)(v5 + 8), (int)"</tr>", 5);
        v77 = *(_DWORD *)&v51[*(_DWORD *)(*(_DWORD *)v51 - 12) + 124];
        if ( !v77 )
        if ( *(_BYTE *)(v77 + 28) )
          v78 = *(_BYTE *)(v77 + 39);
          sub_21B50F0(v77);
          v78 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v77 + 24))(v77, 10);
        v79 = sub_21CBC4C((char *)(v5 + 8), v78);
        sub_21CB78C(v79);
      sub_21CBF38((char *)(v5 + 8), (int)"</table>", 8);
      v80 = *(_DWORD *)&v51[*(_DWORD *)(*(_DWORD *)v51 - 12) + 124];
      if ( !v80 )
      if ( *(_BYTE *)(v80 + 28) )
        v81 = *(_BYTE *)(v80 + 39);
        sub_21B50F0(v80);
        v81 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v80 + 24))(v80, 10);
      v85 = sub_21CBC4C((char *)(v5 + 8), v81);
      sub_21CB78C(v85);
      v63 = *(_DWORD *)(v3 + 84);
      if ( v63 == v3 + 76 )
        v13 = 1;
        v109 = v34;
          if ( sub_21E7D6C((const void **)(v63 + 20), (const char *)&unk_257BC67)
            && sub_21E7D6C((const void **)(v63 + 20), "unknown") )
          {
            v64 = sub_21CBF38((char *)(v5 + 8), *(_DWORD *)(v63 + 20), *(_DWORD *)(*(_DWORD *)(v63 + 20) - 12));
            sub_21CBF38(v64, (int)"</br>", 5);
            v65 = *(_DWORD *)&v64[*(_DWORD *)(*(_DWORD *)v64 - 12) + 124];
            if ( !v65 )
              sub_21E5824();
            if ( *(_BYTE *)(v65 + 28) )
            {
              v66 = *(_BYTE *)(v65 + 39);
            }
            else
              sub_21B50F0(v65);
              v66 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v65 + 24))(v65, 10);
            v67 = sub_21CBC4C(v64, v66);
            sub_21CB78C(v67);
          }
          v63 = sub_21D4820(v63);
        while ( v63 != v3 + 76 );
        v34 = v109;
  if ( *v34 == 1 )
    if ( !*(_BYTE *)(v3 + 8) )
      goto LABEL_117;
LABEL_115:
    if ( !(v13 ^ 1) )
      sub_21CBF38((char *)(v5 + 8), (int)"<a href=\"#Index\">Back to top</a>", 32);
    goto LABEL_117;
  if ( *v34 >= 2u )
    goto LABEL_115;
LABEL_117:
  sub_21CBF38((char *)(v5 + 8), (int)"<br><br>", 8);
  v86 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 8) - 12) + v5 + 8 + 124);
  if ( !v86 )
    sub_21E5824();
  if ( *(_BYTE *)(v86 + 28) )
    v87 = *(_BYTE *)(v86 + 39);
    sub_21B50F0(v86);
    v87 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v86 + 24))(v86, 10);
  v88 = sub_21CBC4C((char *)(v5 + 8), v87);
  v89 = sub_21CB78C(v88);
  v90 = *(_DWORD *)&v89[*(_DWORD *)(*(_DWORD *)v89 - 12) + 124];
  if ( !v90 )
  if ( *(_BYTE *)(v90 + 28) )
    v91 = *(_BYTE *)(v90 + 39);
    sub_21B50F0(v90);
    v91 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v90 + 24))(v90, 10);
  v92 = sub_21CBC4C(v89, v91);
  sub_21CB78C(v92);
  v93 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v115 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v93);
LABEL_126:
  v95 = v117;
  v94 = v116;
  if ( v116 != v117 )
      v98 = (int *)(*(_DWORD *)v94 - 12);
      if ( v98 != &dword_28898C0 )
        v96 = (unsigned int *)(*(_DWORD *)v94 - 4);
            v97 = __ldrex(v96);
          while ( __strex(v97 - 1, v96) );
          v97 = (*v96)--;
        if ( v97 <= 0 )
          j_j_j_j__ZdlPv_9(v98);
      v94 = (char *)v94 + 4;
    while ( v94 != v95 );
    v94 = v116;
  if ( v94 )
    j_operator delete(v94);
}


int __fastcall DocumentationSystem::Node::Node(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r8@1
  __int16 v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r1@1
  _DWORD *v8; // r0@2
  _DWORD *v9; // r2@2
  _DWORD *v10; // r1@3
  _DWORD *v11; // r1@5
  int v12; // r2@7
  int v13; // r1@7
  _DWORD *v14; // r0@8
  _DWORD *v15; // r2@8
  _DWORD *v16; // r1@9
  _DWORD *v17; // r1@11

  v2 = a2;
  v3 = a1;
  v4 = *(_WORD *)(a2 + 4);
  v5 = *(_DWORD *)a2;
  *(_BYTE *)(v3 + 6) = *(_BYTE *)(v2 + 6);
  *(_WORD *)(v3 + 4) = v4;
  *(_DWORD *)v3 = v5;
  sub_21E8AF4((int *)(v3 + 8), (int *)(v2 + 8));
  sub_21E8AF4((int *)(v3 + 12), (int *)(v2 + 12));
  sub_21E8AF4((int *)(v3 + 16), (int *)(v2 + 16));
  sub_21E8AF4((int *)(v3 + 20), (int *)(v2 + 20));
  sub_21E8AF4((int *)(v3 + 24), (int *)(v2 + 24));
  sub_21E8AF4((int *)(v3 + 28), (int *)(v2 + 28));
  sub_21E8AF4((int *)(v3 + 32), (int *)(v2 + 32));
  sub_21E8AF4((int *)(v3 + 36), (int *)(v2 + 36));
  sub_21E8AF4((int *)(v3 + 40), (int *)(v2 + 40));
  *(_DWORD *)(v3 + 48) = 0;
  v6 = v3 + 48;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 8) = v6;
  *(_DWORD *)(v6 + 12) = v6;
  v7 = *(_DWORD *)(v2 + 52);
  if ( v7 )
  {
    v8 = j_std::_Rb_tree<std::string,std::pair<std::string const,DocumentationSystem::Node>,std::_Select1st<std::pair<std::string const,DocumentationSystem::Node>>,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::_M_copy(
           v3 + 44,
           v7,
           v6);
    v9 = v8;
    *(_DWORD *)(v3 + 52) = v8;
    do
    {
      v10 = v9;
      v9 = (_DWORD *)v9[2];
    }
    while ( v9 );
    *(_DWORD *)(v3 + 56) = v10;
      v11 = v8;
      v8 = (_DWORD *)v8[3];
    while ( v8 );
    *(_DWORD *)(v3 + 60) = v11;
    *(_DWORD *)(v3 + 64) = *(_DWORD *)(v2 + 64);
  }
  *(_DWORD *)(v3 + 72) = 0;
  v12 = v3 + 72;
  *(_DWORD *)(v12 + 4) = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 12) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 8) = v12;
  *(_DWORD *)(v12 + 12) = v12;
  v13 = *(_DWORD *)(v2 + 76);
  if ( v13 )
    v14 = j_std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
            v3 + 68,
            v13,
            v12);
    v15 = v14;
    *(_DWORD *)(v3 + 76) = v14;
      v16 = v15;
      v15 = (_DWORD *)v15[2];
    while ( v15 );
    *(_DWORD *)(v3 + 80) = v16;
      v17 = v14;
      v14 = (_DWORD *)v14[3];
    while ( v14 );
    *(_DWORD *)(v3 + 84) = v17;
    *(_DWORD *)(v3 + 88) = *(_DWORD *)(v2 + 88);
  sub_21E8AF4((int *)(v3 + 92), (int *)(v2 + 92));
  return v3;
}


void __fastcall DocumentationSystem::printNode(int a1, int a2, int a3)
{
  DocumentationSystem::printNode(a1, a2, a3);
}


int __fastcall DocumentationSystem::Node::~Node(int a1)
{
  int v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  int v16; // r1@8
  void *v17; // r0@8
  int v18; // r1@9
  void *v19; // r0@9
  int v20; // r1@10
  void *v21; // r0@10
  unsigned int *v23; // r2@12
  signed int v24; // r1@14
  unsigned int *v25; // r2@16
  signed int v26; // r1@18
  unsigned int *v27; // r2@20
  signed int v28; // r1@22
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  unsigned int *v39; // r2@44
  signed int v40; // r1@46
  unsigned int *v41; // r2@48
  signed int v42; // r1@50

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 92);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    v1 + 68,
    *(_DWORD *)(v1 + 76));
  j_std::_Rb_tree<std::string,std::pair<std::string const,DocumentationSystem::Node>,std::_Select1st<std::pair<std::string const,DocumentationSystem::Node>>,std::less<std::string>,std::allocator<std::pair<std::string const,DocumentationSystem::Node>>>::_M_erase(
    v1 + 44,
    *(_DWORD *)(v1 + 52));
  v4 = *(_DWORD *)(v1 + 40);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v4 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *(_DWORD *)(v1 + 36);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v6 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *(_DWORD *)(v1 + 32);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v8 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *(_DWORD *)(v1 + 28);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v10 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *(_DWORD *)(v1 + 24);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v12 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *(_DWORD *)(v1 + 20);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v14 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *(_DWORD *)(v1 + 16);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v16 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *(_DWORD *)(v1 + 12);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v18 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *(_DWORD *)(v1 + 8);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v20 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  return v1;
}


int __fastcall DocumentationSystem::Node::getFullName(int a1)
{
  return a1 + 92;
}


char *__fastcall DocumentationSystem::copyVanilla(DocumentationSystem *this)
{
  int *v1; // r0@2
  int v2; // r4@4
  char *v3; // r0@4
  char *v4; // r0@5
  int v5; // r1@6
  int v6; // r1@6
  const void **v7; // r0@6
  __int64 v8; // kr00_8@6
  unsigned int v9; // r1@6
  const void **v10; // r0@8
  const void **v11; // r0@10
  __int64 v12; // kr08_8@10
  unsigned int v13; // r1@10
  const void **v14; // r0@12
  void *v15; // r0@14
  void *v16; // r0@15
  char *v17; // r0@16
  void *v18; // r0@17
  void *v19; // r0@18
  void *v20; // r0@19
  int *v21; // r4@20
  int v22; // r6@20
  int v23; // r1@20
  char *v24; // r0@20
  int *v25; // r6@21
  int v26; // r7@21
  __int64 v27; // r1@21
  char *v28; // r0@21
  int v29; // r4@46
  unsigned int v30; // r0@46
  unsigned int v31; // r7@46
  unsigned int v32; // r0@47
  int v33; // r0@52
  int v34; // r4@58
  unsigned int v35; // r0@58
  unsigned int v36; // r7@58
  unsigned int v37; // r0@59
  int v38; // r0@64
  int *v39; // r0@67
  int *v40; // r2@67
  int *v41; // r1@68
  int *v42; // r1@70
  int *v43; // r0@73
  int *v44; // r2@73
  int *v45; // r1@74
  int *v46; // r1@76
  void *v47; // r0@78
  void *v48; // r0@79
  int v49; // r1@94
  int v50; // r10@100
  unsigned int v51; // r0@100
  unsigned int v52; // r7@100
  unsigned int v53; // r0@101
  int v54; // r0@106
  int v55; // r6@112
  unsigned int v56; // r0@112
  unsigned int v57; // r7@112
  unsigned int v58; // r0@113
  int v59; // r0@118
  int *v60; // r0@121
  int *v61; // r2@121
  int *v62; // r1@122
  int *v63; // r1@124
  int *v64; // r0@127
  int *v65; // r2@127
  int *v66; // r1@128
  int *v67; // r1@130
  void *v68; // r0@132
  void *v69; // r0@133
  char *v70; // r0@136
  int *v71; // r0@137
  char *v72; // r0@138
  char *result; // r0@139
  unsigned int *v74; // r2@141
  signed int v75; // r1@143
  unsigned int *v76; // r2@145
  signed int v77; // r1@147
  unsigned int *v78; // r2@149
  signed int v79; // r1@151
  unsigned int *v80; // r2@153
  signed int v81; // r1@155
  unsigned int *v82; // r2@157
  signed int v83; // r1@159
  unsigned int *v84; // r2@161
  signed int v85; // r1@163
  unsigned int *v86; // r2@165
  signed int v87; // r1@167
  unsigned int *v88; // r2@169
  signed int v89; // r1@171
  unsigned int *v90; // r2@173
  signed int v91; // r1@175
  unsigned int *v92; // r2@177
  signed int v93; // r1@179
  unsigned int *v94; // r2@181
  signed int v95; // r1@183
  unsigned int *v96; // r2@185
  signed int v97; // r1@187
  unsigned int *v98; // r2@189
  signed int v99; // r1@191
  unsigned int *v100; // r2@193
  signed int v101; // r1@195
  unsigned int *v102; // r2@197
  signed int v103; // r1@199
  unsigned int *v104; // r2@201
  signed int v105; // r1@203
  unsigned int *v106; // r2@205
  signed int v107; // r1@207
  __int64 v108; // [sp+14h] [bp-BE44h]@134
  int v109; // [sp+18h] [bp-BE40h]@134
  char v110; // [sp+1Ch] [bp-BE3Ch]@134
  void (*v111)(void); // [sp+24h] [bp-BE34h]@134
  char v112; // [sp+30h] [bp-BE28h]@121
  int v113; // [sp+34h] [bp-BE24h]@120
  int *v114; // [sp+38h] [bp-BE20h]@120
  int *v115; // [sp+3Ch] [bp-BE1Ch]@120
  int *v116; // [sp+40h] [bp-BE18h]@120
  int v117; // [sp+44h] [bp-BE14h]@120
  int v118; // [sp+48h] [bp-BE10h]@127
  int v119; // [sp+4Ch] [bp-BE0Ch]@126
  int *v120; // [sp+50h] [bp-BE08h]@126
  int *v121; // [sp+54h] [bp-BE04h]@126
  int *v122; // [sp+58h] [bp-BE00h]@126
  int v123; // [sp+5Ch] [bp-BDFCh]@126
  __int64 v124; // [sp+60h] [bp-BDF8h]@132
  int v125; // [sp+68h] [bp-BDF0h]@132
  int v126; // [sp+6Ch] [bp-BDECh]@120
  int v127; // [sp+70h] [bp-BDE8h]@112
  __int64 v128; // [sp+74h] [bp-BDE4h]@110
  int v129; // [sp+78h] [bp-BDE0h]@110
  char v130; // [sp+7Ch] [bp-BDDCh]@110
  void (*v131)(void); // [sp+84h] [bp-BDD4h]@110
  char *v132; // [sp+90h] [bp-BDC8h]@108
  int v133; // [sp+94h] [bp-BDC4h]@108
  char v134; // [sp+98h] [bp-BDC0h]@108
  void (*v135)(void); // [sp+A0h] [bp-BDB8h]@108
  int *v136; // [sp+ACh] [bp-BDACh]@98
  int v137; // [sp+B0h] [bp-BDA8h]@98
  char v138; // [sp+B4h] [bp-BDA4h]@98
  void (*v139)(void); // [sp+BCh] [bp-BD9Ch]@98
  int *v140; // [sp+C8h] [bp-BD90h]@96
  int v141; // [sp+CCh] [bp-BD8Ch]@96
  char v142; // [sp+D0h] [bp-BD88h]@96
  void (*v143)(void); // [sp+D8h] [bp-BD80h]@96
  __int64 v144; // [sp+E4h] [bp-BD74h]@94
  int v145; // [sp+E8h] [bp-BD70h]@94
  int *v146; // [sp+ECh] [bp-BD6Ch]@94
  int v147; // [sp+F0h] [bp-BD68h]@94
  char v148; // [sp+F4h] [bp-BD64h]@94
  void (*v149)(void); // [sp+FCh] [bp-BD5Ch]@94
  __int64 v150; // [sp+108h] [bp-BD50h]@92
  int v151; // [sp+10Ch] [bp-BD4Ch]@92
  __int64 v152; // [sp+110h] [bp-BD48h]@92
  int v153; // [sp+114h] [bp-BD44h]@92
  char v154; // [sp+118h] [bp-BD40h]@92
  void (*v155)(void); // [sp+120h] [bp-BD38h]@92
  __int64 v156; // [sp+12Ch] [bp-BD2Ch]@90
  int v157; // [sp+130h] [bp-BD28h]@90
  __int64 v158; // [sp+134h] [bp-BD24h]@90
  int v159; // [sp+138h] [bp-BD20h]@90
  char v160; // [sp+13Ch] [bp-BD1Ch]@90
  void (*v161)(void); // [sp+144h] [bp-BD14h]@90
  __int64 v162; // [sp+150h] [bp-BD08h]@88
  int v163; // [sp+154h] [bp-BD04h]@88
  __int64 v164; // [sp+158h] [bp-BD00h]@88
  int v165; // [sp+15Ch] [bp-BCFCh]@88
  char v166; // [sp+160h] [bp-BCF8h]@88
  void (*v167)(void); // [sp+168h] [bp-BCF0h]@88
  __int64 v168; // [sp+174h] [bp-BCE4h]@86
  int v169; // [sp+178h] [bp-BCE0h]@86
  __int64 v170; // [sp+17Ch] [bp-BCDCh]@86
  int v171; // [sp+180h] [bp-BCD8h]@86
  char v172; // [sp+184h] [bp-BCD4h]@86
  void (*v173)(void); // [sp+18Ch] [bp-BCCCh]@86
  __int64 v174; // [sp+198h] [bp-BCC0h]@84
  int v175; // [sp+19Ch] [bp-BCBCh]@84
  __int64 v176; // [sp+1A0h] [bp-BCB8h]@84
  int v177; // [sp+1A4h] [bp-BCB4h]@84
  char v178; // [sp+1A8h] [bp-BCB0h]@84
  void (*v179)(void); // [sp+1B0h] [bp-BCA8h]@84
  __int64 v180; // [sp+1BCh] [bp-BC9Ch]@82
  int v181; // [sp+1C0h] [bp-BC98h]@82
  char v182; // [sp+1C4h] [bp-BC94h]@82
  void (*v183)(void); // [sp+1CCh] [bp-BC8Ch]@82
  __int64 v184; // [sp+1D8h] [bp-BC80h]@80
  int v185; // [sp+1DCh] [bp-BC7Ch]@80
  char v186; // [sp+1E0h] [bp-BC78h]@80
  void (*v187)(void); // [sp+1E8h] [bp-BC70h]@80
  char v188; // [sp+1F4h] [bp-BC64h]@67
  int v189; // [sp+1F8h] [bp-BC60h]@66
  int *v190; // [sp+1FCh] [bp-BC5Ch]@66
  int *v191; // [sp+200h] [bp-BC58h]@66
  int *v192; // [sp+204h] [bp-BC54h]@66
  int v193; // [sp+208h] [bp-BC50h]@66
  int v194; // [sp+20Ch] [bp-BC4Ch]@73
  int v195; // [sp+210h] [bp-BC48h]@72
  int *v196; // [sp+214h] [bp-BC44h]@72
  int *v197; // [sp+218h] [bp-BC40h]@72
  int *v198; // [sp+21Ch] [bp-BC3Ch]@72
  int v199; // [sp+220h] [bp-BC38h]@72
  __int64 v200; // [sp+224h] [bp-BC34h]@78
  int v201; // [sp+22Ch] [bp-BC2Ch]@78
  int v202; // [sp+230h] [bp-BC28h]@66
  int v203; // [sp+234h] [bp-BC24h]@58
  __int64 v204; // [sp+238h] [bp-BC20h]@56
  int v205; // [sp+23Ch] [bp-BC1Ch]@56
  char v206; // [sp+240h] [bp-BC18h]@56
  void (*v207)(void); // [sp+248h] [bp-BC10h]@56
  __int64 v208; // [sp+254h] [bp-BC04h]@54
  int v209; // [sp+258h] [bp-BC00h]@54
  char v210; // [sp+25Ch] [bp-BBFCh]@54
  void (*v211)(void); // [sp+264h] [bp-BBF4h]@54
  __int64 v212; // [sp+270h] [bp-BBE8h]@44
  int v213; // [sp+274h] [bp-BBE4h]@44
  char v214; // [sp+278h] [bp-BBE0h]@44
  void (*v215)(void); // [sp+280h] [bp-BBD8h]@44
  __int64 v216; // [sp+28Ch] [bp-BBCCh]@42
  int v217; // [sp+290h] [bp-BBC8h]@42
  char v218; // [sp+294h] [bp-BBC4h]@42
  void (*v219)(void); // [sp+29Ch] [bp-BBBCh]@42
  __int64 v220; // [sp+2A8h] [bp-BBB0h]@40
  int v221; // [sp+2ACh] [bp-BBACh]@40
  __int64 v222; // [sp+2B0h] [bp-BBA8h]@40
  int v223; // [sp+2B4h] [bp-BBA4h]@40
  char v224; // [sp+2B8h] [bp-BBA0h]@40
  void (*v225)(void); // [sp+2C0h] [bp-BB98h]@40
  __int64 v226; // [sp+2CCh] [bp-BB8Ch]@38
  int v227; // [sp+2D0h] [bp-BB88h]@38
  __int64 v228; // [sp+2D4h] [bp-BB84h]@38
  int v229; // [sp+2D8h] [bp-BB80h]@38
  char v230; // [sp+2DCh] [bp-BB7Ch]@38
  void (*v231)(void); // [sp+2E4h] [bp-BB74h]@38
  __int64 v232; // [sp+2F0h] [bp-BB68h]@36
  int v233; // [sp+2F4h] [bp-BB64h]@36
  __int64 v234; // [sp+2F8h] [bp-BB60h]@36
  int v235; // [sp+2FCh] [bp-BB5Ch]@36
  char v236; // [sp+300h] [bp-BB58h]@36
  void (*v237)(void); // [sp+308h] [bp-BB50h]@36
  __int64 v238; // [sp+314h] [bp-BB44h]@34
  int v239; // [sp+318h] [bp-BB40h]@34
  __int64 v240; // [sp+31Ch] [bp-BB3Ch]@34
  int v241; // [sp+320h] [bp-BB38h]@34
  char v242; // [sp+324h] [bp-BB34h]@34
  void (*v243)(void); // [sp+32Ch] [bp-BB2Ch]@34
  __int64 v244; // [sp+338h] [bp-BB20h]@32
  int v245; // [sp+33Ch] [bp-BB1Ch]@32
  __int64 v246; // [sp+340h] [bp-BB18h]@32
  int v247; // [sp+344h] [bp-BB14h]@32
  char v248; // [sp+348h] [bp-BB10h]@32
  void (*v249)(void); // [sp+350h] [bp-BB08h]@32
  __int64 v250; // [sp+35Ch] [bp-BAFCh]@30
  int v251; // [sp+360h] [bp-BAF8h]@30
  __int64 v252; // [sp+364h] [bp-BAF4h]@30
  int v253; // [sp+368h] [bp-BAF0h]@30
  char v254; // [sp+36Ch] [bp-BAECh]@30
  void (*v255)(void); // [sp+374h] [bp-BAE4h]@30
  __int64 v256; // [sp+380h] [bp-BAD8h]@28
  int v257; // [sp+384h] [bp-BAD4h]@28
  __int64 v258; // [sp+388h] [bp-BAD0h]@28
  int v259; // [sp+38Ch] [bp-BACCh]@28
  char v260; // [sp+390h] [bp-BAC8h]@28
  void (*v261)(void); // [sp+398h] [bp-BAC0h]@28
  __int64 v262; // [sp+3A4h] [bp-BAB4h]@26
  int v263; // [sp+3A8h] [bp-BAB0h]@26
  __int64 v264; // [sp+3ACh] [bp-BAACh]@26
  int v265; // [sp+3B0h] [bp-BAA8h]@26
  char v266; // [sp+3B4h] [bp-BAA4h]@26
  void (*v267)(void); // [sp+3BCh] [bp-BA9Ch]@26
  __int64 v268; // [sp+3C8h] [bp-BA90h]@24
  int v269; // [sp+3CCh] [bp-BA8Ch]@24
  __int64 v270; // [sp+3D0h] [bp-BA88h]@24
  int v271; // [sp+3D4h] [bp-BA84h]@24
  char v272; // [sp+3D8h] [bp-BA80h]@24
  void (*v273)(void); // [sp+3E0h] [bp-BA78h]@24
  __int64 v274; // [sp+3ECh] [bp-BA6Ch]@22
  int v275; // [sp+3F0h] [bp-BA68h]@22
  char v276; // [sp+3F4h] [bp-BA64h]@22
  void (*v277)(void); // [sp+3FCh] [bp-BA5Ch]@22
  char v278; // [sp+408h] [bp-BA50h]@22
  int v279; // [sp+410h] [bp-BA48h]@66
  int v280; // [sp+41Ch] [bp-BA3Ch]@71
  int v281; // [sp+428h] [bp-BA30h]@72
  int v282; // [sp+434h] [bp-BA24h]@77
  char v283; // [sp+438h] [bp-BA20h]@22
  int v284; // [sp+440h] [bp-BA18h]@78
  char v285; // [sp+444h] [bp-BA14h]@22
  _DWORD *v286; // [sp+44Ch] [bp-BA0Ch]@21
  const char *v287; // [sp+450h] [bp-BA08h]@20
  int v288; // [sp+454h] [bp-BA04h]@10
  int v289; // [sp+458h] [bp-BA00h]@6
  int v290; // [sp+45Ch] [bp-B9FCh]@6
  unsigned int v291; // [sp+460h] [bp-B9F8h]@6
  char *v292; // [sp+464h] [bp-B9F4h]@10
  unsigned int v293; // [sp+468h] [bp-B9F0h]@10
  _DWORD *v294; // [sp+46Ch] [bp-B9ECh]@14
  int *v295; // [sp+470h] [bp-B9E8h]@6
  char *v296; // [sp+474h] [bp-B9E4h]@4
  char *v297; // [sp+478h] [bp-B9E0h]@4
  int *v298; // [sp+47Ch] [bp-B9DCh]@4
  int *v299; // [sp+480h] [bp-B9D8h]@6
  int v300; // [sp+484h] [bp-B9D4h]@6
  const char *v301; // [sp+488h] [bp-B9D0h]@6
  int v302; // [sp+48Ch] [bp-B9CCh]@6
  const char *v303; // [sp+490h] [bp-B9C8h]@6
  int v304; // [sp+494h] [bp-B9C4h]@6
  int *v305; // [sp+498h] [bp-B9C0h]@20
  int v306; // [sp+49Ch] [bp-B9BCh]@20
  const char *v307; // [sp+4A0h] [bp-B9B8h]@20
  int v308; // [sp+4A4h] [bp-B9B4h]@20
  unsigned int v309; // [sp+4BCh] [bp-B99Ch]@112
  char v310; // [sp+4C0h] [bp-B998h]@112
  int v311; // [sp+8C0h] [bp-B598h]@112
  char v312; // [sp+8C4h] [bp-B594h]@110
  int v313; // [sp+8C8h] [bp-B590h]@110
  int v314; // [sp+CC8h] [bp-B190h]@110
  unsigned int v315; // [sp+CCCh] [bp-B18Ch]@100
  char v316; // [sp+CD0h] [bp-B188h]@100
  int v317; // [sp+10D0h] [bp-AD88h]@100
  int v318; // [sp+10D4h] [bp-AD84h]@98
  int v319; // [sp+10D8h] [bp-AD80h]@98
  int v320; // [sp+14D8h] [bp-A980h]@98
  int v321; // [sp+14DCh] [bp-A97Ch]@96
  int v322; // [sp+14E0h] [bp-A978h]@96
  int v323; // [sp+18E0h] [bp-A578h]@96
  int v324; // [sp+18E4h] [bp-A574h]@94
  int v325; // [sp+18E8h] [bp-A570h]@94
  int v326; // [sp+1CE8h] [bp-A170h]@94
  int v327; // [sp+1CECh] [bp-A16Ch]@94
  int v328; // [sp+1CF0h] [bp-A168h]@94
  int v329; // [sp+20F0h] [bp-9D68h]@94
  int v330; // [sp+20F4h] [bp-9D64h]@92
  int v331; // [sp+20F8h] [bp-9D60h]@92
  int v332; // [sp+24F8h] [bp-9960h]@92
  int v333; // [sp+24FCh] [bp-995Ch]@92
  int v334; // [sp+2500h] [bp-9958h]@92
  int v335; // [sp+2900h] [bp-9558h]@92
  int v336; // [sp+2904h] [bp-9554h]@90
  int v337; // [sp+2908h] [bp-9550h]@90
  int v338; // [sp+2D08h] [bp-9150h]@90
  int v339; // [sp+2D0Ch] [bp-914Ch]@90
  int v340; // [sp+2D10h] [bp-9148h]@90
  int v341; // [sp+3110h] [bp-8D48h]@90
  int v342; // [sp+3114h] [bp-8D44h]@88
  int v343; // [sp+3118h] [bp-8D40h]@88
  int v344; // [sp+3518h] [bp-8940h]@88
  int v345; // [sp+351Ch] [bp-893Ch]@88
  int v346; // [sp+3520h] [bp-8938h]@88
  int v347; // [sp+3920h] [bp-8538h]@88
  int v348; // [sp+3924h] [bp-8534h]@86
  int v349; // [sp+3928h] [bp-8530h]@86
  int v350; // [sp+3D28h] [bp-8130h]@86
  int v351; // [sp+3D2Ch] [bp-812Ch]@86
  int v352; // [sp+3D30h] [bp-8128h]@86
  int v353; // [sp+4130h] [bp-7D28h]@86
  int v354; // [sp+4134h] [bp-7D24h]@84
  int v355; // [sp+4138h] [bp-7D20h]@84
  int v356; // [sp+4538h] [bp-7920h]@84
  int v357; // [sp+453Ch] [bp-791Ch]@84
  int v358; // [sp+4540h] [bp-7918h]@84
  int v359; // [sp+4940h] [bp-7518h]@84
  signed int v360; // [sp+4944h] [bp-7514h]@82
  int v361; // [sp+4948h] [bp-7510h]@82
  int v362; // [sp+4D48h] [bp-7110h]@82
  signed int v363; // [sp+4D4Ch] [bp-710Ch]@58
  char v364; // [sp+4D50h] [bp-7108h]@58
  int v365; // [sp+5150h] [bp-6D08h]@58
  int v366; // [sp+5154h] [bp-6D04h]@56
  int v367; // [sp+5158h] [bp-6D00h]@56
  int v368; // [sp+5558h] [bp-6900h]@56
  signed int v369; // [sp+555Ch] [bp-68FCh]@46
  char v370; // [sp+5560h] [bp-68F8h]@46
  int v371; // [sp+5960h] [bp-64F8h]@46
  int v372; // [sp+5964h] [bp-64F4h]@44
  int v373; // [sp+5968h] [bp-64F0h]@44
  int v374; // [sp+5D68h] [bp-60F0h]@44
  int v375; // [sp+5D6Ch] [bp-60ECh]@42
  int v376; // [sp+5D70h] [bp-60E8h]@42
  int v377; // [sp+6170h] [bp-5CE8h]@42
  int v378; // [sp+6174h] [bp-5CE4h]@40
  int v379; // [sp+6178h] [bp-5CE0h]@40
  int v380; // [sp+6578h] [bp-58E0h]@40
  int v381; // [sp+657Ch] [bp-58DCh]@40
  int v382; // [sp+6580h] [bp-58D8h]@40
  int v383; // [sp+6980h] [bp-54D8h]@40
  int v384; // [sp+6984h] [bp-54D4h]@38
  int v385; // [sp+6988h] [bp-54D0h]@38
  int v386; // [sp+6D88h] [bp-50D0h]@38
  int v387; // [sp+6D8Ch] [bp-50CCh]@38
  int v388; // [sp+6D90h] [bp-50C8h]@38
  int v389; // [sp+7190h] [bp-4CC8h]@38
  int v390; // [sp+7194h] [bp-4CC4h]@36
  int v391; // [sp+7198h] [bp-4CC0h]@36
  int v392; // [sp+7598h] [bp-48C0h]@36
  int v393; // [sp+759Ch] [bp-48BCh]@36
  int v394; // [sp+75A0h] [bp-48B8h]@36
  int v395; // [sp+79A0h] [bp-44B8h]@36
  int v396; // [sp+79A4h] [bp-44B4h]@34
  int v397; // [sp+79A8h] [bp-44B0h]@34
  int v398; // [sp+7DA8h] [bp-40B0h]@34
  int v399; // [sp+7DACh] [bp-40ACh]@34
  int v400; // [sp+7DB0h] [bp-40A8h]@34
  int v401; // [sp+81B0h] [bp-3CA8h]@34
  int v402; // [sp+81B4h] [bp-3CA4h]@32
  int v403; // [sp+81B8h] [bp-3CA0h]@32
  int v404; // [sp+85B8h] [bp-38A0h]@32
  int v405; // [sp+85BCh] [bp-389Ch]@32
  int v406; // [sp+85C0h] [bp-3898h]@32
  int v407; // [sp+89C0h] [bp-3498h]@32
  int v408; // [sp+89C4h] [bp-3494h]@30
  int v409; // [sp+89C8h] [bp-3490h]@30
  int v410; // [sp+8DC8h] [bp-3090h]@30
  int v411; // [sp+8DCCh] [bp-308Ch]@30
  int v412; // [sp+8DD0h] [bp-3088h]@30
  int v413; // [sp+91D0h] [bp-2C88h]@30
  int v414; // [sp+91D4h] [bp-2C84h]@28
  int v415; // [sp+91D8h] [bp-2C80h]@28
  int v416; // [sp+95D8h] [bp-2880h]@28
  int v417; // [sp+95DCh] [bp-287Ch]@28
  int v418; // [sp+95E0h] [bp-2878h]@28
  int v419; // [sp+99E0h] [bp-2478h]@28
  int v420; // [sp+99E4h] [bp-2474h]@26
  int v421; // [sp+99E8h] [bp-2470h]@26
  int v422; // [sp+9DE8h] [bp-2070h]@26
  int v423; // [sp+9DECh] [bp-206Ch]@26
  int v424; // [sp+9DF0h] [bp-2068h]@26
  int v425; // [sp+A1F0h] [bp-1C68h]@26
  int v426; // [sp+A1F4h] [bp-1C64h]@24
  int v427; // [sp+A1F8h] [bp-1C60h]@24
  int v428; // [sp+A5F8h] [bp-1860h]@24
  int v429; // [sp+A5FCh] [bp-185Ch]@24
  int v430; // [sp+A600h] [bp-1858h]@24
  int v431; // [sp+AA00h] [bp-1458h]@24
  signed int v432; // [sp+AA04h] [bp-1454h]@22
  int v433; // [sp+AA08h] [bp-1450h]@22
  int v434; // [sp+AE08h] [bp-1050h]@22
  int v435; // [sp+AE0Ch] [bp-104Ch]@21
  int v436; // [sp+AE10h] [bp-1048h]@22
  int v437; // [sp+B210h] [bp-C48h]@22
  int v438; // [sp+B214h] [bp-C44h]@20
  int v439; // [sp+B218h] [bp-C40h]@82
  int v440; // [sp+B618h] [bp-840h]@82
  int v441; // [sp+B61Ch] [bp-83Ch]@6
  int v442; // [sp+B620h] [bp-838h]@24
  int v443; // [sp+BA20h] [bp-438h]@24
  int v444; // [sp+BA24h] [bp-434h]@6
  int v445; // [sp+BA28h] [bp-430h]@84
  int v446; // [sp+BE28h] [bp-30h]@84
  RakNet *v447; // [sp+BE2Ch] [bp-2Ch]@1

  v447 = _stack_chk_guard;
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = (int *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  v2 = *v1;
  v298 = (int *)&unk_28898CC;
  (*(void (__fastcall **)(char **, int))(*(_DWORD *)v2 + 20))(&v296, v2);
  v297 = v296;
  v296 = (char *)&unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v298,
    (int *)&v297);
  v3 = v297 - 12;
  if ( (int *)(v297 - 12) != &dword_28898C0 )
  {
    v74 = (unsigned int *)(v297 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
    }
    else
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = v296 - 12;
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v296 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = *(v298 - 3);
  v299 = v298;
  v300 = v5;
  v301 = "behavior_packs";
  v302 = -1;
  v303 = "vanilla";
  v304 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v444, (int)&v299, 3);
  v6 = *(v298 - 3);
  v300 = v6;
  v301 = "resource_packs";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v441, (int)&v299, 3);
  (*(void (__fastcall **)(int **, int))(*(_DWORD *)v2 + 280))(&v295, v2);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v290, 1);
  v7 = sub_21E7408((const void **)&v290, ".", 1u);
  v291 = (unsigned int)*v7;
  *v7 = &unk_28898CC;
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v289, 2);
  v8 = *(_QWORD *)(v291 - 12);
  v9 = *(_DWORD *)(v289 - 12) + v8;
  if ( v9 > HIDWORD(v8) && v9 <= *(_DWORD *)(v289 - 8) )
    v10 = sub_21E82D8((const void **)&v289, 0, v291, (_BYTE *)v8);
    v10 = sub_21E72F0((const void **)&v291, (const void **)&v289);
  v292 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E7408((const void **)&v292, ".", 1u);
  v293 = (unsigned int)*v11;
  *v11 = &unk_28898CC;
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v288, 0);
  v12 = *(_QWORD *)(v293 - 12);
  v13 = *(_DWORD *)(v288 - 12) + v12;
  if ( v13 > HIDWORD(v12) && v13 <= *(_DWORD *)(v288 - 8) )
    v14 = sub_21E82D8((const void **)&v288, 0, v293, (_BYTE *)v12);
    v14 = sub_21E72F0((const void **)&v293, (const void **)&v288);
  v294 = *v14;
  *v14 = &unk_28898CC;
  v15 = (void *)(v288 - 12);
  if ( (int *)(v288 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v288 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v293 - 12);
  if ( (int *)(v293 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v293 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v292 - 12;
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v292 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v289 - 12);
  if ( (int *)(v289 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v289 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v291 - 12);
  if ( (int *)(v291 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v291 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v290 - 12);
  if ( (int *)(v290 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v290 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = v295;
  v22 = *(v295 - 3);
  v287 = (const char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v287, *(v294 - 3) + 22);
  sub_21E7408((const void **)&v287, "Vanilla_Behavior_Pack_", 0x16u);
  sub_21E72F0((const void **)&v287, (const void **)&v294);
  v23 = *((_DWORD *)v287 - 3);
  v306 = v22;
  v305 = v21;
  v308 = v23;
  v307 = v287;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v438, (int)&v305, 2);
  v24 = (char *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v287 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = v295;
  v26 = *(v295 - 3);
  v286 = &unk_28898CC;
  sub_21E6FCC((const void **)&v286, *(v294 - 3) + 22);
  sub_21E7408((const void **)&v286, "Vanilla_Resource_Pack_", 0x16u);
  sub_21E72F0((const void **)&v286, (const void **)&v294);
  LODWORD(v27) = v286;
  HIDWORD(v27) = *(v286 - 3);
  v306 = v26;
  v305 = v25;
  *(_QWORD *)&v307 = v27;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v435, (int)&v305, 2);
  v28 = (char *)(v286 - 3);
  if ( v286 - 3 != &dword_28898C0 )
    v92 = v286 - 1;
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  j_ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)&v285);
  j_ZipUtils::ZipSettings::ZipSettings((int)&v278, 9);
  v283 = 1;
  v432 = 1023;
  v434 = v437;
  j___aeabi_memcpy4_0((int)&v433, (int)&v436, v437 + 1);
  LODWORD(v274) = &v433;
  v275 = v434;
  j_Core::FileSystem::createDirectoryRecursively((int)&v276, &v274);
  if ( v277 )
    v277();
  v305 = &v442;
  v306 = v443;
  v307 = "models";
  v308 = -1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v429, (int)&v305, 2);
  LODWORD(v270) = &v430;
  v271 = v431;
  v305 = &v433;
  v306 = v434;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v426, (int)&v305, 2);
  LODWORD(v268) = &v427;
  v269 = v428;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v272, &v270, &v268);
  if ( v273 )
    v273();
  v307 = "sounds";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v423, (int)&v305, 2);
  LODWORD(v264) = &v424;
  v265 = v425;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v420, (int)&v305, 2);
  LODWORD(v262) = &v421;
  v263 = v422;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v266, &v264, &v262);
  if ( v267 )
    v267();
  v307 = "texts";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v417, (int)&v305, 2);
  LODWORD(v258) = &v418;
  v259 = v419;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v414, (int)&v305, 2);
  LODWORD(v256) = &v415;
  v257 = v416;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v260, &v258, &v256);
  if ( v261 )
    v261();
  v307 = "textures";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v411, (int)&v305, 2);
  LODWORD(v252) = &v412;
  v253 = v413;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v408, (int)&v305, 2);
  LODWORD(v250) = &v409;
  v251 = v410;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v254, &v252, &v250);
  if ( v255 )
    v255();
  v307 = "ui";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v405, (int)&v305, 2);
  LODWORD(v246) = &v406;
  v247 = v407;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v402, (int)&v305, 2);
  LODWORD(v244) = &v403;
  v245 = v404;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v248, &v246, &v244);
  if ( v249 )
    v249();
  v307 = "blocks.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v399, (int)&v305, 2);
  LODWORD(v240) = &v400;
  v241 = v401;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v396, (int)&v305, 2);
  LODWORD(v238) = &v397;
  v239 = v398;
  j_Core::FileSystem::copyFile((int)&v242, &v240, &v238);
  if ( v243 )
    v243();
  v307 = "manifest_publish.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v393, (int)&v305, 2);
  LODWORD(v234) = &v394;
  v235 = v395;
  v307 = "manifest.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v390, (int)&v305, 2);
  LODWORD(v232) = &v391;
  v233 = v392;
  j_Core::FileSystem::copyFile((int)&v236, &v234, &v232);
  if ( v237 )
    v237();
  v307 = "sounds.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v387, (int)&v305, 2);
  LODWORD(v228) = &v388;
  v229 = v389;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v384, (int)&v305, 2);
  LODWORD(v226) = &v385;
  v227 = v386;
  j_Core::FileSystem::copyFile((int)&v230, &v228, &v226);
  if ( v231 )
    v231();
  v307 = "pack_icon.png";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v381, (int)&v305, 2);
  LODWORD(v222) = &v382;
  v223 = v383;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v378, (int)&v305, 2);
  LODWORD(v220) = &v379;
  v221 = v380;
  j_Core::FileSystem::copyFile((int)&v224, &v222, &v220);
  if ( v225 )
    v225();
  v299 = &v433;
  v300 = v434;
  v301 = "textures";
  v303 = "item";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v375, (int)&v299, 3);
  LODWORD(v216) = &v376;
  v217 = v377;
  j_Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v218, &v216);
  if ( v219 )
    v219();
  v303 = "textures_list.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v372, (int)&v299, 3);
  LODWORD(v212) = &v373;
  v213 = v374;
  j_Core::FileSystem::deleteFile((int)&v214, &v212);
  if ( v215 )
    v215();
  v369 = 1023;
  v29 = 0;
  v370 = 0;
  v371 = 0;
  v30 = j_strlen_0((const char *)&v436);
  v31 = v30;
  if ( v30 < 0x400 )
    if ( v30 )
      j___aeabi_memcpy4_0((int)&v370, (int)&v436, v30);
    *((_BYTE *)&v369 + v31 + 4) = 0;
    v32 = v369;
    v29 = v371 + v31;
    v32 = 1023;
    v370 = 0;
  v371 = v29;
  if ( v29 + 4 <= v32 )
    *(signed int *)((char *)&v369 + v29 + 4) = 1885960750;
    *((_BYTE *)&v369 + v29 + 8) = 0;
    v33 = v371 + 4;
    v33 = 0;
  v371 = v33;
  LODWORD(v208) = &v370;
  v209 = v33;
  j_Core::FileSystem::deleteFile((int)&v210, &v208);
  if ( v211 )
    v211();
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v366, (int)&v305, 2);
  LODWORD(v204) = &v367;
  v205 = v368;
  j_Core::FileSystem::deleteFile((int)&v206, &v204);
  if ( v207 )
    v207();
  sub_21E94B4((void **)&v203, (const char *)&v433);
  v34 = 0;
  v363 = 1023;
  v364 = 0;
  v365 = 0;
  v35 = j_strlen_0((const char *)&v436);
  v36 = v35;
  if ( v35 < 0x400 )
    if ( v35 )
      j___aeabi_memcpy4_0((int)&v364, (int)&v436, v35);
    *((_BYTE *)&v363 + v36 + 4) = 0;
    v37 = v363;
    v34 = v365 + v36;
    v37 = 1023;
    v364 = 0;
  v365 = v34;
  if ( v34 + 4 <= v37 )
    *(signed int *)((char *)&v363 + v34 + 4) = 1885960750;
    *((_BYTE *)&v363 + v34 + 8) = 0;
    v38 = v365 + 4;
    v38 = 0;
  v365 = v38;
  sub_21E94B4((void **)&v202, &v364);
  v193 = 0;
  v189 = 0;
  v190 = 0;
  v191 = &v189;
  v192 = &v189;
  if ( v279 )
    v39 = j_std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)&v188,
            v279,
            (int)&v189);
    v40 = v39;
    v190 = v39;
    do
      v41 = v40;
      v40 = (int *)v40[2];
    while ( v40 );
    v191 = v41;
      v42 = v39;
      v39 = (int *)v39[3];
    while ( v39 );
    v192 = v42;
    v193 = v280;
  v199 = 0;
  v195 = 0;
  v196 = 0;
  v197 = &v195;
  v198 = &v195;
  if ( v281 )
    v43 = j_std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)&v194,
            v281,
            (int)&v195);
    v44 = v43;
    v196 = v43;
      v45 = v44;
      v44 = (int *)v44[2];
    while ( v44 );
    v197 = v45;
      v46 = v43;
      v43 = (int *)v43[3];
    while ( v43 );
    v198 = v46;
    v199 = v282;
  v200 = *(_QWORD *)&v283;
  sub_21E8AF4(&v201, &v284);
  j_ZipUtils::zip(&v203, &v202, (int)&v285, (int)&v188);
  j_ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v188);
  v47 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v202 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v203 - 12);
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v203 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  LODWORD(v184) = &v433;
  v185 = v434;
  j_Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v186, &v184);
  if ( v187 )
    v187();
  v360 = 1023;
  v362 = v440;
  j___aeabi_memcpy4_0((int)&v361, (int)&v439, v440 + 1);
  LODWORD(v180) = &v361;
  v181 = v362;
  j_Core::FileSystem::createDirectoryRecursively((int)&v182, &v180);
  if ( v183 )
    v183();
  v305 = &v445;
  v306 = v446;
  v307 = "entities";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v357, (int)&v305, 2);
  LODWORD(v176) = &v358;
  v177 = v359;
  v305 = &v361;
  v306 = v362;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v354, (int)&v305, 2);
  LODWORD(v174) = &v355;
  v175 = v356;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v178, &v176, &v174);
  if ( v179 )
    v179();
  v307 = "loot_tables";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v351, (int)&v305, 2);
  LODWORD(v170) = &v352;
  v171 = v353;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v348, (int)&v305, 2);
  LODWORD(v168) = &v349;
  v169 = v350;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v172, &v170, &v168);
  if ( v173 )
    v173();
  v307 = "trading";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v345, (int)&v305, 2);
  LODWORD(v164) = &v346;
  v165 = v347;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v342, (int)&v305, 2);
  LODWORD(v162) = &v343;
  v163 = v344;
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v166, &v164, &v162);
  if ( v167 )
    v167();
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v339, (int)&v305, 2);
  LODWORD(v158) = &v340;
  v159 = v341;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v336, (int)&v305, 2);
  LODWORD(v156) = &v337;
  v157 = v338;
  j_Core::FileSystem::copyFile((int)&v160, &v158, &v156);
  if ( v161 )
    v161();
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v333, (int)&v305, 2);
  LODWORD(v152) = &v334;
  v153 = v335;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v330, (int)&v305, 2);
  LODWORD(v150) = &v331;
  v151 = v332;
  j_Core::FileSystem::copyFile((int)&v154, &v152, &v150);
  if ( v155 )
    v155();
  v49 = *(v298 - 3);
  v305 = v298;
  v306 = v49;
  v307 = "Documentation.html";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v327, (int)&v305, 2);
  v146 = &v328;
  v147 = v329;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v324, (int)&v305, 2);
  LODWORD(v144) = &v325;
  v145 = v326;
  j_Core::FileSystem::copyFile((int)&v148, (__int64 *)&v146, &v144);
  if ( v149 )
    v149();
  v299 = &v361;
  v300 = v362;
  v301 = "entities";
  v303 = "agent.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v321, (int)&v299, 3);
  v140 = &v322;
  v141 = v323;
  j_Core::FileSystem::deleteFile((int)&v142, (__int64 *)&v140);
  if ( v143 )
    v143();
  v303 = "npc.json";
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v318, (int)&v299, 3);
  v136 = &v319;
  v137 = v320;
  j_Core::FileSystem::deleteFile((int)&v138, (__int64 *)&v136);
  if ( v139 )
    v139();
  v315 = 1023;
  v50 = 0;
  v316 = 0;
  v317 = 0;
  v51 = j_strlen_0((const char *)&v439);
  v52 = v51;
  if ( v51 < 0x400 )
    if ( v51 )
      j___aeabi_memcpy4_0((int)&v316, (int)&v439, v51);
    *((_BYTE *)&v315 + v52 + 4) = 0;
    v53 = v315;
    v50 = v317 + v52;
    v316 = 0;
    v53 = 1023;
  v317 = v50;
  if ( v50 + 4 <= v53 )
    *(unsigned int *)((char *)&v315 + v50 + 4) = 1885960750;
    *((_BYTE *)&v315 + v50 + 8) = 0;
    v54 = v317 + 4;
    v54 = 0;
  v317 = v54;
  v132 = &v316;
  v133 = v54;
  j_Core::FileSystem::deleteFile((int)&v134, (__int64 *)&v132);
  if ( v135 )
    v135();
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v312, (int)&v305, 2);
  LODWORD(v128) = &v313;
  v129 = v314;
  j_Core::FileSystem::deleteFile((int)&v130, &v128);
  if ( v131 )
    v131();
  sub_21E94B4((void **)&v127, (const char *)&v361);
  v309 = 1023;
  v55 = 0;
  v310 = 0;
  v311 = 0;
  v56 = j_strlen_0((const char *)&v439);
  v57 = v56;
  if ( v56 < 0x400 )
    if ( v56 )
      j___aeabi_memcpy4_0((int)&v310, (int)&v439, v56);
    *((_BYTE *)&v309 + v57 + 4) = 0;
    v58 = v309;
    v55 = v311 + v57;
    v310 = 0;
    v58 = 1023;
  v311 = v55;
  if ( v55 + 4 <= v58 )
    *(unsigned int *)((char *)&v309 + v55 + 4) = 1885960750;
    *((_BYTE *)&v309 + v55 + 8) = 0;
    v59 = v311 + 4;
    v59 = 0;
  v311 = v59;
  sub_21E94B4((void **)&v126, &v310);
  v117 = 0;
  v113 = 0;
  v114 = 0;
  v115 = &v113;
  v116 = &v113;
    v60 = j_std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)&v112,
            (int)&v113);
    v61 = v60;
    v114 = v60;
      v62 = v61;
      v61 = (int *)v61[2];
    while ( v61 );
    v115 = v62;
      v63 = v60;
      v60 = (int *)v60[3];
    while ( v60 );
    v116 = v63;
    v117 = v280;
  v123 = 0;
  v119 = 0;
  v120 = 0;
  v121 = &v119;
  v122 = &v119;
    v64 = j_std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)&v118,
            (int)&v119);
    v65 = v64;
    v120 = v64;
      v66 = v65;
      v65 = (int *)v65[2];
    while ( v65 );
    v121 = v66;
      v67 = v64;
      v64 = (int *)v64[3];
    while ( v64 );
    v122 = v67;
    v123 = v282;
  v124 = *(_QWORD *)&v283;
  sub_21E8AF4(&v125, &v284);
  j_ZipUtils::zip(&v127, &v126, (int)&v285, (int)&v112);
  j_ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v112);
  v68 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v126 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v127 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  LODWORD(v108) = &v361;
  v109 = v362;
  j_Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v110, &v108);
  if ( v111 )
    v111();
  j_ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v278);
  j_ZipUtils::ZipProgress::~ZipProgress((ZipUtils::ZipProgress *)&v285);
  v70 = (char *)(v294 - 3);
  if ( v294 - 3 != &dword_28898C0 )
    v102 = v294 - 1;
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = v295 - 3;
  if ( v295 - 3 != &dword_28898C0 )
    v104 = (unsigned int *)(v295 - 1);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  v72 = (char *)(v298 - 3);
  if ( v298 - 3 != &dword_28898C0 )
    v106 = (unsigned int *)(v298 - 1);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  result = (char *)(_stack_chk_guard - v447);
  if ( _stack_chk_guard != v447 )
    j___stack_chk_fail_0((int)result);
  return result;
}


char *__fastcall DocumentationSystem::printDocumentation(int a1, int *a2)
{
  int v2; // r10@1
  int *v3; // r4@1
  void *v4; // r0@2
  int v5; // r1@4
  int v6; // r2@4
  int v7; // r3@4
  unsigned __int64 v8; // r2@4
  int *v9; // r4@5
  int v10; // r5@6
  char v11; // r1@8
  char *v12; // r0@11
  char *v13; // r7@11
  int v14; // r5@11
  char v15; // r1@13
  char *v16; // r0@15
  char *v17; // r5@15
  char *v18; // r0@15
  char *v19; // r5@15
  char *v20; // r7@15
  int v21; // r5@15
  char v22; // r1@17
  char *v23; // r0@19
  int i; // r7@19
  int v25; // r1@21
  unsigned __int64 v26; // r2@21
  void *v27; // r0@22
  char *result; // r0@23
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  RakNet *v31; // [sp+Ch] [bp+0h]@1
  __int64 v32; // [sp+10h] [bp+4h]@4
  int v33; // [sp+14h] [bp+8h]@4
  int v34; // [sp+18h] [bp+Ch]@4
  int v35; // [sp+20h] [bp+14h]@4
  int v36; // [sp+24h] [bp+18h]@4
  int v37; // [sp+28h] [bp+1Ch]@4
  int v38; // [sp+2Ch] [bp+20h]@4
  char v39; // [sp+30h] [bp+24h]@4
  int v40; // [sp+34h] [bp+28h]@4
  int v41; // [sp+434h] [bp+428h]@4
  void **v42; // [sp+438h] [bp+42Ch]@4
  int v43; // [sp+43Ch] [bp+430h]@22
  int v44; // [sp+440h] [bp+434h]@5
  int v45; // [sp+444h] [bp+438h]@5
  void **v46; // [sp+1474h] [bp+1468h]@22

  v2 = a1;
  v3 = a2;
  v31 = _stack_chk_guard;
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v4 + 280))(&v34);
  j_Core::FileStream::FileStream((Core::FileStream *)&v42);
  v5 = *v3;
  v6 = *(_DWORD *)(v34 - 12);
  v7 = *(_DWORD *)(*v3 - 12);
  v35 = v34;
  v36 = v6;
  v37 = v5;
  v38 = v7;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v39, (int)&v35, 2);
  LODWORD(v32) = &v40;
  v33 = v41;
  j_Core::FileStream::open((int)&v42, &v32, 48);
  if ( *((_BYTE *)*(v42 - 3) + (_DWORD)&v42 + 20) & 1 )
  {
    v9 = &v44;
  }
    if ( j_Core::FileStdStreamBuf::isOpen((Core::FileStdStreamBuf *)&v45) == 1 )
    {
      sub_21CBF38((char *)&v44, (int)"{{Pocket}}", 10);
      v10 = *(int *)((char *)&v44 + *(_DWORD *)(v44 - 12) + 124);
      if ( !v10 )
        sub_21E5824();
      if ( *(_BYTE *)(v10 + 28) )
      {
        v11 = *(_BYTE *)(v10 + 39);
      }
      else
        sub_21B50F0(v10);
        v11 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v10 + 24))(v10, 10);
      v12 = sub_21CBC4C((char *)&v44, v11);
      v13 = sub_21CB78C(v12);
      sub_21CBF38(v13, (int)"{{TOC|right}}", 13);
      v14 = *(_DWORD *)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12) + 124];
      if ( !v14 )
      if ( *(_BYTE *)(v14 + 28) )
        v15 = *(_BYTE *)(v14 + 39);
        sub_21B50F0(v14);
        v15 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v14 + 24))(v14, 10);
      v16 = sub_21CBC4C(v13, v15);
      sub_21CB78C(v16);
      sub_21CBF38((char *)&v44, (int)"=Version: ", 10);
      v17 = (char *)sub_21CC43C(&v44, 1);
      sub_21CBF38(v17, (int)".", 1);
      v18 = (char *)sub_21CC43C(v17, 2);
      sub_21CBF38(v18, (int)".", 1);
      v19 = (char *)sub_21CC43C(&v44, 0);
      sub_21CBF38(v19, (int)".", 1);
      v20 = (char *)sub_21CC43C(v19, 81);
      sub_21CBF38(v20, (int)"=", 1);
      v21 = *(_DWORD *)&v20[*(_DWORD *)(*(_DWORD *)v20 - 12) + 124];
      if ( !v21 )
      if ( *(_BYTE *)(v21 + 28) )
        v22 = *(_BYTE *)(v21 + 39);
        sub_21B50F0(v21);
        v22 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v21 + 24))(v21, 10);
      v23 = sub_21CBC4C(v20, v22);
      sub_21CB78C(v23);
      for ( i = *(_DWORD *)(v2 + 12); i != v2 + 4; i = sub_21D4820(i) )
        j_DocumentationSystem::printNode(v2, (int)&v42, i + 20);
    }
    sub_21CB78C((char *)&v44);
    j_Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)&v45, v25, v26);
  v42 = &off_26D66C4;
  v46 = &off_26D66EC;
  *v9 = (int)&off_26D66D8;
  j_Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v45, (int)&off_26D66EC, v8);
  v42 = &off_26D670C;
  v46 = &off_26D6720;
  v43 = 0;
  sub_21B6560(&v46);
  v27 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  result = (char *)(_stack_chk_guard - v31);
  if ( _stack_chk_guard != v31 )
    j___stack_chk_fail_0((int)result);
  return result;
}
