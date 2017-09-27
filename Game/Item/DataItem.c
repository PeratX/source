

signed int __fastcall DataItem::isDataEqual(DataItem *this, const DataItem *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_BYTE *)this + 4);
  result = 0;
  if ( v2 == *((_BYTE *)a2 + 4) )
    result = 1;
  return result;
}
