#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// WidgetBlueprintGeneratedClass UI_PaginationLeftRight.UI_PaginationLeftRight_C
class UUI_PaginationLeftRight_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_PrevPage;                                   // 0x338(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PrevPage;                                      // 0x340(0x8)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x348(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_PaginationLeftRight_C* GetDefaultObj();

	void BndEvt__UI_PaginationLeftRight_Button_PrevPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_UI_PaginationLeftRight();
	void OnClick__DelegateSignature();
};

}


