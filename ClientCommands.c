

void *__fastcall ClientCommands::setupStartMenuScreen(ClientCommands *this, MinecraftCommands *a2, MinecraftGame *a3)
{
  MinecraftCommands *v3; // r4@1
  int v4; // r0@1

  v3 = a2;
  v4 = MinecraftCommands::getRegistry(this);
  return j_j_j__ZN21CloseWebSocketCommand5setupER15CommandRegistryR13IMinecraftApp(v4, (int)v3 + 16);
}


void __fastcall ClientCommands::setupStandard(ClientCommands *this, MinecraftCommands *a2, MinecraftGame *a3, mce::TextureGroup *a4, LevelArchiver *a5, int a6, const ActiveDirectoryIdentity *a7)
{
  MinecraftCommands *v7; // r4@1
  CommandRegistry *v8; // r5@1
  bool v9; // r3@1
  CommandRegistry *v10; // r1@1

  v7 = a2;
  v8 = (CommandRegistry *)MinecraftCommands::getRegistry(this);
  CommandRegistry::popState(v8);
  CommandRegistry::pushState(v8);
  v7 = (MinecraftCommands *)((char *)v7 + 16);
  CloseWebSocketCommand::setup((int)v8, (int)v7);
  EnableEncryptionCommand::setup((int)v8, (int)v7);
  GetEduClientInfoCommand::setup(v8, (CommandRegistry *)a6, a5, v9);
  j_j_j__ZN25GetLocalPlayerNameCommand5setupER15CommandRegistry(v8, v10);
}


void __fastcall ClientCommands::setupStandard(ClientCommands *this, MinecraftCommands *a2, MinecraftGame *a3, mce::TextureGroup *a4, LevelArchiver *a5, int a6, const ActiveDirectoryIdentity *a7)
{
  ClientCommands::setupStandard(this, a2, a3, a4, a5, a6, a7);
}


void __fastcall ClientCommands::init(ClientCommands *this, CommandRegistry *a2, MinecraftGame *a3)
{
  ClientCommands *v3; // r4@1
  CommandRegistry *v4; // r1@1

  v3 = this;
  ClientCommand::setup(a2, a2);
  j_j_j__ZN11HelpCommand5setupER15CommandRegistry_0(v3, v4);
}


void __fastcall ClientCommands::init(ClientCommands *this, CommandRegistry *a2, MinecraftGame *a3)
{
  ClientCommands::init(this, a2, a3);
}
