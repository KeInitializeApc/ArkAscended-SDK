#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_SignIn.UI_Button_SignIn_C
class UUI_Button_SignIn_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Button_SingIn;                                     // 0x338(0x8)(Edit, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                Image_138;                                         // 0x340(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, ContainsInstancedReference)
	bool                                         IsLogedin;                                         // 0x348(0x1)(Edit, ConstParm, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BBB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSignInClicked;                                   // 0x350(0x10)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_SignIn_C* GetDefaultObj();

	void RemoveMenu();
	void BndEvt__SignIn_Button_20_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	bool ExecuteUbergraph_UI_Button_SignIn();
	void OnSignInClicked__DelegateSignature();
};

}


