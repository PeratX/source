

int __fastcall ResourcePacksInfoPacket::handle(ResourcePacksInfoPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ResourcePacksInfoPacket *))(*(_DWORD *)a3 + 60))(
           a3,
           a2,
           this);
}


void __fastcall ResourcePacksInfoPacket::~ResourcePacksInfoPacket(ResourcePacksInfoPacket *this)
{
  ResourcePacksInfoPacket *v1; // r4@1
  ResourcePackInfoData *v2; // r0@1
  ResourcePackInfoData *v3; // r5@1
  ResourcePackInfoData *v4; // r0@6
  ResourcePackInfoData *v5; // r5@6

  v1 = this;
  *(_DWORD *)this = &off_26E9364;
  v3 = (ResourcePackInfoData *)(*((_QWORD *)this + 4) >> 32);
  v2 = (ResourcePackInfoData *)*((_QWORD *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v2) + 64);
    while ( v3 != v2 );
    v2 = (ResourcePackInfoData *)*((_DWORD *)v1 + 8);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (ResourcePackInfoData *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v4 = (ResourcePackInfoData *)*(_QWORD *)((char *)v1 + 20);
  if ( v4 != v5 )
      v4 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v4) + 64);
    while ( v5 != v4 );
    v4 = (ResourcePackInfoData *)*((_DWORD *)v1 + 5);
  if ( v4 )
    operator delete((void *)v4);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall ResourcePacksInfoPacket::getId(ResourcePacksInfoPacket *this)
{
  return 6;
}


void __fastcall ResourcePacksInfoPacket::~ResourcePacksInfoPacket(ResourcePacksInfoPacket *this)
{
  ResourcePacksInfoPacket::~ResourcePacksInfoPacket(this);
}


int __fastcall ResourcePacksInfoPacket::read(ResourcePacksInfoPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r7@1
  ResourcePacksInfoPacket *v3; // r4@1
  unsigned int v4; // r0@1
  int v5; // r1@1
  ResourcePacksInfoPacket *v6; // r6@1
  ResourcePackInfoData *v7; // r5@1
  unsigned int v8; // r2@1
  BinaryStream *v9; // r8@4
  int v10; // r7@4
  ResourcePackInfoData *v11; // r0@5
  int v12; // r8@8
  ReadOnlyBinaryStream *v13; // r5@9
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  int *v28; // lr@46
  __int64 v29; // kr00_8@60
  int v30; // r3@60
  int v31; // r1@60
  int v32; // r2@60
  int v33; // r3@60
  int v34; // r1@60
  __int16 v35; // r0@60
  void *v36; // r0@60
  void *v37; // r0@61
  void *v38; // r0@62
  void *v39; // r0@63
  void *v40; // r0@64
  void *v41; // r0@65
  void *v42; // r0@66
  unsigned int v43; // r0@68
  int v44; // r1@68
  ResourcePackInfoData *v45; // r5@68
  unsigned int v46; // r2@68
  int v47; // r7@71
  ResourcePackInfoData *v48; // r0@72
  int v49; // r6@75
  ReadOnlyBinaryStream *v50; // r10@76
  unsigned int *v51; // r2@77
  signed int v52; // r1@79
  unsigned int *v53; // r2@81
  signed int v54; // r1@83
  unsigned int *v55; // r2@85
  signed int v56; // r1@87
  unsigned int *v57; // r2@89
  signed int v58; // r1@91
  unsigned int *v59; // r2@93
  signed int v60; // r1@95
  unsigned int *v61; // r2@97
  signed int v62; // r1@99
  unsigned int *v63; // r2@101
  signed int v64; // r1@103
  const void **v65; // r7@133
  __int64 v66; // r10@133
  int v67; // r3@133
  int v68; // r1@133
  int v69; // r2@133
  int v70; // r3@133
  int v71; // r1@133
  __int16 v72; // r0@133
  void *v73; // r0@133
  void *v74; // r0@134
  void *v75; // r0@135
  void *v76; // r0@136
  void *v77; // r0@137
  void *v78; // r0@138
  void *v79; // r0@139
  ResourcePackInfoData *v81; // [sp+44h] [bp-11Ch]@8
  ReadOnlyBinaryStream *v82; // [sp+44h] [bp-11Ch]@69
  char v83; // [sp+48h] [bp-118h]@133
  int v84; // [sp+4Ch] [bp-114h]@133
  int v85; // [sp+50h] [bp-110h]@133
  int v86; // [sp+54h] [bp-10Ch]@133
  int v87; // [sp+58h] [bp-108h]@133
  __int16 v88; // [sp+5Ch] [bp-104h]@133
  int v89; // [sp+60h] [bp-100h]@133
  int v90; // [sp+64h] [bp-FCh]@133
  int v91; // [sp+68h] [bp-F8h]@133
  __int16 v92; // [sp+6Ch] [bp-F4h]@133
  char v93; // [sp+6Eh] [bp-F2h]@133
  char v94; // [sp+70h] [bp-F0h]@133
  __int64 v95; // [sp+78h] [bp-E8h]@133
  int v96; // [sp+80h] [bp-E0h]@133
  int v97; // [sp+84h] [bp-DCh]@133
  char v98; // [sp+88h] [bp-D8h]@133
  int v99; // [sp+90h] [bp-D0h]@85
  int v100; // [sp+94h] [bp-CCh]@81
  int v101; // [sp+98h] [bp-C8h]@77
  char v102; // [sp+A0h] [bp-C0h]@133
  int v103; // [sp+B0h] [bp-B0h]@89
  int v104; // [sp+B4h] [bp-ACh]@93
  int v105; // [sp+B8h] [bp-A8h]@76
  int v106; // [sp+BCh] [bp-A4h]@101
  char v107; // [sp+C0h] [bp-A0h]@60
  int v108; // [sp+C4h] [bp-9Ch]@60
  int v109; // [sp+C8h] [bp-98h]@60
  int v110; // [sp+CCh] [bp-94h]@60
  int v111; // [sp+D0h] [bp-90h]@60
  __int16 v112; // [sp+D4h] [bp-8Ch]@60
  int v113; // [sp+D8h] [bp-88h]@60
  int v114; // [sp+DCh] [bp-84h]@60
  int v115; // [sp+E0h] [bp-80h]@60
  __int16 v116; // [sp+E4h] [bp-7Ch]@60
  char v117; // [sp+E6h] [bp-7Ah]@60
  char v118; // [sp+E8h] [bp-78h]@60
  __int64 v119; // [sp+F0h] [bp-70h]@60
  int v120; // [sp+F8h] [bp-68h]@60
  int v121; // [sp+FCh] [bp-64h]@60
  char v122; // [sp+100h] [bp-60h]@60
  int v123; // [sp+108h] [bp-58h]@18
  int v124; // [sp+10Ch] [bp-54h]@14
  int v125; // [sp+110h] [bp-50h]@10
  char v126; // [sp+118h] [bp-48h]@60
  int v127; // [sp+128h] [bp-38h]@22
  int v128; // [sp+12Ch] [bp-34h]@26
  int v129; // [sp+130h] [bp-30h]@9
  int v130; // [sp+134h] [bp-2Ch]@34

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 16) = ReadOnlyBinaryStream::getBool(a2);
  v4 = ReadOnlyBinaryStream::getUnsignedShort(v2);
  v6 = (ResourcePacksInfoPacket *)((char *)v3 + 20);
  v5 = *((_DWORD *)v3 + 5);
  v7 = (ResourcePackInfoData *)*((_DWORD *)v3 + 6);
  v8 = ((signed int)v7 - v5) >> 6;
  if ( v4 <= v8 )
  {
    if ( v4 < v8 )
    {
      v9 = v2;
      v10 = v5 + (v4 << 6);
      if ( v7 != (ResourcePackInfoData *)v10 )
      {
        v11 = (ResourcePackInfoData *)(v5 + (v4 << 6));
        do
          v11 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v11) + 64);
        while ( v7 != v11 );
      }
      *((_DWORD *)v3 + 6) = v10;
      v7 = (ResourcePackInfoData *)v10;
      v2 = v9;
    }
  }
  else
    std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::_M_default_append((int)v3 + 20, v4 - v8);
    v7 = (ResourcePackInfoData *)*((_DWORD *)v3 + 6);
  v12 = *(_DWORD *)v6;
  v81 = v7;
  if ( *(ResourcePackInfoData **)v6 != v7 )
    v13 = (ReadOnlyBinaryStream *)&v129;
    do
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v130, (int)v2);
      ReadOnlyBinaryStream::getString(v13, (int)v2);
      v29 = ReadOnlyBinaryStream::getUnsignedInt64(v2);
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v128, (int)v2);
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v127, (int)v2);
      mce::UUID::fromString((int)&v126, &v130);
      SemVersion::SemVersion((SemVersion *)&v122);
      SemVersion::fromString((const void **)&v129, (int)&v122);
      ResourcePackInfoData::ResourcePackInfoData((int)&v107, (int)&v126, (int)&v122, v30, v29, &v128, &v127);
      v31 = v108;
      v32 = v109;
      v33 = v110;
      *(_DWORD *)v12 = *(_DWORD *)&v107;
      *(_DWORD *)(v12 + 4) = v31;
      *(_DWORD *)(v12 + 8) = v32;
      *(_DWORD *)(v12 + 12) = v33;
      v34 = v111;
      *(_WORD *)(v12 + 20) = v112;
      *(_DWORD *)(v12 + 16) = v34;
      EntityInteraction::setInteractText((int *)(v12 + 24), &v113);
      EntityInteraction::setInteractText((int *)(v12 + 28), &v114);
      EntityInteraction::setInteractText((int *)(v12 + 32), &v115);
      v35 = v116;
      *(_BYTE *)(v12 + 38) = v117;
      *(_WORD *)(v12 + 36) = v35;
      *(_BYTE *)(v12 + 40) = v118;
      *(_QWORD *)(v12 + 48) = v119;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v12 + 56),
        &v120);
        (int *)(v12 + 60),
        &v121);
      ResourcePackInfoData::~ResourcePackInfoData((ResourcePackInfoData *)&v107);
      v28 = &dword_28898C0;
      v36 = (void *)(v125 - 12);
      if ( (int *)(v125 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v125 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v13 = (ReadOnlyBinaryStream *)&v129;
      v37 = (void *)(v124 - 12);
      if ( (int *)(v124 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v124 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      v38 = (void *)(v123 - 12);
      if ( (int *)(v123 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v123 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
          v28 = &dword_28898C0;
      v39 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != v28 )
        v20 = (unsigned int *)(v127 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = (void *)(v128 - 12);
      if ( (int *)(v128 - 12) != v28 )
        v22 = (unsigned int *)(v128 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      v41 = (void *)(v129 - 12);
      if ( (int *)(v129 - 12) != v28 )
        v24 = (unsigned int *)(v129 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      v42 = (void *)(v130 - 12);
      if ( (int *)(v130 - 12) != v28 )
        v26 = (unsigned int *)(v130 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v12 += 64;
    while ( (ResourcePackInfoData *)v12 != v81 );
  v43 = ReadOnlyBinaryStream::getUnsignedShort(v2);
  v44 = *((_DWORD *)v3 + 8);
  v45 = (ResourcePackInfoData *)*((_DWORD *)v3 + 9);
  v46 = ((signed int)v45 - v44) >> 6;
  if ( v43 <= v46 )
    v82 = v2;
    if ( v43 < v46 )
      v47 = v44 + (v43 << 6);
      if ( v45 != (ResourcePackInfoData *)v47 )
        v48 = (ResourcePackInfoData *)(v44 + (v43 << 6));
          v48 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v48) + 64);
        while ( v45 != v48 );
      v45 = (ResourcePackInfoData *)v47;
      *((_DWORD *)v3 + 9) = v47;
    std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::_M_default_append((int)v3 + 32, v43 - v46);
    v45 = (ResourcePackInfoData *)*((_DWORD *)v3 + 9);
  v49 = *((_DWORD *)v3 + 8);
  if ( (ResourcePackInfoData *)v49 != v45 )
    v50 = (ReadOnlyBinaryStream *)&v105;
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v106, (int)v82);
      ReadOnlyBinaryStream::getString(v50, (int)v82);
      v65 = (const void **)v50;
      v66 = ReadOnlyBinaryStream::getUnsignedInt64(v82);
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v104, (int)v82);
      ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v103, (int)v82);
      mce::UUID::fromString((int)&v102, &v106);
      SemVersion::SemVersion((SemVersion *)&v98);
      SemVersion::fromString(v65, (int)&v98);
      ResourcePackInfoData::ResourcePackInfoData((int)&v83, (int)&v102, (int)&v98, v67, v66, &v104, &v103);
      v68 = v84;
      v69 = v85;
      v70 = v86;
      *(_DWORD *)v49 = *(_DWORD *)&v83;
      *(_DWORD *)(v49 + 4) = v68;
      *(_DWORD *)(v49 + 8) = v69;
      *(_DWORD *)(v49 + 12) = v70;
      v71 = v87;
      *(_WORD *)(v49 + 20) = v88;
      *(_DWORD *)(v49 + 16) = v71;
      EntityInteraction::setInteractText((int *)(v49 + 24), &v89);
      EntityInteraction::setInteractText((int *)(v49 + 28), &v90);
      EntityInteraction::setInteractText((int *)(v49 + 32), &v91);
      v72 = v92;
      *(_BYTE *)(v49 + 38) = v93;
      *(_WORD *)(v49 + 36) = v72;
      *(_BYTE *)(v49 + 40) = v94;
      *(_QWORD *)(v49 + 48) = v95;
        (int *)(v49 + 56),
        &v96);
        (int *)(v49 + 60),
        &v97);
      ResourcePackInfoData::~ResourcePackInfoData((ResourcePackInfoData *)&v83);
      v50 = (ReadOnlyBinaryStream *)v65;
      v73 = (void *)(v101 - 12);
      if ( (int *)(v101 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v101 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v73);
      v74 = (void *)(v100 - 12);
      if ( (int *)(v100 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v100 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      v75 = (void *)(v99 - 12);
      if ( (int *)(v99 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v99 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
      v76 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v103 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v76);
      v77 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v104 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
      v78 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v105 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v78);
      v79 = (void *)(v106 - 12);
      if ( (int *)(v106 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v106 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v79);
      v49 += 64;
    while ( (ResourcePackInfoData *)v49 != v45 );
  return 0;
}


const void **__fastcall ResourcePacksInfoPacket::write(ResourcePacksInfoPacket *this, BinaryStream *a2)
{
  ResourcePacksInfoPacket *v2; // r9@1
  BinaryStream *v3; // r4@1
  int v4; // r5@1
  int i; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void *v8; // r0@11
  char *v9; // r0@12
  int v10; // r1@12
  const void **result; // r0@13
  __int64 j; // r6@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  void *v15; // r0@23
  char *v16; // r0@24
  int v17; // r1@24
  int v18; // [sp+4h] [bp-3Ch]@15
  int v19; // [sp+8h] [bp-38h]@3

  v2 = this;
  v3 = a2;
  BinaryStream::writeBool(a2, *((_BYTE *)this + 16));
  BinaryStream::writeUnsignedShort(
    v3,
    (unsigned int)((*(_QWORD *)((char *)v2 + 20) >> 32) - *(_QWORD *)((char *)v2 + 20)) >> 6);
  v4 = *(_QWORD *)((char *)v2 + 20) >> 32;
  for ( i = *(_QWORD *)((char *)v2 + 20); i != v4; i += 64 )
  {
    mce::UUID::asString((mce::UUID *)&v19);
    BinaryStream::writeString((int)v3, (char **)&v19);
    v8 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = SemVersion::asString((SemVersion *)(i + 16));
    BinaryStream::writeString((int)v3, (char **)v9);
    BinaryStream::writeUnsignedInt64(v3, v10, *(_QWORD *)(i + 48));
    BinaryStream::writeString((int)v3, (char **)(i + 56));
    BinaryStream::writeString((int)v3, (char **)(i + 60));
  }
  result = BinaryStream::writeUnsignedShort(v3, (unsigned int)((*((_QWORD *)v2 + 4) >> 32) - *((_QWORD *)v2 + 4)) >> 6);
  for ( j = *((_QWORD *)v2 + 4); (_DWORD)j != HIDWORD(j); LODWORD(j) = j + 64 )
    mce::UUID::asString((mce::UUID *)&v18);
    BinaryStream::writeString((int)v3, (char **)&v18);
    v15 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v18 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = SemVersion::asString((SemVersion *)(j + 16));
    BinaryStream::writeString((int)v3, (char **)v16);
    BinaryStream::writeUnsignedInt64(v3, v17, *(_QWORD *)(j + 48));
    BinaryStream::writeString((int)v3, (char **)(j + 56));
    result = BinaryStream::writeString((int)v3, (char **)(j + 60));
  return result;
}


ResourcePacksInfoPacket *__fastcall ResourcePacksInfoPacket::~ResourcePacksInfoPacket(ResourcePacksInfoPacket *this)
{
  ResourcePacksInfoPacket *v1; // r4@1
  ResourcePackInfoData *v2; // r0@1
  ResourcePackInfoData *v3; // r5@1
  ResourcePackInfoData *v4; // r0@6
  ResourcePackInfoData *v5; // r5@6

  v1 = this;
  *(_DWORD *)this = &off_26E9364;
  v3 = (ResourcePackInfoData *)(*((_QWORD *)this + 4) >> 32);
  v2 = (ResourcePackInfoData *)*((_QWORD *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v2) + 64);
    while ( v3 != v2 );
    v2 = (ResourcePackInfoData *)*((_DWORD *)v1 + 8);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (ResourcePackInfoData *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v4 = (ResourcePackInfoData *)*(_QWORD *)((char *)v1 + 20);
  if ( v4 != v5 )
      v4 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v4) + 64);
    while ( v5 != v4 );
    v4 = (ResourcePackInfoData *)*((_DWORD *)v1 + 5);
  if ( v4 )
    operator delete((void *)v4);
  return v1;
}
