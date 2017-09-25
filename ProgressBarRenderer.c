

int __fastcall ProgressBarRenderer::setPrimaryColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = v3;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = v5;
  return result;
}


signed int __fastcall ProgressBarRenderer::render(ProgressBarRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r5@1
  ProgressBarRenderer *v7; // r8@1
  MinecraftUIRenderContext *v8; // r6@1
  int v9; // r7@1
  int v10; // r0@1
  float v11; // r11@1
  GuiData *v12; // r9@1
  Json::Value *v13; // r7@1
  const char *v14; // r4@1
  signed int result; // r0@1
  Json::Value *v16; // r0@3
  Json::Value *v17; // r4@3
  const char *v18; // r10@5
  int v23; // r0@7
  Json::Value *v24; // r0@8
  Json::Value *v25; // r4@8
  signed int v26; // r0@8
  const char *v28; // r4@10
  Json::Value *v29; // r4@12
  signed int v31; // r10@15
  Json::Value *v32; // r4@17
  Json::Value *v33; // r4@23
  signed int v34; // r0@24
  float v35; // r1@26
  int v36; // r2@26
  int v37; // r3@26
  signed int v38; // r1@26
  int v39; // r2@26
  int v40; // r3@26
  int v46; // r0@28
  int v48; // r0@28
  signed int v49; // r4@28
  int v54; // r7@30
  void *v57; // r4@34
  int v58; // r0@34
  int *v59; // r1@34
  ScreenRenderer *v60; // r0@34
  int v61; // r2@38
  void *v62; // r0@38
  ScreenRenderer *v63; // r0@38
  void *v64; // r0@38
  float v65; // ST00_4@38
  float v66; // ST04_4@38
  int v68; // ST00_4@38
  float v69; // [sp+0h] [bp-D8h]@0
  float v70; // [sp+4h] [bp-D4h]@0
  int v71; // [sp+Ch] [bp-CCh]@28
  signed int v72; // [sp+10h] [bp-C8h]@26
  int v73; // [sp+14h] [bp-C4h]@28
  char v74; // [sp+18h] [bp-C0h]@38
  float v75; // [sp+28h] [bp-B0h]@26
  int v76; // [sp+2Ch] [bp-ACh]@26
  int v77; // [sp+30h] [bp-A8h]@26
  int v78; // [sp+34h] [bp-A4h]@26
  float v79; // [sp+38h] [bp-A0h]@26
  signed int v80; // [sp+3Ch] [bp-9Ch]@26
  int v81; // [sp+40h] [bp-98h]@26
  int v82; // [sp+44h] [bp-94h]@26
  float v83; // [sp+48h] [bp-90h]@26
  float v84; // [sp+4Ch] [bp-8Ch]@26
  int v85; // [sp+50h] [bp-88h]@26
  int v86; // [sp+54h] [bp-84h]@26
  char v87; // [sp+58h] [bp-80h]@10
  const char *v88; // [sp+5Ch] [bp-7Ch]@10
  char v89; // [sp+60h] [bp-78h]@5
  const char *v90; // [sp+64h] [bp-74h]@5
  char v91; // [sp+68h] [bp-70h]@1
  const char *v92; // [sp+6Ch] [bp-6Ch]@1

  v6 = a4;
  v7 = this;
  v8 = a2;
  v9 = UIControl::getPropertyBag(a4);
  v10 = MinecraftUIRenderContext::getScreenContext(v8);
  v11 = *(float *)&v10;
  v12 = *(GuiData **)(v10 + 24);
  gsl::basic_string_span<char const,-1>::remove_z<22u>((int)&v91, (int)"#progress_bar_visible");
  v13 = (Json::Value *)(v9 + 8);
  v14 = v92;
  result = Json::Value::isNull(v13);
  if ( !result )
  {
    result = Json::Value::isObject(v13);
    if ( result == 1 )
    {
      v16 = (Json::Value *)Json::Value::operator[]((int)v13, v14);
      v17 = v16;
      result = Json::Value::isBool(v16);
      if ( result == 1 )
      {
        result = Json::Value::asBool(v17, 0);
        if ( result == 1 )
        {
          gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&v89, (int)"#progress_bar_total_amount");
          v18 = v90;
          Json::Value::isNull(v13);
          __asm
          {
            VLDR            S16, =0.0
            VMOV.F32        S18, S16
          }
          if ( _ZF )
            v23 = Json::Value::isObject(v13);
            __asm { VMOV.F32        S18, S16 }
            if ( v23 == 1 )
            {
              v24 = (Json::Value *)Json::Value::operator[]((int)v13, v18);
              v25 = v24;
              v26 = Json::Value::isNumeric(v24);
              __asm { VMOV.F32        S18, S16 }
              if ( v26 == 1 )
              {
                _R0 = Json::Value::asFloat(v25, 0.0);
                __asm { VMOV            S18, R0 }
              }
            }
          gsl::basic_string_span<char const,-1>::remove_z<29u>((int)&v87, (int)"#progress_bar_current_amount");
          v28 = v88;
          if ( !Json::Value::isNull(v13) && Json::Value::isObject(v13) == 1 )
            v29 = (Json::Value *)Json::Value::operator[]((int)v13, v28);
            if ( Json::Value::isNumeric(v29) == 1 )
              _R0 = Json::Value::asFloat(v29, 0.0);
              __asm { VMOV            S16, R0 }
          if ( Json::Value::isNull(v13) )
            v31 = 0;
          else if ( Json::Value::isObject(v13) == 1 )
            v32 = (Json::Value *)Json::Value::operator[]((int)v13, "is_durability");
            if ( Json::Value::isBool(v32) == 1 )
              v31 = Json::Value::asBool(v32, 0);
            else
              v31 = 0;
          else
          if ( Json::Value::isNull(v13)
            || Json::Value::isObject(v13) != 1
            || (v33 = (Json::Value *)Json::Value::operator[]((int)v13, "round_value"), Json::Value::isBool(v33) != 1) )
            v34 = 0;
            v34 = Json::Value::asBool(v33, 0);
          v72 = v34;
          v35 = *((float *)v7 + 3);
          v36 = *((_DWORD *)v7 + 4);
          v37 = *((_DWORD *)v7 + 5);
          __asm { VDIV.F32        S24, S16, S18 }
          v83 = *((float *)v7 + 2);
          v84 = v35;
          v85 = v36;
          v86 = v37;
          v38 = *((_DWORD *)v7 + 7);
          v39 = *((_DWORD *)v7 + 8);
          v40 = *((_DWORD *)v7 + 9);
          v79 = *((float *)v7 + 6);
          v80 = v38;
          v81 = v39;
          v82 = v40;
          v75 = Color::BLACK;
          v76 = unk_283E634;
          v77 = unk_283E638;
          v78 = *((_DWORD *)v7 + 1);
          _R0 = UIControl::getPosition(v6);
          __asm { VLDR            S16, [R0] }
          __asm { VLDR            S22, [R0,#4] }
          _R0 = UIControl::getSize(v6);
            VMOV.F32        S20, #1.0
            VLDR            S26, [R0]
            VMOV            R4, S16
            VADD.F32        S0, S26, S20
          if ( !_ZF )
            __asm { VMOVNE.F32      S26, S0 }
            VMUL.F32        S18, S26, S24
            VADD.F32        S28, S18, S16
          __asm { VLDR            S30, [R0,#4] }
          v46 = GuiData::floorAlignToScreenPixel(v12, _R4);
          __asm { VMOV            R1, S28 }
          v73 = v46;
          v48 = GuiData::floorAlignToScreenPixel(v12, _R1);
          __asm { VADD.F32        S0, S30, S20 }
          v71 = v48;
          v49 = v31;
          __asm { VMOV            R7, S22 }
            __asm { VMOVNE.F32      S30, S0 }
            VADD.F32        S0, S26, S16
            VADD.F32        S2, S30, S22
            VMOV            R1, S0
            VMOV            R5, S2
          _R10 = GuiData::floorAlignToScreenPixel(v12, _R1);
          v54 = GuiData::floorAlignToScreenPixel(v12, _R7);
          _R0 = GuiData::floorAlignToScreenPixel(v12, _R5);
          if ( v72 == 1 )
            __asm
              VCVTR.S32.F32   S0, S18
              VCVT.F32.S32    S0, S0
              VADD.F32        S18, S0, S16
            _R1 = v71;
            __asm { VMOV            S18, R1 }
            VMOV            S22, R10
            VMOV            S16, R0
          if ( v49 )
              VSUB.F32        S2, S20, S24
              VMOV.F32        S0, #0.25
              VSTR            S2, [SP,#0xD8+var_90]
              VMUL.F32        S0, S2, S0
              VSTR            S24, [SP,#0xD8+var_8C]
            v85 = 0;
            v86 = 1065353216;
            __asm { VSTR            S0, [SP,#0xD8+var_A0] }
            v80 = 1048576000;
            v81 = 0;
            v82 = 1065353216;
            v57 = ScreenRenderer::singleton(0);
            v58 = MinecraftUIRenderContext::getScreenContext(v8);
              VSTR            S16, [SP,#0xD8+var_D4]
              VSTR            S22, [SP,#0xD8+var_D8]
            ScreenRenderer::fill(*(float *)&v57, *(float *)&v58, v73, *(float *)&v54, v69, v70, (const Color *)&v75);
              VSUB.F32        S2, S22, S18
              VMOV.F32        S0, #-1.0
            v59 = &v82;
            v60 = (ScreenRenderer *)&v86;
              VCMPE.F32       S2, S20
              VMRS            APSR_nzcv, FPSCR
              VADD.F32        S4, S22, S0
              VADD.F32        S16, S16, S0
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S18, S22 }
            __asm { VMOV.F32        S22, S4 }
          v61 = *((_DWORD *)v7 + 1);
          *v59 = v61;
          *(_DWORD *)v60 = v61;
          v62 = ScreenRenderer::singleton(v60);
            VSTR            S16, [SP,#0xD8+var_D4]
            VSTR            S22, [SP,#0xD8+var_D8]
          v63 = (ScreenRenderer *)ScreenRenderer::fill(
                                    *(float *)&v62,
                                    v11,
                                    v73,
                                    *(float *)&v54,
                                    v69,
                                    v70,
                                    (const Color *)&v79);
          v64 = ScreenRenderer::singleton(v63);
            VSTR            S18, [SP,#0xD8+var_D8]
          ScreenRenderer::fill(*(float *)&v64, v11, v73, *(float *)&v54, v65, v66, (const Color *)&v83);
            VMOV            R3, S22
            VSTR            S16, [SP,#0xD8+var_D8]
          RectangleArea::RectangleArea(COERCE_FLOAT(&v74), v73, v54, _R3, v68);
          result = RectangleArea::operator=((int)a6, (int)&v74);
        }
      }
    }
  }
  return result;
}


_QWORD *__fastcall ProgressBarRenderer::ProgressBarRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1
  __int64 v2; // r1@1
  _QWORD *v3; // r12@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  HIDWORD(v2) = 1065353216;
  v3 = result + 2;
  *(_DWORD *)result = &off_26E0694;
  LODWORD(v2) = 0;
  result[1] = v2;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 1065353216;
  *((_DWORD *)v3 + 2) = 1050253722;
  *((_DWORD *)result + 7) = 1050253722;
  *((_DWORD *)result + 8) = 1050253722;
  *((_DWORD *)result + 9) = 1065353216;
  return result;
}


int __fastcall ProgressBarRenderer::setSecondaryColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 24) = v2;
  *(_DWORD *)(result + 28) = v3;
  *(_DWORD *)(result + 32) = v4;
  *(_DWORD *)(result + 36) = v5;
  return result;
}


void __fastcall ProgressBarRenderer::~ProgressBarRenderer(ProgressBarRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall ProgressBarRenderer::~ProgressBarRenderer(ProgressBarRenderer *this)
{
  ProgressBarRenderer::~ProgressBarRenderer(this);
}


int __fastcall ProgressBarRenderer::clone(ProgressBarRenderer *this)
{
  ProgressBarRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI19ProgressBarRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}
