

int __fastcall SquidRenderer::setupRotations(int a1, Squid *this, int a3, int _R3, int a5, float a6)
{
  Squid *v6; // r5@1
  int v7; // ST0C_4@1
  int v8; // ST08_4@1
  int v16; // ST04_4@1
  int v21; // [sp+10h] [bp-88h]@1
  signed int v22; // [sp+14h] [bp-84h]@1
  int v23; // [sp+18h] [bp-80h]@1
  int v24; // [sp+1Ch] [bp-7Ch]@1
  int v25; // [sp+20h] [bp-78h]@1
  int v26; // [sp+24h] [bp-74h]@1
  int v27; // [sp+28h] [bp-70h]@1
  int v28; // [sp+2Ch] [bp-6Ch]@1
  int v29; // [sp+30h] [bp-68h]@1
  int v30; // [sp+34h] [bp-64h]@1
  int v31; // [sp+38h] [bp-60h]@1
  int v32; // [sp+3Ch] [bp-5Ch]@1
  int v33; // [sp+40h] [bp-58h]@1
  int v34; // [sp+44h] [bp-54h]@1
  int v35; // [sp+48h] [bp-50h]@1
  int v36; // [sp+4Ch] [bp-4Ch]@1
  int v37; // [sp+50h] [bp-48h]@1
  int v38; // [sp+54h] [bp-44h]@1
  int v39; // [sp+58h] [bp-40h]@1
  float v40; // [sp+5Ch] [bp-3Ch]@1

  v6 = this;
  v7 = a3;
  v8 = a1;
  __asm
  {
    VLDR            S16, =180.0
    VMOV            S18, R3
  }
  _R6 = Squid::getXBodyRotO(this);
  __asm { VSUB.F32        S16, S16, S18 }
  _R8 = Squid::getXBodyRot(v6);
  _R9 = Squid::getXBodyRotO(v6);
  v16 = Squid::getZBodyRotO(v6);
  _R11 = Squid::getZBodyRot(v6);
  _R4 = Squid::getZBodyRotO(v6);
  v21 = 0;
  v22 = 1065353216;
  v23 = 0;
  __asm { VSTR            S16, [SP,#0x98+var_3C] }
  glm::rotate<float>((int)&v24, a5, (int)&v40, (int)&v21);
  __asm { VMOV            S0, R8 }
  *(_DWORD *)a5 = v24;
  __asm { VMOV            S2, R9 }
  *(_DWORD *)(a5 + 4) = v25;
    VSUB.F32        S0, S0, S2
    VMOV            S2, R6
  *(_DWORD *)(a5 + 8) = v26;
  *(_DWORD *)(a5 + 12) = v27;
  *(_DWORD *)(a5 + 16) = v28;
  *(_DWORD *)(a5 + 20) = v29;
  *(_DWORD *)(a5 + 24) = v30;
  *(_DWORD *)(a5 + 28) = v31;
  *(_DWORD *)(a5 + 32) = v32;
  *(_DWORD *)(a5 + 36) = v33;
    VLDR            S16, [SP,#0x98+arg_4]
    VMUL.F32        S0, S0, S16
  *(_DWORD *)(a5 + 40) = v34;
  *(_DWORD *)(a5 + 44) = v35;
  *(_DWORD *)(a5 + 48) = v36;
  *(_DWORD *)(a5 + 52) = v37;
  __asm { VADD.F32        S0, S0, S2 }
  *(_DWORD *)(a5 + 56) = v38;
  *(_DWORD *)(a5 + 60) = v39;
  v21 = 1065353216;
  v22 = 0;
  __asm { VSTR            S0, [SP,#0x98+var_3C] }
  __asm { VMOV            S0, R11 }
  __asm { VMOV            S2, R4 }
  __asm { VSUB.F32        S0, S0, S2 }
  __asm { VMUL.F32        S0, S0, S16 }
  _R1 = v16;
  __asm { VMOV            S2, R1 }
  return j_j_j__ZNK11MobRenderer14setupRotationsERK6EntityffR6Matrixf(v8, *(float *)&v6, v7, 0, a5, SLODWORD(a6));
}


_DWORD *__fastcall SquidRenderer::SquidRenderer(_DWORD *a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  _DWORD *v3; // r8@1
  const GeometryPtr *v4; // r4@1
  mce::TextureGroup *v5; // r6@1
  SquidModel *v6; // r7@1
  char *v7; // r0@1
  char *v8; // r0@2
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  char *v14; // [sp+4h] [bp-44h]@1
  char *v15; // [sp+8h] [bp-40h]@1
  int v16; // [sp+Ch] [bp-3Ch]@1
  char v17; // [sp+10h] [bp-38h]@1
  SquidModel *v18; // [sp+28h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (SquidModel *)operator new(0x7F8u);
  SquidModel::SquidModel(v6, v4);
  v18 = v6;
  sub_119C884((void **)&v14, "textures/entity/squid");
  v15 = v14;
  v14 = (char *)&unk_28898CC;
  v16 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v17, v5, (int)&v15, 0);
  MobRenderer::MobRenderer((int)v3, (int *)&v18, (mce::TexturePtr *)&v17);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v17);
  v7 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *v3 = &off_26DC278;
  return v3;
}


void __fastcall SquidRenderer::~SquidRenderer(SquidRenderer *this)
{
  SquidRenderer::~SquidRenderer(this);
}


int __fastcall SquidRenderer::getBob(SquidRenderer *this, Mob *a2, float a3)
{
  Mob *v3; // r5@1
  int result; // r0@1

  v3 = a2;
  _R4 = a3;
  _R6 = Squid::getOldTentacleAngle(a2);
  _R0 = Squid::getTentacleAngle(v3);
  __asm { VMOV            S16, R0 }
  _R0 = Squid::getOldTentacleAngle(v3);
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R4
    VSUB.F32        S0, S16, S0
    VMUL.F32        S0, S0, S2
    VMOV            S2, R6
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


void __fastcall SquidRenderer::~SquidRenderer(SquidRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}
