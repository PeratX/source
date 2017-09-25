

int __fastcall SpriteComponent::setClipRatio(int result, float a2)
{
  *(float *)(result + 152) = a2;
  return result;
}


void __fastcall SpriteComponent::~SpriteComponent(SpriteComponent *this)
{
  SpriteComponent *v1; // r0@1

  v1 = SpriteComponent::~SpriteComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall SpriteComponent::setColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 108) = v2;
  *(_DWORD *)(result + 112) = v3;
  *(_DWORD *)(result + 116) = v4;
  *(_DWORD *)(result + 120) = v5;
  return result;
}


int __fastcall SpriteComponent::setTiled(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = *(_WORD *)(result + 156) & 0xFFFD | 2 * a2;
  return result;
}


int __fastcall SpriteComponent::_drawKeepRatio(int a1, int a2, unsigned __int64 *a3, unsigned __int64 *a4, int a5, int a6)
{
  unsigned __int64 v8; // kr00_8@1
  unsigned __int64 v16; // kr08_8@1
  int (__fastcall *v17)(int, int, int *, int *); // r5@5
  int v19; // [sp+10h] [bp-28h]@5
  int v20; // [sp+14h] [bp-24h]@5
  int v21; // [sp+18h] [bp-20h]@5
  int v22; // [sp+1Ch] [bp-1Ch]@5
  int v23; // [sp+20h] [bp-18h]@5
  int v24; // [sp+24h] [bp-14h]@5

  v8 = *a4;
  _R3 = *a4 >> 32;
  _LR = v8;
  _R4 = a6;
  __asm
  {
    VMOV            S6, R3
    VMOV            S4, LR
    VLDR            S14, =1.1921e-7
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
    VDIV.F32        S10, S4, S0
  }
  v16 = *a3;
  _R2 = *a3 >> 32;
  _R4 = v16;
    VDIV.F32        S8, S6, S2
    VSUB.F32        S12, S10, S8
    VABS.F32        S12, S12
    VCMPE.F32       S12, S14
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VCMPE.F32       S10, S8
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S12, #0.5
      VMOV            S14, R4
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S8, S10 }
      VMUL.F32        S10, S8, S2
      VMUL.F32        S8, S8, S0
      VSUB.F32        S6, S6, S10
      VSUB.F32        S4, S4, S8
      VMOV            R3, S10
      VMOV            LR, S8
      VMUL.F32        S6, S6, S12
      VMUL.F32        S4, S4, S12
      VMOV            S12, R2
      VADD.F32        S6, S12, S6
      VADD.F32        S4, S14, S4
      VMOV            R2, S6
      VMOV            R4, S4
  v17 = *(int (__fastcall **)(int, int, int *, int *))(*(_DWORD *)a2 + 32);
  v23 = _R4;
  v24 = _R2;
  v21 = _LR;
  v22 = _R3;
  v19 = *(_DWORD *)a5;
  v20 = *(_DWORD *)(a5 + 4);
    VSTR            S0, [SP,#0x38+var_30]
    VSTR            S2, [SP,#0x38+var_2C]
  return v17(a2, a1 + 60, &v23, &v21);
}


unsigned int __fastcall SpriteComponent::getTiled(SpriteComponent *this)
{
  return (*((_BYTE *)this + 156) & 2u) >> 1;
}


unsigned int __fastcall SpriteComponent::clone(SpriteComponent *this, UIControl *a2, UIControl *a3)
{
  SpriteComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r12@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r12@1
  int v12; // r1@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r0@1
  int v16; // r1@1
  unsigned int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0xA4u);
  SpriteComponent::SpriteComponent((RenderableComponent *)v6, v4);
  EntityInteraction::setInteractText((int *)v6 + 3, (int *)v5 + 3);
  *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
  v7 = (int)v6 + 108;
  *((_DWORD *)v6 + 23) = *((_DWORD *)v5 + 23);
  *((_DWORD *)v6 + 24) = *((_DWORD *)v5 + 24);
  *((_DWORD *)v6 + 25) = *((_DWORD *)v5 + 25);
  *((_DWORD *)v6 + 26) = *((_DWORD *)v5 + 26);
  v8 = *((_DWORD *)v5 + 28);
  v9 = *((_DWORD *)v5 + 29);
  v10 = *((_DWORD *)v5 + 30);
  *(_DWORD *)v7 = *((_DWORD *)v5 + 27);
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  v11 = (int)v6 + 124;
  v12 = *((_DWORD *)v5 + 32);
  v13 = *((_DWORD *)v5 + 33);
  v14 = *((_DWORD *)v5 + 34);
  *(_DWORD *)v11 = *((_DWORD *)v5 + 31);
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  *((_DWORD *)v6 + 36) = *((_DWORD *)v5 + 36);
  *((_DWORD *)v6 + 37) = *((_DWORD *)v5 + 37);
  *((_BYTE *)v6 + 140) = *((_BYTE *)v5 + 140);
  *((_DWORD *)v6 + 38) = *((_DWORD *)v5 + 38);
  *((_WORD *)v6 + 78) = *((_WORD *)v5 + 78) & 0x20 | *((_WORD *)v6 + 78) & 0xFFC0 | *((_WORD *)v5 + 78) & 1 | *((_WORD *)v5 + 78) & 2 | *((_WORD *)v5 + 78) & 4 | *((_WORD *)v5 + 78) & 0x18;
  EntityInteraction::setInteractText((int *)v6 + 21, (int *)v5 + 21);
  EntityInteraction::setInteractText((int *)v6 + 22, (int *)v5 + 22);
  v15 = *((_WORD *)v6 + 78);
  v16 = *((_WORD *)v5 + 78) & 0x140;
  *(_DWORD *)v3 = v6;
  result = v15 & 0xFFFFFE3F | v16;
  *((_WORD *)v6 + 78) = result;
  return result;
}


int __fastcall SpriteComponent::setTiledScale(int result, int a2)
{
  *(_DWORD *)(result + 144) = *(_DWORD *)a2;
  *(_DWORD *)(result + 148) = *(_DWORD *)(a2 + 4);
  return result;
}


int __fastcall SpriteComponent::_drawTiled(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  _DWORD *v10; // r0@1
  int result; // r0@1
  _DWORD *v12; // [sp+Ch] [bp-24h]@1
  int (*v13)(void); // [sp+14h] [bp-1Ch]@1
  char *(__fastcall *v14)(int, __int64 *, __int64 *, __int64 *, __int64 *); // [sp+18h] [bp-18h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = operator new(8u);
  *v10 = v6;
  v10[1] = a6;
  v12 = v10;
  v13 = (int (*)(void))sub_C459DA;
  v14 = sub_C45980;
  result = SpriteComponent::_drawTiled(v6, v9, v8, v7, a5, (int)&v12);
  if ( v13 )
    result = v13();
  return result;
}


char *__fastcall SpriteComponent::getUVSize(SpriteComponent *this)
{
  return (char *)this + 100;
}


char *__fastcall SpriteComponent::getTexture(SpriteComponent *this)
{
  return (char *)this + 60;
}


int __fastcall SpriteComponent::update(SpriteComponent *this, UIMeasureStrategy *a2)
{
  return 0;
}


int *__fastcall SpriteComponent::getResourceLocation(SpriteComponent *this, int a2)
{
  int v2; // r4@1
  int *result; // r0@1

  v2 = a2;
  result = sub_DA73B4((int *)this, (int *)(a2 + 12));
  result[1] = *(_DWORD *)(v2 + 16);
  return result;
}


int __fastcall SpriteComponent::_drawClipped(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v17; // r0@1
  float v19; // r1@5
  float v20; // r1@6
  int v31; // [sp+8h] [bp-58h]@1
  int v32; // [sp+Ch] [bp-54h]@1
  int v33; // [sp+10h] [bp-50h]@1
  int v34; // [sp+14h] [bp-4Ch]@1
  int v35; // [sp+18h] [bp-48h]@1
  int v36; // [sp+1Ch] [bp-44h]@1
  int v37; // [sp+20h] [bp-40h]@1
  int v38; // [sp+24h] [bp-3Ch]@1

  _R8 = *(_DWORD *)a2;
  _R4 = a1;
  v37 = *(_DWORD *)a2;
  _R9 = *(_DWORD *)(a2 + 4);
  v38 = *(_DWORD *)(a2 + 4);
  _R10 = *(_DWORD *)a3;
  v35 = *(_DWORD *)a3;
  _R5 = *(_DWORD *)(a3 + 4);
  v36 = *(_DWORD *)(a3 + 4);
  _R6 = *(_DWORD *)a4;
  v33 = *(_DWORD *)a4;
  _R7 = *(_DWORD *)(a4 + 4);
  v34 = *(_DWORD *)(a4 + 4);
  v31 = *(_DWORD *)a5;
  v32 = *(_DWORD *)(a5 + 4);
  __asm { VMOV            S16, R1 }
  v17 = *(_BYTE *)(a1 + 140);
  __asm { VMOV            S18, R2 }
  if ( *(_BYTE *)(_R4 + 156) & 1 )
  {
    LODWORD(v19) = v17 - 1;
    if ( (unsigned int)(v17 - 1) < 2 )
    {
      __asm
      {
        VLDR            S0, [R4,#0x98]
        VMUL.F32        S0, S0, S16
        VMOV            R0, S0
      }
      _R0 = mce::Math::floor(_R0, v19);
      __asm { VMOV            S0, R0 }
      _R2 = 0;
        VCVT.F32.S32    S0, S0
        VDIV.F32        S0, S0, S16
        VMOV            R1, S0
      goto LABEL_16;
    }
    LODWORD(v20) = v17 - 3;
    if ( (unsigned int)(v17 - 3) < 2 )
        VMUL.F32        S0, S0, S18
      _R0 = mce::Math::floor(_R0, v20);
        VMOV            S0, R0
        VDIV.F32        S0, S0, S18
        VMOV            R2, S0
      goto LABEL_8;
    if ( v17 == 5 )
        VCVT.F32.S32    S20, S0
      _R0 = mce::Math::floor(_R1, *(float *)&_R1);
        VDIV.F32        S2, S20, S16
        VMOV            R1, S2
  }
  else
      _R1 = *(_DWORD *)(_R4 + 152);
      _R2 = *(_DWORD *)(_R4 + 152);
LABEL_8:
      _R1 = 0;
  _R1 = 0;
  _R2 = 0;
LABEL_16:
  __asm
    VMOV            S6, R7
    VMOV            S8, R8
    VMOV            S4, R9
    VMOV            S2, R10
    VMOV            S0, R5
    VMOV            S10, R6
  switch ( *(_BYTE *)(_R4 + 140) )
    case 1:
    case 3:
        VMOV            S4, R1  ; jumptable 00C452F8 cases 1,3
        VMOV            S6, R2
        VMUL.F32        S8, S2, S4
        VMUL.F32        S10, S0, S6
        VMUL.F32        S4, S16, S4
        VMUL.F32        S6, S18, S6
        VSUB.F32        S2, S2, S8
        VSUB.F32        S0, S0, S10
        VSUB.F32        S4, S16, S4
        VSUB.F32        S6, S18, S6
        VSTR            S2, [SP,#0x60+var_48]
        VSTR            S0, [SP,#0x60+var_44]
        VSTR            S4, [SP,#0x60+var_58]
        VSTR            S6, [SP,#0x60+var_54]
      break;
    case 2:
    case 4:
        VMOV            S12, R1 ; jumptable 00C452F8 cases 2,4
        VMOV            S14, R2
        VMUL.F32        S1, S2, S12
        VMUL.F32        S3, S0, S14
        VMUL.F32        S12, S16, S12
        VMUL.F32        S14, S18, S14
        VADD.F32        S8, S8, S1
        VADD.F32        S4, S4, S3
        VADD.F32        S10, S10, S12
        VADD.F32        S6, S6, S14
        VSUB.F32        S2, S2, S1
        VSUB.F32        S0, S0, S3
        VSUB.F32        S12, S16, S12
        VSUB.F32        S14, S18, S14
      goto LABEL_20;
    case 5:
        VMOV.F32        S12, #0.5; jumptable 00C452F8 case 5
        VMOV            S14, R1
        VMOV            S1, R2
        VMUL.F32        S9, S2, S14
        VMUL.F32        S11, S0, S1
        VMUL.F32        S3, S14, S12
        VMUL.F32        S12, S1, S12
        VMUL.F32        S14, S16, S14
        VMUL.F32        S1, S18, S1
        VMUL.F32        S5, S3, S2
        VMUL.F32        S7, S12, S0
        VMUL.F32        S3, S3, S16
        VMUL.F32        S12, S12, S18
        VSUB.F32        S2, S2, S9
        VSUB.F32        S0, S0, S11
        VADD.F32        S8, S8, S5
        VADD.F32        S4, S4, S7
        VADD.F32        S10, S10, S3
        VADD.F32        S6, S6, S12
        VSUB.F32        S12, S16, S14
        VSUB.F32        S14, S18, S1
LABEL_20:
        VSTR            S8, [SP,#0x60+var_40]
        VSTR            S4, [SP,#0x60+var_3C]
        VSTR            S10, [SP,#0x60+var_50]
        VSTR            S6, [SP,#0x60+var_4C]
        VSTR            S12, [SP,#0x60+var_58]
        VSTR            S14, [SP,#0x60+var_54]
    default:
  if ( !*(_DWORD *)(a6 + 8) )
    sub_DA7654();
  return (*(int (__cdecl **)(int))(a6 + 12))(a6);
}


char *__fastcall SpriteComponent::getMaterialName(SpriteComponent *this)
{
  char *v1; // r1@1

  v1 = (char *)this + 84;
  if ( *((_BYTE *)this + 156) & 0x40 )
    v1 = (char *)this + 88;
  return v1;
}


int __fastcall SpriteComponent::_drawClipped(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  _DWORD *v10; // r0@1
  int result; // r0@1
  _DWORD *v12; // [sp+Ch] [bp-24h]@1
  int (*v13)(void); // [sp+14h] [bp-1Ch]@1
  int (__fastcall *v14)(__int64 **, int, int, int, int); // [sp+18h] [bp-18h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = operator new(8u);
  *v10 = v6;
  v10[1] = v9;
  v12 = v10;
  v13 = (int (*)(void))sub_C457C8;
  v14 = sub_C4577E;
  result = SpriteComponent::_drawClipped(v6, v8, v7, a5, a6, (int)&v12);
  if ( v13 )
    result = v13();
  return result;
}


char *__fastcall SpriteComponent::getNineSliceSize(SpriteComponent *this)
{
  return (char *)this + 124;
}


int __fastcall SpriteComponent::setKeepRatio(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = *(_WORD *)(result + 156) & 0xFFEF | 16 * a2;
  return result;
}


int __fastcall SpriteComponent::setUVSize(int result, int a2)
{
  *(_DWORD *)(result + 100) = *(_DWORD *)a2;
  *(_DWORD *)(result + 104) = *(_DWORD *)(a2 + 4);
  return result;
}


char *__fastcall SpriteComponent::getUV(SpriteComponent *this)
{
  return (char *)this + 92;
}


int __fastcall SpriteComponent::setUV(int result, int a2)
{
  *(_DWORD *)(result + 92) = *(_DWORD *)a2;
  *(_DWORD *)(result + 96) = *(_DWORD *)(a2 + 4);
  return result;
}


int __fastcall SpriteComponent::setNineSliceSize(int result, const ui::SliceSize *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  bool v7; // zf@1
  int v8; // r2@5
  bool v9; // zf@5

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 124) = v2;
  *(_DWORD *)(result + 128) = v3;
  *(_DWORD *)(result + 132) = v4;
  *(_DWORD *)(result + 136) = v5;
  v6 = *(_DWORD *)(result + 124);
  v7 = (v6 & 0x7FFFFFFF) == 0;
  if ( !(v6 & 0x7FFFFFFF) )
    v7 = (*(_DWORD *)(result + 128) & 0x7FFFFFFF) == 0;
  if ( !v7 )
    goto LABEL_11;
  v8 = *(_DWORD *)(result + 132);
  v9 = (v8 & 0x7FFFFFFF) == 0;
  if ( !(v8 & 0x7FFFFFFF) )
    v9 = (*(_DWORD *)(result + 136) & 0x7FFFFFFF) == 0;
  if ( !v9 )
LABEL_11:
    *(_WORD *)(result + 156) |= 4u;
  return result;
}


void __fastcall SpriteComponent::~SpriteComponent(SpriteComponent *this)
{
  SpriteComponent::~SpriteComponent(this);
}


char *__fastcall SpriteComponent::_debugPixelSizeCheck(SpriteComponent *this)
{
  char *result; // r0@1
  UIControl *v3; // r0@2
  __int16 v8; // r5@2
  UIControl *v12; // r0@6
  UIControl *v13; // r0@9

  _R4 = this;
  result = (char *)(*((_WORD *)this + 78) & 0x84);
  if ( result == (char *)128 )
  {
    v3 = (UIControl *)UIComponent::getOwner(_R4);
    result = UIControl::getSize(v3);
    __asm
    {
      VLDR            S0, [R4,#0x64]
      VLDR            S4, [R0]
      VLDR            S2, [R4,#0x68]
      VLDR            S6, [R0,#4]
      VDIV.F32        S18, S4, S0
    }
    v8 = *((_WORD *)_R4 + 78);
    __asm { VDIV.F32        S16, S6, S2 }
    if ( !_ZF )
      __asm { VMOV            R0, S18 }
      _R0 = roundf(_R0);
      __asm
      {
        VMOV            S0, R0
        VLDR            S20, =1.1921e-7
        VCVTR.S32.F32   S0, S0
        VCVT.F32.S32    S0, S0
        VSUB.F32        S0, S18, S0
        VABS.F32        S0, S0
        VCMPE.F32       S0, S20
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        goto LABEL_12;
      __asm { VMOV            R0, S16 }
      result = (char *)roundf(_R0);
        VSUB.F32        S0, S16, S0
LABEL_12:
        v12 = (UIControl *)UIComponent::getOwner(_R4);
        UIControl::getName(v12);
        result = (char *)*((_WORD *)_R4 + 78);
        LOBYTE(v8) = (unsigned __int8)result & 0x7F;
        *((_WORD *)_R4 + 78) = (unsigned __int16)result & 0xFF7F;
    if ( v8 & 0x10 )
        VSUB.F32        S0, S18, S16
        VLDR            S2, =1.1921e-7
        VCMPE.F32       S0, S2
        v13 = (UIControl *)UIComponent::getOwner(_R4);
        UIControl::getName(v13);
        result = (char *)(*((_WORD *)_R4 + 78) & 0xFF7F);
        *((_WORD *)_R4 + 78) = (_WORD)result;
  }
  return result;
}


int __fastcall SpriteComponent::setFilled(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = *(_WORD *)(result + 156) & 0xFFDF | 32 * a2;
  return result;
}


SpriteComponent *__fastcall SpriteComponent::~SpriteComponent(SpriteComponent *this)
{
  SpriteComponent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26D6E64;
  v2 = *((_DWORD *)this + 40);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 22);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 21);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  mce::TexturePtr::~TexturePtr((SpriteComponent *)((char *)v1 + 60));
  UITextureInfoPtr::~UITextureInfoPtr((SpriteComponent *)((char *)v1 + 40));
  UITextureInfoPtr::~UITextureInfoPtr((SpriteComponent *)((char *)v1 + 20));
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  RenderableComponent::~RenderableComponent(v1);
  return v1;
}


char *__fastcall SpriteComponent::getTiledScale(SpriteComponent *this)
{
  return (char *)this + 144;
}


char *__fastcall SpriteComponent::getClipDirection(SpriteComponent *this)
{
  return (char *)this + 140;
}


int __fastcall SpriteComponent::setClipDirection(int result, _BYTE *a2)
{
  *(_BYTE *)(result + 140) = *a2;
  return result;
}


int __fastcall SpriteComponent::_drawClipped(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  _DWORD *v10; // r0@1
  int result; // r0@1
  _DWORD *v12; // [sp+Ch] [bp-24h]@1
  int (*v13)(void); // [sp+14h] [bp-1Ch]@1
  char *(__fastcall *v14)(int, __int64 *, __int64 *, __int64 *, __int64 *); // [sp+18h] [bp-18h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = operator new(8u);
  *v10 = v6;
  v10[1] = a6;
  v12 = v10;
  v13 = (int (*)(void))sub_C4585C;
  v14 = sub_C45802;
  result = SpriteComponent::_drawClipped(v6, v9, v8, v7, a5, (int)&v12);
  if ( v13 )
    result = v13();
  return result;
}


char *__fastcall SpriteComponent::getColor(SpriteComponent *this)
{
  return (char *)this + 108;
}


RenderableComponent *__fastcall SpriteComponent::SpriteComponent(RenderableComponent *a1, UIControl *a2)
{
  RenderableComponent *v2; // r4@1
  int v3; // r6@1
  __int16 v4; // r1@1

  v2 = a1;
  RenderableComponent::RenderableComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6E64;
  *((_DWORD *)v2 + 3) = &unk_28898CC;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = &off_26D90B8;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 0;
  *((_QWORD *)v2 + 4) = (unsigned int)&unk_28898CC;
  *((_DWORD *)v2 + 10) = &off_26D90B8;
  v3 = (int)v2 + 40;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 12) = (unsigned int)&unk_28898CC;
  mce::TexturePtr::TexturePtr((RenderableComponent *)((char *)v2 + 60));
  sub_DA7364((void **)v2 + 21, "ui_textured_and_glcolor_sprite");
  sub_DA7364((void **)v2 + 22, "ui_grayscale");
  *((_DWORD *)v2 + 23) = 0;
  *((_DWORD *)v2 + 24) = 0;
  *((_DWORD *)v2 + 25) = 0;
  *((_DWORD *)v2 + 26) = 0;
  *((_DWORD *)v2 + 27) = 1065353216;
  *((_DWORD *)v2 + 28) = 1065353216;
  *((_DWORD *)v2 + 29) = 1065353216;
  *((_DWORD *)v2 + 30) = 1065353216;
  ui::SliceSize::SliceSize((RenderableComponent *)((char *)v2 + 124));
  *((_BYTE *)v2 + 140) = 0;
  *((_DWORD *)v2 + 36) = 1065353216;
  *((_DWORD *)v2 + 37) = 1065353216;
  *((_DWORD *)v2 + 38) = 0;
  v4 = *((_WORD *)v2 + 78);
  *((_DWORD *)v2 + 40) = &unk_28898CC;
  *((_WORD *)v2 + 78) = v4 & 0xFC00 | 0x19;
  return v2;
}


UITextureInfoPtr *__fastcall SpriteComponent::setResourceLocation(SpriteComponent *this, const ResourceLocation *a2)
{
  SpriteComponent *v2; // r4@1
  const ResourceLocation *v3; // r5@1
  UITextureInfoPtr *result; // r0@1
  _DWORD *v5; // r0@2
  _DWORD *v6; // r1@2
  size_t v7; // r2@2
  void **v8; // [sp+0h] [bp-40h]@4
  int v9; // [sp+4h] [bp-3Ch]@4
  int v10; // [sp+8h] [bp-38h]@4
  void *v11; // [sp+Ch] [bp-34h]@4
  int v12; // [sp+10h] [bp-30h]@4
  char v13; // [sp+18h] [bp-28h]@4

  v2 = this;
  v3 = a2;
  EntityInteraction::setInteractText((int *)this + 3, (int *)a2);
  *((_DWORD *)v2 + 4) = *((_DWORD *)v3 + 1);
  result = (UITextureInfoPtr *)mce::TexturePtr::operator bool((int)v2 + 60);
  if ( result == (UITextureInfoPtr *)1 )
  {
    v5 = (_DWORD *)*((_DWORD *)v2 + 3);
    v6 = (_DWORD *)*((_DWORD *)v2 + 18);
    v7 = *(v5 - 3);
    if ( v7 != *(v6 - 3) || (result = (UITextureInfoPtr *)memcmp(v5, v6, v7)) != 0 )
    {
      mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v13);
      mce::TexturePtr::operator=((SpriteComponent *)((char *)v2 + 60), (mce::TexturePtr *)&v13);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v13);
      v10 = 0;
      v8 = &off_26D90B8;
      v9 = 0;
      v11 = &unk_28898CC;
      v12 = 0;
      UITextureInfoPtr::operator=((SpriteComponent *)((char *)v2 + 20), (int)&v8);
      result = UITextureInfoPtr::~UITextureInfoPtr((UITextureInfoPtr *)&v8);
    }
  }
  return result;
}


unsigned int __fastcall SpriteComponent::getGrayscaleEnabled(SpriteComponent *this)
{
  return (*((_BYTE *)this + 156) & 0x40u) >> 6;
}


int __fastcall SpriteComponent::_drawClipped(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  _DWORD *v10; // r0@1
  int result; // r0@1
  _DWORD *v12; // [sp+Ch] [bp-24h]@1
  int (*v13)(void); // [sp+14h] [bp-1Ch]@1
  int (__fastcall *v14)(int, _QWORD *, __int64 *, __int64 *, __int64 *); // [sp+18h] [bp-18h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = operator new(8u);
  *v10 = v6;
  v10[1] = a6;
  v12 = v10;
  v13 = (int (*)(void))sub_C458C2;
  v14 = sub_C45896;
  result = SpriteComponent::_drawClipped(v6, v9, v8, v7, a5, (int)&v12);
  if ( v13 )
    result = v13();
  return result;
}


int __fastcall SpriteComponent::setForceReloadTexture(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = *(_WORD *)(result + 156) & 0xFEFF | (a2 << 8);
  return result;
}


int __fastcall SpriteComponent::setPixelPerfect(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = *(_WORD *)(result + 156) & 0xFFF7 | 8 * a2;
  return result;
}


void __fastcall SpriteComponent::render(int a1, int a2)
{
  int v3; // r9@1
  int v7; // r8@3
  mce::Texture *v8; // r0@4
  void (__fastcall *v9)(char *, int, int, int *); // r5@6
  void *v10; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  void (__fastcall *v13)(char *, int, int *, signed int); // r5@11
  signed int v14; // r3@11
  mce::Texture *v15; // r0@17
  signed int v16; // r1@19
  signed int v18; // r0@19
  BackwardsCompatTextureInfo *v20; // r0@25
  BackwardsCompatTextureInfo *v21; // r0@26
  BackwardsCompatTextureInfo *v22; // r0@27
  char *v23; // r0@27
  mce::Texture *v24; // r0@28
  signed int v28; // r1@30
  signed int v29; // r0@30
  BackwardsCompatTextureInfo *v30; // r0@35
  char *v31; // r0@35
  UITextureInfo *v32; // r0@37
  UITextureInfo *v33; // r0@38
  _DWORD *v34; // r0@38
  int *v35; // r1@38
  int *v36; // r2@38
  int *v37; // r3@38
  int v40; // r5@40
  UITextureInfo *v42; // r0@40
  char *v43; // r0@40
  UIControl *v44; // r0@40
  UIControl *v45; // r7@40
  UIControl *v46; // r0@40
  signed int v47; // r9@40
  int v48; // r1@40
  int v51; // r10@48
  signed int v53; // r0@48
  int v57; // r9@56
  int v61; // r0@56
  int v63; // r7@64
  UIControl *v64; // r0@67
  UIControl *v65; // r4@67
  UIControl *v66; // r0@67
  char *v67; // r0@67
  __int16 v68; // r0@68
  void (__fastcall *v69)(int, int, int *, int *); // r4@71
  UIControl *v70; // r0@71
  UIControl *v71; // r0@71
  UIControl *v72; // r0@71
  char *v73; // r0@71
  int v74; // r10@72
  int v75; // r0@72
  __int64 v76; // r2@72
  int v77; // r1@72
  int v78; // r10@84
  int v79; // r0@84
  __int64 v80; // r2@84
  int v81; // r1@84
  UIControl *v82; // r0@86
  UIControl *v83; // r4@86
  UIControl *v84; // r0@86
  char *v85; // r0@86
  __int64 v86; // r0@88
  int v87; // r7@88
  int v88; // r2@88
  _DWORD *v89; // r3@88
  int v90; // r12@89
  __int64 v91; // r0@91
  int v92; // r2@91
  int v93; // r3@91
  UIControl *v94; // r0@93
  UIControl *v95; // r7@93
  UIControl *v96; // r0@93
  __int64 v100; // r0@96
  int v101; // r2@96
  _DWORD *v102; // r3@96
  int v103; // r12@97
  UIControl *v104; // r0@102
  UIControl *v105; // r4@102
  UIControl *v106; // r0@102
  __int64 v109; // kr00_8@102
  void (__fastcall *v112)(int, int, int *, int *); // r7@106
  void (__fastcall *v113)(int, int, int *, int *); // r6@108
  int v114; // r2@108
  int v115; // r4@109
  int v116; // r4@110
  int v117; // r4@111
  __int64 v118; // kr08_8@118
  __int64 v119; // kr10_8@118
  int v120; // r4@118
  _DWORD *v121; // r1@118
  int v122; // r0@119
  int v123; // [sp+10h] [bp-508h]@46
  int v124; // [sp+18h] [bp-500h]@38
  int v125; // [sp+1Ch] [bp-4FCh]@38
  int v126; // [sp+20h] [bp-4F8h]@40
  int v127; // [sp+24h] [bp-4F4h]@40
  int v128; // [sp+28h] [bp-4F0h]@48
  int v129; // [sp+2Ch] [bp-4ECh]@29
  int v130; // [sp+30h] [bp-4E8h]@71
  int v131; // [sp+34h] [bp-4E4h]@71
  int v132; // [sp+38h] [bp-4E0h]@71
  int v133; // [sp+3Ch] [bp-4DCh]@71
  int v134; // [sp+40h] [bp-4D8h]@71
  int v135; // [sp+44h] [bp-4D4h]@71
  int v136; // [sp+48h] [bp-4D0h]@71
  int v137; // [sp+4Ch] [bp-4CCh]@71
  int v138; // [sp+50h] [bp-4C8h]@118
  int v139; // [sp+54h] [bp-4C4h]@118
  int v140; // [sp+58h] [bp-4C0h]@118
  int v141; // [sp+5Ch] [bp-4BCh]@118
  __int64 v142; // [sp+60h] [bp-4B8h]@118
  int v143; // [sp+70h] [bp-4A8h]@91
  __int64 v144; // [sp+78h] [bp-4A0h]@91
  int v145; // [sp+80h] [bp-498h]@91
  int v146; // [sp+90h] [bp-488h]@88
  int v147; // [sp+94h] [bp-484h]@88
  __int64 v148; // [sp+98h] [bp-480h]@88
  int v149; // [sp+A0h] [bp-478h]@88
  int v150; // [sp+A4h] [bp-474h]@88
  float v151; // [sp+B0h] [bp-468h]@87
  int v152; // [sp+B4h] [bp-464h]@72
  __int64 v153; // [sp+B8h] [bp-460h]@72
  int v154; // [sp+C4h] [bp-454h]@72
  int v155; // [sp+D0h] [bp-448h]@72
  int v156; // [sp+D4h] [bp-444h]@72
  __int64 v157; // [sp+D8h] [bp-440h]@72
  int v158; // [sp+E0h] [bp-438h]@72
  int v159; // [sp+F0h] [bp-428h]@99
  __int64 v160; // [sp+F8h] [bp-420h]@99
  int v161; // [sp+100h] [bp-418h]@99
  int v162; // [sp+110h] [bp-408h]@96
  int v163; // [sp+114h] [bp-404h]@96
  __int64 v164; // [sp+118h] [bp-400h]@96
  int v165; // [sp+120h] [bp-3F8h]@96
  int v166; // [sp+124h] [bp-3F4h]@96
  float v167; // [sp+130h] [bp-3E8h]@95
  int v168; // [sp+134h] [bp-3E4h]@84
  __int64 v169; // [sp+138h] [bp-3E0h]@84
  int v170; // [sp+144h] [bp-3D4h]@84
  int v171; // [sp+150h] [bp-3C8h]@84
  int v172; // [sp+154h] [bp-3C4h]@84
  __int64 v173; // [sp+158h] [bp-3C0h]@84
  int v174; // [sp+160h] [bp-3B8h]@84
  float v175; // [sp+170h] [bp-3A8h]@109
  int v176; // [sp+174h] [bp-3A4h]@109
  float v177; // [sp+178h] [bp-3A0h]@109
  int v178; // [sp+17Ch] [bp-39Ch]@109
  int v179; // [sp+180h] [bp-398h]@109
  int v180; // [sp+184h] [bp-394h]@109
  int v181; // [sp+188h] [bp-390h]@109
  int v182; // [sp+18Ch] [bp-38Ch]@109
  int v183; // [sp+190h] [bp-388h]@109
  int v184; // [sp+198h] [bp-380h]@109
  float v185; // [sp+1A0h] [bp-378h]@109
  int v186; // [sp+1A4h] [bp-374h]@109
  __int64 v187; // [sp+1A8h] [bp-370h]@109
  float v188; // [sp+1B0h] [bp-368h]@111
  int v189; // [sp+1B4h] [bp-364h]@111
  float v190; // [sp+1B8h] [bp-360h]@111
  int v191; // [sp+1BCh] [bp-35Ch]@111
  int v192; // [sp+1C0h] [bp-358h]@111
  int v193; // [sp+1C4h] [bp-354h]@111
  int v194; // [sp+1C8h] [bp-350h]@111
  int v195; // [sp+1CCh] [bp-34Ch]@111
  int v196; // [sp+1D0h] [bp-348h]@111
  __int64 v197; // [sp+1D8h] [bp-340h]@111
  float v198; // [sp+1F0h] [bp-328h]@110
  int v199; // [sp+1F4h] [bp-324h]@110
  float v200; // [sp+1F8h] [bp-320h]@110
  int v201; // [sp+1FCh] [bp-31Ch]@110
  int v202; // [sp+200h] [bp-318h]@110
  int v203; // [sp+204h] [bp-314h]@110
  int v204; // [sp+208h] [bp-310h]@110
  int v205; // [sp+20Ch] [bp-30Ch]@110
  int v206; // [sp+210h] [bp-308h]@110
  int v207; // [sp+214h] [bp-304h]@110
  __int64 v208; // [sp+218h] [bp-300h]@110
  int v209; // [sp+224h] [bp-2F4h]@110
  int v210; // [sp+230h] [bp-2E8h]@112
  int v211; // [sp+238h] [bp-2E0h]@112
  int v212; // [sp+240h] [bp-2D8h]@112
  int v213; // [sp+244h] [bp-2D4h]@112
  __int64 v214; // [sp+248h] [bp-2D0h]@112
  float v215; // [sp+250h] [bp-2C8h]@112
  int v216; // [sp+254h] [bp-2C4h]@112
  __int64 v217; // [sp+258h] [bp-2C0h]@112
  int v218; // [sp+270h] [bp-2A8h]@63
  int v219; // [sp+278h] [bp-2A0h]@63
  int v220; // [sp+280h] [bp-298h]@63
  int v221; // [sp+284h] [bp-294h]@63
  __int64 v222; // [sp+288h] [bp-290h]@63
  int v223; // [sp+290h] [bp-288h]@63
  int v224; // [sp+294h] [bp-284h]@63
  __int64 v225; // [sp+298h] [bp-280h]@63
  int v226; // [sp+2A0h] [bp-278h]@63
  int v227; // [sp+2B0h] [bp-268h]@64
  int v228; // [sp+2B8h] [bp-260h]@64
  int v229; // [sp+2C0h] [bp-258h]@64
  int v230; // [sp+2C4h] [bp-254h]@64
  int v231; // [sp+2C8h] [bp-250h]@64
  int v232; // [sp+2CCh] [bp-24Ch]@64
  float v233; // [sp+2D0h] [bp-248h]@64
  int v234; // [sp+2D4h] [bp-244h]@64
  float v235; // [sp+2D8h] [bp-240h]@64
  int v236; // [sp+2DCh] [bp-23Ch]@64
  int v237; // [sp+2E0h] [bp-238h]@64
  int v238; // [sp+2E8h] [bp-230h]@64
  int v239; // [sp+2ECh] [bp-22Ch]@64
  char v240; // [sp+2F0h] [bp-228h]@56
  int v241; // [sp+2F4h] [bp-224h]@58
  int v242; // [sp+2F8h] [bp-220h]@58
  int v243; // [sp+2FCh] [bp-21Ch]@58
  int v244; // [sp+300h] [bp-218h]@58
  int v245; // [sp+304h] [bp-214h]@58
  int v246; // [sp+314h] [bp-204h]@58
  int v247; // [sp+318h] [bp-200h]@58
  int v248; // [sp+31Ch] [bp-1FCh]@58
  int v249; // [sp+324h] [bp-1F4h]@58
  int v250; // [sp+330h] [bp-1E8h]@58
  int v251; // [sp+338h] [bp-1E0h]@58
  int v252; // [sp+33Ch] [bp-1DCh]@58
  int v253; // [sp+340h] [bp-1D8h]@58
  int v254; // [sp+358h] [bp-1C0h]@58
  int v255; // [sp+35Ch] [bp-1BCh]@58
  void *v256; // [sp+370h] [bp-1A8h]@63
  void *v257; // [sp+37Ch] [bp-19Ch]@63
  _DWORD *v258; // [sp+380h] [bp-198h]@88
  _DWORD *v259; // [sp+384h] [bp-194h]@88
  void *v260; // [sp+388h] [bp-190h]@64
  int v261; // [sp+38Ch] [bp-18Ch]@72
  void *v262; // [sp+394h] [bp-184h]@63
  int v263; // [sp+398h] [bp-180h]@91
  int v264; // [sp+39Ch] [bp-17Ch]@91
  void *ptr; // [sp+3A0h] [bp-178h]@115
  _DWORD *v266; // [sp+3A4h] [bp-174h]@118
  _DWORD *v267; // [sp+3A8h] [bp-170h]@118
  float v268; // [sp+3ACh] [bp-16Ch]@115
  char v269; // [sp+3B0h] [bp-168h]@40
  char v270; // [sp+3B4h] [bp-164h]@56
  char v271; // [sp+3BCh] [bp-15Ch]@64
  char v272; // [sp+3C4h] [bp-154h]@63
  char v273; // [sp+3CCh] [bp-14Ch]@63
  __int64 v274; // [sp+3D4h] [bp-144h]@63
  int v275; // [sp+3DCh] [bp-13Ch]@48
  int v276; // [sp+3E4h] [bp-134h]@56
  int v277; // [sp+3ECh] [bp-12Ch]@115
  int v278; // [sp+3F0h] [bp-128h]@118
  int v279; // [sp+3F4h] [bp-124h]@48
  int v280; // [sp+3FCh] [bp-11Ch]@48
  __int64 v281; // [sp+404h] [bp-114h]@48
  __int64 v282; // [sp+40Ch] [bp-10Ch]@48
  int v283; // [sp+414h] [bp-104h]@63
  int v284; // [sp+418h] [bp-100h]@63
  int v285; // [sp+41Ch] [bp-FCh]@40
  int v286; // [sp+424h] [bp-F4h]@48
  int v287; // [sp+42Ch] [bp-ECh]@29
  int v288; // [sp+430h] [bp-E8h]@29
  int v289; // [sp+434h] [bp-E4h]@19
  int v290; // [sp+438h] [bp-E0h]@19
  char v291; // [sp+43Ch] [bp-DCh]@15
  int v292; // [sp+450h] [bp-C8h]@11
  int v293; // [sp+454h] [bp-C4h]@11
  char v294; // [sp+458h] [bp-C0h]@13
  int v295; // [sp+470h] [bp-A8h]@6
  int v296; // [sp+474h] [bp-A4h]@6
  char v297; // [sp+478h] [bp-A0h]@6
  int v298; // [sp+498h] [bp-80h]@106
  int v299; // [sp+49Ch] [bp-7Ch]@106
  int v300; // [sp+4A0h] [bp-78h]@106
  int v301; // [sp+4A4h] [bp-74h]@106
  int v302; // [sp+4A8h] [bp-70h]@106
  int v303; // [sp+4ACh] [bp-6Ch]@106

  _R6 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 140) )
  {
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [R6,#0x98]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      return;
  }
  v7 = a1 + 60;
  if ( mce::TexturePtr::operator bool(a1 + 60) != 1
    || (v8 = (mce::Texture *)mce::TexturePtr::operator->(_R6 + 60), !mce::Texture::isCreated(v8)) )
    if ( *(_DWORD *)(*(_DWORD *)(_R6 + 160) - 12) )
      v9 = *(void (__fastcall **)(char *, int, int, int *))(*(_DWORD *)v3 + 104);
      sub_DA73B4(&v295, (int *)(_R6 + 12));
      v296 = *(_DWORD *)(_R6 + 16);
      *(_WORD *)(_R6 + 156);
      v9(&v297, v3, _R6 + 160, &v295);
      mce::TexturePtr::operator=((mce::TexturePtr *)(_R6 + 60), (mce::TexturePtr *)&v297);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v297);
      v10 = (void *)(v295 - 12);
      if ( (int *)(v295 - 12) == &dword_28898C0 )
        goto LABEL_14;
      v11 = (unsigned int *)(v295 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        goto LABEL_79;
      }
      goto LABEL_78;
    v13 = *(void (__fastcall **)(char *, int, int *, signed int))(*(_DWORD *)v3 + 100);
    sub_DA73B4(&v292, (int *)(_R6 + 12));
    v14 = 0;
    v293 = *(_DWORD *)(_R6 + 16);
    if ( (*(_WORD *)(_R6 + 156) & 0x300) == 256 )
      v14 = 1;
    v13(&v294, v3, &v292, v14);
    mce::TexturePtr::operator=((mce::TexturePtr *)(_R6 + 60), (mce::TexturePtr *)&v294);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v294);
    v10 = (void *)(v292 - 12);
    if ( (int *)(v292 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v292 - 4);
LABEL_79:
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9(v10);
LABEL_78:
      v12 = (*v11)--;
      goto LABEL_79;
LABEL_14:
  if ( !UITextureInfoPtr::operator bool(_R6 + 20) )
    (*(void (__fastcall **)(char *, int, int, unsigned int))(*(_DWORD *)v3 + 108))(
      &v291,
      v3,
      _R6 + 12,
      (*(_WORD *)(_R6 + 156) & 0x100u) >> 8);
    UITextureInfoPtr::operator=((UITextureInfoPtr *)(_R6 + 20), (int)&v291);
    UITextureInfoPtr::~UITextureInfoPtr((UITextureInfoPtr *)&v291);
  if ( mce::TexturePtr::operator bool(_R6 + 60) == 1 )
    v15 = (mce::Texture *)mce::TexturePtr::operator->(_R6 + 60);
    if ( mce::Texture::isCreated(v15) == 1 && UITextureInfoPtr::operator bool(_R6 + 20) == 1 )
      v16 = 0;
      *(_WORD *)(_R6 + 156) |= 0x200u;
      _R11 = *(_DWORD *)(_R6 + 100);
      v18 = 0;
      v289 = _R11;
      _R2 = *(_DWORD *)(_R6 + 104);
      __asm { VMOV            S18, R11 }
      v290 = _R2;
      __asm
        VCMPE.F32       S18, #0.0
        VMRS            APSR_nzcv, FPSCR
        VMOV            S16, R2
        VCMPE.F32       S16, #0.0
      if ( _ZF )
        v16 = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
        v18 = 1;
      if ( v18 & v16 )
        if ( mce::TexturePtr::hasBackwardsCompatInfo((mce::TexturePtr *)(_R6 + 60)) == 1
          && (v20 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)(_R6 + 60)),
              *(_DWORD *)BackwardsCompatTextureInfo::getUVSize(v20) & 0x7FFFFFFF)
          && (v21 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)(_R6 + 60)),
              *((_DWORD *)BackwardsCompatTextureInfo::getUVSize(v21) + 1) & 0x7FFFFFFF) )
        {
          v22 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)(_R6 + 60));
          v23 = BackwardsCompatTextureInfo::getUVSize(v22);
          _R11 = *(_DWORD *)v23;
          v289 = _R11;
          _R2 = *((_DWORD *)v23 + 1);
          __asm { VMOV            S18, R11 }
          v290 = _R2;
          __asm { VMOV            S16, R2 }
        }
        else
          v24 = (mce::Texture *)mce::TexturePtr::operator->(_R6 + 60);
          _R0 = mce::Texture::getDescription(v24);
          __asm
          {
            VLDR            S0, [R0]
            VCVT.F32.U32    S18, S0
            VSTR            S18, [R10,#0x84]
            VMOV            R11, S18
            VLDR            S0, [R0,#4]
            VCVT.F32.U32    S16, S0
            VMOV            R2, S16
            VSTR            S16, [R10,#0x88]
          }
      _R4 = *(_DWORD *)(_R6 + 92);
      v287 = *(_DWORD *)(_R6 + 92);
      _R5 = *(_DWORD *)(_R6 + 96);
      v129 = _R2;
      v288 = *(_DWORD *)(_R6 + 96);
      if ( mce::TexturePtr::hasBackwardsCompatInfo((mce::TexturePtr *)(_R6 + 60)) == 1 )
        __asm { VMOV            S0, R5 }
        v28 = 0;
        __asm { VMOV            S2, R4 }
        v29 = 0;
        __asm
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
          VCMPE.F32       S2, #0.0
        if ( _ZF )
          v28 = 1;
        __asm { VMRS            APSR_nzcv, FPSCR }
          v29 = 1;
        if ( v29 & v28 )
          v30 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)(_R6 + 60));
          v31 = BackwardsCompatTextureInfo::getUV(v30);
          v287 = *(_DWORD *)v31;
          v288 = *((_DWORD *)v31 + 1);
      if ( *(_BYTE *)(_R6 + 156) & 4 )
        v35 = (int *)(_R6 + 136);
        v124 = v3;
        v125 = _R11;
        v36 = (int *)(_R6 + 132);
        v37 = (int *)(_R6 + 128);
        v34 = (_DWORD *)(_R6 + 124);
LABEL_40:
        _R11 = *v34;
        _R10 = *v37;
        v40 = *v36;
        _R8 = *v35;
        v42 = (UITextureInfo *)UITextureInfoPtr::getUITextureInfo((UITextureInfoPtr *)(_R6 + 20));
        v43 = UITextureInfo::getBaseUVSize(v42);
        v126 = *((_DWORD *)v43 + 1);
        v127 = *(_DWORD *)v43;
        v44 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
        v45 = UIControl::getPosition(v44);
        v46 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
        LODWORD(_R4) = UIControl::getSize(v46);
          VLDR            S16, [R4]
          VLDR            S18, [R4,#4]
        RectangleArea::RectangleArea((RectangleArea *)&v285);
        __asm { VCMPE.F32       S18, #0.0 }
        v47 = 0;
          VCMPE.F32       S16, #0.0
        v48 = HIDWORD(_R4);
        HIDWORD(_R4) = &v269;
          _R8 = 0;
          VCMPE.F32       S18, #0.0
          VMOV            S26, R8
          v48 = 0;
          _R10 = 0;
        v123 = _R10;
          VMOV            S18, R10
          VNEG.F32        S8, S18
          VSUB.F32        S8, S8, S26
          _R11 = 0;
        v285 = *(_DWORD *)v45;
          VMOV            S16, R11
          VLDR            S0, [R4]
          VMOV            S2, R0
        v128 = v285;
          VNEG.F32        S6, S16
          VADD.F32        S20, S0, S2
          VADD.F32        S2, S2, S16
          VSTR            S20, [R5,#0x70]
        _R7 = *((_DWORD *)v45 + 1);
        v286 = _R7;
        __asm { VLDR            S4, [R4,#4] }
        LODWORD(_R4) = v48;
          VMOV            S22, R4
          VSTR            S2, [R5,#0x64]
          VMOV            S10, R7
        v279 = v48;
          VSUB.F32        S6, S6, S22
          VADD.F32        S25, S4, S10
          VADD.F32        S10, S10, S18
          VADD.F32        S4, S8, S4
          VADD.F32        S0, S6, S0
          VSTR            S25, [R5,#0x78]
          VSTR            S10, [R5,#0x68]
          VSTR            S4, [R5,#0x48]
          VSTR            S0, [R5,#0x5C]
        HIDWORD(v282) = _R10;
        v51 = _R11;
        __asm { VSTR            S0, [R5,#0x54] }
        v280 = _R11;
        __asm { VSTR            S0, [R5,#0x3C] }
        HIDWORD(v281) = _R8;
          VSTR            S4, [R5,#0x50]
          VSTR            S4, [R5,#0x40]
        RectangleArea::RectangleArea((RectangleArea *)&v275);
        _R1 = v126;
        v53 = 0;
        _R2 = v127;
          VMOV            S0, R1
          VMOV            S2, R2
          v53 = 1;
          v47 = 1;
        _ZF = (v53 | v47) == 0;
        _R0 = v125;
        if ( !_ZF )
          _R2 = v125;
        __asm { VMOV            S2, R0 }
        _R0 = v129;
          VMOV            S0, R2
          VDIV.F32        S0, S2, S0
          _R1 = v129;
        v57 = v287;
        _R11 = v288;
        v275 = v287;
        __asm { VMOV            S4, R0 }
        _R0 = &v270;
          VMOV            S6, R1
          VMUL.F32        S17, S22, S0
          VDIV.F32        S2, S4, S6
          VNMUL.F32       S8, S16, S0
          VLDR            S4, [R5,#0x84]
          VMUL.F32        S24, S26, S2
          VNMUL.F32       S10, S18, S2
          VMUL.F32        S19, S16, S0
          VMUL.F32        S30, S18, S2
          VLDR            S2, [R5,#0x88]
          VMOV            S6, R9
          VSUB.F32        S0, S8, S17
          VMOV            S8, R11
          VSUB.F32        S10, S10, S24
          VADD.F32        S27, S4, S6
          VADD.F32        S23, S6, S19
          VADD.F32        S29, S2, S8
          VADD.F32        S21, S8, S30
          VADD.F32        S16, S0, S4
          VADD.F32        S18, S10, S2
          VSTR            S27, [R5,#0x30]
        v276 = v288;
          VSTR            S23, [R5,#0x24]
          VSTR            S29, [R5,#0x38]
          VSTR            S16, [R5,#0x1C]
          VSTR            S16, [R5,#0x14]
          VSTR            S21, [R5,#0x28]
          VSTR            S30, [R5,#0x20]
          VSTR            S24, [R5,#0x18]
          VSTR            S18, [R5,#0x10]
          VSTMIA          R0, {S17-S19}
          VSTR            S16, [SP,#0x518+var_16C]
          VSTR            S18, [R5]
        HIDWORD(_R4) = _R7;
        _aeabi_memclr8(&v240, 188);
        __asm { VSUB.F32        S28, S20, S22 }
        v61 = *(_BYTE *)(_R6 + 140);
          VSUB.F32        S22, S25, S26
          VSUB.F32        S26, S27, S17
          VSUB.F32        S20, S29, S24
        if ( _ZF || !(*(_DWORD *)(_R6 + 152) & 0x7FFFFFFF) )
          *(_DWORD *)&v240 = v128;
          v241 = _R7;
          v242 = v51;
          v243 = v123;
          v244 = v57;
          v245 = _R11;
            VSTR            S19, [SP,#0x518+var_210]
            VSTR            S30, [SP,#0x518+var_20C]
          v250 = v128;
          __asm { VSTR            S22, [SP,#0x518+var_1E4] }
          v251 = v51;
          v252 = _R8;
          v253 = v57;
            VSTR            S20, [SP,#0x518+var_1D4]
            VSTR            S19, [SP,#0x518+var_1D0]
            VSTR            S24, [SP,#0x518+var_1CC]
            VSTR            S28, [SP,#0x518+var_208]
          v246 = _R7;
          v247 = _R4;
          v248 = v123;
          __asm { VSTR            S26, [SP,#0x518+var_1F8] }
          v249 = _R11;
            VSTR            S17, [SP,#0x518+var_1F0]
            VSTR            S30, [SP,#0x518+var_1EC]
            VSTR            S28, [SP,#0x518+var_1C8]
            VSTR            S22, [SP,#0x518+var_1C4]
          v254 = _R4;
          v255 = _R8;
            VSTR            S26, [SP,#0x518+var_1B8]
            VSTR            S20, [SP,#0x518+var_1B4]
            VSTR            S17, [SP,#0x518+var_1B0]
            VSTR            S24, [SP,#0x518+var_1AC]
        if ( *(_BYTE *)(_R6 + 156) & 2 )
          LODWORD(_R4) = v284;
          v238 = v128;
          v237 = v57;
          v239 = v284;
          __asm { VSTR            S21, [SP,#0x518+var_234] }
          SpriteComponent::_drawTiled(_R6, (int)&v238, (int)&v280, (int)&v237, (int)&v271, (int)&v256);
            VSTR            S28, [SP,#0x518+var_240]
            VSTR            S26, [SP,#0x518+var_248]
          v236 = _R4;
          v234 = HIDWORD(v274);
          SpriteComponent::_drawTiled(_R6, (int)&v235, (int)&v279, (int)&v233, (int)&v270, (int)&v260);
          v63 = v283;
          v231 = v283;
          v232 = HIDWORD(_R4);
          v229 = v274;
          v230 = _R11;
          SpriteComponent::_drawTiled(_R6, (int)&v231, (int)&v282, (int)&v229, (int)&v273, (int)&v257);
          v228 = v63;
          v227 = v274;
            VSTR            S22, [SP,#0x518+var_25C]
            VSTR            S20, [SP,#0x518+var_264]
          SpriteComponent::_drawTiled(_R6, (int)&v228, (int)&v281, (int)&v227, (int)&v272, (int)&v262);
          goto def_C4414C;
        if ( v61 )
            VLDR            S0, [R6,#0x98]
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            switch ( v61 )
            {
              case 1:
                v223 = v128;
                v224 = v284;
                v225 = *(_QWORD *)&v280;
                v226 = v57;
                __asm
                {
                  VSTR            S21, [SP,#0x518+var_274]
                  VSTR            S19, [SP,#0x518+var_270]
                  VSTR            S18, [SP,#0x518+var_26C]
                }
                std::vector<ImageInfo,std::allocator<ImageInfo>>::_M_emplace_back_aux<ImageInfo>(
                  (unsigned __int64 *)&v256,
                  (int)&v223);
                *(_DWORD *)&v240 = v128;
                v241 = _R7;
                v242 = v51;
                v243 = v123;
                v244 = v57;
                v245 = _R11;
                  VSTR            S19, [SP,#0x518+var_210]
                  VSTR            S30, [SP,#0x518+var_20C]
                v250 = v128;
                __asm { VSTR            S22, [SP,#0x518+var_1E4] }
                v251 = v51;
                v252 = _R8;
                LODWORD(_R4) = v283;
                v253 = v57;
                  VSTR            S20, [SP,#0x518+var_1D4]
                  VSTR            S19, [SP,#0x518+var_1D0]
                  VSTR            S24, [SP,#0x518+var_1CC]
                v222 = _R4;
                v220 = v274;
                v221 = _R11;
                SpriteComponent::_drawClipped(_R6, (int)&v222, (int)&v282, (int)&v220, (int)&v273, (int)&v257);
                v219 = _R4;
                v218 = v274;
                  VSTR            S22, [SP,#0x518+var_29C]
                  VSTR            S20, [SP,#0x518+var_2A4]
                SpriteComponent::_drawClipped(_R6, (int)&v219, (int)&v281, (int)&v218, (int)&v272, (int)&v262);
                break;
              case 5:
                v187 = _R4;
                __asm { VSTR            S23, [SP,#0x518+var_378] }
                v186 = _R11;
                SpriteComponent::_drawClipped(_R6, (int)&v187, (int)&v282, (int)&v185, (int)&v273, (int)&v257);
                v184 = _R4;
                v183 = v274;
                  VSTR            S22, [SP,#0x518+var_37C]
                  VSTR            S20, [SP,#0x518+var_384]
                SpriteComponent::_drawClipped(_R6, (int)&v184, (int)&v281, (int)&v183, (int)&v272, (int)&v262);
                v115 = v284;
                v181 = v128;
                v179 = v57;
                v182 = v284;
                v180 = HIDWORD(v274);
                SpriteComponent::_drawClipped(_R6, (int)&v181, (int)&v280, (int)&v179, (int)&v271, (int)&v256);
                  VSTR            S28, [SP,#0x518+var_3A0]
                  VSTR            S26, [SP,#0x518+var_3A8]
                v178 = v115;
                v176 = HIDWORD(v274);
                SpriteComponent::_drawClipped(_R6, (int)&v177, (int)&v279, (int)&v175, (int)&v270, (int)&v260);
              case 3:
                v206 = v283;
                v207 = _R7;
                v208 = v282;
                __asm { VSTR            S23, [SP,#0x518+var_2F8] }
                v209 = _R11;
                  VSTR            S16, [SP,#0x518+var_2F0]
                  VSTR            S30, [SP,#0x518+var_2EC]
                  (unsigned __int64 *)&v257,
                  (int)&v206);
                  VSTR            S28, [SP,#0x518+var_208]
                v246 = _R7;
                v247 = _R4;
                v116 = v284;
                v248 = v123;
                __asm { VSTR            S26, [SP,#0x518+var_1F8] }
                v249 = _R11;
                __asm { VSTR            S17, [SP,#0x518+var_1F0] }
                v204 = v128;
                __asm { VSTR            S30, [SP,#0x518+var_1EC] }
                v205 = v284;
                v202 = v57;
                v203 = HIDWORD(v274);
                SpriteComponent::_drawClipped(_R6, (int)&v204, (int)&v280, (int)&v202, (int)&v271, (int)&v256);
                  VSTR            S28, [SP,#0x518+var_320]
                  VSTR            S26, [SP,#0x518+var_328]
                v201 = v116;
                v199 = HIDWORD(v274);
                SpriteComponent::_drawClipped(_R6, (int)&v200, (int)&v279, (int)&v198, (int)&v270, (int)&v260);
              case 4:
                v196 = v283;
                __asm { VSTR            S22, [SP,#0x518+var_344] }
                v197 = v281;
                  VSTR            S23, [SP,#0x518+var_338]
                  VSTR            S20, [SP,#0x518+var_334]
                  VSTR            S16, [SP,#0x518+var_330]
                  VSTR            S24, [SP,#0x518+var_32C]
                  (unsigned __int64 *)&v262,
                  (int)&v196);
                  VSTR            S28, [SP,#0x518+var_1C8]
                  VSTR            S22, [SP,#0x518+var_1C4]
                v254 = _R4;
                v255 = _R8;
                v117 = v284;
                  VSTR            S26, [SP,#0x518+var_1B8]
                  VSTR            S20, [SP,#0x518+var_1B4]
                  VSTR            S17, [SP,#0x518+var_1B0]
                v194 = v128;
                __asm { VSTR            S24, [SP,#0x518+var_1AC] }
                v195 = v284;
                v192 = v57;
                v193 = HIDWORD(v274);
                SpriteComponent::_drawClipped(_R6, (int)&v194, (int)&v280, (int)&v192, (int)&v271, (int)&v256);
                  VSTR            S28, [SP,#0x518+var_360]
                  VSTR            S26, [SP,#0x518+var_368]
                v191 = v117;
                v189 = HIDWORD(v274);
                SpriteComponent::_drawClipped(_R6, (int)&v190, (int)&v279, (int)&v188, (int)&v270, (int)&v260);
              case 2:
                __asm { VSTR            S28, [SP,#0x518+var_2C8] }
                v216 = v284;
                v217 = *(_QWORD *)&v279;
                  VSTR            S26, [SP,#0x518+var_2B8]
                  VSTR            S21, [SP,#0x518+var_2B4]
                  VSTR            S17, [SP,#0x518+var_2B0]
                  VSTR            S18, [SP,#0x518+var_2AC]
                  (unsigned __int64 *)&v260,
                  (int)&v215);
                __asm { VSTR            S28, [SP,#0x518+var_208] }
                  VSTR            S17, [SP,#0x518+var_1F0]
                  VSTR            S30, [SP,#0x518+var_1EC]
                  VSTR            S24, [SP,#0x518+var_1AC]
                v214 = _R4;
                v212 = v274;
                v213 = _R11;
                SpriteComponent::_drawClipped(_R6, (int)&v214, (int)&v282, (int)&v212, (int)&v273, (int)&v257);
                v211 = _R4;
                v210 = v274;
                  VSTR            S22, [SP,#0x518+var_2DC]
                  VSTR            S20, [SP,#0x518+var_2E4]
                SpriteComponent::_drawClipped(_R6, (int)&v211, (int)&v281, (int)&v210, (int)&v272, (int)&v262);
              default:
                goto def_C4414C;
            }
            goto def_C4414C;
          if ( !_ZF )
def_C4414C:
            if ( !(*(_BYTE *)(_R6 + 156) & 2) )
              goto LABEL_133;
            __asm
              VCMPE.F32       S16, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( _ZF )
LABEL_133:
              if ( *(_BYTE *)(_R6 + 140) )
              {
                SpriteComponent::_drawClipped(_R6, (int)&v283, (int)&v277, (int)&v274, (int)&v268, (int)&ptr);
              }
              else
                v118 = v274;
                v119 = *(_QWORD *)&v277;
                v120 = v284;
                v138 = v283;
                v139 = v284;
                v140 = v277;
                v141 = v278;
                v142 = v274;
                  VSTR            S16, [SP,#0x518+var_4B0]
                  VSTR            S18, [SP,#0x518+var_4AC]
                v121 = v266;
                if ( v266 == v267 )
                  std::vector<ImageInfo,std::allocator<ImageInfo>>::_M_emplace_back_aux<ImageInfo>(
                    (unsigned __int64 *)&ptr,
                    (int)&v138);
                else
                  v122 = (int)(v266 + 2);
                  *v266 = v283;
                  v121[1] = v120;
                  *(_QWORD *)v122 = v119;
                  *(_DWORD *)(v122 + 8) = v118;
                  v121[5] = HIDWORD(v118);
                  __asm
                  {
                    VSTR            S16, [R1,#0x18]
                    VSTR            S18, [R1,#0x1C]
                  }
                  v266 = v121 + 8;
            else
              __asm
                VCMPENE.F32     S18, #0.0
                VMRSNE          APSR_nzcv, FPSCR
              SpriteComponent::_drawTiled(_R6, (int)&v283, (int)&v277, (int)&v274, (int)&v268, (int)&ptr);
            (*(void (__cdecl **)(int))(*(_DWORD *)v124 + 36))(v124);
            if ( ptr )
              operator delete(ptr);
            if ( v262 )
              operator delete(v262);
            if ( v260 )
              operator delete(v260);
            if ( v257 )
              operator delete(v257);
            if ( v256 )
              operator delete(v256);
            return;
          v78 = v284;
          v171 = v128;
          v172 = v284;
          v173 = *(_QWORD *)&v280;
          v174 = v57;
            VSTR            S21, [SP,#0x518+var_3B4]
            VSTR            S19, [SP,#0x518+var_3B0]
            VSTR            S18, [SP,#0x518+var_3AC]
          std::vector<ImageInfo,std::allocator<ImageInfo>>::_M_emplace_back_aux<ImageInfo>(
            (unsigned __int64 *)&v256,
            (int)&v171);
          v79 = v261;
          v80 = *(_QWORD *)&v279;
          v81 = HIDWORD(v274);
          __asm { VSTR            S28, [SP,#0x518+var_3E8] }
          v168 = v78;
          v169 = *(_QWORD *)&v279;
          __asm { VSTR            S26, [SP,#0x518+var_3D8] }
          v170 = HIDWORD(v274);
            VSTR            S17, [SP,#0x518+var_3D0]
            VSTR            S18, [SP,#0x518+var_3CC]
          if ( _ZF )
            std::vector<ImageInfo,std::allocator<ImageInfo>>::_M_emplace_back_aux<ImageInfo>(
              (unsigned __int64 *)&v260,
              (int)&v167);
          else
            __asm { VSTR            S28, [R0] }
            *(_DWORD *)(v261 + 4) = v78;
            *(_QWORD *)(v79 + 8) = v80;
            __asm { VSTR            S26, [R0,#0x10] }
            *(_DWORD *)(v79 + 20) = v81;
              VSTR            S17, [R0,#0x18]
              VSTR            S18, [R0,#0x1C]
            v261 = v79 + 32;
          v100 = v282;
          v87 = v283;
          v101 = v274;
          v162 = v283;
          v163 = HIDWORD(_R4);
          v164 = v282;
          v165 = v274;
          v166 = _R11;
          v102 = v258;
            VSTR            S16, [SP,#0x518+var_3F0]
            VSTR            S30, [SP,#0x518+var_3EC]
          if ( v258 == v259 )
              (unsigned __int64 *)&v257,
              (int)&v162);
            v103 = (int)(v258 + 2);
            *v258 = v283;
            v102[1] = HIDWORD(_R4);
            *(_QWORD *)v103 = v100;
            *(_DWORD *)(v103 + 8) = v101;
            *(_DWORD *)(v103 + 12) = _R11;
              VSTR            S16, [R3,#0x18]
              VSTR            S30, [R3,#0x1C]
            v258 = v102 + 8;
          v91 = v281;
          v159 = v87;
          v92 = v274;
          __asm { VSTR            S22, [SP,#0x518+var_424] }
          v160 = v281;
          v161 = v274;
            VSTR            S20, [SP,#0x518+var_414]
            VSTR            S16, [SP,#0x518+var_410]
            VSTR            S24, [SP,#0x518+var_40C]
          v93 = v263;
          if ( v263 == v264 )
              (unsigned __int64 *)&v262,
              (int)&v159);
          v74 = v284;
          v155 = v128;
          v156 = v284;
          v157 = *(_QWORD *)&v280;
          v158 = v57;
            VSTR            S21, [SP,#0x518+var_434]
            VSTR            S19, [SP,#0x518+var_430]
            VSTR            S18, [SP,#0x518+var_42C]
            (int)&v155);
          v75 = v261;
          v76 = *(_QWORD *)&v279;
          v77 = HIDWORD(v274);
          __asm { VSTR            S28, [SP,#0x518+var_468] }
          v152 = v74;
          v153 = *(_QWORD *)&v279;
          __asm { VSTR            S26, [SP,#0x518+var_458] }
          v154 = HIDWORD(v274);
            VSTR            S17, [SP,#0x518+var_450]
            VSTR            S18, [SP,#0x518+var_44C]
              (int)&v151);
            *(_DWORD *)(v261 + 4) = v74;
            *(_QWORD *)(v75 + 8) = v76;
            *(_DWORD *)(v75 + 20) = v77;
            v261 = v75 + 32;
          v86 = v282;
          v88 = v274;
          v146 = v283;
          v147 = HIDWORD(_R4);
          v148 = v282;
          v149 = v274;
          v150 = _R11;
          v89 = v258;
            VSTR            S16, [SP,#0x518+var_470]
            VSTR            S30, [SP,#0x518+var_46C]
              (int)&v146);
            v90 = (int)(v258 + 2);
            v89[1] = HIDWORD(_R4);
            *(_QWORD *)v90 = v86;
            *(_DWORD *)(v90 + 8) = v88;
            *(_DWORD *)(v90 + 12) = _R11;
            v258 = v89 + 8;
          v143 = v87;
          __asm { VSTR            S22, [SP,#0x518+var_4A4] }
          v144 = v281;
          v145 = v274;
            VSTR            S20, [SP,#0x518+var_494]
            VSTR            S16, [SP,#0x518+var_490]
            VSTR            S24, [SP,#0x518+var_48C]
              (int)&v143);
        *(_DWORD *)v93 = v87;
        __asm { VSTR            S22, [R3,#4] }
        *(_QWORD *)(v93 + 8) = v91;
        *(_DWORD *)(v93 + 16) = v92;
          VSTR            S20, [R3,#0x14]
          VSTR            S16, [R3,#0x18]
          VSTR            S24, [R3,#0x1C]
        v263 = v93 + 32;
        goto def_C4414C;
      v32 = (UITextureInfo *)UITextureInfoPtr::getUITextureInfo((UITextureInfoPtr *)(_R6 + 20));
      if ( UITextureInfo::hasNineslice(v32) == 1 )
        v33 = (UITextureInfo *)UITextureInfoPtr::getUITextureInfo((UITextureInfoPtr *)(_R6 + 20));
        v34 = (_DWORD *)UITextureInfo::getNinesliceSize(v33);
        v35 = v34 + 3;
        v36 = v34 + 2;
        v37 = v34 + 1;
        goto LABEL_40;
      if ( !*(_BYTE *)(_R6 + 140) )
        goto LABEL_134;
        VLDR            S0, [R6,#0x98]
        VCMPE.F32       S0, #0.0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_134:
        v68 = *(_WORD *)(_R6 + 156);
        if ( v68 & 2 )
          v82 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v83 = UIControl::getPosition(v82);
          v84 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v85 = UIControl::getSize(v84);
          SpriteComponent::_drawTiled(_R6, v3, (int)v83, (int)v85, (int)&v287, (int)&v289);
        else if ( v68 & 0x20 )
          v94 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v95 = UIControl::getPosition(v94);
          v96 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          _R0 = UIControl::getSize(v96);
            VLDR            S2, [R0,#4]
            VDIV.F32        S6, S18, S16
            VDIV.F32        S4, S0, S2
            VCMPE.F32       S0, S2
            VCMPE.F32       S6, S4
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              VDIV.F32        S4, S2, S0
              VMUL.F32        S6, S18, S4
              VMOV.F32        S4, #0.5
              VSUB.F32        S8, S16, S6
              VMOV.F32        S16, S6
              VMUL.F32        S4, S8, S4
              VLDR            S8, [R6,#0x60]
            _R1 = *(_DWORD *)(_R6 + 92);
              VADD.F32        S4, S8, S4
              VMOV            R0, S4
              VMOV.F32        S4, S18
              VMUL.F32        S4, S16, S4
              VMOV.F32        S6, #0.5
              VSUB.F32        S8, S18, S4
              VMUL.F32        S6, S8, S6
              VLDR            S8, [R6,#0x5C]
            _R0 = *(_DWORD *)(_R6 + 96);
              VADD.F32        S6, S8, S6
              VMOV            R1, S6
          v113 = *(void (__fastcall **)(int, int, int *, int *))(*(_DWORD *)v3 + 32);
          v302 = *(_DWORD *)v95;
          v114 = *((_DWORD *)v95 + 1);
          v298 = _R1;
          v299 = _R0;
          v303 = v114;
            VSTR            S0, [R10,#0xF0]
            VSTR            S4, [R10,#0xE0]
            VSTR            S2, [R10,#0xF4]
            VSTR            S16, [R10,#0xE4]
          v113(v3, v7, &v302, &v300);
        else if ( v68 & 0x10 )
          v104 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v105 = UIControl::getPosition(v104);
          v106 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v109 = *(_QWORD *)UIControl::getSize(v106);
          _R0 = HIDWORD(v109);
          _R3 = v109;
            VMOV            S2, R0
            VLDR            S10, =1.1921e-7
          *(_QWORD *)&_R1 = *(_QWORD *)v105;
            VMOV            S0, R3
            VDIV.F32        S4, S2, S16
            VDIV.F32        S6, S0, S18
            VSUB.F32        S8, S6, S4
            VABS.F32        S8, S8
            VCMPE.F32       S8, S10
              VCMPE.F32       S6, S4
              VMOV.F32        S8, #0.5
              VMOV            S10, R1
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S4, S6 }
              VMUL.F32        S6, S4, S16
              VMUL.F32        S4, S4, S18
              VSUB.F32        S2, S2, S6
              VSUB.F32        S0, S0, S4
              VMOV            R0, S6
              VMOV            R3, S4
              VMUL.F32        S2, S2, S8
              VMUL.F32        S0, S0, S8
              VMOV            S8, R2
              VADD.F32        S2, S2, S8
              VADD.F32        S0, S0, S10
              VMOV            R2, S2
              VMOV            R1, S0
          v112 = *(void (__fastcall **)(int, int, int *, int *))(*(_DWORD *)v3 + 32);
          v300 = _R3;
          v301 = _R0;
          v298 = v287;
          v299 = v288;
          v302 = _R1;
          v303 = _R2;
            VSTR            S18, [R10,#0xE0]
          v112(v3, _R6 + 60, &v302, &v300);
          v69 = *(void (__fastcall **)(int, int, int *, int *))(*(_DWORD *)v3 + 32);
          v70 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v71 = UIControl::getPosition(v70);
          v136 = *(_DWORD *)v71;
          v137 = *((_DWORD *)v71 + 1);
          v72 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
          v73 = UIControl::getSize(v72);
          v134 = *(_DWORD *)v73;
          v135 = *((_DWORD *)v73 + 1);
          v132 = v287;
          v133 = v288;
          v130 = _R11;
          v131 = v129;
          v69(v3, _R6 + 60, &v136, &v134);
      else
        v64 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
        v65 = UIControl::getPosition(v64);
        v66 = (UIControl *)UIComponent::getOwner((UIComponent *)_R6);
        v67 = UIControl::getSize(v66);
        SpriteComponent::_drawClipped(_R6, v3, (int)v65, (int)v67, (int)&v287, (int)&v289);
}


int __fastcall SpriteComponent::_drawTiled(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  _DWORD *v10; // r0@1
  int result; // r0@1
  _DWORD *v12; // [sp+Ch] [bp-24h]@1
  int (*v13)(void); // [sp+14h] [bp-1Ch]@1
  int (__fastcall *v14)(__int64 **, int, int, int, int); // [sp+18h] [bp-18h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = operator new(8u);
  *v10 = v6;
  v10[1] = v9;
  v12 = v10;
  v13 = (int (*)(void))sub_C45946;
  v14 = sub_C458FC;
  result = SpriteComponent::_drawTiled(v6, v8, v7, a5, a6, (int)&v12);
  if ( v13 )
    result = v13();
  return result;
}


int __fastcall SpriteComponent::_drawFilled(int a1, int a2, int a3, int _R3, int a5, int a6)
{
  int (__fastcall *v16)(int, int, int *, float *); // r7@13
  int v18; // [sp+8h] [bp-38h]@13
  int v19; // [sp+Ch] [bp-34h]@13
  int v20; // [sp+10h] [bp-30h]@13
  int v21; // [sp+14h] [bp-2Ch]@13
  float v22; // [sp+18h] [bp-28h]@13
  int v23; // [sp+20h] [bp-20h]@13
  int v24; // [sp+24h] [bp-1Ch]@13

  _R5 = a6;
  __asm
  {
    VLDR            S0, [R3]
    VLDR            S2, [R3,#4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VDIV.F32        S4, S0, S2
      VDIV.F32        S6, S2, S0
      VMOV.F32        S12, S4
    }
  else
      VDIV.F32        S12, S0, S2
      VDIV.F32        S4, S2, S0
      VMOV.F32        S6, S12
    VLDR            S8, [R5]
    VLDR            S10, [R5,#4]
    VMOV            R8, S8
  _LR = a5;
    VDIV.F32        S14, S8, S10
    VMOV            R12, S10
      VCMPE.F32       S14, S12
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMUL.F32        S4, S10, S4 }
      goto LABEL_9;
    __asm { VMUL.F32        S4, S8, S6 }
LABEL_12:
      VMOV.F32        S6, #0.5
      VSUB.F32        S8, S10, S4
      VMOV            R12, S4
      VMUL.F32        S6, S8, S6
      VLDR            S8, [LR,#4]
    _R5 = *(_DWORD *)a5;
      VADD.F32        S6, S8, S6
      VMOV            R4, S6
    goto LABEL_13;
    VCMPE.F32       S14, S12
    __asm { VMUL.F32        S4, S8, S4 }
    goto LABEL_12;
  __asm { VMUL.F32        S4, S10, S6 }
LABEL_9:
    VMOV.F32        S6, #0.5
    VSUB.F32        S8, S8, S4
    VMOV            R8, S4
    VMUL.F32        S6, S8, S6
    VLDR            S8, [LR]
  _R4 = *(_DWORD *)(a5 + 4);
    VADD.F32        S6, S8, S6
    VMOV            R5, S6
LABEL_13:
  v16 = *(int (__fastcall **)(int, int, int *, float *))(*(_DWORD *)a2 + 32);
  v23 = *(_DWORD *)a3;
  v24 = *(_DWORD *)(a3 + 4);
    VSTR            S0, [SP,#0x40+var_28]
    VSTR            S2, [SP,#0x40+var_24]
  v20 = _R5;
  v21 = _R4;
  v18 = _R8;
  v19 = _R12;
  return v16(a2, a1 + 60, &v23, &v22);
}


char *__fastcall SpriteComponent::getZipFolder(SpriteComponent *this)
{
  return (char *)this + 160;
}


int __fastcall SpriteComponent::_drawTiled(int result, int a2, int _R2, int a4, int a5, int a6)
{
  int v11; // r4@1
  float v13; // [sp+8h] [bp-80h]@17
  int v14; // [sp+Ch] [bp-7Ch]@16
  float v15; // [sp+18h] [bp-70h]@17

  _R8 = a2;
  __asm
  {
    VLDR            S0, [R2]
    VLDR            S16, [R8]
  }
  v11 = a4;
    VADD.F32        S18, S0, S16
    VCMPE.F32       S16, S18
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S0, [R8,#4]
      VMOV.F32        S17, #1.0
      VLDR            S4, [R0,#0x90]
      VLDR            S6, [R0,#0x94]
      VMOV            R0, S0
    }
    _R7 = a5;
      VLDR            S2, [R2,#4]
      VLDR            S8, [R7]
      VADD.F32        S20, S2, S0
      VLDR            S10, [R7,#4]
      VMUL.F32        S24, S4, S8
      VLDR            S30, =0.0
      VMUL.F32        S22, S6, S10
      VABS.F32        S28, S24
      VABS.F32        S26, S22
    while ( 1 )
      __asm
      {
        VSUB.F32        S0, S18, S16
        VMOV.F32        S19, S30
        VMOV            S21, R0
        VDIV.F32        S0, S0, S24
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S17
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S19, S0 }
        VCMPE.F32       S21, S20
        __asm { VMOVGT.F32      S19, S17 }
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( _NF ^ _VF )
        __asm { VMUL.F32        S23, S19, S24 }
        do
        {
          __asm
          {
            VSUB.F32        S0, S20, S21
            VMOV.F32        S2, S30
            VDIV.F32        S0, S0, S22
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S0, S17
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S2, S0 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S2, S17 }
            VSTR            S23, [SP,#0x88+var_70]
            VMUL.F32        S0, S2, S22
            VSTR            S0, [SP,#0x88+var_6C]
            VLDR            S0, [R7]
            VLDR            S4, [R7,#4]
            VMUL.F32        S0, S0, S19
            VSTR            S16, [SP,#0x88+var_80]
            VMUL.F32        S2, S4, S2
          v14 = result;
            VSTR            S0, [SP,#0x88+var_78]
            VSTR            S2, [SP,#0x88+var_74]
          if ( !*(_DWORD *)(a6 + 8) )
            sub_DA7654();
          (*(void (__fastcall **)(int, float *, float *, int))(a6 + 12))(a6, &v13, &v15, v11);
            VADD.F32        S21, S21, S26
            VMOV            R0, S21
            VCMPE.F32       S21, S20
        }
        while ( _NF ^ _VF );
        VADD.F32        S16, S16, S28
        VCMPE.F32       S16, S18
      if ( !(_NF ^ _VF) )
        break;
      result = *(_DWORD *)(_R8 + 4);
  return result;
}


int __fastcall SpriteComponent::setGrayscaleEnabled(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = *(_WORD *)(result + 156) & 0xFFBF | (a2 << 6);
  return result;
}


void __fastcall SpriteComponent::render(int a1, int a2)
{
  SpriteComponent::render(a1, a2);
}


int __fastcall SpriteComponent::setClipPixelPerfect(int result, __int16 a2)
{
  *(_WORD *)(result + 156) = a2 | *(_WORD *)(result + 156) & 0xFFFE;
  return result;
}
