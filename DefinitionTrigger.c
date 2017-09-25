

int __fastcall DefinitionTrigger::canTrigger(DefinitionTrigger *this, const Entity *a2, const VariantParameterList *a3)
{
  return j_j_j__ZNK17EntityFilterGroup8evaluateERK6EntityRK20VariantParameterList_0(
           (DefinitionTrigger *)((char *)this + 8),
           a2,
           a3);
}


int *__fastcall DefinitionTrigger::DefinitionTrigger(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v3 + 1, v2 + 1);
  FilterGroup::FilterGroup((int)(v3 + 2), (int)(v2 + 2));
  v3[2] = (int)&off_26F1930;
  return v3;
}
