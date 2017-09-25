

char *__fastcall SoundItem::getSoundName(SoundItem *this)
{
  return (char *)this + 4;
}


int __fastcall SoundItem::getLoaded(SoundItem *this)
{
  return *(_BYTE *)this;
}


int __fastcall SoundItem::setLoaded(int result, bool a2)
{
  *(_BYTE *)result = a2;
  return result;
}
