

_DWORD *__fastcall ClientBindingFactory::getAreaBinding(int a1, int a2, const void **a3)
{
  int v3; // r5@1
  const void **v4; // r6@1
  int v5; // r4@1
  int v6; // r6@26
  _DWORD *v7; // r0@26
  _DWORD *result; // r0@27
  int (__fastcall *v9)(void **, _DWORD **, int); // r1@27
  int (__fastcall *v10)(void **, _DWORD **, int); // r1@28
  int (__fastcall *v11)(int, int **); // r2@28

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( !sub_21E7D6C(a3, "binding.area.turn_interact") )
  {
    result = operator new(4u);
    v10 = sub_130D058;
    v11 = sub_130D042;
LABEL_53:
    *result = v3;
    *(_DWORD *)v5 = result;
    *(_DWORD *)(v5 + 8) = v10;
    *(_DWORD *)(v5 + 12) = v11;
    return result;
  }
  if ( !sub_21E7D6C(v4, "binding.area.dpad_no_turn_interact") )
    v10 = sub_130D0A4;
    v11 = sub_130D08E;
    goto LABEL_53;
  if ( !sub_21E7D6C(v4, "binding.area.disable_jump") )
    v10 = sub_130D0F0;
    v11 = sub_130D0DA;
  if ( !sub_21E7D6C(v4, "binding.area.disable_sneak") )
    v10 = sub_130D13C;
    v11 = sub_130D126;
  if ( !sub_21E7D6C(v4, "binding.area.gui_passthrough") )
    v10 = sub_130D188;
    v11 = sub_130D172;
  if ( !sub_21E7D6C(v4, "binding.area.changing_flight_height") )
    v10 = sub_130D1D6;
    v11 = sub_130D1BE;
  if ( !sub_21E7D6C(v4, "binding.area.move_left") )
    v10 = sub_130D224;
    v11 = sub_130D20C;
  if ( !sub_21E7D6C(v4, "binding.area.move_right") )
    v10 = sub_130D272;
    v11 = sub_130D25A;
  if ( !sub_21E7D6C(v4, "binding.area.move_up") )
    v10 = sub_130D2C0;
    v11 = sub_130D2A8;
  if ( !sub_21E7D6C(v4, "binding.area.move_up_invisible") )
    v10 = sub_130D30E;
    v11 = sub_130D2F6;
  if ( !sub_21E7D6C(v4, "binding.area.move_down") )
    v10 = sub_130D35C;
    v11 = sub_130D344;
  if ( !sub_21E7D6C(v4, "binding.area.ascend") )
    v10 = sub_130D3AA;
    v11 = sub_130D392;
  if ( !sub_21E7D6C(v4, "binding.area.descend") )
    v10 = sub_130D3F8;
    v11 = sub_130D3E0;
  if ( !sub_21E7D6C(v4, "binding.area.pause") )
    v10 = sub_130D446;
    v11 = sub_130D42E;
  if ( !sub_21E7D6C(v4, "binding.area.chat") )
    v10 = sub_130D494;
    v11 = sub_130D47C;
  if ( !sub_21E7D6C(v4, "binding.area.jump") )
    v10 = sub_130D4E2;
    v11 = sub_130D4CA;
  if ( !sub_21E7D6C(v4, "binding.area.move_up_left") )
    v10 = sub_130D530;
    v11 = sub_130D518;
  if ( !sub_21E7D6C(v4, "binding.area.move_up_right") )
    v10 = sub_130D57E;
    v11 = sub_130D566;
  if ( !sub_21E7D6C(v4, "binding.area.player_effects") )
    v10 = sub_130D5CC;
    v11 = sub_130D5B4;
  if ( !sub_21E7D6C(v4, "binding.area.paddle_right") )
    v10 = sub_130D61A;
    v11 = sub_130D602;
  if ( !sub_21E7D6C(v4, "binding.area.paddle_right_border") )
    v10 = sub_130D668;
    v11 = sub_130D650;
  if ( !sub_21E7D6C(v4, "binding.area.paddle_left") )
    v10 = sub_130D6B6;
    v11 = sub_130D69E;
  if ( !sub_21E7D6C(v4, "binding.area.paddle_left_border") )
    v10 = sub_130D704;
    v11 = sub_130D6EC;
  if ( !sub_21E7D6C(v4, "binding.area.sneak") )
    v10 = sub_130D752;
    v11 = sub_130D73A;
  if ( !sub_21E7D6C(v4, "binding.area.mobeffects") )
    v10 = sub_130D7A0;
    v11 = sub_130D788;
  v6 = sub_21E7D6C(v4, "binding.area.toast");
  *(_DWORD *)(v5 + 8) = 0;
  v7 = operator new(4u);
  *v7 = v3;
  *(_DWORD *)v5 = v7;
  if ( v6 )
    result = sub_130D824;
    v9 = sub_130D83A;
  else
    result = sub_130D7D6;
    v9 = sub_130D7EE;
  *(_DWORD *)(v5 + 8) = v9;
  *(_DWORD *)(v5 + 12) = result;
  return result;
}


_DWORD *__fastcall ClientBindingFactory::getStringBinding(int a1, int a2, const void **a3)
{
  int v3; // r5@1
  const void **v4; // r6@1
  int v5; // r4@1
  _DWORD *result; // r0@3
  int (__fastcall *v7)(void **, void **, int); // r1@3
  void **(__fastcall *v8)(void **); // r2@3
  int v9; // r5@4
  void **v10; // r1@4
  void **v11; // r2@4
  void **v12; // r3@4

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( !sub_21E7D6C(a3, "binding.string.interact_text") )
  {
    v9 = *(_DWORD *)(v3 + 4);
    result = operator new(0xCu);
    v10 = &std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<std::string (ClientInputHandler::*)(void)const> ()(ClientInputHandler const*)>>::_M_manager;
    v11 = &std::_Function_handler<std::string ()(void),std::_Bind<std::_Mem_fn<std::string (ClientInputHandler::*)(void)const> ()(ClientInputHandler const*)>>::_M_invoke;
    v12 = &ClientInputHandler::getInteractText;
LABEL_6:
    *result = *v12;
    result[1] = 0;
    v7 = (int (__fastcall *)(void **, void **, int))*v10;
    v8 = (void **(__fastcall *)(void **))*v11;
    result[2] = v9;
    goto LABEL_7;
  }
  if ( !sub_21E7D6C(v4, "binding.string.boat_exit_text") )
    v12 = &ClientInputHandler::getBoatExitText;
    goto LABEL_6;
  result = operator new(1u);
  v7 = sub_130CF84;
  v8 = sub_130CF6C;
LABEL_7:
  *(_DWORD *)v5 = result;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  return result;
}


int __fastcall ClientBindingFactory::ClientBindingFactory(int a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = a1;
  *(_DWORD *)a1 = &off_26E511C;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  RectangleArea::RectangleArea((RectangleArea *)(a1 + 12));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 28));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 44));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 60));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 76));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 92));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 108));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 124));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 140));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 156));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 172));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 188));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 204));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 220));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 236));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 252));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 268));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 284));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 300));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 316));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 332));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 348));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 364));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 380));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 396));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 412));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 428));
  RectangleArea::RectangleArea((RectangleArea *)(v3 + 444));
  *(_DWORD *)(v3 + 460) = 0;
  *(_DWORD *)(v3 + 464) = 0;
  *(_DWORD *)(v3 + 468) = 0;
  *(_DWORD *)(v3 + 472) = 0;
  return v3;
}


int __fastcall ClientBindingFactory::onConfigChanged(ClientBindingFactory *this, const Config *a2)
{
  Config *v2; // r4@1
  Config *v6; // r8@1
  char *v7; // r4@1
  int v8; // r0@1
  int v14; // r0@3
  Options *v16; // r0@3
  int v20; // ST28_4@5
  int v24; // ST00_4@5
  int v27; // ST00_4@5
  int v29; // ST00_4@5
  int v30; // ST00_4@5
  int v32; // ST18_4@5
  int v33; // ST00_4@5
  int v35; // ST10_4@5
  int v36; // ST00_4@5
  int v38; // ST00_4@5
  int v41; // ST00_4@5
  int v43; // ST00_4@5
  int v44; // ST00_4@5
  Options *v47; // r0@5
  char *v53; // r5@9
  char *v55; // r0@9
  const RectangleArea *v61; // r0@11
  Options *v62; // r0@11
  int v63; // r0@18
  Option *v64; // r0@18
  Options *v73; // r0@20
  Options *v79; // r0@22
  int v80; // r1@23
  int v81; // r2@23
  int v82; // r3@23
  Options *v88; // r0@26
  int v96; // ST00_4@28
  int v100; // ST00_4@28
  int v102; // [sp+0h] [bp-308h]@0
  int v103; // [sp+0h] [bp-308h]@5
  int v104; // [sp+0h] [bp-308h]@11
  int v105; // [sp+0h] [bp-308h]@18
  int v106; // [sp+0h] [bp-308h]@20
  int v107; // [sp+0h] [bp-308h]@22
  int v108; // [sp+0h] [bp-308h]@26
  int v109; // [sp+Ch] [bp-2FCh]@5
  Config *v110; // [sp+1Ch] [bp-2ECh]@1
  int v111; // [sp+20h] [bp-2E8h]@1
  PixelCalc *v112; // [sp+2Ch] [bp-2DCh]@1
  char v113; // [sp+30h] [bp-2D8h]@28
  char v114; // [sp+40h] [bp-2C8h]@28
  char v115; // [sp+50h] [bp-2B8h]@28
  char v116; // [sp+60h] [bp-2A8h]@28
  char v117; // [sp+70h] [bp-298h]@28
  char v118; // [sp+80h] [bp-288h]@26
  char v119; // [sp+90h] [bp-278h]@23
  char v120; // [sp+A0h] [bp-268h]@23
  char v121; // [sp+B0h] [bp-258h]@23
  char v122; // [sp+C0h] [bp-248h]@23
  char v123; // [sp+D0h] [bp-238h]@23
  char v124; // [sp+E0h] [bp-228h]@22
  char v125; // [sp+F0h] [bp-218h]@22
  char v126; // [sp+100h] [bp-208h]@22
  char v127; // [sp+110h] [bp-1F8h]@22
  char v128; // [sp+120h] [bp-1E8h]@22
  char v129; // [sp+130h] [bp-1D8h]@22
  char v130; // [sp+140h] [bp-1C8h]@22
  char v131; // [sp+150h] [bp-1B8h]@22
  char v132; // [sp+160h] [bp-1A8h]@20
  char v133; // [sp+170h] [bp-198h]@18
  char v134; // [sp+180h] [bp-188h]@11
  char v135; // [sp+190h] [bp-178h]@10
  char v136; // [sp+1A0h] [bp-168h]@9
  float v137; // [sp+1B0h] [bp-158h]@8
  char v140; // [sp+1C0h] [bp-148h]@5
  char v141; // [sp+1D0h] [bp-138h]@5
  char v142; // [sp+1E0h] [bp-128h]@5
  char v143; // [sp+1F0h] [bp-118h]@5
  char v144; // [sp+200h] [bp-108h]@5
  char v145; // [sp+210h] [bp-F8h]@5
  char v146; // [sp+220h] [bp-E8h]@5
  char v147; // [sp+230h] [bp-D8h]@5
  char v148; // [sp+240h] [bp-C8h]@5
  char v149; // [sp+250h] [bp-B8h]@5
  char v150; // [sp+260h] [bp-A8h]@5
  char v151; // [sp+270h] [bp-98h]@5
  char v152; // [sp+280h] [bp-88h]@5
  int v153; // [sp+290h] [bp-78h]@23
  int v154; // [sp+294h] [bp-74h]@23
  int v155; // [sp+298h] [bp-70h]@23
  int v156; // [sp+29Ch] [bp-6Ch]@23

  v2 = a2;
  _R9 = this;
  v110 = a2;
  _R5 = Config::getWidth(a2);
  _R6 = Config::getHeight(v2);
  v111 = Config::getGuiScale(v2);
  v6 = v2;
  v7 = Config::getDpadScale(v2);
  v112 = (PixelCalc *)v7;
  v8 = PixelCalc::millimetersToPixels((PixelCalc *)v7, 16.0);
  __asm
  {
    VMOV            S0, R5
    VMOV.F32        S20, #-8.0
  }
  _R7 = v8;
    VCVT.F32.S32    S16, S0
    VMOV            S0, R6
    VCVT.F32.S32    S18, S0
    VLDR            S0, =-80.0
    VMOV.F32        S24, S20
    VCMPE.F32       S18, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S24, S0 }
  v14 = PixelCalc::millimetersToPixels((PixelCalc *)v7, 20.0);
    VMOV.F32        S26, #3.0
    VMOV            S22, R7
  _R10 = v14;
    VADD.F32        S28, S16, S20
    VMOV.F32        S20, #8.0
    VADD.F32        S17, S24, S18
    VMUL.F32        S19, S22, S26
  v16 = (Options *)Config::getOptions(v6);
  __asm { VSUB.F32        S24, S28, S19 }
  Options::isLeftHanded(v16);
  __asm { VMOV.F32        S30, S20 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S30, S24 }
    VSUB.F32        S24, S17, S19
    VADD.F32        S0, S30, S19
    VMOV            R1, S30
    VSTR            S17, [SP,#0x308+var_308]
    VMOV            R5, S24
    VMOV            R3, S0
  v20 = _R1;
  RectangleArea::RectangleArea(COERCE_FLOAT(&v152), _R1, _R5, _R3, v102);
  RectangleArea::operator=((int)_R9 + 28, (int)&v152);
  _R0 = Config::getWidth(v6);
    VMOV            S0, R0
    VCVT.F32.S32    S28, S0
  _R0 = Config::getHeight(v6);
    VMOV            R3, S28
    VCVT.F32.S32    S0, S0
    VSTR            S0, [SP,#0x308+var_308]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v151), 0, 0, _R3, v24);
  RectangleArea::operator=((int)_R9 + 108, (int)&v151);
    VADD.F32        S28, S22, S22
    VADD.F32        S21, S30, S22
    VADD.F32        S19, S30, S28
    VMOV            R8, S21
    VMOV            R4, S19
  RectangleArea::RectangleArea(COERCE_FLOAT(&v150), _R8, _R5, _R4, v27);
  RectangleArea::operator=((int)_R9 + 124, (int)&v150);
    VMOV            S17, R10
    VADD.F32        S0, S21, S17
    VADD.F32        S23, S24, S17
    VMOV            R10, S0
    VSTR            S23, [SP,#0x308+var_308]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v149), _R8, _R5, _R10, v29);
  RectangleArea::operator=((int)_R9 + 188, (int)&v149);
    VADD.F32        S0, S23, S22
  RectangleArea::RectangleArea(COERCE_FLOAT(&v148), _R8, _R5, _R10, v30);
  RectangleArea::operator=((int)_R9 + 172, (int)&v148);
    VADD.F32        S0, S30, S17
  v32 = _R3;
  RectangleArea::RectangleArea(COERCE_FLOAT(&v147), v20, _R5, _R3, v33);
  RectangleArea::operator=((int)_R9 + 300, (int)&v147);
    VADD.F32        S0, S19, S17
  v35 = _R3;
  RectangleArea::RectangleArea(COERCE_FLOAT(&v146), _R4, _R5, _R3, v36);
  RectangleArea::operator=((int)_R9 + 316, (int)&v146);
    VADD.F32        S0, S24, S22
    VMOV            R7, S0
    VADD.F32        S30, S0, S17
    VSTR            S30, [SP,#0x308+var_308]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v144), _R8, _R7, _R10, v38);
    VLDR            S0, =0.1
    VMUL.F32        S0, S22, S0
    VMOV            R2, S0
  RectangleArea::grow((RectangleArea *)&v145, COERCE_FLOAT(&v144), _R2);
  v109 = (int)_R9 + 412;
  RectangleArea::operator=((int)_R9 + 412, (int)&v145);
    VADD.F32        S0, S24, S28
    VADD.F32        S2, S0, S17
    VSTR            S2, [SP,#0x308+var_308]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v143), _R8, _R2, _R10, v41);
  _R8 = (int)_R9 + 204;
  RectangleArea::operator=((int)_R9 + 204, (int)&v143);
  __asm { VSTR            S30, [SP,#0x308+var_308] }
  RectangleArea::RectangleArea(COERCE_FLOAT(&v142), v20, _R7, v32, v43);
  RectangleArea::operator=((int)_R9 + 140, (int)&v142);
  RectangleArea::RectangleArea(COERCE_FLOAT(&v141), _R4, _R7, v35, v44);
  RectangleArea::operator=((int)_R9 + 156, (int)&v141);
    VLDR            S0, =1.1
  RectangleArea::grow((RectangleArea *)&v140, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 412)), _R2);
  _R6 = (int)_R9 + 60;
  RectangleArea::operator=((int)_R9 + 60, (int)&v140);
  v47 = (Options *)Config::getOptions(v110);
  Options::isLeftHanded(v47);
  _R0 = Config::getWidth(v110);
  if ( _ZF )
    _R0 = Config::getWidth(v110);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R8]
      VSUB.F32        S22, S0, S2
    }
  else
    __asm { VLDR            S22, [R9,#0xD0] }
  _R5 = Config::getWidth(v110);
  RectangleArea::RectangleArea((RectangleArea *)&v137);
    VMOV.F32        S24, #-2.0
    VMUL.F32        S0, S22, S24
    VMOV.F32        S22, #0.5
    VADD.F32        S28, S28, S0
    VCVT.F32.S32    S30, S0
    VMUL.F32        S0, S28, S22
    VCMPE.F32       S0, #0.0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VMUL.F32        S28, S30, S22 }
    _R0 = Config::getHeight(v110);
      VMOV            S2, R0
      VMOV.F32        S0, #-23.0
      VCVT.F32.S32    S2, S2
      VADD.F32        S30, S2, S0
    __asm { VMOV            R1, S28 }
    v53 = &v135;
      VMOV            R2, S30
      VMOV.F32        S0, #-3.0
    v55 = &v135;
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0x308+var_308]
    _R3 = _R1;
    __asm { VADD.F32        S17, S30, S28 }
      VMOV            S4, R0
      VSUB.F32        S0, S30, S28
      VMOV.F32        S2, #-23.0
      VCVT.F32.S32    S4, S4
      VMUL.F32        S30, S17, S22
      VMUL.F32        S28, S0, S22
      VADD.F32        S17, S4, S2
    __asm { VMOV            S2, R0 }
    v53 = &v136;
      VMOV            R1, S28
    v55 = &v136;
      VMOV            R3, S30
      VMOV            R2, S17
  RectangleArea::RectangleArea(*(float *)&v55, _R1, _R2, _R3, v103);
  RectangleArea::operator=((int)&v137, (int)v53);
  _R0 = v111;
  __asm { VMOV            S28, R0 }
  v61 = (const RectangleArea *)ClientInstance::getGuiData(*((ClientInstance **)_R9 + 2));
  GuiData::setTouchToolbarArea((GuiData *)&v134, v61, (RectangleArea *)&v137);
  RectangleArea::operator=((int)&v137, (int)&v134);
  v62 = (Options *)Config::getOptions(v110);
  if ( Options::isLeftHanded(v62) == 1 )
      VLDR            S0, [SP,#0x308+var_154]
      VLDR            S2, [R6]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
    __asm { VSTR            S2, [R6] }
      VLDR            S0, [SP,#0x308+var_158]
      VLDR            S2, [R9,#0x40]
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
    __asm { VSTR            S2, [R9,#0x40] }
  v63 = Config::getOptions(v110);
  v64 = (Option *)Options::get(v63, 40);
  _R0 = Option::getFloat(v64);
    VMOV.F32        S27, #-4.0
    VLDR            S19, [SP,#0x308+var_150]
    VMOV.F32        S0, #1.0
    VMOV            S2, R0
    VMOV.F32        S30, #-0.5
    VMUL.F32        S17, S28, S27
    VSUB.F32        S21, S0, S2
  _R5 = Config::getHeight(v110);
    VMOV            S4, R5
    VCVT.F32.S32    S4, S4
    VADD.F32        S2, S17, S26
    VMUL.F32        S6, S21, S30
    VADD.F32        S0, S2, S19
    VMUL.F32        S2, S6, S4
    VADD.F32        S0, S0, S2
  RectangleArea::RectangleArea(COERCE_FLOAT(&v133), 0, 0, _R3, v104);
  RectangleArea::operator=((int)_R9 + 44, (int)&v133);
  _R0 = PixelCalc::millimetersToPixels(v112, 10.0);
    VMOV.F32        S0, #18.0
    VMOV.F32        S17, #4.0
    VMUL.F32        S26, S28, S0
    VCMPE.F32       S0, S26
    VMOV.F32        S2, S26
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S0 }
    VADD.F32        S23, S2, S17
    VSUB.F32        S0, S16, S23
    VMUL.F32        S25, S0, S22
    VADD.F32        S0, S25, S2
    VMOV            R1, S25
  RectangleArea::RectangleArea(COERCE_FLOAT(&v132), _R1, 1082130432, _R3, v105);
  RectangleArea::operator=((int)_R9 + 252, (int)&v132);
  _R0 = PixelCalc::millimetersToPixels(v112, 20.0);
    VMOV            S19, R0
    VMOV.F32        S0, #20.0
    VMUL.F32        S21, S19, S22
    VSUB.F32        S2, S16, S19
    VADD.F32        S0, S18, S0
    VADD.F32        S27, S21, S27
    VSUB.F32        S31, S0, S19
    VSUB.F32        S29, S2, S27
  v73 = (Options *)Config::getOptions(v110);
  Options::isLeftHanded(v73);
  __asm { VSUB.F32        S0, S31, S19 }
    __asm { VMOVNE.F32      S29, S27 }
    VADD.F32        S2, S29, S19
    VMOV            R1, S29
    VSTR            S31, [SP,#0x308+var_308]
    VMOV            R3, S2
  RectangleArea::RectangleArea(COERCE_FLOAT(&v130), _R1, _R2, _R3, v106);
  RectangleArea::scale((RectangleArea *)&v131, COERCE_FLOAT(&v130), 1066192077);
  RectangleArea::operator=((int)_R9 + 284, (int)&v131);
  RectangleArea::operator=((int)_R9 + 124, (int)_R9 + 284);
  RectangleArea::scale((RectangleArea *)&v129, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 284)), 0x40000000);
  RectangleArea::operator=((int)_R9 + 76, (int)&v129);
  RectangleArea::RectangleArea((RectangleArea *)&v128);
  RectangleArea::operator=((int)_R9 + 92, (int)&v128);
    VLDR            S0, =-0.85
    VMUL.F32        S0, S19, S0
  RectangleArea::translate((RectangleArea *)&v126, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 284)), 0.0, _R3);
  RectangleArea::scale((RectangleArea *)&v127, COERCE_FLOAT(&v126), 1061997773);
  RectangleArea::operator=((int)_R9 + 220, (int)&v127);
    VLDR            S0, =0.85
  RectangleArea::translate((RectangleArea *)&v124, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 284)), 0.0, _R3);
  RectangleArea::scale((RectangleArea *)&v125, COERCE_FLOAT(&v124), 1061997773);
  RectangleArea::operator=((int)_R9 + 236, (int)&v125);
    VMUL.F32        S27, S16, S22
    VSUB.F32        S23, S25, S23
  v79 = (Options *)Config::getOptions(v110);
  if ( Options::getSwapJumpAndSneak(v79) == 1 )
    v80 = *((_DWORD *)_R9 + 72);
    v81 = *((_DWORD *)_R9 + 73);
    v82 = *((_DWORD *)_R9 + 74);
    v153 = *((_DWORD *)_R9 + 71);
    v154 = v80;
    v155 = v81;
    v156 = v82;
    RectangleArea::operator=((int)_R9 + 284, v109);
    RectangleArea::operator=(v109, (int)&v153);
    RectangleArea::scale((RectangleArea *)&v123, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 284)), 1063675494);
    RectangleArea::operator=((int)_R9 + 284, (int)&v123);
    __asm { VMOV            R5, S21 }
    RectangleArea::translate((RectangleArea *)&v122, *(float *)&v109, 0.0, _R5);
    RectangleArea::operator=(v109, (int)&v122);
    RectangleArea::translate(
      (RectangleArea *)&v121,
      COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 220)),
      0.0,
      _R5);
    RectangleArea::operator=((int)_R9 + 220, (int)&v121);
      VMUL.F32        S0, S19, S30
      VMOV            R3, S0
      (RectangleArea *)&v120,
      COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 236)),
      _R3);
    RectangleArea::operator=((int)_R9 + 236, (int)&v120);
    RectangleArea::operator=((int)_R9 + 92, (int)_R9 + 76);
    RectangleArea::RectangleArea((RectangleArea *)&v119);
    RectangleArea::operator=((int)_R9 + 76, (int)&v119);
    VMOV            R1, S23
    __asm { VMOVLT.F32      S26, S0 }
    VADD.F32        S0, S26, S23
    VADD.F32        S0, S26, S17
  RectangleArea::RectangleArea(COERCE_FLOAT(&v118), _R1, 1082130432, _R3, v107);
  RectangleArea::operator=((int)_R9 + 268, (int)&v118);
    VLDR            S0, =-34.0
    VMOV.F32        S2, #-17.0
    VSTR            S27, [R9,#0x1CC]
    VMUL.F32        S0, S28, S0
    VMOV.F32        S30, #2.0
    VMUL.F32        S2, S28, S2
    VADD.F32        S2, S0, S2
    VSTR            S0, [R9,#0x1D0]
    VSTR            S27, [R9,#0x1D4]
    VSTR            S2, [R9,#0x1D8]
    VLDR            S0, [R9,#0xFC]
    VLDR            S2, [R9,#0x104]
    VLDR            S26, [R9,#0x108]
    VADD.F32        S28, S0, S24
    VSUB.F32        S17, S26, S2
  v88 = (Options *)Config::getOptions(v110);
  Options::isLeftHanded(v88);
    VADD.F32        S0, S17, S30
    __asm { VMOVNE.F32      S28, S20 }
    VMOV.F32        S6, #5.0
    VMOV            R1, S28
    VADD.F32        S4, S2, S24
    VADD.F32        S0, S0, S28
    VMOV            R2, S4
    VMUL.F32        S0, S17, S6
    VADD.F32        S0, S2, S0
  RectangleArea::RectangleArea(COERCE_FLOAT(&v117), _R1, _R2, _R3, v108);
  RectangleArea::operator=((int)_R9 + 332, (int)&v117);
  _R0 = PixelCalc::millimetersToPixels(v112, 32.0);
    VMOV            S20, R0
    VLDR            S4, =-40.0
    VMUL.F32        S0, S16, S0
    VMUL.F32        S22, S20, S22
    VSUB.F32        S2, S18, S20
    VSUB.F32        S0, S0, S22
    VADD.F32        S2, S2, S4
    VADD.F32        S4, S0, S20
    VMOV            R5, S2
    VMOV            R1, S0
    VADD.F32        S18, S2, S20
    VMOV            R3, S4
    VSTR            S18, [SP,#0x308+var_308]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v116), _R1, _R5, _R3, v96);
  RectangleArea::operator=((int)_R9 + 380, (int)&v116);
  __asm { VMOV            R6, S22 }
  RectangleArea::grow((RectangleArea *)&v115, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 380)), _R6);
  RectangleArea::operator=((int)_R9 + 396, (int)&v115);
    VLDR            S0, =0.9
    VADD.F32        S2, S0, S20
  RectangleArea::RectangleArea(COERCE_FLOAT(&v114), _R1, _R5, _R3, v100);
  RectangleArea::operator=((int)_R9 + 348, (int)&v114);
  RectangleArea::grow((RectangleArea *)&v113, COERCE_FLOAT((ClientBindingFactory *)((char *)_R9 + 348)), _R6);
  return RectangleArea::operator=((int)_R9 + 364, (int)&v113);
}


int __fastcall ClientBindingFactory::onMobEffectsChanged(ClientBindingFactory *this, const MobEffectsLayout *a2)
{
  char *v2; // r4@1
  char *v3; // r1@1

  v2 = (char *)this + 428;
  v3 = MobEffectsLayout::getTouchArea(a2);
  return j_j_j__ZN13RectangleAreaaSERKS_((int)v2, (int)v3);
}


_DWORD *__fastcall ClientBindingFactory::getPointBinding(int a1, int a2, const void **a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *result; // r0@2
  void *v6; // r1@2
  void *v7; // r2@2

  v3 = a2;
  v4 = a1;
  if ( sub_21E7D6C(a3, "binding.point.interact") )
  {
    result = operator new(1u);
    v6 = sub_130D014;
    v7 = sub_130D00C;
  }
  else
    result = operator new(4u);
    v6 = sub_130CFD6;
    *result = v3;
    v7 = sub_130CFB2;
  *(_DWORD *)v4 = result;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  return result;
}


_DWORD *__fastcall ClientBindingFactory::getBooleanBinding(int a1, int a2, const void **a3)
{
  int v3; // r5@1
  const void **v4; // r6@1
  int v5; // r4@1
  _DWORD *result; // r0@11
  void *v7; // r1@11
  void *v8; // r2@11
  int v9; // r5@13
  void **v10; // r1@13
  void **v11; // r2@13
  void **v12; // r3@13

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( !sub_21E7D6C(a3, "binding.bool.true") )
  {
    result = operator new(1u);
    v7 = sub_130CCF8;
    v8 = sub_130CCF4;
    goto LABEL_18;
  }
  if ( !sub_21E7D6C(v4, "binding.bool.can_interact") )
    v9 = *(_DWORD *)(v3 + 4);
    result = operator new(0xCu);
    v10 = &std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (ClientInputHandler::*)(void)const> ()(ClientInputHandler const*)>>::_M_manager;
    v11 = &std::_Function_handler<bool ()(void),std::_Bind<std::_Mem_fn<bool (ClientInputHandler::*)(void)const> ()(ClientInputHandler const*)>>::_M_invoke;
    v12 = &ClientInputHandler::canInteract;
LABEL_17:
    *result = *v12;
    result[1] = 0;
    v7 = *v10;
    v8 = *v11;
    result[2] = v9;
  if ( !sub_21E7D6C(v4, "binding.bool.can_paddle") )
    v12 = &ClientInputHandler::canPaddle;
    goto LABEL_17;
  if ( !sub_21E7D6C(v4, "binding.bool.is_moving_forward") )
    v12 = &ClientInputHandler::isMovingForward;
  if ( !sub_21E7D6C(v4, "binding.bool.show_boat_exit") )
    v12 = &ClientInputHandler::showBoatExit;
  if ( sub_21E7D6C(v4, "binding.bool.sneaking") )
    if ( sub_21E7D6C(v4, "binding.bool.not_sneaking") )
    {
      if ( sub_21E7D6C(v4, "binding.bool.show_jump_button") )
      {
        if ( sub_21E7D6C(v4, "binding.bool.mobeffects") )
        {
          if ( sub_21E7D6C(v4, "binding.bool.toast") )
          {
            result = operator new(1u);
            v7 = sub_130CEE4;
            v8 = sub_130CEE0;
          }
          else
            result = operator new(4u);
            v7 = sub_130CEAA;
            *result = v3;
            v8 = sub_130CEA0;
        }
        else
          result = operator new(4u);
          v7 = sub_130CE6A;
          *result = v3;
          v8 = sub_130CE60;
      }
      else
        result = operator new(4u);
        v7 = sub_130CE2A;
        *result = v3;
        v8 = sub_130CE20;
    }
    else
      result = operator new(4u);
      v7 = sub_130CDEA;
      *result = v3;
      v8 = sub_130CDCE;
  else
    result = operator new(4u);
    v7 = sub_130CD98;
    *result = v3;
    v8 = sub_130CD7C;
LABEL_18:
  *(_DWORD *)v5 = result;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  return result;
}
