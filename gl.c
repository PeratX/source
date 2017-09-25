

void **__fastcall gl::getOpenGLVendor(gl *this)
{
  void **v1; // r4@1
  const char *v2; // r1@1

  v1 = (void **)this;
  v2 = (const char *)glad_glGetString(7936);
  if ( !v2 )
    v2 = (const char *)&unk_257BC67;
  return sub_21E94B4(v1, v2);
}


int __fastcall gl::supportsAnonymousVAO(gl *this)
{
  int result; // r0@1
  signed __int16 v2; // r0@3
  int v3; // [sp+0h] [bp-14h]@2
  int v4; // [sp+4h] [bp-10h]@6
  __int16 v5; // [sp+8h] [bp-Ch]@4
  unsigned __int8 v6; // [sp+Ah] [bp-Ah]@12

  result = dword_27B5580;
  if ( dword_27B5580 > -1 )
    goto LABEL_13;
  gl::Version::_findMajorMinor((gl::Version *)&v3);
  if ( v3 == 2 )
  {
    v2 = 0;
  }
  else
    if ( v3 < 3 )
      goto LABEL_12;
    if ( v4 == 1 )
    {
      v2 = 2;
    }
    else if ( v4 )
      if ( v4 < 2 )
        goto LABEL_12;
      v2 = 3;
    else
      v2 = 1;
  v5 = v2;
LABEL_12:
  result = v6 ^ 1;
  dword_27B5580 = v6 ^ 1;
LABEL_13:
  if ( result != 1 )
    result = 0;
  return result;
}


void **__fastcall gl::getOpenGLVersion(gl *this)
{
  void **v1; // r4@1
  const char *v2; // r1@1

  v1 = (void **)this;
  v2 = (const char *)glad_glGetString(7938);
  if ( !v2 )
    v2 = (const char *)&unk_257BC67;
  return sub_21E94B4(v1, v2);
}


void __fastcall gl::Version::_findMajorMinor(gl::Version *this)
{
  gl::Version *v1; // r5@1
  const char *v2; // r1@1
  void **v3; // r0@2
  _BYTE *v4; // r11@4
  int v5; // r9@4
  int v6; // r5@4
  int v7; // r8@6
  char *v8; // r0@8
  int v9; // r1@8 OVERLAPPED
  int v10; // r6@8
  unsigned int v11; // r2@8
  char *v12; // r0@11
  char *v13; // r6@13
  int *v14; // r7@14
  int v15; // r0@16
  __int64 v16; // r0@19
  unsigned int v17; // r7@19
  char *v18; // r0@22
  char *v19; // r0@25
  _BYTE *v20; // r0@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  gl::Version *v25; // [sp+8h] [bp-40h]@4
  char *nptr; // [sp+Ch] [bp-3Ch]@4
  _BYTE *v27; // [sp+10h] [bp-38h]@2

  v1 = this;
  v2 = (const char *)glad_glGetString(7938);
  if ( v2 )
  {
    v3 = (void **)&v27;
  }
  else
    v2 = (const char *)&unk_257BC67;
  sub_21E94B4(v3, v2);
  v4 = v27;
  v25 = v1;
  v5 = 0;
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 1) = 0;
  v6 = (int)v1 + 4;
  *(_BYTE *)(v6 + 6) = 0;
  nptr = (char *)&unk_28898CC;
  while ( 1 )
    v7 = *v4;
    switch ( v5 )
    {
      case 0:
      case 2:
        if ( (unsigned __int8)(v7 - 48) > 9u )
          goto LABEL_24;
        v8 = nptr;
        ++v5;
        *(_QWORD *)&v9 = *(_QWORD *)(nptr - 12);
        v10 = v9 + 1;
        if ( v9 + 1 > v11 || *((_DWORD *)nptr - 1) >= 1 )
        {
          sub_21E6FCC((const void **)&nptr, v9 + 1);
          v8 = nptr;
          v9 = *((_DWORD *)nptr - 3);
        }
        v8[v9] = v7;
        v12 = nptr;
        if ( (int *)(nptr - 12) == &dword_28898C0 )
          goto LABEL_5;
        ++v4;
        *((_DWORD *)nptr - 1) = 0;
        *((_DWORD *)v12 - 3) = v10;
        v12[v10] = byte_26C67B8[0];
        continue;
      case 1:
      case 3:
        v13 = nptr;
        if ( (unsigned __int8)(v7 - 48) < 0xAu )
          v16 = *(_QWORD *)(nptr - 12);
          v17 = v16 + 1;
          if ( (unsigned int)(v16 + 1) > HIDWORD(v16) || *((_DWORD *)nptr - 1) >= 1 )
          {
            sub_21E6FCC((const void **)&nptr, v17);
            v13 = nptr;
            LODWORD(v16) = *((_DWORD *)nptr - 3);
          }
          v13[v16] = v7;
          v18 = nptr;
          if ( (int *)(nptr - 12) != &dword_28898C0 )
            *((_DWORD *)nptr - 1) = 0;
            *((_DWORD *)v18 - 3) = v17;
            v18[v17] = byte_26C67B8[0];
        else
          v14 = (int *)v6;
          if ( v5 == 1 )
            v14 = (int *)v25;
          *v14 = atoi(nptr);
          sub_21E7EE0((const void **)&nptr, 0, *((_BYTE **)v13 - 3), 0);
          v15 = 5;
          if ( v7 == 46 )
            v15 = v5 + 1;
          v5 = v15;
LABEL_24:
        if ( !v7 )
          goto def_143EEC6;
LABEL_5:
        break;
      default:
def_143EEC6:
        v19 = nptr - 12;
        if ( (int *)(nptr - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(nptr - 4);
          if ( &pthread_create )
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
          else
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v20 = v27 - 12;
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v27 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        return;
    }
}


void **__fastcall gl::getOpenGLExtensions(gl *this)
{
  void **v1; // r4@1
  const char *v2; // r1@1

  v1 = (void **)this;
  v2 = (const char *)glad_glGetString(7939);
  if ( !v2 )
    v2 = (const char *)&unk_257BC67;
  return sub_21E94B4(v1, v2);
}


  if ( gl::isOpenGLES3(v20) == 1 )
{
    v21 = GLAD_GL_KHR_debug;
    eglMakeCurrent(v7, 0, 0, 0);
    eglDestroyContext(v7);
    eglDestroySurface(v7);
    sub_BC45D4((int)&v108, 3, v7, v19, v21 != 0);
    v22 = HIDWORD(v108) == 0;
    if ( HIDWORD(v108) )
      v22 = (_DWORD)v108 == 0;
    if ( v22 )
      sub_BC45D4((int)&v90, 2, v7, v19, 0);
    else
      v90 = v108;
  }
  else
  {
    v90 = v18;
  *(_QWORD *)&v91 = v90;
  sub_DA7A7C((int)&v85, 16);
  sub_DA78D4((char *)&v85, (int)"4) Make current\n", 16);
  sub_DA78D4((char *)&v85, (int)" @ ", 3);
  sub_DA78D4((char *)&v85, (int)"engine_init_display", 19);
  sub_DA78D4((char *)&v85, (int)" (", 2);
  sub_DA78D4((char *)&v85, (int)"..\\..\\..\\..\\..\\src\\android\\main_android.cpp", 43);
  sub_DA78D4((char *)&v85, (int)":", 1);
  v23 = (char *)sub_DA78E4((int)&v85, 1228);
  sub_DA78D4(v23, (int)")", 1);
  v24 = *(_DWORD *)&v23[*(_DWORD *)(*(_DWORD *)v23 - 12) + 124];
  if ( !v24 )
    sub_DA7ACC();
  if ( *(_BYTE *)(v24 + 28) )
    v25 = *(_BYTE *)(v24 + 39);
    sub_DA7A9C(v24);
    v25 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v24 + 24))(v24, 10);
  v26 = sub_DA7AAC(v23, v25);
  sub_DA7ABC(v26);
  v85 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v85) = off_26D3F34;
  v86 = &off_27734E8;
  v27 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
    }
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v86 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v87);
  sub_DA76E4(&v89);
  sub_DA7A7C((int)&v80, 16);
  sub_DA78D4((char *)&v80, (int)"5) Query stats and set values\n", 30);
  sub_DA78D4((char *)&v80, (int)" @ ", 3);
  sub_DA78D4((char *)&v80, (int)"engine_init_display", 19);
  sub_DA78D4((char *)&v80, (int)" (", 2);
  sub_DA78D4((char *)&v80, (int)"..\\..\\..\\..\\..\\src\\android\\main_android.cpp", 43);
  sub_DA78D4((char *)&v80, (int)":", 1);
  v28 = (char *)sub_DA78E4((int)&v80, 1232);
  sub_DA78D4(v28, (int)")", 1);
  v29 = *(_DWORD *)&v28[*(_DWORD *)(*(_DWORD *)v28 - 12) + 124];
  if ( !v29 )
  if ( *(_BYTE *)(v29 + 28) )
    v30 = *(_BYTE *)(v29 + 39);
    sub_DA7A9C(v29);
    v30 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v29 + 24))(v29, 10);
  v31 = sub_DA7AAC(v28, v30);
  sub_DA7ABC(v31);
  v80 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v80) = off_26D3F34;
  v81 = &off_27734E8;
  v32 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v83 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
  v81 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v82);
  sub_DA76E4(&v84);
  v33 = v92;
  eglQuerySurface(v7, v92, 12375, &v79);
  eglQuerySurface(v7, v33, 12374, &v78);
  LODWORD(v34) = v78;
  if ( (signed int)v79 >= v78 )
    v34 = __PAIR__(v78, v79);
    HIDWORD(v34) = v79;
    v78 = v79;
    v79 = v34;
  *(_DWORD *)(v1 + 20) = v7;
  v35 = v1 + 20;
  *(_DWORD *)(v35 + 4) = v91;
  *(_DWORD *)(v35 + 8) = v33;
  *(_QWORD *)(v35 - 16) = v34;
  sub_DA7A7C((int)&v73, 16);
  sub_DA78D4((char *)&v73, (int)"6) Graphics set-up finished!\n", 29);
  sub_DA78D4((char *)&v73, (int)" @ ", 3);
  sub_DA78D4((char *)&v73, (int)"engine_init_display", 19);
  sub_DA78D4((char *)&v73, (int)" (", 2);
  sub_DA78D4((char *)&v73, (int)"..\\..\\..\\..\\..\\src\\android\\main_android.cpp", 43);
  sub_DA78D4((char *)&v73, (int)":", 1);
  v36 = (char *)sub_DA78E4((int)&v73, 1252);
  sub_DA78D4(v36, (int)")", 1);
  v37 = *(_DWORD *)&v36[*(_DWORD *)(*(_DWORD *)v36 - 12) + 124];
  if ( !v37 )
  if ( *(_BYTE *)(v37 + 28) )
    v38 = *(_BYTE *)(v37 + 39);
    sub_DA7A9C(v37);
    v38 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v37 + 24))(v37, 10);
  v39 = sub_DA7AAC(v36, v38);
  sub_DA7ABC(v39);
  v73 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v73) = off_26D3F34;
  v74 = &off_27734E8;
  v40 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v76 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  v74 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v75);
  sub_DA76E4(&v77);
  v41 = AppPlatform::getAppLifecycleContext((AppPlatform *)&dword_27C4D80);
  AppLifecycleContext::setHasGraphicsContext((AppLifecycleContext *)v41, 1);
  if ( *(_BYTE *)(v1 + 16) )
    App::changeContext(*(_DWORD *)(v1 + 12), v1 + 20);
    (*(void (**)(void))(**(_DWORD **)(v1 + 12) + 100))();
  *(_BYTE *)(v1 + 16) = 1;
  v42 = (const char *)glad_glGetString(7939);
  Util::safeString((Util *)&s, v42);
  sub_DA7A7C((int)&v67, 16);
  sub_DA78D4((char *)&v67, (int)"Extensions: ", 12);
  v43 = s;
  if ( s )
    v44 = strlen(s);
    sub_DA78D4((char *)&v67, (int)v43, v44);
    sub_DA7A8C((int)*(v67 - 3) + (_DWORD)&v67, *(_DWORD *)((char *)*(v67 - 3) + (_DWORD)&v67 + 20) | 1);
  sub_DA78D4((char *)&v67, (int)" @ ", 3);
  sub_DA78D4((char *)&v67, (int)"engine_init_display", 19);
  sub_DA78D4((char *)&v67, (int)" (", 2);
  sub_DA78D4((char *)&v67, (int)"..\\..\\..\\..\\..\\src\\android\\main_android.cpp", 43);
  sub_DA78D4((char *)&v67, (int)":", 1);
  v45 = (char *)sub_DA78E4((int)&v67, 1265);
  sub_DA78D4(v45, (int)")", 1);
  v46 = *(_DWORD *)&v45[*(_DWORD *)(*(_DWORD *)v45 - 12) + 124];
  if ( !v46 )
  if ( *(_BYTE *)(v46 + 28) )
    v47 = *(_BYTE *)(v46 + 39);
    sub_DA7A9C(v46);
    v47 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v46 + 24))(v46, 10);
  v48 = sub_DA7AAC(v45, v47);
  sub_DA7ABC(v48);
  v67 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v67) = off_26D3F34;
  v68 = &off_27734E8;
  v49 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v70 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9(v49);
  v68 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v69);
  sub_DA76E4(&v71);
  v50 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(s - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9(v50);
}


signed int __fastcall gl::Version::parse(gl::Version *this)
{
  gl::Version *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  gl::Version::_findMajorMinor(this);
  result = *(_DWORD *)v1;
  if ( *(_DWORD *)v1 == 2 )
  {
    result = 0;
LABEL_3:
    *((_WORD *)v1 + 4) = result;
    return result;
  }
  if ( result >= 3 )
    result = *((_DWORD *)v1 + 1);
    if ( result == 1 )
    {
      result = 2;
    }
    else if ( result )
      if ( result < 2 )
        return result;
      result = 3;
    else
      result = 1;
    goto LABEL_3;
  return result;
}


signed int __fastcall gl::isOpenGLES3(gl *this)
{
  signed int result; // r0@2
  signed __int16 v2; // r0@4
  int v3; // [sp+4h] [bp-14h]@3
  int v4; // [sp+8h] [bp-10h]@7
  __int16 v5; // [sp+Ch] [bp-Ch]@5

  if ( gl::hardwareOverideOpenGLES3 )
    return 0;
  gl::Version::_findMajorMinor((gl::Version *)&v3);
  if ( v3 == 2 )
  {
    v2 = 0;
LABEL_5:
    v5 = v2;
    goto LABEL_13;
  }
  if ( v3 >= 3 )
    if ( v4 == 1 )
    {
      v2 = 2;
      goto LABEL_5;
    }
    if ( !v4 )
      v2 = 1;
    if ( v4 >= 2 )
      v2 = 3;
LABEL_13:
  result = 0;
  if ( v3 > 2 )
    result = 1;
  return result;
}


int __fastcall gl::supportsImmediateMode(gl *this)
{
  int result; // r0@1
  signed __int16 v2; // r0@3
  int v3; // [sp+0h] [bp-14h]@2
  int v4; // [sp+4h] [bp-10h]@6
  __int16 v5; // [sp+8h] [bp-Ch]@4
  unsigned __int8 v6; // [sp+Ah] [bp-Ah]@12

  result = dword_27B5580;
  if ( dword_27B5580 > -1 )
    goto LABEL_13;
  gl::Version::_findMajorMinor((gl::Version *)&v3);
  if ( v3 == 2 )
  {
    v2 = 0;
  }
  else
    if ( v3 < 3 )
      goto LABEL_12;
    if ( v4 == 1 )
    {
      v2 = 2;
    }
    else if ( v4 )
      if ( v4 < 2 )
        goto LABEL_12;
      v2 = 3;
    else
      v2 = 1;
  v5 = v2;
LABEL_12:
  result = v6 ^ 1;
  dword_27B5580 = v6 ^ 1;
LABEL_13:
  if ( result != 1 )
    result = 0;
  return result;
}


void **__fastcall gl::getOpenGLRenderer(gl *this)
{
  void **v1; // r4@1
  const char *v2; // r1@1

  v1 = (void **)this;
  v2 = (const char *)glad_glGetString(7937);
  if ( !v2 )
    v2 = (const char *)&unk_257BC67;
  return sub_21E94B4(v1, v2);
}


void __fastcall gl::Version::_findMajorMinor(gl::Version *this)
{
  gl::Version::_findMajorMinor(this);
}
