#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass OptionSelector_Widget.OptionSelector_Widget_C
class UOptionSelector_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               CustomButton_HUB_ASA_C_40;                         // 0x338(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, DuplicateTransient, RepNotify, EditorOnly)
	class UImage*                                Image;                                             // 0x340(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_36;                                          // 0x348(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UTextBlock*                            Text;                                              // 0x350(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UTexture2D*                            Icon;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UOptionSelector_Widget_C* GetDefaultObj();

	void BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool InitOption(class UTexture2D* Icon, class FText* InText);
	bool ExecuteUbergraph_OptionSelector_Widget(int32* EntryPoint, class UTexture2D* K2Node_CustomEvent_Icon, bool* K2Node_CustomEvent_IsToggled, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GetToggledState_ReturnValue);
};

}


