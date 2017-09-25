

_DWORD *__fastcall ShulkerBodyControl::ShulkerBodyControl(BodyControl *a1, Mob *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_BodyControl::BodyControl(a1, a2);
  *result = &off_271A584;
  return result;
}
