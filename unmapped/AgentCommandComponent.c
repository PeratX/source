

int __fastcall AgentCommandComponent::initFromDefinition(AgentCommandComponent *this, float a2)
{
  AgentCommandComponent *v2; // r4@1
  int result; // r0@1

  v2 = this;
  *(_DWORD *)(*(_DWORD *)this + 124) = mce::Math::snapRotationToCardinal(*(mce::Math **)(*(_DWORD *)this + 124), a2);
  result = *(_DWORD *)v2;
  *(_DWORD *)(*(_DWORD *)v2 + 120) = 0;
  return result;
}


int __fastcall AgentCommandComponent::tick(AgentCommandComponent *this)
{
  AgentCommandComponent *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@2
  int v4; // r2@2
  int v5; // r0@3
  int result; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = (*(int (**)(void))(*(_DWORD *)v2 + 12))();
    v4 = **((_DWORD **)v1 + 1);
    if ( v3 == 1 )
    {
      (*(void (**)(void))(v4 + 20))();
      v5 = *((_DWORD *)v1 + 1);
      *((_DWORD *)v1 + 1) = 0;
      if ( v5 )
        (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      result = Agent::getMoveSpeedScalar(*(Agent **)v1);
      __asm
      {
        VMOV.F32        S0, #10.0
        VMOV            S2, R0
        VDIV.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VSTR            S0, [R4,#8]
      }
    }
    else
      result = (*(int (**)(void))(v4 + 16))();
  }
  else
    result = *((_DWORD *)v1 + 2);
    if ( result >= 1 )
      *((_DWORD *)v1 + 2) = --result;
  return result;
}


signed int __fastcall AgentCommandComponent::addCommand(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@1
  signed int result; // r0@3
  int v6; // r0@4
  int v7; // r1@4

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 && (*(int (**)(void))(*(_DWORD *)v4 + 12))() != 1 )
  {
    result = 0;
  }
  else
    v6 = *v3;
    *v3 = 0;
    v7 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 4) = v6;
    if ( v7 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
      v6 = *(_DWORD *)(v2 + 4);
    }
    (*(void (**)(void))(*(_DWORD *)v6 + 8))();
    result = 1;
  return result;
}


int __fastcall AgentCommandComponent::AgentCommandComponent(int result, unsigned int a2)
{
  *(_QWORD *)result = a2;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall AgentCommandComponent::getEntity(AgentCommandComponent *this)
{
  return *(_DWORD *)this;
}


signed int __fastcall AgentCommandComponent::hasCommand(AgentCommandComponent *this)
{
  signed int result; // r0@2
  int v2; // r1@3

  if ( *((_DWORD *)this + 1) )
  {
    result = 1;
  }
  else
    v2 = *((_DWORD *)this + 2);
    result = 0;
    if ( v2 > 0 )
      result = 1;
  return result;
}
