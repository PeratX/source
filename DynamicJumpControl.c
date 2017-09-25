

unsigned int __fastcall DynamicJumpControl::resetSpeedModifier(DynamicJumpControl *this)
{
  DynamicJumpControl *v1; // r4@1
  char *v6; // r5@1

  v1 = this;
  __asm { VMOV.F32        S0, #1.5 }
  v6 = (char *)this + 12;
  _R1 = (char *)this + 16 * *((_DWORD *)this + 19) + 12;
  __asm
  {
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMOV            R1, S0
  }
  j_Mob::setSpeedModifier(*((Mob **)this + 1), _R1);
  return j_j_j__ZN6Entity15setJumpDurationEi(*((Entity **)v1 + 1), *(_DWORD *)&v6[16 * *((_DWORD *)v1 + 19) + 12]);
}


int __fastcall DynamicJumpControl::DynamicJumpControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r12@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r12@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r12@1
  int v12; // r1@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r12@1
  int v16; // r1@1
  int v17; // r2@1
  int v18; // r3@1
  char v20; // [sp+8h] [bp-50h]@1
  int v21; // [sp+Ch] [bp-4Ch]@1
  int v22; // [sp+10h] [bp-48h]@1
  int v23; // [sp+14h] [bp-44h]@1
  char v24; // [sp+18h] [bp-40h]@1
  int v25; // [sp+1Ch] [bp-3Ch]@1
  int v26; // [sp+20h] [bp-38h]@1
  int v27; // [sp+24h] [bp-34h]@1
  char v28; // [sp+28h] [bp-30h]@1
  int v29; // [sp+2Ch] [bp-2Ch]@1
  int v30; // [sp+30h] [bp-28h]@1
  int v31; // [sp+34h] [bp-24h]@1
  char v32; // [sp+38h] [bp-20h]@1
  int v33; // [sp+3Ch] [bp-1Ch]@1
  int v34; // [sp+40h] [bp-18h]@1
  int v35; // [sp+44h] [bp-14h]@1

  v2 = a1;
  j_JumpControl::JumpControl(a1, a2);
  *(_DWORD *)v2 = &off_271A4A4;
  j_JumpInfo::JumpInfo((JumpInfo *)(v2 + 12), 0.0, 0.0, 30, 1);
  j_JumpInfo::JumpInfo((JumpInfo *)(v2 + 28), 0.0, 0.0, 30, 1);
  j_JumpInfo::JumpInfo((JumpInfo *)(v2 + 44), 0.0, 0.0, 30, 1);
  j_JumpInfo::JumpInfo((JumpInfo *)(v2 + 60), 0.0, 0.0, 30, 1);
  *(_DWORD *)(v2 + 76) = 0;
  j_JumpInfo::JumpInfo((JumpInfo *)&v32, 0.0, 0.0, 30, 1);
  v3 = v2 + 12;
  v4 = v33;
  v5 = v34;
  v6 = v35;
  *(_DWORD *)v3 = *(_DWORD *)&v32;
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v5;
  *(_DWORD *)(v3 + 12) = v6;
  j_JumpInfo::JumpInfo((JumpInfo *)&v28, 0.8, 0.1, 20, 3);
  v7 = v2 + 28;
  v8 = v29;
  v9 = v30;
  v10 = v31;
  *(_DWORD *)v7 = *(_DWORD *)&v28;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  j_JumpInfo::JumpInfo((JumpInfo *)&v24, 1.0, 0.4, 14, 5);
  v11 = v2 + 44;
  v12 = v25;
  v13 = v26;
  v14 = v27;
  *(_DWORD *)v11 = *(_DWORD *)&v24;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  j_JumpInfo::JumpInfo((JumpInfo *)&v20, 1.75, 0.15, 1, 1);
  v15 = v2 + 60;
  v16 = v21;
  v17 = v22;
  v18 = v23;
  *(_DWORD *)v15 = *(_DWORD *)&v20;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  *(_DWORD *)(v15 + 12) = v18;
  return v2;
}


int __fastcall DynamicJumpControl::setJumpType(int result, int a2)
{
  *(_DWORD *)(result + 76) = a2;
  return result;
}


int __fastcall DynamicJumpControl::tick(DynamicJumpControl *this)
{
  DynamicJumpControl *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( *((_BYTE *)this + 8) )
  {
    (*(void (__fastcall **)(DynamicJumpControl *, signed int))(*(_DWORD *)this + 20))(this, 2);
    (*(void (__fastcall **)(DynamicJumpControl *))(*(_DWORD *)v1 + 24))(v1);
    j_Mob::setJumping(*((Mob **)v1 + 1), 1);
  }
  result = 0;
  *((_BYTE *)v1 + 8) = 0;
  return result;
}
