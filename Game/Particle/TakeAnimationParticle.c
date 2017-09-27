

void __fastcall TakeAnimationParticle::~TakeAnimationParticle(TakeAnimationParticle *this)
{
  TakeAnimationParticle::~TakeAnimationParticle(this);
}


TakeAnimationParticle *__fastcall TakeAnimationParticle::render(TakeAnimationParticle *this, BaseEntityRenderContext *a2, const Vec3 *a3, float a4)
{
  TakeAnimationParticle *result; // r0@1
  int v17; // r0@3
  float v18; // [sp+8h] [bp-58h]@3
  float v19; // [sp+14h] [bp-4Ch]@2

  _R5 = this;
  _R0 = (char *)this + 3548;
  _R7 = a4;
  _R6 = a3;
  __asm { VLDR            S0, [R0] }
  _R0 = (int)_R5 + 3552;
  _R4 = a2;
  __asm
  {
    VLDR            S2, [R0]
    VCVT.F32.S32    S16, S0
    VLDR            S18, [R4,#4]
    VCVT.F32.S32    S20, S2
  }
  result = (TakeAnimationParticle *)Level::fetchEntity(
                                      *((_DWORD *)_R5 + 1),
                                      0,
                                      *((_DWORD *)_R5 + 882),
                                      *((_DWORD *)_R5 + 883),
                                      0);
  if ( result )
    __asm
    {
      VADD.F32        S0, S16, S18
      VMOV            S18, R7
      VLDR            S22, [R5,#0x54]
      VLDR            S24, [R5,#0x58]
      VDIV.F32        S0, S0, S20
      VMUL.F32        S16, S0, S0
      VLDR            S20, [R5,#0x50]
    }
    Entity::getInterpolatedPosition((Entity *)&v19, *(float *)&result, *((_DWORD *)_R4 + 1));
    __asm { VLDR            S0, [SP,#0x60+var_4C] }
    _R0 = (int)_R5 + 3540;
    __asm { VLDR            S2, [SP,#0x60+var_48] }
    _R1 = (int)_R5 + 3536;
      VSUB.F32        S0, S0, S20
      VLDR            S4, [SP,#0x60+var_44]
      VSUB.F32        S2, S2, S22
      VLDR            S8, [R0]
      VLDR            S6, [R1]
      VSUB.F32        S4, S4, S24
    result = (TakeAnimationParticle *)((char *)_R5 + 3544);
      VLDR            S10, [R6,#8]
      VADD.F32        S0, S0, S6
      VLDR            S6, [R0]
      VADD.F32        S2, S2, S8
      VLDR            S8, [R6,#4]
      VADD.F32        S4, S4, S6
      VLDR            S6, [R6]
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VADD.F32        S0, S0, S20
      VADD.F32        S2, S2, S22
      VADD.F32        S4, S4, S24
      VSUB.F32        S0, S0, S6
      VSUB.F32        S2, S2, S8
      VSUB.F32        S4, S4, S10
      VMUL.F32        S6, S0, S0
      VSTR            S0, [SP,#0x60+var_58]
      VMUL.F32        S8, S2, S2
      VSTR            S2, [SP,#0x60+var_54]
      VMUL.F32        S10, S4, S4
      VSTR            S4, [SP,#0x60+var_50]
      VADD.F32        S6, S8, S6
      VADD.F32        S6, S6, S10
      VCMPE.F32       S6, S18
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV.F32        S0, #1.0
        VSUB.F32        S0, S0, S16
        VSTR            S0, [R5,#0xD8]
        VSTR            S0, [R5,#0xDC]
      }
      v17 = BaseEntityRenderContext::getEntityRenderDispatcher(_R4);
      result = (TakeAnimationParticle *)EntityRenderDispatcher::render(
                                          v17,
                                          (int)_R4,
                                          (TakeAnimationParticle *)((char *)_R5 + 8),
                                          (int)&v18,
                                          (int)_R5 + 128);
  return result;
}


signed int __fastcall TakeAnimationParticle::isRemoved(TakeAnimationParticle *this)
{
  int v1; // r1@1
  int v2; // r2@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 887);
  v2 = *((_DWORD *)this + 888);
  result = 0;
  if ( v1 >= v2 )
    result = 1;
  return result;
}


int __fastcall TakeAnimationParticle::TakeAnimationParticle(__int64 a1, int a2, Entity *a3, __int64 a4, int a5)
{
  int v5; // r4@1
  Entity *v6; // r7@1
  int v7; // r5@1
  Entity *v8; // r0@1
  BlockSource *v9; // r0@1

  v5 = a1;
  v6 = a3;
  v7 = a2;
  LODWORD(a1) = &off_26E6720;
  *(_QWORD *)v5 = a1;
  v8 = (Entity *)Level::getPrimaryLocalPlayer((Level *)HIDWORD(a1));
  v9 = (BlockSource *)Entity::getRegion(v8);
  ItemEntity::ItemEntity(v5 + 8, v9, v7 + 72, v7 + 3416, 0, 0, 0);
  *(_QWORD *)(v5 + 3528) = *(_QWORD *)Entity::getUniqueID(v6);
  *(_QWORD *)(v5 + 3536) = a4;
  *(_DWORD *)(v5 + 3544) = a5;
  *(_DWORD *)(v5 + 3548) = 0;
  *(_DWORD *)(v5 + 3552) = 3;
  ItemInstance::set((ItemInstance *)(v5 + 3424), *(_BYTE *)(v7 + 3430));
  return v5;
}


int __fastcall TakeAnimationParticle::normalTick(int result)
{
  ++*(_DWORD *)(result + 3548);
  return result;
}


TakeAnimationParticle *__fastcall TakeAnimationParticle::~TakeAnimationParticle(TakeAnimationParticle *this)
{
  TakeAnimationParticle *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6720;
  ItemEntity::~ItemEntity((TakeAnimationParticle *)((char *)this + 8));
  return v1;
}


void __fastcall TakeAnimationParticle::~TakeAnimationParticle(TakeAnimationParticle *this)
{
  TakeAnimationParticle *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6720;
  ItemEntity::~ItemEntity((TakeAnimationParticle *)((char *)this + 8));
  j_j_j__ZdlPv_5((void *)v1);
}
