

signed int __fastcall JpegData::ReadJpgComments(const char *a1, void **a2)
{
  void **v2; // r4@1
  _BYTE *v3; // r0@2
  int v4; // r6@3
  int v5; // r7@3
  signed int result; // r0@5

  v2 = a2;
  if ( ReadJpegFile(a1, 1) == 1 )
  {
    v3 = (_BYTE *)strlen(byte_27EF98C);
    sub_21E8190(v2, byte_27EF98C, v3);
    if ( dword_27F38B0 >= 1 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        free(*(void **)(dword_27F38B4 + v4));
        v4 += 12;
        ++v5;
      }
      while ( v5 < dword_27F38B0 );
    }
    _aeabi_memclr8(&unk_27EF4C8, 17380);
    dword_27F38B0 = 0;
    byte_27F38AC = 0;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall JpegData::WriteJpgComments(char *s, _DWORD *a2)
{
  char *v2; // r10@1
  const char **v3; // r5@1
  void *v4; // r7@2
  signed int v5; // r6@4
  int v6; // r7@8
  _DWORD *v7; // r11@8
  _DWORD *v8; // r1@9
  int v9; // r0@9
  int v10; // r4@14
  _BYTE *v11; // r9@15
  signed int v12; // r4@15
  int v13; // r1@24
  int v14; // r0@24
  int v15; // r2@25
  int v16; // r3@25
  int v17; // r6@25
  int v18; // r12@25
  __int64 v19; // r1@26
  int v20; // r0@26
  int v21; // r6@29
  void *v22; // r5@29
  _BYTE *v23; // r0@30
  size_t v24; // r0@30
  char v25; // r4@32
  int v26; // r6@41
  int v27; // r7@41
  RakNet *v29; // [sp+4h] [bp-3F34h]@1
  char *v30; // [sp+8h] [bp-3F30h]@38
  signed int v31; // [sp+Ch] [bp-3F2Ch]@38
  char v32; // [sp+10h] [bp-3F28h]@38
  void (*v33)(void); // [sp+18h] [bp-3F20h]@38
  char *v34; // [sp+24h] [bp-3F14h]@36
  signed int v35; // [sp+28h] [bp-3F10h]@36
  char *v36; // [sp+2Ch] [bp-3F0Ch]@36
  int v37; // [sp+30h] [bp-3F08h]@36
  char v38; // [sp+34h] [bp-3F04h]@36
  void (*v39)(void); // [sp+3Ch] [bp-3EFCh]@36
  char *v40; // [sp+48h] [bp-3EF0h]@32
  signed int v41; // [sp+4Ch] [bp-3EECh]@32
  char *v42; // [sp+50h] [bp-3EE8h]@32
  signed int v43; // [sp+54h] [bp-3EE4h]@32
  char v44; // [sp+58h] [bp-3EE0h]@32
  void (*v45)(void); // [sp+60h] [bp-3ED8h]@32
  char v46; // [sp+68h] [bp-3ED0h]@32
  char *v47; // [sp+6Ch] [bp-3ECCh]@30
  int v48; // [sp+70h] [bp-3EC8h]@30
  char v49; // [sp+74h] [bp-3EC4h]@30
  void (*v50)(void); // [sp+7Ch] [bp-3EBCh]@30
  char v51; // [sp+88h] [bp-3EB0h]@29

  v2 = s;
  v3 = (const char **)a2;
  v29 = _stack_chk_guard;
  if ( !*(_DWORD *)(*a2 - 12) )
  {
    v5 = 0;
    goto LABEL_44;
  }
  v4 = (void *)dword_27F38B4;
  if ( !dword_27F38B4 )
    v4 = malloc(0x3Cu);
    dword_27F38B4 = (int)v4;
    dword_27F38B8 = 5;
  v5 = 0;
  dword_27F38B0 = 0;
  byte_27F38AC = 0;
  if ( strlen(v2) <= 0x3FE )
    if ( !v4 )
    {
      dword_27F38B4 = (int)malloc(0x3Cu);
      dword_27F38B8 = 5;
    }
    dword_27F38B0 = 0;
    byte_27F38AC = 0;
    _aeabi_memclr8(&unk_27EF4C8, 17380);
    dword_27EF940 = -1;
    dword_27EF964 = -1;
    dword_27EF968 = -1;
    strncpy((char *)&unk_27EF4C8, v2, 0x400u);
    if ( ReadJpegFile(v2, 3) == 1 )
      v7 = (_DWORD *)dword_27F38B4;
      v6 = dword_27F38B0;
      if ( dword_27F38B0 < 1 )
        goto LABEL_15;
      v8 = (_DWORD *)(dword_27F38B4 + 4);
      v9 = 0;
      while ( *v8 != 254 )
      {
        ++v9;
        v8 += 3;
        if ( v9 >= dword_27F38B0 )
          goto LABEL_15;
      }
      v10 = dword_27F38B4 + 12 * v9;
      if ( !v10 )
LABEL_15:
        v11 = malloc(3u);
        v12 = 0;
        *(_WORD *)v11 = 512;
        v11[2] = 0;
        if ( (v7[1] & 0xFFFFFFFE) == 224 )
        {
          if ( (v7[4] & 0xFFFFFFFE) == 224 )
          {
            v12 = 2;
            if ( (v7[7] & 0xFFFFFFFE) == 224 )
              v12 = 3;
          }
          else
            v12 = 1;
        }
        if ( v6 >= dword_27F38B8 )
          dword_27F38B8 += dword_27F38B8 / 2;
          v7 = realloc(v7, 12 * dword_27F38B8);
          dword_27F38B4 = (int)v7;
          v6 = dword_27F38B0;
        if ( v6 > v12 )
          v13 = v6;
          v14 = (int)&v7[3 * v6 - 3];
          do
            --v13;
            v15 = *(_DWORD *)v14;
            v16 = *(_DWORD *)(v14 + 4);
            v17 = *(_DWORD *)(v14 + 8);
            v18 = v14 + 12;
            v14 -= 12;
            *(_DWORD *)v18 = v15;
            *(_DWORD *)(v18 + 4) = v16;
            *(_DWORD *)(v18 + 8) = v17;
          while ( v13 > v12 );
        HIDWORD(v19) = 2;
        dword_27F38B0 = v6 + 1;
        v20 = 3 * v12;
        LODWORD(v19) = 254;
        v10 = (int)&v7[3 * v12];
        *(_QWORD *)(v10 + 4) = v19;
        v7[v20] = v11;
      if ( *(_DWORD *)(v10 + 8) - 2 > 16000 )
        fprintf((FILE *)((char *)&_sF + 168), "Truncating comment at %d chars\n", 16000);
      v21 = *((_DWORD *)*v3 - 3);
      _aeabi_memcpy(&v51, *v3, *((_DWORD *)*v3 - 3));
      v22 = *(void **)v10;
      if ( strcmp(&v51, (const char *)(*(_DWORD *)v10 + 2)) )
        free(v22);
        *(_DWORD *)(v10 + 8) = v21 + 2;
        v23 = malloc(v21 + 2);
        *(_DWORD *)v10 = v23;
        *v23 = (unsigned __int16)(v21 + 2) >> 8;
        *(_BYTE *)(*(_DWORD *)v10 + 1) = v21 + 2;
        _aeabi_memcpy(*(_DWORD *)v10 + 2, &v51, v21);
        strcpy(&v51, v2);
        v24 = strlen(&v51);
        *(_WORD *)(&v51 + v24) = 29742;
        *(&v51 + v24 + 2) = 0;
        v47 = &v51;
        v48 = -1;
        Core::FileSystem::deleteFile((int)&v49, (__int64 *)&v47);
        if ( v50 )
          v50();
        v42 = v2;
        v43 = -1;
        v40 = &v51;
        v41 = -1;
        Core::FileSystem::renameFileOrDirectory((int)&v44, (__int64 *)&v42, (__int64 *)&v40);
        v25 = v46;
        v46 |= 2u;
        if ( v45 )
          v45();
        if ( !(v25 & 1) )
          v5 = 0;
          goto LABEL_44;
        WriteJpegFile(v2);
        v36 = &v51;
        v37 = -1;
        v34 = v2;
        v35 = -1;
        Core::FileSystem::copyTimeAndAccessRights((int)&v38, (__int64 *)&v36, (__int64 *)&v34);
        if ( v39 )
          v39();
        v30 = &v51;
        v31 = -1;
        Core::FileSystem::deleteFile((int)&v32, (__int64 *)&v30);
        if ( v33 )
          v33();
      if ( dword_27F38B0 >= 1 )
        v26 = 0;
        v27 = 0;
        do
          free(*(void **)(dword_27F38B4 + v26));
          v26 += 12;
          ++v27;
        while ( v27 < dword_27F38B0 );
      _aeabi_memclr8(&unk_27EF4C8, 17380);
      v5 = 1;
      dword_27F38B0 = 0;
      byte_27F38AC = 0;
LABEL_44:
  if ( _stack_chk_guard != v29 )
    _stack_chk_fail(_stack_chk_guard - v29);
  return v5;
}
