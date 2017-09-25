

AgentRenderData *__fastcall AgentRenderData::AgentRenderData(AgentRenderData *this)
{
  AgentRenderData *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = getTimeMs();
  return v1;
}
