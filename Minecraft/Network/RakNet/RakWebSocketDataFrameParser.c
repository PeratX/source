

int __fastcall RakWebSocketDataFrameParser::RakWebSocketDataFrameParser(int result, char a2)
{
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 32) = a2;
  return result;
}


RakWebSocketDataFrameParser *__fastcall RakWebSocketDataFrameParser::~RakWebSocketDataFrameParser(RakWebSocketDataFrameParser *this)
{
  RakWebSocketDataFrameParser *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r5@17
  unsigned int *v9; // r1@18
  unsigned int v10; // r0@20
  unsigned int *v11; // r6@24
  unsigned int v12; // r0@26

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 6);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 3);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v8 = *((_DWORD *)v1 + 1);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return v1;
}


int __fastcall RakWebSocketDataFrameParser::setOnFailHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 16;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 24);
  v10 = v13;
  *(_DWORD *)(v4 + 24) = v8;
  v14 = *(_DWORD *)(v4 + 28);
  *(_DWORD *)(v4 + 28) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall RakWebSocketDataFrameParser::readFrame(RakWebSocketDataFrameParser *this, RakNet::BitStream *a2, int a3)
{
  RakNet::BitStream *v3; // r11@1
  int v4; // r6@1
  RakWebSocketDataFrameHeader **v5; // r4@1
  __int64 v6; // r0@2
  int v7; // r5@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r7@9
  unsigned int v11; // r0@11
  int v12; // r7@16
  unsigned int *v13; // r1@17
  unsigned int v14; // r0@19
  unsigned int *v15; // r5@23
  unsigned int v16; // r0@25
  int v17; // r0@30
  int v18; // r2@30
  RakWebSocketDataFrameHeader *v19; // r1@31
  RakWebSocketDataFrame *v20; // r0@38
  unsigned __int8 v21; // r1@38
  RakWebSocketDataFrame *v22; // r0@46
  unsigned __int8 v23; // r1@46
  signed int v24; // r1@46
  RakWebSocketDataFrameHeader *v25; // r0@46
  RakWebSocketDataFrame *v26; // r0@50
  unsigned __int8 v27; // r1@50
  RakWebSocketDataFrame *v28; // r0@51
  unsigned __int8 v29; // r1@51
  signed int v30; // r9@53
  int *v31; // r0@53
  char v32; // r0@56
  int v33; // r0@57
  signed int v34; // r0@59
  char v35; // r0@60
  int v36; // r0@62
  char v37; // r2@62
  int v38; // r10@66
  unsigned __int8 *v39; // r7@66
  unsigned int v40; // r1@66
  int v41; // r0@66
  RakNet::BitStream *v42; // r0@66
  int v43; // r5@66
  int v44; // t1@66
  int v45; // r0@68
  int v46; // r2@68
  __int64 v47; // kr08_8@68
  RakWebSocketDataFrame *v48; // r0@72
  unsigned __int8 v49; // r1@72
  bool v50; // zf@73
  __int64 v51; // r0@78
  int v52; // r7@78
  unsigned int *v53; // r1@79
  unsigned int v54; // r0@81
  unsigned int *v55; // r5@85
  unsigned int v56; // r0@87
  int v57; // r7@92
  unsigned int *v58; // r1@93
  unsigned int v59; // r0@95
  unsigned int *v60; // r5@99
  unsigned int v61; // r0@101
  RakWebSocketDataFrameHeader *v62; // r0@107
  int v63; // r0@107
  int v64; // r0@111
  int v65; // r0@115
  unsigned int *v66; // r0@116
  unsigned int v67; // r1@118
  RakWebSocketDataFrameHeader *v68; // r0@120
  int v69; // r0@122
  void *v70; // r0@122
  unsigned int *v71; // r2@123
  signed int v72; // r1@125
  signed int v73; // r0@127
  int v74; // r0@130
  int v75; // r0@130
  int v76; // r0@131
  unsigned int v77; // r1@134
  RakWebSocketDataFrameHeader *v78; // r0@138
  int v79; // r0@140
  RakWebSocketDataFrameHeader *v80; // r0@145
  int v81; // r0@147
  RakWebSocketDataFrameHeader *v82; // r0@152
  int v83; // r0@154
  int v84; // r0@159
  int v85; // r0@159
  RakWebSocketDataFrameHeader *v86; // r0@160
  int v87; // r0@162
  RakWebSocketDataFrameHeader *v88; // r0@167
  int v89; // r0@169
  RakWebSocketDataFrameHeader *v90; // r0@174
  int v91; // r0@176
  RakWebSocketDataFrameHeader *v92; // r0@181
  int v93; // r0@183
  RakWebSocketDataFrameHeader *v94; // r0@188
  int v95; // r0@190
  RakWebSocketDataFrameParser *v96; // [sp+8h] [bp-88h]@1
  int v97; // [sp+10h] [bp-80h]@64
  unsigned __int8 v98; // [sp+17h] [bp-79h]@62
  char v99; // [sp+18h] [bp-78h]@78
  int v100; // [sp+1Ch] [bp-74h]@78
  int v101; // [sp+24h] [bp-6Ch]@76
  int v102; // [sp+2Ch] [bp-64h]@49
  int v103; // [sp+34h] [bp-5Ch]@160
  int v104; // [sp+3Ch] [bp-54h]@188
  int v105; // [sp+44h] [bp-4Ch]@152
  int v106; // [sp+4Ch] [bp-44h]@145
  int v107; // [sp+54h] [bp-3Ch]@138
  int v108; // [sp+5Ch] [bp-34h]@120
  char v109; // [sp+60h] [bp-30h]@2
  int v110; // [sp+64h] [bp-2Ch]@2
  unsigned __int8 v111; // [sp+68h] [bp-28h]@55

  v3 = a2;
  v96 = this;
  v4 = a3;
  v5 = (RakWebSocketDataFrameHeader **)((char *)a2 + 8);
  if ( !*((_DWORD *)a2 + 2) )
  {
    j__ZNSt12__shared_ptrI21RakWebSocketDataFrameLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v109);
    v6 = *(_QWORD *)&v109;
    *(_DWORD *)&v109 = 0;
    v110 = 0;
    *((_DWORD *)v3 + 2) = v6;
    v7 = *((_DWORD *)v3 + 3);
    *((_DWORD *)v3 + 3) = HIDWORD(v6);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
    v12 = v110;
    if ( v110 )
      v13 = (unsigned int *)(v110 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
  v17 = *(_DWORD *)v4;
  v18 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)v4 == v18 )
    v19 = *v5;
LABEL_115:
    *(_DWORD *)v96 = v19;
    v65 = *((_DWORD *)v3 + 3);
    *((_DWORD *)v96 + 1) = v65;
    if ( !v65 )
      return;
    v66 = (unsigned int *)(v65 + 4);
    if ( !&pthread_create )
LABEL_136:
      ++*v66;
    __dmb();
    do
      v67 = __ldrex(v66);
    while ( __strex(v67 + 1, v66) );
LABEL_119:
    return;
  v19 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
  while ( 2 )
    switch ( *((_DWORD *)v19 + 75) )
      case 0:
        if ( (unsigned int)(v17 + 7 - v18) <= 0xF )
          *(_DWORD *)v96 = v19;
          v76 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v96 + 1) = v76;
          if ( !v76 )
            return;
          v66 = (unsigned int *)(v76 + 4);
          if ( !&pthread_create )
            goto LABEL_136;
            v77 = __ldrex(v66);
          while ( __strex(v77 + 1, v66) );
          goto LABEL_119;
        RakNet::BitStream::ReadAlignedBytes((RakNet::BitStream *)v4, (unsigned __int8 *)v19, 2u);
        if ( RakWebSocketDataFrameHeader::getRSV1Bit(*v5)
          || RakWebSocketDataFrameHeader::getRSV2Bit(*v5)
          || RakWebSocketDataFrameHeader::getRSV3Bit(*v5) )
          sub_21E94B4((void **)&v108, "Frame Error: Reserved bits set but extensions aren't supported.");
          v68 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
          *((_DWORD *)v68 + 75) = 6;
          if ( *((_DWORD *)v3 + 6) )
          {
            (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v108, 1008);
            v68 = *v5;
          }
          *(_DWORD *)v96 = v68;
          v69 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v3 + 3) = 0;
          *((_DWORD *)v96 + 1) = v69;
          *((_DWORD *)v3 + 2) = 0;
          v70 = (void *)(v108 - 12);
          if ( (int *)(v108 - 12) != &dword_28898C0 )
            v71 = (unsigned int *)(v108 - 4);
            if ( !&pthread_create )
              goto LABEL_195;
            __dmb();
            do
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            goto LABEL_196;
          return;
        v20 = (RakWebSocketDataFrame *)RakWebSocketDataFrameHeader::getOpCode(*v5);
        if ( RakWebSocketDataFrame::_isUnsupported(v20, v21) == 1 )
          sub_21E94B4(
            (void **)&v107,
            "Frame Error: Reserved non-control or control opcodes used...but not supported in RFC 6455 spec.");
          v78 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
          *((_DWORD *)v78 + 75) = 6;
            (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v107, 1008);
            v78 = *v5;
          *(_DWORD *)v96 = v78;
          v79 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v96 + 1) = v79;
          v70 = (void *)(v107 - 12);
          if ( (int *)(v107 - 12) != &dword_28898C0 )
            v71 = (unsigned int *)(v107 - 4);
        if ( !*((_BYTE *)v3 + 32) )
          goto LABEL_200;
        if ( RakWebSocketDataFrameHeader::getMaskBit(*v5) )
          sub_21E94B4((void **)&v106, "Frame Error: Server frame was MASKED, violates RFC 6455 spec.");
          v80 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
          *((_DWORD *)v80 + 75) = 6;
            (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v106, 1002);
            v80 = *v5;
          *(_DWORD *)v96 = v80;
          v81 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v96 + 1) = v81;
          v70 = (void *)(v106 - 12);
          if ( (int *)(v106 - 12) != &dword_28898C0 )
            v71 = (unsigned int *)(v106 - 4);
LABEL_200:
          if ( !RakWebSocketDataFrameHeader::getMaskBit(*v5) )
            sub_21E94B4((void **)&v105, "Frame Error: Client frame was NOT MASKED, violates RFC 6455 spec.");
            v82 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
            *((_DWORD *)v82 + 75) = 6;
            if ( *((_DWORD *)v3 + 6) )
            {
              (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v105, 1002);
              v82 = *v5;
            }
            *(_DWORD *)v96 = v82;
            v83 = *((_DWORD *)v3 + 3);
            *((_DWORD *)v3 + 3) = 0;
            *((_DWORD *)v96 + 1) = v83;
            *((_DWORD *)v3 + 2) = 0;
            v70 = (void *)(v105 - 12);
            if ( (int *)(v105 - 12) != &dword_28898C0 )
              v71 = (unsigned int *)(v105 - 4);
              if ( !&pthread_create )
                goto LABEL_195;
              __dmb();
              do
                v72 = __ldrex(v71);
              while ( __strex(v72 - 1, v71) );
              goto LABEL_196;
        if ( RakWebSocketDataFrameHeader::getOpCode(*v5) != 8
          || !RakWebSocketDataFrameHeader::getPayloadLength(*v5)
          || (unsigned int)RakWebSocketDataFrameHeader::getPayloadLength(*v5) > 1 )
          v22 = (RakWebSocketDataFrame *)RakWebSocketDataFrameHeader::getOpCode(*v5);
          v24 = RakWebSocketDataFrame::_isControl(v22, v23);
          v25 = *v5;
          if ( v24 == 1 )
            if ( !RakWebSocketDataFrameHeader::getFinBit(v25) )
              sub_21E94B4((void **)&v103, "Frame Error: Server sent fragmented control frame, violates RFC 6455 spec.");
              v86 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
              *((_DWORD *)v86 + 75) = 6;
              if ( *((_DWORD *)v3 + 6) )
              {
                (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v103, 1002);
                v86 = *v5;
              }
              *(_DWORD *)v96 = v86;
              v87 = *((_DWORD *)v3 + 3);
              *((_DWORD *)v3 + 3) = 0;
              *((_DWORD *)v96 + 1) = v87;
              *((_DWORD *)v3 + 2) = 0;
              v70 = (void *)(v103 - 12);
              if ( (int *)(v103 - 12) != &dword_28898C0 )
                v71 = (unsigned int *)(v103 - 4);
                if ( !&pthread_create )
                  goto LABEL_195;
                __dmb();
                do
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                goto LABEL_196;
              return;
            if ( (unsigned int)RakWebSocketDataFrameHeader::getPayloadLength(*v5) >= 0x7E )
              sub_21E94B4((void **)&v102, "Frame Error: Server sent control frame with a payload length > 125.");
              v88 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
              *((_DWORD *)v88 + 75) = 6;
                (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v102, 1002);
                v88 = *v5;
              *(_DWORD *)v96 = v88;
              v89 = *((_DWORD *)v3 + 3);
              *((_DWORD *)v96 + 1) = v89;
              v70 = (void *)(v102 - 12);
              if ( (int *)(v102 - 12) != &dword_28898C0 )
                v71 = (unsigned int *)(v102 - 4);
          else
            v48 = (RakWebSocketDataFrame *)RakWebSocketDataFrameHeader::getOpCode(v25);
            if ( RakWebSocketDataFrame::_isNonControl(v48, v49) == 1 )
              v50 = *(_DWORD *)v3 == 0;
              if ( *(_DWORD *)v3 )
                v50 = *(_DWORD *)(*(_DWORD *)v3 + 300) == 5;
              if ( !v50 )
                sub_21E94B4(
                  (void **)&v101,
                  "Frame Error: Server sent new non-control message before finishing previous non-control fragmented message.");
                v92 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
                *((_DWORD *)v92 + 75) = 6;
                if ( *((_DWORD *)v3 + 6) )
                {
                  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v101, 1002);
                  v92 = *v5;
                }
                *(_DWORD *)v96 = v92;
                v93 = *((_DWORD *)v3 + 3);
                *((_DWORD *)v3 + 3) = 0;
                *((_DWORD *)v96 + 1) = v93;
                *((_DWORD *)v3 + 2) = 0;
                v70 = (void *)(v101 - 12);
                if ( (int *)(v101 - 12) != &dword_28898C0 )
                  v71 = (unsigned int *)(v101 - 4);
                  if ( !&pthread_create )
                    goto LABEL_195;
                  __dmb();
                  do
                    v72 = __ldrex(v71);
                  while ( __strex(v72 - 1, v71) );
                  goto LABEL_196;
                return;
              if ( !RakWebSocketDataFrameHeader::getFinBit(*v5) )
                j__ZNSt12__shared_ptrI21RakWebSocketDataFrameLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v99);
                v51 = *(_QWORD *)&v99;
                *(_DWORD *)&v99 = 0;
                v100 = 0;
                *(_DWORD *)v3 = v51;
                v52 = *((_DWORD *)v3 + 1);
                *((_DWORD *)v3 + 1) = HIDWORD(v51);
                if ( v52 )
                  v53 = (unsigned int *)(v52 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v54 = __ldrex(v53);
                    while ( __strex(v54 - 1, v53) );
                  }
                  else
                    v54 = (*v53)--;
                  if ( v54 == 1 )
                    v55 = (unsigned int *)(v52 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v56 = __ldrex(v55);
                      while ( __strex(v56 - 1, v55) );
                    }
                    else
                      v56 = (*v55)--;
                    if ( v56 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
                v57 = v100;
                if ( v100 )
                  v58 = (unsigned int *)(v100 + 4);
                      v59 = __ldrex(v58);
                    while ( __strex(v59 - 1, v58) );
                    v59 = (*v58)--;
                  if ( v59 == 1 )
                    v60 = (unsigned int *)(v57 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
                        v61 = __ldrex(v60);
                      while ( __strex(v61 - 1, v60) );
                      v61 = (*v60)--;
                    if ( v61 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
                **(_WORD **)v3 = **((_WORD **)v3 + 2);
          v62 = *v5;
          *((_DWORD *)v62 + 70) = 0;
          *((_DWORD *)v62 + 71) = 0;
          v63 = RakWebSocketDataFrameHeader::getPayloadLength(v62);
          if ( v63 == 127 )
            v19 = *v5;
            *((_DWORD *)v19 + 75) = 1;
            *((_BYTE *)v19 + 294) = 8;
            goto def_165CB50;
          if ( v63 == 126 )
            *((_BYTE *)v19 + 294) = 2;
          v64 = RakWebSocketDataFrameHeader::getPayloadLength(*v5);
          v19 = *v5;
          *((_DWORD *)v19 + 70) = v64;
          *((_DWORD *)v19 + 71) = 0;
          goto LABEL_112;
        sub_21E94B4(
          (void **)&v104,
          "Frame Error: Close frames with Application data MUST have 2 bytes reserved for status code.");
        v94 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
        *((_DWORD *)v94 + 75) = 6;
        if ( *((_DWORD *)v3 + 6) )
          (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v104, 1002);
          v94 = *v5;
        *(_DWORD *)v96 = v94;
        v95 = *((_DWORD *)v3 + 3);
        *((_DWORD *)v3 + 3) = 0;
        *((_DWORD *)v96 + 1) = v95;
        *((_DWORD *)v3 + 2) = 0;
        v70 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v104 - 4);
            goto LABEL_195;
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          goto LABEL_196;
        return;
      case 4:
        v26 = (RakWebSocketDataFrame *)RakWebSocketDataFrameHeader::getOpCode(v19);
        if ( RakWebSocketDataFrame::_isContinuation(v26, v27)
          || (v28 = (RakWebSocketDataFrame *)RakWebSocketDataFrameHeader::getOpCode(*v5),
              RakWebSocketDataFrame::_isNonControl(v28, v29) == 1)
          && !RakWebSocketDataFrameHeader::getFinBit(*v5) )
          v30 = 0;
          v31 = (int *)v3;
          v30 = 1;
          v31 = (int *)v5;
        v38 = *v31;
        v39 = *(unsigned __int8 **)(*((_DWORD *)v3 + 2) + 280);
        v40 = *(_DWORD *)v4 + 7 - *(_DWORD *)(v4 + 8);
        v41 = *v31;
        v44 = *(_DWORD *)(v41 + 4);
        v42 = (RakNet::BitStream *)(v41 + 4);
        v43 = v44;
        if ( v40 >> 3 < (unsigned int)v39 )
          v39 = (unsigned __int8 *)(v40 >> 3);
        RakNet::BitStream::Write(v42, (RakNet::BitStream *)v4, 8 * (_DWORD)v39);
        v19 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
        v47 = *((_QWORD *)v19 + 35) - (unsigned int)v39;
        v46 = HIDWORD(v47);
        v45 = v47;
        *((_QWORD *)v19 + 35) = v47;
          RakWebSocketDataFrame::_maskUnmaskData(
            (RakWebSocketDataFrame *)(*(_DWORD *)(v38 + 16) + ((unsigned int)(v43 + 7) >> 3)),
            v39,
            *((_DWORD *)v19 + 72),
            *((_BYTE *)v3 + 32));
          v46 = *((_QWORD *)*v5 + 35) >> 32;
          v45 = *((_QWORD *)*v5 + 35);
        if ( v45 | v46 )
          goto def_165CB50;
        v50 = RakWebSocketDataFrameHeader::getFinBit(v19) == 0;
        v73 = 0;
        if ( v50 )
          v73 = 1;
        if ( v73 | v30 )
          v74 = *((_DWORD *)v3 + 2);
          *(_DWORD *)(v74 + 300) = 5;
          *(_DWORD *)v96 = v74;
          v75 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v96 + 1) = v75;
          v84 = *(_DWORD *)v3;
          *(_DWORD *)(v84 + 300) = 5;
          *(_DWORD *)v96 = v84;
          v85 = *((_DWORD *)v3 + 1);
          *((_DWORD *)v3 + 1) = 0;
          *((_DWORD *)v96 + 1) = v85;
          *(_DWORD *)v3 = 0;
      case 2:
          v111 = 0;
          RakNet::BitStream::ReadAlignedBytes((RakNet::BitStream *)v4, &v111, 1u);
          v19 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
          *((_DWORD *)v19 + 72) = v111 | (*((_DWORD *)v19 + 72) << 8);
          if ( !*((_BYTE *)v3 + 32) )
            v32 = *((_BYTE *)v19 + 295) - 1;
            *((_BYTE *)v19 + 295) = v32;
            if ( v32 )
              goto def_165CB50;
        v33 = RakWebSocketDataFrameHeader::getOpCode(v19);
        v19 = *v5;
        if ( v33 != 8 || !*((_QWORD *)v19 + 35) )
          goto LABEL_61;
        v34 = 3;
        goto LABEL_113;
      case 3:
        v111 = 0;
        RakNet::BitStream::ReadAlignedBytes((RakNet::BitStream *)v4, &v111, 1u);
        *((_WORD *)v19 + 146) = v111 | (unsigned __int16)(*((_WORD *)*v5 + 146) << 8);
        v35 = *((_BYTE *)v19 + 296) - 1;
        *((_BYTE *)v19 + 296) = v35;
        if ( v35 )
LABEL_61:
        v34 = 4;
      case 1:
        v98 = 0;
        RakNet::BitStream::ReadAlignedBytes((RakNet::BitStream *)v4, &v98, 1u);
        v36 = *((_QWORD *)*v5 + 35) >> 24;
        *((_DWORD *)v19 + 70) = v98 | ((unsigned int)*((_QWORD *)*v5 + 35) << 8);
        *((_DWORD *)v19 + 71) = v36;
        v37 = *((_BYTE *)v19 + 294) - 1;
        *((_BYTE *)v19 + 294) = v37;
        if ( v37 )
        if ( v36 )
          sub_21E94B4((void **)&v97, "Frame Error: Data Frames with payloads greater than max int aren't supported.");
          v90 = (RakWebSocketDataFrameHeader *)*((_DWORD *)v3 + 2);
          *((_DWORD *)v90 + 75) = 6;
            (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 7))((char *)v3 + 16, &v97, 1009);
            v90 = *v5;
          *(_DWORD *)v96 = v90;
          v91 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v96 + 1) = v91;
          v70 = (void *)(v97 - 12);
          if ( (int *)(v97 - 12) != &dword_28898C0 )
            v71 = (unsigned int *)(v97 - 4);
            if ( &pthread_create )
            else
LABEL_195:
              v72 = (*v71)--;
LABEL_196:
            if ( v72 <= 0 )
              j_j_j_j__ZdlPv_9(v70);
LABEL_112:
        v34 = 2;
LABEL_113:
        *((_DWORD *)v19 + 75) = v34;
def_165CB50:
        v17 = *(_DWORD *)v4;
        v18 = *(_DWORD *)(v4 + 8);
        if ( *(_DWORD *)v4 == v18 )
          goto LABEL_115;
        continue;
      default:
        goto def_165CB50;
}


void __fastcall RakWebSocketDataFrameParser::readFrame(RakWebSocketDataFrameParser *this, RakNet::BitStream *a2, int a3)
{
  RakWebSocketDataFrameParser::readFrame(this, a2, a3);
}


int __fastcall RakWebSocketDataFrameParser::_failReadFrame(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  int result; // r0@3

  v4 = a2;
  v5 = a1;
  v6 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v6 + 300) = 6;
  if ( *(_DWORD *)(a2 + 24) )
  {
    (*(void (__fastcall **)(int, int, int))(a2 + 28))(a2 + 16, a3, a4);
    v6 = *(_DWORD *)(v4 + 8);
  }
  *(_DWORD *)v5 = v6;
  result = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v5 + 4) = result;
  *(_DWORD *)(v4 + 8) = 0;
  return result;
}
