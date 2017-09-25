

void __fastcall PropertyFile::readPropertyMapFromFile(int a1, _DWORD *a2)
{
  PropertyFile::readPropertyMapFromFile(a1, a2);
}


RakNet *__fastcall PropertyFile::readPropertiesFromFile(int a1, _DWORD *a2)
{
  int v2; // r9@1
  char *v3; // r10@1
  void ***v4; // r11@1
  __int64 v5; // r6@1
  unsigned __int64 v6; // r2@1
  int v7; // r11@2
  int v8; // r2@5
  char *v9; // r0@7
  int v10; // r0@7
  unsigned int v11; // r6@9
  int v12; // r2@10
  unsigned int v13; // r3@10
  __int64 v14; // r0@11
  int v15; // r1@12
  void *v16; // r0@14
  char *v17; // r0@15
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  char *v22; // r0@34
  RakNet *result; // r0@35
  signed int v24; // r1@39
  char v25; // [sp+10h] [bp-1110h]@1
  char *v26; // [sp+14h] [bp-110Ch]@10
  void *v27; // [sp+18h] [bp-1108h]@11
  _DWORD *v28; // [sp+1Ch] [bp-1104h]@2
  __int64 v29; // [sp+20h] [bp-1100h]@1
  void **v30; // [sp+30h] [bp-10F0h]@1
  int v31; // [sp+34h] [bp-10ECh]@35
  void **v32; // [sp+38h] [bp-10E8h]@1
  int v33; // [sp+3Ch] [bp-10E4h]@35
  void **v34; // [sp+106Ch] [bp-B4h]@1
  int v35; // [sp+1080h] [bp-A0h]@1
  int v36; // [sp+10DCh] [bp-44h]@1
  __int16 v37; // [sp+10E0h] [bp-40h]@1
  int v38; // [sp+10E4h] [bp-3Ch]@1
  int v39; // [sp+10E8h] [bp-38h]@1
  int v40; // [sp+10ECh] [bp-34h]@1
  int v41; // [sp+10F0h] [bp-30h]@1

  v2 = a1;
  v3 = &v25;
  v4 = &v34;
  *(_DWORD *)&v25 = _stack_chk_guard;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  LODWORD(v5) = *a2;
  HIDWORD(v5) = *(_DWORD *)(*a2 - 12);
  sub_119D70C((int)&v34);
  v34 = &off_26D3AF0;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v29 = v5;
  Core::FileStream::FileStream((int)&v30, (int)off_26D7EA4, &v29, 8);
  v30 = &off_26D7E64;
  v34 = &off_26D7E8C;
  v32 = &off_26D7E78;
  if ( !v35 )
  {
    v28 = &unk_28898CC;
    v7 = v39;
    if ( !v39 )
LABEL_3:
      sub_119C994();
    while ( 1 )
    {
      if ( *(_BYTE *)(v7 + 28) )
      {
        v8 = *(_BYTE *)(v7 + 39);
      }
      else
        sub_119C924(v7);
        v8 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 24))(v7, 10);
      v9 = sub_119D71C((char *)&v30, (const void **)&v28, v8);
      v10 = (int)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12)];
      if ( !v10 || *(_DWORD *)(v10 + 20) & 5 )
        break;
      v11 = sub_119CA58((int *)&v28, ":", 0, 1u);
      if ( v11 != -1 )
        sub_119C8C4((void **)&v26, (int *)&v28, 0, v11);
        v12 = v11 + 1;
        v13 = *(v28 - 3);
        if ( v13 < v11 + 1 )
          sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v12, v13);
        sub_119C8C4(&v27, (int *)&v28, v12, 0xFFFFFFFF);
        v14 = *(_QWORD *)(v2 + 4);
        if ( (_DWORD)v14 == HIDWORD(v14) )
        {
          std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property>(
            (unsigned __int64 *)v2,
            (int)&v26);
          v15 = (int)v27;
        }
        else
          *(_DWORD *)v14 = v26;
          HIDWORD(v14) = &unk_28898CC;
          v26 = (char *)&unk_28898CC;
          *(_DWORD *)(v14 + 4) = v27;
          v27 = &unk_28898CC;
          *(_DWORD *)(v2 + 4) = v14 + 8;
        v16 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v15 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v16);
        v17 = v26 - 12;
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v26 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v17);
      v7 = *(_DWORD *)((char *)*(v30 - 3) + (_DWORD)&v30 + 124);
      if ( !v7 )
        goto LABEL_3;
    }
    v3 = &v25;
    v4 = &v34;
    LODWORD(v6) = &dword_28898C0;
    v22 = (char *)(v28 - 3);
    if ( v28 - 3 != &dword_28898C0 )
      LODWORD(v6) = v28 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex((unsigned int *)v6);
          HIDWORD(v6) = v24 - 1;
        while ( __strex(v24 - 1, (unsigned int *)v6) );
        v24 = *(_DWORD *)v6;
        HIDWORD(v6) = *(_DWORD *)v6 - 1;
        *(_DWORD *)v6 = HIDWORD(v6);
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
  }
  v30 = &off_26D7EEC;
  *v4 = &off_26D7F14;
  v32 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v33, (int)&off_26D7F14, v6);
  v30 = &off_26D7F6C;
  *v4 = &off_26D7F80;
  v31 = 0;
  sub_119C964(&v34);
  result = (RakNet *)((char *)_stack_chk_guard - *(_DWORD *)v3);
  if ( _stack_chk_guard != *(RakNet **)v3 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall PropertyFile::savePropertiesToFile(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r6@1
  __int64 v3; // r4@1
  unsigned __int64 v4; // r2@1
  int i; // r7@2
  int v6; // r10@2
  char *v7; // r4@3
  char *v8; // r0@3
  RakNet *result; // r0@4
  RakNet *v10; // [sp+4h] [bp-10FCh]@1
  __int64 v11; // [sp+8h] [bp-10F8h]@1
  void **v12; // [sp+10h] [bp-10F0h]@1
  int v13; // [sp+14h] [bp-10ECh]@4
  void **v14; // [sp+18h] [bp-10E8h]@1
  int v15; // [sp+1Ch] [bp-10E4h]@4
  void **v16; // [sp+104Ch] [bp-B4h]@1
  int v17; // [sp+1060h] [bp-A0h]@1
  int v18; // [sp+10BCh] [bp-44h]@1
  __int16 v19; // [sp+10C0h] [bp-40h]@1
  int v20; // [sp+10C4h] [bp-3Ch]@1
  int v21; // [sp+10C8h] [bp-38h]@1
  int v22; // [sp+10CCh] [bp-34h]@1
  int v23; // [sp+10D0h] [bp-30h]@1

  v2 = a2;
  v10 = _stack_chk_guard;
  LODWORD(v3) = *a1;
  HIDWORD(v3) = *(_DWORD *)(*a1 - 12);
  sub_119D70C((int)&v16);
  v16 = &off_26D3AF0;
  v18 = 0;
  v19 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v11 = v3;
  Core::FileStream::FileStream((int)&v12, (int)off_26D81A4, &v11, 16);
  v12 = &off_26D8170;
  v16 = &off_26D8198;
  v14 = &off_26D8184;
  if ( !v17 )
  {
    v6 = *v2 >> 32;
    for ( i = *v2; i != v6; i += 8 )
    {
      v7 = sub_119C904((char *)&v14, *(_DWORD *)i, *(_DWORD *)(*(_DWORD *)i - 12));
      sub_119C904(v7, (int)":", 1);
      v8 = sub_119C904(v7, *(_DWORD *)(i + 4), *(_DWORD *)(*(_DWORD *)(i + 4) - 12));
      sub_119C904(v8, (int)"\n", 1);
    }
  }
  v12 = &off_26D679C;
  v16 = &off_26D67C4;
  v14 = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v15, (int)&off_26D67C4, v4);
  v12 = &off_26D67DC;
  v16 = &off_26D67F0;
  v13 = 0;
  sub_119C964(&v16);
  result = (RakNet *)(_stack_chk_guard - v10);
  if ( _stack_chk_guard != v10 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall PropertyFile::readPropertyMapFromFile(int a1, _DWORD *a2)
{
  int v2; // r8@1
  int v3; // r2@1
  __int64 v4; // r4@1
  const void **v5; // r6@2
  int *v6; // r0@3
  int *v7; // r6@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // r1@22
  void *v13; // r0@22
  int *v14; // r0@23
  void *ptr; // [sp+4h] [bp-34h]@1
  void *v16; // [sp+8h] [bp-30h]@1

  v2 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 8) = v3;
  *(_DWORD *)(v3 + 12) = v3;
  PropertyFile::readPropertiesFromFile((int)&ptr, a2);
  v4 = *(_QWORD *)&ptr;
  if ( ptr != v16 )
  {
    v5 = (const void **)ptr;
    do
    {
      v6 = (int *)std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                    v2,
                    v5);
      v7 = (int *)(v5 + 1);
      EntityInteraction::setInteractText(v6, v7);
      v5 = (const void **)(v7 + 1);
    }
    while ( v5 != (const void **)HIDWORD(v4) );
    if ( (_DWORD)v4 != HIDWORD(v4) )
      do
      {
        v12 = *(_DWORD *)(v4 + 4);
        v13 = (void *)(v12 - 12);
        if ( (int *)(v12 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v12 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v13);
        }
        v14 = (int *)(*(_DWORD *)v4 - 12);
        if ( v14 != &dword_28898C0 )
          v10 = (unsigned int *)(*(_DWORD *)v4 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v14);
        LODWORD(v4) = v4 + 8;
      }
      while ( (_DWORD)v4 != HIDWORD(v4) );
      LODWORD(v4) = ptr;
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
}


char *__fastcall PropertyFile::savePropertyMapToFile(_DWORD *a1, int a2)
{
  int v2; // r7@1
  __int64 v3; // r4@1
  unsigned __int64 v4; // r2@1
  int i; // r6@2
  char *v6; // r5@3
  char *v7; // r0@3
  char *result; // r0@4
  RakNet *v9; // [sp+4h] [bp-10FCh]@1
  __int64 v10; // [sp+8h] [bp-10F8h]@1
  void **v11; // [sp+10h] [bp-10F0h]@1
  int v12; // [sp+14h] [bp-10ECh]@4
  void **v13; // [sp+18h] [bp-10E8h]@1
  int v14; // [sp+1Ch] [bp-10E4h]@4
  void **v15; // [sp+104Ch] [bp-B4h]@1
  int v16; // [sp+1060h] [bp-A0h]@1
  int v17; // [sp+10BCh] [bp-44h]@1
  __int16 v18; // [sp+10C0h] [bp-40h]@1
  int v19; // [sp+10C4h] [bp-3Ch]@1
  int v20; // [sp+10C8h] [bp-38h]@1
  int v21; // [sp+10CCh] [bp-34h]@1
  int v22; // [sp+10D0h] [bp-30h]@1

  v2 = a2;
  v9 = _stack_chk_guard;
  LODWORD(v3) = *a1;
  HIDWORD(v3) = *(_DWORD *)(*a1 - 12);
  sub_119D70C((int)&v15);
  v15 = &off_26D3AF0;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v10 = v3;
  Core::FileStream::FileStream((int)&v11, (int)off_26D81A4, &v10, 16);
  v11 = &off_26D8170;
  v15 = &off_26D8198;
  v13 = &off_26D8184;
  if ( !v16 )
  {
    for ( i = *(_DWORD *)(v2 + 12); i != v2 + 4; i = sub_119CB48(i) )
    {
      v6 = sub_119C904((char *)&v13, *(_DWORD *)(i + 16), *(_DWORD *)(*(_DWORD *)(i + 16) - 12));
      sub_119C904(v6, (int)":", 1);
      v7 = sub_119C904(v6, *(_DWORD *)(i + 20), *(_DWORD *)(*(_DWORD *)(i + 20) - 12));
      sub_119C904(v7, (int)"\n", 1);
    }
  }
  v11 = &off_26D679C;
  v15 = &off_26D67C4;
  v13 = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v14, (int)&off_26D67C4, v4);
  v11 = &off_26D67DC;
  v15 = &off_26D67F0;
  v12 = 0;
  sub_119C964(&v15);
  result = (char *)(_stack_chk_guard - v9);
  if ( _stack_chk_guard != v9 )
    _stack_chk_fail(result);
  return result;
}
