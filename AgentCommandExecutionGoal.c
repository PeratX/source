

void __fastcall AgentCommandExecutionGoal::~AgentCommandExecutionGoal(AgentCommandExecutionGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall AgentCommandExecutionGoal::canUse(AgentCommandExecutionGoal *this)
{
  AgentCommandComponent *v1; // r0@1
  int result; // r0@2

  v1 = (AgentCommandComponent *)Entity::getAgentCommandComponent(*((Entity **)this + 2));
  if ( v1 )
    result = AgentCommandComponent::hasCommand(v1) & 1;
  else
    result = 0;
  return result;
}


Goal *__fastcall AgentCommandExecutionGoal::AgentCommandExecutionGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  Goal::Goal(a1);
  *(_DWORD *)v3 = &off_26EDCC0;
  *((_DWORD *)v3 + 2) = v2;
  Goal::setRequiredControlFlags(v3, 2);
  return v3;
}


void __fastcall AgentCommandExecutionGoal::~AgentCommandExecutionGoal(AgentCommandExecutionGoal *this)
{
  AgentCommandExecutionGoal::~AgentCommandExecutionGoal(this);
}


int __fastcall AgentCommandExecutionGoal::stop(AgentCommandExecutionGoal *this)
{
  AgentCommandExecutionGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 2) + 488))();
  if ( result == 312 )
    result = j_j_j__ZN5Agent15stopCommandModeEv(*((Agent **)v1 + 2));
  return result;
}


int __fastcall AgentCommandExecutionGoal::start(AgentCommandExecutionGoal *this)
{
  AgentCommandExecutionGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 2) + 488))();
  if ( result == 312 )
    result = j_j_j__ZN5Agent16startCommandModeEv(*((Agent **)v1 + 2));
  return result;
}


int __fastcall AgentCommandExecutionGoal::canInterrupt(AgentCommandExecutionGoal *this)
{
  return 0;
}
