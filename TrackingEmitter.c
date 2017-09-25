

int __fastcall TrackingEmitter::TrackingEmitter(int a1, int a2, int a3)
{
  int result; // r0@1

  result = Particle::Particle(a1, a2, a3);
  *(_DWORD *)result = &off_26D9F0C;
  *(_DWORD *)(result + 216) = -1;
  *(_DWORD *)(result + 220) = -1;
  return result;
}


void __fastcall TrackingEmitter::~TrackingEmitter(TrackingEmitter *this)
{
  TrackingEmitter *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9AEC;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  operator delete((void *)v1);
}


__int64 __fastcall TrackingEmitter::setup(int a1, Entity *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  __int64 result; // r0@1
  int v6; // r2@1

  v3 = a1;
  v4 = a3;
  result = *(_QWORD *)Entity::getUniqueID(a2);
  v6 = v3 + 216;
  *(_QWORD *)v6 = result;
  *(_DWORD *)(v6 + 8) = v4;
  return result;
}


int __fastcall TrackingEmitter::init(int result, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  *(_DWORD *)(result + 8) = 3;
  *(_DWORD *)(result + 216) = -1;
  *(_DWORD *)(result + 220) = -1;
  return result;
}


void __fastcall TrackingEmitter::~TrackingEmitter(TrackingEmitter *this)
{
  TrackingEmitter::~TrackingEmitter(this);
}


signed int __fastcall TrackingEmitter::normalTick(TrackingEmitter *this)
{
  TrackingEmitter *v1; // r4@1
  char *v2; // r6@1
  signed int result; // r0@1
  int v4; // r0@2
  int v5; // r1@2
  Random *v7; // r0@3
  Random *v12; // r6@3
  signed int v13; // r7@3
  int v18; // r0@6
  float v19; // [sp+1Ch] [bp-6Ch]@6

  v1 = this;
  v2 = (char *)this + 216;
  result = *((_DWORD *)this + 54) & *((_DWORD *)this + 55);
  if ( result != -1 )
  {
    v4 = BlockSource::getLevel(*((BlockSource **)v1 + 35));
    _R5 = Level::fetchEntity(v4, v5, *(_QWORD *)v2, *(_QWORD *)v2 >> 32, 0);
    if ( _R5 )
    {
      v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      __asm
      {
        VMOV.F32        S18, #-1.0
        VLDR            D8, =2.32830644e-10
        VMOV.F32        S20, #1.0
        VMOV.F32        S22, #0.5
        VMOV.F32        S26, #-0.25
      }
      v12 = v7;
      v13 = 16;
      do
        _R0 = Random::_genRandInt32(v12);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D15, S0
        }
          VCVT.F64.U32    D12, S0
        result = Random::_genRandInt32(v12);
          VMUL.F64        D2, D12, D8
          VCVT.F64.U32    D0, S0
          VMUL.F64        D1, D15, D8
          VMUL.F64        D0, D0, D8
          VCVT.F32.F64    S27, D2
          VCVT.F32.F64    S25, D1
          VCVT.F32.F64    S23, D0
          VADD.F32        S0, S25, S25
          VADD.F32        S21, S27, S27
          VADD.F32        S2, S23, S23
          VADD.F32        S30, S0, S18
          VADD.F32        S0, S21, S18
          VADD.F32        S19, S2, S18
          VMUL.F32        S2, S30, S30
          VMUL.F32        S0, S0, S0
          VMUL.F32        S4, S19, S19
          VADD.F32        S0, S0, S2
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S20
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 52))(_R5);
          __asm
          {
            VMUL.F32        S2, S25, S22
            VMUL.F32        S0, S27, S22
            VLDR            S24, [R0]
            VMOV.F32        S4, #0.25
            VLDR            S25, [R5,#0x10C]
            VLDR            S27, [R5,#0x130]
            VLDR            S31, [R5,#0x134]
            VADD.F32        S28, S2, S26
            VADD.F32        S29, S0, S4
          }
            VMUL.F32        S0, S23, S22
            VLDR            S2, [R5,#0x130]
            VMUL.F32        S4, S28, S27
            VMUL.F32        S6, S29, S31
            VADD.F32        S0, S0, S26
            VADD.F32        S4, S4, S24
            VADD.F32        S6, S6, S25
            VMUL.F32        S0, S0, S2
            VLDR            S2, [R0,#8]
            VSTR            S4, [SP,#0x88+var_6C]
            VSTR            S6, [SP,#0x88+var_68]
            VADD.F32        S0, S0, S2
            VLDR            S2, =-0.8
            VADD.F32        S24, S21, S2
            VSTR            S0, [SP,#0x88+var_64]
          v18 = BlockSource::getLevel(*((BlockSource **)v1 + 35));
            VSTR            S30, [SP,#0x88+var_78]
            VSTR            S24, [SP,#0x88+var_74]
            VSTR            S19, [SP,#0x88+var_70]
          result = Level::addParticle(v18, *((_DWORD *)v1 + 56), (int)&v19);
        --v13;
      while ( v13 );
    }
    else
      result = -1;
      *(_DWORD *)v2 = -1;
      *((_DWORD *)v2 + 1) = -1;
      *((_DWORD *)v1 + 2) = 0;
  }
  return result;
}
