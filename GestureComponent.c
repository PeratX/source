

int __fastcall GestureComponent::GestureComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFEFC;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


void __fastcall GestureComponent::~GestureComponent(GestureComponent *this)
{
  GestureComponent::~GestureComponent(this);
}


int __fastcall GestureComponent::receive(UIComponent *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  UIComponent *v9; // r4@1
  UIControl *v10; // r0@8
  int v11; // r5@8
  UIControl *v12; // r0@8
  int v13; // r5@8
  UIControl *v14; // r0@8
  int v15; // r4@8
  int v16; // r1@8 OVERLAPPED
  const char *v17; // r2@8 OVERLAPPED
  UIControl *v18; // r0@10
  int v19; // r6@10
  UIControl *v20; // r0@10
  int v21; // r7@10
  UIControl *v22; // r0@10
  int v23; // r7@10
  UIControl *v24; // r0@10
  int v25; // r7@10
  UIControl *v26; // r0@10
  UIControl *v27; // r0@12
  int v28; // r6@12
  UIControl *v29; // r0@12
  int v30; // r7@12
  UIControl *v31; // r0@12
  int v32; // r7@12
  UIControl *v33; // r0@12
  int v34; // r7@12
  UIControl *v35; // r0@12
  int v36; // r4@12
  char v38; // [sp+4h] [bp-B4h]@8
  int v39; // [sp+Ch] [bp-ACh]@8
  const char *v40; // [sp+10h] [bp-A8h]@8
  int v41; // [sp+14h] [bp-A4h]@8
  int v42; // [sp+18h] [bp-A0h]@8
  const char *v43; // [sp+1Ch] [bp-9Ch]@8
  char v44; // [sp+20h] [bp-98h]@10
  int v45; // [sp+28h] [bp-90h]@8
  int v46; // [sp+2Ch] [bp-8Ch]@10
  const char *v47; // [sp+30h] [bp-88h]@10
  int v48; // [sp+34h] [bp-84h]@8
  int v49; // [sp+38h] [bp-80h]@10
  int v50; // [sp+3Ch] [bp-7Ch]@10
  const char *v51; // [sp+40h] [bp-78h]@10
  int v52; // [sp+44h] [bp-74h]@10
  int v53; // [sp+48h] [bp-70h]@10
  const char *v54; // [sp+4Ch] [bp-6Ch]@10
  int v55; // [sp+50h] [bp-68h]@10
  int v56; // [sp+54h] [bp-64h]@10
  const char *v57; // [sp+58h] [bp-60h]@10
  int v58; // [sp+5Ch] [bp-5Ch]@12
  int v59; // [sp+60h] [bp-58h]@12
  const char *v60; // [sp+64h] [bp-54h]@12
  int v61; // [sp+68h] [bp-50h]@12
  int v62; // [sp+6Ch] [bp-4Ch]@12
  const char *v63; // [sp+70h] [bp-48h]@12
  int v64; // [sp+74h] [bp-44h]@12
  int v65; // [sp+78h] [bp-40h]@12
  const char *v66; // [sp+7Ch] [bp-3Ch]@12
  int v67; // [sp+80h] [bp-38h]@12
  int v68; // [sp+84h] [bp-34h]@12
  const char *v69; // [sp+88h] [bp-30h]@12
  int v70; // [sp+8Ch] [bp-2Ch]@12
  int v71; // [sp+90h] [bp-28h]@12
  const char *v72; // [sp+94h] [bp-24h]@12

  v9 = this;
  if ( a5 == 14 )
  {
    if ( a6 != 3 )
      return 0;
    v10 = (UIControl *)UIComponent::getOwner(this);
    v11 = UIControl::getPropertyBag(v10);
    gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v42, (int)"#gesture_delta_source");
    v41 = 14;
    UIPropertyBag::set<int>(v11, v42, v43, &v41);
    v48 = a7;
    v12 = (UIControl *)UIComponent::getOwner(v9);
    v13 = UIControl::getPropertyBag(v12);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v39, (int)"#gesture_mouse_delta_x");
    UIPropertyBag::set<float>(v13, v39, v40, (int)&v48);
    v45 = a8;
    v14 = (UIControl *)UIComponent::getOwner(v9);
    v15 = UIControl::getPropertyBag(v14);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v38, (int)"#gesture_mouse_delta_y");
    *(_QWORD *)&v16 = *(_QWORD *)&v38;
LABEL_11:
    UIPropertyBag::set<float>(v15, v16, v17, (int)&v45);
    return 0;
  }
  if ( a5 == 3 )
    if ( !*((_BYTE *)this + 8) )
    v18 = (UIControl *)UIComponent::getOwner(this);
    v19 = UIControl::getPropertyBag(v18);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v56, (int)"#gesture_mouse_delta_x");
    v55 = 0;
    UIPropertyBag::set<int>(v19, v56, v57, &v55);
    v20 = (UIControl *)UIComponent::getOwner(v9);
    v21 = UIControl::getPropertyBag(v20);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v53, (int)"#gesture_mouse_delta_y");
    v52 = 0;
    UIPropertyBag::set<int>(v21, v53, v54, &v52);
    v22 = (UIControl *)UIComponent::getOwner(v9);
    v23 = UIControl::getPropertyBag(v22);
    gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v50, (int)"#gesture_delta_source");
    v49 = 3;
    UIPropertyBag::set<int>(v23, v50, v51, &v49);
    v48 = a8;
    v24 = (UIControl *)UIComponent::getOwner(v9);
    v25 = UIControl::getPropertyBag(v24);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v46, (int)"#gesture_mouse_delta_x");
    UIPropertyBag::set<float>(v25, v46, v47, (int)&v48);
    v45 = a9;
    v26 = (UIControl *)UIComponent::getOwner(v9);
    v15 = UIControl::getPropertyBag(v26);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v44, (int)"#gesture_mouse_delta_y");
    *(_QWORD *)&v16 = *(_QWORD *)&v44;
    goto LABEL_11;
  if ( a5 == 1 )
    *((_BYTE *)this + 8) = 0;
    if ( (signed __int16)a6 == *((_WORD *)this + 5) )
    {
      if ( (a7 & 0xFF00) == 256 )
      {
        *((_BYTE *)this + 8) = 1;
      }
      else
        v27 = (UIControl *)UIComponent::getOwner(this);
        v28 = UIControl::getPropertyBag(v27);
        gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v71, (int)"#gesture_mouse_delta_x");
        v70 = 0;
        UIPropertyBag::set<int>(v28, v71, v72, &v70);
        v29 = (UIControl *)UIComponent::getOwner(v9);
        v30 = UIControl::getPropertyBag(v29);
        gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v68, (int)"#gesture_mouse_delta_y");
        v67 = 0;
        UIPropertyBag::set<int>(v30, v68, v69, &v67);
        v31 = (UIControl *)UIComponent::getOwner(v9);
        v32 = UIControl::getPropertyBag(v31);
        gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v65, (int)"#gesture_delta_source");
        v64 = 1;
        UIPropertyBag::set<int>(v32, v65, v66, &v64);
        v33 = (UIControl *)UIComponent::getOwner(v9);
        v34 = UIControl::getPropertyBag(v33);
        gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v62, (int)"#gesture_mouse_delta_x");
        v61 = 0;
        UIPropertyBag::set<int>(v34, v62, v63, &v61);
        v35 = (UIControl *)UIComponent::getOwner(v9);
        v36 = UIControl::getPropertyBag(v35);
        gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v59, (int)"#gesture_mouse_delta_y");
        v58 = 0;
        UIPropertyBag::set<int>(v36, v59, v60, &v58);
    }
  return 0;
}


int __fastcall GestureComponent::clone(GestureComponent *this, UIControl *a2, UIControl *a3)
{
  GestureComponent *v3; // r4@1
  UIControl *v4; // r7@1
  UIControl *v5; // r5@1
  UIComponent *v6; // r6@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0xCu);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26DFEFC;
  *((_BYTE *)v6 + 8) = 0;
  result = *((_WORD *)v5 + 5);
  *((_WORD *)v6 + 5) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall GestureComponent::~GestureComponent(GestureComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall GestureComponent::setTrackpadButtonId(int result, __int16 a2)
{
  *(_WORD *)(result + 10) = a2;
  return result;
}


int __fastcall GestureComponent::reset(int result)
{
  *(_BYTE *)(result + 8) = 0;
  return result;
}
