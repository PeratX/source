

signed int __fastcall Node::inOpenSet(Node *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


int __fastcall Node::Node(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = -1;
  *(_QWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_BYTE *)(result + 36) = 0;
  return result;
}


int __fastcall Node::distanceToSqr(Node *this, Node *a2)
{
  Node *v2; // r4@1
  int result; // r0@1
  float v8; // [sp+0h] [bp-20h]@1
  float v11; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  j_Vec3::Vec3((int)&v11, (int)this);
  j_Vec3::Vec3((int)&v8, (int)v2);
  __asm
  {
    VLDR            S0, [SP,#0x20+var_14]
    VLDR            S6, [SP,#0x20+var_20]
    VLDR            S2, [SP,#0x20+var_10]
    VLDR            S8, [SP,#0x20+var_1C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [SP,#0x20+var_C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x20+var_18]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Node::equals(Node *this, Node *a2)
{
  Node *v2; // r2@1
  signed int result; // r0@2

  v2 = this;
  if ( *(_DWORD *)this == *(_DWORD *)a2 )
  {
    result = 0;
    if ( *((_DWORD *)v2 + 1) == *((_DWORD *)a2 + 1) && *((_DWORD *)v2 + 2) == *((_DWORD *)a2 + 2) )
      result = 1;
  }
  else
  return result;
}


int __fastcall Node::setCostMalus(int result, float a2)
{
  *(float *)(result + 28) = a2;
  return result;
}


int __fastcall Node::distanceTo(Node *this, Node *a2)
{
  Node *v2; // r4@1
  int result; // r0@1
  float v8; // [sp+0h] [bp-20h]@1
  float v11; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  j_Vec3::Vec3((int)&v11, (int)this);
  j_Vec3::Vec3((int)&v8, (int)v2);
  __asm
  {
    VLDR            S0, [SP,#0x20+var_14]
    VLDR            S6, [SP,#0x20+var_20]
    VLDR            S2, [SP,#0x20+var_10]
    VLDR            S8, [SP,#0x20+var_1C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [SP,#0x20+var_C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x20+var_18]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Node::Node(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = -1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = 0;
  return result;
}
