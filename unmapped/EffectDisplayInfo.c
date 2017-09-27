

EffectDisplayInfo *__fastcall EffectDisplayInfo::EffectDisplayInfo(EffectDisplayInfo *this)
{
  EffectDisplayInfo *v1; // r4@1
  RectangleArea *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = 0;
  v2 = (EffectDisplayInfo *)((char *)this + 20);
  RectangleArea::RectangleArea((EffectDisplayInfo *)((char *)this + 4));
  RectangleArea::RectangleArea(v2);
  return v1;
}
