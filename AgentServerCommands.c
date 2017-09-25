

void __fastcall AgentServerCommands::setupStandardServer(Minecraft *a1)
{
  AgentServerCommands::setupStandardServer(a1);
}


void __fastcall AgentServerCommands::setupStandardServer(Minecraft *a1)
{
  MinecraftCommands *v1; // r0@1
  AgentCommand *v2; // r0@1
  CommandRegistry *v3; // r1@1

  v1 = (MinecraftCommands *)j_Minecraft::getCommands(a1);
  v2 = (AgentCommand *)j_MinecraftCommands::getRegistry(v1);
  j_j_j__ZN12AgentCommand5setupER15CommandRegistry(v2, v3);
}
