

MinecraftGame *__fastcall DevAssertConsoleListener::print(int a1, int *a2)
{
  MinecraftGame *result; // r0@1
  int *v3; // r4@1
  int v4; // r0@2

  result = *(MinecraftGame **)(a1 + 4);
  v3 = a2;
  if ( result )
  {
    v4 = MinecraftGame::getPrimaryGuiData(result);
    result = (MinecraftGame *)j_j_j__ZN7GuiData20addDevConsoleMessageERKSs_0(v4, v3);
  }
  return result;
}
