#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3A8 - 0x330)
// WidgetBlueprintGeneratedClass CustomMouseWidget.CustomMouseWidget_C
class UCustomMouseWidget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UImage*                                CircleArrowDown;                                   // 0x338(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowLeft;                                   // 0x340(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowRight;                                  // 0x348(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowUp;                                     // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleImage;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleReticule;                                    // 0x360(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing0;                                        // 0x368(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing1;                                        // 0x370(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing2;                                        // 0x378(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowDown;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowLeft;                                  // 0x388(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowRight;                                 // 0x390(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowUp;                                    // 0x398(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerImage;                                      // 0x3A0(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomMouseWidget_C* GetDefaultObj();

	double SetInnerRingScales(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2);
	double SetPointerColorAdd(class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue, float* CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	bool ShowReticule();
	void SetPointerScale(double* NewParam, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	bool SetArrowAlpha(double* LeftRightAlpha, double* UpDownAlpha, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7);
	void UseCircle();
	void UseArrow();
	void Construct();
	void ExecuteUbergraph_CustomMouseWidget(int32 EntryPoint);
};

}


