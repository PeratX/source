

int __fastcall PacketUtil::byteToDegrees(PacketUtil *this, signed __int8 a2)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =1.4062
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


int __fastcall PacketUtil::degreesToByte(PacketUtil *this, float a2)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, =0.71111
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}
