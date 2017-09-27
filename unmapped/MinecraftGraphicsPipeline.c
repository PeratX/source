

mce::Texture *__fastcall MinecraftGraphicsPipeline::MinecraftGraphicsPipeline(mce::Texture *a1)
{
  mce::Texture *v1; // r4@1

  v1 = a1;
  mce::Texture::Texture(a1);
  mce::Texture::Texture((mce::Texture *)((char *)v1 + 64));
  return v1;
}
