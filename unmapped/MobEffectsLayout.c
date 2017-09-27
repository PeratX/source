

int __fastcall MobEffectsLayout::setHeight(MobEffectsLayout *this, int a2)
{
  GuiData *v3; // r0@1
  int result; // r0@1

  _R4 = a2;
  v3 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)this);
  __asm
  {
    VMOV            S0, R4
    VCVT.F32.S32    S16, S0
  }
  result = GuiData::getGuiScale(v3);
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R5,#0x3C]
  return result;
}


char *__fastcall MobEffectsLayout::getEffectsDisplayInfo(MobEffectsLayout *this)
{
  return (char *)this + 20;
}


Mob *__fastcall MobEffectsLayout::tick(MobEffectsLayout *this)
{
  MobEffectsLayout *v1; // r4@1
  Mob *result; // r0@1
  int v3; // r5@2

  v1 = this;
  result = (Mob *)ClientInstance::getLocalPlayer(*(ClientInstance **)this);
  if ( result )
  {
    v3 = Mob::getActiveEffectCount(result);
    MobEffectsLayout::_updateAnimations(v1);
    MobEffectsLayout::_updatePositions(v1);
    result = ClientInstance::onMobEffectsChange(*(ClientInstance **)v1);
    *((_DWORD *)v1 + 8) = v3;
  }
  return result;
}


int __fastcall MobEffectsLayout::_updatePositions(MobEffectsLayout *this)
{
  Mob *v2; // r5@1
  signed int v3; // r11@1
  __int64 v4; // r0@1
  char *v5; // r0@2
  unsigned __int64 *v6; // r7@2
  signed int v11; // r6@3
  signed int v12; // r10@3
  _DWORD **v13; // r9@3
  unsigned int v14; // r8@3
  int v16; // r1@6
  int v17; // r9@6
  signed int v20; // r6@6
  Options *v22; // r0@6
  signed int v24; // r7@7
  int v38; // ST00_4@9
  int v40; // [sp+0h] [bp-98h]@0
  char *v41; // [sp+14h] [bp-84h]@2
  signed int v42; // [sp+18h] [bp-80h]@1
  signed int v43; // [sp+1Ch] [bp-7Ch]@6
  char v44; // [sp+20h] [bp-78h]@9
  char v45; // [sp+30h] [bp-68h]@9

  _R4 = this;
  v2 = (Mob *)ClientInstance::getLocalPlayer(*(ClientInstance **)this);
  *(_QWORD *)((char *)_R4 + 4) = 36028799158059007LL;
  *(_QWORD *)((char *)_R4 + 12) = 36028799158059007LL;
  v3 = *((_DWORD *)_R4 + 11) + 4;
  LODWORD(v4) = (*((_DWORD *)_R4 + 15) - *((_DWORD *)_R4 + 9) - 2 * v3) / v3;
  v42 = v4;
  if ( (signed int)v4 >= 1 )
  {
    v5 = Mob::getAllEffects(v2);
    v6 = (unsigned __int64 *)v5;
    v41 = v5;
    v4 = *(_QWORD *)v5;
    if ( HIDWORD(v4) != (_DWORD)v4 )
    {
      __asm
      {
        VMOV.F32        S16, #-1.0
        VMOV.F32        S18, #2.0
      }
      v11 = 0;
        VMOV.F32        S20, #-2.0
        VMOV.F32        S22, #1.0
      v12 = 20;
      v13 = MobEffect::mMobEffects;
      v14 = 0;
      do
        _R5 = *((_DWORD *)_R4 + 5) + v12;
        __asm
        {
          VLDR            S24, [R5,#-0x14]
          VCMPE.F32       S24, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && MobEffect::hasIcon((MobEffect *)v13[v14]) == 1 )
          v43 = v11;
          v16 = v11 % v42;
          v17 = v11 / v42;
          _R6 = v11 / v42 + 1;
          __asm { VMOV            S0, R6 }
          _KR00_8 = *(_QWORD *)((char *)_R4 + 44);
          v20 = v3;
          __asm { VCVT.F32.S32    S26, S0 }
          _R11 = *((_DWORD *)_R4 + 9) + HIDWORD(_KR00_8) + v16 * v3;
          v22 = (Options *)ClientInstance::getOptions(*(ClientInstance **)_R4);
          if ( Options::isLeftHanded(v22) == 1 )
          {
            _R0 = *((_DWORD *)_R4 + 11);
            __asm { VADD.F32        S2, S24, S16 }
            v24 = v20;
            __asm
            {
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
            }
            _R6 = *((_DWORD *)_R4 + 13) + v17 * v20 + 8;
            __asm { VMUL.F32        S0, S0, S2 }
          }
          else
              VMOV            S0, R7
              VSUB.F32        S2, S22, S24
            _R6 = -8 - v17 * v20 + *(_QWORD *)((char *)_R4 + 52) + (*(_QWORD *)((char *)_R4 + 52) >> 32) - _R0;
          __asm { VADD.F32        S0, S0, S0 }
          _R1 = _R0 + _R6;
          __asm { VMOV            S4, R6 }
          _R0 = _R0 + _R11 + 2;
          __asm
            VMUL.F32        S24, S26, S0
            VMOV            S0, R1
          _R1 = _R11 - 2;
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S4, S4
            VMOV            S8, R1
            VADD.F32        S2, S24, S18
            VADD.F32        S6, S24, S20
            VCVT.F32.S32    S8, S8
            VADD.F32        S0, S2, S0
            VADD.F32        S2, S6, S4
            VMOV            R2, S8
            VMOV            R3, S0
            VMOV            R1, S2
            VMOV            S0, R0
          *((_DWORD *)_R4 + 10) = _R6;
          __asm { VSTR            S0, [SP,#0x98+var_98] }
          RectangleArea::RectangleArea(COERCE_FLOAT(&v45), _R1, _R2, _R3, v40);
          RectangleArea::operator=(_R5, (int)&v45);
          _KR08_8 = *((_QWORD *)_R4 + 5);
            VMOV            S4, R11
          _R0 = _KR08_8 + HIDWORD(_KR08_8);
          __asm { VMOV            S2, R0 }
          _R0 = HIDWORD(_KR08_8) + _R11;
            VCVT.F32.S32    S2, S2
            VADD.F32        S0, S0, S24
            VADD.F32        S2, S2, S24
            VMOV            R2, S4
            VMOV            R1, S0
            VMOV            R3, S2
            VSTR            S0, [SP,#0x98+var_98]
          RectangleArea::RectangleArea(COERCE_FLOAT(&v44), _R1, _R2, _R3, v38);
          RectangleArea::operator=(_R5 - 16, (int)&v44);
          __asm { VLDR            S0, [R5] }
          v3 = v24;
            VLDR            S2, [R4,#4]
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S0, S2 }
            VSTR            S0, [R4,#4]
            VLDR            S0, [R5,#8]
            VLDR            S2, [R4,#0xC]
            VSTR            S0, [R4,#0xC]
            VLDR            S0, [R5,#4]
            VLDR            S2, [R4,#8]
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S0, S2 }
            VSTR            S0, [R4,#8]
            VLDR            S0, [R5,#0xC]
            VLDR            S2, [R4,#0x10]
          __asm { VSTR            S0, [R4,#0x10] }
          v6 = (unsigned __int64 *)v41;
          v13 = MobEffect::mMobEffects;
          v11 = v43 + 1;
        v12 += 36;
        ++v14;
        LODWORD(v4) = (*v6 >> 32) - *v6;
      while ( v14 < (signed int)v4 >> 4 );
    }
  }
  return v4;
}


int __fastcall MobEffectsLayout::onConfigChanged(MobEffectsLayout *this, const Config *a2)
{
  MobEffectsLayout *v2; // r4@1
  GuiData *v3; // r5@1
  PixelCalc *v4; // r0@1
  int result; // r0@3

  v2 = this;
  v3 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)this);
  v4 = (PixelCalc *)ClientInstance::getDpadScale(*(ClientInstance **)v2);
  _R6 = PixelCalc::millimetersToPixels(v4, 10.0);
  _R0 = GuiData::getGuiScale(v3);
  __asm
  {
    VMOV.F32        S0, #18.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            S2, R6
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VADD.F32        S2, S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S2
  result = _R0 + 4;
  *((_DWORD *)v2 + 9) = result;
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#0x2C]
  return result;
}


int __fastcall MobEffectsLayout::MobEffectsLayout(int a1, int a2)
{
  int v2; // r4@1
  char *v3; // r5@1
  int v4; // r7@1
  int v5; // r0@2

  v2 = a1;
  *(_DWORD *)a1 = a2;
  RectangleArea::RectangleArea((RectangleArea *)(a1 + 4));
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  v3 = (char *)operator new(0x3A8u);
  v4 = 0;
  *(_DWORD *)(v2 + 20) = v3;
  *(_DWORD *)(v2 + 24) = v3;
  *(_DWORD *)(v2 + 28) = v3 + 936;
  do
  {
    *(_DWORD *)&v3[v4] = 0;
    v5 = RectangleArea::RectangleArea((RectangleArea *)&v3[v4 + 4]);
    RectangleArea::RectangleArea((RectangleArea *)(v5 + 16));
    v4 += 36;
  }
  while ( v4 != 936 );
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  return v2;
}


int __fastcall MobEffectsLayout::_updateAnimations(MobEffectsLayout *this)
{
  MobEffectsLayout *v1; // r11@1
  Mob *v2; // r0@1
  char *v3; // r10@1
  __int64 v4; // r0@1
  int v5; // r9@1
  int v10; // r6@2
  int v11; // r5@2
  unsigned int v12; // r4@2
  MobEffectInstance *v13; // r7@4

  v1 = this;
  v2 = (Mob *)ClientInstance::getLocalPlayer(*(ClientInstance **)this);
  v3 = Mob::getAllEffects(v2);
  LODWORD(v4) = *(_QWORD *)((char *)v1 + 20) >> 32;
  v5 = *(_QWORD *)((char *)v1 + 20);
  if ( (_DWORD)v4 != v5 )
  {
    __asm
    {
      VMOV.F32        S16, #1.0
      VLDR            S18, =0.2
    }
    v10 = 0;
      VLDR            S20, =0.05
      VLDR            S22, =-0.01
    v11 = 0;
    __asm { VLDR            S24, =0.0 }
    v12 = 0;
    while ( 1 )
      v4 = *(_QWORD *)v3;
      if ( v12 >= (HIDWORD(v4) - (signed int)v4) >> 4 )
        return v4;
      v13 = (MobEffectInstance *)(v4 + v10);
      if ( !MobEffectInstance::operator!=((int *)(v4 + v10), &MobEffectInstance::NO_EFFECT) )
        break;
      _R8 = v5 + v11;
      MobEffectInstance::getDuration(v13);
      __asm
      {
        VLDR            S0, [R8]
        VSUB.F32        S2, S16, S0
        VMUL.F32        S2, S2, S18
      }
      if ( _NF ^ _VF )
        goto LABEL_10;
        VADD.F32        S0, S0, S20
        VADD.F32        S0, S0, S2
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S16 }
LABEL_12:
      __asm { VSTR            S0, [R8] }
      v5 = *(_QWORD *)((char *)v1 + 20);
      v10 += 16;
      v11 += 36;
      ++v12;
      LODWORD(v4) = 954437177 * ((signed int)((*(_QWORD *)((char *)v1 + 20) >> 32) - v5) >> 2);
      if ( v12 >= (unsigned int)v4 )
    _R8 = v5 + v11;
      VLDR            S0, [R8]
      VSUB.F32        S2, S16, S0
      VMUL.F32        S2, S2, S18
LABEL_10:
      VSUB.F32        S2, S22, S2
      VADD.F32        S0, S2, S0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S24 }
    goto LABEL_12;
  }
  return v4;
}


char *__fastcall MobEffectsLayout::getTouchArea(MobEffectsLayout *this)
{
  return (char *)this + 4;
}


int __fastcall MobEffectsLayout::setOffsetToStartingPositionY(int result, int a2)
{
  *(_DWORD *)(result + 48) = a2;
  return result;
}


int __fastcall MobEffectsLayout::setOffsetToStartingPositionX(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}


int __fastcall MobEffectsLayout::setWidth(MobEffectsLayout *this, int a2)
{
  GuiData *v3; // r0@1
  int result; // r0@1

  _R4 = a2;
  v3 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)this);
  __asm
  {
    VMOV            S0, R4
    VCVT.F32.S32    S16, S0
  }
  result = GuiData::getGuiScale(v3);
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R5,#0x38]
  return result;
}
