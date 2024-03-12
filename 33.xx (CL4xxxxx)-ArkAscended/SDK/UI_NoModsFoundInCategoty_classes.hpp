#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass UI_NoModsFoundInCategoty.UI_NoModsFoundInCategoty_C
class UUI_NoModsFoundInCategoty_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                IMG_NoModsBackground;                              // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          VerBox_NoInstalledMods;                            // 0x340(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_NoModsFoundInCategoty_C* GetDefaultObj();

	float Tick(struct FGeometry* MyGeometry);
	void ExecuteUbergraph_UI_NoModsFoundInCategoty(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


