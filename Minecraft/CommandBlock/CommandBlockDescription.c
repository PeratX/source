

void *__fastcall CommandBlockDescription::getDescription(CommandBlockDescription *this)
{
  return &unk_257BC67;
}


void *__fastcall CommandBlockDescription::getJsonName(CommandBlockDescription *this)
{
  return &unk_257BC67;
}


void __fastcall CommandBlockDescription::parseData(CommandBlockDescription *this, Json::Value *a2, int a3, int a4, bool a5)
{
  CommandBlockDescription::parseData(this, a2, a3, a4, a5);
}


void __fastcall CommandBlockDescription::parseData(CommandBlockDescription *this, Json::Value *a2, int a3, int a4, bool a5)
{
  Json::Value *v5; // r4@1
  CommandBlockDescription *v6; // r5@1
  int v7; // ST00_4@1
  int v8; // [sp+0h] [bp-10h]@0

  v5 = a2;
  v6 = this;
  Parser::parse(a2, (CommandBlockDescription *)((char *)this + 8), (int *)"ticks_per_command", (const char *)1, v8);
  Parser::parse(v5, (CommandBlockDescription *)((char *)v6 + 4), (int *)"current_tick_count", 0, v7);
  j_j_j__ZN6Parser5parseERKN4Json5ValueERbPKcb_0(
    v5,
    (CommandBlockDescription *)((char *)v6 + 12),
    (bool *)"ticking",
    0,
    a5);
}
