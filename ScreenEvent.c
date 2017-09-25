

int __fastcall ScreenEvent::ScreenEvent(int result)
{
  *(_BYTE *)(result + 28) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_BYTE *)(result + 29) = 1;
  return result;
}


_DWORD *__fastcall ScreenEvent::toString(ScreenEvent *this, int a2)
{
  int v2; // r7@1
  int *v3; // r8@1
  char *v4; // r4@1
  int v5; // r0@1
  int v6; // r5@1
  char v7; // r1@3
  char *v8; // r0@5
  int v9; // r1@6
  char *v10; // r5@6
  int v11; // r4@6
  char v12; // r1@8
  int v13; // r4@9
  char v14; // r1@11
  char *v15; // r0@13
  char *v16; // r0@15
  const char *v17; // r1@15
  int v18; // r2@15
  int v19; // r4@18
  char v20; // r1@20
  char *v21; // r0@22
  char *v22; // r5@23
  int v23; // r4@23
  char v24; // r1@25
  char *v25; // r0@27
  void *v26; // r0@27
  const char *v27; // r1@28
  int v28; // r2@28
  int v29; // r4@31
  char v30; // r1@33
  char *v31; // r0@35
  void **v32; // r0@35
  void *v33; // r0@35
  unsigned int *v35; // r2@37
  signed int v36; // r1@39
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  int v39; // [sp+0h] [bp-E0h]@23
  void **v40; // [sp+4h] [bp-DCh]@1
  int v41; // [sp+8h] [bp-D8h]@36
  void **v42; // [sp+Ch] [bp-D4h]@1
  void **v43; // [sp+10h] [bp-D0h]@35
  int v44; // [sp+2Ch] [bp-B4h]@36
  int v45; // [sp+34h] [bp-ACh]@35
  int v46; // [sp+38h] [bp-A8h]@36

  v2 = a2;
  v3 = (int *)this;
  sub_DA7794((int)&v40, 24);
  v4 = off_26D8ED8[*(_DWORD *)v2];
  v5 = strlen(off_26D8ED8[*(_DWORD *)v2]);
  sub_DA78D4((char *)&v42, (int)v4, v5);
  v6 = *(_DWORD *)((char *)*(v42 - 3) + (_DWORD)&v42 + 124);
  if ( !v6 )
    sub_DA7ACC();
  if ( *(_BYTE *)(v6 + 28) )
  {
    v7 = *(_BYTE *)(v6 + 39);
  }
  else
    sub_DA7A9C(v6);
    v7 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 10);
  v8 = sub_DA7AAC((char *)&v42, v7);
  sub_DA7ABC(v8);
  if ( *(_DWORD *)v2 == 1 )
    sub_DA78D4((char *)&v42, (int)"Button id: ", 11);
    v9 = *(_WORD *)(v2 + 4);
    v10 = sub_DA9924((char *)&v42);
    v11 = *(_DWORD *)&v10[*(_DWORD *)(*(_DWORD *)v10 - 12) + 124];
    if ( !v11 )
      sub_DA7ACC();
    if ( *(_BYTE *)(v11 + 28) )
    {
      v12 = *(_BYTE *)(v11 + 39);
    }
    else
      sub_DA7A9C(v11);
      v12 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v11 + 24))(v11, 10);
    v16 = sub_DA7AAC(v10, v12);
    sub_DA7ABC(v16);
    sub_DA78D4((char *)&v42, (int)"Button state: ", 14);
    v17 = "Down";
    v18 = 2;
    if ( *(_BYTE *)(v2 + 9) == 1 )
      v18 = 4;
      v17 = "Up";
    sub_DA78D4((char *)&v42, (int)v17, v18);
    v19 = *(_DWORD *)((char *)*(v42 - 3) + (_DWORD)&v42 + 124);
    if ( !v19 )
    if ( *(_BYTE *)(v19 + 28) )
      v20 = *(_BYTE *)(v19 + 39);
      sub_DA7A9C(v19);
      v20 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v19 + 24))(v19, 10);
    v21 = sub_DA7AAC((char *)&v42, v20);
    sub_DA7ABC(v21);
    if ( *(_DWORD *)(v2 + 12) )
      sub_DA78D4((char *)&v42, (int)"Properties: ", 12);
      PropertyBag::toString((PropertyBag *)&v39, (const Json::Value *)(*(_DWORD *)(v2 + 12) + 8));
      v22 = sub_DA78D4((char *)&v42, v39, *(_DWORD *)(v39 - 12));
      v23 = *(_DWORD *)&v22[*(_DWORD *)(*(_DWORD *)v22 - 12) + 124];
      if ( !v23 )
        sub_DA7ACC();
      if ( *(_BYTE *)(v23 + 28) )
      {
        v24 = *(_BYTE *)(v23 + 39);
      }
      else
        sub_DA7A9C(v23);
        v24 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v23 + 24))(v23, 10);
      v25 = sub_DA7AAC(v22, v24);
      sub_DA7ABC(v25);
      v26 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        }
        else
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9(v26);
    sub_DA78D4((char *)&v42, (int)"Serialization for this event type not implemented.", 50);
    v13 = *(_DWORD *)((char *)*(v42 - 3) + (_DWORD)&v42 + 124);
    if ( !v13 )
    if ( *(_BYTE *)(v13 + 28) )
      v14 = *(_BYTE *)(v13 + 39);
      sub_DA7A9C(v13);
      v14 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v13 + 24))(v13, 10);
    v15 = sub_DA7AAC((char *)&v42, v14);
    sub_DA7ABC(v15);
  sub_DA78D4((char *)&v42, (int)"Scope: ", 7);
  v27 = "Controller";
  v28 = 4;
  if ( *(_BYTE *)(v2 + 28) )
    v27 = "View";
    v28 = 10;
  sub_DA78D4((char *)&v42, (int)v27, v28);
  v29 = *(_DWORD *)((char *)*(v42 - 3) + (_DWORD)&v42 + 124);
  if ( !v29 )
  if ( *(_BYTE *)(v29 + 28) )
    v30 = *(_BYTE *)(v29 + 39);
    sub_DA7A9C(v29);
    v30 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v29 + 24))(v29, 10);
  v31 = sub_DA7AAC((char *)&v42, v30);
  sub_DA7ABC(v31);
  sub_DA77A4(v3, (int)&v43);
  v32 = off_26D3F84;
  v40 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v40) = off_26D3F80[0];
  v42 = v32;
  v43 = &off_27734E8;
  v33 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  v43 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v44);
  v40 = (void **)off_26D3F68;
  *(void ***)((char *)&v40 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v41 = 0;
  return sub_DA76E4(&v46);
}
