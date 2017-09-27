

char *__fastcall BehaviorTreeDefinition::getStringInput(BehaviorTreeDefinition *this)
{
  return (char *)this + 4;
}


int *__fastcall BehaviorTreeDefinition::BehaviorTreeDefinition(int *a1, int *a2)
{
  int *result; // r0@1

  result = sub_21E8AF4(a1, a2);
  *(_QWORD *)(result + 1) = (unsigned int)&unk_28898CC;
  return result;
}
