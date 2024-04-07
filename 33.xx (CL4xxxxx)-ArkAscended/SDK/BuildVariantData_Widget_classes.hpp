#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass BuildVariantData_Widget.BuildVariantData_Widget_C
class UBuildVariantData_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetSwitcher*                       GamepadSwitcher;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GamepadUse;                                        // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                Image_3;                                           // 0x348(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UHorizontalBox*                        SelectedBox;                                       // 0x350(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                SelectedImage;                                     // 0x358(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                StructureIcon;                                     // 0x360(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            UseKeyString;                                      // 0x368(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            UseKeyString_1;                                    // 0x370(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            UseKeyString_2;                                    // 0x378(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)

	static class UClass* StaticClass();
	static class UBuildVariantData_Widget_C* GetDefaultObj();

	void UpdateData(class UTexture2D* Icon, bool* Selected, bool* Gamepad, class UTexture2D** GamepadTexture, const class FString& KBMKey);
	int32 ExecuteUbergraph_BuildVariantData_Widget(int32* EntryPoint, class UTexture2D* K2Node_CustomEvent_Icon, bool K2Node_CustomEvent_Selected, bool* K2Node_CustomEvent_Gamepad, class UTexture2D* K2Node_CustomEvent_GamepadTexture, const class FString& K2Node_CustomEvent_KBMKey, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
};

}


