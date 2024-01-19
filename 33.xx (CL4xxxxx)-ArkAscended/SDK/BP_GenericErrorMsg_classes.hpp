#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass BP_GenericErrorMsg.BP_GenericErrorMsg_C
class UBP_GenericErrorMsg_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      NewAnimation;                                      // 0x338(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UButton*                               Button_Menu;                                       // 0x340(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x348(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_3;                                           // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                IMG_BG_1;                                          // 0x358(0x8)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_BG_3;                                          // 0x360(0x8)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Thumbnail;                                     // 0x368(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x370(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x378(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_GenericErrorMsg_C* GetDefaultObj();

	void Construct();
	struct FCFCoreError ErrorRespone();
	void PlayNotify();
	void BndEvt__BP_GenericErrorMsg_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class UUMGSequencePlayer* ExecuteUbergraph_BP_GenericErrorMsg(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCFCoreError& K2Node_CustomEvent_error, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
};

}


