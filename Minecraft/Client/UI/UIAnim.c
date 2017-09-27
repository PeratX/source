

int __fastcall UIAnim::UIAnim(int a1, char a2, int a3, int a4, unsigned __int64 *a5)
{
  int v5; // r4@1
  int v6; // r6@1
  __int64 *v7; // r11@1
  int *v8; // r9@1
  void *v14; // r0@1
  void *v15; // r0@2
  void *v16; // r0@3
  void *v17; // r0@4
  void *v18; // r0@5
  void *v19; // r0@6
  void *v20; // r0@7
  void *v21; // r0@8
  void *v22; // r0@9
  void *v23; // r0@12
  void *v24; // r0@13
  void *v25; // r0@16
  void *v26; // r0@17
  signed int v27; // r3@20
  int v28; // r0@54
  int v29; // r1@54
  unsigned int *v30; // r2@61
  signed int v31; // r1@63
  unsigned int *v32; // r2@65
  signed int v33; // r1@67
  unsigned int *v34; // r2@69
  signed int v35; // r1@71
  unsigned int *v36; // r2@73
  signed int v37; // r1@75
  unsigned int *v38; // r2@77
  signed int v39; // r1@79
  unsigned int *v40; // r2@81
  signed int v41; // r1@83
  unsigned int *v42; // r2@85
  signed int v43; // r1@87
  unsigned int *v44; // r2@89
  signed int v45; // r1@91
  unsigned int *v46; // r2@93
  signed int v47; // r1@95
  unsigned int *v48; // r2@97
  signed int v49; // r1@99
  unsigned int *v50; // r2@101
  signed int v51; // r1@103
  unsigned int *v52; // r2@105
  signed int v53; // r1@107
  unsigned int *v54; // r2@109
  signed int v55; // r1@111
  void (*v56)(void); // r2@193
  __int64 v57; // kr00_8@193
  int v58; // r6@193
  void (*v59)(void); // r3@193
  void *v60; // r0@196
  void *v61; // r0@197
  void *v62; // r0@198
  void *v63; // r0@199
  void *v64; // r0@200
  void *v65; // r0@201
  unsigned int *v67; // r2@203
  signed int v68; // r1@205
  unsigned int *v69; // r2@207
  signed int v70; // r1@209
  unsigned int *v71; // r2@211
  signed int v72; // r1@213
  unsigned int *v73; // r2@215
  signed int v74; // r1@217
  unsigned int *v75; // r2@219
  signed int v76; // r1@221
  unsigned int *v77; // r2@223
  signed int v78; // r1@225
  int v79; // [sp+8h] [bp-D0h]@22
  int v80; // [sp+10h] [bp-C8h]@22
  int v81; // [sp+14h] [bp-C4h]@22
  __int64 v82; // [sp+18h] [bp-C0h]@193
  void (*v83)(void); // [sp+20h] [bp-B8h]@193
  int v84; // [sp+24h] [bp-B4h]@193
  int v85; // [sp+30h] [bp-A8h]@16
  int v86; // [sp+38h] [bp-A0h]@16
  int v87; // [sp+3Ch] [bp-9Ch]@16
  int v88; // [sp+44h] [bp-94h]@12
  int v89; // [sp+4Ch] [bp-8Ch]@12
  int v90; // [sp+50h] [bp-88h]@12
  int v91; // [sp+58h] [bp-80h]@8
  int v92; // [sp+60h] [bp-78h]@8
  int v93; // [sp+64h] [bp-74h]@8
  int v94; // [sp+6Ch] [bp-6Ch]@5
  int v95; // [sp+74h] [bp-64h]@5
  int v96; // [sp+78h] [bp-60h]@5
  int v97; // [sp+80h] [bp-58h]@2
  int v98; // [sp+88h] [bp-50h]@2
  int v99; // [sp+8Ch] [bp-4Ch]@2
  int v100; // [sp+94h] [bp-44h]@1
  int v101; // [sp+A0h] [bp-38h]@193
  int v102; // [sp+A4h] [bp-34h]@193
  void (*v103)(void); // [sp+A8h] [bp-30h]@193
  int v104; // [sp+ACh] [bp-2Ch]@193

  v5 = a1;
  v6 = a4;
  v7 = (__int64 *)(a1 + 12);
  v8 = (int *)(a1 + 44);
  *(_DWORD *)a1 = &off_26DFBE4;
  *(_BYTE *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 32) = -1;
  *(_WORD *)(a1 + 34) = -1;
  *(_WORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 40) = 1065353216;
  sub_119C884((void **)(a1 + 44), (const char *)&unk_257BC67);
  sub_119C884((void **)(v5 + 48), (const char *)&unk_257BC67);
  sub_119C884((void **)&v100, "duration");
  _R0 = UIResolvedDef::getAsFloat(v6, (int **)&v100, 1065353216);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R4,#0x28]
  }
  v14 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v100 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v98, "next");
  sub_119C884((void **)&v97, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v99, v6, (int **)&v98, &v97);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v8, &v99);
  v15 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v99 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v97 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v98 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v95, "destroy_at_end");
  sub_119C884((void **)&v94, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v96, v6, (int **)&v95, &v94);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v5 + 48),
    &v96);
  v18 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v96 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v94 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v95 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v92, "end_event");
  sub_119C884((void **)&v91, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v93, v6, (int **)&v92, &v91);
  v21 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v91 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v92 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  if ( *(_DWORD *)(v93 - 12) )
    NameRegistry::registerName(a5, (int **)&v93);
    *(_WORD *)(v5 + 32) = NameRegistry::getNameId(a5, (int **)&v93);
  sub_119C884((void **)&v89, "play_event");
  sub_119C884((void **)&v88, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v90, v6, (int **)&v89, &v88);
  v23 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v88 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v89 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  if ( *(_DWORD *)(v90 - 12) )
    NameRegistry::registerName(a5, (int **)&v90);
    *(_WORD *)(v5 + 34) = NameRegistry::getNameId(a5, (int **)&v90);
  sub_119C884((void **)&v86, "reset_event");
  sub_119C884((void **)&v85, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v87, v6, (int **)&v86, &v85);
  v25 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v85 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v86 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  if ( *(_DWORD *)(v87 - 12) )
    NameRegistry::registerName(a5, (int **)&v87);
    *(_WORD *)(v5 + 36) = NameRegistry::getNameId(a5, (int **)&v87);
  v27 = 0;
  if ( *(_WORD *)(v5 + 34) != 0xFFFF )
    v27 = 1;
  *(_DWORD *)(v5 + 28) = v27;
  sub_119C884((void **)&v80, "easing");
  sub_119C884((void **)&v79, (const char *)&unk_257BC67);
  UIResolvedDef::getAsString(&v81, v6, (int **)&v80, &v79);
  if ( *(_DWORD *)(v81 - 12) )
    if ( sub_119C9E8((const void **)&v81, "linear") )
      if ( sub_119C9E8((const void **)&v81, "spring") )
      {
        if ( sub_119C9E8((const void **)&v81, "in_quad") )
        {
          if ( sub_119C9E8((const void **)&v81, "out_quad") )
          {
            if ( sub_119C9E8((const void **)&v81, "in_out_quad") )
            {
              if ( sub_119C9E8((const void **)&v81, "in_cubic") )
              {
                if ( sub_119C9E8((const void **)&v81, "out_cubic") )
                {
                  if ( sub_119C9E8((const void **)&v81, "in_out_cubic") )
                  {
                    if ( sub_119C9E8((const void **)&v81, "in_quart") )
                    {
                      if ( sub_119C9E8((const void **)&v81, "out_quart") )
                      {
                        if ( sub_119C9E8((const void **)&v81, "in_out_quart") )
                        {
                          if ( sub_119C9E8((const void **)&v81, "in_quint") )
                          {
                            if ( sub_119C9E8((const void **)&v81, "out_quint") )
                            {
                              if ( sub_119C9E8((const void **)&v81, "in_out_quint") )
                              {
                                if ( sub_119C9E8((const void **)&v81, "in_sine") )
                                {
                                  if ( sub_119C9E8((const void **)&v81, "out_sine") )
                                  {
                                    if ( sub_119C9E8((const void **)&v81, "in_out_sine") )
                                    {
                                      if ( sub_119C9E8((const void **)&v81, "in_expo") )
                                      {
                                        if ( sub_119C9E8((const void **)&v81, "out_expo") )
                                        {
                                          if ( sub_119C9E8((const void **)&v81, "in_out_expo") )
                                          {
                                            if ( sub_119C9E8((const void **)&v81, "in_circ") )
                                            {
                                              if ( sub_119C9E8((const void **)&v81, "out_circ") )
                                              {
                                                if ( sub_119C9E8((const void **)&v81, "in_out_circ") )
                                                {
                                                  if ( sub_119C9E8((const void **)&v81, "in_bounce") )
                                                  {
                                                    if ( sub_119C9E8((const void **)&v81, "out_bounce") )
                                                    {
                                                      if ( sub_119C9E8((const void **)&v81, "in_out_bounce") )
                                                      {
                                                        if ( sub_119C9E8((const void **)&v81, "in_back") )
                                                        {
                                                          if ( sub_119C9E8((const void **)&v81, "out_back") )
                                                          {
                                                            if ( sub_119C9E8((const void **)&v81, "in_out_back") )
                                                            {
                                                              if ( sub_119C9E8((const void **)&v81, "in_elastic") )
                                                              {
                                                                if ( sub_119C9E8((const void **)&v81, "out_elastic") )
                                                                {
                                                                  v28 = sub_119C9E8(
                                                                          (const void **)&v81,
                                                                          "in_out_elastic");
                                                                  v29 = 0;
                                                                  if ( !v28 )
                                                                    v29 = 31;
                                                                }
                                                                else
                                                                  v29 = 30;
                                                              }
                                                              else
                                                                v29 = 29;
                                                            }
                                                            else
                                                              v29 = 28;
                                                          }
                                                          else
                                                            v29 = 27;
                                                        }
                                                        else
                                                          v29 = 26;
                                                      }
                                                      else
                                                        v29 = 25;
                                                    }
                                                    else
                                                      v29 = 24;
                                                  }
                                                  else
                                                    v29 = 23;
                                                }
                                                else
                                                  v29 = 22;
                                              }
                                              else
                                                v29 = 21;
                                            }
                                            else
                                              v29 = 20;
                                          }
                                          else
                                            v29 = 19;
                                        }
                                        else
                                          v29 = 18;
                                      }
                                      else
                                        v29 = 17;
                                    }
                                    else
                                      v29 = 16;
                                  }
                                  else
                                    v29 = 15;
                                }
                                else
                                  v29 = 14;
                              }
                              else
                                v29 = 13;
                            }
                            else
                              v29 = 12;
                          }
                          else
                            v29 = 11;
                        }
                        else
                          v29 = 10;
                      }
                      else
                        v29 = 9;
                    }
                    else
                      v29 = 8;
                  }
                  else
                    v29 = 7;
                }
                else
                  v29 = 6;
              }
              else
                v29 = 5;
            }
            else
              v29 = 4;
          }
          else
            v29 = 3;
        }
        else
          v29 = 2;
      }
      else
        v29 = 1;
      v29 = 0;
  else
    v29 = 0;
  Easing::getEasingFunc((int)&v82, v29);
  v56 = v83;
  v83 = 0;
  v57 = *v7;
  v58 = v84;
  v101 = *v7;
  v102 = HIDWORD(v57);
  *v7 = v82;
  v103 = *(void (**)(void))(v5 + 20);
  v59 = v103;
  *(_DWORD *)(v5 + 20) = v56;
  v104 = *(_DWORD *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v58;
  if ( v59 )
    v59();
    if ( v83 )
      v83();
  v60 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v81 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v79 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  v62 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v80 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  v63 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v87 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  v64 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v90 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  v65 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v93 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v65);
  return v5;
}


char *__fastcall UIAnim::getNextAnimName(UIAnim *this)
{
  return (char *)this + 44;
}


int __fastcall UIAnim::handleScreenEvent(int result, UIControl *a2, const ScreenEvent *a3)
{
  int v3; // r2@2

  if ( *(_DWORD *)a3 == 1 )
  {
    v3 = *((_WORD *)a3 + 2);
    if ( v3 == *(_WORD *)(result + 34) )
    {
      result = (*(int (**)(void))(*(_DWORD *)result + 24))();
    }
    else if ( v3 == *(_WORD *)(result + 36) )
      result = (*(int (**)(void))(*(_DWORD *)result + 28))();
  }
  return result;
}


char *__fastcall UIAnim::getControlNameToDestroy(UIAnim *this)
{
  return (char *)this + 48;
}


signed int __fastcall UIAnim::tick(UIAnim *this, UIControl *a2, float _R2)
{
  signed int result; // r0@1

  __asm
  {
    VMOV            S0, R2
    VLDR            S2, [R0,#8]
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
    VSTR            S0, [R0,#8]
    VLDR            S4, [R0,#0x28]
  }
  result = 0;
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S4 }
    VMOV.F32        S4, #1.0
    VDIV.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VLDR            S2, =0.0
    VCMPE.F32       S0, S4
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    VCMPE.F32       S2, S4
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


const char *__fastcall UIAnim::getInitialValueKey(UIAnim *this)
{
  return "from";
}


_BOOL4 __fastcall UIAnim::shouldDestroyAtEnd(UIAnim *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 12) - 12) != 0;
}


int __fastcall UIAnim::_reset(int result, UIControl *a2)
{
  signed int v2; // r1@1

  v2 = 0;
  if ( *(_WORD *)(result + 34) != 0xFFFF )
    v2 = 1;
  *(_DWORD *)(result + 28) = v2;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


UIAnim *__fastcall UIAnim::~UIAnim(UIAnim *this)
{
  UIAnim *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DFBE4;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v6 )
    v6();
  return v1;
}


signed int __fastcall UIAnim::isEventListener(UIAnim *this)
{
  signed int result; // r0@2
  int v2; // r2@3

  if ( *((_WORD *)this + 17) == 0xFFFF )
  {
    v2 = *((_WORD *)this + 18);
    result = 0;
    if ( v2 != 0xFFFF )
      result = 1;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall UIAnim::shouldTick(UIAnim *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 7);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall UIAnim::~UIAnim(UIAnim *this)
{
  UIAnim *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DFBE4;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v6 )
    v6();
  operator delete((void *)v1);
}


signed int __fastcall UIAnim::updateProperties(UIAnim *this, AnimationComponent *a2)
{
  UIControl *v3; // r0@1
  int v4; // r6@1
  signed int result; // r0@1
  Json::Value *v6; // r6@2
  const char *v7; // r5@2
  Json::Value *v12; // r0@4
  Json::Value *v13; // r5@4
  int v14; // [sp+0h] [bp-20h]@2
  const char *v15; // [sp+4h] [bp-1Ch]@2

  _R4 = this;
  v3 = (UIControl *)UIComponent::getOwner(a2);
  v4 = UIControl::getPropertyBag(v3);
  result = *((_BYTE *)_R4 + 4);
  if ( result == 7 )
  {
    gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v14, (int)"wait_duration_scaler");
    v6 = (Json::Value *)(v4 + 8);
    v7 = v15;
    result = Json::Value::isNull(v6);
    __asm { VMOV.F32        S16, #1.0 }
    if ( !result )
    {
      result = Json::Value::isObject(v6);
      if ( result == 1 )
      {
        v12 = (Json::Value *)Json::Value::operator[]((int)v6, v7);
        v13 = v12;
        result = Json::Value::isNumeric(v12);
        if ( result == 1 )
        {
          result = Json::Value::asFloat(v13, 0.0);
          __asm { VMOV            S16, R0 }
        }
      }
    }
    __asm
      VLDR            S0, [R4,#0x28]
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R4,#0x28]
  }
  return result;
}


int __fastcall UIAnim::UIAnim(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  void (__fastcall *v4)(int, int, signed int); // r3@1
  int v5; // r1@3
  int v6; // r2@3
  int v7; // r3@3
  int v8; // r12@3

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26DFBE4;
  *(_QWORD *)(a1 + 4) = *(_QWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 20) = 0;
  v4 = *(void (__fastcall **)(int, int, signed int))(a2 + 20);
  if ( v4 )
  {
    v4(a1 + 12, a2 + 12, 2);
    *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 20);
  }
  v5 = *(_DWORD *)(v3 + 32);
  v6 = *(_DWORD *)(v3 + 36);
  v7 = *(_DWORD *)(v3 + 40);
  v8 = v2 + 28;
  *(_DWORD *)v8 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v8 + 4) = v5;
  *(_DWORD *)(v8 + 8) = v6;
  *(_DWORD *)(v8 + 12) = v7;
  sub_119C854((int *)(v2 + 44), (int *)(v3 + 44));
  sub_119C854((int *)(v2 + 48), (int *)(v3 + 48));
  return v2;
}


int __fastcall UIAnim::getAnimEventFor(ScreenEvent *a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@3

  v3 = a2;
  if ( a3 || *(_WORD *)(a2 + 32) == 0xFFFF )
  {
    result = ScreenEvent::ScreenEvent(a1);
  }
  else
    *(_DWORD *)result = 17;
    *(_WORD *)(result + 4) = *(_WORD *)(v3 + 32);
  return result;
}


int __fastcall UIAnim::clone(UIAnim *this, int a2)
{
  UIAnim *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x34u);
  result = UIAnim::UIAnim((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall UIAnim::~UIAnim(UIAnim *this)
{
  UIAnim::~UIAnim(this);
}


int __fastcall UIAnim::_play(int result)
{
  *(_DWORD *)(result + 28) = 0;
  return result;
}
