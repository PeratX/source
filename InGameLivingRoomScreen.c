

char *__fastcall InGameLivingRoomScreen::_updateInGameCursor(InGameLivingRoomScreen *this)
{
  InGameLivingRoomScreen *v1; // r4@1
  char *result; // r0@1
  Options *v3; // r0@3
  Entity *v4; // r0@4
  Level *v5; // r0@4
  char *v6; // r0@4
  Player *v7; // r0@4
  Player *v8; // r0@5
  int v9; // r0@7
  int v10; // r7@7
  __int64 v11; // r0@7
  int v12; // r0@8
  int v13; // r2@8
  int v14; // r3@8
  int v15; // r4@8
  int v16; // r6@8
  int v17; // r2@8
  int v18; // r3@8
  int v19; // r4@8
  int v20; // r6@8
  int v21; // r2@8
  int v22; // r3@8
  signed int v23; // r4@8
  signed int v24; // r6@8
  __int16 v25; // r1@8
  int v26; // [sp+0h] [bp-E0h]@4
  char v27; // [sp+4h] [bp-DCh]@4
  int v28; // [sp+8h] [bp-D8h]@4
  int v29; // [sp+Ch] [bp-D4h]@4
  int v30; // [sp+10h] [bp-D0h]@4
  int v31; // [sp+14h] [bp-CCh]@4
  int v32; // [sp+18h] [bp-C8h]@4
  int v33; // [sp+1Ch] [bp-C4h]@4
  int v34; // [sp+20h] [bp-C0h]@4
  __int16 v35; // [sp+24h] [bp-BCh]@4
  int v36; // [sp+28h] [bp-B8h]@4
  int v37; // [sp+2Ch] [bp-B4h]@4
  int v38; // [sp+30h] [bp-B0h]@4
  int v39; // [sp+34h] [bp-ACh]@4
  int v40; // [sp+38h] [bp-A8h]@4
  int v41; // [sp+3Ch] [bp-A4h]@4
  char v42; // [sp+40h] [bp-A0h]@4
  int v43; // [sp+44h] [bp-9Ch]@4
  int v44; // [sp+48h] [bp-98h]@4
  int v45; // [sp+4Ch] [bp-94h]@4
  int v46; // [sp+50h] [bp-90h]@4
  int v47; // [sp+54h] [bp-8Ch]@4
  int v48; // [sp+58h] [bp-88h]@4
  int v49; // [sp+5Ch] [bp-84h]@4
  int v50; // [sp+60h] [bp-80h]@4
  int v51; // [sp+64h] [bp-7Ch]@4
  int v52; // [sp+68h] [bp-78h]@4
  int v53; // [sp+6Ch] [bp-74h]@8
  int v54; // [sp+70h] [bp-70h]@8
  int v55; // [sp+74h] [bp-6Ch]@8
  signed int v56; // [sp+78h] [bp-68h]@4
  signed int v57; // [sp+7Ch] [bp-64h]@4
  __int16 v58; // [sp+80h] [bp-60h]@4
  char v59; // [sp+82h] [bp-5Eh]@4
  int v60; // [sp+88h] [bp-58h]@4
  char v61; // [sp+8Ch] [bp-54h]@4
  int v62; // [sp+90h] [bp-50h]@4
  int v63; // [sp+94h] [bp-4Ch]@4
  int v64; // [sp+98h] [bp-48h]@4
  int v65; // [sp+9Ch] [bp-44h]@4
  int v66; // [sp+A0h] [bp-40h]@4
  int v67; // [sp+A4h] [bp-3Ch]@4
  int v68; // [sp+A8h] [bp-38h]@4
  __int16 v69; // [sp+ACh] [bp-34h]@4
  int v70; // [sp+B0h] [bp-30h]@4
  int v71; // [sp+B4h] [bp-2Ch]@4
  int v72; // [sp+B8h] [bp-28h]@4
  int v73; // [sp+BCh] [bp-24h]@4
  int v74; // [sp+C0h] [bp-20h]@4
  int v75; // [sp+C4h] [bp-1Ch]@4
  char v76; // [sp+C8h] [bp-18h]@4

  v1 = this;
  result = (char *)ClientInstance::isShowingMenu(*((ClientInstance **)this + 82));
  if ( !result )
  {
    if ( *(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82)) + 720)
      || (v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 82)),
          result = (char *)Options::getVRLivingRoomCursorCentered(v3),
          result == (char *)1) )
    {
      v4 = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)v1 + 82));
      v5 = (Level *)Entity::getLevel(v4);
      v6 = Level::getHitResult(v5);
      HitResult::HitResult((int)&v60, (int)v6);
      HitResult::HitResult((HitResult *)&v26);
      _aeabi_memclr8(&v44, 48);
      v56 = 1065353216;
      v57 = 1065353216;
      v58 = 0;
      v59 = 0;
      v27 = v61;
      v26 = v60;
      v28 = v62;
      v29 = v63;
      v30 = v64;
      v31 = v65;
      v32 = v66;
      v33 = v67;
      v35 = v69;
      v34 = v68;
      v36 = v70;
      v37 = v71;
      v38 = v72;
      v39 = v73;
      v40 = v74;
      v41 = v75;
      v42 = v76;
      v43 = (*(int (__fastcall **)(InGameLivingRoomScreen *))(*(_DWORD *)v1 + 340))(v1);
      v44 = *((_DWORD *)v1 + 42);
      v45 = *((_DWORD *)v1 + 43);
      v46 = *((_DWORD *)v1 + 44);
      v47 = *((_DWORD *)v1 + 86);
      v48 = *((_DWORD *)v1 + 87);
      v49 = *((_DWORD *)v1 + 88);
      v50 = *((_DWORD *)v1 + 83);
      v51 = *((_DWORD *)v1 + 84);
      v52 = *((_DWORD *)v1 + 85);
      LOBYTE(v58) = 1;
      v7 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 82));
      if ( Player::isUsingItem(v7) == 1 )
      {
        v8 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 82));
        if ( *(_DWORD *)Player::getItemInUse(v8) == Item::mBow )
          v59 = 1;
      }
      v9 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82));
      v10 = v9;
      v11 = *(_QWORD *)(v9 + 564);
      if ( (_DWORD)v11 == HIDWORD(v11) )
        result = std::vector<HolographicPlatform::HoloCursorWorldParams,std::allocator<HolographicPlatform::HoloCursorWorldParams>>::_M_emplace_back_aux<HolographicPlatform::HoloCursorWorldParams const&>(
                   (void **)(v10 + 560),
                   (int)&v26);
      else
        v12 = HitResult::HitResult(v11, (int)&v26) + 68;
        v13 = v44;
        v14 = v45;
        v15 = v46;
        v16 = v47;
        *(_DWORD *)v12 = v43;
        *(_DWORD *)(v12 + 4) = v13;
        *(_DWORD *)(v12 + 8) = v14;
        *(_DWORD *)(v12 + 12) = v15;
        *(_DWORD *)(v12 + 16) = v16;
        v12 += 20;
        v17 = v49;
        v18 = v50;
        v19 = v51;
        v20 = v52;
        *(_DWORD *)v12 = v48;
        *(_DWORD *)(v12 + 4) = v17;
        *(_DWORD *)(v12 + 8) = v18;
        *(_DWORD *)(v12 + 12) = v19;
        *(_DWORD *)(v12 + 16) = v20;
        v21 = v54;
        v22 = v55;
        v23 = v56;
        v24 = v57;
        *(_DWORD *)v12 = v53;
        *(_DWORD *)(v12 + 4) = v21;
        *(_DWORD *)(v12 + 8) = v22;
        *(_DWORD *)(v12 + 12) = v23;
        *(_DWORD *)(v12 + 16) = v24;
        v25 = v58;
        *(_BYTE *)(v12 + 2) = v59;
        *(_WORD *)v12 = v25;
        result = (char *)(*(_DWORD *)(v10 + 564) + 132);
        *(_DWORD *)(v10 + 564) = result;
    }
  }
  return result;
}


signed int __fastcall InGameLivingRoomScreen::_updateFreeformPickDirection(InGameLivingRoomScreen *this, float a2, Vec3 *a3, Vec3 *a4)
{
  InGameLivingRoomScreen *v4; // r5@1
  Vec3 *v5; // r6@1
  Vec3 *v6; // r11@1
  int v7; // r7@1
  signed int result; // r0@2
  Level *v9; // r4@3
  Options *v10; // r0@4
  Player *v13; // r0@5
  Player *v14; // r0@6
  Options *v15; // r0@7
  int v16; // r0@9
  GuiData *v20; // r0@9
  GuiData *v22; // r0@9
  int v24; // r0@9
  int v25; // r0@9
  int v26; // r0@9
  Options *v27; // r0@9
  int v28; // r0@9
  int v29; // r8@9
  char *v33; // r4@12
  Entity *v34; // r0@12
  const Vec3 *v35; // r6@12
  int v36; // r0@12
  int v38; // r1@12
  int v39; // r1@12
  Entity *v40; // r0@15
  unsigned __int64 v42; // [sp+10h] [bp-218h]@5
  int v43; // [sp+18h] [bp-210h]@12
  char v44; // [sp+1Ch] [bp-20Ch]@12
  int v45; // [sp+20h] [bp-208h]@12
  int v46; // [sp+24h] [bp-204h]@12
  int v47; // [sp+28h] [bp-200h]@12
  int v48; // [sp+2Ch] [bp-1FCh]@12
  int v49; // [sp+30h] [bp-1F8h]@12
  int v50; // [sp+34h] [bp-1F4h]@12
  int v51; // [sp+38h] [bp-1F0h]@12
  __int16 v52; // [sp+3Ch] [bp-1ECh]@12
  int v53; // [sp+40h] [bp-1E8h]@12
  int v54; // [sp+44h] [bp-1E4h]@12
  int v55; // [sp+48h] [bp-1E0h]@12
  int v56; // [sp+4Ch] [bp-1DCh]@12
  int v57; // [sp+50h] [bp-1D8h]@12
  int v58; // [sp+54h] [bp-1D4h]@12
  char v59; // [sp+58h] [bp-1D0h]@12
  float v60; // [sp+5Ch] [bp-1CCh]@12
  float v61; // [sp+68h] [bp-1C0h]@9
  float v64; // [sp+74h] [bp-1B4h]@9
  char v67; // [sp+80h] [bp-1A8h]@9
  char v68; // [sp+C0h] [bp-168h]@9
  float v69; // [sp+100h] [bp-128h]@9
  char v75; // [sp+140h] [bp-E8h]@9
  float v76; // [sp+180h] [bp-A8h]@9

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = LODWORD(a2);
  if ( ClientInstance::isShowingMenu(*((ClientInstance **)this + 82)) )
  {
    result = 0;
  }
  else
    v9 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v4 + 82));
    if ( *(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82)) + 720)
      || (v10 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v4 + 82)),
          Options::getVRLivingRoomCursorCentered(v10)) )
    {
      v42 = __PAIR__((unsigned int)v9, (unsigned int)v5);
      *(_QWORD *)&_R9 = *(_QWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v4 + 82)) + 384);
      v13 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 82));
      if ( Player::isUsingItem(v13) == 1
        && (v14 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 82)),
            *(_DWORD *)Player::getItemInUse(v14) == Item::mBow)
        || (v15 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v4 + 82)),
            Options::getVRLivingRoomCursorCentered(v15) == 1) )
      {
        _R9 = 0;
        _R10 = 0;
      }
      v16 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82));
      HolographicPlatform::getTransform((int)&v69, v16, 6, 5, 0);
      __asm
        VLDR            S16, [SP,#0x228+var_128]
        VLDR            S24, [SP,#0x228+var_124]
        VLDR            S20, [SP,#0x228+var_118]
        VLDR            S26, [SP,#0x228+var_114]
        VLDR            S18, [SP,#0x228+var_F8]
        VLDR            S22, [SP,#0x228+var_F4]
      v20 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v4 + 82));
      _R6 = GuiData::getGuiScale(v20);
      v22 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v4 + 82));
      _R0 = GuiData::getScreenSizeData(v22);
        VLDR            S28, [R0,#8]
        VLDR            S30, [R0,#0xC]
      v24 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82));
      HolographicPlatform::getTransform((int)&v68, v24, 4, 3, 0);
      v25 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82));
      HolographicPlatform::getTransform((int)&v67, v25, 3, 2, 0);
      v26 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)v4 + 82));
      Entity::getInterpolatedPosition((Entity *)&v64, *(float *)&v26, v7);
      glm::detail::operator*<float>((int)&v75, (int)&v68, (int)&v67);
      glm::inverse<float>((int)&v76, (int)&v75);
        VMOV            S0, R9
        VLDR            S8, [SP,#0x228+var_8C]
        VMOV            S2, R10
        VLDR            S10, [SP,#0x228+var_98]
        VMUL.F32        S4, S24, S0
        VLDR            S12, [SP,#0x228+var_94]
        VMUL.F32        S6, S26, S2
        VLDR            S14, [SP,#0x228+var_90]
        VMUL.F32        S0, S16, S0
        VMUL.F32        S2, S20, S2
        VADD.F32        S4, S6, S4
        VLDR            S6, [SP,#0x228+var_9C]
        VADD.F32        S0, S2, S0
        VADD.F32        S2, S4, S22
        VMOV            S4, R6
        VADD.F32        S0, S0, S18
        VMUL.F32        S2, S4, S2
        VMUL.F32        S0, S4, S0
        VMOV.F32        S4, #-1.0
        VSUB.F32        S2, S30, S2
        VDIV.F32        S0, S0, S28
        VDIV.F32        S2, S2, S30
        VADD.F32        S0, S0, S0
        VADD.F32        S2, S2, S2
        VADD.F32        S22, S0, S4
        VLDR            S0, [SP,#0x228+var_A8]
        VADD.F32        S24, S2, S4
        VLDR            S2, [SP,#0x228+var_A4]
        VLDR            S4, [SP,#0x228+var_A0]
        VMUL.F32        S6, S6, S22
        VMUL.F32        S8, S8, S24
        VMUL.F32        S0, S0, S22
        VMUL.F32        S10, S10, S24
        VMUL.F32        S2, S2, S22
        VMUL.F32        S12, S12, S24
        VMUL.F32        S4, S4, S22
        VMUL.F32        S14, S14, S24
        VADD.F32        S6, S8, S6
        VLDR            S8, [SP,#0x228+var_7C]
        VADD.F32        S0, S10, S0
        VLDR            S10, [SP,#0x228+var_88]
        VADD.F32        S2, S12, S2
        VLDR            S12, [SP,#0x228+var_6C]
        VADD.F32        S4, S14, S4
        VSUB.F32        S6, S6, S8
        VLDR            S8, [SP,#0x228+var_84]
        VSUB.F32        S0, S0, S10
        VLDR            S10, [SP,#0x228+var_80]
        VSUB.F32        S2, S2, S8
        VLDR            S8, [SP,#0x228+var_78]
        VSUB.F32        S4, S4, S10
        VLDR            S10, [SP,#0x228+var_70]
        VADD.F32        S6, S6, S12
        VADD.F32        S0, S0, S8
        VLDR            S8, [SP,#0x228+var_74]
        VADD.F32        S2, S2, S8
        VLDR            S8, [SP,#0x228+var_1B0]
        VADD.F32        S4, S4, S10
        VLDR            S10, [SP,#0x228+var_1AC]
        VDIV.F32        S0, S0, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S4, S4, S6
        VLDR            S6, [SP,#0x228+var_1B4]
        VADD.F32        S18, S8, S2
        VADD.F32        S20, S10, S4
        VADD.F32        S16, S0, S6
        VSTR            S16, [SP,#0x228+var_1C0]
        VSTR            S18, [SP,#0x228+var_1BC]
        VSTR            S20, [SP,#0x228+var_1B8]
        VADD.F32        S6, S6, S8
        VADD.F32        S0, S0, S10
        VADD.F32        S24, S8, S2
        VADD.F32        S26, S10, S4
        VADD.F32        S22, S0, S6
        VSTR            S22, [SP,#0x228+var_1CC]
        VSTR            S24, [SP,#0x228+var_1C8]
        VSTR            S26, [SP,#0x228+var_1C4]
      v27 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v4 + 82));
      v28 = Options::getPlayerViewPerspective(v27);
      __asm { VSTR            S16, [R11] }
      v29 = v28;
        VSTR            S18, [R11,#4]
        VSTR            S20, [R11,#8]
        VLDR            S0, [SP,#0x228+var_1C0]
        VLDR            S2, [SP,#0x228+var_1BC]
        VSUB.F32        S6, S22, S0
        VLDR            S4, [SP,#0x228+var_1B8]
        VSUB.F32        S8, S24, S2
        VSUB.F32        S10, S26, S4
        VMUL.F32        S12, S6, S6
        VMUL.F32        S14, S8, S8
        VMUL.F32        S1, S10, S10
        VADD.F32        S12, S14, S12
        VLDR            S14, =0.0001
        VADD.F32        S12, S12, S1
        VSQRT.F32       S12, S12
        VCMPE.F32       S12, S14
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        _R1 = *(&Vec3::ZERO + 1);
        _R2 = Vec3::ZERO;
        _R0 = dword_2822498;
      else
        __asm
        {
          VDIV.F32        S10, S10, S12
          VDIV.F32        S8, S8, S12
          VDIV.F32        S6, S6, S12
          VMOV            R0, S10
          VMOV            R1, S8
          VMOV            R2, S6
        }
        VMOV.F32        S6, #12.0
        VMOV            S8, R1
        VMOV            S10, R2
        VMOV            S12, R0
      *(_DWORD *)v42 = _R2;
      *(_DWORD *)(v42 + 4) = _R1;
      *(_DWORD *)(v42 + 8) = _R0;
        VMUL.F32        S10, S10, S6
        VMUL.F32        S8, S8, S6
        VMUL.F32        S6, S12, S6
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x228+var_1CC]
        VSTR            S2, [SP,#0x228+var_1C8]
        VSTR            S4, [SP,#0x228+var_1C4]
      v33 = Level::getHitResult((Level *)HIDWORD(v42));
      v34 = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)v4 + 82));
      v35 = (const Vec3 *)Entity::getRegion(v34);
      v36 = (*(int (__fastcall **)(InGameLivingRoomScreen *))(*(_DWORD *)v4 + 320))(v4);
      BlockSource::clip((BlockSource *)&v43, v35, (const Vec3 *)&v61, (int)&v60, v36, 0, 200, 0);
      _ZF = v29 == 0;
      v38 = v43;
      v33[4] = v44;
      *(_DWORD *)v33 = v38;
      *((_DWORD *)v33 + 2) = v45;
      *((_DWORD *)v33 + 3) = v46;
      *((_DWORD *)v33 + 4) = v47;
      *((_DWORD *)v33 + 5) = v48;
      *((_DWORD *)v33 + 6) = v49;
      *((_DWORD *)v33 + 7) = v50;
      v39 = v51;
      *((_WORD *)v33 + 18) = v52;
      *((_DWORD *)v33 + 8) = v39;
      *((_DWORD *)v33 + 10) = v53;
      *((_DWORD *)v33 + 11) = v54;
      *((_DWORD *)v33 + 12) = v55;
      *((_DWORD *)v33 + 13) = v56;
      *((_DWORD *)v33 + 14) = v57;
      *((_DWORD *)v33 + 15) = v58;
      v33[64] = v59;
      if ( v29 )
        _ZF = (*(_DWORD *)v33 & 0xFFFFFFFE) == 2;
      if ( !_ZF )
        v40 = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)v4 + 82));
        _R0 = Entity::distanceToSqr(v40, (const Vec3 *)(v33 + 20));
          VLDR            S0, =144.0
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          *(_DWORD *)Level::getHitResult((Level *)HIDWORD(v42)) = 3;
      *((_DWORD *)v4 + 86) = *(_DWORD *)v6;
      *((_DWORD *)v4 + 87) = *((_DWORD *)v6 + 1);
      *((_DWORD *)v4 + 88) = *((_DWORD *)v6 + 2);
      *((_DWORD *)v4 + 83) = *(_DWORD *)v42;
      *((_DWORD *)v4 + 84) = *(_DWORD *)(v42 + 4);
      *((_DWORD *)v4 + 85) = *(_DWORD *)(v42 + 8);
      result = 1;
    }
    else
      *(_DWORD *)Level::getHitResult(v9) = 3;
      result = 0;
  return result;
}


void __fastcall InGameLivingRoomScreen::~InGameLivingRoomScreen(InGameLivingRoomScreen *this)
{
  void *v1; // r0@1

  v1 = (void *)InGamePlayScreen::~InGamePlayScreen(this);
  j_j_j__ZdlPv_5(v1);
}


BaseScreen *__fastcall InGameLivingRoomScreen::InGameLivingRoomScreen(BaseScreen *a1, MinecraftGame *a2, int a3)
{
  BaseScreen *v3; // r4@1
  Options *v4; // r0@2
  int v5; // r5@2
  int v6; // r6@2
  int v7; // r0@2

  v3 = a1;
  InGamePlayScreen::InGamePlayScreen(a1, a2, a3);
  *(_DWORD *)v3 = &off_26E4894;
  *((_DWORD *)v3 + 83) = 1065353216;
  *((_DWORD *)v3 + 84) = 0;
  *((_DWORD *)v3 + 85) = 1065353216;
  *((_BYTE *)v3 + 368) = 0;
  *((_DWORD *)v3 + 90) = 0;
  *((_DWORD *)v3 + 91) = 0;
  *((_DWORD *)v3 + 88) = 0;
  *((_DWORD *)v3 + 89) = 0;
  *((_DWORD *)v3 + 86) = 0;
  *((_DWORD *)v3 + 87) = 0;
  if ( !byte_27DF29C )
  {
    v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 82));
    v5 = Options::getVRLivingRoomHintTime(v4);
    v6 = ClientInstance::getHolosceneRenderer(*((ClientInstance **)v3 + 82));
    v7 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82));
    HolosceneRenderer::resetLivingRoomHintText(v6, (int *)(v7 + 664), (int)&Color::WHITE, v5);
    if ( v5 == 18 )
      byte_27DF29C = 1;
  }
  return v3;
}


void __fastcall InGameLivingRoomScreen::~InGameLivingRoomScreen(InGameLivingRoomScreen *this)
{
  InGameLivingRoomScreen::~InGameLivingRoomScreen(this);
}


int __fastcall InGameLivingRoomScreen::_init(InGameLivingRoomScreen *this, int a2, int a3)
{
  InGameLivingRoomScreen *v3; // r4@1
  int v12; // r0@1
  Options *v13; // r0@2
  GuiData *v14; // r0@4
  GuiData *v16; // r0@4
  int v17; // r0@5
  float v19; // [sp+4h] [bp-5Ch]@5
  int v20; // [sp+8h] [bp-58h]@5
  int v21; // [sp+Ch] [bp-54h]@5
  __int64 v22; // [sp+10h] [bp-50h]@1
  __int64 v23; // [sp+18h] [bp-48h]@1
  __int64 v24; // [sp+20h] [bp-40h]@1
  __int64 v25; // [sp+28h] [bp-38h]@1
  __int64 v26; // [sp+30h] [bp-30h]@1
  __int64 v27; // [sp+38h] [bp-28h]@1

  v3 = this;
  InGamePlayScreen::_init(this, a2, a3);
  _aeabi_memclr8(&v22, 56);
  _R0 = &Matrix::IDENTITY;
  v22 = *(_QWORD *)&Matrix::IDENTITY;
  v23 = qword_27E89F0;
  v24 = qword_27E89F8;
  v25 = qword_27E8A00;
  _R2 = HIDWORD(qword_27E8A08);
  v26 = qword_27E8A08;
  __asm { VMOV            S0, R1 }
  _R1 = qword_27E8A10;
  __asm { VMOV            S2, R2 }
  _R2 = HIDWORD(qword_27E8A10);
  __asm
  {
    VADD.F32        S0, S0, S0
    VMOV            S4, R1
    VLDR            S8, [R0,#0x30]
    VADD.F32        S2, S2, S2
    VLDR            S10, [R0,#0x34]
    VMOV            S6, R2
    VLDR            S12, [R0,#0x38]
    VADD.F32        S4, S4, S4
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S6, S6, S6
  }
  v27 = qword_27E8A10;
    VSUB.F32        S0, S8, S0
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S14, S6
    VSTR            S0, [SP,#0x60+var_20]
    VSTR            S2, [SP,#0x60+var_1C]
    VSTR            S4, [SP,#0x60+var_18]
    VSTR            S6, [SP,#0x60+var_14]
  v12 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82));
  (*(void (**)(void))(*(_DWORD *)v12 + 160))();
  if ( !byte_27DF29D )
    v13 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 82));
    Options::setResetPlayerAlignment(v13, 1);
    byte_27DF29D = 1;
  if ( !*((_BYTE *)v3 + 368) )
    v14 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v3 + 82));
    _R0 = GuiData::getScreenSizeData(v14);
    __asm
    {
      VLDR            S0, [R0,#8]
      VCVTR.U32.F32   S0, S0
      VSTR            S0, [R4,#0x164]
      VLDR            S0, [R0,#0xC]
      VSTR            S0, [R4,#0x168]
    }
    v16 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v3 + 82));
    *((_DWORD *)v3 + 91) = GuiData::getGuiScale(v16);
    *((_BYTE *)v3 + 368) = 1;
  v17 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82));
  (*(void (**)(void))(*(_DWORD *)v17 + 260))();
  return ClientInstance::setUISizeAndScale(*((ClientInstance **)v3 + 82), v21, v20, v19);
}


int __fastcall InGameLivingRoomScreen::_setHoloMode(InGameLivingRoomScreen *this)
{
  int v1; // r0@1
  int v3; // [sp+4h] [bp-Ch]@1

  v1 = *((_DWORD *)this + 82);
  v3 = 6;
  return ClientInstance::setClientPlayMode(v1, &v3);
}


int __fastcall InGameLivingRoomScreen::terminate(InGameLivingRoomScreen *this)
{
  InGameLivingRoomScreen *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = ClientInstance::getHolosceneRenderer(*((ClientInstance **)this + 82));
  v3 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82));
  HolosceneRenderer::resetLivingRoomHintText(v2, (int *)(v3 + 664), (int)&Color::WHITE, 0);
  result = *((_BYTE *)v1 + 368);
  if ( *((_BYTE *)v1 + 368) )
    result = j_j_j__ZN14ClientInstance17setUISizeAndScaleEiif(
               *((ClientInstance **)v1 + 82),
               *((_DWORD *)v1 + 89),
               *((_DWORD *)v1 + 90),
               *((float *)v1 + 91));
  return result;
}


int __fastcall InGameLivingRoomScreen::tick(InGameLivingRoomScreen *this, int a2, int a3)
{
  InGameLivingRoomScreen *v3; // r6@1
  int v4; // r8@1
  int v5; // r5@1
  Options *v6; // r0@2
  Options *v7; // r0@2
  int v8; // r7@2
  int v9; // r0@2
  int v10; // r7@2
  unsigned int *v11; // r1@3
  unsigned int v12; // r0@5
  unsigned int *v13; // r4@9
  unsigned int v14; // r0@11
  int v16; // [sp+0h] [bp-20h]@2
  int v17; // [sp+4h] [bp-1Ch]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( ClientInstance::getRealityModeToggleTriggered(*((ClientInstance **)this + 82)) == 1 )
  {
    v6 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 82));
    Options::setVRLivingRoomHintTime(v6, 18);
    v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 82));
    Options::setPlayerViewPerspective(v7, 0);
    v8 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 82));
    v9 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 82));
    SceneFactory::createRealityModeTransitionScreen((SceneFactory *)&v16, v9);
    SceneStack::pushScreen(v8, (int)&v16, 1);
    v10 = v17;
    if ( v17 )
    {
      v11 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    }
  }
  return InGamePlayScreen::tick(v3, v5, v4);
}
