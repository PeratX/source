

int __fastcall DebugRenderer::DebugRenderer(int result)
{
  DebugRenderer::sInstance = result;
  DebugRenderer::sDebugEntity = 0;
  DebugRenderer::sDebugBlockPos = BlockPos::MAX;
  dword_27E3F34 = unk_2816260;
  dword_27E3F38 = dword_2816264;
  DebugRenderer::sDebugBlockEntity = 0;
  DebugRenderer::sDebugBlock = 0;
  return result;
}
