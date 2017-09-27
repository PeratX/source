

void __fastcall ClientCommandOutputSender::send(ClientCommandOutputSender *this, const CommandOrigin *a2, const CommandOutput *a3)
{
  const CommandOrigin *v3; // r6@1
  ClientCommandOutputSender *v4; // r9@1
  const CommandOutput *v5; // r5@1
  int v6; // r6@4
  CommandOutputMessage *v7; // r10@5
  unsigned __int64 v8; // kr00_8@5
  CommandOutputMessage *v9; // r8@5
  unsigned __int64 v10; // kr20_8@5
  int v11; // ST10_4@5
  int *v12; // r9@6
  CommandOutputMessage *v13; // r5@7
  __int64 v14; // kr08_8@7
  __int64 i; // r4@9
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  int v24; // r0@43
  int v25; // r10@43
  int *v26; // r0@44
  int *v27; // r6@44
  unsigned __int64 *v28; // r0@44
  __int64 v29; // kr10_8@44
  unsigned int v30; // r1@44
  const void **v31; // r0@46
  int *v32; // r6@47
  unsigned __int64 *v33; // r0@47
  void *v34; // r0@47
  unsigned __int64 v35; // r6@48
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  int *v38; // r0@58
  char *v39; // r0@65
  void *v40; // r0@66
  unsigned __int64 v41; // r6@67
  unsigned int *v42; // r2@69
  signed int v43; // r1@71
  int *v44; // r0@77
  void *v45; // r0@82
  unsigned int *v46; // r2@85
  signed int v47; // r1@87
  unsigned int *v48; // r2@89
  signed int v49; // r1@91
  int v50; // r0@101
  void (__fastcall *v51)(int, char **, int *, _DWORD); // r4@101
  int *v52; // r7@102
  char *v53; // r0@102
  const void **v54; // r0@102
  unsigned __int64 *v55; // r0@102
  void *v56; // r6@102
  void *v57; // r10@102
  int v58; // r7@104
  char *v59; // r6@104
  unsigned __int64 *v60; // r0@104
  __int64 v61; // r6@104
  unsigned int *v62; // r2@106
  signed int v63; // r1@108
  int *v64; // r0@114
  unsigned int *v65; // r2@120
  signed int v66; // r1@122
  int *v67; // r0@128
  char *v68; // r0@133
  void *v69; // r0@134
  int v70; // [sp+18h] [bp-78h]@4
  unsigned __int64 v71; // [sp+20h] [bp-70h]@47
  int v72; // [sp+2Ch] [bp-64h]@12
  unsigned __int64 v73; // [sp+30h] [bp-60h]@44
  int v74; // [sp+3Ch] [bp-54h]@20
  unsigned int v75; // [sp+40h] [bp-50h]@24
  char *v76; // [sp+44h] [bp-4Ch]@16
  int v77; // [sp+48h] [bp-48h]@104
  int v78; // [sp+4Ch] [bp-44h]@104
  void *v79; // [sp+54h] [bp-3Ch]@6
  void *v80; // [sp+58h] [bp-38h]@102
  int v81; // [sp+60h] [bp-30h]@89
  char *v82; // [sp+64h] [bp-2Ch]@85
  int v83; // [sp+88h] [bp-8h]@12

  v3 = a2;
  v4 = this;
  v5 = a3;
  switch ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 72))(a2) )
  {
    case 4:
    case 5:
      j_j_j__ZN19CommandOutputSender18_sendOverWebsocketERK13CommandOriginRK13CommandOutput(v4, v3, v5);
      break;
    case 0:
      if ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 24))(v3) )
      {
        v6 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 32))(v3);
        v70 = v6;
        if ( v6 )
        {
          v8 = *(_QWORD *)CommandOutput::getMessages(v5);
          v7 = (CommandOutputMessage *)HIDWORD(v8);
          v10 = v8;
          v11 = v10 >> 32;
          v9 = (CommandOutputMessage *)v10;
          if ( (_DWORD)v8 != HIDWORD(v8) )
          {
            v12 = (int *)&v79;
            do
            {
              v50 = CommandOutputMessage::getType(v9);
              v51 = *(void (__fastcall **)(int, char **, int *, _DWORD))(*(_DWORD *)v6 + 1376);
              if ( v50 == 1 )
              {
                v52 = sub_119C854(&v81, (int *)&unk_27D7068);
                sub_119C894((const void **)v52, "%", 1u);
                v53 = CommandOutputMessage::getMessageId(v9);
                v54 = sub_119C8A4((const void **)v52, (const void **)v53);
                v82 = (char *)*v54;
                *v54 = &unk_28898CC;
                v55 = (unsigned __int64 *)CommandOutputMessage::getParams(v9);
                CommandOutputSender::translate((int)v12, v55);
                v51(v6, &v82, v12, 0);
                v56 = v80;
                v57 = v79;
                if ( v79 != v80 )
                {
                  do
                  {
                    v67 = (int *)(*(_DWORD *)v57 - 12);
                    if ( v67 != &dword_28898C0 )
                    {
                      v65 = (unsigned int *)(*(_DWORD *)v57 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v66 = __ldrex(v65);
                        while ( __strex(v66 - 1, v65) );
                      }
                      else
                        v66 = (*v65)--;
                      if ( v66 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v67);
                    }
                    v57 = (char *)v57 + 4;
                  }
                  while ( v57 != v56 );
                  v57 = v79;
                }
                if ( v57 )
                  operator delete(v57);
                v68 = v82 - 12;
                if ( (int *)(v82 - 12) != &dword_28898C0 )
                  v46 = (unsigned int *)(v82 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v47 = __ldrex(v46);
                    while ( __strex(v47 - 1, v46) );
                  else
                    v47 = (*v46)--;
                  if ( v47 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v68);
                v12 = (int *)&v79;
                v69 = (void *)(v81 - 12);
                if ( (int *)(v81 - 12) != &dword_28898C0 )
                  v48 = (unsigned int *)(v81 - 4);
                      v49 = __ldrex(v48);
                    while ( __strex(v49 - 1, v48) );
                    v49 = (*v48)--;
                  if ( v49 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v69);
                v7 = (CommandOutputMessage *)HIDWORD(v8);
              }
              else
                v58 = v6;
                v59 = CommandOutputMessage::getMessageId(v9);
                v60 = (unsigned __int64 *)CommandOutputMessage::getParams(v9);
                CommandOutputSender::translate((int)&v77, v60);
                v51(v58, (char **)v59, &v77, 0);
                v61 = *(_QWORD *)&v77;
                if ( v77 != v78 )
                    v64 = (int *)(*(_DWORD *)v61 - 12);
                    if ( v64 != &dword_28898C0 )
                      v62 = (unsigned int *)(*(_DWORD *)v61 - 4);
                          v63 = __ldrex(v62);
                        while ( __strex(v63 - 1, v62) );
                        v63 = (*v62)--;
                      if ( v63 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v64);
                    LODWORD(v61) = v61 + 4;
                  while ( (_DWORD)v61 != HIDWORD(v61) );
                  LODWORD(v61) = v77;
                if ( (_DWORD)v61 )
                  operator delete((void *)v61);
              v6 = v70;
              v9 = (CommandOutputMessage *)((char *)v9 + 20);
            }
            while ( v9 != v7 );
          }
        }
      }
    case 3:
      v14 = *(_QWORD *)CommandOutput::getMessages(v5);
      v13 = (CommandOutputMessage *)v14;
      if ( (_DWORD)v14 != HIDWORD(v14) )
        do
          v24 = CommandOutputMessage::getType(v13);
          v25 = *((_DWORD *)v4 + 2);
          if ( v24 == 1 )
            v26 = sub_119C854((int *)&v75, (int *)&unk_27D7068);
            sub_119C894((const void **)v26, "%", 1u);
            v27 = (int *)CommandOutputMessage::getMessageId(v13);
            v28 = (unsigned __int64 *)CommandOutputMessage::getParams(v13);
            CommandOutputSender::translate((int)&v73, v28);
            I18n::get(&v74, v27, &v73);
            v29 = *(_QWORD *)(v75 - 12);
            v30 = *(_DWORD *)(v74 - 12) + v29;
            if ( v30 > HIDWORD(v29) && v30 <= *(_DWORD *)(v74 - 8) )
              v31 = sub_119C984((const void **)&v74, 0, v75, (_BYTE *)v29);
            else
              v31 = sub_119C8A4((const void **)&v75, (const void **)&v74);
            v76 = (char *)*v31;
            *v31 = &unk_28898CC;
            GuiData::displayDevConsoleMessage(v25, (int *)&v76);
            v39 = v76 - 12;
            if ( (int *)(v76 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v76 - 4);
              if ( v83 )
                __dmb();
                do
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v19 = (*v18)--;
              if ( v19 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v39);
            v40 = (void *)(v74 - 12);
            if ( (int *)(v74 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v74 - 4);
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v40);
            v41 = v73;
            if ( (_DWORD)v73 != HIDWORD(v73) )
              do
                v44 = (int *)(*(_DWORD *)v41 - 12);
                if ( v44 != &dword_28898C0 )
                  v42 = (unsigned int *)(*(_DWORD *)v41 - 4);
                      v43 = __ldrex(v42);
                    while ( __strex(v43 - 1, v42) );
                    v43 = (*v42)--;
                  if ( v43 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v44);
                LODWORD(v41) = v41 + 4;
              while ( (_DWORD)v41 != HIDWORD(v41) );
              LODWORD(v41) = v73;
            if ( (_DWORD)v41 )
              operator delete((void *)v41);
            v45 = (void *)(v75 - 12);
            if ( (int *)(v75 - 12) != &dword_28898C0 )
              v22 = (unsigned int *)(v75 - 4);
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v45);
          else
            v32 = (int *)CommandOutputMessage::getMessageId(v13);
            v33 = (unsigned __int64 *)CommandOutputMessage::getParams(v13);
            CommandOutputSender::translate((int)&v71, v33);
            I18n::get(&v72, v32, &v71);
            GuiData::displayDevConsoleMessage(v25, &v72);
            v34 = (void *)(v72 - 12);
            if ( (int *)(v72 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v72 - 4);
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v34);
            v35 = v71;
            if ( (_DWORD)v71 != HIDWORD(v71) )
                v38 = (int *)(*(_DWORD *)v35 - 12);
                if ( v38 != &dword_28898C0 )
                  v36 = (unsigned int *)(*(_DWORD *)v35 - 4);
                      v37 = __ldrex(v36);
                    while ( __strex(v37 - 1, v36) );
                    v37 = (*v36)--;
                  if ( v37 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v38);
                LODWORD(v35) = v35 + 4;
              while ( (_DWORD)v35 != HIDWORD(v35) );
              LODWORD(v35) = v71;
            if ( (_DWORD)v35 )
              operator delete((void *)v35);
          v13 = (CommandOutputMessage *)((char *)v13 + 20);
        while ( v13 != (CommandOutputMessage *)HIDWORD(v14) );
    case 9:
      for ( i = *(_QWORD *)CommandOutput::getMessages(v5); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 20 )
        CommandOutputMessage::getType((CommandOutputMessage *)i);
    default:
      return;
  }
}


void __fastcall ClientCommandOutputSender::send(ClientCommandOutputSender *this, const CommandOrigin *a2, const CommandOutput *a3)
{
  ClientCommandOutputSender::send(this, a2, a3);
}


int __fastcall ClientCommandOutputSender::ClientCommandOutputSender(CommandOutputSender *a1, Automation::AutomationClient *a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a3;
  result = CommandOutputSender::CommandOutputSender(a1, a2);
  *(_DWORD *)result = &off_26DFA4C;
  *(_DWORD *)(result + 8) = v3;
  return result;
}
