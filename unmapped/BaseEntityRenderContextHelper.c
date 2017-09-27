

float __fastcall BaseEntityRenderContextHelper::getEntityDispatcherRotation(BaseEntityRenderContextHelper *this, const Options *a2, const Entity *a3, float a4)
{
  const Entity *v4; // r5@1
  BaseEntityRenderContextHelper *v5; // r4@1
  float result; // r0@1
  float v7; // r7@1
  Options *v8; // r6@1
  float v9; // r3@2
  BlockSource *v10; // r8@4
  float v11; // r1@4
  int v12; // r7@4
  float v13; // r1@4
  int v14; // r6@4
  float v15; // r1@4
  int v16; // r0@4
  int v17; // r6@5
  float v18; // r1@5
  int v19; // r7@5
  float v20; // r1@5
  int v21; // r0@5
  float v27; // r1@6
  float v29; // [sp+8h] [bp-28h]@6
  float v30; // [sp+Ch] [bp-24h]@7
  float v31; // [sp+14h] [bp-1Ch]@4

  v4 = a3;
  v5 = this;
  result = 0.0;
  v7 = a4;
  v8 = a2;
  *(_DWORD *)v5 = 0;
  *((_DWORD *)v5 + 1) = 0;
  if ( a3 )
  {
    if ( Entity::hasCategory((int)a3, 1) != 1 || (*(int (__fastcall **)(const Entity *))(*(_DWORD *)v4 + 784))(v4) != 1 )
    {
      Entity::getInterpolatedRotation((Entity *)&v29, *(float *)&v4, v7, v9);
      if ( Options::getPlayerViewPerspective(v8) == 2 )
      {
        __asm
        {
          VLDR            S0, =180.0
          VLDR            S2, [SP,#0x30+var_24]
          VADD.F32        S0, S2, S0
          VMOV            R0, S0
        }
        v30 = COERCE_FLOAT(mce::Math::wrapDegrees(_R0, v27));
          VLDR            S0, [SP,#0x30+var_28]
          VNEG.F32        S0, S0
          VSTR            S0, [SP,#0x30+var_28]
      }
      result = v29;
      *(_QWORD *)v5 = *(_QWORD *)&v29;
    }
    else
      v10 = (BlockSource *)Entity::getRegion(v4);
      v12 = mce::Math::floor(*((mce::Math **)v4 + 18), v11);
      v14 = mce::Math::floor(*((mce::Math **)v4 + 19), v13);
      v16 = mce::Math::floor(*((mce::Math **)v4 + 20), v15);
      BlockSource::getBlockID((BlockSource *)&v31, (int)v10, v12, v14, v16);
      LODWORD(result) = *(_BYTE *)(Block::mBed + 4);
      if ( LOBYTE(v31) == LODWORD(result) )
        v17 = mce::Math::floor(*((mce::Math **)v4 + 18), COERCE_FLOAT(LOBYTE(v31)));
        v19 = mce::Math::floor(*((mce::Math **)v4 + 19), v18);
        v21 = mce::Math::floor(*((mce::Math **)v4 + 20), v20);
        _R0 = 90 * (BlockSource::getData(v10, v17, v19, v21) & 3) + 180;
        __asm { VMOV            S0, R0 }
        result = 0.0;
          VCVT.F32.S32    S0, S0
          VSTR            S0, [R4,#4]
        *(_DWORD *)v5 = 0;
  }
  return result;
}
