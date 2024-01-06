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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UImage*                                CircleArrowDown;                                   // 0x338(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowLeft;                                   // 0x340(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowRight;                                  // 0x348(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowUp;                                     // 0x350(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleImage;                                       // 0x358(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                CircleReticule;                                    // 0x360(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing0;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing1;                                        // 0x370(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing2;                                        // 0x378(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowDown;                                  // 0x380(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowLeft;                                  // 0x388(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowRight;                                 // 0x390(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowUp;                                    // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                PointerImage;                                      // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomMouseWidget_C* GetDefaultObj();

	void SetInnerRingScales(double* Scale0, double* Scale1, double* Scale2, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_2);
	double SetPointerColorAdd(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void ShowReticule(bool* Show);
	void SetPointerScale(double NewParam, struct FVector2D* CallFunc_MakeVector2D_ReturnValue);
	void SetArrowAlpha(double LeftRightAlpha, double* UpDownAlpha, bool* UseArrow, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7);
	void UseCircle();
	void UseArrow();
	void Construct();
	void ExecuteUbergraph_CustomMouseWidget(int32* EntryPoint);
};

}


