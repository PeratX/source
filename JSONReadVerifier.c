

_DWORD *__fastcall JSONReadVerifier::verifyRead(const char **a1, int a2, int a3)
{
  int v3; // r6@1
  const char **v4; // r7@1
  int v5; // r4@1
  int v6; // r4@2
  char v7; // r1@4
  char *v8; // r0@6
  const char *v9; // r4@6
  int v10; // r0@7
  int v11; // r4@9
  char v12; // r1@11
  char *v13; // r0@13
  char *v14; // r4@13
  int v15; // r0@14
  int v16; // r4@16
  char v17; // r1@18
  char *v18; // r0@20
  char *v19; // r0@20
  int v20; // r4@21
  char v21; // r1@23
  char *v22; // r0@25
  void *v23; // r0@25
  void **v24; // r0@26
  void *v25; // r0@26
  unsigned int *v27; // r2@28
  signed int v28; // r1@30
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned int *v31; // r2@40
  signed int v32; // r1@42
  int v33; // [sp+0h] [bp-E0h]@25
  char *s; // [sp+4h] [bp-DCh]@13
  void **v35; // [sp+8h] [bp-D8h]@1
  int v36; // [sp+Ch] [bp-D4h]@27
  void **v37; // [sp+10h] [bp-D0h]@2
  void **v38; // [sp+14h] [bp-CCh]@25
  int v39; // [sp+30h] [bp-B0h]@27
  int v40; // [sp+38h] [bp-A8h]@26
  int v41; // [sp+3Ch] [bp-A4h]@27

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_21D103C((int)&v35, 24);
  if ( !v5 )
  {
    sub_21CBF38((char *)&v37, (int)"\n------------------------------------------------------", 55);
    v6 = *(_DWORD *)((char *)*(v37 - 3) + (_DWORD)&v37 + 124);
    if ( !v6 )
      sub_21E5824();
    if ( *(_BYTE *)(v6 + 28) )
    {
      v7 = *(_BYTE *)(v6 + 39);
    }
    else
      sub_21B50F0(v6);
      v7 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 10);
    v8 = sub_21CBC4C((char *)&v37, v7);
    sub_21CB78C(v8);
    sub_21CBF38((char *)&v37, (int)"JSON Parse error in file: ", 26);
    v9 = *v4;
    if ( *v4 )
      v10 = j_strlen_0(*v4);
      sub_21CBF38((char *)&v37, (int)v9, v10);
      sub_21B583C((int)*(v37 - 3) + (_DWORD)&v37, *(_DWORD *)((char *)*(v37 - 3) + (_DWORD)&v37 + 20) | 1);
    v11 = *(_DWORD *)((char *)*(v37 - 3) + (_DWORD)&v37 + 124);
    if ( !v11 )
    if ( *(_BYTE *)(v11 + 28) )
      v12 = *(_BYTE *)(v11 + 39);
      sub_21B50F0(v11);
      v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v11 + 24))(v11, 10);
    v13 = sub_21CBC4C((char *)&v37, v12);
    sub_21CB78C(v13);
    j_Json::Reader::getFormattedErrorMessages((Json::Reader *)&s, v3);
    v14 = s;
    if ( s )
      v15 = j_strlen_0(s);
      sub_21CBF38((char *)&v37, (int)v14, v15);
    v16 = *(_DWORD *)((char *)*(v37 - 3) + (_DWORD)&v37 + 124);
    if ( !v16 )
    if ( *(_BYTE *)(v16 + 28) )
      v17 = *(_BYTE *)(v16 + 39);
      sub_21B50F0(v16);
      v17 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v16 + 24))(v16, 10);
    v18 = sub_21CBC4C((char *)&v37, v17);
    sub_21CB78C(v18);
    v19 = s - 12;
    if ( (int *)(s - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(s - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      }
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    sub_21CBF38((char *)&v37, (int)"------------------------------------------------------", 54);
    v20 = *(_DWORD *)((char *)*(v37 - 3) + (_DWORD)&v37 + 124);
    if ( !v20 )
    if ( *(_BYTE *)(v20 + 28) )
      v21 = *(_BYTE *)(v20 + 39);
      sub_21B50F0(v20);
      v21 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v20 + 24))(v20, 10);
    v22 = sub_21CBC4C((char *)&v37, v21);
    sub_21CB78C(v22);
    sub_21CFED8(&v33, (int)&v38);
    v23 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v33 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  }
  v24 = off_26D3F84;
  v35 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v35) = off_26D3F80[0];
  v37 = v24;
  v38 = &off_27734E8;
  v25 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v38 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v39);
  v35 = (void **)off_26D3F68;
  *(void ***)((char *)&v35 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v36 = 0;
  return sub_21B6560(&v41);
}
