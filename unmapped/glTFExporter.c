

char *__fastcall glTFExporter::getglTFFilePath(glTFExporter *this)
{
  return (char *)this + 20;
}


int __fastcall glTFExporter::addImage(glTFExporter *this, glTF::Image *a2, __int64 a3)
{
  glTFExporter *v3; // r7@1
  glTF::Image *v4; // r6@1
  unsigned __int64 *v5; // r4@1
  int v6; // r9@1
  int *v7; // r10@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // kr00_8@5
  int v11; // r3@6
  int v12; // r1@6
  int v13; // r2@6
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int v17; // [sp+0h] [bp-30h]@2

  v3 = this;
  v4 = a2;
  v5 = (unsigned __int64 *)((char *)this + 96);
  v6 = -1431655765 * ((*((_DWORD *)this + 25) - *((_DWORD *)this + 24)) >> 3);
  *((_DWORD *)a2 + 5) = v6;
  v7 = (int *)((char *)a2 + 16);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 4) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v17, "image_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v17);
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *(_QWORD *)((char *)v3 + 100);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Image,std::allocator<glTF::Image>>::_M_emplace_back_aux<glTF::Image const&>(v5, (int)v4);
  else
    sub_21E8AF4((int *)v10, (int *)v4);
    v11 = v10 + 4;
    v12 = *((_DWORD *)v4 + 2);
    v13 = *((_DWORD *)v4 + 3);
    *(_DWORD *)v11 = *((_DWORD *)v4 + 1);
    *(_DWORD *)(v11 + 4) = v12;
    *(_DWORD *)(v11 + 8) = v13;
    sub_21E8AF4((int *)(v10 + 16), v7);
    *(_DWORD *)(v10 + 20) = *((_DWORD *)v4 + 5);
    *((_DWORD *)v3 + 25) += 24;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


char *__fastcall glTFExporter::serialize(glTFExporter *this)
{
  glTFExporter *v1; // r5@1
  pthread_mutex_t *v2; // r8@1
  int v3; // r0@2
  int v4; // r4@9
  int v5; // r7@9
  unsigned __int64 v6; // r2@9
  Core::FileStdStreamBuf *v7; // r4@10
  int *v8; // r7@10
  void *v9; // r0@11
  int v10; // r1@12
  unsigned __int64 v11; // r2@12
  char *result; // r0@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  RakNet *v15; // [sp+4h] [bp-116Ch]@1
  int v16; // [sp+Ch] [bp-1164h]@11
  char v17; // [sp+10h] [bp-1160h]@11
  char v18; // [sp+30h] [bp-1140h]@7
  int v19; // [sp+40h] [bp-1130h]@5
  int v20; // [sp+44h] [bp-112Ch]@5
  char v21; // [sp+48h] [bp-1128h]@5
  void (*v22)(void); // [sp+50h] [bp-1120h]@5
  int v23; // [sp+5Ch] [bp-1114h]@3
  int v24; // [sp+60h] [bp-1110h]@3
  char v25; // [sp+64h] [bp-110Ch]@3
  void (*v26)(void); // [sp+6Ch] [bp-1104h]@3
  int v27[3]; // [sp+78h] [bp-10F8h]@9
  void **v28; // [sp+88h] [bp-10E8h]@9
  int v29; // [sp+8Ch] [bp-10E4h]@13
  void **v30; // [sp+90h] [bp-10E0h]@9
  int v31; // [sp+94h] [bp-10DCh]@10
  void **v32; // [sp+10C4h] [bp-ACh]@9
  int v33; // [sp+10D8h] [bp-98h]@9
  int v34; // [sp+1134h] [bp-3Ch]@9
  __int16 v35; // [sp+1138h] [bp-38h]@9
  int v36; // [sp+113Ch] [bp-34h]@9
  int v37; // [sp+1140h] [bp-30h]@9
  int v38; // [sp+1144h] [bp-2Ch]@9
  int v39; // [sp+1148h] [bp-28h]@9

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 220);
  v15 = _stack_chk_guard;
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  v23 = *((_DWORD *)v1 + 5);
  v24 = *(_DWORD *)(v23 - 12);
  Core::FileSystem::deleteFile((int)&v25, (__int64 *)&v23);
  if ( v26 )
    v26();
  v19 = *((_DWORD *)v1 + 5);
  v20 = *(_DWORD *)(v19 - 12);
  Core::FileSystem::createEmptyFile((int)&v21, (__int64 *)&v19);
  if ( v22 )
    v22();
  Json::Value::Value(&v18, 0);
  glTFExporter::_serialize(v1, (Json::Value *)&v18);
  if ( *((_BYTE *)v1 + 24) )
    glTFExporter::_serializeBinaryData(v1, (Json::Value *)&v18);
  else
    v4 = *((_DWORD *)v1 + 5);
    v5 = *(_DWORD *)(v4 - 12);
    sub_21B6308((int)&v32);
    v32 = &off_26D3AF0;
    v34 = 0;
    v35 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v27[0] = v4;
    v27[1] = v5;
    Core::FileStream::FileStream((int)&v28, (int)off_26D81A4, (__int64 *)v27, 16);
    v28 = &off_26D8170;
    v32 = &off_26D8198;
    v30 = &off_26D8184;
    if ( v33 )
    {
      v7 = (Core::FileStdStreamBuf *)&v31;
      v8 = (int *)&v30;
    }
    else
      sub_21E94B4((void **)&v16, "\t");
      Json::StyledStreamWriter::StyledStreamWriter((int)&v17, &v16);
      v9 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      Json::StyledStreamWriter::write((int)&v17, (int)&v30, (const Json::Value *)&v18);
      Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)&v31, v10, v11);
      Json::StyledStreamWriter::~StyledStreamWriter((Json::StyledStreamWriter *)&v17);
    v28 = &off_26D679C;
    v32 = &off_26D67C4;
    *v8 = (int)&off_26D67B0;
    Core::FileStdStreamBuf::~FileStdStreamBuf(v7, (int)&off_26D67C4, v6);
    v28 = &off_26D67DC;
    v32 = &off_26D67F0;
    v29 = 0;
    sub_21B6560(&v32);
  Json::Value::~Value((Json::Value *)&v18);
    pthread_mutex_unlock(v2);
  result = (char *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall glTFExporter::glTFExporter(int a1, int *a2, int *a3)
{
  int v3; // r8@1
  int *v4; // r4@1
  int *v5; // r11@1
  int *v6; // r6@1
  int v7; // r5@1
  int v8; // r9@1
  int v9; // r4@6
  int v10; // r1@6
  void *v11; // r0@6
  char *v12; // r0@7
  void *v13; // r0@8
  int *v14; // r10@13
  signed int v15; // r4@13
  signed int v16; // r6@13
  int v17; // r4@14
  signed int v18; // r6@14
  __int64 v19; // r1@14
  void *v20; // r0@15
  char *v21; // r0@17
  void *v22; // r0@18
  char *v23; // r0@20
  __int64 v24; // r0@23
  int v25; // r0@23
  int v26; // r2@24
  const char *v27; // r6@24
  const char *v28; // r1@26
  void *v29; // r0@28
  char *v30; // r0@29
  void *v31; // r0@30
  void *v32; // r0@31
  void *v33; // r0@32
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  unsigned int *v39; // r2@44
  signed int v40; // r1@46
  unsigned int *v41; // r2@48
  signed int v42; // r1@50
  unsigned int *v43; // r2@52
  signed int v44; // r1@54
  unsigned int *v45; // r2@56
  signed int v46; // r1@58
  unsigned int *v47; // r2@60
  signed int v48; // r1@62
  unsigned int *v49; // r2@64
  signed int v50; // r1@66
  unsigned int *v51; // r2@68
  signed int v52; // r1@70
  unsigned int *v53; // r2@84
  signed int v54; // r1@86
  unsigned int *v55; // r2@88
  signed int v56; // r1@90
  unsigned int *v57; // r2@92
  signed int v58; // r1@94
  int *v59; // [sp+18h] [bp-6F8h]@1
  int *v60; // [sp+1Ch] [bp-6F4h]@1
  const char *v61; // [sp+20h] [bp-6F0h]@26
  int v62; // [sp+24h] [bp-6ECh]@28
  int v63; // [sp+28h] [bp-6E8h]@21
  int v64; // [sp+2Ch] [bp-6E4h]@21
  char v65; // [sp+30h] [bp-6E0h]@21
  void (*v66)(void); // [sp+38h] [bp-6D8h]@21
  int v67; // [sp+44h] [bp-6CCh]@14
  const char *v68; // [sp+48h] [bp-6C8h]@13
  int v69; // [sp+4Ch] [bp-6C4h]@15
  unsigned int v70; // [sp+50h] [bp-6C0h]@12
  int v71; // [sp+54h] [bp-6BCh]@10
  int v72; // [sp+58h] [bp-6B8h]@10
  char v73; // [sp+5Ch] [bp-6B4h]@10
  void (*v74)(void); // [sp+64h] [bp-6ACh]@10
  int v75; // [sp+70h] [bp-6A0h]@9
  int v76; // [sp+74h] [bp-69Ch]@9
  int v77; // [sp+78h] [bp-698h]@6
  const char *v78; // [sp+7Ch] [bp-694h]@6
  int v79; // [sp+80h] [bp-690h]@6
  __int64 v80; // [sp+84h] [bp-68Ch]@4
  int v81; // [sp+8Ch] [bp-684h]@1
  int v82; // [sp+90h] [bp-680h]@1
  char v83; // [sp+94h] [bp-67Ch]@1
  void (*v84)(void); // [sp+9Ch] [bp-674h]@1
  int v85; // [sp+B0h] [bp-660h]@6
  signed int v86; // [sp+B4h] [bp-65Ch]@6
  int v87; // [sp+B8h] [bp-658h]@6
  int v88; // [sp+BCh] [bp-654h]@6
  __int64 v89; // [sp+D0h] [bp-640h]@23
  char v90; // [sp+E4h] [bp-62Ch]@23
  int v91; // [sp+6E4h] [bp-2Ch]@23
  RakNet *v92; // [sp+6E8h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = (int *)(a1 + 4);
  v92 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_26EBBF0;
  v6 = (int *)(a1 + 8);
  sub_21E8AF4((int *)(a1 + 4), a2);
  sub_21E8AF4(v6, v4);
  *(_DWORD *)(v3 + 12) = &unk_28898CC;
  v59 = (int *)(v3 + 12);
  *(_DWORD *)(v3 + 16) = &unk_28898CC;
  *(_DWORD *)(v3 + 20) = &unk_28898CC;
  *(_BYTE *)(v3 + 24) = 1;
  *(_DWORD *)(v3 + 28) = 0;
  v7 = v3 + 28;
  v60 = (int *)(v3 + 20);
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  glTF::Asset::Asset((glTF::Asset *)(v3 + 52));
  _aeabi_memclr4(v3 + 72, 132);
  *(_DWORD *)(v3 + 208) = 0;
  v8 = v3 + 208;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  v81 = *(_DWORD *)(v3 + 4);
  v82 = *(_DWORD *)(v81 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v83, (__int64 *)&v81);
  if ( v84 )
    v84();
  if ( *(_BYTE *)(v3 + 24) )
    sub_21E91E0((void **)&v80 + 1, unk_27EF0D4, glTFExporter::GLB_EXTENSION);
  else
    sub_21E91E0((void **)&v80 + 1, unk_27EF0CC, glTFExporter::GLTF_EXTENSION);
  Util::removeIllegalChars((int *)&v80, v6);
  v9 = *v5;
  Util::format((Util *)&v77, "%s.%s", v80);
  v10 = *(_DWORD *)(v77 - 12);
  v85 = v9;
  v88 = v10;
  v86 = -1;
  v87 = v77;
  Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v78, (unsigned int)&v85, 2u);
  sub_21E94B4((void **)&v79, v78);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v60, &v79);
  v11 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v79 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (char *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v78 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v77 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v75 = *v60;
  v76 = *(_DWORD *)(v75 - 12);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v75) == 1 )
    v71 = *v60;
    v72 = *(_DWORD *)(v71 - 12);
    Core::FileSystem::deleteFile((int)&v73, (__int64 *)&v71);
    if ( v74 )
      v74();
  sub_21E91E0((void **)&v70, unk_27EF0C4, glTFExporter::BINARY_EXTENSION);
    v14 = (int *)(v3 + 16);
    sub_21E91E0((void **)&v68, unk_27EF0DC, glTFExporter::GLB_BUFFER_URI);
    v15 = 0;
    v16 = 1;
    v17 = *v5;
    v18 = *(_DWORD *)(*v5 - 12);
    Util::format((Util *)&v67, "%s.%s", __PAIR__(v70, (unsigned int)v80));
    LODWORD(v19) = v67;
    HIDWORD(v19) = *(_DWORD *)(v67 - 12);
    v85 = v17;
    v86 = v18;
    *(_QWORD *)&v87 = v19;
    Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v68, (unsigned int)&v85, 2u);
    v15 = 1;
    v16 = 0;
  sub_21E94B4((void **)&v69, v68);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v59, &v69);
  v20 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v69 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v15 == 1 )
    v21 = (char *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
      }
      else
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v67 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  if ( v16 == 1 )
    v23 = (char *)(v68 - 12);
      v57 = (unsigned int *)(v68 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  v63 = *v59;
  v64 = *(_DWORD *)(v63 - 12);
  Core::FileSystem::deleteFile((int)&v65, (__int64 *)&v63);
  if ( v66 )
    v66();
  LODWORD(v24) = *v59;
  HIDWORD(v24) = *(_DWORD *)(*v59 - 12);
  v89 = v24;
  v25 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v90, (const char **)&v89);
  if ( v91 )
    v26 = *(_QWORD *)(v25 + 8 * v91 + 1016) >> 32;
    v27 = (const char *)*(_QWORD *)(v25 + 8 * v91 + 1016);
    if ( v26 == -1 )
      v26 = strlen(v27);
    sub_21E91E0((void **)&v61, (unsigned int)v27, v26);
    v28 = v61;
    v28 = (const char *)&unk_28898CC;
    v61 = (const char *)&unk_28898CC;
  sub_21E94B4((void **)&v62, v28);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v14, &v62);
  v29 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v62 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (char *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v61 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v70 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v80 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(HIDWORD(v80) - 12);
  if ( (int *)(HIDWORD(v80) - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(HIDWORD(v80) - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  if ( _stack_chk_guard != v92 )
    _stack_chk_fail(_stack_chk_guard - v92);
  return v3;
}


int __fastcall glTFExporter::addScene(glTFExporter *this, glTF::Scene *a2, __int64 a3)
{
  glTFExporter *v3; // r5@1
  glTF::Scene *v4; // r6@1
  __int64 *v5; // r7@1
  int v6; // r8@1
  int *v7; // r4@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // kr00_8@5
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // [sp+0h] [bp-28h]@2

  v3 = this;
  v4 = a2;
  v5 = (__int64 *)((char *)this + 156);
  v6 = -858993459 * ((*((_DWORD *)this + 40) - *((_DWORD *)this + 39)) >> 2);
  *((_DWORD *)a2 + 4) = v6;
  v7 = (int *)((char *)a2 + 12);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 3) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v14, "scene_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v14);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *((_QWORD *)v3 + 20);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Scene,std::allocator<glTF::Scene>>::_M_emplace_back_aux<glTF::Scene const&>(v5, v4);
  else
    __gnu_cxx::new_allocator<glTF::Scene>::construct<glTF::Scene,glTF::Scene const&>((int)v5, v10, v4);
    *((_DWORD *)v3 + 40) += 20;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


char *__fastcall glTFExporter::getBinaryFilePath(glTFExporter *this)
{
  return (char *)this + 12;
}


Json::Value *__fastcall glTFExporter::_serializeAccessor(glTFExporter *this, Json::Value *a2, const glTF::Accessor *a3)
{
  const glTF::Accessor *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "accessors");
  glTF::Accessor::serialize((glTF::Accessor *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


int __fastcall glTFExporter::addNode(int a1, int a2, __int64 a3)
{
  int v3; // r5@1
  const glTF::Node *v4; // r6@1
  unsigned __int64 *v5; // r7@1
  int v6; // r8@1
  int *v7; // r4@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // r0@5
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // [sp+0h] [bp-28h]@2

  v3 = a1;
  v4 = (const glTF::Node *)a2;
  v5 = (unsigned __int64 *)(a1 + 132);
  v6 = 799063683 * ((*(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 132)) >> 2);
  *(_DWORD *)(a2 + 168) = v6;
  v7 = (int *)(a2 + 164);
  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 164) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v14, "node_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v14);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *(_QWORD *)(v3 + 136);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Node,std::allocator<glTF::Node>>::_M_emplace_back_aux<glTF::Node const&>(v5, v4);
  else
    glTF::Node::Node((glTF::Node *)v10, v4);
    *(_DWORD *)(v3 + 136) += 172;
    pthread_mutex_unlock((pthread_mutex_t *)(v3 + 220));
  return v6;
}


Json::Value *__fastcall glTFExporter::_serializeAsset(glTFExporter *this, Json::Value *a2, const glTF::Asset *a3)
{
  const glTF::Asset *v3; // r4@1
  int v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = Json::Value::operator[](a2, "asset");
  glTF::Asset::serialize((glTF::Asset *)&v6, (int)v3);
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


pthread_mutex_t *__fastcall glTFExporter::addNodeChild(glTFExporter *this, int a2, int a3)
{
  glTFExporter *v3; // r4@1
  pthread_mutex_t *v4; // r5@1
  int v5; // r6@1
  int v6; // r10@1
  int v7; // r0@2
  int i; // r5@3
  int v9; // r9@3
  __int64 v10; // r0@5
  void *v11; // r4@7
  char *v12; // r7@7
  unsigned int v13; // r2@7
  unsigned int v14; // r1@9
  unsigned int v15; // r8@9
  int *v16; // r6@16
  pthread_mutex_t *result; // r0@24
  pthread_mutex_t *mutex; // [sp+4h] [bp-2Ch]@3
  int v19; // [sp+8h] [bp-28h]@1

  v3 = this;
  v4 = (pthread_mutex_t *)((char *)this + 220);
  v5 = a2;
  v6 = a3;
  v19 = a2;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock(v4);
    if ( v7 )
      sub_21E5E14(v7);
  }
  mutex = v4;
  v9 = *(_QWORD *)((char *)v3 + 132) >> 32;
  for ( i = *(_QWORD *)((char *)v3 + 132); v9 != i; i += 172 )
    if ( *(_DWORD *)(i + 168) == v5 )
    {
      v10 = *(_QWORD *)(i + 8);
      if ( (_DWORD)v10 == HIDWORD(v10) )
      {
        v11 = *(void **)(i + 4);
        v12 = 0;
        v13 = ((signed int)v10 - (signed int)v11) >> 2;
        if ( !v13 )
          v13 = 1;
        HIDWORD(v10) = v13 + (((signed int)v10 - (signed int)v11) >> 2);
        v15 = v13 + (((signed int)v10 - (signed int)v11) >> 2);
        if ( 0 != HIDWORD(v10) >> 30 )
          v15 = 0x3FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
        {
          if ( v15 >= 0x40000000 )
            sub_21E57F4();
          v12 = (char *)operator new(4 * v15);
          LODWORD(v10) = *(_QWORD *)(i + 4) >> 32;
          v11 = (void *)*(_QWORD *)(i + 4);
        }
        v16 = (int *)&v12[v10 - (_DWORD)v11];
        *v16 = v6;
        if ( ((signed int)v10 - (signed int)v11) >> 2 )
          _aeabi_memmove4(v12, v11);
        if ( v11 )
          operator delete(v11);
        *(_DWORD *)(i + 4) = v12;
        *(_DWORD *)(i + 8) = v16 + 1;
        *(_DWORD *)(i + 12) = &v12[4 * v15];
        v5 = v19;
      }
      else
        *(_DWORD *)v10 = v6;
        *(_DWORD *)(i + 8) = v10 + 4;
    }
  result = mutex;
    result = (pthread_mutex_t *)pthread_mutex_unlock(mutex);
  return result;
}


int __fastcall glTFExporter::addBuffer(glTFExporter *this, glTF::Buffer *a2, __int64 a3)
{
  glTFExporter *v3; // r7@1
  glTF::Buffer *v4; // r6@1
  char *v5; // r4@1
  int v6; // r9@1
  int *v7; // r10@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // kr00_8@5
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // [sp+0h] [bp-30h]@2

  v3 = this;
  v4 = a2;
  v5 = (char *)this + 72;
  v6 = (*((_DWORD *)this + 19) - *((_DWORD *)this + 18)) >> 4;
  *((_DWORD *)a2 + 3) = v6;
  v7 = (int *)((char *)a2 + 8);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 2) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v14, "buffer_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v14);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *(_QWORD *)((char *)v3 + 76);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Buffer,std::allocator<glTF::Buffer>>::_M_emplace_back_aux<glTF::Buffer const&>(v5, (int)v4);
  else
    sub_21E8AF4((int *)v10, (int *)v4);
    *(_DWORD *)(v10 + 4) = *((_DWORD *)v4 + 1);
    sub_21E8AF4((int *)(v10 + 8), v7);
    *(_DWORD *)(v10 + 12) = *((_DWORD *)v4 + 3);
    *((_DWORD *)v3 + 19) += 16;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


glTFExporter *__fastcall glTFExporter::~glTFExporter(glTFExporter *this)
{
  glTFExporter *v1; // r10@1
  void *v2; // r0@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13
  int v8; // r5@18
  int v9; // r7@18
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  int v12; // r1@28
  void *v13; // r0@28
  int v14; // r5@33
  int v15; // r7@33
  unsigned int *v16; // r2@35
  signed int v17; // r1@37
  unsigned int *v18; // r2@39
  signed int v19; // r1@41
  int v20; // r1@51
  void *v21; // r0@51
  int *v22; // r0@52
  int v23; // r5@57
  int v24; // r7@57
  unsigned int *v25; // r2@59
  signed int v26; // r1@61
  int v27; // r1@67
  void *v28; // r0@67
  int v29; // r5@74
  int v30; // r7@74
  unsigned int *v31; // r2@76
  signed int v32; // r1@78
  int v33; // r1@84
  void *v34; // r0@84
  glTF::Node *v35; // r0@89
  glTF::Node *v36; // r4@89
  int v37; // r5@94
  int v38; // r7@94
  unsigned int *v39; // r2@96
  signed int v40; // r1@98
  int v41; // r1@104
  void *v42; // r0@104
  Json::Value *v43; // r0@105
  Json::Value *v44; // r4@105
  int v45; // r5@114
  int v46; // r7@114
  unsigned int *v47; // r2@116
  signed int v48; // r1@118
  unsigned int *v49; // r2@120
  signed int v50; // r1@122
  int v51; // r1@132
  void *v52; // r0@132
  int *v53; // r0@133
  int v54; // r5@138
  int v55; // r7@138
  unsigned int *v56; // r2@140
  signed int v57; // r1@142
  unsigned int *v58; // r2@144
  signed int v59; // r1@146
  int v60; // r1@156
  void *v61; // r0@156
  int *v62; // r0@157
  int v63; // r5@162
  int v64; // r7@162
  unsigned int *v65; // r2@164
  signed int v66; // r1@166
  int v67; // r1@172
  void *v68; // r0@172
  int v69; // r5@177
  int v70; // r7@177
  unsigned int *v71; // r2@179
  signed int v72; // r1@181
  unsigned int *v73; // r2@183
  signed int v74; // r1@185
  int v75; // r1@195
  void *v76; // r0@195
  int *v77; // r0@196
  void *v78; // r0@201
  int v79; // r5@203
  int v80; // r7@203
  unsigned int *v81; // r2@205
  signed int v82; // r1@207
  int v83; // r1@213
  void *v84; // r0@213
  void *v85; // r0@214
  void *v86; // r0@216
  int v87; // r1@222
  void *v88; // r0@222
  int v89; // r1@223
  void *v90; // r0@223
  int v91; // r1@224
  void *v92; // r0@224
  int v93; // r1@225
  void *v94; // r0@225
  int v95; // r1@226
  void *v96; // r0@226
  unsigned int *v98; // r2@228
  signed int v99; // r1@230
  unsigned int *v100; // r2@232
  signed int v101; // r1@234
  unsigned int *v102; // r2@236
  signed int v103; // r1@238
  unsigned int *v104; // r2@240
  signed int v105; // r1@242
  unsigned int *v106; // r2@244
  signed int v107; // r1@246

  v1 = this;
  *(_DWORD *)this = &off_26EBBF0;
  v2 = (void *)*((_DWORD *)this + 52);
  if ( v2 )
    operator delete(v2);
  v4 = (void *)(*((_QWORD *)v1 + 24) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 24);
  if ( v3 != v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 48);
  }
  if ( v3 )
    operator delete(v3);
  v9 = *(_QWORD *)((char *)v1 + 180) >> 32;
  v8 = *(_QWORD *)((char *)v1 + 180);
  if ( v8 != v9 )
      v12 = *(_DWORD *)(v8 + 48);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v12 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v8 += 56;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 45);
  if ( v8 )
    operator delete((void *)v8);
  v15 = *((_QWORD *)v1 + 21) >> 32;
  v14 = *((_QWORD *)v1 + 21);
  if ( v14 != v15 )
      v20 = *(_DWORD *)(v14 + 8);
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v20 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (int *)(*(_DWORD *)v14 - 12);
      if ( v22 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v14 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v14 += 16;
    while ( v14 != v15 );
    v14 = *((_DWORD *)v1 + 42);
  if ( v14 )
    operator delete((void *)v14);
  v24 = *(_QWORD *)((char *)v1 + 156) >> 32;
  v23 = *(_QWORD *)((char *)v1 + 156);
  if ( v23 != v24 )
      v27 = *(_DWORD *)(v23 + 12);
      v28 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v27 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      if ( *(_DWORD *)v23 )
        operator delete(*(void **)v23);
      v23 += 20;
    while ( v23 != v24 );
    v23 = *((_DWORD *)v1 + 39);
  if ( v23 )
    operator delete((void *)v23);
  v30 = *((_QWORD *)v1 + 18) >> 32;
  v29 = *((_QWORD *)v1 + 18);
  if ( v29 != v30 )
      v33 = *(_DWORD *)(v29 + 32);
      v34 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v33 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v29 += 40;
    while ( v29 != v30 );
    v29 = *((_DWORD *)v1 + 36);
  if ( v29 )
    operator delete((void *)v29);
  v36 = (glTF::Node *)(*(_QWORD *)((char *)v1 + 132) >> 32);
  v35 = (glTF::Node *)*(_QWORD *)((char *)v1 + 132);
  if ( v35 != v36 )
      v35 = (glTF::Node *)(glTF::Node::~Node(v35) + 172);
    while ( v36 != v35 );
    v35 = (glTF::Node *)*((_DWORD *)v1 + 33);
  if ( v35 )
    operator delete((void *)v35);
  v38 = *((_QWORD *)v1 + 15) >> 32;
  v37 = *((_QWORD *)v1 + 15);
  if ( v37 != v38 )
      Json::Value::~Value((Json::Value *)(v37 + 24));
      v41 = *(_DWORD *)(v37 + 12);
      v42 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v41 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v44 = (Json::Value *)(*(_QWORD *)v37 >> 32);
      v43 = (Json::Value *)*(_QWORD *)v37;
      if ( v43 != v44 )
        do
          v43 = (Json::Value *)((char *)Json::Value::~Value(v43) + 40);
        while ( v44 != v43 );
        v43 = *(Json::Value **)v37;
      if ( v43 )
        operator delete((void *)v43);
      v37 += 40;
    while ( v37 != v38 );
    v37 = *((_DWORD *)v1 + 30);
  if ( v37 )
    operator delete((void *)v37);
  v46 = *(_QWORD *)((char *)v1 + 108) >> 32;
  v45 = *(_QWORD *)((char *)v1 + 108);
  if ( v45 != v46 )
      v51 = *(_DWORD *)(v45 + 60);
      v52 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v51 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      Json::Value::~Value((Json::Value *)(v45 + 40));
      Json::Value::~Value((Json::Value *)(v45 + 24));
      Json::Value::~Value((Json::Value *)(v45 + 8));
      v53 = (int *)(*(_DWORD *)v45 - 12);
      if ( v53 != &dword_28898C0 )
        v49 = (unsigned int *)(*(_DWORD *)v45 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v45 += 72;
    while ( v45 != v46 );
    v45 = *((_DWORD *)v1 + 27);
  if ( v45 )
    operator delete((void *)v45);
  v55 = *((_QWORD *)v1 + 12) >> 32;
  v54 = *((_QWORD *)v1 + 12);
  if ( v54 != v55 )
      v60 = *(_DWORD *)(v54 + 16);
      v61 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v60 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
      v62 = (int *)(*(_DWORD *)v54 - 12);
      if ( v62 != &dword_28898C0 )
        v58 = (unsigned int *)(*(_DWORD *)v54 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v62);
      v54 += 24;
    while ( v54 != v55 );
    v54 = *((_DWORD *)v1 + 24);
  if ( v54 )
    operator delete((void *)v54);
  v64 = *(_QWORD *)((char *)v1 + 84) >> 32;
  v63 = *(_QWORD *)((char *)v1 + 84);
  if ( v63 != v64 )
      v67 = *(_DWORD *)(v63 + 16);
      v68 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v67 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j__ZdlPv_9(v68);
      v63 += 24;
    while ( v63 != v64 );
    v63 = *((_DWORD *)v1 + 21);
  if ( v63 )
    operator delete((void *)v63);
  v70 = *((_QWORD *)v1 + 9) >> 32;
  v69 = *((_QWORD *)v1 + 9);
  if ( v69 != v70 )
      v75 = *(_DWORD *)(v69 + 8);
      v76 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v71 = (unsigned int *)(v75 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v76);
      v77 = (int *)(*(_DWORD *)v69 - 12);
      if ( v77 != &dword_28898C0 )
        v73 = (unsigned int *)(*(_DWORD *)v69 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
      v69 += 16;
    while ( v69 != v70 );
    v69 = *((_DWORD *)v1 + 18);
  if ( v69 )
    operator delete((void *)v69);
  glTF::Asset::~Asset((glTFExporter *)((char *)v1 + 52));
  v78 = (void *)*((_DWORD *)v1 + 10);
  if ( v78 )
    operator delete(v78);
  v80 = *(_QWORD *)((char *)v1 + 28) >> 32;
  v79 = *(_QWORD *)((char *)v1 + 28);
  if ( v79 != v80 )
      v83 = *(_DWORD *)(v79 + 56);
      v84 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v83 - 4);
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j__ZdlPv_9(v84);
      v85 = *(void **)(v79 + 44);
      if ( v85 )
        operator delete(v85);
      v86 = *(void **)(v79 + 32);
      if ( v86 )
        operator delete(v86);
      v79 += 64;
    while ( v79 != v80 );
    v79 = *((_DWORD *)v1 + 7);
  if ( v79 )
    operator delete((void *)v79);
  v87 = *((_DWORD *)v1 + 5);
  v88 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v87 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
    else
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = *((_DWORD *)v1 + 4);
  v90 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v89 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = *((_DWORD *)v1 + 3);
  v92 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v91 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  v93 = *((_DWORD *)v1 + 2);
  v94 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v93 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  v95 = *((_DWORD *)v1 + 1);
  v96 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v95 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  return v1;
}


Json::Value *__fastcall glTFExporter::_serializeTexture(glTFExporter *this, Json::Value *a2, const glTF::Texture *a3)
{
  const glTF::Texture *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "textures");
  glTF::Texture::serialize((glTF::Texture *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


int __fastcall glTFExporter::addShader(glTFExporter *this, glTF::Shader *a2, __int64 a3)
{
  glTFExporter *v3; // r7@1
  glTF::Shader *v4; // r6@1
  char *v5; // r4@1
  int v6; // r9@1
  int *v7; // r10@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // kr00_8@5
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // [sp+0h] [bp-30h]@2

  v3 = this;
  v4 = a2;
  v5 = (char *)this + 168;
  v6 = (*((_DWORD *)this + 43) - *((_DWORD *)this + 42)) >> 4;
  *((_DWORD *)a2 + 3) = v6;
  v7 = (int *)((char *)a2 + 8);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 2) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v14, "shader_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v14);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *(_QWORD *)((char *)v3 + 172);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Shader,std::allocator<glTF::Shader>>::_M_emplace_back_aux<glTF::Shader const&>(v5, (int)v4);
  else
    sub_21E8AF4((int *)v10, (int *)v4);
    *(_DWORD *)(v10 + 4) = *((_DWORD *)v4 + 1);
    sub_21E8AF4((int *)(v10 + 8), v7);
    *(_DWORD *)(v10 + 12) = *((_DWORD *)v4 + 3);
    *((_DWORD *)v3 + 43) += 16;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


int __fastcall glTFExporter::addTexture(glTFExporter *this, glTF::Texture *a2, __int64 a3)
{
  glTFExporter *v3; // r8@1
  glTF::Texture *v4; // r11@1
  unsigned __int64 *v5; // r7@1
  int v6; // r10@1
  int *v7; // r6@1
  void *v8; // r0@2
  pthread_mutex_t *v9; // r6@3
  int v10; // r0@4
  __int64 v11; // kr00_8@5
  int v12; // r3@6
  int v13; // r4@6
  int v14; // r5@6
  int v15; // r6@6
  int v16; // r7@6
  int v17; // r1@6
  int v18; // r3@6
  int v19; // r4@6
  int v20; // r5@6
  int v21; // r6@6
  int v22; // r7@6
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  int *v26; // [sp+4h] [bp-34h]@3
  int v27; // [sp+8h] [bp-30h]@2

  v3 = this;
  v4 = a2;
  v5 = (unsigned __int64 *)((char *)this + 180);
  v6 = -1227133513 * ((*((_DWORD *)this + 46) - *((_DWORD *)this + 45)) >> 3);
  *((_DWORD *)a2 + 13) = v6;
  v7 = (int *)((char *)a2 + 48);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 12) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v27, "texture_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v27);
    v8 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v27 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  v26 = v7;
  v9 = (pthread_mutex_t *)((char *)v3 + 220);
  if ( &pthread_create )
    v10 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v10 )
      sub_21E5E14(v10);
  v11 = *((_QWORD *)v3 + 23);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<glTF::Texture,std::allocator<glTF::Texture>>::_M_emplace_back_aux<glTF::Texture const&>(v5, (int)v4);
  else
    v12 = *((_DWORD *)v4 + 1);
    v13 = *((_DWORD *)v4 + 2);
    v14 = *((_DWORD *)v4 + 3);
    v15 = *((_DWORD *)v4 + 4);
    v16 = *((_DWORD *)v4 + 5);
    *(_DWORD *)v11 = *(_DWORD *)v4;
    *(_DWORD *)(v11 + 4) = v12;
    *(_DWORD *)(v11 + 8) = v13;
    *(_DWORD *)(v11 + 12) = v14;
    *(_DWORD *)(v11 + 16) = v15;
    *(_DWORD *)(v11 + 20) = v16;
    v17 = v11 + 24;
    v18 = *((_DWORD *)v4 + 7);
    v19 = *((_DWORD *)v4 + 8);
    v20 = *((_DWORD *)v4 + 9);
    v21 = *((_DWORD *)v4 + 10);
    v22 = *((_DWORD *)v4 + 11);
    *(_DWORD *)v17 = *((_DWORD *)v4 + 6);
    *(_DWORD *)(v17 + 4) = v18;
    *(_DWORD *)(v17 + 8) = v19;
    *(_DWORD *)(v17 + 12) = v20;
    *(_DWORD *)(v17 + 16) = v21;
    *(_DWORD *)(v17 + 20) = v22;
    v9 = (pthread_mutex_t *)((char *)v3 + 220);
    sub_21E8AF4((int *)(v11 + 48), v26);
    *(_DWORD *)(v11 + 52) = *((_DWORD *)v4 + 13);
    *((_DWORD *)v3 + 46) += 56;
    pthread_mutex_unlock(v9);
  return v6;
}


Json::Value *__fastcall glTFExporter::_serializeImage(glTFExporter *this, Json::Value *a2, const glTF::Image *a3)
{
  const glTF::Image *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "images");
  glTF::Image::serialize((glTF::Image *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


Json::Value *__fastcall glTFExporter::_serializeExtension(int a1, Json::Value *a2, const char **a3)
{
  const char **v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "extensionsUsed");
  Json::Value::Value((int)&v6, v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


Json::Value *__fastcall glTFExporter::_serializeDefaultScene(glTFExporter *this, Json::Value *a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = Json::Value::operator[](a2, "scene");
  Json::Value::Value((Json::Value *)&v6, v3);
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


Json::Value *__fastcall glTFExporter::_serializeBuffer(glTFExporter *this, Json::Value *a2, const glTF::Buffer *a3)
{
  const glTF::Buffer *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "buffers");
  glTF::Buffer::serialize((glTF::Buffer *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


Json::Value *__fastcall glTFExporter::_serializeShader(glTFExporter *this, Json::Value *a2, const glTF::Shader *a3)
{
  const glTF::Shader *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "shaders");
  glTF::Shader::serialize((glTF::Shader *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


int __fastcall glTFExporter::addBufferView(glTFExporter *this, glTF::BufferView *a2, __int64 a3)
{
  glTFExporter *v3; // r6@1
  glTF::BufferView *v4; // r5@1
  unsigned __int64 *v5; // r4@1
  int v6; // r8@1
  int *v7; // r10@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // kr00_8@5
  int v11; // r1@6
  int v12; // r2@6
  int v13; // r3@6
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int v17; // [sp+4h] [bp-2Ch]@2

  v3 = this;
  v4 = a2;
  v5 = (unsigned __int64 *)((char *)this + 84);
  v6 = -1431655765 * ((*((_DWORD *)this + 22) - *((_DWORD *)this + 21)) >> 3);
  *((_DWORD *)a2 + 5) = v6;
  v7 = (int *)((char *)a2 + 16);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 4) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v17, "bufferView_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v17);
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *((_QWORD *)v3 + 11);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::BufferView,std::allocator<glTF::BufferView>>::_M_emplace_back_aux<glTF::BufferView const&>(
      v5,
      (int)v4);
  else
    v11 = *((_DWORD *)v4 + 1);
    v12 = *((_DWORD *)v4 + 2);
    v13 = *((_DWORD *)v4 + 3);
    *(_DWORD *)v10 = *(_DWORD *)v4;
    *(_DWORD *)(v10 + 4) = v11;
    *(_DWORD *)(v10 + 8) = v12;
    *(_DWORD *)(v10 + 12) = v13;
    sub_21E8AF4((int *)(v10 + 16), v7);
    *(_DWORD *)(v10 + 20) = *((_DWORD *)v4 + 5);
    *((_DWORD *)v3 + 22) += 24;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


int __fastcall glTFExporter::addAnimation(__int64 this)
{
  int v1; // r5@1
  __int64 v2; // kr00_8@1
  pthread_mutex_t *v3; // r8@1
  int v4; // r0@2
  int v5; // r2@6
  unsigned int v6; // r3@7
  unsigned int v7; // r6@9
  char *v8; // r7@12
  int v9; // r1@14
  int v10; // r2@14
  int v11; // r10@16

  v1 = this;
  v2 = *(_QWORD *)(this + 40);
  v3 = (pthread_mutex_t *)(this + 220);
  HIDWORD(this) = *(_QWORD *)(this + 40) >> 32;
  if ( &pthread_create )
  {
    v4 = pthread_mutex_lock(v3);
    if ( v4 )
      sub_21E5E14(v4);
    HIDWORD(this) = *(_DWORD *)(v1 + 44);
  }
  if ( HIDWORD(this) == *(_DWORD *)(v1 + 48) )
    LODWORD(this) = *(_DWORD *)(v1 + 40);
    v5 = HIDWORD(this) - this;
    if ( HIDWORD(this) - (_DWORD)this == -1 )
      sub_21E5A04("vector::_M_emplace_back_aux");
    v6 = HIDWORD(this) - this;
    if ( HIDWORD(this) == (_DWORD)this )
      v6 = 1;
    v7 = v6 + v5;
    if ( v6 + v5 < v6 )
      v7 = -1;
    if ( v7 )
    {
      v8 = (char *)operator new(v7);
      this = *(_QWORD *)(v1 + 40);
    }
    else
      v8 = 0;
    v9 = HIDWORD(this) - this;
    v10 = (int)v8;
    if ( v9 )
      v10 = (int)&v8[v9];
    v11 = v10 + 1;
    if ( (_DWORD)this )
      operator delete((void *)this);
    *(_DWORD *)(v1 + 40) = v8;
    *(_DWORD *)(v1 + 44) = v11;
    *(_DWORD *)(v1 + 48) = &v8[v7];
  else
    *(_DWORD *)(v1 + 44) = HIDWORD(this) + 1;
    pthread_mutex_unlock(v3);
  return HIDWORD(v2) - v2;
}


Json::Value *__fastcall glTFExporter::_serializeScene(glTFExporter *this, Json::Value *a2, const glTF::Scene *a3)
{
  const glTF::Scene *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "scenes");
  glTF::Scene::serialize((glTF::Scene *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


signed int __fastcall glTFExporter::_hasBuffer(glTFExporter *this, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@1
  int v5; // r0@2
  int v6; // r0@9
  signed int result; // r0@22

  v3 = *((_QWORD *)this + 9) >> 32;
  v2 = *((_QWORD *)this + 9);
  v4 = (v3 - v2) >> 6;
  if ( v4 < 1 )
  {
LABEL_8:
    if ( 1 != (v3 - v2) >> 4 )
    {
      v6 = (v3 - v2) >> 4;
      if ( v6 != 2 )
      {
        if ( v6 != 3 )
        {
          v2 = v3;
          goto LABEL_22;
        }
        if ( *(_DWORD *)(v2 + 12) == a2 )
        v2 += 16;
      }
      if ( *(_DWORD *)(v2 + 12) == a2 )
        goto LABEL_22;
      v2 += 16;
    }
    if ( *(_DWORD *)(v2 + 12) != a2 )
      v2 = v3;
  }
  else
    v5 = v4 + 1;
    while ( *(_DWORD *)(v2 + 12) != a2 )
      if ( *(_DWORD *)(v2 + 28) == a2 )
        break;
      if ( *(_DWORD *)(v2 + 44) == a2 )
        v2 += 32;
      if ( *(_DWORD *)(v2 + 60) == a2 )
        v2 += 48;
      --v5;
      v2 += 64;
      if ( v5 <= 1 )
        goto LABEL_8;
LABEL_22:
  result = 0;
  if ( v2 != v3 )
    result = 1;
  return result;
}


signed int __fastcall glTFExporter::_hasMaterial(int a1, int *a2)
{
  int v2; // r8@1
  int v3; // r7@1
  int v4; // r9@1
  void *v5; // r0@1
  _DWORD *v6; // r5@2
  int v7; // r0@2
  size_t v8; // r6@3
  int v9; // r4@3
  _DWORD *v10; // r0@4
  _DWORD *v11; // r0@6
  _DWORD *v12; // r0@8
  _DWORD *v13; // r0@10
  int v14; // r0@13
  size_t v15; // r6@16
  _DWORD *v16; // r0@18
  size_t v17; // r2@18
  _DWORD *v18; // r0@21
  const void *v19; // r0@24
  void *v20; // r0@33
  void *v21; // r0@34
  int v22; // r4@35
  void *v23; // r0@35
  signed int result; // r0@36
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  unsigned int *v29; // r2@47
  signed int v30; // r1@49
  unsigned int *v31; // r2@51
  signed int v32; // r1@53
  unsigned int *v33; // r2@55
  signed int v34; // r1@57
  int v35; // [sp+0h] [bp-38h]@1
  int v36; // [sp+4h] [bp-34h]@1
  int v37; // [sp+8h] [bp-30h]@1
  int v38; // [sp+Ch] [bp-2Ch]@1
  void *s2; // [sp+10h] [bp-28h]@2

  v2 = a1;
  v4 = *(_QWORD *)(a1 + 108) >> 32;
  v3 = *(_QWORD *)(a1 + 108);
  sub_21E8AF4(&v35, a2);
  sub_21E8AF4(&v36, &v35);
  sub_21E8AF4(&v38, &v36);
  sub_21E8AF4(&v37, &v38);
  v5 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E8AF4((int *)&s2, &v37);
  v6 = s2;
  v7 = 954437177 * ((v4 - v3) >> 3) >> 2;
  if ( v7 < 1 )
LABEL_13:
    v14 = 954437177 * ((v4 - v3) >> 3);
    if ( v14 == 3 )
      v16 = *(_DWORD **)(v3 + 60);
      v15 = *(v6 - 3);
      v17 = *(v16 - 3);
      if ( v17 == v15 && !memcmp(v16, v6, v17) )
        goto LABEL_32;
      v3 += 72;
      if ( v14 != 2 )
      {
        if ( v14 != 1 )
          goto LABEL_28;
        v15 = *(v6 - 3);
LABEL_24:
        v19 = *(const void **)(v3 + 60);
        if ( *((_DWORD *)v19 - 3) == v15 )
        {
          if ( memcmp(v19, v6, v15) )
            v3 = v4;
          goto LABEL_32;
        }
LABEL_28:
        v3 = v4;
      }
    v18 = *(_DWORD **)(v3 + 60);
    if ( *(v18 - 3) == v15 && !memcmp(v18, v6, v15) )
      goto LABEL_32;
    v3 += 72;
    goto LABEL_24;
  v8 = *((_DWORD *)s2 - 3);
  v9 = v7 + 1;
  while ( 1 )
    v10 = *(_DWORD **)(v3 + 60);
    if ( *(v10 - 3) == v8 && !memcmp(v10, v6, v8) )
      break;
    v11 = *(_DWORD **)(v3 + 132);
    if ( *(v11 - 3) == v8 && !memcmp(v11, v6, v8) )
    v12 = *(_DWORD **)(v3 + 204);
    if ( *(v12 - 3) == v8 && !memcmp(v12, v6, v8) )
      v3 += 144;
    v13 = *(_DWORD **)(v3 + 276);
    if ( *(v13 - 3) == v8 && !memcmp(v13, v6, v8) )
      v3 += 216;
    --v9;
    v3 += 288;
    if ( v9 <= 1 )
      goto LABEL_13;
LABEL_32:
  if ( v6 - 3 != &dword_28898C0 )
    v27 = v6 - 1;
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v6 - 3);
  v20 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *(_DWORD *)(v2 + 112);
  v23 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v35 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  result = 0;
  if ( v3 != v22 )
    result = 1;
  return result;
}


Json::Value *__fastcall glTFExporter::_serializeSampler(glTFExporter *this, Json::Value *a2, const glTF::Sampler *a3)
{
  const glTF::Sampler *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "samplers");
  glTF::Sampler::serialize((glTF::Sampler *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


void __fastcall glTFExporter::~glTFExporter(glTFExporter *this)
{
  glTFExporter *v1; // r0@1

  v1 = glTFExporter::~glTFExporter(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall glTFExporter::~glTFExporter(glTFExporter *this)
{
  glTFExporter::~glTFExporter(this);
}


Json::Value *__fastcall glTFExporter::_serialize(glTFExporter *this, Json::Value *a2)
{
  glTFExporter *v2; // r8@1
  Json::Value *v3; // r4@1
  int i; // r6@1
  int v5; // r10@1
  Json::Value *v6; // r7@2
  int j; // r6@3
  int v8; // r10@3
  int v9; // r7@4
  int v10; // r5@5
  int k; // r6@5
  int v12; // r10@5
  Json::Value *v13; // r7@6
  int l; // r6@7
  int v15; // r10@7
  Json::Value *v16; // r7@8
  const char **m; // r6@9
  const char **v18; // r10@9
  Json::Value *v19; // r7@10
  int n; // r6@11
  int v21; // r10@11
  Json::Value *v22; // r7@12
  int ii; // r6@13
  int v24; // r10@13
  Json::Value *v25; // r7@14
  int jj; // r6@15
  int v27; // r10@15
  Json::Value *v28; // r7@16
  int kk; // r6@17
  int v30; // r10@17
  Json::Value *v31; // r7@18
  int v32; // r5@19
  int v33; // r6@19
  Json::Value *result; // r0@19
  int ll; // r6@19
  int v36; // r10@19
  Json::Value *v37; // r7@20
  int mm; // r6@21
  int v39; // r10@21
  Json::Value *v40; // r7@22
  int nn; // r6@23
  int v42; // r10@23
  Json::Value *v43; // r7@24
  int i1; // r6@25
  int v45; // r9@25
  Json::Value *v46; // r5@26
  int v47; // [sp+0h] [bp-110h]@26
  char v48; // [sp+10h] [bp-100h]@24
  char v49; // [sp+20h] [bp-F0h]@2
  char v50; // [sp+30h] [bp-E0h]@5
  char v51; // [sp+40h] [bp-D0h]@4
  char v52; // [sp+50h] [bp-C0h]@6
  char v53; // [sp+60h] [bp-B0h]@8
  char v54; // [sp+70h] [bp-A0h]@10
  char v55; // [sp+80h] [bp-90h]@12
  char v56; // [sp+90h] [bp-80h]@14
  char v57; // [sp+A0h] [bp-70h]@16
  char v58; // [sp+B0h] [bp-60h]@19
  char v59; // [sp+C0h] [bp-50h]@18
  char v60; // [sp+D0h] [bp-40h]@20
  char v61; // [sp+E0h] [bp-30h]@22

  v2 = this;
  v3 = a2;
  v5 = *(_QWORD *)((char *)this + 28) >> 32;
  for ( i = *(_QWORD *)((char *)this + 28); v5 != i; i += 64 )
  {
    v6 = (Json::Value *)Json::Value::operator[](v3, "accessors");
    glTF::Accessor::serialize((glTF::Accessor *)&v49, i);
    Json::Value::append(v6, (const Json::Value *)&v49);
    Json::Value::~Value((Json::Value *)&v49);
  }
  v8 = *((_QWORD *)v2 + 5) >> 32;
  for ( j = *((_QWORD *)v2 + 5); v8 != j; ++j )
    v9 = Json::Value::operator[](v3, "animations");
    glTF::Animation::serialize((glTF::Animation *)&v51);
    Json::Value::operator=(v9, (const Json::Value *)&v51);
    Json::Value::~Value((Json::Value *)&v51);
  v10 = Json::Value::operator[](v3, "asset");
  glTF::Asset::serialize((glTF::Asset *)&v50, (int)v2 + 52);
  Json::Value::operator=(v10, (const Json::Value *)&v50);
  Json::Value::~Value((Json::Value *)&v50);
  v12 = *((_QWORD *)v2 + 9) >> 32;
  for ( k = *((_QWORD *)v2 + 9); v12 != k; k += 16 )
    v13 = (Json::Value *)Json::Value::operator[](v3, "buffers");
    glTF::Buffer::serialize((glTF::Buffer *)&v52, k);
    Json::Value::append(v13, (const Json::Value *)&v52);
    Json::Value::~Value((Json::Value *)&v52);
  v15 = *(_QWORD *)((char *)v2 + 84) >> 32;
  for ( l = *(_QWORD *)((char *)v2 + 84); v15 != l; l += 24 )
    v16 = (Json::Value *)Json::Value::operator[](v3, "bufferViews");
    glTF::BufferView::serialize((glTF::BufferView *)&v53, l);
    Json::Value::append(v16, (const Json::Value *)&v53);
    Json::Value::~Value((Json::Value *)&v53);
  v18 = (const char **)(*((_QWORD *)v2 + 24) >> 32);
  for ( m = (const char **)*((_QWORD *)v2 + 24); v18 != m; ++m )
    v19 = (Json::Value *)Json::Value::operator[](v3, "extensionsUsed");
    Json::Value::Value((int)&v54, m);
    Json::Value::append(v19, (const Json::Value *)&v54);
    Json::Value::~Value((Json::Value *)&v54);
  v21 = *((_QWORD *)v2 + 12) >> 32;
  for ( n = *((_QWORD *)v2 + 12); v21 != n; n += 24 )
    v22 = (Json::Value *)Json::Value::operator[](v3, "images");
    glTF::Image::serialize((glTF::Image *)&v55, n);
    Json::Value::append(v22, (const Json::Value *)&v55);
    Json::Value::~Value((Json::Value *)&v55);
  v24 = *(_QWORD *)((char *)v2 + 108) >> 32;
  for ( ii = *(_QWORD *)((char *)v2 + 108); v24 != ii; ii += 72 )
    v25 = (Json::Value *)Json::Value::operator[](v3, "materials");
    glTF::Material::serialize((Json::Value *)&v56, ii);
    Json::Value::append(v25, (const Json::Value *)&v56);
    Json::Value::~Value((Json::Value *)&v56);
  v27 = *((_QWORD *)v2 + 15) >> 32;
  for ( jj = *((_QWORD *)v2 + 15); v27 != jj; jj += 40 )
    v28 = (Json::Value *)Json::Value::operator[](v3, "meshes");
    glTF::Mesh::serialize((glTF::Mesh *)&v57, jj);
    Json::Value::append(v28, (const Json::Value *)&v57);
    Json::Value::~Value((Json::Value *)&v57);
  v30 = *(_QWORD *)((char *)v2 + 132) >> 32;
  for ( kk = *(_QWORD *)((char *)v2 + 132); v30 != kk; kk += 172 )
    v31 = (Json::Value *)Json::Value::operator[](v3, "nodes");
    glTF::Node::serialize((glTF::Node *)&v59, kk);
    Json::Value::append(v31, (const Json::Value *)&v59);
    Json::Value::~Value((Json::Value *)&v59);
  v32 = *((_DWORD *)v2 + 51);
  v33 = Json::Value::operator[](v3, "scene");
  Json::Value::Value((Json::Value *)&v58, v32);
  Json::Value::operator=(v33, (const Json::Value *)&v58);
  result = Json::Value::~Value((Json::Value *)&v58);
  v36 = *((_QWORD *)v2 + 18) >> 32;
  for ( ll = *((_QWORD *)v2 + 18); v36 != ll; ll += 40 )
    v37 = (Json::Value *)Json::Value::operator[](v3, "samplers");
    glTF::Sampler::serialize((glTF::Sampler *)&v60, ll);
    Json::Value::append(v37, (const Json::Value *)&v60);
    result = Json::Value::~Value((Json::Value *)&v60);
  v39 = *(_QWORD *)((char *)v2 + 156) >> 32;
  for ( mm = *(_QWORD *)((char *)v2 + 156); v39 != mm; mm += 20 )
    v40 = (Json::Value *)Json::Value::operator[](v3, "scenes");
    glTF::Scene::serialize((glTF::Scene *)&v61, mm);
    Json::Value::append(v40, (const Json::Value *)&v61);
    result = Json::Value::~Value((Json::Value *)&v61);
  v42 = *((_QWORD *)v2 + 21) >> 32;
  for ( nn = *((_QWORD *)v2 + 21); v42 != nn; nn += 16 )
    v43 = (Json::Value *)Json::Value::operator[](v3, "shaders");
    glTF::Shader::serialize((glTF::Shader *)&v48, nn);
    Json::Value::append(v43, (const Json::Value *)&v48);
    result = Json::Value::~Value((Json::Value *)&v48);
  v45 = *(_QWORD *)((char *)v2 + 180) >> 32;
  for ( i1 = *(_QWORD *)((char *)v2 + 180); v45 != i1; i1 += 56 )
    v46 = (Json::Value *)Json::Value::operator[](v3, "textures");
    glTF::Texture::serialize((glTF::Texture *)&v47, i1);
    Json::Value::append(v46, (const Json::Value *)&v47);
    result = Json::Value::~Value((Json::Value *)&v47);
  return result;
}


Json::Value *__fastcall glTFExporter::_serializeAnimation(glTFExporter *this, Json::Value *a2, const glTF::Animation *a3)
{
  int v3; // r5@1
  int v5; // [sp+0h] [bp-20h]@1

  v3 = Json::Value::operator[](a2, "animations");
  glTF::Animation::serialize((glTF::Animation *)&v5);
  Json::Value::operator=(v3, (const Json::Value *)&v5);
  return Json::Value::~Value((Json::Value *)&v5);
}


Json::Value *__fastcall glTFExporter::_serializeNode(int a1, Json::Value *a2, int a3)
{
  int v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "nodes");
  glTF::Node::serialize((glTF::Node *)&v6, v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


int (**__fastcall glTFExporter::setAsset(glTFExporter *this, const glTF::Asset *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  glTFExporter *v2; // r6@1
  pthread_mutex_t *v3; // r4@1
  const glTF::Asset *v4; // r5@1
  int v5; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 220);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  EntityInteraction::setInteractText((int *)v2 + 13, (int *)v4);
  EntityInteraction::setInteractText((int *)v2 + 14, (int *)v4 + 1);
  EntityInteraction::setInteractText((int *)v2 + 15, (int *)v4 + 2);
  EntityInteraction::setInteractText((int *)v2 + 16, (int *)v4 + 3);
  EntityInteraction::setInteractText((int *)v2 + 17, (int *)v4 + 4);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


signed int __fastcall glTFExporter::hasBuffer(glTFExporter *this, int a2)
{
  glTFExporter *v2; // r6@1
  pthread_mutex_t *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@2
  int v6; // r6@3
  int v7; // r7@3
  __int64 v8; // kr00_8@3
  int v9; // r0@3
  int v10; // r0@4
  int v11; // r0@11
  signed int result; // r0@26

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 220);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v8 = *((_QWORD *)v2 + 9);
  v6 = *((_QWORD *)v2 + 9) >> 32;
  v7 = v8;
  v9 = (v6 - (signed int)v8) >> 6;
  if ( v9 < 1 )
LABEL_10:
    if ( 1 != (v6 - v7) >> 4 )
    {
      v11 = (v6 - v7) >> 4;
      if ( v11 != 2 )
      {
        if ( v11 != 3 )
        {
          v7 = v6;
          goto LABEL_24;
        }
        if ( *(_DWORD *)(v7 + 12) == v4 )
        v7 += 16;
      }
      if ( *(_DWORD *)(v7 + 12) == v4 )
        goto LABEL_24;
      v7 += 16;
    }
    if ( *(_DWORD *)(v7 + 12) != v4 )
      v7 = v6;
  else
    v10 = v9 + 1;
    while ( *(_DWORD *)(v7 + 12) != v4 )
      if ( *(_DWORD *)(v7 + 28) == v4 )
        break;
      if ( *(_DWORD *)(v7 + 44) == v4 )
        v7 += 32;
      if ( *(_DWORD *)(v7 + 60) == v4 )
        v7 += 48;
      --v10;
      v7 += 64;
      if ( v10 <= 1 )
        goto LABEL_10;
LABEL_24:
    pthread_mutex_unlock(v3);
  result = 0;
  if ( v7 != v6 )
    result = 1;
  return result;
}


int __fastcall glTFExporter::_serializeBinaryData(glTFExporter *this, Json::Value *a2)
{
  glTFExporter *v2; // r11@1
  Json::Value *v3; // r5@1
  unsigned int v4; // r9@1
  int v5; // r8@2
  _BYTE *v6; // r4@4
  _BYTE *v7; // r6@4
  int i; // r5@4
  unsigned int v9; // r0@8
  unsigned int v10; // r7@10
  _BYTE *v11; // r5@13
  bool v12; // zf@15
  char *v13; // r4@15
  __int64 v14; // r1@25
  int (*v15)(void); // r7@25
  void (*v16)(void); // r3@25
  __int64 v17; // r1@31
  int (*v18)(void); // r7@31
  void (*v19)(void); // r3@31
  __int64 v20; // r1@37
  int (*v21)(void); // r7@37
  void (*v22)(void); // r3@37
  __int64 v23; // r1@44
  int (*v24)(void); // r7@44
  void (*v25)(void); // r3@44
  __int64 v26; // r1@50
  int (*v27)(void); // r7@50
  void (*v28)(void); // r3@50
  __int64 v29; // r1@56
  int (*v30)(void); // r7@56
  void (*v31)(void); // r3@56
  void *v32; // r0@60
  void *v33; // r0@61
  void *v34; // r0@62
  int result; // r0@63
  unsigned int *v36; // r2@66
  signed int v37; // r1@68
  unsigned int *v38; // r2@70
  signed int v39; // r1@72
  unsigned int *v40; // r2@74
  signed int v41; // r1@76
  int v42; // [sp+10h] [bp-1E0h]@56
  int v43; // [sp+14h] [bp-1DCh]@56
  char v44; // [sp+18h] [bp-1D8h]@56
  int v45; // [sp+1Ch] [bp-1D4h]@56
  void (*v46)(void); // [sp+20h] [bp-1D0h]@56
  int v47; // [sp+24h] [bp-1CCh]@56
  char v48; // [sp+28h] [bp-1C8h]@56
  int v49; // [sp+2Ch] [bp-1C4h]@54
  int v50; // [sp+30h] [bp-1C0h]@54
  char v51; // [sp+34h] [bp-1BCh]@54
  void (*v52)(void); // [sp+3Ch] [bp-1B4h]@54
  int v53; // [sp+48h] [bp-1A8h]@50
  int v54; // [sp+4Ch] [bp-1A4h]@50
  char v55; // [sp+50h] [bp-1A0h]@50
  int v56; // [sp+54h] [bp-19Ch]@50
  void (*v57)(void); // [sp+58h] [bp-198h]@50
  int v58; // [sp+5Ch] [bp-194h]@50
  char v59; // [sp+60h] [bp-190h]@50
  int v60; // [sp+64h] [bp-18Ch]@48
  int v61; // [sp+68h] [bp-188h]@48
  char v62; // [sp+6Ch] [bp-184h]@48
  void (*v63)(void); // [sp+74h] [bp-17Ch]@48
  int v64; // [sp+80h] [bp-170h]@44
  int v65; // [sp+84h] [bp-16Ch]@44
  char v66; // [sp+88h] [bp-168h]@44
  int v67; // [sp+8Ch] [bp-164h]@44
  void (*v68)(void); // [sp+90h] [bp-160h]@44
  int v69; // [sp+94h] [bp-15Ch]@44
  char v70; // [sp+98h] [bp-158h]@44
  int v71; // [sp+9Ch] [bp-154h]@42
  int v72; // [sp+A0h] [bp-150h]@42
  char v73; // [sp+A4h] [bp-14Ch]@42
  void (*v74)(void); // [sp+ACh] [bp-144h]@42
  int v75; // [sp+B8h] [bp-138h]@37
  int v76; // [sp+BCh] [bp-134h]@37
  char v77; // [sp+C0h] [bp-130h]@37
  int v78; // [sp+C4h] [bp-12Ch]@37
  void (*v79)(void); // [sp+C8h] [bp-128h]@37
  int v80; // [sp+CCh] [bp-124h]@37
  char v81; // [sp+D0h] [bp-120h]@37
  int v82; // [sp+D4h] [bp-11Ch]@35
  int v83; // [sp+D8h] [bp-118h]@35
  char v84; // [sp+DCh] [bp-114h]@35
  void (*v85)(void); // [sp+E4h] [bp-10Ch]@35
  int v86; // [sp+F0h] [bp-100h]@31
  int v87; // [sp+F4h] [bp-FCh]@31
  char v88; // [sp+F8h] [bp-F8h]@31
  int v89; // [sp+FCh] [bp-F4h]@31
  void (*v90)(void); // [sp+100h] [bp-F0h]@31
  int v91; // [sp+104h] [bp-ECh]@31
  char v92; // [sp+108h] [bp-E8h]@31
  int v93; // [sp+10Ch] [bp-E4h]@29
  int v94; // [sp+110h] [bp-E0h]@29
  char v95; // [sp+114h] [bp-DCh]@29
  void (*v96)(void); // [sp+11Ch] [bp-D4h]@29
  int v97; // [sp+128h] [bp-C8h]@25
  int v98; // [sp+12Ch] [bp-C4h]@25
  char v99; // [sp+130h] [bp-C0h]@25
  int v100; // [sp+134h] [bp-BCh]@25
  void (*v101)(void); // [sp+138h] [bp-B8h]@25
  int v102; // [sp+13Ch] [bp-B4h]@25
  char v103; // [sp+140h] [bp-B0h]@25
  int v104; // [sp+144h] [bp-ACh]@23
  int v105; // [sp+148h] [bp-A8h]@23
  char v106; // [sp+14Ch] [bp-A4h]@23
  void (*v107)(void); // [sp+154h] [bp-9Ch]@23
  int v108; // [sp+160h] [bp-90h]@23
  int v109; // [sp+164h] [bp-8Ch]@23
  unsigned int v110; // [sp+168h] [bp-88h]@23
  int v111; // [sp+16Ch] [bp-84h]@23
  int v112; // [sp+170h] [bp-80h]@23
  int v113; // [sp+174h] [bp-7Ch]@23
  unsigned int v114; // [sp+178h] [bp-78h]@23
  unsigned int v115; // [sp+17Ch] [bp-74h]@1
  unsigned int v116; // [sp+180h] [bp-70h]@1
  void **v117; // [sp+184h] [bp-6Ch]@1
  int v118; // [sp+188h] [bp-68h]@62
  int v119; // [sp+190h] [bp-60h]@1
  int v120; // [sp+194h] [bp-5Ch]@1
  __int64 v121; // [sp+198h] [bp-58h]@1
  int (*v122)(void); // [sp+1A0h] [bp-50h]@25
  int v123; // [sp+1A4h] [bp-4Ch]@25
  char v124; // [sp+1A8h] [bp-48h]@25
  unsigned int v125; // [sp+1B0h] [bp-40h]@1
  unsigned int v126; // [sp+1B4h] [bp-3Ch]@1
  __int64 v127; // [sp+1B8h] [bp-38h]@25
  void (*v128)(void); // [sp+1C0h] [bp-30h]@25
  int v129; // [sp+1C4h] [bp-2Ch]@25

  v2 = this;
  v125 = 0;
  v126 = 0;
  v3 = a2;
  v119 = *((_DWORD *)this + 5);
  v120 = *(_DWORD *)(v119 - 12);
  Core::FileSystem::getFileSize((int)&v121, (__int64 *)&v119, (int)&v125);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v117);
  Json::FastWriter::write((Json::FastWriter *)&v116, (const Json::Value *)&v117, v3);
  v4 = *(_DWORD *)(v116 - 12);
  sub_21E8AF4((int *)&v115, (int *)&Util::EMPTY_STRING);
  if ( v4 & 3 )
  {
    v5 = 4 - (v4 & 3);
    sub_21E849C((char *)&v115, 4 - (v4 & 3), 32);
  }
  else
    v5 = 0;
  v6 = (_BYTE *)(*((_QWORD *)v2 + 26) >> 32);
  v7 = (_BYTE *)*((_QWORD *)v2 + 26);
  for ( i = v6 - v7; (v6 - v7) & 3; i = v6 - v7 )
    if ( v6 == *((_BYTE **)v2 + 54) )
    {
      if ( i == -1 )
        sub_21E5A04("vector::_M_emplace_back_aux");
      v9 = i;
      if ( v6 == v7 )
        v9 = 1;
      v10 = v9 + i;
      if ( v9 + i < v9 )
        v10 = -1;
      if ( v10 )
      {
        v7 = operator new(v10);
        v6 = (_BYTE *)(*((_QWORD *)v2 + 26) >> 32);
        v11 = (_BYTE *)*((_QWORD *)v2 + 26);
      }
      else
        v11 = v7;
        v7 = 0;
      v12 = v6 == v11;
      v13 = &v7[v6 - v11];
      *v13 = 0;
      if ( !v12 )
        _aeabi_memmove(v7, v11);
      v6 = v13 + 1;
      if ( v11 )
        operator delete(v11);
      *((_DWORD *)v2 + 52) = v7;
      *((_DWORD *)v2 + 53) = v6;
      *((_DWORD *)v2 + 54) = &v7[v10];
    }
    else
      *v6 = 0;
      v6 = (_BYTE *)(*((_DWORD *)v2 + 53) + 1);
      v7 = (_BYTE *)*((_DWORD *)v2 + 52);
  v112 = 1179937895;
  v113 = 2;
  v110 = 0;
  v111 = 0;
  v108 = 0;
  v109 = 0;
  v114 = v4 + v5 + i + 28;
  v104 = *((_DWORD *)v2 + 5);
  v105 = *(_DWORD *)(v104 - 12);
  File::writeCreateOrAppendFileData((int)&v106, (__int64 *)&v104, v125, v126, 12LL, (unsigned int)&v112);
  if ( v107 )
    v107();
  v97 = *((_DWORD *)v2 + 5);
  v98 = *(_DWORD *)(v97 - 12);
  Core::FileSystem::getFileSize((int)&v99, (__int64 *)&v97, (int)&v125);
  v124 = v124 & 0xFC | v103 & 1 | v103 & 2;
  LODWORD(v14) = *(_DWORD *)&v99;
  HIDWORD(v14) = v100;
  v15 = (int (*)(void))v101;
  v101 = 0;
  v127 = v121;
  v121 = v14;
  v16 = (void (*)(void))v122;
  v122 = v15;
  v128 = v16;
  v129 = v123;
  v123 = v102;
  if ( v16 )
    v16();
    v103 |= 3u;
    if ( v101 )
      v101();
  v110 = v4 + v5;
  v111 = 1313821514;
  v93 = *((_DWORD *)v2 + 5);
  v94 = *(_DWORD *)(v93 - 12);
  File::writeCreateOrAppendFileData((int)&v95, (__int64 *)&v93, v125, v126, 8LL, (unsigned int)&v110);
  if ( v96 )
    v96();
  v86 = *((_DWORD *)v2 + 5);
  v87 = *(_DWORD *)(v86 - 12);
  Core::FileSystem::getFileSize((int)&v88, (__int64 *)&v86, (int)&v125);
  v124 = v124 & 0xFC | v92 & 3;
  LODWORD(v17) = *(_DWORD *)&v88;
  HIDWORD(v17) = v89;
  v18 = (int (*)(void))v90;
  v90 = 0;
  v121 = v17;
  v19 = (void (*)(void))v122;
  v122 = v18;
  v128 = v19;
  v123 = v91;
  if ( v19 )
    v19();
    v92 |= 3u;
    if ( v90 )
      v90();
  v82 = *((_DWORD *)v2 + 5);
  v83 = *(_DWORD *)(v82 - 12);
  File::writeCreateOrAppendFileData((int)&v84, (__int64 *)&v82, v125, v126, v4, v116);
  if ( v85 )
    v85();
  v75 = *((_DWORD *)v2 + 5);
  v76 = *(_DWORD *)(v75 - 12);
  Core::FileSystem::getFileSize((int)&v77, (__int64 *)&v75, (int)&v125);
  v124 = v124 & 0xFC | v81 & 3;
  LODWORD(v20) = *(_DWORD *)&v77;
  HIDWORD(v20) = v78;
  v21 = (int (*)(void))v79;
  v79 = 0;
  v121 = v20;
  v22 = (void (*)(void))v122;
  v122 = v21;
  v128 = v22;
  v123 = v80;
  if ( v22 )
    v22();
    v81 |= 3u;
    if ( v79 )
      v79();
  if ( v5 >= 1 )
    v71 = *((_DWORD *)v2 + 5);
    v72 = *(_DWORD *)(v71 - 12);
    File::writeCreateOrAppendFileData((int)&v73, (__int64 *)&v71, v125, v126, v5, v115);
    if ( v74 )
      v74();
    v125 = 0;
    v126 = 0;
    v64 = *((_DWORD *)v2 + 5);
    v65 = *(_DWORD *)(v64 - 12);
    Core::FileSystem::getFileSize((int)&v66, (__int64 *)&v64, (int)&v125);
    v124 = v124 & 0xFC | v70 & 3;
    LODWORD(v23) = *(_DWORD *)&v66;
    HIDWORD(v23) = v67;
    v24 = (int (*)(void))v68;
    v68 = 0;
    v127 = v121;
    v121 = v23;
    v25 = (void (*)(void))v122;
    v122 = v24;
    v128 = v25;
    v129 = v123;
    v123 = v69;
    if ( v25 )
      v25();
      v70 |= 3u;
      if ( v68 )
        v68();
  v108 = (*((_QWORD *)v2 + 26) >> 32) - *((_QWORD *)v2 + 26);
  v109 = 5130562;
  v60 = *((_DWORD *)v2 + 5);
  v61 = *(_DWORD *)(v60 - 12);
  File::writeCreateOrAppendFileData((int)&v62, (__int64 *)&v60, v125, v126, 8LL, (unsigned int)&v108);
  if ( v63 )
    v63();
  v53 = *((_DWORD *)v2 + 5);
  v54 = *(_DWORD *)(v53 - 12);
  Core::FileSystem::getFileSize((int)&v55, (__int64 *)&v53, (int)&v125);
  v124 = v124 & 0xFC | v59 & 3;
  LODWORD(v26) = *(_DWORD *)&v55;
  HIDWORD(v26) = v56;
  v27 = (int (*)(void))v57;
  v57 = 0;
  v121 = v26;
  v28 = (void (*)(void))v122;
  v122 = v27;
  v128 = v28;
  v123 = v58;
  if ( v28 )
    v28();
    v59 |= 3u;
    if ( v57 )
      v57();
  v49 = *((_DWORD *)v2 + 5);
  v50 = *(_DWORD *)(v49 - 12);
  File::writeCreateOrAppendFileData((int)&v51, (__int64 *)&v49, v125, v126, (unsigned int)i, *((_DWORD *)v2 + 52));
  if ( v52 )
    v52();
  v42 = *((_DWORD *)v2 + 5);
  v43 = *(_DWORD *)(v42 - 12);
  Core::FileSystem::getFileSize((int)&v44, (__int64 *)&v42, (int)&v125);
  v124 = v124 & 0xFC | v48 & 3;
  LODWORD(v29) = *(_DWORD *)&v44;
  HIDWORD(v29) = v45;
  v30 = (int (*)(void))v46;
  v46 = 0;
  v121 = v29;
  v31 = (void (*)(void))v122;
  v122 = v30;
  v128 = v31;
  v123 = v47;
  if ( v31 )
    v31();
    v48 |= 3u;
    if ( v46 )
      v46();
  v32 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v115 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v116 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v117 = &off_2725B14;
  v34 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v118 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  result = Json::Writer::~Writer((Json::Writer *)&v117);
  if ( v122 )
    result = v122();
  return result;
}


int __fastcall glTFExporter::addSampler(glTFExporter *this, glTF::Sampler *a2, __int64 a3)
{
  glTFExporter *v3; // r6@1
  glTF::Sampler *v4; // r11@1
  unsigned __int64 *v5; // r7@1
  int v6; // r8@1
  int *v7; // r10@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // kr00_8@5
  int v11; // r3@6
  int v12; // r5@6
  int v13; // r7@6
  int v14; // r1@6
  int v15; // r3@6
  int v16; // r5@6
  int v17; // r7@6
  unsigned int *v19; // r2@11
  signed int v20; // r1@13
  int v21; // [sp+0h] [bp-30h]@2

  v3 = this;
  v4 = a2;
  v5 = (unsigned __int64 *)((char *)this + 144);
  v6 = -858993459 * ((*((_DWORD *)this + 37) - *((_DWORD *)this + 36)) >> 3);
  *((_DWORD *)a2 + 9) = v6;
  v7 = (int *)((char *)a2 + 32);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 8) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v21, "sampler_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v21);
    v8 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v21 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *(_QWORD *)((char *)v3 + 148);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Sampler,std::allocator<glTF::Sampler>>::_M_emplace_back_aux<glTF::Sampler const&>(v5, (int)v4);
  else
    v11 = *((_DWORD *)v4 + 1);
    v12 = *((_DWORD *)v4 + 2);
    v13 = *((_DWORD *)v4 + 3);
    *(_DWORD *)v10 = *(_DWORD *)v4;
    *(_DWORD *)(v10 + 4) = v11;
    *(_DWORD *)(v10 + 8) = v12;
    *(_DWORD *)(v10 + 12) = v13;
    v14 = v10 + 16;
    v15 = *((_DWORD *)v4 + 5);
    v16 = *((_DWORD *)v4 + 6);
    v17 = *((_DWORD *)v4 + 7);
    *(_DWORD *)v14 = *((_DWORD *)v4 + 4);
    *(_DWORD *)(v14 + 4) = v15;
    *(_DWORD *)(v14 + 8) = v16;
    *(_DWORD *)(v14 + 12) = v17;
    sub_21E8AF4((int *)(v10 + 32), v7);
    *(_DWORD *)(v10 + 36) = *((_DWORD *)v4 + 9);
    *((_DWORD *)v3 + 37) += 40;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


signed int __fastcall glTFExporter::hasMaterial(int a1, int *a2)
{
  int v2; // r6@1
  pthread_mutex_t *v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@2
  signed int v6; // r5@3

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 220);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = glTFExporter::_hasMaterial(v2, v4);
    pthread_mutex_unlock(v3);
  return v6;
}


int __fastcall glTFExporter::updateBufferSize(glTFExporter *this, int a2, int a3)
{
  glTFExporter *v3; // r7@1
  pthread_mutex_t *v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r0@2
  __int64 v8; // r0@3
  int v9; // r3@3
  int v10; // r2@3
  int v11; // r3@4
  int v12; // r3@11
  int v13; // r5@18

  v3 = this;
  v4 = (pthread_mutex_t *)((char *)this + 220);
  v5 = a3;
  v6 = a2;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock(v4);
    if ( v7 )
      sub_21E5E14(v7);
  }
  v8 = *((_QWORD *)v3 + 9);
  v9 = (HIDWORD(v8) - (signed int)v8) >> 6;
  v10 = *((_QWORD *)v3 + 9);
  if ( v9 >= 1 )
    v11 = v9 + 1;
    v10 = v8;
    while ( *(_DWORD *)(v10 + 12) != v6 )
    {
      if ( *(_DWORD *)(v10 + 28) == v6 )
      {
        v10 += 16;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v10 + 44) == v6 )
        v10 += 32;
      if ( *(_DWORD *)(v10 + 60) == v6 )
        v10 += 48;
      --v11;
      v10 += 64;
      if ( v11 <= 1 )
        goto LABEL_10;
    }
    goto LABEL_23;
LABEL_10:
  if ( 1 == (HIDWORD(v8) - v10) >> 4 )
LABEL_17:
    if ( *(_DWORD *)(v10 + 12) != v6 )
      v13 = -1;
      goto LABEL_26;
  v12 = (HIDWORD(v8) - v10) >> 4;
  if ( v12 != 2 )
    if ( v12 != 3 )
    if ( *(_DWORD *)(v10 + 12) == v6 )
      goto LABEL_23;
    v10 += 16;
  if ( *(_DWORD *)(v10 + 12) != v6 )
    goto LABEL_17;
LABEL_23:
  if ( v10 == HIDWORD(v8) )
    v13 = -1;
  else
    *(_DWORD *)(v10 + 4) = v5;
    v13 = (v10 - (signed int)v8) >> 4;
LABEL_26:
    pthread_mutex_unlock(v4);
  return v13;
}


int __fastcall glTFExporter::addMesh(glTFExporter *this, glTF::Mesh *a2, __int64 a3)
{
  glTFExporter *v3; // r5@1
  glTF::Mesh *v4; // r6@1
  int v5; // r8@1
  int *v6; // r4@1
  void *v7; // r0@2
  int v8; // r0@4
  __int64 v9; // r0@5
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+0h] [bp-28h]@2

  v3 = this;
  v4 = a2;
  v5 = -858993459 * ((*((_DWORD *)this + 31) - *((_DWORD *)this + 30)) >> 3);
  *((_DWORD *)a2 + 4) = v5;
  v6 = (int *)((char *)a2 + 12);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 3) - 12) )
  {
    LODWORD(a3) = v5;
    Util::format((Util *)&v13, "mesh_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v13);
    v7 = (void *)(v13 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  if ( &pthread_create )
    v8 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v8 )
      sub_21E5E14(v8);
  v9 = *(_QWORD *)((char *)v3 + 124);
  if ( (_DWORD)v9 == HIDWORD(v9) )
    std::vector<glTF::Mesh,std::allocator<glTF::Mesh>>::_M_emplace_back_aux<glTF::Mesh const&>();
  else
    glTF::Mesh::Mesh((glTF::Mesh *)v9, v4);
    *((_DWORD *)v3 + 31) += 40;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v5;
}


signed int __fastcall glTFExporter::_hasExtension(int a1, const void **a2)
{
  const void **v2; // r4@1
  const void **v3; // r0@1
  signed int v4; // r1@1

  v2 = (const void **)(*(_QWORD *)(a1 + 192) >> 32);
  v3 = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
         *(_QWORD *)(a1 + 192),
         v2,
         a2);
  v4 = 0;
  if ( v3 != v2 )
    v4 = 1;
  return v4;
}


int __fastcall glTFExporter::getMaterialID(int a1, int *a2)
{
  __int64 v2; // kr00_8@1
  void *v3; // r0@1
  _DWORD *v4; // r4@2
  int v5; // r6@2
  int v6; // r0@2
  size_t v7; // r5@3
  int v8; // r7@3
  _DWORD *v9; // r0@4
  _DWORD *v10; // r0@6
  _DWORD *v11; // r0@8
  _DWORD *v12; // r0@10
  int v13; // r0@13
  size_t v14; // r5@16
  _DWORD *v15; // r0@18
  size_t v16; // r2@18
  _DWORD *v17; // r0@21
  const void *v18; // r0@24
  void *v19; // r0@33
  void *v20; // r0@34
  void *v21; // r0@35
  unsigned int *v23; // r2@37
  signed int v24; // r1@39
  unsigned int *v25; // r2@41
  signed int v26; // r1@43
  unsigned int *v27; // r2@45
  signed int v28; // r1@47
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  unsigned int *v31; // r2@53
  signed int v32; // r1@55
  int v33; // [sp+0h] [bp-38h]@1
  int v34; // [sp+4h] [bp-34h]@1
  int v35; // [sp+8h] [bp-30h]@1
  int v36; // [sp+Ch] [bp-2Ch]@1
  void *s2; // [sp+10h] [bp-28h]@2

  v2 = *(_QWORD *)(a1 + 108);
  sub_21E8AF4(&v33, a2);
  sub_21E8AF4(&v34, &v33);
  sub_21E8AF4(&v36, &v34);
  sub_21E8AF4(&v35, &v36);
  v3 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v36 - 4);
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
  sub_21E8AF4((int *)&s2, &v35);
  v4 = s2;
  v5 = v2;
  v6 = 954437177 * ((HIDWORD(v2) - (signed int)v2) >> 3) >> 2;
  if ( v6 < 1 )
LABEL_13:
    v13 = 954437177 * ((HIDWORD(v2) - v5) >> 3);
    if ( v13 == 3 )
      v15 = *(_DWORD **)(v5 + 60);
      v14 = *(v4 - 3);
      v16 = *(v15 - 3);
      if ( v16 == v14 && !memcmp(v15, v4, v16) )
        goto LABEL_32;
      v5 += 72;
      if ( v13 != 2 )
      {
        if ( v13 != 1 )
          goto LABEL_28;
        v14 = *(v4 - 3);
LABEL_24:
        v18 = *(const void **)(v5 + 60);
        if ( *((_DWORD *)v18 - 3) == v14 )
        {
          if ( memcmp(v18, v4, v14) )
            v5 = HIDWORD(v2);
          goto LABEL_32;
        }
LABEL_28:
        v5 = HIDWORD(v2);
      }
    v17 = *(_DWORD **)(v5 + 60);
    if ( *(v17 - 3) == v14 && !memcmp(v17, v4, v14) )
      goto LABEL_32;
    v5 += 72;
    goto LABEL_24;
  v7 = *((_DWORD *)s2 - 3);
  v8 = v6 + 1;
  while ( 1 )
    v9 = *(_DWORD **)(v5 + 60);
    if ( *(v9 - 3) == v7 && !memcmp(v9, v4, v7) )
      break;
    v10 = *(_DWORD **)(v5 + 132);
    if ( *(v10 - 3) == v7 && !memcmp(v10, v4, v7) )
    v11 = *(_DWORD **)(v5 + 204);
    if ( *(v11 - 3) == v7 && !memcmp(v11, v4, v7) )
      v5 += 144;
    v12 = *(_DWORD **)(v5 + 276);
    if ( *(v12 - 3) == v7 && !memcmp(v12, v4, v7) )
      v5 += 216;
    --v8;
    v5 += 288;
    if ( v8 <= 1 )
      goto LABEL_13;
LABEL_32:
  if ( v4 - 3 != &dword_28898C0 )
    v25 = v4 - 1;
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v4 - 3);
  v19 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  return 954437177 * ((v5 - (signed int)v2) >> 3);
}


Json::Value *__fastcall glTFExporter::_serializeMesh(glTFExporter *this, Json::Value *a2, const glTF::Mesh *a3)
{
  const glTF::Mesh *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "meshes");
  glTF::Mesh::serialize((glTF::Mesh *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


  if ( glTFExporter::hasBuffer((glTFExporter *)v4, v17) )
{
  else
    v25 = MinecraftglTFExporter::_generateBuffer((glTFExporter *)v4, v15 + v10 * v37, &v40);
  v26 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  }
  v27 = MinecraftglTFExporter::_generateBufferViewer((MinecraftglTFExporter *)v4, v25, v35, v15);
  MinecraftglTFExporter::_extractMinMax<unsigned short>((int)&v38, v4, v7, v36);
  v29 = MinecraftglTFExporter::_generateAccessor(
          (glTFExporter *)v4,
          v27,
          0,
          v28,
          __PAIR__(v6, v37),
          v5,
          (int)&v38,
          (int)&ptr);
  if ( ptr )
    operator delete(ptr);
  if ( v38 )
    operator delete(v38);
  if ( _stack_chk_guard != v47 )
    _stack_chk_fail(_stack_chk_guard - v47);
  return v29;
}


int (**__fastcall glTFExporter::setDefaultScene(glTFExporter *this, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  glTFExporter *v2; // r5@1
  int v3; // r4@1
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@1
  int v5; // r0@2

  v2 = this;
  v3 = a2;
  result = &pthread_create;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock((pthread_mutex_t *)((char *)v2 + 220));
    if ( v5 )
      sub_21E5E14(v5);
    *((_DWORD *)v2 + 51) = v3;
    result = &pthread_create;
    if ( &pthread_create )
      result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock((pthread_mutex_t *)((char *)v2 + 220));
  }
  else
    *((_DWORD *)v2 + 51) = a2;
  return result;
}


__int64 __fastcall glTFExporter::addBinaryBuffer(int a1, int *a2, unsigned int a3, int a4, __int64 a5)
{
  int v5; // r10@1
  pthread_mutex_t *v6; // r8@1
  unsigned int v7; // r7@1
  int *v8; // r5@1
  int v9; // r0@2
  int v10; // r3@4
  _BYTE *v11; // r1@4
  _BYTE *v12; // r5@4 OVERLAPPED
  _BYTE *v13; // r6@4 OVERLAPPED
  int i; // r0@4
  unsigned int v15; // r1@8
  unsigned int v16; // r7@10
  _BYTE *v17; // r4@13
  bool v18; // zf@15
  char *v19; // r6@15
  int v20; // r0@23
  __int64 v21; // r1@30
  void (*v22)(void); // r7@30
  void (*v23)(void); // r3@30
  __int64 v24; // r4@33
  int v26; // [sp+Ch] [bp-DCh]@35
  int v27; // [sp+10h] [bp-D8h]@35
  char v28; // [sp+14h] [bp-D4h]@35
  void (*v29)(void); // [sp+1Ch] [bp-CCh]@35
  int v30; // [sp+28h] [bp-C0h]@30
  int v31; // [sp+2Ch] [bp-BCh]@30
  char v32; // [sp+30h] [bp-B8h]@30
  int v33; // [sp+34h] [bp-B4h]@30
  void (*v34)(void); // [sp+38h] [bp-B0h]@30
  int v35; // [sp+3Ch] [bp-ACh]@30
  char v36; // [sp+40h] [bp-A8h]@30
  unsigned int v37; // [sp+48h] [bp-A0h]@30
  unsigned int v38; // [sp+4Ch] [bp-9Ch]@30
  int v39; // [sp+54h] [bp-94h]@27
  int v40; // [sp+58h] [bp-90h]@27
  char v41; // [sp+5Ch] [bp-8Ch]@27
  void (*v42)(void); // [sp+64h] [bp-84h]@27
  int v43; // [sp+70h] [bp-78h]@27
  int v44; // [sp+74h] [bp-74h]@27
  __int64 v45; // [sp+78h] [bp-70h]@27
  void (*v46)(void); // [sp+80h] [bp-68h]@30
  int v47; // [sp+84h] [bp-64h]@30
  char v48; // [sp+88h] [bp-60h]@30
  int v49; // [sp+8Ch] [bp-5Ch]@25
  int v50; // [sp+90h] [bp-58h]@25
  char v51; // [sp+94h] [bp-54h]@25
  void (*v52)(void); // [sp+9Ch] [bp-4Ch]@25
  int v53; // [sp+A8h] [bp-40h]@24
  int v54; // [sp+ACh] [bp-3Ch]@24
  unsigned int v55; // [sp+B0h] [bp-38h]@3
  unsigned int v56; // [sp+B4h] [bp-34h]@3
  __int64 v57; // [sp+B8h] [bp-30h]@30
  void (*v58)(void); // [sp+C0h] [bp-28h]@30
  int v59; // [sp+C4h] [bp-24h]@30

  v5 = a1;
  v6 = (pthread_mutex_t *)(a1 + 220);
  v7 = a3;
  v8 = a2;
  if ( &pthread_create )
  {
    v9 = pthread_mutex_lock(v6);
    if ( v9 )
      sub_21E5E14(v9);
  }
  v55 = 0;
  v56 = 0;
  if ( *(_BYTE *)(v5 + 24) )
    v10 = *(_DWORD *)(v5 + 208);
    v11 = *(_BYTE **)(v5 + 212);
    v56 = 0;
    v55 = (unsigned int)&v11[-v10];
    std::vector<unsigned char,std::allocator<unsigned char>>::_M_range_insert<unsigned char const*>(
      v5 + 208,
      v11,
      v7,
      v7 + a5);
    *(_QWORD *)&v12 = *(_QWORD *)(v5 + 208);
    for ( i = v13 - v12; (v13 - v12) & 3; i = v13 - v12 )
    {
      if ( v13 == *(_BYTE **)(v5 + 216) )
      {
        if ( i == -1 )
          sub_21E5A04("vector::_M_emplace_back_aux");
        v15 = i;
        if ( v13 == v12 )
          v15 = 1;
        v16 = v15 + i;
        if ( v15 + i < v15 )
          v16 = -1;
        if ( v16 )
        {
          v12 = operator new(v16);
          v13 = (_BYTE *)(*(_QWORD *)(v5 + 208) >> 32);
          v17 = (_BYTE *)*(_QWORD *)(v5 + 208);
        }
        else
          v17 = v12;
          v12 = 0;
        v18 = v13 == v17;
        v19 = &v12[v13 - v17];
        *v19 = 0;
        if ( !v18 )
          _aeabi_memmove(v12, v17);
        v13 = v19 + 1;
        if ( v17 )
          operator delete(v17);
        *(_QWORD *)(v5 + 208) = *(_QWORD *)&v12;
        *(_DWORD *)(v5 + 216) = &v12[v16];
      }
      else
        *v13 = 0;
        v13 = (_BYTE *)(*(_DWORD *)(v5 + 212) + 1);
        *(_DWORD *)(v5 + 212) = v13;
        v12 = *(_BYTE **)(v5 + 208);
    }
  else
    v20 = *v8;
    if ( !*(_DWORD *)(*v8 - 12) )
      v24 = 0LL;
      goto LABEL_40;
    v53 = *v8;
    v54 = *(_DWORD *)(v20 - 12);
    if ( !Core::FileSystem::fileOrDirectoryExists((__int64 *)&v53) )
      v49 = *v8;
      v50 = *(_DWORD *)(v49 - 12);
      Core::FileSystem::createEmptyFile((int)&v51, (__int64 *)&v49);
      if ( v52 )
        v52();
    v43 = *v8;
    v44 = *(_DWORD *)(v43 - 12);
    Core::FileSystem::getFileSize((int)&v45, (__int64 *)&v43, (int)&v55);
    v39 = *v8;
    v40 = *(_DWORD *)(v39 - 12);
    File::writeCreateOrAppendFileData((int)&v41, (__int64 *)&v39, v55, v56, a5, v7);
    if ( v42 )
      v42();
    if ( a5 & 3 )
      v37 = 0;
      v38 = 0;
      v30 = *v8;
      v31 = *(_DWORD *)(v30 - 12);
      Core::FileSystem::getFileSize((int)&v32, (__int64 *)&v30, (int)&v37);
      v48 = v48 & 0xFC | v36 & 1 | v36 & 2;
      LODWORD(v21) = *(_DWORD *)&v32;
      HIDWORD(v21) = v33;
      v22 = v34;
      v34 = 0;
      v57 = v45;
      v45 = v21;
      v23 = v46;
      v46 = v22;
      v58 = v23;
      v59 = v47;
      v47 = v35;
      if ( v23 )
        v23();
        v36 |= 3u;
        if ( v34 )
          v34();
      v26 = *v8;
      v27 = *(_DWORD *)(v26 - 12);
      File::writeCreateOrAppendFileData(
        (int)&v28,
        (__int64 *)&v26,
        v37,
        v38,
        4 - (unsigned int)(a5 & 3),
        (unsigned int)&unk_27EF0B4);
      if ( v29 )
        v29();
    if ( v46 )
      v46();
  v24 = *(_QWORD *)&v55;
LABEL_40:
    pthread_mutex_unlock(v6);
  return v24;
}


char *__fastcall glTFExporter::getBinaryFileName(glTFExporter *this)
{
  return (char *)this + 16;
}


int (**__fastcall glTFExporter::addExtension(int a1, const void **a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r5@1
  pthread_mutex_t *v3; // r8@1
  const void **v4; // r6@1
  int v5; // r0@2
  int *v6; // r4@3
  int *v7; // r0@3
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@7

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 220);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *(int **)(v2 + 196);
  v7 = (int *)std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                *(_DWORD *)(v2 + 192),
                *(const void ***)(v2 + 196),
                v4);
  if ( v7 == v6 )
    if ( v7 == *(int **)(v2 + 200) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)(v2 + 192),
        (int *)v4);
    }
    else
      sub_21E8AF4(v7, (int *)v4);
      *(_DWORD *)(v2 + 196) += 4;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


Json::Value *__fastcall glTFExporter::_serializeMaterial(int a1, Json::Value *a2, int a3)
{
  int v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "materials");
  glTF::Material::serialize((Json::Value *)&v6, v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


Json::Value *__fastcall glTFExporter::_serializeBufferView(glTFExporter *this, Json::Value *a2, const glTF::BufferView *a3)
{
  const glTF::BufferView *v3; // r4@1
  Json::Value *v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[](a2, "bufferViews");
  glTF::BufferView::serialize((glTF::BufferView *)&v6, (int)v3);
  Json::Value::append(v4, (const Json::Value *)&v6);
  return Json::Value::~Value((Json::Value *)&v6);
}


int __fastcall glTFExporter::addAccessor(glTFExporter *this, glTF::Accessor *a2, __int64 a3)
{
  glTFExporter *v3; // r5@1
  glTF::Accessor *v4; // r6@1
  unsigned __int64 *v5; // r7@1
  int v6; // r8@1
  int *v7; // r4@1
  void *v8; // r0@2
  int v9; // r0@4
  __int64 v10; // r0@5
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // [sp+0h] [bp-28h]@2

  v3 = this;
  v4 = a2;
  v5 = (unsigned __int64 *)((char *)this + 28);
  v6 = (*((_DWORD *)this + 8) - *((_DWORD *)this + 7)) >> 6;
  *((_DWORD *)a2 + 15) = v6;
  v7 = (int *)((char *)a2 + 56);
  if ( !*(_DWORD *)(*((_DWORD *)a2 + 14) - 12) )
  {
    LODWORD(a3) = v6;
    Util::format((Util *)&v14, "accessor_%d", a3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v14);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  if ( &pthread_create )
    v9 = pthread_mutex_lock((pthread_mutex_t *)((char *)v3 + 220));
    if ( v9 )
      sub_21E5E14(v9);
  v10 = *((_QWORD *)v3 + 4);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<glTF::Accessor,std::allocator<glTF::Accessor>>::_M_emplace_back_aux<glTF::Accessor const&>(v5, v4);
  else
    glTF::Accessor::Accessor((glTF::Accessor *)v10, v4);
    *((_DWORD *)v3 + 8) += 64;
    pthread_mutex_unlock((pthread_mutex_t *)((char *)v3 + 220));
  return v6;
}


int __fastcall glTFExporter::addMaterial(int a1, int a2)
{
  int v2; // r6@1
  pthread_mutex_t *v3; // r8@1
  int v4; // r7@1
  int v5; // r0@2
  int *v6; // r5@3
  __int64 v7; // r2@3
  _DWORD *v8; // r9@3
  int v9; // r7@4
  int v10; // r10@4
  void *v11; // r0@4
  void *v12; // r6@5
  int v13; // r0@5
  size_t v14; // r4@6
  int v15; // r5@6
  _DWORD *v16; // r0@7
  _DWORD *v17; // r0@9
  _DWORD *v18; // r0@11
  _DWORD *v19; // r0@13
  int v20; // r0@16
  size_t v21; // r4@19
  int *v22; // r0@20
  int v23; // r1@20
  int v24; // r4@20
  void *v25; // r0@21
  _DWORD *v26; // r0@27
  size_t v27; // r2@27
  _DWORD *v28; // r0@30
  const void *v29; // r0@33
  void *v30; // r0@42
  void *v31; // r0@43
  void *v32; // r0@44
  unsigned int *v34; // r2@49
  signed int v35; // r1@51
  unsigned int *v36; // r2@53
  signed int v37; // r1@55
  unsigned int *v38; // r2@57
  signed int v39; // r1@59
  unsigned int *v40; // r2@61
  signed int v41; // r1@63
  unsigned int *v42; // r2@65
  signed int v43; // r1@67
  unsigned int *v44; // r2@89
  signed int v45; // r1@91
  int v46; // [sp+0h] [bp-40h]@4
  int v47; // [sp+4h] [bp-3Ch]@21
  int v48; // [sp+8h] [bp-38h]@4
  int v49; // [sp+Ch] [bp-34h]@4
  int v50; // [sp+10h] [bp-30h]@4
  void *s2; // [sp+14h] [bp-2Ch]@5

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 220);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = (int *)(v4 + 60);
  v8 = (_DWORD *)(v2 + 108);
  if ( glTFExporter::_hasMaterial(v2, (int *)(v4 + 60)) )
    v10 = *(_QWORD *)(v2 + 108) >> 32;
    v9 = *(_QWORD *)(v2 + 108);
    sub_21E8AF4(&v46, v6);
    sub_21E8AF4(&v48, &v46);
    sub_21E8AF4(&v50, &v48);
    sub_21E8AF4(&v49, &v50);
    v11 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
    {
      v34 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
      }
      else
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    sub_21E8AF4((int *)&s2, &v49);
    v12 = s2;
    v13 = 954437177 * ((v10 - v9) >> 3) >> 2;
    if ( v13 >= 1 )
      v14 = *((_DWORD *)s2 - 3);
      v15 = v13 + 1;
      do
        v16 = *(_DWORD **)(v9 + 60);
        if ( *(v16 - 3) == v14 && !memcmp(v16, v12, v14) )
          goto LABEL_41;
        v17 = *(_DWORD **)(v9 + 132);
        if ( *(v17 - 3) == v14 && !memcmp(v17, v12, v14) )
        {
          v9 += 72;
        }
        v18 = *(_DWORD **)(v9 + 204);
        if ( *(v18 - 3) == v14 && !memcmp(v18, v12, v14) )
          v9 += 144;
        v19 = *(_DWORD **)(v9 + 276);
        if ( *(v19 - 3) == v14 && !memcmp(v19, v12, v14) )
          v9 += 216;
        --v15;
        v9 += 288;
      while ( v15 > 1 );
    v20 = 954437177 * ((v10 - v9) >> 3);
    if ( v20 == 3 )
      v26 = *(_DWORD **)(v9 + 60);
      v21 = *((_DWORD *)v12 - 3);
      v27 = *(v26 - 3);
      if ( v27 == v21 && !memcmp(v26, v12, v27) )
        goto LABEL_41;
      v9 += 72;
    else
      if ( v20 != 2 )
        if ( v20 != 1 )
LABEL_37:
          v9 = v10;
        v21 = *((_DWORD *)v12 - 3);
LABEL_33:
        v29 = *(const void **)(v9 + 60);
        if ( *((_DWORD *)v29 - 3) == v21 )
          if ( memcmp(v29, v12, v21) )
            v9 = v10;
        goto LABEL_37;
    v28 = *(_DWORD **)(v9 + 60);
    if ( *(v28 - 3) != v21 || memcmp(v28, v12, v21) )
      goto LABEL_33;
LABEL_41:
    if ( (int *)((char *)v12 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)((char *)v12 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9((char *)v12 - 12);
    v30 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v49 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v48 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v46 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v24 = 954437177 * ((v9 - *v8) >> 3);
    goto LABEL_46;
  v22 = (int *)(*(_QWORD *)(v2 + 108) >> 32);
  v23 = *(_QWORD *)(v2 + 108);
  v24 = 954437177 * (((signed int)v22 - v23) >> 3);
  *(_DWORD *)(v4 + 64) = v24;
  if ( !*(_DWORD *)(*(_DWORD *)(v4 + 60) - 12) )
    LODWORD(v7) = 954437177 * (((signed int)v22 - v23) >> 3);
    Util::format((Util *)&v47, "material_%d", v7);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v4 + 60),
      &v47);
    v25 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v47 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v22 = *(int **)(v2 + 112);
  if ( v22 == *(int **)(v2 + 116) )
    std::vector<glTF::Material,std::allocator<glTF::Material>>::_M_emplace_back_aux<glTF::Material const&>(
      (unsigned __int64 *)(v2 + 108),
      (int *)v4);
  else
    glTF::Material::Material(v22, (int *)v4);
    *(_DWORD *)(v2 + 112) += 72;
LABEL_46:
    pthread_mutex_unlock(v3);
  return v24;
}
