

void __fastcall FloatNavigation::~FloatNavigation(FloatNavigation *this)
{
  FloatNavigation::~FloatNavigation(this);
}


int __fastcall FloatNavigation::travel(FloatNavigation *this, float *a2, float *a3)
{
  FloatNavigation *v3; // r4@1
  int v4; // r1@2
  int v5; // r0@2
  int v11; // r1@4
  Entity *v12; // r0@4
  int v13; // r5@7
  int v14; // r0@7
  int v15; // r0@8
  int v16; // r6@8
  float v19; // r1@8
  int v20; // r7@8
  float v21; // r1@8
  int v22; // r0@8
  int v23; // r6@11
  float v26; // r1@11
  int v27; // r7@11
  float v28; // r1@11
  int v29; // r0@11
  int v32; // r0@16
  float v33; // r1@16
  __int64 v37; // r2@16
  int v39; // r1@18
  __int64 v40; // r0@18
  int v42; // t1@18
  int v44; // t1@18
  Entity *v45; // r0@18
  __int64 v46; // r2@18
  int v51; // r1@22
  int v53; // t1@23
  int v54; // t1@23
  int v55; // r0@23
  unsigned __int8 v57; // [sp+8h] [bp-30h]@11
  unsigned __int8 v58; // [sp+Ch] [bp-2Ch]@8

  v3 = this;
  if ( j_Entity::isResting(*((Entity **)this + 1)) )
    return 0;
  v4 = (*(int (**)(void))(**((_DWORD **)v3 + 1) + 208))();
  v5 = *((_DWORD *)v3 + 1);
  if ( v4 == 1 )
  {
    (*(void (**)(void))(*(_DWORD *)v5 + 76))();
    _R0 = *((_DWORD *)v3 + 1);
    __asm { VLDR            S0, =0.8 }
  }
  else
    v11 = (*(int (**)(void))(*(_DWORD *)v5 + 216))();
    v12 = (Entity *)*((_DWORD *)v3 + 1);
    if ( v11 != 1 )
    {
      v13 = j_Entity::getRegion(v12);
      v14 = *((_DWORD *)v3 + 1);
      __asm { VLDR            S16, =0.91 }
      if ( *(_BYTE *)(v14 + 216) )
      {
        v15 = j_mce::Math::floor(*(mce::Math **)(v14 + 72), COERCE_FLOAT(*(_BYTE *)(v14 + 216)));
        __asm { VMOV.F32        S18, #-0.5 }
        v16 = v15;
        _R0 = *((_DWORD *)v3 + 1);
        __asm
        {
          VLDR            S0, [R0,#0x10C]
          VADD.F32        S0, S0, S18
          VMOV            R0, S0
        }
        v20 = j_mce::Math::floor(_R0, v19);
        v22 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v3 + 1) + 80), v21);
        j_BlockSource::getBlockID((BlockSource *)&v58, v13, v16, v20, v22);
        if ( v58 )
          j_Block::getFriction((Block *)Block::mBlocks[v58]);
        v14 = *((_DWORD *)v3 + 1);
        if ( *(_BYTE *)(v14 + 216) )
          v23 = j_mce::Math::floor(*(mce::Math **)(v14 + 72), COERCE_FLOAT(*(_BYTE *)(v14 + 216)));
          _R0 = *((_DWORD *)v3 + 1);
          __asm
          {
            VLDR            S0, [R0,#0x10C]
            VADD.F32        S0, S0, S18
            VMOV            R0, S0
          }
          v27 = j_mce::Math::floor(_R0, v26);
          v29 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v3 + 1) + 80), v28);
          j_BlockSource::getBlockID((BlockSource *)&v57, v13, v23, v27, v29);
          if ( v57 )
            _R0 = j_Block::getFriction((Block *)Block::mBlocks[v57]);
            __asm
            {
              VLDR            S0, =0.91
              VMOV            S2, R0
              VMUL.F32        S16, S2, S0
            }
          else
            __asm { VLDR            S16, =0.546 }
          v14 = *((_DWORD *)v3 + 1);
      }
      (*(void (**)(void))(*(_DWORD *)v14 + 76))();
      _R0 = *((_DWORD *)v3 + 1);
      __asm
        VLDR            S0, [R0,#0x6C]
        VMUL.F32        S0, S0, S16
        VSTR            S0, [R0,#0x6C]
        VLDR            S0, [R0,#0x70]
        VSTR            S0, [R0,#0x70]
        VLDR            S0, [R0,#0x74]
      goto LABEL_16;
    }
    (*(void (**)(void))(*(_DWORD *)v12 + 76))();
    __asm { VMOV.F32        S0, #0.5 }
  __asm
    VLDR            S2, [R0,#0x6C]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0,#0x6C]
    VLDR            S2, [R0,#0x70]
    VSTR            S2, [R0,#0x70]
    VLDR            S2, [R0,#0x74]
    VMUL.F32        S0, S2, S0
LABEL_16:
  __asm { VSTR            S0, [R0,#0x74] }
  v32 = *((_DWORD *)v3 + 1);
  v33 = *(float *)(v32 + 3484);
  *(float *)(v32 + 3480) = v33;
  _R0 = *((_DWORD *)v3 + 1);
    VLDR            S0, [R0,#0x48]
    VLDR            S2, [R0,#0x54]
    VLDR            S4, [R0,#0x50]
    VLDR            S6, [R0,#0x5C]
    VSUB.F32        S0, S0, S2
    VSUB.F32        S2, S4, S6
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R0 = j_mce::Math::sqrt(_R0, v33);
    VMOV.F32        S0, #4.0
    VMOV            S2, R0
    VMOV.F32        S4, #1.0
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VLDR            S4, =0.4 }
  _R0 = *((_DWORD *)v3 + 1) + 3484;
    VLDR            S2, [R0]
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0]
  v39 = *((_DWORD *)v3 + 1);
  LODWORD(v40) = *(_DWORD *)(v39 + 108);
  HIDWORD(v40) = *(_DWORD *)(v39 + 116);
  _R0 = j_mce::Math::atan2(v40, v37);
  __asm { VMOV            S0, R0 }
  v42 = *((_DWORD *)v3 + 1);
  _R1 = &mce::Math::RADDEG;
    VLDR            S16, [R1]
    VNMUL.F32       S0, S16, S0
    VSTR            S0, [R0,#0x7C]
  v44 = *((_DWORD *)v3 + 1);
  __asm { VSTR            S0, [R0] }
  v45 = (Entity *)j_Entity::getTarget(*((Entity **)v3 + 1));
  _R5 = v45;
  if ( !v45 )
    goto LABEL_27;
  _R0 = j_Entity::distanceToSqr(v45, *((const Entity **)v3 + 1));
    VLDR            S0, =4096.0
    VCMPE.F32       S2, S0
  if ( _NF ^ _VF )
    __asm
      VLDR            S0, [R5,#0x48]
      VLDR            S2, [R5,#0x50]
      VLDR            S4, [R0,#0x48]
      VLDR            S6, [R0,#0x50]
      VSUB.F32        S0, S0, S4
      VSUB.F32        S2, S2, S6
      VMOV            R0, S0
      VMOV            R1, S2
LABEL_27:
    v51 = *((_DWORD *)v3 + 1);
    LODWORD(_R0) = *(_DWORD *)(v51 + 108);
    HIDWORD(_R0) = *(_DWORD *)(HIDWORD(_R0) + 116);
  _R0 = j_mce::Math::atan2(_R0, v46);
  v53 = *((_DWORD *)v3 + 1);
  v54 = *((_DWORD *)v3 + 1);
  v55 = *((_DWORD *)v3 + 1) + 3420;
  return 0;
}


void __fastcall FloatNavigation::~FloatNavigation(FloatNavigation *this)
{
  PathNavigation *v1; // r0@1

  v1 = j_PathNavigation::~PathNavigation(this);
  j_j_j__ZdlPv_7((void *)v1);
}
