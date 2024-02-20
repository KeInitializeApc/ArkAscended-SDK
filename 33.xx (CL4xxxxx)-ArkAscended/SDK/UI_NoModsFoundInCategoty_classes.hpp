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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                IMG_NoModsBackground;                              // 0x338(0x8)(ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          VerBox_NoInstalledMods;                            // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_NoModsFoundInCategoty_C* GetDefaultObj();

	float Tick();
	int32 ExecuteUbergraph_UI_NoModsFoundInCategoty(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


