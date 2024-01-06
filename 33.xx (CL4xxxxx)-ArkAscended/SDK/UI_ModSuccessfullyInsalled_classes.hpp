#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x511 (0x841 - 0x330)
// WidgetBlueprintGeneratedClass UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C
class UUI_ModSuccessfullyInsalled_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      PopIn;                                             // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x340(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_47;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x350(0x8)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x358(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x360(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x368(0x480)(BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  MessageText;                                       // 0x7E8(0x18)(ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x800(0x10)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           NameColor;                                         // 0x810(0x14)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSlateColor                           MessageColor;                                      // 0x824(0x14)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x838(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AnimationFinished;                                 // 0x840(0x1)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModSuccessfullyInsalled_C* GetDefaultObj();

	void OnClicked();
	class UTexture2DDynamic* OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23();
	class UTexture2DDynamic* OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23();
	bool PreConstruct();
	void BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Pop_in_animation(struct FInstallProgressMod* Mod_Info);
	void Event_Init();
	void ExitAnimation();
	void EnterAnimation();
	void ResetClick();
	void RequestExit();
	bool ExecuteUbergraph_UI_ModSuccessfullyInsalled(int32 EntryPoint, class FText* CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue);
};

}


