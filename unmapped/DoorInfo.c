

int __fastcall DoorInfo::distanceToInsideSqr(DoorInfo *this, const BlockPos *a2)
{
  __int64 v2; // kr00_8@1
  __int64 v3; // kr08_8@1
  int result; // r0@1

  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)((char *)this + 28);
  _R2 = v3 + v2 - *(_QWORD *)a2;
  __asm { VMOV            S0, R2 }
  _R2 = HIDWORD(v3) + HIDWORD(v2) - (*(_QWORD *)a2 >> 32);
  __asm
  {
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  _R0 = *((_DWORD *)this + 9) + *((_DWORD *)this + 4) - *((_DWORD *)a2 + 2);
    VMOV            S4, R0
    VMUL.F32        S0, S0, S0
    VCVT.F32.S32    S4, S4
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  return result;
}


int __fastcall DoorInfo::setInsideDx(int result, int a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


int __fastcall DoorInfo::setVillage(int result, Village *a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall DoorInfo::setInsideDz(int result, int a2)
{
  *(_DWORD *)(result + 24) = a2;
  return result;
}


signed int __fastcall DoorInfo::isInsideSide(DoorInfo *this, int a2, int a3)
{
  signed int v3; // r1@1
  signed int result; // r0@1

  v3 = (a2 - *((_DWORD *)this + 2)) * (*((_QWORD *)this + 2) >> 32)
     + *((_DWORD *)this + 6) * (a3 - *((_QWORD *)this + 2));
  result = 0;
  if ( v3 > -1 )
    result = 1;
  return result;
}


int __fastcall DoorInfo::setTimeStamp(int result, int a2)
{
  *(_DWORD *)(result + 40) = a2;
  return result;
}


int __fastcall DoorInfo::distanceToSqr(DoorInfo *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  DoorInfo *v3; // r5@1
  int v4; // r6@1
  float v5; // r1@1
  int v6; // r7@1
  float v7; // r1@1
  int v8; // r0@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = j_mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  v6 = j_mce::Math::floor(*((mce::Math **)v2 + 1), v5);
  v8 = j_mce::Math::floor(*((mce::Math **)v2 + 2), v7);
  _R1 = *((_DWORD *)v3 + 2) - v4;
  _R0 = *((_DWORD *)v3 + 4) - v8;
  __asm { VMOV            S0, R1 }
  _R1 = *((_DWORD *)v3 + 3) - v6;
  __asm
  {
    VMOV            S4, R0
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall DoorInfo::getBookingsCount(DoorInfo *this)
{
  return *(_DWORD *)this;
}


int __fastcall DoorInfo::distanceToInsideSqr(DoorInfo *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  DoorInfo *v3; // r5@1
  int v4; // r8@1
  float v5; // r1@1
  int v6; // r7@1
  float v7; // r1@1
  int v8; // r0@1
  __int64 v9; // kr00_8@1
  __int64 v10; // kr08_8@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = j_mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  v6 = j_mce::Math::floor(*((mce::Math **)v2 + 1), v5);
  v8 = j_mce::Math::floor(*((mce::Math **)v2 + 2), v7);
  v9 = *((_QWORD *)v3 + 1);
  v10 = *(_QWORD *)((char *)v3 + 28);
  _R1 = HIDWORD(v9) - v6 + HIDWORD(v10);
  _R3 = v9 - v4 + v10;
  __asm
  {
    VMOV            S2, R1
    VMOV            S0, R3
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  _R0 = *((_DWORD *)v3 + 4) - v8 + *((_DWORD *)v3 + 9);
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  return result;
}


char *__fastcall DoorInfo::getPosition(DoorInfo *this)
{
  return (char *)this + 8;
}


int __fastcall DoorInfo::getIndoor(int result, int a2)
{
  __int64 v2; // r3@1 OVERLAPPED
  int v3; // r2@1
  int v4; // r1@1

  v2 = *(_QWORD *)(a2 + 28);
  v3 = *(_DWORD *)(a2 + 8) + v2;
  LODWORD(v2) = HIDWORD(v2) + *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 36) + *(_DWORD *)(a2 + 16);
  *(_QWORD *)result = *(__int64 *)((char *)&v2 - 4);
  *(_DWORD *)(result + 8) = v4;
  return result;
}


int __fastcall DoorInfo::incBookingCount(int result)
{
  ++*(_DWORD *)result;
  return result;
}


void __fastcall DoorInfo::getPosition(DoorInfo *this, int _R1)
{
  DoorInfo::getPosition(this, _R1);
}


int __fastcall DoorInfo::resetBookingCount(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


int __fastcall DoorInfo::distanceTo(DoorInfo *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  DoorInfo *v3; // r5@1
  int v4; // r6@1
  float v5; // r1@1
  int v6; // r7@1
  float v7; // r1@1
  int v8; // r0@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = j_mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  v6 = j_mce::Math::floor(*((mce::Math **)v2 + 1), v5);
  v8 = j_mce::Math::floor(*((mce::Math **)v2 + 2), v7);
  _R1 = *((_DWORD *)v3 + 2) - v4;
  _R0 = *((_DWORD *)v3 + 4) - v8;
  __asm { VMOV            S0, R1 }
  LODWORD(_R1) = *((_DWORD *)v3 + 3) - v6;
  __asm
  {
    VMOV            S4, R0
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  _R0 = j_mce::Math::sqrt(_R0, _R1);
    VMOV            S0, R0
  return result;
}


int __fastcall DoorInfo::setPosition(int result, int a2)
{
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 8);
  return result;
}


int __fastcall DoorInfo::distanceToSqr(DoorInfo *this, const BlockPos *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@1
  __int64 v4; // kr08_8@1
  int result; // r0@1

  v2 = *(_QWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_QWORD *)this + 1);
  _R1 = v4 - *(_QWORD *)a2;
  _R0 = *((_DWORD *)this + 4) - v3;
  __asm { VMOV            S0, R1 }
  _R1 = HIDWORD(v4) - HIDWORD(v2);
  __asm
  {
    VMOV            S4, R0
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall DoorInfo::setInside(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 28) = *(_DWORD *)a2;
  *(_DWORD *)(result + 32) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 36) = *((_DWORD *)a2 + 2);
  return result;
}


char *__fastcall DoorInfo::getInside(DoorInfo *this)
{
  return (char *)this + 28;
}


void __fastcall DoorInfo::getPosition(DoorInfo *this, int _R1)
{
  __asm
  {
    VLDR            S0, [R1,#8]
    VLDR            S2, [R1,#0xC]
    VLDR            S4, [R1,#0x10]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


int __fastcall DoorInfo::distanceTo(DoorInfo *this, const BlockPos *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@1
  __int64 v4; // kr08_8@1
  int result; // r0@1

  v2 = *(_QWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_QWORD *)this + 1);
  _R1 = v4 - *(_QWORD *)a2;
  _R0 = *((_DWORD *)this + 4) - v3;
  __asm { VMOV            S0, R1 }
  _R1 = HIDWORD(v4) - HIDWORD(v2);
  __asm
  {
    VMOV            S4, R0
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  _R0 = j_mce::Math::sqrt(_R0, COERCE_FLOAT(HIDWORD(v4) - HIDWORD(v2)));
    VMOV            S0, R0
  return result;
}


int __fastcall DoorInfo::DoorInfo(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1

  v5 = result + 16;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v5 + 4) = a3;
  *(_DWORD *)(v5 + 8) = a4;
  *(_DWORD *)(result + 28) = a3;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = a4;
  *(_DWORD *)(result + 40) = a5;
  return result;
}
