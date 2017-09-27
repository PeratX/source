

Entity *__fastcall MoveEntityPacketData::MoveEntityPacketData(Entity *a1, int a2)
{
  Entity *v3; // r4@1
  int v4; // r0@1
  __int64 v5; // r1@1
  int v6; // r0@1
  float v7; // r1@1
  PacketUtil *v8; // r0@1
  float v9; // r1@1
  float v10; // r1@1
  PacketUtil *v11; // r0@1
  float v12; // r1@1
  signed int v13; // r0@1
  mce::Math **v14; // r1@1
  PacketUtil *v15; // r0@3
  float v16; // r1@3
  char v23; // r0@4
  mce::Math *v25; // [sp+0h] [bp-18h]@1
  mce::Math *v26; // [sp+4h] [bp-14h]@1

  _R5 = (Entity *)a2;
  v3 = a1;
  Entity::getRuntimeID(a1, a2);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 52))(_R5);
  v5 = *(_QWORD *)v4;
  v6 = *(_DWORD *)(v4 + 8);
  *((_QWORD *)v3 + 1) = v5;
  *((_DWORD *)v3 + 4) = v6;
  *((_BYTE *)v3 + 20) = *((_BYTE *)_R5 + 216);
  *((_BYTE *)v3 + 22) = 0;
  *((_BYTE *)v3 + 23) = 0;
  *((_BYTE *)v3 + 24) = 0;
  Entity::getRotation((Entity *)&v25, (int)_R5);
  v8 = (PacketUtil *)mce::Math::wrapDegrees(v25, v7);
  *((_BYTE *)v3 + 22) = PacketUtil::degreesToByte(v8, v9);
  v11 = (PacketUtil *)mce::Math::wrapDegrees(v26, v10);
  *((_BYTE *)v3 + 24) = PacketUtil::degreesToByte(v11, v12);
  v13 = Entity::hasCategory((int)_R5, 2);
  v14 = (mce::Math **)((char *)_R5 + 124);
  if ( v13 )
    v14 = (mce::Math **)((char *)_R5 + 3420);
  v15 = (PacketUtil *)mce::Math::wrapDegrees(*v14, *(float *)&v14);
  *((_BYTE *)v3 + 23) = PacketUtil::degreesToByte(v15, v16);
  __asm
  {
    VLDR            S0, [R5,#0x10C]
    VLDR            S2, [R5,#0x13C]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0xC]
  }
  _R6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 52))(_R5);
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 56))(_R5);
    VLDR            S0, [R0]
    VLDR            S6, [R6]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R6,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R6,#8]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VLDR            S2, =0.001
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v23 = 1;
  else
    v23 = Entity::hasTeleported(_R5);
  *((_BYTE *)v3 + 21) = v23;
  return v3;
}


int __fastcall MoveEntityPacketData::getRot(MoveEntityPacketData *this, int a2)
{
  int v2; // r4@1
  MoveEntityPacketData *v3; // r5@1
  int v4; // r6@1
  signed __int8 v5; // r1@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = PacketUtil::byteToDegrees((PacketUtil *)*(_BYTE *)(a2 + 22), a2);
  result = PacketUtil::byteToDegrees((PacketUtil *)*(_BYTE *)(v2 + 24), v5);
  *(_DWORD *)v3 = v4;
  *((_DWORD *)v3 + 1) = result;
  return result;
}


signed int __fastcall MoveEntityPacketData::distantEnough(MoveEntityPacketData *this, const MoveEntityPacketData *a2, const Vec3 *_R2, float _R3)
{
  __int64 v6; // r0@1
  signed __int8 v12; // r1@2
  signed __int8 v13; // r1@2
  signed __int8 v15; // r1@2
  signed __int8 v16; // r1@2
  signed __int8 v17; // r1@2
  signed __int8 v19; // r1@2
  signed __int8 v20; // r1@2
  signed __int8 v22; // r1@2
  signed __int8 v24; // r1@2
  int v25; // r0@2
  signed int result; // r0@2

  _R4 = a2;
  _R6 = this;
  v6 = *(_QWORD *)this;
  HIDWORD(v6) ^= *(_QWORD *)_R4 >> 32;
  if ( v6 == (unsigned int)*(_QWORD *)_R4 )
  {
    __asm
    {
      VMOV            S22, R3
      VLDR            S16, [R2]
      VLDR            S18, [R2,#4]
      VLDR            S20, [R2,#8]
      VLDR            S24, [R4,#8]
      VLDR            S26, [R4,#0xC]
      VLDR            S28, [R4,#0x10]
      VLDR            S30, [R6,#8]
      VLDR            S17, [R6,#0xC]
      VLDR            S19, [R6,#0x10]
    }
    _R8 = PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R6 + 22), SBYTE4(v6));
    PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R6 + 24), v12);
    _R9 = PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R4 + 22), v13);
    PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R4 + 24), v15);
    PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R6 + 22), v16);
    _R5 = PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R6 + 24), v17);
    PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R4 + 22), v19);
      VSUB.F32        S0, S30, S24
      VSUB.F32        S2, S17, S26
      VSUB.F32        S24, S19, S28
      VMUL.F32        S26, S0, S0
      VMUL.F32        S28, S2, S2
    _R7 = PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R4 + 24), v20);
    _R6 = PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R6 + 23), v22);
    v25 = PacketUtil::byteToDegrees((PacketUtil *)*((_BYTE *)_R4 + 23), v24);
      VLDR            S0, =0.01
      VMUL.F32        S2, S24, S24
      VADD.F32        S4, S28, S26
    _R1 = v25;
    __asm { VMUL.F32        S0, S22, S0 }
    result = 1;
      VMUL.F32        S6, S0, S0
      VADD.F32        S0, S4, S2
      VCMPE.F32       S0, S6
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VMOV            S2, R8
        VMOV            S4, R9
        VMOV            S6, R5
        VMOV            S8, R7
        VSUB.F32        S2, S2, S4
        VSUB.F32        S4, S6, S8
        VMOV            S6, R6
        VMOV            S8, R1
        VSUB.F32        S6, S6, S8
        VMOV.F32        S8, #4.0
        VABS.F32        S2, S2
        VABS.F32        S4, S4
        VABS.F32        S6, S6
        VADD.F32        S2, S4, S2
        VMUL.F32        S4, S22, S8
        VADD.F32        S2, S2, S6
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VMUL.F32        S4, S16, S16
          VLDR            S2, =0.001
          VMUL.F32        S6, S18, S18
        }
        result = 0;
          VMUL.F32        S2, S22, S2
          VMUL.F32        S8, S20, S20
          VADD.F32        S4, S6, S4
          VMUL.F32        S2, S2, S2
          VADD.F32        S4, S4, S8
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm
          {
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            result = 1;
  }
  else
  return result;
}


int __fastcall MoveEntityPacketData::setRot(int a1, mce::Math **a2)
{
  mce::Math **v2; // r4@1
  int v3; // r5@1
  PacketUtil *v4; // r0@1
  float v5; // r1@1
  float v6; // r1@1
  PacketUtil *v7; // r0@1
  float v8; // r1@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = (PacketUtil *)mce::Math::wrapDegrees(*a2, *(float *)&a2);
  *(_BYTE *)(v3 + 22) = PacketUtil::degreesToByte(v4, v5);
  v7 = (PacketUtil *)mce::Math::wrapDegrees(v2[1], v6);
  result = PacketUtil::degreesToByte(v7, v8);
  *(_BYTE *)(v3 + 24) = result;
  return result;
}


int __fastcall MoveEntityPacketData::setYHeadRot(MoveEntityPacketData *this, float a2)
{
  MoveEntityPacketData *v2; // r4@1
  PacketUtil *v3; // r0@1
  float v4; // r1@1
  int result; // r0@1

  v2 = this;
  v3 = (PacketUtil *)mce::Math::wrapDegrees((mce::Math *)LODWORD(a2), a2);
  result = PacketUtil::degreesToByte(v3, v4);
  *((_BYTE *)v2 + 23) = result;
  return result;
}
