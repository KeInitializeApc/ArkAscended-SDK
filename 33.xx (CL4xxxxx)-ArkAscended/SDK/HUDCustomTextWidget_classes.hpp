#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x350 - 0x330)
// WidgetBlueprintGeneratedClass HUDCustomTextWidget.HUDCustomTextWidget_C
class UHUDCustomTextWidget_C : public UPrimalUserWidget
{
public:
	class UImage*                                CustomIcon;                                        // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            CustomText;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            CustomText_Title;                                  // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                GamepadImage;                                      // 0x348(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UHUDCustomTextWidget_C* GetDefaultObj();

};

}


