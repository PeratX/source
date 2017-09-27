

int __fastcall ClientCommand::setup(int result, MinecraftGame *a2)
{
  ClientCommand::mGame = (MinecraftGame *)result;
  return result;
}
